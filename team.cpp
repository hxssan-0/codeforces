#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int count = 0;
    while(n--){
        int f1, f2, f3;
        cin >> f1 >> f2 >> f3;
        if ((f1 + f2 + f3) >= 2)
            count++;
    }
    cout << count << endl;
 
    return 0;
}
