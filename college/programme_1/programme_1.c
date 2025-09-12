    #include<stdio.h>
    int main() {
        unsigned int total, grade, counter;
        float average;
        total = 0;
        counter = 0;
        printf("enter the grade,-1 to get average: ");
        scanf("%u", &grade);
        while (grade!=-1) {
            printf("Enter grade,-1 to get average: ");
            scanf("%u", &grade);
            total += grade;
            counter=counter + 1;
        }
        if (counter == 0) {
            printf("No grades entered.\n");
            return 0;
        }
        average = (float)total / counter;
        printf("Average age: %.2f\n", average);
    }