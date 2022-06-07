#include <stdio.h>

#define bool short

bool isPOT(int x) {
    while (x%2 == 0) {
        x /= 2;
    }
    if (x == 1) return 1;
    else return 0;
}

int log2of(int x) {
    int i = 0;
    while(x != 1) {
        x /= 2;
        i++;
    }
    return i;
}

void KanaKnit(int N) {
    short isBad = 0;
    if (N % 2 == 0) {
        printf("Ta");
        isBad = 1;
    }
    if (N % 3 == 0) {
        printf("Ka");
        isBad = 1;
    }
    if (N % 5 == 0) {
        printf("Mu");
        isBad = 1;
    }
    if (N % 7 == 0) {
        printf("Ra");
        isBad = 1;
    }
    if (!isBad)
        printf("%d", N);
}

int main() {
    KanaKnit(11);
    KanaKnit(210);
    KanaKnit(6);
    KanaKnit(21);

    printf("\n");
    printf("%d %d", log2of(9), log2of(16));
    printf("\nHello, World!\n");
    return 0;
}
