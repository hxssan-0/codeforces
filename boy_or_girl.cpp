#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    int len = s.length();
    for (int i = len - 1; i >= 0; i--){
        for (int j = 0; j < i; j++){
            if (s[j+1] < s[j]){
                char temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    int current = s[0];
    int result = 0;
    for (int i = 1; i < len; i++){
        if (s[i] == current){
            continue;
        }
        current = s[i];
        result++;
    }
    if (result % 2 != 0)
        cout << "CHAT WITH HER!\n";
    else
        cout << "IGNORE HIM!\n";
 
 
    return 0;
}