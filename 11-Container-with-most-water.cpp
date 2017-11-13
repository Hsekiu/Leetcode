class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int max, newmax = 0;
        
        //While two pointers don't go past each other.
        while(left != right && left < right) {
            //Left pointer is greater.
            if(height[left] > height[right]) {
                newmax = height[right] * (right - left);
                if(newmax > max) {
                    max = newmax;
                }
                right--;
            //Right pointer is greater.
            } else {
                newmax = height[left] * (right - left);
                if(newmax > max) {
                    max = newmax;
                }
                left++; 
            }
        }
        return max;
    }
};