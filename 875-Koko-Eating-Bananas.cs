public class Solution {
    public int MinEatingSpeed(int[] piles, int h) {
        int l =1 , r=  1000000000,mid,ans=1000000000;
        while(r>=l){
            mid= (l+r)/2;
            long teste=0;
            for(int i=0; i < piles.Length;i++){
                teste += (piles[i]-1+mid)/mid;
            } 
            Console.WriteLine($"{mid} {teste}");
            if(teste<= h){
                r =mid-1;
                ans = Math.Min(ans,mid);
            }
            else{
                l =mid+1;
            }
        } 
        return ans;
    }
}