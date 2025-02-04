#include <stdio.h>
int main() {
    float a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if ((a+b>c) && (a+c>b) && (c+b>a)){
        printf("Valid");

    }
    else{
        printf("Invalid");
    }
    return 0;
}