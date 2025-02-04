#include <stdio.h>

int main() {
    double cp, sp;
    scanf("%lf %lf", &cp, &sp);

    if (sp > cp)
        printf("Profit\n");
    else if (sp < cp)
        printf("Loss\n");
    else{
        printf("No Profit No Loss");
    }
    return 0;
}
