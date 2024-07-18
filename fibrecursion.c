#include <stdio.h>

int init = 0;
int init2 = 1;

int fibcalc(int num) {
    if (num == 0) {
        return -1;
    }
    else if (num < 1) {
        return -1; //for error
    }
    else if (num >= 1) {
        int sum = init + init2;
        init = init2;
        init2 = sum;
        printf("%d ", sum);
        return fibcalc(num - 1);
    }
    }

int container (int num) {
    if (num == 0) {
        return -1;
    }
    else if (num >= 1) {
        printf("%d ", 1);
        fibcalc(num);
    }
}

int main () {
    int input;

    printf("Output the Fibonacci sequence to __ number/s:\n");
    printf("(Must be one or greater)\n");
    scanf("%d", &input);
    container(input);
    }
