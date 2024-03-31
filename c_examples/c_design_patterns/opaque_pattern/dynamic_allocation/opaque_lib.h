#ifndef __OPAQUE_LIB_H__
#define __OPAQUE_LIB_H__

#include "stdint.h"

struct opaque;

struct opaque *opaque_new();
void opaque_free(struct opaque **self);
int opaque_init(struct opaque *self);
int opaque_deinit(struct opaque *self);
void opaque_set_data(struct opaque *self, uint32_t data);
uint32_t opaque_get_data(struct opaque *self);
unsigned long opaque_size(void);

#endif /* __OPAQUE_LIB_H__ */