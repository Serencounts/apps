//��Ѱһ��С������n���������
#include <iostream>
#include <cmath>
using namespace std;
//�ж��Ƿ�������
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
//����С�ڸ����������������
void Pltnmax(long long int n)
{
    long long int p=n;

    for(;p>=2;p--) if(Judge(p)) break;

    cout<<"\n ��������� "<<p<<endl;
}
//���ɴ��ڸ����������������
void Pmtmin(long long int n)
{
    long long int p=n;
    for (;;p++) if(Judge(p)) break;
    cout<<"\n ��С������ "<<p<<endl;
}
int main() {
    while(true)
    {
        int flag;
        cout<<"\n��ѡ��ģʽ��\n 0:�˳����� \n 1:�ж��Ƿ������� \n 2:��С������������������� \n 3:�����������������С���� \n �����룺 \0";
        cin>>flag;
        if(!flag) break;
        else{
            long long int n;
            cout<<"\n��������n"<<endl;
            cin>>n;
            if(flag==1){
                int result= Judge(n);
                if(result) cout<<n<<" ������ "<<endl;
                else cout<<n<<" �������� "<<endl;
            }
            else if(flag==2) Pltnmax(n);
            else if(flag==3) Pmtmin(n);
            continue;
        }

    }
    return 0;
}
