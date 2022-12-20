#include <stdio.h>
#include "malloc.h"
#include "math.h"
#include "sys/time.h"
//var 21
int nod(int a, int b) {
    for (int i = a; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            return i;
        }
    }
}
int nod_rec(int a, int b) {
    if (!b) {
        return a;
    } else {
        return nod(b, a % b);
    }
}
int nok(int a, int b) {
    for (int i = 1; i <= a * b; i++) {
        if (i % a == 0 && i % b == 0) {
            return i;
        }
    }
}

int nok_rec(int a, int b) {
    return (a * b / nod(a, b));
}

void t_2() {
    int n;
    double **arr, **total;
    printf("enter n\n");
    scanf("%d", &n);
    total = (double **) malloc(n * sizeof(double *));
    arr = (double **) malloc(n * sizeof(double *));
    for (int i = 0; i < n; i++) {
        arr[i] = (double *) malloc(n * sizeof(double));
        total[i] = (double *) malloc(n * sizeof(double));
        for (int j = 0; j < 2; j++) {
            scanf("%lf", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            total[i][j] = sqrt(pow((arr[i][0] - arr[j][0]), 2) + pow((arr[i][1] - arr[j][1]), 2));
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (i < j) {
                printf("%d - %d: %lf\n", i + 1, j + 1, total[i][j]);
            }
        }
    }
}

int main() {//var 21
    int x;
    struct timeval tv;

    gettimeofday(&tv, NULL);
    double begin = ((double) tv.tv_sec) * 1000 + ((double) tv.tv_usec) / 1000;
    x = nod(13,5123);
    gettimeofday(&tv, NULL);
    double end = ((double) tv.tv_sec) * 1000 + ((double) tv.tv_usec) / 1000;
    printf("%f %d\n", end - begin, x);

    gettimeofday(&tv, NULL);
    begin = ((double) tv.tv_sec) * 1000 + ((double) tv.tv_usec) / 1000;
    x = nod_rec(13,5123);
    gettimeofday(&tv, NULL);
    end = ((double) tv.tv_sec) * 1000 + ((double) tv.tv_usec) / 1000;
    printf("%f %d\n", end - begin, x);

    gettimeofday(&tv, NULL);
    begin = ((double) tv.tv_sec) * 1000 + ((double) tv.tv_usec) / 1000;
    x = nok(13,5123);
    gettimeofday(&tv, NULL);
    end = ((double) tv.tv_sec) * 1000 + ((double) tv.tv_usec) / 1000;
    printf("%f %d\n", end - begin, x);

    gettimeofday(&tv, NULL);
    begin = ((double) tv.tv_sec) * 1000 + ((double) tv.tv_usec) / 1000;
    x = nok_rec(13,5123);
    gettimeofday(&tv, NULL);
    end = ((double) tv.tv_sec) * 1000 + ((double) tv.tv_usec) / 1000;
    printf("%f %d\n", end - begin, x);
    return 0;
}
