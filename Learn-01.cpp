#include <iostream>
using namespace std;
int main(){
  float a,d;
  int n;
  char input = 'Y';
    cout<<"Put the value of a: ";
    cin>>a;
    cout<<"Common difference: ";
    cin>>d;
    cout<<"Upto How many Terms: ";
    cin>>n;

  for(int k=1; (k-1)<=n; k++){
        cout<<(a+d*(k-1))<<", ";
    }
    cout<<(a+d*(n-1))<<endl;
    cout<<"Do you want the sum of n terms: (Y/N) ";
    cin>>input;
    
  if(input == 'Y'){
        cout<<endl<<"The sum of n terms is: ";
        cout<<((n/2)*(2*a+(n-1)*d))<<endl;
    }
  else{
        cout<<"Pleasure to help you";
  }
    return 0;
}
