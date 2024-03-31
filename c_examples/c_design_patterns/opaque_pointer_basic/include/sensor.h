#ifndef __SENSOR_H__
#define __SENSOR_H__

typedef struct sensor* sensor_t;

sensor_t sensor_init(int a, int b);
void sensor_print(sensor_t sensor);



#endif /* __SENSOR_H__ */