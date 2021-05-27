#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
    int size=0;
    printf("Enter size:\n");
    scanf("%d",&size);
    int arr[size];
    clock_t start,end;
    for(int i=0;i<size;i++)
        arr[i]=rand();
    
    //ascending order
    start=clock();
    for(int i=1;i<10;i++) {
        for(int j=i-1;j>=0;j--) {
            int temp;
            if(arr[j]>arr[i]) {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                i--;
            }
        }
    }
    end=clock();

    printf("Time is %f\n", (100*((double)end-start))/CLOCKS_PER_SEC);
}
