#ifndef STRUCTS
#define STRUCTS
/**
 * struct dog - description for a pet
 * @name: pet's name
 * @age: pet's age
 * @owner: pet's owner
 *
 * Description: Pet's key particulars
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
