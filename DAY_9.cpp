#include <iostream>
#include <string>

using namespace std;

string encrypt(string text, int shift) {
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        if (isupper(text[i])) {
            result += char(int(text[i] + shift - 65) % 26 + 65);
        } else {
            result += char(int(text[i] + shift - 97) % 26 + 97);
        }
    }
    return result;
}

string decrypt(string text, int shift) {
    return encrypt(text, 26 - shift);
}

int main() {
    string text = "HelloWorld";
    int shift = 3;
    string encrypted = encrypt(text, shift);
    string decrypted = decrypt(encrypted, shift);

    cout << "Orijinal Metin: " << text << endl;
    cout << "Şifrelenmiş Metin: " << encrypted << endl;
    cout << "Çözülmüş Metin: " << decrypted << endl;

    return 0;
}
