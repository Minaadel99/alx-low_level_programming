#ifndef DOG_H
#define DOG_H
/**
 * struct_dog - init a variable
 * @d: pointer to struct dog
 * @name: name
 * @age: age
 * @owner: owner
 * Description: just a lone gog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
