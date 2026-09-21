class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater = 0;
        int lp = 0 , rp = height.size()-1;
        while(lp < rp){
            int w = rp - lp ;
            int l = min(height[rp] ,height[lp]);
            int area = l * w;
            maxwater = max(maxwater , area);
            height[lp] < height[rp] ? lp++ : rp--;
        }
        
        return maxwater;
    }
};