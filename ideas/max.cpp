//problem link : "https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E"

#include <iostream>
using namespace std;

int main (){
    int x;
    cin >> x ;
    int max = 0 ;
    for(int i = 0 ;i<x;i++){
        int num ;
        cin >> num ;
        if (num > max ){
            max = num ;
        }
    }
    cout << max ;

    return 0 ;
}