#pragma once

void merge_sort(int a[], int length);
void merge_sort_recursion(int a[], int l, int r);
void merge_sorted_arrays(int a[], int l, int m, int r);

void merge_sort(int a[], int length)
{
	merge_sort_recursion(a, 0, length - 1);
}

void merge_sort_recursion(int a[], int l, int r)
{
	if (l < r) 
	{
		int m = (l+ r - 1) / 2;
	
		merge_sort_recursion(a, l, m);
		merge_sort_recursion(a, m+1, r);
	
		merge_sorted_arrays(a, l, m, r);
	}
}

void merge_sorted_arrays(int a[], int l, int m, int r)
{
    int left_length = m - l + 1;
    int right_length = r - m;

    // Create temporary arrays
    int* temp_left = new int[left_length];
    int* temp_right = new int[right_length];

    // Copy data to temporary arrays
    for (int i = 0; i < left_length; i++) {
        temp_left[i] = a[l + i];
    }
    for (int j = 0; j < right_length; j++) {
        temp_right[j] = a[m + 1 + j];
    }

    // Merge the temporary arrays back into arr[l..r]
    int i = 0; // Index for temp_left
    int j = 0; // Index for temp_right
    int k = l; // Index for original array a

    for (i = 0, j = 0, k = l; k <= r; k++)
    {
        // so long as we have not already reached the end of the temp_left array 
        // with our variable i, then if the next element in the left_temp array 
        // is smaller OR if we have reached the end of the temp_right array, 
        // then store the next element from temp_left into the next element in 
        // the array a
        if ((i < left_length) &&
            (j >= right_length || temp_left[i] <= temp_right[j]))
        {
            a[k] = temp_left[i];
            i++;
        }
        // otherwise if the next element in temp_right than the next element in 
        // temp_left OR we have reached the end of temp_left, store the next 
        // element from the temp_right array into the next element in array a
        else
        {
            a[k] = temp_right[j];
            j++;
        }
    }

    // Free dynamically allocated memory
    delete[] temp_left;
    delete[] temp_right;
}
