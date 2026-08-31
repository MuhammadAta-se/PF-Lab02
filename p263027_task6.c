#include<stdio.h>
int main()
{     float radius = 9.5;
      float pi = 3.14159;
      float diameter ;
      float circumference;
      float area;
      diameter = 2 * radius ;
      circumference = 2 * pi * radius ;
      area = pi * radius * radius ;
      printf("========GEOMETRY OF CIRCLE========\n");
      printf("Given radius: %.3f cm\n",radius); 
      printf("Calculated Diameter: %.3f cm\n",diameter);
      printf("Calculated Circumference: %.3f cm\n",circumference);
      printf("Calculated Area: %.3f sq.cm\n",area);
      printf("==================================");  
      return 0;}