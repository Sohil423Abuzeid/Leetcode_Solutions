class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        return (t>=max(abs(sy-fy),abs(sx-fx)))&&(abs(sy-fy)+abs(sx-fx)>0||(t==0||t>1));//&&((t-abs(sy-fy)+abs(sx-fx))%2==0);
    }
};