#include <stdio.h>
int main() {
    int i, j;
    for (i = 1; i <= 5; i++) {
        // ===== H =====
        for (j = 1; j <= 5; j++) {
            if (j == 1 || j == 5 || i == 3)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        // ===== A =====
        for (j = 1; j <= 5; j++) {
            if (j == 1 || j == 5 || i == 1 || i == 3)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        // ===== R =====
        for (j = 1; j <= 5; j++) {
            if (j == 1 ||
                (i == 1 && j < 5) ||
                (i == 3 && j < 5) ||
                (j == 5 && i == 2) ||
                (j == 3 && i > 3))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        // ===== S =====
        for (j = 1; j <= 5; j++) {
            if ((i == 1 && j > 1) ||
                (i == 3 && j > 1 && j < 5) ||
                (i == 5 && j < 5) ||
                (j == 1 && i < 3) ||
                (j == 5 && i > 3))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        // ===== H =====
        for (j = 1; j <= 5; j++) {
            if (j == 1 || j == 5 || i == 3)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        // ===== I =====
        for (j = 1; j <= 5; j++) {
            if (i == 1 || i == 5 || j == 3)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        // ===== T =====
        for (j = 1; j <= 5; j++) {
            if (i == 1 || j == 3)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");
        // ===== A =====
        for (j = 1; j <= 5; j++) {
            if (j == 1 || j == 5 || i == 1 || i == 3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*OUTPUT
*   *  *****  ****   *****  *   *  *****  *****  *****
*   *  *   *  *   *  *      *   *    *      *    *   *
*****  *****  ****    ***   *****    *      *    *****
*   *  *   *  * *        *  *   *    *      *    *   *
*   *  *   *  * *    *****  *   *  *****    *    *   *   */
