#pragma once
#include <string>
class Vec2D {
private:
  /// 平面向量的两个元素
  double x_{ 0.0 } , y_{ 0.0 };
public:
  Vec2D() = default;
  Vec2D(double x , double y) : x_{ x } , y_{ y } {}
  Vec2D add(Vec2D&); // 向量加法
  Vec2D subtract(Vec2D&); // 向量减法
  double dot(Vec2D&); // 向量点积
  Vec2D multiply(double); // 向量数乘
  // Vec2D cross(Vec2D&); // 向量叉积，但2D vector未定义叉乘
  double magnitude(); // 向量的长度
  double direction(); // 向量的方向
  Vec2D negative(); // 向量求反 (x, y) -> (-x, -y)
  Vec2D& increase(); // 向量自加1
  Vec2D& decrease(); // 向量自减1

  double at(int i); // 获取向量的第i个元素值

  bool equals(Vect2D&); // 判断向量是否相等
  compareTo(Vect2D&);  // 比较两个向量的长度
  std::string toString();
};