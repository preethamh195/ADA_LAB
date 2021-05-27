#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int bsearch(int a[], int x,int i,long size) {
    if(a[i]<x)
        return bsearch(a,x,i+(i/2),size);
    else if(a[i]>x)
        return bsearch(a,x,i/2,size);
    else 
        return i;
}
int main() {
    clock_t start,end;
    printf("Enter size/n");
    int size=0;
    scanf("%d",&size);
    int a[size];

    for(int i=0;i<size;i++) {
        a[i]=rand();
    }
    
    a[size-100]=-100;//Trying to find this element
    
    int x;
    printf("enter element to search\n");
    scanf("%d",&x);

    start=clock();
    int i=bsearch(a,x,5,size);
    end=clock();

    if(i==-1) {
        printf("Element not found\n");
        printf("Time is %f\n", (100*((double)end-start))/CLOCKS_PER_SEC);//time is scaled by 10 so as to get non zero values
        return 0;
    }
    printf("Element at index:%d",i);
}