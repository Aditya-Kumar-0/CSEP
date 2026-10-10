class Solution {
public:

    int findDays(vector<int>weight, int cap){
        int load = 0;
        int days = 1;
        for(int i=0; i<weight.size(); i++){
            if(load+weight[i]>cap){
                days++;
                load = weight[i];
            }
            else{
                load += weight[i];
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int start = 0;
        int end = 0;
        for(int i=0; i<n; i++){
            start = max(start,weights[i]);
            end+=weights[i];
        }

        while(start<=end){
            int mid = start + (end - start)/2;
            int NoOfDays = findDays(weights,mid);
            if(NoOfDays<=days){
                end = mid - 1;
            }
            else
            start = mid + 1;
        }
        return start;

    }
};