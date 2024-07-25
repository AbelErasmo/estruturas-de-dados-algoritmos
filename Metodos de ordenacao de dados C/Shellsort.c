#include <stdio.h>

void shellSort(int *vet, int size) {
    int i, j, value;
    int h = 1;
    while(h < size) {
        h = 3*h+1;
    }
    while (h > 0) {
        for(i = h; i < size; i++) {
            value = vet[i];
            j = i;
            while (j > h-1 && value <= vet[j - h]) {
                vet[j] = vet[j - h];
                j = j - h;
            }
            vet[j] = value;
        }
        h = h/3;
    }
}

//int shellSort(int arr[], int n) {
//	int w, i;
//	for (w = n/2; w > 0; w /= 2) {
//		for (i = w; i < n; i += 1) 		{
//			int temp = arr[i];
//			int j;
//			for (j = i; j >= w && arr[j - w] > temp; j -= w)
//				arr[j] = arr[j - w];
//			arr[j] = temp;
//		}
//	}
//	return 0;
//}

void printArray(int arr[], int n) {
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
}

int main() {
	int arr[] = {12, 34, 54, 2, 7, 5, 87, 100, 254, 56, 74, 80, 20, 92, 47, 6, 3, 251};
	int n = sizeof(arr)/sizeof(arr[0]);

	printf("Array antes de classificacao: \n");
	printArray(arr, n);

	shellSort(arr, n);

	printf("\nArray depois de classificacao: \n");
	printArray(arr, n);

	return 0;
}

