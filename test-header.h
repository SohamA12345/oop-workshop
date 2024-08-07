double arrayMin(double* ptr, int n) {
  double min = *ptr;

  for (int i = 0; i < n; i++) {
    if (min > ptr[i]) {
      min = ptr[i];
    }
  }
  
  return min;
}

void modifyArray(double* ptr, int n, int m) {
  for (int i = 0; i < n; i++) {
    ptr[i] += m;
  }

  return;
}

double* dubplicateArray(double* array, int size) {
  double* dup_array = new double[size];

  for (int i = 0; i < size; i++) {
    dup_array[i] = array[i];
  }

  return dup_array;
}