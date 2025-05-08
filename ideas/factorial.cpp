//problem link : "https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G"

#include <iostream>
using namespace std;
int main (){
  int c ;
  cin >> c;
  while (c--){
    int x ;
    cin >> x ;
    long long  n = 1 ;
     n =1;
    for ( int i =1 ; i <=x ; i++){
      n *= i ;
    }
    cout << n << endl ;

  }
  
}