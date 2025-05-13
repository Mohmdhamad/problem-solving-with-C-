//problem link : "https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H"

#include <iostream>
using namespace std;
int main (){
  int num ;
  cin >> num;
  bool isPrime ;
  if (num > 1 ){
    for (int i = 2 ; i < num ; i++ ){
      if (num % i > 0 ){
        isPrime = true ;
      }else {
        isPrime =false ;
       break;

      }
    }
  }else {
    isPrime = false;
  }
  if(isPrime){
    cout<< "YES\n";
  }else {
    cout<<"NO\n";
  }
  
}