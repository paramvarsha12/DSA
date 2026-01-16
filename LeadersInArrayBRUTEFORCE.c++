int leaders(vector<int> &arr, int n) {
    int ans =0;
    for (int i=0; i<n; i++) {
        leader = true;
        for (int j = i+1; j<n; j++) {
            if (arr[j] < arr[i]) {
                leader = false;
                break;
            }
        }

        if(leader == true) {
            ans.add(arr[i]);
        }
    }
}