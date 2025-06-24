#include <iostream>
using namespace std;
int main() {
    double n, metre = 0;
    cin >> n;
    metre += n;
    for (int i = 0; i < 9; i++){
        n /= 2;
        metre += n * 2;
    }
    n /= 2;
    cout << metre << endl;
    cout << n << endl;
    return 0;
}