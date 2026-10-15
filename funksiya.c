#include <stdio.h>

int katta(int son) {
    int raqam, max = 0;

    while (son > 0) {
        raqam = son % 10;

        if (raqam > max) {
            max = raqam;
        }

        son = son / 10;
    }

    return max;
}

int main() {
    int son;
    printf("Raqam kirting: ");
    scanf("%d",&son);

    printf("Eng katta raqam: %d", katta(son));
}