//To evaluate the equation x^n

#include<stdio.h>

int main() {
    float x,p=1;
    int n;

    printf("Enter the value of x:");
    scanf("%f",&x);
    printf("Enter the value of n:");
    scanf("%d",&n);

    int count = 1;
    while(count <= n) {
        p = p*x;
        count ++;
    }
    printf("\nx = %f \nn = %d \nx to power n = %f\n",x,n,p);
    return 0;
}
