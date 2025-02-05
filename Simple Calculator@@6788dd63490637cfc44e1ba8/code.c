#include <stdio.h>
int main() {
    int a,b;
    sacnf("%d%d",&a,&b);
    char op;
    scanf("%c",&op);
    switch(op){
        case '+':printf("%d",a+b);break;
        
        case '-':printf("%d",a-b);break;
        
        case '*':printf("%d",a*b);break;

        case '/':
            if (b!=0){
                print("%d",a/b);
            }
            else{
                printf("Error");
            }    
            break;

        default :printf("Error");
    }

    return 0;
}