#include <stdio.h>
int main() {
    int a,b,c;
    int avg =0;
    scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c);
    avg/=3;
    printf("Average: %.2f",avg);
    
    return 0;
}