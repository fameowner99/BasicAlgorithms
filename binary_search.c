int binarySearch(int *arr, int left, int right, int value)
{
	int mid;

	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > value)
			right = mid - 1;
		else if (arr[mid] < value)
			left = mid + 1;
		else
			return (mid);
		
	}
	return (-1);
}

int	binarySearch_recursive(int *arr, int left, int right, int value)
{
	int mid = (left + right) / 2;

	if (left > right)
		return (-1);
	if (arr[mid] > value)
		return (binarySearch_recursive(arr, left, mid - 1, value));
	else if (arr[mid] < value)
		return (binarySearch_recursive(arr, left + 1, right, value));
	return (mid);
}
