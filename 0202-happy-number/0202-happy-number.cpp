class Solution {
public:

    int sum(int n){
      
        int sum = 0;
        while(n>0){
            int r = n%10;
            sum += r*r;
            n/=10;
        }
        return sum;
    }

    bool isHappy(int n) {
        while(n!=1 && n!=4){
            n = sum(n);
        }

        return n==1;
    }
};