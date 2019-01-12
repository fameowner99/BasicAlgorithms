void	swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		partition(int *arr, int start, int end)
{
	int j = start;
	int i = start - 1;
	int pivot = arr[end];

	while (j < end)
	{
		if (arr[j] < pivot)
		{
			++i;
			swap(&arr[i], &arr[j]);
		}
		++j;	
	}
	swap(&arr[i + 1], &arr[end]);
	return (i + 1);
}

void	quickSort(int *arr, int start, int end)
{
	int pivot;

	if (start < end)
	{
		pivot = partition(arr, start, end);
		quickSort(arr, start, pivot - 1);
		quickSort(arr, pivot + 1, end);				
	}
}
