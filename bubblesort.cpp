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
    arr[i] = rand() % RAND_MAX; // fill array with random integers
  }
  // bubble sort
  for (int i = 0; i < N - 1; i++) {
    for (int j = 0; j < N - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  print_data(arr, N);
  return 0;
}
