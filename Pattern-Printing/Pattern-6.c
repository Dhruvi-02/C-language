#include<stdio.h>

int main() {

    char i,j,n='D',temp=n-1,ref='A',x;
    int run;
    printf("Enter the value of n: ");
    scanf("%d",&n);

        if(ref<n) {

            for(run='A';run<=n;run++) {

            for(x='A';x<=temp;x++) {
                 printf("\t");
            }

            for(i='A';i<=ref;i++) {
                printf("%c\t",i);
            }

            for(j=ref-1;j>='A';j--) {
                printf("%c\t",j);
            }

            printf("\n");
            temp -= 1;
            ref += 1;

            }

        }
}