# include <stdio.h>
// 引入hyw()所在的头文件
# include "/opt/huabingood/practise/algorithm/CPractise/CPractise.h"
#include "algorithm/introduction/introduction.h"
# include <math.h>

# define PI 3.14159
# define r 5.3


// this is alograthm introduction
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
