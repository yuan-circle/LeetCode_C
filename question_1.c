/*************************
q1 using bruteforce beacuse I'm too lazy to build a hash table in C
*************************/

int* twoSum(int* nums, int numsSize, int target) {
    int * answer;
    for(int i = 0;i < numsSize;i++){
        for(int j = i+1;j < numsSize;j++){
            if(nums[i] + nums[j] == target){
                answer = malloc(2 * sizeof(int));
                answer[0] = i;
                answer[1] = j;
                return answer;
            }
        }
    }
    return NULL;
}
