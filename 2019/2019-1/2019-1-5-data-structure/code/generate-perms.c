// File: generate-perms.c
// Created by hengxin on 17-11-12.

/**
 * Generating all perms of [1 .. n].
 *
 * WARNING:
 *   This code is for the tutorial purpose.
 *   It contains bugs.
 */

#include <stdio.h>
#include <assert.h>

void perms(int * array, int n);

int main(void) {
    printf("%s", "Enter the number n: ");
    int n = 0;
    scanf("%d", &n);
    assert(n > 0);

    int array[n];
    for (int i = 0; i < n; ++i) {
        array[i] = i;
    }

    perms(array, n);
}

void perms(int *array, int n) {
    if (n == 1)
        printf("%d\t", array[0]);
    else {
        for (int i = 0 ; i < n; ++i) {
            printf("%d\t", array[i]);

            /**
             * New array for recursion
             */
            int array_remove_one[n-1];
            for (int j = 0; j < n - 1; ++j) {
                if (j < i)
                    array_remove_one[j] = array[j];
                else
                    array_remove_one[j] = array[j+1];
            }

            // recurse on this new array
            perms(array_remove_one, n - 1);
            puts("");
        }
    }
}