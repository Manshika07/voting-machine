#include <stdio.h>
#include<time.h>

void drawBars(int values[], int numBars) {    
    int maxHeight = 25;
    int i=0;
     printf("----------------------------------- Counting the votes ---------------------------------------------------------------\n\n");
    for ( i = 0; i < numBars; i++) {
        if (values[i] > maxHeight) {
            maxHeight = values[i];
        }
    }
    int h=0;
    for ( h = maxHeight; h > 0; h--) {
        for (i = 0; i < numBars; i++) {
            if (values[i] >= h) {
                printf("   ********   \t");
            } else {
                printf(" \t\t"); 
            }
        }
        printf("\n");
    }
    for (i = 0; i < numBars; i++) {
        if(i==0)printf("   BJP   \t");
        if(i==1)printf("   INC   \t");
        if(i==2)printf("   SPA   \t");
        if(i==3)printf("   BSP   \t");
        if(i==3)printf("   NOTA   \t");
    }
    printf("\n");
}

// int main() {
//     int numBars,i;

//     printf("Enter the number of bars: ");
//     scanf("%d", &numBars);

//     int bars[numBars];
//     printf("Enter the values for each bar:\n");
//     for (int i = 0; i < numBars; i++) {
//         printf("Bar %d: ", i + 1);
//         scanf("%d", &bars[i]);
//     }

//     int a[] = {10,15,13,5,20};
//     printf("\nVertical Bar Graph (Side by Side):\n");

//     srand(time(NULL));
    
//     for(i=0;i<60;i++){ 
//     int r1 = rand() % 20 + 1;
//     int r2 = rand() % 20 + 1;
//     int r3 = rand() % 20 + 1;
//     int r4 = rand() % 20 + 1;
//     int r5 = rand() % 20 + 1;
//     printf("\n\n");  
//     drawBars(bars, numBars);
//     bars[0]= r1;
//     bars[1]=r2;
//     bars[2]=r3;
//     bars[3]=r4;

//     usleep(200*1000);
//     //sleep();
//     system("clear");
//     }

//     return 0;
// }
