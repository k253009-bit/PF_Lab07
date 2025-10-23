#include<stdio.h>

int main(){
    char str[100];
    int i;

    printf("Enter characters: ");
    scanf("%[^\n]", str); 

    printf("\nNon-alphabetic characters: ");
    for(i=0; str[i] != '\0'; i++){
        if(!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i]<= 'z')))
            printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}


