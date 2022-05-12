class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len=flowerbed.size();
        int i=0; 
        if(n==0)
            return true;
        if(len==1 && n==1 && flowerbed[0]==0)
            return true;
        while(i<len) {
            if(flowerbed[i]==0) {
                if(i==0) {
                    if(flowerbed[i+1]==0) {
                        flowerbed[i]=1;
                        n--;
                    }
                }
                else if(i==len-1) {
                    if(flowerbed[i-1]==0) {
                        flowerbed[i]=1;
                        n--;
                    }
                }
                else {    
                    if(flowerbed[i-1]==0 && flowerbed[i+1]==0) {
                        flowerbed[i]=1;
                        n--;
                    }
                }
            }
            i+=1;
        }
        cout<<n;
        for(int item: flowerbed)
            cout<<item<<" ";
        return n<=0;
    }
};