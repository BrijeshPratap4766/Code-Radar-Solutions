#include <stdio.h>
int main() {
    char colours;
    scanf("%c",&colours);
    switch(colours){
        case 'R':
            printf("Stop");
        case 'G':
            printf("Go");
        case 'Y':
            printf("Slow Down");
        default:
            printf("Invalid input");
    }
    return 0;
}