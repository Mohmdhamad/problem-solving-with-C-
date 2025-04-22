#include <iostream>
#include <limits>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    int firstDigit = n%10;
    int secondDigit = (n/10)%10;
    if (firstDigit%secondDigit==0 || secondDigit%firstDigit==0){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
    return 0;
}
