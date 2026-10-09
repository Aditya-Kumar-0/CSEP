
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start = 1;
        int end = 0;

        for(int i = 0; i < nums.size(); i++) {
            end = max(end, nums[i]);
        }

        int ans = end;

        while(start <= end) {
            int mid = start + (end - start) / 2;
            int sum = 0;

            for(int i = 0; i < nums.size(); i++) {
                sum += nums[i] / mid;

                if(nums[i] % mid != 0) {
                    sum++;
                }

                if(sum > threshold) {
                    break;
                }
            }

            if(sum <= threshold) {
                ans = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return ans;
    }
};