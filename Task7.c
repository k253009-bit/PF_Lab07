#include<stdio.h>

int main(){
    int arr[10], x[100] = {0};
    int i;

    printf("Enter 10 integers: ");
    for (i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
        if (x[arr[i]] == 0){
            x[arr[i]] = 1; 
        } else {
            arr[i] = -1;       
        }
    }

    printf("Updated array: ");
    for (i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
