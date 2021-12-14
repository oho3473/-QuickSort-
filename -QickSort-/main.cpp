#include<iostream>

void PrintArray(int input[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << input[i] << " ";
	}
}

void Swap(int& x, int& y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}

void QuickSort(int input[], int left, int right)
{
	int i = left;
	int j = right;
	int pivot = input[(left + right) / 2];

	//while과 차이점은 무조건 한번 실행
	do
	{
		while (input[i] < pivot)
		{
			i++;
		}
		while (input[j] > pivot)
		{
			j--;
		}

		if (i <= j)
		{
			Swap(input[i], input[j]);
			i++;
			j--;
		}
	} while (i <= j);

	if (left < j)
	{
		QuickSort(input, left, j);
	}

	if (i < right)
	{
		QuickSort(input, i, right);
	}

}

int main()
{
	int array[5]{ 8,7,2,3,1 };

	QuickSort(array, 0, 4);

	PrintArray(array, 5);
}