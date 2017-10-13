//
// Created by huabingood on 17-10-11.
//
# include <stdio.h>

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
    int e,f,g;
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
    int res = scanf("%d%d%d",&e,&f,&g);   // 获取结果
    if(res != 3 ){
        printf("you must give the number!\n");
    }else{
        printf("the first is %d,the middle is %d,the last is %d.",e,f,g);
    }
    fflush(stdin); // 将缓存中的内容清空。

}