#include<stdio.h>

int main() {

    int i,j,n=4,count=1,x,temp=n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++) {

        for(j=1;j<=temp;j++) {
            printf("%d\t",j);
        }

        printf("\n");
        for(x=1;x<=count;x++) {
            printf("\t");
        }
		
        count += 1;
        temp -= 1;
    }
}