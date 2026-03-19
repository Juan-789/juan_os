// #include "user.h"


// extern char _binary_shell_bin_start[] = "<shell.bin contents here>";
// extern char _binary_shell_bin_size[];

void main(void) {
    *((volatile int *) 0x80200000) = 0x1234;
    for(;;);

}
