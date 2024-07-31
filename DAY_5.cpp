#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

string cleanedText(const string &str) {
    string cleaned;

    for (char c : str) {
        if (isalnum(c)) {
            cleaned += tolower(c);
        }
    }

    return cleaned;
}

bool palindromControl(const string &str) {
    string cleaned = cleanedText(str);
    string reversed = cleaned;
    reverse(reversed.begin(), reversed.end());
    return cleaned == reversed;
}

int main() {
    string input;
    cout << "Bir metin girin: ";
    getline(cin, input);

    if (palindromControl(input)) {
        cout << "\"" << input << "\" bir palindromdur." << endl;
    } else {
        cout << "\"" << input << "\" bir palindrom degildir." << endl;
    }

    return 0;
}