#include <iostream>

using namespace std;

//function converts measurement so it is only in inches
float TotalInches(float feet, float inches){
  return (12 * feet) + inches;
}

//function converts in to just memters
float MetersConverstion(float inches){
  return inches / 39.3701;
}

//function convrts from meters to centimeters
float CentimeterConversion(float meters){
  return meters * 100;
}

//function prints out information
void print(float meters, float centimeters){
  cout<<"meters: "<<meters<<endl;
  cout<<"centimeters: "<<centimeters<<endl;
}

int main(int argc, char **argv){
  float feet;
  float inches;
  float totalFeetInches;
  float meters;
  float centimeters;
  bool keepGoing = true;
  string keepGoingCin = "";

  //loop so user can do multipul times
  while(keepGoing == true){

  //gets initial measurments
  cout<<"Enter number of feet"<<endl;
  cin>>feet;
  cout<<"Enter number of inches"<<endl;
  cin>>inches;

  //calls all of the function
  totalFeetInches = TotalInches(feet,inches);
  meters = MetersConverstion(totalFeetInches);
  centimeters = CentimeterConversion(meters);
  print(meters,centimeters);

  //sees if want to exit the loop
  cout<<"Do you want to continue, enter 'exit' to stop"<<endl;
  cin>>keepGoingCin;
  if(keepGoingCin == "exit"){
    keepGoing = false;
  }
}

  return 0;
}
