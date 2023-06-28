#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Dog structure
 * @name: name member
 * @age: age member
 * @owner: owner member
 *
 * Description:
 */
struct dog
{
	char *name;
	float age;
	char *owner;
/*
 *Description: struct dog description
 *
 */
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
