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
	printf("Point P : (%f,%f)\n",p.x,p.y);
	point pArray[4];
	for(int i=0;i<4;i++)
	{
		pArray[i].x=i;
		pArray[i].y=i;
		printf("Point P[%d] : (%f,%f)\n",i,pArray[i].x,pArray[i].y);
	}
}
