#include<stdio.h>
int main()
{
    int n,i,t,key,s,e,mid,comp,flag;
    printf("Enter no of test cases:");
    scanf("%d",&t);
    while(t--)
    {
        printf("Enter the value of n:");
        scanf("%d",&n);
        int a[n];
        printf("Enter the elements:");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Enter the key:");
        scanf("%d",&key);
        comp=flag=0;
         s=0;e=n-1;
        while (s<=e)
        {
            comp++;
            mid = s + (e-s)/2;
            if (a[mid] == key)
                {
                    flag=1;
                    break;
                }
            if (a[mid] < key)
                s = mid + 1;
            else
                e = mid - 1;
        }
        if (flag==1)
        {
            printf("Present\n");
            printf("no of comparisons %d\n",comp);
        }
        else
        {
            printf("Not Present\n");
            printf("no of comparisons %d\n",comp);
        }

    }
    return 0;
}