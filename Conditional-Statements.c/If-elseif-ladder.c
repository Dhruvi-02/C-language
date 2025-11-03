//To check whether the input alphabet is a vowel or consonant

#include<stdio.h>

int main() {

    char letter;
    
    printf("Enter the alphabet: ");
    scanf("%c",&letter);

    if(letter=='a' || letter=='A') {
        printf("%c is a vowel",letter);
    }
    if(letter=='e' || letter=='E') {
        printf("%c is a vowel",letter);
    }
    if(letter=='i' || letter=='I') {
        printf("%c is a vowel",letter);
    }
    if(letter=='o' || letter=='O') {
        printf("%c is a vowel",letter);
    }
    if(letter=='u' || letter=='U') {
        printf("%c is a vowel",letter);
    }
    else {
        printf("%c is a consonant");
    }
    return 0;
}