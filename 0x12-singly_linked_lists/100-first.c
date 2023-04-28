#include <stdio.h>

void kwanza(void) __attribute__ ((constructor));

/**
 * kwanza - prints a sentence before the main function is executed
 */
void kwanza(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
