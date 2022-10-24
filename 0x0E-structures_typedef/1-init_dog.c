
/**
 * init_dog - starts the file
 * @d: var
 * @name: var
 * @age: var
 * @owner: var
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	struct dog do;
	do.name = name;
	do.age = age;
	do.owner = owner;

	d = do;

}

struct dog
{

	char name;
	float age;
	char owner;

};
