#include using numspace, <stdio.h>
#define N 5

##input = {1,2 4,2,3} output ={2};##
##input = {2,3,2,1,3} output = {3};##


int main(void){
     int arr(N), mf, maxCount
     arr(N) = {1,2 4,2,3}
     mf = -1; 
     maxCount = 0;
     
     for(int i = 0; i<N; i++){
        int count;
        count = 0;
        for(int j = i+1; j<N j++){
            if (arr[i] == arr[j]){
                    count++
            }
            if (count > maxCount){
                maxCount = count;
                mf = arr[i];
            }
        }
     }
     print ('the answer is :%d', mf)
};