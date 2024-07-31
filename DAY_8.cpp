#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream file("example.txt");
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cerr << "Dosya açılamadı" << endl;
    }
    return 0;
}
