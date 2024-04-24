public class Solution {
    public int Tribonacci(int n) {
        int[] asd = new int[100];
        asd[0]=0;
        asd[2]=asd[1]=1;
        for(int i =3 ; i< 100 ; i++){
            asd[i]=asd[i-1]+asd[i-2]+asd[i-3];
        }
        return asd[n];
    }
}