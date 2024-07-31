#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "Carpanlara ayirma sistemi" << endl;
    int num;
    cout << "Lutfen birinci sayiyi giriniz: ";
    cin >> num;

    vector<int> factors;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            factors.push_back(i);
        }
    }

    cout << num << " sayisinin carpanlari: " << endl;
    for (int factor : factors) {
        cout << factor << endl;
    }

    return 0;
}