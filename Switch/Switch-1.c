//Performance deciding using grade program using switch

#include<stdio.h>

int main() {

    char grade;
    printf("Enter your grade: ");

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
    case 'F': printf("Fail");
        break;
    
    default: printf("Invalid grade");
        break;
    }
    return 0;
}