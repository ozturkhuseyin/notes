#include "my_object.h"

int my_object_init(struct my_object *self){
    memset(self, 0, sizeof(*self));
}
int my_object_deinit(struct my_object *self){
    // cleanup
}