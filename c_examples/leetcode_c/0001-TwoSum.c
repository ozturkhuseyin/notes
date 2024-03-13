int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int* ret;

    ret = (int*)malloc(sizeof(int) * 2);
    if (!ret) {return 0;}
    ret[0] = 0;
    ret[1] = 0;
    *returnSize = 2;

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                
                ret[0] = i;
                ret[1] = j;
                return ret;
            }
        }
    }
    *returnSize = 0;
    return 0;
}
