#include <iostream>
#include <exception>
#include "Vec3D.h"
using std::cout;
using std::endl;
// 任务4：在主函数中创建Vec3D对象并调用[]制造越界问题
// 捕获异常并输出异常中的信息
int main() {
  Vec3D v1{ 1.2, 3.2, 4.3 };
  try {
    v1[1] = 1.0;
    cout << v1[ 4 ];
  } catch (std::exception & e) {
    cout << "Exception: " << e.what() << endl;
    if (typeid(e) == typeid(RangeException)) {
      auto r = dynamic_cast<RangeException &>(e);
      cout << "Vector dimension: " << r.getDimension() << endl;
      cout << "Index: " << r.getIndex() << endl;
    }
  }
}