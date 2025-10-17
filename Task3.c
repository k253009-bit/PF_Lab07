#include<stdio.h>

int main(){
    int pMarks[10], fMarks[10];
    int pCount = 0, fCount = 0,m, i;
    float pAvg = 0, fAvg = 0;

    while (1){
        printf("Enter marks for students: ");
        scanf("%d", &m);

        if (m == -1){
            break;
        }

        if (m >= 5 && m <= 10){
            pMarks[pCount++] =m;
            pAvg +=m;
        } else if (m >= 0 &&m < 5){
            fMarks[fCount++] =m;
            fAvg +=m;
        } else{
            printf("Invalidm entered. Please enter marks between 0 and 10.\n");
        }
    }

    if (pCount> 0){
        pAvg /= pCount;
    }
    if (fCount > 0){
        fAvg /= fCount;
    }

    printf("\nPassed Students marks: ");
    for (i=0; i<pCount; i++){
        printf("%d ", pMarks[i]);
    }
    printf("\nAverage for Passed Students: %.2f\n", pAvg);

    printf("\nFailed Student marks: ");
    for (i=0; i<fCount; i++){
        printf("%d ", fMarks[i]);
    }
    printf("\nAverage for Failed Students: %.2f\n", fAvg);

    return 0;
}
