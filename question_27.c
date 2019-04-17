/**********************************
Same as my cpp solution,but it's however fast than 88% people.The better soutione maybe is the pointer method to maintain the list.
**********************************/

int removeElement(int* nums, int numsSize, int val) {
    int answer = 0,index = 0;
    while(index < numsSize){
        if(nums[index] != val){
            nums[answer] = nums[index];
            answer++;
        }
        index++;
    }
    return answer;
}
