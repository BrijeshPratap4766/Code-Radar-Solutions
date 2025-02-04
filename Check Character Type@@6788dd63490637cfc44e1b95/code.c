#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    char sh = tolower(ch);
    if ((sh=='a') || (sh=='e') || (sh=='i') || (sh=='o') || (sh=='u')){
        printf("Vowel");
    }
    else if(isalpha(ch)){
        printf("Consonant");
    }
    else if (isdigit(ch)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}