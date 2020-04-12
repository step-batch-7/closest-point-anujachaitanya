#include <math.h>
#include "point.h"

unsigned int get_distance(Point first_point, Point second_point)
{
  int x = pow(first_point.x - second_point.x, 2);
  int y = pow(first_point.y - second_point.y, 2);
  return sqrt(x + y);
}

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location)
{
  unsigned int distance = get_distance(current_location, food_points[0]);
  closest_food_location->x = food_points[0].x;
  closest_food_location->y = food_points[0].y;

  for (int i = 1; i < points_length; i++)
  {
    unsigned int current_distance = get_distance(current_location, food_points[i]);
    if (current_distance < distance)
    {
      distance = current_distance;
      closest_food_location->x = food_points[i].x;
      closest_food_location->y = food_points[i].y;
    }
  }
}