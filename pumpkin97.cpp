#include <iostream>
using namespace std;

// 调用规则如下
// 1.如果函数模板和普通函数都可以实现，优先调用普通函数
// 2.可以通过空模板参数列表来强制调用函数模板
// 3.函数模板也可以发生重载
// 4.如果函数模板可以产生更好的匹配优先调用函数模板

//总结：如果想用函数模板就不要写普通函数了，否则容易出现二义性