#include <stdio.h>

struct days {
    unsigned char d: 5;
};

int main() {
    struct days days;
    days.d = 21;
    FILE *file = fopen("file.txt", "w");
    for (int i = 0; i < 11; i++) {
        fprintf(file, "%3d", days.d++);
    }
    fclose(file);
    return 0;
}
