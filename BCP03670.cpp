#include <iostream>
using namespace std;
int main() {
    int N, m, ans = 0;
    cin >> N >> m;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        if(a==m) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}