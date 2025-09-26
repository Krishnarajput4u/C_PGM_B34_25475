
#include <stdio.h>
#include <string.h>

int main() {
    int num=9,guessthenum;
    do{
        printf("Guess the number Between 1 to 10\n");
        scanf("%d",&guessthenum);
        if(guessthenum==num){
            printf("Correct guess ,Hoorayy !!");
            break;
        }
    }
    while(guessthenum!=num);
    return 0;
}
