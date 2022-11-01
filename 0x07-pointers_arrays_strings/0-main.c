#include "main.h"

int main(void)
{
	char buffer[98] = {0x00};
	_memset(buffer, 0x01, 95);

	return (0);
}
