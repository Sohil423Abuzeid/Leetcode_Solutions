public class Solution {
    public int Tribonacci(int n) {
        if(n<=2) return n>0?1:0;
        int[] asd = new int[n+1];
        asd[0]=0;
        asd[2]=asd[1]=1;
        for(int i =3 ; i< n+1 ; i++){
            asd[i]=asd[i-1]+asd[i-2]+asd[i-3];
        }
        return asd[n];
    }
}