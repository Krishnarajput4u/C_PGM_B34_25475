#include<stdio.h>
typedef struct Student {
    int id;
    char name[50];
    float marks;
} Student;

void addStudent() {
    Student s;
    FILE *fp =fopen("students.dat", "ab");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }
    printf("Enter Student ID: ");
    scanf("%d", &s.id);
    printf("Enter Student Name: ");
    scanf("%s", s.name);
    printf("Enter Student Marks: ");
    scanf("%f", &s.marks);
    fwrite(&s, sizeof(Student), 1, fp);
    fclose(fp);
    printf("Student added successfully!\n");
}  
void displayStudents() {
    Student s;
    FILE *fp = fopen("students.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }
    printf("\n--- Student List ---\n");
    while (fread(&s, sizeof(Student), 1, fp)) {
        printf("ID: %d, Name: %s, Marks: %.2f\n", s.id, s.name, s.marks);
    }
    fclose(fp);
    printf("---------------------\n");
}
int main(){
    while(1){
        printf("--- Student Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        int choice; 
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}