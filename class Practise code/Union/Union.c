/*
union s_name{
    char FN[50];
    char MN[50];
    char LN[50];
};

union s_name s1,s2,s3,s4;
strcpy(s1.FN,"John");
strcpy(s2.MN,"Michael");
strcpy(s3.LN,"Doe");
printf("First Name: %s\n",s1.FN);
printf("Middle Name: %s\n",s2.MN);
printf("Last Name: %s\n",s3.LN);
*/
#include <stdio.h>
#include <string.h>

union s_name {
    char FN[50];
    char MN[50];
    char LN[50];
};
//Question : How memory is allocated in union with multiple members?
/*employ id 
contact number 

*/
int main() {
    union s_name s1, s2, s3;
    // Assigning and printing values,if we assign to one member, others get overwritten.
    strcpy(s1.FN, "John");
    printf("First Name: %s\n", s1.FN);
    strcpy(s1.MN, "Michael");
    printf("Middle Name: %s\n", s1.MN);
    strcpy(s1.LN, "Doe");
    printf("Last Name: %s\n", s1.LN);

    //printf(" %s %s %s\n", s1.FN ,s1.MN,s1.LN);

    return 0;
}
