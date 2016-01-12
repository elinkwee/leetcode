class Solution {
public:
    bool isPowerOfTwo(int n) {
        // reject n cases for <= 0

        
        // for n > 0, use bit operation logic
        
        /*int temp = n - 1;
        int check = n & temp;
        
        if(check == 0)
            return true;
        else
            return false;
        */
        //while(ll);
        return (n & (n - 1)) == 0;
        
        
        
        
        
        
        
    }
};
