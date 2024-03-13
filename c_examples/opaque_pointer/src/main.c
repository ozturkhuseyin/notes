#include <stdio.h>

#include "sensor.h"
sensor_t my_sensor = NULL;




int main(int argc, char const *argv[])
{
   my_sensor = sensor_init(1, 2);
   sensor_print(my_sensor);

   //printf("%d %d", my_sensor->a, my_sensor->b);  cant reach struct elements 

    return 0;
}



// extra
// https://interrupt.memfault.com/blog/opaque-pointers