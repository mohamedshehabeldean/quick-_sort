#include<iostream>
using namespace std;
void quick_sort(int arr[], int start, int end) {
	int left = start;
	int right = end;
	int pivot = left;
	while (left != right) {
		if (pivot == left) {
			if (arr[pivot] <= arr[right]) {
				right--;
			}
			else
			{
				swap(arr[pivot], arr[right]);
				pivot = right;
			}

		}
		else if (pivot == right) {
			if (arr[pivot] >= arr[left]) {
				left++;
			}
			else
			{
				swap(arr[pivot], arr[left]);
				pivot = left;
			}

		}
	}
	if (start < pivot) {
		quick_sort(arr, start, pivot - 1);
	}
	if (end > pivot) {
		quick_sort(arr, pivot + 1, end);
	}

}
void printarray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;

}


int main() {
	int arr[] = { 7,4,3,2,19,2,8 };
	int n = sizeof(arr) / sizeof(arr[1]);
	quick_sort(arr, 0, n - 1);
	printarray(arr, n);

	system("pause");
	return 0;
}