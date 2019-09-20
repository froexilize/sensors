#include <bcm2835.h>
#include <stdlib.h>

#define PIN RPI_BPLUS_GPIO_J8_33
#define DELAY_TIME 50

int main(int argc, char **argv, char **envp) {
	int i;

	if(!bcm2835_init()) {
		exit(EXIT_FAILURE);
	}

	bcm2835_gpio_fsel(PIN, BCM2835_GPIO_FSEL_OUTP);

	bcm2835_gpio_write(PIN, HIGH);

	for(;;) {
		bcm2835_gpio_write(PIN, HIGH);
		bcm2835_delay(DELAY_TIME);
		bcm2835_gpio_write(PIN, LOW);
		bcm2835_delay(DELAY_TIME);
	}

	bcm2835_close();
	return (EXIT_SUCCESS);
}

