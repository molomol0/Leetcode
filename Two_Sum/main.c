#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int *returnSize){
	int i = 0;
	int j;
	int *res;

	res = malloc(2 * sizeof(int));
	if (!res)
		return 0;
	res[0] = 0;
	res[1] = 0;
	*returnSize = 2;

	while (i <= numsSize - 1)
	{
		j = i + 1;
		while (j <= numsSize)
		{
			if (nums[i] + nums[j] == target)
			{
				res[0] = i;
				res[1] = j;
				return (res);
			}
			j++;
		}
		i++;
	}
	return (res);
}

int* twoSum_with_for_loop(int* nums, int numsSize, int target, int* returnSize)
{
    int *rarr=malloc(2* sizeof(int));
    rarr[0]=1;
    rarr[1]=1;
    for(int i=0; i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                *returnSize = 2;
                rarr[0]=i;
                rarr[1]=j;
                return rarr;
            }
        }
    }
    *returnSize =0;
    return 0;
}

int main(void)
{
	int m = 2;
	int *n = &m;
	int nums[] = {3,2,4};
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int target = 6;
	printf("%d,", twoSum(nums, numsSize, target, n)[0]);
	printf("%d", twoSum(nums, numsSize, target, n)[1]);
	return (0);
}