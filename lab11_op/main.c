#include <stdio.h>
#include "stdlib.h"
#include "ras.h"

struct rectangle {
    int x1, x2, y1, y2;
};

struct rectangle build() {
    struct rectangle tmp;
    scanf("%d%d%d%d", &tmp.x1, &tmp.x2, &tmp.y1, &tmp.y2);
    return tmp;
}

int main() {//var 21;
    struct rectangle rectangle = build();
    printf("s=%d\np=%d", ras.s(rectangle), ras.p(rectangle));
    return 0;
}
