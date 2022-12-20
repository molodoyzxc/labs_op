//
// Created by semen on 21.12.2022.
//
#include "stdlib.h"
#include "stdio.h"
struct rectangle {
    int x1, x2, y1, y2;
};
struct rectangle build() {
    struct rectangle tmp;
    scanf("%d%d%d%d", &tmp.x1, &tmp.x2, &tmp.y1, &tmp.y2);
    return tmp;
}
int s(struct rectangle tmp){
    return (abs(tmp.x2-tmp.x1)*abs(tmp.y2-tmp.y1));
}
int p(struct rectangle tmp){
    return ((abs(tmp.x2-tmp.x1)+abs(tmp.y2-tmp.y1))*2);
}