#include<stdio.h>
long int xpow(int x, int y){
   long int pow = 1;
    for(int i=1;i<=y;i++)
        pow *= x;
    return pow;
}
int main(){
    int a,b;
    printf("Enter the Number and Power of your number: ");
    scanf("%d%d",&a,&b);
    printf("%d raised to the power of %d = %d",a,b,xpow(a,b));
    return 0;
}
