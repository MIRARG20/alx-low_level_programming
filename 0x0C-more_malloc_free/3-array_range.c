/**
 * array_range - creates an array of integers
 * @min: minimum int
 * @max: maximum int
 * Return: array of intergeres.
 */
int *array_range(int min, int max)
{
int *ptr;
int length;
int i;
if (min > max)
{
return (NULL);
}
length = max - min + 1;
ptr = malloc(sizeof(int) * length);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < length; i++)
{
ptr[i] = min + i;
}
return (ptr);
}
