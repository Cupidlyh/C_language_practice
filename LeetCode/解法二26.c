

int removeDuplicates(int* nums, int numsSize){
            int i,j=0;
            for(i=0;i<numsSize-1;i++)//注意这里是数组大小减去一，防止下面if判断越界
                if(nums[i]!=nums[i+1])
                    nums[j++]=nums[i];//不相等时从0依次存进数组中
            if(numsSize!=0)
            nums[j++]=nums[numsSize-1];//数组不为空时，最后一项要存进去，因为一直相等最后一项没存进，
                                                              //不相等时也没存进，所以这一步存数组最后一个数
            return j;
}

