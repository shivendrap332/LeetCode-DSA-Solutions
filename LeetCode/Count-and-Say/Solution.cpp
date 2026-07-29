class Solution {
public:
    string countAndSay(int n) {
        string vec = "" ; 
        vec.push_back(1 + '0') ; 
        string ans = "";  
        int count = 1 ; 

        if (n == 1) return "1" ; 

        int j = 1 ; 
        
        while(j < n){
            count = 1 ;
            for(int i = 1 ; i <= vec.size(); i++){
                if (i == vec.size()){
                    ans.push_back(count + '0'); 
                    ans.push_back(vec[i-1]);
                    break ; 
                }

                if (vec[i] == vec[i-1]){
                    count++ ; 
                }

                else{
                    ans.push_back(count + '0'); 
                    ans.push_back(vec[i-1]) ; 
                    count = 1 ; 
                }
            }
                vec = "" ;
                vec = ans ; 
                ans = "" ;  
                j++ ; 
        }
        ans = vec ; 
        return ans ; 
    }
};