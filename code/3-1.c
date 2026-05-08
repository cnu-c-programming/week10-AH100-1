#include <stdio.h>
#include <string.h>

struct Student {
    char name[10];
    int score;
};

int main(void) {
    struct Student arr[20];
    int n = 0;
    char cmd[16];

    while (scanf("%s", cmd) == 1) {
        if (strcmp(cmd, "add") == 0) {
            scanf("%s %d", arr[n].name, &arr[n].score);
            n++;
        } else if (strcmp(cmd, "delete") == 0) {
            char name[10];
            scanf("%s", name);
            for (int i = 0; i < n; i++) {
                if (strcmp(arr[i].name, name) == 0) {
                    for (int j = i; j < n - 1; j++) {
                        arr[j] = arr[j + 1];
                    }
                    n--;
                    break;
                }
            }
        } else if (strcmp(cmd, "print") == 0) {
            for (int i = 0; i < n; i++) {
                printf("%s %d\n", arr[i].name, arr[i].score);
            }
        } else if (strcmp(cmd, "quit") == 0) {
            break;
        }
    }
    return 0;
}
