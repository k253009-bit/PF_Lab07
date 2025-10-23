#include<stdio.h>

int main(){
    char str[100];
    int i;

    printf("Enter characters (non-alphabets will be accepted): ");
    scanf("%[^A-Za-z]", str);  

    printf("\nYou entered the following non-alphabetic characters:\n");

    for(i=0; str[i]!='\0'; i++){
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}
