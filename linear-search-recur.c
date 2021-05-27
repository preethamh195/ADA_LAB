#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int search(int a[], int x,int i,long size) {
    if(i>=size)
        return -1;
    if(a[i]==x)
        return i;
    else
        return search(a,x,i+1,size);
}
int main() {
    clock_t start,end;

    printf("Enter size of array\n");
    long size=0;
    scanf("%d",&size);
    int a[size];

    for(int i=0;i<size;i++) {
        a[i]=rand();
    }

    int x;
    printf("enter element to search\n");
    scanf("%d",&x);

    a[size-100]=-100;

    start=clock();
    int i=search(a,x,0,size);
    end=clock();

    if(i==-1) {
        printf("Element not found\n");
        printf("Time is %f\n", (100*((double)end-start))/CLOCKS_PER_SEC);//time is scaled by 10 so as to get non zero values
        return 0;
    }
    printf("Element at index:%d\n",i);
    printf("Time is %f\n", (100*((double)end-start))/CLOCKS_PER_SEC);
}