//It's like a game where the user will make a choice and regarding that any mathematical operation will perform

#include<stdio.h>

int main() {

int a=5,b=5,c,ans;
printf("Enter your choice (from 1 to 5):");
scanf("%d",&c);

switch (c) {
    
        case 1: ans=a+b;
        printf("Answer is: %d",ans);
        break;

        case 2: ans=a-b;
        printf("Answer is: %d",ans);
        break;

        case 3: ans=a*b;
        printf("Answer is: %d",ans);
        break;
        
        case 4: ans=a/b;
        printf("Answer is: %d",ans);
        break;
        
        case 5: ans=a%b;
        printf("Answer is: %d",ans);
        break;

        default: printf("Inapplicable choice");
        break;
}
return 0;
} 