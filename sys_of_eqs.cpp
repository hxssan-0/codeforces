//system of equations
#include <iostream>
using namespace std;
 
int main() {
   
    int n, m;
    cin >> n >> m;
    int sol = 0;
    for (int a = 0; (a*a) <= n; a++){
        int b = n - (a*a);
 
        if (b >= 0 && a + (b*b) == m)
            sol++;
    }
    cout << sol << endl;
 
 
    return 0;
}