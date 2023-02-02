#include <stdio.h>


void Temperatures(double tem_h)
{
    const double a = 32.0;
    const double b = 273.16;   
    double tem;
    double tem_k;

    tem = 5.0 / 9.0 * (tem_h - a);
    tem_k = tem + b;
    printf("Centigrade temperature : %.2f.\n", tem);
    printf("Fahrenheit temperature : %.2f.\n", tem_h);
    printf("Kelvin temperature : %.2f.\n", tem_k);

}

int main()
{
    double tem_h;
    int num;
   printf("Please enter a htemperature : ");
    
    while(scanf("%lf", &tem_h) == 1)
    {
      Temperatures(tem_h);
      printf("NEXT ENTER (q to quit)");
    }
    printf("Done\n");
    return 0;
}
