#include <stdio.h>

int main(){
    int arr[10], n, count = 0;

    printf("Enter 10 numbers: ");
    for (int i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter a number to be searched: ");
    scanf("%d", &n);

    for (int i=0; i<10; i++){
        if (arr[i] == n){
            count++;
        }
    }
    if (count > 0){
        printf("Number %d occurred %d times\n", n, count);
    } else{
        printf("Number not found\n");
    }

    return 0;
}
