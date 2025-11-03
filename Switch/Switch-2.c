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

        case 'mul': ans=a*b;
        printf("Answer is: %d",ans);
        break;
        
        case 'div': ans=a/b;
        printf("Answer is: %d",ans);
        break;
        
        case 'mod': ans=a%b;
        printf("Answer is: %d",ans);
        break;

        default: printf("Invalid operation");
        break;
    }

    return 0;

}