//
// Created by huabingood on 17-10-11.
//
# include <stdio.h>
# include <math.h>

/*
 * 根据下面给出的求根公式，计算并输出一元二次方程的两个实根，
 * 要求精确到小数点后4位。程序中所有浮点数的数据类型均为float.
 * 提示：
 *    计算平方根的数学函数为sqrt（）。
 */
void squareRoot() {
    // 很明显，int类型只要碰到除法，精度就会损失，导致数据失真。
    // 如果涉及到小数的计算，或者除法计算中有小数，必须用浮点型。
    float a = 2.0;
    float b = 3.0;
    float c = 1.0;

    float x1, x2;
    x1 = (-b / (2 * a)) + (sqrt(b * b - 4 * a * c) / (2 * a));
    x2 = (-b / (2 * a)) - (sqrt(b * b - 4 * a * c) / (2 * a));

    printf("x1=%.4f\n", x1);
    printf("x2=%.4f\n", x2);

}


/*
 * 已知小明（男孩）爸爸的身高是175厘米，妈妈的身高是162厘米。
 * 小红（女孩）爸爸的身高是169厘米，妈妈的身高是153厘米，按照
 * 下面公式，预测并输出小明和小红的遗传身高（不考虑后天因素）。
 *    男性成人时身高=(faHeight + moHeight)×0.54cm
 *    女性成人时身高=(faHeight×0.923 + moHeight)/2cm
 */
void heighCalculate() {
    int boyFather = 175;
    int boyMother = 162;
    int girlFather = 169;
    int girlMother = 153;

    double boyHighCalculate = (boyFather + boyMother) * 0.54;
    double girlHighCalculate = (girlFather * 0.923 + girlMother) / 2;

    printf("Height of xiao ming:%d\n", (int) boyHighCalculate);
    printf("Height of xiao hong:%d\n", (int) girlHighCalculate);
}

/*
 * 在C语言中，如果被除数为负值，则对一个正数求余的时候，
 * 求出的余数也是一个负数。在某些场合下，我们需要求出它
 * 的正余数，例如：在C语言中有(-11)%5=-1，但是有时我们
 * 希望得到的余数不是-1，而是4。请编写程序计算(-11)%5的
 * 负余数和正余数。
 * 解释（我猜的）：
 * 应该是猜错了。逻辑都不知道，实现不了。
 * 正余数：和下一个能曾除的数差多少。比如-11和下一个被整除的数-15,相差4
 * 负余数：和当前被整除的数相差多少。
 */
void myRemainder() {
    int i = -11;
    // TODO
    int positiveRemainder = (-11 / 5 - 1) * 5 - (-11);
}

/*
 * 现有一个4位数的正整数n=4321（即n是一个已知的数，固定为4321），
 * 编写程序将其拆分为两个2位数的正整数43和21，计算并输出拆分后的
 * 两个数的加、减、乘、除和求余的结果。例如n=4321,设拆分后的两个
 * 整数为a,b，则a=43,b=21。除法运算结果要求精确到小数点后2位,数
 * 据类型为float。
 */
void mySplit() {
    int n = 4321;
    int a = n / 100;
    int b = n % 100;

    int add = a + b;
    int subtraction = a - b;
    int multiplication = a * b;
    double division = (double) a / b;
    int remainder = a % b;

    printf("a=%d,b=%d\n", a, b);
    printf("a+b=%d\n", add);
    printf("a-b=%d\n", subtraction);
    printf("a*b=%d\n", multiplication);
    printf("a/b=%.2f\n", division);
    printf("a%%b=%d\n", remainder);

}


/*
 * 设银行定期存款的年利率rate为2.25%，已知存款期为n年，
 * 存款本金为capital元，试编程计算并输出n年后的本利之和
 * deposit。程序中所有浮点数的数据类型均为double类型。
 */
void rate() {
    float rate;
    int years, res;
    float money;
    float deposit;

    printf("give me the rate,years and money:\n");
    res = scanf("%f%d%f", &rate, &years, &money);
    if (res != 3) {
        printf("wrong!");
        fflush(stdin);

    }

    deposit = pow((1 + rate), years) * money;

    printf("the money is %5.3lf", deposit);


}


/*
 * 小明本学期共有5门课程，分别是英语、语文、数学、历史和音乐。
 * 5科的期中考试成绩分别是86分、74分、92分、77分、82分，期末
 * 考试成绩分别是81分、87分、90分、62分、88分。已知期中和期末
 * 考试成绩分别占总成绩的30%和70%。定义相应的变量存放各科成绩，
 * 并计算出小明5门课程的总分和平均分。要求平均分输出两种形式：
 * 带2位小数的浮点数形式和不带小数的整数形式。要求总分输出带2位
 * 小数的浮点数形式。程序中浮点数的数据类型均为float类型。
 */
