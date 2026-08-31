#include<stdio.h>
int main(){
      float celsius = 37.5;
      float fahrenheit;
      float kelvin;
      fahrenheit = (celsius*9.0/5.0)+32.0;
      kelvin = celsius + 273.15;
      printf("========TEMPERATURE CONVERSION========\n");
      printf("Temperature in Celsius: %.2f °C\n",celsius);
      printf("Temperature in Fahrenheit: %.2f °F\n",fahrenheit);
      printf("Temperature in Kelvin: %.2f K\n",kelvin);
      // note that 2f represents decimal upto 2 points
      printf("======================================");
      return 0;
}