class Solution {
  public:
    string sortString(string &s) {
        // code here
        vector<int>temp(26,0);
        for(int i=0; i<s.size(); i++){
            temp[s[i]-'a']++;
        }
        string ans;
        for(int i=0; i<26; i++){
            char c = 'a' + i;
            while(temp[i]){
                ans+=c;
                temp[i]--;
            }
        }
        return ans;
    }
};