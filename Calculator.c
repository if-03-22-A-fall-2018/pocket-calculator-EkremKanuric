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
  double o1,o2;
  switch (x) {
    case 1:
    ReadOperands();
    Add(o1,o2);
    break;
    case 2:
    ReadOperands();
    Subtract(o1,o2);
    break;
    case 3:
    ReadOperands();
    Multyply(o1,o2);
    break;
    case 4:
    ReadOperands();
    Divide(o1,o2);
    break;
    case -1:
    return;
    default:
    printf("Error , try again!\n");
    scanf("%d" ,&x);
    Check(x);
    break;
  }
}
double Multyply(double x1, double x2){
  return 0;
}
double Add(double x1, double x2){
  return 0;
}
double Subtract(double x1, double x2){
  return 0;
}
double Divide(double x1, double x2){

  return 0;
}
void ReadOperands(double* x1, double* x2){
  return 0;
}
