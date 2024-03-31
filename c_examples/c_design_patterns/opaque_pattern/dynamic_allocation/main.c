#include "opaque_lib.h"
#include "stdio.h"

int main() {

    struct opaque *obj = opaque_new();

    if(obj == NULL) {
        printf("Error opaque_new \n");
        return 1;
    }

    opaque_init(obj);
    opaque_set_data(obj, 456);
    printf("opaque_get_data ret:%d\n", opaque_get_data(obj));
    opaque_deinit(obj);
    opaque_free(&obj);


    return 0;
}