 int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        int arrsize=arr.size();
        sort(arr,arr+arrsize);
        return arr[k-1];
    }
int main()
{
    int arr[]={2,25,78,34,12,45};
    kthSmallest(arr,2)
}