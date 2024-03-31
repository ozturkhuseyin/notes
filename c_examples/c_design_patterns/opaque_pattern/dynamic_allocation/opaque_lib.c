#include "opaque_lib.h"
#include "stdlib.h"
#include "string.h"

struct opaque {
    uint32_t data;
};

struct opaque *opaque_new() {
    // dynamically allocate an instance
    return malloc(sizeof(struct opaque));
}

void opaque_free(struct opaque **self) {
    // free dynamically allocated instance
    free(*self);
    // Set the passed pointer to NULL!
    *self = NULL;
}

int opaque_init(struct opaque *self) {
    memset(self, 0, sizeof(*self));
    return 0;
}
int opaque_deinit(struct opaque *self){
    self->data = 0;
    return 0;
}
void opaque_set_data(struct opaque *self, uint32_t data){
    self->data = data;
}
uint32_t opaque_get_data(struct opaque *self) {
    return self->data;
}

unsigned long opaque_size(void){
    return sizeof(struct opaque);
}