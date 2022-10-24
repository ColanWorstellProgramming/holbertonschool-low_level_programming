#ifndef dog
#define dog
#undef dog

/**
 * struct dog - | starts file
 * @name: var
 * @age: var
 * @owner: var
 */

struct dog
{

	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
