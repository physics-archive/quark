//Firmware 2024.06.18
#include <include/libopencm3/stm32/f4/rcc.h>
#include <include/libopencm3/stm32/f4/gpio.h>

static void rcc_setup(void) {
    rcc_clock_setup_pll();
}

int main(void) {

    while (1) {

    }

    return 0;
}