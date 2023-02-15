#include <iostream>

using namespace std;

int main() {
    float num;
    int count = 0;
    float sum = 0;

    for (int i = 0; i < 6; i++) {
        cin >> num;

        if (num > 0) {
            count++;
            sum += num;
        }
    }

    cout << count << " valores positivos" << endl;
    cout << fixed;
    cout.precision(1);
    cout << sum / count << endl;

    return 0;
}
