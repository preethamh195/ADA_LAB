#include <stdio.h>
int gcd(int a, int b) {
    if(a==0)
        return b;
    return gcd(b%a,a);
}
int main() {
    int x,y;
    printf("Enter num1\n");
    scanf("%d",&x);
    printf("Enter num2\n");
    scanf("%d",&y);
    int g;
    if(x<y)
        g=gcd(x,y);
    else
        g=gcd(y,x); 
    printf("GCD is :%d",g);
}