#include <stdio.h>


double kup (double d);

int main() {
    double d;
  printf("Please enter a number\n");
     scanf ("%lf\n" ,&d);
    printf("Your answer is %f:", kup(d));
    return 0;
}
double kup (double d) {
   double result = d * d * d;
   return result;


}