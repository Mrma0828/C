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
//            printf("该数下角标为%d",i);
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
//写一个函数com找出两个函数中的最大值
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
//    printf("输入两要比较的值\n");
//    scanf("%d%d",&A,&B);
//    ans = com(A,B);
//    printf("%d",ans);
//    return 0;
//
//}
//数组初始化
//int main()
//{
//    char arr1[] = "abcdef";//不完全初始化 其他为0
//    printf("%d\n",sizeof(arr1));//求变量，数组，类型所占内存大小-
//    printf("%d\n",strlen(arr1));//只能求\n前字符串长度
//    return 0 ;
//}
//int main()
//{
//    char arr1[] = {'a','b','c'};//3个元素
//    char arr2[] = "abc";//4个元素
//    printf("%d\n",sizeof(arr1));//3个字节
//    printf("%d\n",sizeof(arr2));//有四个char元素 占四个字节
//    printf("%d\n",strlen(arr1));//找不到\n 不确定
//    printf("%d\n",strlen(arr2));//长度为3
//    return 0 ;
//}
//一位数组的使用

//    char arr1[] = "i love you";
//    int i = 0;
//    while(i<strlen(arr1))
//    {
//        printf(" %c",arr1[i]);
//        i++;
//    }
//
//    int i=0;字符数组的应用
//    char arr1[]="love u";
//    for(i=0;i<strlen(arr1);i++)
//    {
//        printf("%c",arr1[i]);
//    }
//    return 0;
//}
//    int arr[]={1,2,3,4,5,6};//一维数组的使用
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
//数组在内存的布局
//int main()
//{
//    int arr[]={1,2,3,4,5,6,7,8,9};//连续分布存放
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    int i =0;
//    for(i=0;i<sz;i++)
//    {
//        printf("&arr[%d]=%p\n",i,&arr[i]);
//    }
//    return 0 ;
//}
//二维数组的创建【行】【列】 以及初始化
//int main()
//{
//    int arr[3][4]={1,2,3,4,5};//从左向有存放
//    int arr2[3][4]={{1,2,3},{4,5}};//看成多个一维数组初始化
//    int arr3[][4]={{1,2,3},{4,5}};//二维数组行可以省略 列不可省略
//}
//二位数组的使用以及内存存放方式（连续存放）可
//int main()
//{
//    int arr[3][4]={{1,2,3},{4,5}};可以看成多个一维数组放在一起arr[0][j],arr[1][j],arr[2][j]
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
