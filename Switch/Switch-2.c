//A simple calculator using switch

#include<stdio.h>

int main() {

    int a=2,b=3,ans;

    switch('add') {

        case 'add': ans=a+b;
        printf("Answer is: %d",ans);
        break;

        case 'sub': ans=a-b;
        printf("Answer is: %d",ans);
        break;

        case 'multiply': ans=a*b;
        printf("Answer is: %d",ans);
        break;
        
        case 'divide': ans=a/b;
        printf("Answer is: %d",ans);
        break;
        
        case 'modulous': ans=a%b;
        printf("Answer is: %d",ans);
        break;

        default: printf("Invalid operation");
        break;
    }

    return 0;

}