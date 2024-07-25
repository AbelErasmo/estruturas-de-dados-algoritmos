#include <stdio.h>

void heapsort(int a[], int n) {
   int k, i = n / 2, pai, filho, t;
   while(k != -1) {
      if (i > 0) {
          i--;
          t = a[i];
      } else {
          n--;
          if (n <= 0) return;
          t = a[n];
          a[n] = a[0];
      }
      pai = i;
      filho = i * 2 + 1;
      while (filho < n) {
          if ((filho + 1 < n)  &&  (a[filho + 1] > a[filho]))
              filho++;
          if (a[filho] > t) {
             a[pai] = a[filho];
             pai = filho;
             filho = pai * 2 + 1;
          } else {
             break;
          }
      }
      a[pai] = t;
   }
}

void printArray(int arr[], int N) {
	int i;
	for (i = 0; i < N; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main() {
	int i, arr[] = {12, 34, 54, 2, 7, 5, 87, 100, 254, 56, 74, 80, 20, 92, 47, 6, 3, 251, 1};
	int tamanho = sizeof(arr) / sizeof(arr[0]);

	printf("Array antes da organizacao:\n");
	for (i = 0; i < tamanho; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	heapsort(arr, tamanho);
	printf("\nArray depois da organizacao:\n");
	printArray(arr, tamanho);
}
