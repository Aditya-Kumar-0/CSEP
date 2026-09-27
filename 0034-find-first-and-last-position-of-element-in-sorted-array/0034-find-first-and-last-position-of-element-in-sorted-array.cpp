class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1,first=-1,last=-1,mid;
        //for first position
        while(low<=high){
            mid = low + (high-low)/2;
            if(nums[mid]==target){
                first = mid;
                high = mid - 1;
            }
            else if(nums[mid]<target){
                low = mid + 1;
            }
            else
            high = mid -1;
        }

        //for last position
        low=0,high=nums.size()-1;
        while(low<=high){
            mid = low + (high-low)/2;
            if(nums[mid]==target){
                last = mid;
                low = mid + 1;
            }
            else if(nums[mid]<target){
                low = mid + 1;
            }
            else
            high = mid -1;
        }
        vector<int>a(2);
        a[0] = first;
        a[1] = last;

        return a;
    }
};