#include <stdio.h>

int main() {
    char **dbl_char;
    int nums[3] = {152,161, 162};
    printf("%lu\n", sizeof(*dbl_char));
    printf("%p, %p, %p\n", nums, &nums, &nums[0]);
    return 0;
}