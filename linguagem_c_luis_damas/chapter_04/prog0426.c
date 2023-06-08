#include <stdio.h>

int main() {
    int i;
    int a, b;
    char c;

    printf("Insira dois números: ");
    scanf("%d %d", &a, &b);

    for (i = (a > b ? b : a); i <= (a > b ? a : b); i++) {
        if (i % 20 == 0 && i > 0) {
            printf("Pressione uma tecla para continuar");
            c = getchar();

            if (c == '\n' || c == '\r') {
                continue;
            }
        }
        printf("%3d --> %c\n", i, (unsigned char)i);
    }

    return 0;
}
