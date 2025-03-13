#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
      int n, x;
      cin >> n >> x;
      int* a = new int[n];
      for (int i = 0; i < n; i++)
        cin >> a[i];
      double sum = 0;
      for (int i = 0; i < n; i++)
        sum += a[i];
      double avg = sum / (double)n;
      if (avg == x)
        cout << "YES\n";
      else
        cout << "NO\n";
    }
    return 0;
}