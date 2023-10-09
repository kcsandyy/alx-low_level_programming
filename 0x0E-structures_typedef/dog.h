#ifndef STRUCT_DOG
#define STRUCT_DOG
/**
 * struct dog - Basic puppy description
 * @name: The puppy's name
 * @age: The puppy's age
 * @owner: The puppy's owner
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
