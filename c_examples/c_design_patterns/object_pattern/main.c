#include "my_object.h"

struct application {
    struct my_object obj;
};

int application_init(struct application *self){
    my_object_init(&self->obj);
    return 0;
}

int main() {
    struct application my_app = {
        .obj.flags = 0,
        .obj.variable = 10
    };

    application_init(&my_app);

    return 0;
}