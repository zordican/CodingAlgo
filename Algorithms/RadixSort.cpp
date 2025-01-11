#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int getMax(vector<int>& nums, int size) {
  int max = nums[0];

  for (int i = 1; i < size; i++){if (nums[i] > max)max = nums[i];}

  return max;
}

// Using counting sort to sort the elements in the basis of significant places
void countingSort(vector<int>& nums, int size, int place) {
  const int max = 10;
  int output[size];
  vector<int> count(max, 0);

 
  for (int i = 0; i < size; i++)
    count[(nums[i] / place) % 10]++;

  
  for (int i = 1; i < max; i++)
    count[i] += count[i - 1];

 
  for (int i = size - 1; i >= 0; i--) {
    output[count[(nums[i] / place) % 10] - 1] = nums[i];
    count[(nums[i] / place) % 10]--;
  }

  for (int i = 0; i < size; i++)
    nums[i] = output[i];
}


void radixsort(vector<int>& nums, int size) {
  
  int max = getMax(nums, size);

  
  for (int place = 1; max / place > 0; place *= 10)
    countingSort(nums, size, place);
}

// Print an array
// void printArray(int array[], int size) {
//   int i;
//   for (i = 0; i < size; i++)
//     cout << array[i] << " ";
//   cout << endl;
// }

// Driver code
int main() {
  vector<int> array = {121, 432, 564, 23, 1, 45, 788};
  int n = sizeof(array) / sizeof(array[0]);
  radixsort(array, n);
//   printArray(array, n);
}