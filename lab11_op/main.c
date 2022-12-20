#include <stdio.h>
#include "stdlib.h"
#include "s_p.h"
struct rectangle {
    int x1, x2, y1, y2;
};
int main() {//var 21;
    struct rectangle rectangle = build();
    printf("s=%d\np=%d", s(rectangle), p(rectangle));
}
