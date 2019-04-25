/***************************
This problem is asked for solving that given an integer X,find the square of X.I use binary search to solve this problem.
The return variabal type is int,but I return long because the computation of n^2 may be out of the bound of type int.It still works
,so I think it is a little ambiguous.
***************************/

int mySqrt(int x){
    if(x == 0 || x == 1){
        return x;
    }
    long low = 0,high = x;
    long mid;
    while(low < high-1){
        mid = (low + high) / 2;
        if(mid * mid > x){
            high = mid;
        }
        else if(mid * mid < x){
            low = mid;
        }
        else{
            return mid;
        }
    }
    return high - 1;
}
