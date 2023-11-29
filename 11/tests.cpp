
#include "tasks11.h"
#include <gtest/gtest.h>

// first test
TEST(BubbleSortTest, PositiveTest) {
  int arr[] = {5, 2, 8, 1, 9};
  int expected[] = {1, 2, 5, 8, 9};
  int size = sizeof(arr) / sizeof(arr[0]);

  bubbleSort(arr, size);

  for (int i = 0; i < size; ++i) {
    EXPECT_EQ(arr[i], expected[i]);
  }
}

TEST(BubbleSortTest, NegativeTest) {
  int arr[] = {9, 5, 2, 8, 1};
  int expected[] = {1, 2, 5, 8, 9};
  int size = sizeof(arr) / sizeof(arr[0]);

  bubbleSort(arr, size);

  for (int i = 0; i < size; ++i) {
    EXPECT_EQ(arr[i], expected[i]);
  }
}

TEST(BubbleSortTest, EmptyArrayTest) {
  int arr[] = {};
  int expected[] = {};
  int size = sizeof(arr) / sizeof(arr[0]);

  bubbleSort(arr, size);

  for (int i = 0; i < size; ++i) {
    EXPECT_EQ(arr[i], expected[i]);
  }
}

TEST(BubbleSortTest, SingleElementTest) {
  int arr[] = {5};
  int expected[] = {5};
  int size = sizeof(arr) / sizeof(arr[0]);

  bubbleSort(arr, size);

  for (int i = 0; i < size; ++i) {
    EXPECT_EQ(arr[i], expected[i]);
  }
}

TEST(BubbleSortTest, AlreadySortedTest) {
  int arr[] = {1, 2, 3, 4, 5};
  int expected[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);

  bubbleSort(arr, size);

  for (int i = 0; i < size; ++i) {
    EXPECT_EQ(arr[i], expected[i]);
  }
}


// second test
TEST(SelectionSortTest, PositiveTest) {
    int arr[] = {5, 2, 8, 1, 9};
    int expected[] = {9, 8, 5, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);

    for (int i = 0; i < size; ++i) {
        EXPECT_EQ(arr[i], expected[i]);
    }
}

// Negative test case
TEST(SelectionSortTest, NegativeTest) {
    int arr[] = {1, 2, 3, 4, 5};
    int expected[] = {1, 2, 5, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);

    for (int i = 0; i < size; ++i) {
        EXPECT_NE(arr[i], expected[i]);
    }
}

// tretiy test
TEST(InsertionSortTest, PositiveTest) {
  int arr[] = {5, 2, 8, 1, 9};
  int expected[] = {1, 2, 5, 8, 9};
  int size = sizeof(arr) / sizeof(arr[0]);

  insertionSort(arr, size);

  for (int i = 0; i < size; ++i) {
    EXPECT_EQ(arr[i], expected[i]);
  }
}

TEST(InsertionSortTest, NegativeTest) {
  int arr[] = {9, 5, 2, 8, 1};
  int expected[] = {1, 2, 5, 8, 9};
  int size = sizeof(arr) / sizeof(arr[0]);

  insertionSort(arr, size);

  for (int i = 0; i < size; ++i) {
    EXPECT_EQ(arr[i], expected[i]);
  }
}

TEST(InsertionSortTest, EmptyArrayTest) {
  int arr[] = {};
  int expected[] = {};
  int size = sizeof(arr) / sizeof(arr[0]);

  insertionSort(arr, size);

  for (int i = 0; i < size; ++i) {
    EXPECT_EQ(arr[i], expected[i]);
  }
}

TEST(InsertionSortTest, SingleElementTest) {
  int arr[] = {5};
  int expected[] = {5};
  int size = sizeof(arr) / sizeof(arr[0]);

  insertionSort(arr, size);

  for (int i = 0; i < size; ++i) {
    EXPECT_EQ(arr[i], expected[i]);
  }
}

TEST(InsertionSortTest, AlreadySortedTest) {
  int arr[] = {1, 2, 3, 4, 5};
  int expected[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);

  insertionSort(arr, size);

  for (int i = 0; i < size; ++i) {
    EXPECT_EQ(arr[i], expected[i]);
  }
}

