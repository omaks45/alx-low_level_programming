#ifndef DOG
#define DOG
/**
* struct dog - struct definition type
* @name: 1st struct element
* @age: 2nd struct element
* @owner: 3rd struct element
*/
struct dog
{
	char name[5];
	float age;
	char owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_p;

dog_p *new_dog(char *name, float age, char *owner);

void free_dog(dog_p *d);

#endif
