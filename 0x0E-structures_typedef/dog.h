#ifndef HEADERFILE_H
#define HEADERFILE_H
/**
* struct dog - struct definition type
* @name: name of dog
* @age: dog's age
* @owner: dog's owner
*/
struct dog
{
	char name;
	float age;
	char owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
