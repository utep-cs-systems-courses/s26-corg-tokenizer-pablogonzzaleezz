#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE 1024

int main(void) {
    char buf[MAX_LINE];

    while (1) {
        printf("> ");
        fflush(stdout);

        if (!fgets(buf, MAX_LINE, stdin)) {
            printf("\n");
            break;
        }

        printf("%s", buf);
    }

    return 0;
}
