class Solution{
    public int[] asteroidCollision(int[] asteroids){
        Stack<Integer> stack= new Stack<>();

        for (int asteroid : asteroids){
            while(!stack.isEmpty() && stack.peek()>0 && asteroid<0){
                if (stack.peek()<Math.abs(asteroid)){
                    stack.pop();
                    continue;
                }
                else if (stack.peek()==Math.abs(asteroid)){
                    stack.pop();
                }
                asteroid=0;
                break;
            }
            if (asteroid!=0){
                stack.push(asteroid);
            }
        }
        int [] newasteroids= new int[stack.size()];
        for (int i=newasteroids.length-1; i>=0; i--){
            newasteroids[i]=stack.pop();
        }
        return newasteroids;
    }
}