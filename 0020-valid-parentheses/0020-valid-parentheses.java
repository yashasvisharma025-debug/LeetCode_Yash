import java.util.Stack;

class Solution{
    public boolean isValid(String str){
        Stack<Character> st= new Stack<>();

        for (char c: str.toCharArray()){
            if (c=='(' || c=='{' || c=='['){
                st.push(c);
            }
            else{
                if (st.isEmpty()){
                    return false;
                    }
                
            char topelement = st.pop();

            if(c==')' && topelement!='(')
            return false;
            if(c=='}' && topelement!='{')
            return false;
            if(c==']' && topelement!='[')
            return false;       
        }
    }
    return st.isEmpty();
}
}