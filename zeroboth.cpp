#include <iostream>

using namespace std;

//function that changes ints to zero
void zeroBoth(int& a, int& b){
  a = 0;
  b = 0;
}


int main(int argc, char **argv){

  //assigns number to ints
  int num1 = 5;
  int num2 = 4;

//displays the numbers
  cout<<num1<<" "<<num2<<endl;

//calls function
  zeroBoth(num1, num2);

//prints numbers again to show the change
  cout<<num1<<" "<<num2<<endl;


  return 0;
}
