#include <stdio.h>
int main() {
    char colours;
    scanf("%c",&colours);
    switch(colours){
        case 'R':
            printf("Stop");
            break;
        case 'G':
            printf("Go");
            break;
        case 'Y':
            printf("Slow Down");
            break;
        default:
            printf("Invalid input");
    }
    return 0;
}