//To check whether character is alphabet(uppercase or lowercase), digit or special character

#include<stdio.h>

int main() {

    char input;
    printf("Enter the value: ");
    scanf("%c",&input);

    if(input=='A' || input=='B' || input=='C' || input=='D' || input=='E' || input=='F' || input=='G' || input=='H' || input=='I' || input=='J' || input=='K' || input=='L' || input=='M' || input=='N' || input=='O' || input=='P' || input=='Q' || input=='R' || input=='S' || input=='T' || input=='U' || input=='V' || input=='W' || input=='X' || input=='Y' || input=='Z') {
        printf("The character is alphabet(uppercase)");
    }
    else if(input=='a' || input=='b' || input=='c' || input=='d' || input=='e' || input=='f' || input=='g' || input=='h' || input=='i' || input=='j' || input=='k' || input=='l' || input=='m' || input=='n' || input=='o' || input=='p' || input=='q' || input=='r' || input=='s' || input=='t' || input=='u' || input=='v' || input=='w' || input=='x' || input=='y' || input=='z') {
        printf("The character is alphabet(lowercase)");
    }
    else if(input=='0' || input=='1' || input=='2' || input=='3' || input=='4' || input=='5' || input=='6' || input=='7' || input=='8' || input=='9') {
        printf("The character is a digit");
    }
    else if(input=='!' || input=='@' || input=='#' || input=='$') {
        printf("The character is a special character");
    }
    else {
        printf("The character can't be identified");
    }
    return 0;
}