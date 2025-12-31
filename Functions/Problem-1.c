//A Multi-Function Program

#include<stdio.h>

void printLine(void);

int main() {
    printLine();
    printf("\n      Understanding C Functions\n");
    printLine();
    return 0;
}

void printLine(void) {
    int i;
    for(i=1;i<40;i++) {
        printf("-");
    }
}