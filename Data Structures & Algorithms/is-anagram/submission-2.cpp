class Solution {
public:
    bool isAnagram(string s, string t) {
     sort(s.begin() , s.end());  // simple phle sort kardenge s ko
     sort(t.begin() , t.end()); // fir t ko bhi same sort kar denge
     if(s==t){ // agar s barabar hua t k
        return true; //  to true 
     }   
     else {
        return false; // nhi to false
     }
    }
};
