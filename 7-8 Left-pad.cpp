#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,num;
    char c;
    string s;
    scanf("%d %c",&n,&c);
    getchar();
    getline(cin,s);
    if(s.size()>n){
        reverse(s.begin(),s.end());///将字符串反转，再倒序输出
        for(int i = n-1;i >= 0;i--)
            printf("%c",s[i]);
        printf("\n");
    }
    else{
        num = n - s.size();
        while(num--)
            printf("%c",c);
        cout << s << endl;
    }
    return 0;
}
