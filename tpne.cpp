//The Play Never Ends
#include <iostream>
using namespace std;
 
int main()
{   
    int t;
    cin >> t;
    int k;
    for (int i = 0; i < t; i++){
        cin >> k;
        if (k == 1)
            cout << "YES\n";
        else if (k == 2)
            cout << "NO\n";
        else{
            if (k % 3 == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
 
    return 0;
}