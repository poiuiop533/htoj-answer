#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int a;
    cin >> a;
    if(a>0){
        cout << static_cast<int>(ceil(a / 100.0));
    }
    else{
        cout << '-' << static_cast<int>(ceil(-a / 100.0));
    }
}