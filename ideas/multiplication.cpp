//problem link : ""

#include <iostream>
using namespace std;

int main(){
  int n ;
  cin >> n ;
  for (int i = 1 ; i <= 12;i++){
    int res = n * i;
    cout << n <<" * "<< i <<" = " << res << endl;
  }
  return 0 ;
}