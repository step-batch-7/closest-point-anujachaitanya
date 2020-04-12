#include <math.h>
#include "point.h"

unsigned int get_distance(struct Point first_point, struct Point second_point)
{
  int x = pow(first_point.x - second_point.x, 2);
  int y = pow(first_point.y - second_point.y, 2);
  return sqrt(x + y);
}

void get_closest_food(struct Point food_points[], int points_length, struct Point current_location, struct Point *closest_food_location)
{
  double distance = get_distance(current_location, food_points[0]);
  closest_food_location->x = food_points[0].x;
  closest_food_location->y = food_points[0].y;
}