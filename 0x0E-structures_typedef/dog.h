#ifndef DOG_H
#define DOG_H

/**
*struct dog - information about a dog
*@name: is the first char
*@age: is a float
*@owner: is also a char
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
*dog_t - is the typedef for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
