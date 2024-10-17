#include <stdio.h>

int main(void) {
    int divisore, dividendo;
    printf("inserire il divisore:");
    scanf("%d", &divisore);
    printf("i suoi divisori sono:");
    for (dividendo = 1; dividendo<=divisore; dividendo++) {
        if (divisore %dividendo == 0) {
            printf("%d ", dividendo);
        }
    }
}
