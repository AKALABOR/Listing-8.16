#include <iostream>
#include <set>
#include <string>
using namespace std;

string a(const char* str1, const char* str2) {

set<char> b;
string result;          

for (int i = 0; str1[i] != '\0'; ++i) {
    char ch = str1[i];
    if (b.insert(ch).second) {
        result = ch;
    }
}

for (int i = 0; str2[i] != '\0'; ++i) {
    char ch = str2[i];
    if (b.insert(ch).second) {
        result += ch;
    }
}

return result;

}

int main() {

const char* str1 = "ADAM";
const char* str2 = "AdAMas";
    
string A = a(str1, str2);
cout << "Результат - " << A << endl;

}
