#include "main.h"

/*
 * jack_bauer - script que simula ser un reloj
 *
 */


void jack_bauer(void)
{
	int hrs = 0;
	int min = 0;

	if (hrs < 24)
	{
		if (min < 60)
		{
			_putchar ('0' + (hrs / 10));
			_putchar ('0' + (hrs / 10));
			_putchar (':');
			_putchar ('0' + (min / 10));
			_putchar ('0' + (min % 10));
			_putchar ('\n');
			min++;
		}
		min = 0;
		hrs++;
	}
}
