#include <iostream>

using namespace std;

int main(int argc, char **argv){
  int numberArray[10];
  int i;

  cout << "Please enter 10 numbers"<<endl;

  //loop adds numbers to the array
  for(i = 0; i < 10; ++i){
    cin>>numberArray[i];
  }

  //loop prints out the array
  for(i = 0; i < 10; ++i){
    cout<<numberArray[i]<<" ";
  }
  
cout<<endl;
return 0;

}
