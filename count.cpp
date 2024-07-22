int count(int array[], int n) {
  for (int i = 0; i < 5; i++) {
    if (array[i] % 2 == 0) {
      n++;
    }
  }

  return n;
}