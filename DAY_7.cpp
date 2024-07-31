#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int number = rand() % 10000;
    cout << "Rastgele sayi: " << number;
}