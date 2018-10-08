#include "Calculator.h"

int main(int argc, char const *argv[]) {
  Check(Menu());
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
void Check(int x){
  double o1 = 0;
  double o2 = 0;
  switch (x) {
    case 1:
    Add(o1,o2);
    break;
    case 2:
    Subtract(o1,o2);
    break;
    case 3:
    Multyply(o1,o2);
    break;
    case 4:
    Divide(o1,o2);
    break;
    case -1:
    return;
    default:
    printf("Input not allowed, please try again!\n");
    scanf("%d" ,&x);
    Check(x);
    break;
  }
}
double Multyply(double x1, double x2){
  return x1 * x2;
}
double Add(double x1, double x2){
  return x1+x2;
}
double Subtract(double x1, double x2){
  return x1-x2;
}
double Divide(double x1, double x2){
  if (x2 != 0) {
    return x1/x2;
  }
  printf("Division by zero");
  return -1;
}
void GetOperands(double x1,double x2){

}
