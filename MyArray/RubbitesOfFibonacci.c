//
// Created by huabingood on 1/9/18.
//

/*问题：
 * 假设一堆小兔的成熟期是一个月，每对成兔每个月都可以生一对小兔，
 * 一对新生的小兔从第二个月起(2月出生4月生兔子)开始生兔子，那么
 * 一年后可以有多少对兔子。
 *
 * 要求：
 * 输出是必须月份对应兔子数*/

# include <stdio.h>
# define YEAR 12

void rubbitOfFibonacci(){
    // 初始化，在n=1,n=2时，没办法按照f(n)=f(n-1)+f(n-2)计算
    short mySum[YEAR] = {1,2};
    short myFather[YEAR] = {1,1};
    short sumRubbits;
    // 除却初始值外，其他的均可使用f(n)=f(n-1)+f(n-2)来计算
    for(int i=2;i<YEAR;i++){
        mySum[i]=mySum[i-1]+mySum[i-2];
        myFather[i]=myFather[i-1]+myFather[i-2];
    }

    // 遍历输出结果
    for(int i=0;i<YEAR;i++){
        printf("当前月份是：%d,老兔子有：%d,新兔子有：%d,总兔子是：%d\n",i+1,myFather[i],mySum[i]-myFather[i],mySum[i]);
        sumRubbits+=mySum[i];
    }

    // 输出总和
    printf("-------------------------\n");
    printf("一年的兔子的总和为：%d",sumRubbits);
}
