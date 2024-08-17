
#include <stdio.h>
int main()
{
  float radius, area;

  printf("Enter the radius of a circle\n");

  scanf("%f", &radius);

  area = 3.14159*radius*radius;

  printf("Area of the circle = %f\n", area);  // printing upto two decimal places

  return 0;
}