// chetvertiy test
TEST(SelectionSortTest2, PositiveTest) {
  int arr[] = {5, 2, 8, 1, 9, 4, 3, 6, 7, 0, 4, 2};
  int expected[] = {9, 8, 7, 6, 5, 4, 4, 3, 2, 2, 1, 0};
  int size = sizeof(arr) / sizeof(arr[0]);

  selectionSort(arr, size);

  for (int i = 0; i < size; ++i) {
    EXPECT_EQ(arr[i], expected[i]);
  }
}

TEST(SelectionSortTest2, NegativeTest) {
  int arr[] = {5, 2, 8, 1, 9, 4, 3, 6, 7, 0, 4, 2};
  int expected[] = {9, 8, 7, 6, 5, 4, 4, 3, 2, 2, 1, 0};
  int size = sizeof(arr) / sizeof(arr[0]);

  selectionSort(arr, size);

  for (int i = 0; i < size; ++i) {
    EXPECT_EQ(arr[i], expected[i]);
  }
}

TEST(SelectionSortTest2, EmptyArrayTest) {
  int arr[] = {};
  int expected[] = {};
  int size = sizeof(arr) / sizeof(arr[0]);

  selectionSort(arr, size);

  for (int i = 0; i < size; ++i) {
    EXPECT_EQ(arr[i], expected[i]);
  }
}
TEST(SelectionSortTest2, SingleElementTest) {
  int arr[] = {5};
  int expected[] = {5};
  int size = sizeof(arr) / sizeof(arr[0]);

  selectionSort(arr, size);

  for (int i = 0; i < size; ++i) {
    EXPECT_EQ(arr[i], expected[i]);
  }
}

TEST(SelectionSortTest2, AlreadySortedTest) {
  int arr[] = {0, 1, 2, 2, 3, 4, 4, 5, 6, 7, 8, 9};
  int expected[] = {9, 8, 7, 6, 5, 4, 4, 3, 2, 2, 1, 0};
  int size = sizeof(arr) / sizeof(arr[0]);

  selectionSort(arr, size);

  for (int i = 0; i < size; ++i) {
    EXPECT_EQ(arr[i], expected[i]);
  }
}


// pyatiy test

// Positive test case
TEST(Sort2DArrayColumnByColumnTest, PositiveTest) {
    int arr[ROWS][COLS] = {{5, 2, 9}, {1, 8, 3}, {4, 7, 6}};
    int expectedArr[ROWS][COLS] = {{1, 2, 3}, {4, 7, 6}, {5, 8, 9}};

    sort2DArrayColumnByColumn(arr);

    // Check if the array is sorted correctly
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            EXPECT_EQ(arr[i][j], expectedArr[i][j]);
        }
    }
}

// Negative test case
TEST(Sort2DArrayColumnByColumnTest, NegativeTest) {
    // Test with an empty array
    int arr[ROWS][COLS] = {};
    int expectedArr[ROWS][COLS] = {};

    sort2DArrayColumnByColumn(arr);

    // Check if the array remains unchanged
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            EXPECT_EQ(arr[i][j], expectedArr[i][j]);
        }
    }
}


// six test
// Positive test case
TEST(sort2DArraySnake, PositiveTest) {
    int arr[ROWS2][COLS2] = {{5, 2, 8, 1}, {9, 4, 3, 6}, {7, 0, 4, 2}, {8, 3, 5, 9}};
    int expectedArr[ROWS2][COLS2] = {{1, 2, 5, 8}, {9, 6, 4, 3}, {0, 2, 4, 7}, {9, 8, 5, 3}};

    sort2DArraySnake(arr);

     // Check if the array is sorted correctly
    for (int row = 0; row < ROWS2; row++) {
        for (int col = 0; col < COLS2; col++) {
            EXPECT_EQ(arr[row][col], expectedArr[row][col]);
        }
    }
}
// Negative test case
TEST(sort2DArraySnake, NegativeTest) {
    int arr[ROWS2][COLS2] = {{5, 2, 8, 1}, {9, 4, 3, 6}, {7, 0, 4, 2}, {8, 3, 5, 9}};
    int expectedArr[ROWS2][COLS2] = {{8, 5, 2, 1}, {3, 4, 6, 9}, {7, 4, 2, 0}, {3, 5, 8, 9}};

    sort2DArraySnake(arr);

     // Check if the array is sorted correctly
    for (int row = 0; row < ROWS2; row++) {
        for (int col = 0; col < COLS2; col++) {
            EXPECT_NE(arr[row][col], expectedArr[row][col]);
        }
    }
}


int main(int argc, char** argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}