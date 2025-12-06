//Program to print numbers from 1 to 9 which seems like 3*3 matrix

#include<stdio.h>

int main() {

    int i=0,j,ans=1;

    do {
        j = 0;
        do {
            printf("%d\t",ans);
            ans ++;
            j++;
        }
        while(j<3);
        printf("\n");
        i++;
    }
    while(i<3);

    return 0;
}