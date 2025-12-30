class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,pro=1;
        int org=n;
        while(n>0){
            int last=n%10;
            sum+=last;
            pro*=last;
            n/=10;
        }
        if(org%(sum+pro)==0) return true;
        return false;
    }
};