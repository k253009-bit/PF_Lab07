#include<stdio.h>

int main(){
    char str[50];
    int i, v = 0, c = 0;

    printf("Enter a word: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++){
        char ch = str[i];
        if(ch >= 'A' && ch <= 'Z')
            ch += 32;
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            v++;
        else if (ch >= 'a' && ch <= 'z')
            c++;
    }
    printf("Number of vowels = %d\n", v);
    printf("Number of consonants = %d\n", c);

    return 0;
}
