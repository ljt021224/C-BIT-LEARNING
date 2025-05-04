/*分支与循环，主要为if，if else，elseif。
 *注意else总是和最接近的if相匹配
 *关系中操作符： == != < > <= >= 关系表达式通常返回0或1
 *注意分辨== 和 = 如果写if（x=3）这样编译器会报错的。
 *还要避免多个运算符不能连用 比如 i《 j《k 是错误的。
 *条件操作符： exp1 ？ exp2 ： exp3 这个表达式的逻辑是如果exp1为真，那么exp2计算，如果exp1 为假，那么exp3计算。
 *下面我来列举两个例子
 *#include<stdio.h>
 *int main(){ int a =0 ;
 *int b =0;
 *scanf("%d",&a); if(a>5) b=3; else b=-3; pintf("%d", b); return 0; }
 *进行代码优化后，使用条件操作符：
 *关键的语句是： b=(a>5 ? b=3 : b=-3);
 *练习二，使用条件表达式来实现找两个数中的较大值。
 *核心代码 int m= (a>b ? a : b);
 *逻辑操作符： && || ！
 *例子 int flag =0; if(!flag).......
 *短路： 如果左边的运算已经满足运算符的要求，那么，后面的就不用算了。*/
/*switch 语句的用法： switch 语句分为 case分支和default分支；根据表达式中expression不同的值，执行相应的case ， 如果找不到对应的值，
 *就执行defalut语句。
 *switch后的expression必须是整形表达式（字符也算是整形 ASCII）， case后的值， 必须是整型常量表达式。
 *case 和后边的数字之间必须有空格， 2 每一个case 语句在代码执行完成后， 需要加上break，才行跳出switch语句。
 *例子case 0
 *.....
 *break;
 *....
 *如果某一个case语句的后面没有break语句，代码会继续往下执行，知道遇到break才会结束。
 *switch语句中case 和 defalut 的顺序没有规定，一般default放在最后，但是不是强制的要求。
 *while循环：先执行判断语句，然后执行到判断语句返回为0（假）就停止
 *for 循环： for（初始化；循环结束条件；循环变量的调整）
 *初始化语句只在循环第一次执行有用。
 *while 循环的三个部分比较松散，使用for循环更优秀。
 *do-while循环。先执行在判断，使用这个语句在循环体中至少被执行一次；
 */
/*讨论break和continue 引导的转向语句
 *break的作用是永久的终止循环，只要break被执行，直接跳出循环，继续往后执行代码
 *continue是跳出本次循环中剩余的代码，这在for循环和while循环中是有差异的。
*continue 可以帮助我们跳过某⼀次循环 continue 后边的代码，直接
到循环的判断部分，进⾏下⼀次循环的判断，如果循环的调整是在 continue 后边的话，可能会造成
死循环。
其实和 while 循环中的 break ⼀样， for 循环中的 break 也是⽤于终⽌循环的，不管循环还需
要循环多少次，只要执⾏到了 break ，循环就彻底终⽌，我们上代码。
所以在 for 循环中 continue 的作⽤是跳过本次循环中 continue 后的代码，直接去到循环的调
整部分。未来当某个条件发⽣的时候，本次循环⽆需再执⾏后续某些操作的时候，就可以使⽤
continue 来实现。
do.while 语句中的 break 和 continue 的作⽤和 while 循环中⼏乎⼀模⼀样
go to 语句：（）*/
