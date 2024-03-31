#include "opaque_lib.h"
#include "stdio.h"
#include "stdlib.h"

int main() {

    struct opaque *obj = malloc(opaque_size());
    opaque_init(obj);
    opaque_set_data(obj, 123);
    printf("opaque_get_data ret:%d\n", opaque_get_data(obj));
    opaque_set_data(obj, 999);
    printf("opaque_get_data ret:%d\n", opaque_get_data(obj));
    opaque_deinit(obj);

    return 0;
}