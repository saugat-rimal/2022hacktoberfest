#include<bits/stdc++.h>
using namespace std;
int main()
{
    char sudoku[9][9];
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cin>>sudoku[i][j];
        }
    }
    int flag=1;
    for(int i=0;i<9;i++)
    {
         int hsh[9]={0};
        for(int j=0;j<9;j++)
        {
       
        if(sudoku[i][j] =='.')
        continue;
        if(sudoku[i][j] == '1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9')
        {
            hsh[sudoku[i][j]-'0']++;
        }
        }
        if(hsh[i]==2)
        {
            flag=0;
            break;
        }
    }
    for(int j=0;j<9;j++)
    {
         int hsh[9]={0};
        for(int i=0;i<9;i++)
        {
       
        if(sudoku[i][j] =='.')
        continue;
        if(sudoku[i][j] == '1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9')
        {
            hsh[sudoku[i][j]-'0']++;
        }
        }
        if(hsh[j]==2)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"true"<<endl;
    }
    if (flag==0)
    {
        cout<<"false"<<endl;
    }
    return 0;
}