

int removeDuplicates(int* nums, int numsSize){
            int i,j=0;
            for(i=0;i<numsSize-1;i++)//ע�������������С��ȥһ����ֹ����if�ж�Խ��
                if(nums[i]!=nums[i+1])
                    nums[j++]=nums[i];//�����ʱ��0���δ��������
            if(numsSize!=0)
            nums[j++]=nums[numsSize-1];//���鲻Ϊ��ʱ�����һ��Ҫ���ȥ����Ϊһֱ������һ��û�����
                                                              //�����ʱҲû�����������һ�����������һ����
            return j;
}

