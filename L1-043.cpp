#include<iostream>
using namespace std;
typedef struct 	BOOK{
	int startT;
	int borrowed;
};//定义起始时间，借阅标识
BOOK book[1001];
int GetTime(int h,int m)
{
	return h*60+m;//返回当前时间分钟数
}
int main()
{
	int N;
	cin>>N;
	for(int i=0;i<1001;i++)
	book[i].borrowed=0;//初始化，置0，标识未借阅
	int index,h,m,totalT,cnt;//定义书号，时，分，借阅时间，借阅次数
	char c,state;//定义冒号，键值状态
	for(int i=0;i<N;i++)
	{
		totalT=cnt=0;//每天初始化为0
		while(1)
		{
			cin>>index>>state>>h>>c>>m;
			if(!index)break;//若书号为0，退出循环
			if(state=='S')
			{
				book[index].startT=GetTime(h,m);//保存当前时间分钟数
				book[index].borrowed=1;//标识为已借阅
			}
			else if(book[index].borrowed)//如果键值为E且已借阅
			{//此分支避免了只有E没有S的书，如果某书只有E没有S，则其标识一定是未借阅
				totalT+=GetTime(h,m)-book[index].startT;//累加时间
				cnt++;
				book[index].borrowed=0;//因为已经还书，标识为未借阅
			}
		}
		if(cnt)//如果借阅次数不为0
		cout<<cnt<<' '<<(int)(totalT*1.0/cnt+0.5)<<'\n';//输出借阅次数和借阅时间
		//注意需要先乘以1.0转为double，相除后再+0.5转换为int，这是一个测试坑点
		else
		cout<<"0 0\n";
	}
	return 0;
}
