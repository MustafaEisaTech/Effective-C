#include <stdio.h>
#include <stddef.h>

struct S {
    int i; double d; char c;
};

int main(void) {
    // This buffer is bad because it doesn't guarantee proper alignment for struct S
    unsigned char bad_buffer[sizeof(struct S)];

    // This buffer is good because we use _Alignas to ensure it's aligned to the size of struct S
    _Alignas(struct S) unsigned char good_buffer[sizeof(struct S)];

    // Create a pointer called bad_ptr and cast the bad_buffer to a struct S pointer
    // This allows us to treat the buffer as if it's a struct S, but it's unsafe because of alignment issues
    struct S *bad_ptr = (struct S *)bad_buffer;

    // Create a pointer called good_ptr and cast the good_buffer to a struct S pointer
    // This is safe because good_buffer is properly aligned for struct S
    struct S *good_ptr = (struct S *)good_buffer;

    return 0;
}