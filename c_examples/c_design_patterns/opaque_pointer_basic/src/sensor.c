#include "sensor.h"

#include "stdio.h"
#include "stdlib.h"

struct sensor {
    int a, b;
};


sensor_t sensor_init(int a, int b) {
    sensor_t sensor;
    sensor = (sensor_t)malloc(sizeof(sensor_t));
    if (!sensor) {
        printf("sensor_failed\n");
        return NULL;
    }

    sensor->a = a;
    sensor->b = b;

    printf("sensor_init success\n");

    return sensor;
}

void sensor_print(sensor_t sensor) {
    if (!sensor) {
        printf("sensor_print err null sensor\n");
        return;
    }

    printf("sensor_print a:%d b:%d\n", sensor->a, sensor->b);
}