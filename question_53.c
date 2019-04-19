/*****************************
I have seem this question before in my algorithm class,and using suffix method to make my program more efficient in O(n).
*****************************/

int maxSubArray(int* nums, int numsSize) {
    int suffix = 0;
    int index = 0;
    int max = 0;
    int tmax = 0;
    int min = INT_MIN;
    int tag = 0;
    while(index < numsSize){
        suffix += nums[index];
        if(suffix < 0){
            suffix = 0;
            max = tmax > max ? tmax : max;
            tmax = 0;
            min = min > nums[index] ? min : nums[index];
        }
        else{
            tag = 1;
            tmax = suffix;
            max = tmax > max ? tmax : max;
        }
        index++;
    }
    if(tag == 0){
        return min;
    }
    return max;
}
