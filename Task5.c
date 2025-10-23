#include<stdio.h>

int main(){
    int a[10];
    int i,max,min,diff;

    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }

    max = min = a[0];  

    for(i = 1; i < 10; i++){
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }
    diff = max - min;
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    printf("Difference = %d\n", diff);

    return 0;
}
