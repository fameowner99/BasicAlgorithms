
void	merge(int *arr, int start1, int end1, int start2, int end2)
{
	int tmp[end2 - start1 + 1];
	int s1 = start1;
	int s2 = start2;
	int c = 0;

	while (s1 <= end1 && s2 <= end2)
	{
		if (arr[s1] < arr[s2])
			tmp[c++] = arr[s1++];
		else
			tmp[c++] = arr[s2++];
	}
	while (s1 <= end1)
		tmp[c++] = arr[s1++];
	while (s2 <= end2)
		tmp[c++] = arr[s2++];
	
	for (int p = start1, c = 0; p <= end2; ++p, ++c)
		arr[p] = tmp[c];
}

void	mergeSort(int *arr, int start, int end)
{
	int mid;

	if (start < end)
	{
		mid = (start + end) / 2;
		mergeSort(arr, start, mid);
		mergeSort(arr, mid + 1, end);
		merge(arr, start, mid, mid + 1, end);
	}
}
