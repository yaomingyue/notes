
#linux note
编写shall脚本简化操作
my mark.sh
#!/bin/bash
markdown ~/akae/job-akae.wiki/note-qhd.md >~/akae/job-akae.wiki/yao.html
firefox ~/akae/job-akae.wiki/yao.html &
##bash script

if []

#!/bin/bash
#workdir=~/kka/
#cd $workdir
#for i in a b c d  
#do 
    #mv $i $i.c
    #done
    file="aa.c"
    f=`echo $file|awk -F'.' '{print $2}'`
    echo $f
    #i=hello
    #if [$i = hello];then
    #{
    #echo hello
    #}
#!/bin/bash
workdir=~/kka/
cd $workdir
for i in `ls`   
do 
f=`echo $i|awk -F'.' '{print $1 }'`
    mv $i $f
    done
    #i=hello
    #if [$i = hello];then
    #{
    #echo hello
    #}
    ~ 

#vim using
#c 语言
一般来说main函数成功返回时用return 0； 
具体函数要看返回值的类型， 
对于函数返回，你最好看看进程线程相关的资料，当进程退出时会把它的退出状态返回给父进程，一般0表示成功退出。 
当我们运行main函数时，相当于运行一个子进程。例如在linux下，它的父进程会是init进程，所以我们习惯在main函数中加return 0；表示正常退出
printf("sizeof int is%d\n",sizeof(int)); 查看大小
##2数组 
a 表示a[3]首地址即a[0]的地址a=&a[0];
##3putchar 与getchar函数
a=getchar();
putchar(a);
b=getchar();
getchar(b);
c=getchar();
putchar(c);
输出结果和预想的不一样，输入两个后就不行了
其实输入q后回车，q给了a，回车符给了b
程序中要了三个字符给了三个后就不等待了
     char a,b,c;
     a=getchar();
     printf("%d\n",a);
     a=getchar();
     printf("%d\n",a);
     a=getchar();
      printf("%d\n",a);
      上边输入后就清楚的知道abc的值了

##dynamic linking and static linking
in C program language ,library includes dynamic library and static library ,
when compiling,static library will be linked in to object file ,so the excutable
program can run without the library;while,the dynamic library will be linked
when the program compileing,as a result program must link the dynamic library
when it's running.
Static linking is the result of the linker copying all library routines used in the program into the executable image. This may require more disk space and memory than dynamic linking, but is both faster and more portable, since it does not require the presence of the library on the system where it is run. 

Dynamic linking is accomplished by placing the name of a sharable library in the executable image. Actual linking with the library routines does not occur until the image is run, when both the executable and the library are placed in memory. An advantage of dynamic linking is that multiple programs can share a single copy of the library.
for more detail informations <http://apps.hi.baidu.com/share/detail/15246175>
##linker and loader
the process of gcc compiling a c program
该命令调用了GCC编译器驱动程序，将应用程序从ASCII码源文件翻译成可执行的目标文件。在这一过程中，经过了如下步骤：
1.  调用C预处理器把main.c翻译成中间文件main.i；
    cpp [other arguments] main.c /tmp/main.i
    2.  调用C编译器把main.i翻译成汇编语言文件main.s；
        cc /tmp/main.i main.c –O2 [other arguments] –o /tmp/main.s
        3.  调用汇编器把main.s翻译成可重定位目标文件main.o；
            as [other arguments] –o /tmp/main.o /tmp/main.s
            4.  对swap.c执行相同的步骤生成swap.o；
            5.  调用链接器，将main.o和swap.o以及必要的系统目标文件链接组合，生成一个可执行目标文件p。
                ld –o p [system object files and args] /tmp/main.o /tmp/swap.o

