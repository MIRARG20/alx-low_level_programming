#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - Make a copy of passed in argument
 * @n: Data to make copy of
 * Return: Pointer
 */

char *_strcpy(char *n)
{
char *t;
int i, length;
if (n == NULL)
{
return (NULL);
}
for (length = 0; n[length] != '\0'; length++)
;
t = malloc(sizeof(char) * (length + 1));
if (t == NULL)
{
return (NULL);
}
for (i = 0; n[i] != '\0'; i++)
{
t[i] = n[i];
}
t[i] = '\0';
return (t);
}

/**
 * new_dog - Create a new dog variable
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to new dog variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p;
char *new_name, *new_owner;
if (name == NULL || owner == NULL)
{
return (NULL);
}
p = malloc(sizeof(dog_t));
if (p == NULL)
{
return (NULL);
}
new_name = _strcpy(name);
if (new_name == NULL)
{
free(p);
return (NULL);
}
(*p).name = new_name;
(*p).age = age;
new_owner = _strcpy(owner);
if (new_owner == NULL)
{
free((*p).name);
free(p);
return (NULL);
}
(*p).owner = new_owner;
return (snoopie);
}
