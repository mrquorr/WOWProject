#include <stdio.h>
#define DATA 4
int main()
{
    int arrNum[]={3,2,4,1};//초기값 초기화
    int i, j , temp;
    
    printf("초기 값 : ");
    for(i=0;i<DATA;i++)
    {
        printf("%d ",arrNum[i]);
        printf("\n");
    }
      
    
    for(i=0;i<DATA-1;i++)//비교횟수는 데이터갯수-1, 자기 자신과는 비교 하지 않음
    {
        for(j=0;j<DATA-1;j++)
        {
            if(arrNum[j] > arrNum[j+1])
            {
                temp=arrNum[j];//뒷자리의 수가 더 크면 교체
                arrNum[j]=arrNum[j+1];
                arrNum[j+1]=temp;
            }
        }
    }
 
    printf("정렬 후 : ");
    for(i=0;i<DATA;i++)
    {
        printf("%d ",arrNum[i]);
        printf("\n");
    }
}
