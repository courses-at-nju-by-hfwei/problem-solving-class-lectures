// File: all-perms.c
// Created by hengxin on 17-11-9.
// Generate all permutations of [0 .. n-1]

#include <stdio.h>

void generate_all_permutations(int *prefix, int *postfix, int size_of_postfix);

int main(void) {
    int n = 0;
    scanf("%d", &n);

    int range[n];
    for (int i = 0; i < n; ++i) {
        range[i] = i;
    }

    generate_all_permutations(NULL, range);
}

void generate_all_permutations(int *prefix, int *postfix, int size_of_postfix) {
    if (size_of_postfix == 1)
        printf("");  // TODO
    else {
        for (int i = 0; i < size_of_postfix; ++i) {
            generate_all_permutations()  // TODO
        }
    }
}
