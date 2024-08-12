#include <iostream>

int *readNumbers() {
  int* user_array = new int[10];

  for (int i = 0; i < 10; i++) {
    std::cin >> user_array[i];
  }

  return user_array;
}

void printNumbers(int *numbers,int length) {
  for (int i = 0; i < length; i++) {
    std::cout << i << " " << numbers[i] << std::endl;
  }

  return;
}

void hexDigits(int *numbers,int length) {
  for (int i = 0; i < length; i++) {
    std::cout << i << " " << numbers[i] << " ";

    switch (numbers[i])
    {
    case 0:
      std::cout << 0;
      break;
    
    case 1:
      std::cout << 1;
      break;

    case 2:
      std::cout << 2;
      break;

    case 3:
      std::cout << 3;
      break;

    case 4:
      std::cout << 4;
      break;

    case 5:
      std::cout << 5;
      break;

    case 6:
      std::cout << 6;
      break;

    case 7:
      std::cout << 7;
      break;

    case 8:
      std::cout << 8;
      break;

    case 9:
      std::cout << 9;
      break;

    case 10:
      std::cout << 'A';
      break;

    case 11:
      std::cout << 'B';
      break;

    case 12:
      std::cout << 'C';
      break;

    case 13:
      std::cout << 'D';
      break;

    case 14:
      std::cout << 'E';
      break;

    case 15:
      std::cout << 'F';
      break;

    default:
      break;
    }

    std::cout << std::endl;
  }

  return;
}

bool equalsArray(int *numbers1,int *numbers2,int length) {
  for (int i = 0; i < length; i++) {
    if (numbers1[i] != numbers2[i]) {
      return false;
    }
  }

  return true;
}

int *reverseArray(int *numbers1,int length) {
  int* numbers_reversed = new int[length];

  for (int i = 0; i < length; i++) {
    numbers_reversed[i] = numbers1[length - i];
  }

  return numbers_reversed;
}

int secondSmallestSum(int *numbers,int length) {
  int sum_i = 0;
  int smallest;
  int second_smallest;

  if (numbers[0] < numbers[1]) {
    smallest = numbers[0];
    second_smallest = numbers[1];
  } else {
    smallest = numbers[1];
    second_smallest = numbers[0];
  }

  for (int i = 0; i < length; i++) {
    for (int j = i; j < length; j++) {
      sum_i += numbers[i];
    }

    if (smallest > sum_i) {
      smallest = sum_i;
      break;
    } else if (second_smallest > sum_i) {
      second_smallest = sum_i;
    }
  }

  return second_smallest;
}