//找寻一个小于整数n的最大素数
#include <iostream>
#include <cmath>
using namespace std;
//判断是否是素数
int Judge(long long int p)
{
    int flag=1;
    long long int p2=sqrt(p);
    for(long long int i=2;i<=p2;i++)
    {
        if(p%i==0){
            flag=0;
            break;
        }
    }
    return flag;
}
//生成小于给定整数的最大素数
void Pltnmax(long long int n)
{
    long long int p=n;

    for(;p>=2;p--) if(Judge(p)) break;

    cout<<"\n 最大素数是 "<<p<<endl;
}
//生成大于给定整数的最大素数
void Pmtmin(long long int n)
{
    long long int p=n;
    for (;;p++) if(Judge(p)) break;
    cout<<"\n 最小素数是 "<<p<<endl;
}
int main() {
    while(true)
    {
        int flag;
        cout<<"\n请选择模式：\n 0:退出程序 \n 1:判断是否是素数 \n 2:求小于输入整数的最大素数 \n 3:求大于输入整数的最小素数 \n 请输入： \0";
        cin>>flag;
        if(!flag) break;
        else{
            long long int n;
            cout<<"\n输入整数n"<<endl;
            cin>>n;
            if(flag==1){
                int result= Judge(n);
                if(result) cout<<n<<" 是素数 "<<endl;
                else cout<<n<<" 不是素数 "<<endl;
            }
            else if(flag==2) Pltnmax(n);
            else if(flag==3) Pmtmin(n);
            continue;
        }

    }
    return 0;
}
