# 本实验是哈尔滨工业大学编译原理实验，个人实现，仅供参考

## 实验环境
flex-2.6.4

bison-3.7.91

在本仓库的 flex-2.6.4-build 和 bison-3.7.91-build目录下已经安装，若要使用您自己的版本，请更改各个实验中的Makefile脚本。

## Rust
本实验仅仅使用Rust写了脚本方便运行parser分析器，若不安装Rust和Cargo，可以i使用Makefile脚本中的其他命令或手动使用命令行

如：

./homework1/parser ./homework1/test/test1.cmm

即可。

当然，Rust脚本更加方便。

## lab1
_**<font color="red"> 注：此实验完成书中10个测试用例，和另外附加的14个测试用例（/homework1/test_an）,附加测试用例没有标准答案，作者只是按照自己的想法来判断是否报错。</font>**_

若不使用Rust和Cargo,执行下面命令即可：
```
cd homework1
make build
make rerun
make my_test num=1
make my_test num=2
...

```
若使用Rust和Cargo：

在homework1/work1_script/src/bin目录下有10个测试脚本，注释更加详细。
