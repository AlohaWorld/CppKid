展示为何要使用运行时多态

本部分要展示的内容如下：

任务1. 创建 A/B/C三个类，B继承A，C继承B
       ABC均有toString函数

任务2. 创建 print 函数，接受A类型的参数，调用A对象的toString()

任务3. 重载 print 函数，接受B/C类型参数，调用toString()