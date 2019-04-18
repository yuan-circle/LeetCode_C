/*****************************
Using binary search for O(logn).If not find the target,return the begin who is the next position to be inserted
*****************************/

int searchInsert(int* nums, int numsSize, int target) {
    int begin = 0;
    int end = numsSize - 1;
    int median = (begin + end) / 2;
    while(begin <= end){
        if(nums[median] == target){
            return median;
        }
        else if(nums[median] < target){
            begin = median + 1;
        }
        else{
            end = median - 1;
        }
        median = (begin + end) / 2;
    }
    return begin;
}
