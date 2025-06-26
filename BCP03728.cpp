#include <iostream>
using namespace std;
int PointSoldiers(int a, int b, int c){
    const int M = 3 * 5 * 7; 
    const int M1 = M / 3;    
    const int M2 = M / 5;    
    const int M3 = M / 7;    
    int y1, y2, y3;
    for (y1 = 0; y1 < 3; y1++){
        if ((M1 * y1) % 3 == 1)
            break;
    }
    for (y2 = 0; y2 < 5; y2++){
        if ((M2 * y2) % 5 == 1)
            break;
    }
    for (y3 = 0; y3 < 7; y3++){
        if ((M3 * y3) % 7 == 1)
            break;
    }
    int x = a * M1 * y1 + b * M2 * y2 + c * M3 * y3;
    int min_valid_x = -1;
    for (int k = 0;; k++){
        int current_x = x - k * M;
        if (current_x < 10)
            break;
        if (current_x <= 108)
        {
            if (min_valid_x == -1 || current_x < min_valid_x)
            {
                min_valid_x = current_x;
            }
        }
    }
    for (int k = 1;; k++){
        int current_x = x + k * M;
        if (current_x > 108)
            break;
        if (current_x >= 10){
            if (min_valid_x == -1 || current_x < min_valid_x){
                min_valid_x = current_x;
            }
        }
    }

    return min_valid_x != -1 ? min_valid_x : -2;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int result = PointSoldiers(a, b, c);
    if (result == -2)
    {
        cout << "no answer" << endl;
    }
    else{
        cout <<result << endl;
    }
    return 0;
}