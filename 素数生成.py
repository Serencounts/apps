from math import isqrt
def Judge(n):
    flag=1
    p=2
    while(p<=isqrt(n)):
        if(n%p==0):
            flag=0
            break
        p=p+1
    return flag

def Pltmax(n):
    p=n
    while(p>=2):
        if(Judge(p)):
            print(f"\n小于整数{n}的最大素数是{p}")
            break
        p=p-1
def Pmtmin(n):
    p=n
    while(True):
        if(Judge(p)):
            print(f"\n大于整数{n}的最小素数是{p}")
            break
        p=p+1

while(True):
    print(f"\n请选择模式：\n 0:退出程序 \n 1:判断是否是素数 \n 2:求小于输入整数的最大素数 \n 3:求大于输入整数的最小素数 ")
    flag=int(input('请输入选项：'))
    if(flag==0): break
    else:
        n=int(input("\n请输入整数n的值: "))
        if(flag==1):
            if(Judge(n)): print(f"\n{n}是素数")
            else: print(f"\n{n}不是素数\n")
        elif(flag==2): Pltmax(n)
        elif(flag==3): Pmtmin(n)
        continue