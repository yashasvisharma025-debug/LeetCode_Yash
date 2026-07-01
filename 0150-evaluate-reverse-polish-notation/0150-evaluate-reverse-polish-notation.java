import java.util.Stack;

class Solution{
    public int evalRPN(String[] elements){
        Stack<Integer> st= new Stack<>();
        for (String e:elements){
            if (e.equals("+") || e.equals("-") || e.equals("*")|| e.equals("/")){
                int b=st.pop();
                int a=st.pop();

                if (e.equals("+")){
                    st.push(a+b);
                }
                else if (e.equals("-")){
                    st.push(a-b);
                }
                else if (e.equals("*")){
                    st.push(a*b);
                }
                else if (e.equals("/")){
                    st.push(a/b);
                }
            }
            else{
                st.push(Integer.parseInt(e));
            }
        }
        return st.pop();
    }
}