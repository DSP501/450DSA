void rotate(int arr[], int n)
{
    int last = arr[n-1];
    int i = n-2;
    for(i; i>=0; i--) 
        arr[i +1] = arr[i];
    arr[0] = last;
}
