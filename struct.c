#include <stdio.h>
typedef struct point
{
  int x;
  int y;
} Point;

// you can create points like
Point *create_point(int x, int y)
{
  Point *dot = malloc(sizeof(Point)); // memory allocation
  dot->x = x;
  dot->y = y;
  return dot;
}

int main(void)
{
  Point *spot = create_point(3, 4); // Manual work

  Point another_spot = {4, 5}; // straight forwards

  printf("First spot %d \n", spot->x);
  printf("Second spot %d \n", another_spot.x);
  return 0;
}