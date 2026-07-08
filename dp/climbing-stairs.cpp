//70. Climbing Stairs
class Solution {
public:
    int climbStairs(int n) {
        int pre1 =1;
        if(n==1) {
            return pre1;
        }
        int pre2 =2;
        while(n>2) {
            int val = pre1 +pre2;
            pre1 = pre2;
            pre2 = val;
            n--;
        }
        return pre2;
    }
};
