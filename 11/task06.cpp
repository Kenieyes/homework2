#include <algorithm> 
#include <iostream> 
 
const int ROWS = 4; 
const int COLS = 4; 
 
void sort2DArraySnake(int arr[ROWS][COLS]) { 
  for (int z = 0; z < ROWS; z++) { 
    if (z % 2 == 0) { 
      for (int i = 1; i < COLS; i++) { 
        int k = arr[z][i]; 
        int j = i - 1; 
        while (j >= 0 && arr[z][j] > k) { 
          arr[z][j + 1] = arr[z][j]; 
          j--; 
        } 
        arr[z][j + 1] = k; 
      } 
    } else { 
      for (int i = 1; i < COLS; i++) { 
        int k = arr[z][i]; 
        int j = i - 1; 
        while (j >= 0 && arr[z][j] < k) { 
          arr[z][j + 1] = arr[z][j]; 
          j--; 
        } 
        arr[z][j + 1] = k; 
      } 
    } 
  } 
} 
 
int main() { 
  int arr[ROWS][COLS] = { 
      {5, 2, 8, 1}, 
      {9, 4, 3, 6}, 
      {7, 0, 4, 2}, 
      {8, 3, 5, 9} 
  }; 
 
  sort2DArraySnake(arr); 
  for (int row = 0; row < ROWS; ++row) { 
    for (int col = 0; col < COLS; ++col) { 
      std::cout << arr[row][col] << " "; 
    } 
    std::cout << std::endl; 
  } 
 
  return 0; 
}