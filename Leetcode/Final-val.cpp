// Problem link : https://leetcode.com/problems/final-value-of-variable-after-performing-operations/

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(auto it = operations.begin();it!=operations.end();it++){
           if(*it=="--X" || *it=="X--")
               x-=1;
           else if(*it=="++X" || *it=="X++")
               x+=1;
        }
         return x;
    }
   
};
