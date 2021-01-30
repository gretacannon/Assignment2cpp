#include <iostream>

using namespace std;

//function that takes in tax rate and cost then calculates cost including the tax
float addTax(float taxRate, float cost){
  float afterTaxCost;
  afterTaxCost = ((taxRate * .01) * cost) + cost;
  return afterTaxCost;
}

int main(int argc, char **argv){

  //calls function and prints out end price
  cout<<addTax(5.5,100)<<endl;

  return 0;
}
