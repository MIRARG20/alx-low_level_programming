#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)


{
for (int i = 0; i <= 9; i++)
{
printf("9 x %d = %d\n", i, 9 * i);
}
}

int main()
{
times_table();
return 0;
}

