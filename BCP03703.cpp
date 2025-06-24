#include <iostream>
using namespace std;
int fabinacci(int n){
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fabinacci(n-1) + fabinacci(n-2);
}
int main() {
    int n;
    cin >> n;
    cout << fabinacci(n) << endl;
    return 0;
}