/* -------------------- QUESTION 4 : MAXIMUM SUBARRAY SUM -------------------- */
int maxSubArraySum(int arr[], int n) {
    int maxSum = arr[0];
    int currSum = arr[0];

    for (int i = 1; i < n; i++) {
        currSum = max(arr[i], currSum + arr[i]);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

/* -------------------- MAIN FUNCTION -------------------- */
int main() {

    /* Q1: Binary Search */
    int arr1[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int key = 23;

    int result = binarySearch(arr1, n1, key);
    if (result != -1)
        cout << "Binary Search: Element found at index " << result << endl;
    else
        cout << "Binary Search: Element not found" << endl;

    /* Q2: Merge Sort */
    int arr2[] = {12, 11, 13, 5, 6, 7};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    mergeSort(arr2, 0, n2 - 1);
    cout << "Merge Sort (Array 1): ";
    for (int i = 0; i < n2; i++)
        cout << arr2[i] << " ";
    cout << endl;

    int arr3[] = {38, 27, 43, 3, 9, 82, 10};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);

    mergeSort(arr3, 0, n3 - 1);
    cout << "Merge Sort (Array 2): ";
    for (int i = 0; i < n3; i++)
        cout << arr3[i] << " ";
    cout << endl;

    /* Q3: Quick Sort */
    int arr4[] = {4, 2, 6, 9, 2};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);

    quickSort(arr4, 0, n4 - 1);
    cout << "Quick Sort: ";
    for (int i = 0; i < n4; i++)
        cout << arr4[i] << " ";
    cout << endl;

    /* Q4: Maximum Subarray Sum */
    int arr5[] = {-2, -5, 6, -2, -3, 1, 5, -6};
    int n5 = sizeof(arr5) / sizeof(arr5[0]);

    cout << "Maximum Subarray Sum: " << maxSubArraySum(arr5, n5) << endl;

    return 0;
}
