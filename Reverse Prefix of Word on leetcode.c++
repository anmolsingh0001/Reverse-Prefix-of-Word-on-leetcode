class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans;
        int z=0;
        for(int i=0; i<word.size(); i++){
            if(word[i]==ch){
                z=1;
                for(int j=i; j>-1; j--){
                    ans+=word[j];

                    }
                   for(int y=i+1; y<word.size(); y++){
                    ans+=word[y];
                }
                break;
            }
            else{
                z=0;
            }
        }
        if(z==1){
        return ans;
        }
        else{
            return word;
        }
       
    }
};