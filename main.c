# include <stdio.h>
// 引入hyw()所在的头文件
# include "/opt/huabingood/practise/algorithm/CPractise/CPractise.h"
#include "algorithm/introduction/introduction.h"
#include "MyArray/MyArray.h"
# include <math.h>
#include <stdlib.h>

# define PI 3.14159
# define r 5.3


// this is alograthm introduction

// 猜神童年龄
/*美国数学家维纳（N.Wiener）智力早熟，11岁就上了大学。他曾在1935~1936年应邀来中国清华大学讲学。一次，他参加某个重要会议，年轻的脸孔引人注目。于是有人询问他的年龄，他回答说：“我年龄的立方是一个4位数。我年龄的4次方是一个6位数。这
10个数字正好包含了从0到9这10个数字，每个都恰好出现1次。”请你编程算出他当时到底有多年轻。
【解题思路】：因为已知年龄的立方是一个4位数字，所以可以推断年龄的范围在10到22之间，因此确定穷举范围为10到22。如果年龄还满足“年龄的4次方是一个6位数”这个条件，则先计算年龄的立方值的每一位数字，从低位到高位分别保存到变量b1,b2,b3,b4
中，再计算年龄的4次方值的每一位数字，从低位到高位分别保存到变量a1,a2,a3,a4,a5,a6中。如果上述10个数字互不相同，则必定是包含了从0到9这10个数字并且每个都恰好出现1次，因此只要判断上述10个数字互不相同，即可确定这个年龄值为所求。

输出格式："age=%d\n"*/


/*int main() {
    // 调用猜年龄的函数
    // guessAge();
    // leapYear();
    leapYearPlus();


}*/


int main() {
    // rubbitOfFibonacci();
    // MaxAndMinScore();
    // rubbitOfFibonacci();
    // mySort();
    findFromArray();
}






/*int main() {
    const double rate1 = 0.0225;K
    const double rate2 = 0.0243;
    const double rate3 = 0.0270;
    const double rate5 = 0.0288;
    const double rate8 = 0.0300;

    double capital, deposit;
    int n;
    char choose;

    printf("Input capital, year:");
    scanf("%lf,%d", &capital, &n);
    printf("Compound interest (Y/N)?");
    scanf(" %c", &choose);

    switch (n) {
        case 1:
            if (choose == 'y' || choose == 'Y') {
                deposit = capital * pow((1 + rate1), n);
            } else if (choose == 'n' || choose == 'N') {
                deposit = capital * (1 + rate1 * n);
            } else {
                printf("You input are wrong!");
            }
            printf("rate = %.4f, deposit = %.4f\n", rate1, deposit);
            break;
        case 2:
            if (choose == 'y' || choose == 'Y') {
                deposit = capital * pow((1 + rate2), n);
            } else if (choose == 'n' || choose == 'N') {
                deposit = capital * (1 + rate2 * n);
            } else {
                printf("You input are wrong!");
            }
            printf("rate = %.4f, deposit = %.4f\n", rate2, deposit);
            break;
        case 3:
            if (choose == 'y' || choose == 'Y') {
                deposit = capital * pow((1 + rate3), n);
            } else if (choose == 'n' || choose == 'N') {
                deposit = capital * (1 + rate3 * n);
            } else {
                printf("You input are wrong!");
            }
            printf("rate = %.4f, deposit = %.4f\n", rate3, deposit);
            break;
        case 5:
            if (choose == 'y' || choose == 'Y') {
                deposit = capital * pow((1 + rate5), n);
            } else if (choose == 'n' || choose == 'N') {
                deposit = capital * (1 + rate5 * n);
            } else {
                printf("You input are wrong!");
            }
            printf("rate = %.4f, deposit = %.4f\n", rate5, deposit);
            break;
        case 8:
            if (choose == 'y' || choose == 'Y') {
                deposit = capital * pow((1 + rate8), n);
            } else if (choose == 'n' || choose == 'N') {
                deposit = capital * (1 + rate8 * n);
            } else {
                printf("You input are wrong!");
            }
            printf("rate = %.4f, deposit = %.4f\n", rate8, deposit);
            break;
        default:
            printf("Error year!");
    }

}*/

