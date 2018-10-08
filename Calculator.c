#include "Calculator.h"

int main(int argc, char const *argv[]) {
  double x = Check(Menu());
  printf("%.2lf\n", x);
  return 0;
}

int Menu(){
  int x;
  printf("Choose one of the following operations:\n");
  printf("Add(1)\n");
  printf("Subtract(2)\n");
  printf("Multyply(3)\n");
  printf("Divide(4)\n");
  printf("Stop program(-1)\n");
  printf("Enter your choice: ");
  scanf("%d", &x);
  return x;
}
double Check(int x){
  double result = 0;
  double o1,o2;
  if ( x <= 4 && x >= 1) {
    GetOperands(&o1,&o2);
  }
  switch (x) {
    case 1:
    result = Add(o1,o2);
    break;
    case 2:
    result = Subtract(o1,o2);
    break;
    case 3:
    result = Multyply(o1,o2);
    break;
    case 4:
    result = Divide(o1,o2);
    break;
    case -1:
    return;
    default:
    printf("Input not allowed, please try again!\n");
    scanf("%d" ,&x);
    Check(x);
    break;
  }
  return result;
}
double Multyply(double x1, double x2){
  double result = x1*x2;
}
double Add(double x1, double x2){
  return x1+x2;
}
double Subtract(double x1, double x2){
  return x1-x2;
}
double Divide(double x1, double x2){
  if (x2 == 0) {
    printf("Division by zero\n");
    return 0;
  }
  return x1 / x2;
}
void GetOperands(double* x1,double* x2){
  printf("Enter the first Operand:");
  scanf("%lf", x1);
  printf("Enter the second Operand:");
  scanf("%lf", x2);
}
