# dis0
## 1.1 concept check
- if char **dbl_char, then sizeof(*dbl_char) is 8.
- if int nums[3] = {152,161, 162}, then the differences between 
nums, &nums, &nums[0] ? \
result: 0x7ffd157b173c, 0x7ffd157b173c, 0x7ffd157b173c

## 1.2 header
- The size of helper_args_t is 18 if not defined ABC, otherwise 24.
- it appeared '[1]    2514 segmentation fault (core dumped)  ./app'


## 1.3  Debugging Segmentation Faults
- we should compile the program if we want to debug it with GDB: \
    gcc -g singer.c -o singer
- gdb singer and run to find which line it stop.
- remember the line number , 'break' it and run again.
- the segfault occured on a[i] = a[j], it has 2 operations: a read from a[j] and a write to a[i]
- I find that read from a[j] is not a problem as the same read is performed in line 21, so a write to a[i] is the issue
- "IU is the best singer!" is read-only segment, and the program cannot write to it. so the initial string should be moved on the address space.
we can fix it with malloc followed by strcpy or strdup.
