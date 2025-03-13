#include <iostream>
using namespace std;
 
int main() {
   int n;
   cin >> n;
   int** arr = new int*[n];
   for (int i = 0; i < n; i++){
    arr[i] = new int[n];
   }
   for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
        cin >> arr[i][j];
    }
   }
   int sum = 0;
   //primary diagonal
   for (int i = 0; i < n; i++){
    sum += arr[i][i];
    arr[i][i] = 0;
   }
   //secondary diagonal
   for (int i = n-1, j = 0; i >= 0 && j < n; i--, j++){
    sum += arr[i][j];
    arr[i][j] = 0;
   }
   for (int i = (n-1)/2, j = 0; j < n; j++){
    sum += arr[i][j];
    arr[i][j] = 0;
   }
   for (int i = 0, j = (n-1)/2; i < n; i++){
    sum += arr[i][j];
    arr[i][j] = 0;
   }
   cout << sum << endl;
   
 
 
    return 0;
}