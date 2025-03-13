//Is your horseshoe on the other hoof?
#include <iostream>
using namespace std;
 
int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    int arr[4] = {s1, s2, s3, s4};
    for (int i = 3; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j+1] < arr[j]) {
                arr[j] = arr[j] ^ arr[j+1];
                arr[j+1] = arr[j] ^ arr[j+1];
                arr[j] = arr[j] ^ arr[j+1];
            }
        }
    }
    int current = arr[0];
    int unique_count = 0;
    for (int i = 1; i < 4; i++){
        if (arr[i] == current){
            continue;
        }
        current = arr[i];
        unique_count++;
    }
    cout << (3-unique_count) << endl;
 
    return 0;
}