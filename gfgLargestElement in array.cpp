int largest(int arr[], int n) {
    int ans = arr[0];
    
    for(int i=0;i<n;i++){
        if(arr[i]>=ans){
            ans = arr[i];
        }
    }
    return ans;
}