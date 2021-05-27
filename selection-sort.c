#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    for(int i=0;i<10;i++) {
    int ARSIZE=0;
    printf("Enter size:\n");
    scanf("%d",&ARSIZE);
    int a[ARSIZE];
    clock_t start,end;

    for(int i=0;i<ARSIZE;i++)
        a[i]=rand();


    int s=0,min;
    start=clock();
    for(int i=0;i<ARSIZE;i++) {
        min=32767;
        for(int j=i;j<ARSIZE;j++) {
            if(a[j]<=min) {
                min=a[j];
                s=j;
            }
            else
                continue;
        }
        int temp=a[i];
        a[i]=min;
        a[s]=temp;
    }
    end=clock();
    printf("Time is %f\n", (((double)end-start))/CLOCKS_PER_SEC);
    }
}