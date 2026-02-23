#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  double retailPrice = 199.00;
  int quantity;
  double discountRate = 0.0;

  cout << "Enter how much was purchased: ";
  cin >> quantity;

  if(quantity >= 10){
    discountRate = 0.20;
  }
  else if (quantity >= 20){
    discountRate = 0.30;
  }
  else if (quantity >= 50){
    discountRate = 0.40;
  }
  else if (quantity >= 100){
    discountRate = 0.50;
  }
  else{
    discountRate = 0.00;
  }

  double subTotal = quantity * retailPrice;
  double discount = subTotal * discountRate;
  double total = subTotal - discount;

  cout<< fixed << setprecision(2);
  cout << " Your total is: $"<<total<<endl;
  
  return 0;
}



