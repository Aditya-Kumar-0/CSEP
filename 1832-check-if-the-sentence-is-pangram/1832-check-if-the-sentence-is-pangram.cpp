class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>ans(26,0);

        for(int i=0; i<sentence.size(); i++){
            ans[sentence[i]-'a'] = 1;
        }

        for(int i=0; i<ans.size(); i++){
            if(ans[i]==0){
                return false;
            }
        }
        return true;
    }
};