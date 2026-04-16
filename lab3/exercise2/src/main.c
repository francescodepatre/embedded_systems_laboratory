#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

#include "myfunction.h"

uint8_t counter1 = 0;
uint8_t counter2 = 3;

int main(void)
{
     printk("Myfunction test\n");
    while (1) {
        printk("Counter1: %d, Counter2: %d\n", counter1, counter2);
        counter1++;
        counter2++;
        if (counter1 > 10) {
            counter1 = 0;
        }
        if (counter2 > 10) {
            counter2 = 0;
        }
        k_msleep(1000);
 }
}