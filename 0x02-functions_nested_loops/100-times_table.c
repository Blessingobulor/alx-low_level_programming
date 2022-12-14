void print_times_table(int n) {
  if (n < 0 || n > 15) {
    return;
  }
  for (int i = 0; i <= 10; i++) {
    printf(“%d * %d = %d\n”, n, i, n * i);
  }
}
