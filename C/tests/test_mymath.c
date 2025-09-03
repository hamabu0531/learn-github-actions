#include <stdio.h>
#include <stdlib.h>
#include "../src/mymath.h"

#define ASSERT_EQUAL(expected, actual) \
    if ((expected) != (actual)) { \
        fprintf(stderr, "Assertion failed: %d == %d\n", (expected), (actual)); \
        return 1; \
    }

int main(void){
    ASSERT_EQUAL(5, add(2, 3));
    ASSERT_EQUAL(1, sub(3, 2));
    return 0;
}
