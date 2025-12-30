class Solution {
public:
    int totalMoney(int n) {
        if(n<=7) return (n*(n+1))/2;
        int solid=n/7;
        int rem=n%7;
        int res=solid*21+((solid*(solid+1)/2))*7+(rem*(rem+1)/2)+rem*(solid);
        return res;
    }
};