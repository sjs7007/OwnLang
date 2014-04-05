#include <stdio.h>

typedef struct
{
	float x;
	float y;
} point; //point is name of structure

int main()
{
	point p;
	p.x=14;
	p.y=56;
	printf("Point P : (%f,%f)",p.x,p.y);
}
