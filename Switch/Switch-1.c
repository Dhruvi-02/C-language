//

#include<stdio.h>

int main() {

    char grade='B';
    
    switch (grade)
    {
    case 'A': printf("Distinction");
        break;
    case 'B': printf("First Class");
        break;
    case 'C': printf("Second Class");
        break;
    case 'D': printf("Pass");
        break;
    
    default: printf("Fail");
        break;
    }
    return 0;
}