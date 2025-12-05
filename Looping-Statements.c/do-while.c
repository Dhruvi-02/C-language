//To print multiplication table upto 10

#include<stdio.h>

int main() {

    int i,j,row=10,col=10,y;

    i=1;
    do {
        j=1;
        do {
            y=i*j;
            printf("%d*%d=%d\t",j,i,y);
            j=j+1;
        }
        while(j<=10);
        i=i+1;
        printf("%d\n",i);
    }
    while(i<10);
}