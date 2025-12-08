class Solution {
public:
    int countTriples(int n) {
        int cnt=0;
        for(int i=1;i<=n;i++){
               for(int j=i+1;j<=n;j++){
                for(int k=i+2;k<=n;k++){
                    if(i*i + j*j == k*k) cnt++;
                }
               }
        }
        return 2*cnt;
    }
};

          