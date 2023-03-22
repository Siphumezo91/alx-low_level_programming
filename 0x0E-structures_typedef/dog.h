#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct dog
 * @name: char *
 * @age: float
 * @owner: char *
 * Description: This struct is for dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}

init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*DOG_H*/
