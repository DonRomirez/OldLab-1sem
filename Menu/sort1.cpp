void sort(int* a, int n) {
	int i, j, c;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1; j++)
			if (a[j] > a[j + 1]) {
				c = a[j];
				a[j] = a[j + 1];
				a[j + 1] = c;

			}
	}
}