class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low=0,high=arr.size()-1, mid, ans=arr.size();
        while(low<=high){
            mid = low + (high - low)/2;
            //kitne number missing h -> arr[mid]-mid-1
            if(arr[mid]-mid-1>=k){
                ans = mid;
                high = mid - 1;
            }
            else
            low = mid + 1;
        }
        return ans+k;
    }
};