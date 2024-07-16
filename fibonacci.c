#include <stdio.h>

int fibcalc(int num) {
    if (num < 1) {
        return -1; //indicates an error
    }
    else {
        int init = 0;
        int init2 = 1;
        printf("%d ", init);
        printf("%d ", init2);

        for (int i = 2; i <= num; i++) {
         int sum = init + init2;
            printf("%d ",sum);
            init = init2;
            init2 = sum;
        }
    }
    printf("\n");
    return 0; //to end
    }

int main () {
    int input;

    printf("Output the Fibonacci sequence to __ numbers:\n");
    printf("(Must be a natural number)\n");
    if (scanf("%d", &input) != 1) {
        printf("Bad input\n");
        return -1; // for error
    }
    if (fibcalc(input) == -1) {
        printf("Bad input\n");
        return -1; // for error
}
}
