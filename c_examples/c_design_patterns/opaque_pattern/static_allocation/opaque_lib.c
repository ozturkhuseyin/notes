#include "opaque_lib.h"

#include "string.h"

struct opaque {
    uint32_t data;
};

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