//
#include <stdio.h>
#include<string.h>
int main() {
    char text[50];
    
    printf("Enter the text : ");
    fgets(text,sizeof(text),stdin);
    text[strcspn(text,"\n")]='\0';
    int size=strlen(text);
    int arr[size];
    
    for(int i=0;text[i]!='\0';i++){
        int count=0;
        for(int j=i+1;text[j]!='\0';j++){
            if(text[j]!=text[i])
                ++count;
            else
                break;
        }
        arr[i]=count;
    }
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    printf("%d",max+1);
    return 0;
}