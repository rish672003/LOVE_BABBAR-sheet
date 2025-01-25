class Solution {
  public:
    string reverseString(string& s) {
        // code here
    int left = 0;  int right = s.size() -1;
    
    while(left< right){
        swap(s[left],s[right]);
        left++;
        right--;
    }
    
    return s;
        
        
    }
};

//this is solved by Two pointers methods