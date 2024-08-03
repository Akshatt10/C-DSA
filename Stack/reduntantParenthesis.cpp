Class Solution {
  public:
    int checkRedundancy(string s) {
        stack<char> st;
        for (auto ch : s){
            if(ch!=')'){
                st.push(ch);
            }
            else{
                bool is_operator = false;
                while(!st.empty() && st.top() != '('){
                    char top= st.top();
                    if(top =='+' || top =='-' || top =='*' || top == '/'){
                        
                        is_operator = true;
                    }
                    
                    st.pop();
                }
                st.pop();
                if(is_operator == false) {
                    return true;
                }
            }
            
            
        }
        return false;
    }
};