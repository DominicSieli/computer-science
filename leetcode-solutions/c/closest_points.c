#include <math.h>
#include <stdio.h>
#include <stdlib.h>

struct point
{
	int x;
	int y;
};

double distance(struct point point)
{
	return sqrt(pow(fabs((double)point.x), 2) + pow(fabs((double)point.y), 2));
}

struct point* closest_points(struct point* points, int size, int k)
{
	if(size == 0) return points;
	struct point* closest = (struct point*)malloc(k * sizeof(struct point));

	int index = 0;

	for(int i = 0; i < size; i++)
	{
		index = i;

		for(int j = i + 1; j < size; j++)
		{
			if(distance(points[j]) < distance(points[index]))
			{
				index = j;
			}
		}

		struct point  pointer_1 = points[i];
		struct point pointer_2 = points[index];
		points[i] = pointer_2;
		points[index] = pointer_1;
	}

	for(int i = 0; i < k; i++)
	{
		closest[i].x = points[i].x;
		closest[i].y = points[i].y;
	}

	return closest;
}

int main()
{
	int size = 10;
	struct point* points = (struct point*)malloc(size * sizeof(int*));

	for(int i = 0; i < size; i++)
	{
		points[i].x = size - i - 1;
		points[i].y = size - i - 1;
	}

	int k = 4;
	struct point* closest = closest_points(points, size, k);

	for(int i = 0; i < k; i++)
	{
		printf("[%d] [%d,%d] : %lf\n", i, closest[i].x, closest[i].y, distance(closest[i]));
	}
}