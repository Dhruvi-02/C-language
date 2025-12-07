#include<stdio.h>

int main() {

    char i,j,n;
    printf("Enter the value of n(alphabet): ");
    scanf("%c",&n);

    for(i='a';i<=n;i++) {
        for(j='a';j<=i;j++) {
            printf("%c\t",j);
        }
        printf("\n");
    }

    return 0;
}