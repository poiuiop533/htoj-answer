#include <iostream>
using namespace std;
int main() {
    int pa, ka, pb, kb, n;
    cin >> pa >> ka >> pb >> kb >> n;
    int minc = 999999999, bac = 0, bbc = 0;
    for (int i = 0; i <= n / ka;++i){
        int raa = n - i * ka, bc;
        if(raa<=0){
            bc = 0;
        }
        else{
            bc = (raa + kb - 1) / kb;
        }
        int tc = i * pa + bc * pb;
        if(tc < minc || (tc == minc && i < bac)){
            minc = tc;
            bac = i;
            bbc = bc;
        }
    }
    cout << bac << ' '
         << bbc << ' '
         << minc << endl;
    return 0;
}