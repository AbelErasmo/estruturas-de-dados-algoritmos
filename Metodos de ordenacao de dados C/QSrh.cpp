#include <iostream>

void quicksort(int values[], int began, int end)
{
	int i, j, pivo, aux;
	i = began;
	j = end-1;
	pivo = values[(began + end) / 2];
	while(i <= j)
	{
		while(values[i] < pivo && i < end)
		{
			i++;
		}
		while(values[j] > pivo && j > began)
		{
			j--;
		}
		if(i <= j)
		{
			aux = values[i];
			values[i] = values[j];
			values[j] = aux;
			i++;
			j--;
		}
	}
	if(j > began)
		quicksort(values, began, j+1);
	if(i < end)
		quicksort(values, i, end);
}

int main(int argc, char *argv[])
{
	int array[20] = {5, 8, 1, 2, 7, 3, 6, 9, 4, 10, 7, 5, 8, 54, 9, 63, 4, 86, 45, 547};
	for(int i = 0; i < 20; i++)
	{
		std::cout << array[i] << ' ';
	}
	std::cout << std::endl;
	quicksort(array, 0, 20);
	for(int i = 0; i < 20; i++)
	{
		std::cout << array[i] << ' ';
	}
	return 0;
}
