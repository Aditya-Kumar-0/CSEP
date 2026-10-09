class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans = 0;
        int start = 1;
        int end = 0;
        int n = piles.size();
        for(int i=0; i<n; i++){
            end = max(end,piles[i]);
        }
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            long long time = 0;
            for(int i = 0; i < n; i++) {
                time += piles[i] / mid;

                if(piles[i] % mid)
                    time++;
            }

            if(time > h) {
                start = mid + 1;
            }
            else {
                ans = mid;
                end = mid - 1;
            }
        }

        return ans;
    }
};