//arrival of the general
#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    //finding min and max
    int max = arr[0];
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
      if (arr[i] > max) {
        max = arr[i];
        maxIndex = i;
      }
    }
 
    int steps = 0;
    while (maxIndex != 0) {
      if ((maxIndex != 0) && (arr[maxIndex] > arr[maxIndex-1])) {
        swap(arr[maxIndex], arr[maxIndex-1]);
        maxIndex--;
        steps++;
      }
    }
 
    //now finding the new minIndex
    int min = arr[0];
    int minIndex = 0;
    for (int i = 1; i < n; i++) {
      if (arr[i] <= min) {
        min = arr[i];
        minIndex = i;
      }
    }
 
    while (minIndex != n-1) {
        swap(arr[minIndex], arr[minIndex+1]);
        minIndex++;
        steps++;
    }
 
    cout << steps << '\n'; 
 
    return 0;
}