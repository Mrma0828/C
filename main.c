#include <stdio.h>
#include <stdlib.h>
//
//int main()
//{
//    int n = 0;
//    int sum = 1;
//    int i = 1;
//    scanf("%d",&n);
//    for(i=1;i<=n;i++)
//    {
//        sum*= i;
//    }
//    printf("%d",sum);
//
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    char pass[] = {1,2,3,4,5,6,7,8};
//    int k = 7;
//    int sz = sizeof(pass)/sizeof(pass[0]);
//    for(i=0;i<sz;i++)
//    {
//        if(pass[i]==k)
//            printf("�����½Ǳ�Ϊ%d",i);
//    }
//    return 0;
//}
//int add(a,b)
//{
//  int sum = 0;
//  sum = a + b;
//  return sum;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d%d",&a,&b);
//    c = add(a,b);
//    printf("%d",c);
//    return 0;
//}
//int main()
//{
//    char a =26;
//    printf("%c",a);
//    return 0;
//}
//дһ������com�ҳ����������е����ֵ
//int com(int a,int b)
//{
//
//    if(a>b)
//        b = a;
//    return b;
//}
//int main()
//{
//    int A = 0;
//    int B = 0;
//    int ans = 0;
//    printf("������Ҫ�Ƚϵ�ֵ\n");
//    scanf("%d%d",&A,&B);
//    ans = com(A,B);
//    printf("%d",ans);
//    return 0;
//
//}
//�����ʼ��
//int main()
//{
//    char arr1[] = "abcdef";//����ȫ��ʼ�� ����Ϊ0
//    printf("%d\n",sizeof(arr1));//����������飬������ռ�ڴ��С-
//    printf("%d\n",strlen(arr1));//ֻ����\nǰ�ַ�������
//    return 0 ;
//}
//int main()
//{
//    char arr1[] = {'a','b','c'};//3��Ԫ��
//    char arr2[] = "abc";//4��Ԫ��
//    printf("%d\n",sizeof(arr1));//3���ֽ�
//    printf("%d\n",sizeof(arr2));//���ĸ�charԪ�� ռ�ĸ��ֽ�
//    printf("%d\n",strlen(arr1));//�Ҳ���\n ��ȷ��
//    printf("%d\n",strlen(arr2));//����Ϊ3
//    return 0 ;
//}
//һλ�����ʹ��

//    char arr1[] = "i love you";
//    int i = 0;
//    while(i<strlen(arr1))
//    {
//        printf(" %c",arr1[i]);
//        i++;
//    }
//
//    int i=0;�ַ������Ӧ��
//    char arr1[]="love u";
//    for(i=0;i<strlen(arr1);i++)
//    {
//        printf("%c",arr1[i]);
//    }
//    return 0;
//}
//    int arr[]={1,2,3,4,5,6};//һά�����ʹ��
//    int a=sizeof(arr)/sizeof(arr[0]);
//    int i = 0;
//    for(i=0;i<a;i++)
//    {
//        printf(" %d",arr[i]);
//    }
//    return 0 ;
//
//
//}
//�������ڴ�Ĳ���
//int main()
//{
//    int arr[]={1,2,3,4,5,6,7,8,9};//�����ֲ����
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    int i =0;
//    for(i=0;i<sz;i++)
//    {
//        printf("&arr[%d]=%p\n",i,&arr[i]);
//    }
//    return 0 ;
//}
//��ά����Ĵ������С����С� �Լ���ʼ��
//int main()
//{
//    int arr[3][4]={1,2,3,4,5};//�������д��
//    int arr2[3][4]={{1,2,3},{4,5}};//���ɶ��һά�����ʼ��
//    int arr3[][4]={{1,2,3},{4,5}};//��ά�����п���ʡ�� �в���ʡ��
//}
//��λ�����ʹ���Լ��ڴ��ŷ�ʽ��������ţ���
//int main()
//{
//    int arr[3][4]={{1,2,3},{4,5}};���Կ��ɶ��һά�������һ��arr[0][j],arr[1][j],arr[2][j]
//    int i,j=0;
//    for(i=0;i<3;i++)
//    {
//        for(j=0;j<4;j++)
//        {
//            printf("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
//        }
//    }
//    return 0;
//}
int main()
{
    char a = "64";
    printf("%c",a);
    return 0;
}