/*# nclude <math.h>
int main(){
    double rate,capital,deposite;
    int n;
    char choose;

    printf("Input rate, year, capital:");
    scanf("%lf,%d,%lf",&rate,&n,&capital);
    printf("Compound interest (Y/N)?" );
    scanf(" %c",&choose);

    if(choose == 'Y' || choose == 'y'){
        deposite = capital*pow((1+rate),n);
    }else if (choose == 'N' || choose == 'n'){
        deposite = capital * (1+rate*n );
    }else{
        printf("You choose are wrong!");
    }
    printf("deposit = %.4f\n",deposite);
}*/



/*// 对输入的数字进行手工的通分
int main(){
    int a,b,c,d;
    printf("Input a/b, c/d:");
    scanf("%d/%d,%d/%d",&a,&b,&c,&d);

    if(a*d>c*b){
        printf("%d/%d>%d/%d\n",a,b,c,d);
    } else if (a*d<c*b){
        printf("%d/%d<%d/%d\n",a,b,c,d);
    } else {
        printf("%d/%d=%d/%d\n",a,b,c,d);
    }
    return 0;
}*/


/*int main()
{
    int a=1,b=2,m=0,n=0,k;
    // 因为b>a为真，所以n是1；a<b为真，所以m是1
    k=(n=b>a)||(m=a<b);
    // 注意上面一条命令是短路或，所有(m=a<b根本就没有执行)
    printf("%d,%d\n",k,m);
    return 0;
}*/


/*
int main()
{ int a,b,c;
    a=10;
    b=20;
    c=(a%b<1)||(a/b>1);
    printf("%d,%d,%d",a%b,a/b,c);
    return 0;
}
*/





/*
#include <stdlib.h>

int main() {
    int hour1, hour2, second1, second2, time1, time2, middle, hour3, second3;
    printf("Input time one(hour, second):");
    scanf("%d,%d", &hour1, &second1);
    printf("Input time two(hour, second):");
    scanf("%d,%d", &hour2, &second2);

    time1 = hour1 * 60 + second1;
    time2 = hour2 * 60 + second2;
    middle = abs(time1 - time2);

    second3 = middle % 60;
    hour3 = (middle - middle % 60) / 60;

    printf("%d hour %d second\n", hour3, second3);

}
*/



/*
# define YOUHUI 0.08
int main(){
    float p,price;
    printf("Input payment p:");
    scanf("%f",&p);

    price = p-(p * YOUHUI);

    printf("price = %.1f\n",price);

}
*/



/*int main() {
    float length, result;
    int days;
    int chuShu = 1;
    printf("Input length and days:");
    scanf("%f,%d", &length, &days);

    for (int i = 1; i <= days; i++) {
        chuShu *= 2;
    }

    result = length / chuShu;
    printf("ength=%.5f\n", result);
}*/



/*
int main(){
    int math1,english,math2;
    float score;
    printf("Input math1,English and math1:");
    scanf("%d,%d,%d",&math1,&english,&math2);
    score = (math1*5 + english*1.5+math2*3.5)/10;
    printf("Final score = %.2f\n",score);
}
*/



/*int main() {
    int a, b, s;
    scanf("%d%d%d",&a,&b,&s);
    printf("%d%d%d",a,b,s);
}*/

/*void main() {

    // mathod2();
    // mathod1();
}*/




/*
void main() {
    //reverseNumber();
    // score();
    // rate();
    // mySplit();
    // heighCalculate();
    //squareRoot();
}
*/



/*
int main(){

    printf("Area=%.5f\n",PI*r*r/2);
    printf("circumference=%.5f\n",PI*r);
    //return 0;

    const double l = 12;
    const double wide = 4.3;
    const double height = 6.4;
    printf("volume=%.3f\n",l*wide*height);

    int a=1, b=2;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d,%d\n", a, b );
    // return 0;

    int x = 3,y = 2;
    double dd = x/y;
    printf("%2.1f\n",dd);

}
*/


/*

void main(){

    homeWork1();
    // typeTransform();
    // myLoop();
}

*/




/*
void main() {
    // scanIO();
    // myPrintf();
    myScanf();
}
*/


/*
int main() {
    printf("Hello, World!\n");
    // 在main()函数中调用hyw()
    int a = hyw();
    printf("%d",a);
    return 0;
}*/
