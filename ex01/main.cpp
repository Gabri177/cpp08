#include <iostream>
#include "Span.hpp"

// int main() {
//     try {
//         // 创建一个Span对象，容量为5
//         Span sp(5);

//         // 添加一些数字
//         sp.addNumber(6);
//         sp.addNumber(3);
//         sp.addNumber(17);
//         sp.addNumber(9);
//         sp.addNumber(11);

//         // 打印最短和最长跨度
//         std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl; // 应该输出 2
//         std::cout << "Longest Span: " << sp.longestSpan() << std::endl;   // 应该输出 14

//         // 测试添加超过容量的数字
//         try {
//             sp.addNumber(13); // 应该抛出异常
//         } catch (const Span::FullException &e) {
//             std::cout << e.what() << std::endl; // 输出 "Span is full, cannot add more numbers!!!"
//         }

//         // 创建一个新的Span对象进行进一步测试
//         Span sp2(10);
//         sp2.addNumber(5);
//         sp2.addNumber(10);
//         sp2.addNumber(20);
//         sp2.addNumber(1);
//         sp2.addNumber(15);

//         std::cout << "Shortest Span in sp2: " << sp2.shortestSpan() << std::endl; // 应该输出 5
//         std::cout << "Longest Span in sp2: " << sp2.longestSpan() << std::endl;   // 应该输出 19

//         // 测试仅添加一个数字的情况
//         Span sp3(3);
//         sp3.addNumber(42);
//         try {
//             std::cout << "Shortest Span in sp3: " << sp3.shortestSpan() << std::endl; // 应该抛出异常
//         } catch (const Span::NoFindException &e) {
//             std::cout << e.what() << std::endl; // 输出 "Do not have enough numbers to calculate the distance!!!"
//         }

//         // 测试空Span的情况
//         Span sp4(2);
//         try {
//             std::cout << "Longest Span in sp4: " << sp4.longestSpan() << std::endl; // 应该抛出异常
//         } catch (const Span::NoFindException &e) {
//             std::cout << e.what() << std::endl; // 输出 "Do not have enough numbers to calculate the distance!!!"
//         }

//     } catch (const std::exception &e) {
//         std::cerr << "Unexpected exception: " << e.what() << std::endl;
//     }

//     return 0;
// }

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}