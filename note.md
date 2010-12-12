
#linux note
编写shall脚本简化操作
my mark.sh
#!/bin/bash
markdown ~/akae/job-akae.wiki/note-qhd.md >~/akae/job-akae.wiki/yao.html
firefox ~/akae/job-akae.wiki/yao.html &
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

##dynamic link


