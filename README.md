# Leetcode刷题项目

###介绍
  1. 使用vs打开， 在vs中点击.sln.文件就可常规操作项目
  2. 扩展名解释：
     |.h|.cpp|.txt|.gitignore|.sln|
     |---|---|---|---|---|
     |头文件：函数声明|main函数，函数原型|必要性记录文档|git配置忽略文件|vs启动文件| 
  3. 必要文件具体说明
     |FunctionPackage.h|Instantiation.h|FunctionPackage.cpp|Main.cpp|Position.txt|函数名.cpp|
     |---|---|---|---|---|---|
     |此文件是功能函数的.h文件。对应源文件中FunctionPackage.cpp。以下都是对FunctionPackage.cpp中的函数声明，一共源文件中各种“例子.cpp"导入使用。|此文件是一个"例子.cpp"的.h文件。对应源文件中，各种"例子.cpp"的函数声明。此文件是为了让主函数导入， 以方便执行。|此文件是功能函数包，存放各种用户自定义的函数。有对应的FunctionPackage.h 来存放声明|主函数|对FunctionPackage.cpp  中函数位置的记录|各种功能函数实例化函数| 
