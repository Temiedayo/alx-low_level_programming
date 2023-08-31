#include "main.h"
/**
 * get_bit - Returns value of a bit at an index in a decimal num
 * @n: Num to search
 * @index: Index
 *
 * Return: Value
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;
if (index > 63)
return (-1);
bit_val = (n >> index) & 1;
return (bit_val);
}
