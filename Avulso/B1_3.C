#include <stdio.h>
#include <stdlib.h>

int mAB(int A, int B, int C) {
    int Mix, Mix_;
    Mix = (A + B + abs(A - B))/2;
    Mix_ = (Mix + C + abs (Mix - C))/2;

    return Mix_;
}
int main() {
    int A, B, C;

    printf("Digite tres valores: ");
    scanf("%d %d %d", &A, &B, &C);

    printf ("%d eh o maior", mAB(A, B, C));
    return 0;
}   