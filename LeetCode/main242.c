#include <stdio.h>
#include <stdlib.h>

bool isAnagram(char * s, char * t){
            bool cans;
            int count[26]={},counts[26]={},i,j,flag;
            for(i=0;i<strlen(s);i++)
                count[s[i]-'a']=count[s[i]-'a']+1;//��¼��һ���ַ�����ÿ����ĸ���ֵĴ���
            for(j=0;j<strlen(t);j++)
                counts[t[j]-'a']=counts[t[j]-'a']+1;//��¼�ڶ����ַ�����ÿ����ĸ���ֵĴ���
            for(i=0;i<26;i++)
                if(count[i]==counts[i])
                    flag=1;
                else{
                    flag=0;
                    break;
                }
            if(flag==0)
                cans=false;
            else
                cans=true;
            return cans;

}
