#include "soc-hw.h"

int main ()
{   
    serial_init();
    msleep(40);
    read_humidity();
    msleep(1);
    read_temperature();
    msleep(1);
    read_sum();
    msleep(1);
    good();         
}