void score() {
    int midtermEnglish = 86;
    int midtermChinese = 74;
    int midtermMath = 92;
    int midtermHistory = 77;
    int midtermMusic = 82;

    int finalEnglish = 81;
    int finalChinese = 87;
    int finalMath = 90;
    int finalHistory = 62;
    int finalMusic = 88;


    double total, average;

    total = (midtermEnglish + midtermChinese + midtermMath + midtermHistory + midtermMusic) * 0.3 +
            (finalEnglish + finalChinese + finalMath + finalHistory + finalMusic) * 0.7;
    average = (midtermEnglish + midtermChinese + midtermMath + midtermHistory + midtermMusic + finalEnglish +
               finalChinese + finalMath + finalHistory + finalMusic) / 10;

    printf("total=%.2f\n", total);
    printf("average=%.2f\n", average);
    printf("average=%d\n", (int) average);

}

/*
 * 将数字反转，忽略正负号，
 * 比如输入-123
 * 输出321
 */
void reverseNumber() {
    int inNumber, absNumber;
    int a, b, c;
    printf("please write a three positions numbers:\n");
    scanf("%4d", &inNumber);
    absNumber = fabs(inNumber);

    a = absNumber / 100;
    b = absNumber / 10 % 10;
    c = absNumber % 100 % 10;

    printf("%d%d%d", c, b, a);
}

void homeWork1() {
    char ch1, ch2;
    ch1 = getchar();
    printf("ch1=%c\n", ch1);
    getchar();  // 将换行符读取
    ch2 = getchar();
    printf("ch2=%c\n", ch2);
}

void typeTransform() {
    int a = 2;
    int b = 3;
    int c, d;
    double e = b / a;   // 因为除数和被处数都是int,即使接受的是double,结果也是int类型
    printf("%3.2f\n", e);
    e = (double) b / a;  // 将任意一个变量强制转换。输出的极为double类型。




    c = ceil(e);
    d = floor(e);
    printf("this is value of ceil:%d,this is value of floor:%d\n", c, d);

}


// 新建函数hyw()
int hyw() {
    // printf("aaa");
    return 1;
}

// practise the scan IO;
void scanIO() {
    char ch;
    // 实际上在C语言中，char是占一个字节的，而java中，char是占两个字节的
    char zhongwen = '中';  // 这个时候的输出是错误的
    printf("%c \n", zhongwen);
    float f = sizeof(zhongwen);
    // 注意这里也是个坑，如果直接输出的是sizeof就会发现，输出的是错误的。
    printf("%3.2f \n", f);

    // 下面这个句子是错误的，由此可见这个unsigned等修饰符都是int的
    // long double ld = 34.0;
    double ld = 34.0;
    printf("这个输出的是long double的结果：%f \n", ld);

    printf("please input on character into the scan.");
    ch = getchar();

    printf("you print is %c", ch);
}

// printf() method practise
void myPrintf() {
    float f = 3.4567f;
    long l = 123456l;
    printf("%2.1f\n", f);

    printf("the long type was given length 3.the fact is %8d.\n", l);
}

// scanf() practise
void myScanf() {
    // 必须紧挨着才能被识别，空格或其他的输入符号会被作为一个输入符号而识别
    char a, b, c;
    int e, f, g;
    // scanf("%c%c%c",&a,&b,&c);
    // printf("you write is %c,%c,%c.",a,b,c);

    // this use space to split
    // scanf("%c %c %c",&a,&b,&c);
    // printf("you write is %c,%c,%c.\n",a,b,c);

    // use the comma to split the input
    // scanf("%c,%c,%c", &a, &b, &c);
    // printf("you write is %c,%c,%c.\n", a, b, c);

    // use %*[域宽]格式化符号 to ignore some inputs.
    // 必须使用%*的形式才有效，*%的输入是无效的方式。
    // scanf();    // this is not use!
    // printf("please input:\n");
    // scanf("%c%*2c%c%c",&a,&b,&c);
    // printf("in here.");
    // printf("you wirite were %c,%c,%c\n",a,b,c);

    // the seperate symbol is odd;
    // scanf("a = %c,love=%c",&a,&b);   // should use the "a = " and the ",love="as the symbol to ssplite the users input.
    // printf("%c,%c",a,b);
    // scanf("%c",&a);
    // a = getchar();
    // printf("you first input is %c.",a);
    // scanf(" %c",&b);
    // b = getchar();
    // printf("you seconde input is %c",b);
    // scanf(" %c",&c);
    // c = getchar();
    // printf("you last input is %c",c);

    // 通过判断输入的字符的个数，来间接判断输入的字符是否合法
    // scanf() 输入的格式如果跟指定的格式不符合，就会返回0或者-1。我们通过长度即可判断中间有无异常
    int res = scanf("%d%d%d", &e, &f, &g);   // 获取结果
    if (res != 3) {
        printf("you must give the number!\n");
    } else {
        printf("the first is %d,the middle is %d,the last is %d.", e, f, g);
    }
    fflush(stdin); // 将缓存中的内容清空。

}