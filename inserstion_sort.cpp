#include <iostream>

using namespace std;

void print_data(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    if (i > 0) cout << ' ';
    cout << arr[i];
  }
}

int main() {
  const int N = 1000;
  int arr[N];
  for (int i = 0; i < N; i++) {
    arr[i] = rand() % RAND_MAX;
  }
  for (int i = 1; i < N; i++) {
    int key = i;
    int j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    // move the element to its correct position
    arr[j + 1] = key;
  }
  print_data(arr, N);
  return 0;
}
