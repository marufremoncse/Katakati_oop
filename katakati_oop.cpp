#include<iostream>
using namespace std;

class player
{
    static int a;
    string name;
public:
    friend istream &operator>>(istream &stream,player &ob);
};
int player :: a;
istream &operator>>(istream &stream,player &ob)
{
    cout<<"Enter name of player "<<player :: a;
    cin>>ob.name;
    return stream;
}
int main()
{
    int num[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j,n=10,k=0;
    string player1;
    string player2;
    cout<<"Enter name of Player1 : ";
    cin>>player1;
    cout<<"Enter name of Player2 : ";
    cin>>player2;
    cout<<"\n"<<player1<<" will take 'X' "<<"& "<<player2<<" will take 'O'"<<endl<<endl;
    char arr[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    while(n)
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<arr[i][j];
                if(j<2){cout<<" | ";};
            }
            if(i<2){cout<<"\n---------\n";};
        }
        cout<<"\n\n";

        if((arr[0][0]==arr[0][1] && arr[0][1]==arr[0][2]) ||
           (arr[1][0]==arr[1][1] && arr[1][1]==arr[1][2]) ||
           (arr[2][0]==arr[2][1] && arr[2][1]==arr[2][2]) ||
           (arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2]) ||
           (arr[0][2]==arr[1][1] && arr[1][1]==arr[2][0]) ||
           (arr[0][0]==arr[1][0] && arr[1][0]==arr[2][0]) ||
           (arr[0][1]==arr[1][1] && arr[1][1]==arr[2][1]) ||
           (arr[0][2]==arr[1][2] && arr[1][2]==arr[2][2]) )   goto finish;
        int array[9];
        int a;
        if(n>1)
        {
            if(n%2==0)cout<<player1<<"'s Turn"<<"\n\n";
            else      cout<<player2<<"'s Turn"<<"\n\n";
            input: cin>>a;
            if(a<1 || a>9)
            {
                cout<<"Wrong key! Press correct key"<<endl;
                goto input;
            }
            for(i=0;i<k;i++)
            {
                if(array[i]==a)
                {
                    cout<<"This key have already pressed ! Press correct key"<<endl;
                    goto input;
                }
            }
            array[k]=a;
            k++;
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(a==num[i][j])
                {
                    if(n%2==0) arr[i][j]='X';
                    else arr[i][j]='O';
                }
            }
        }
        cout<<"\n";
        n--;
    }
    finish: if((arr[0][0]=='X' && arr[0][1]=='X' && arr[0][2]=='X') ||
       (arr[1][0]=='X' && arr[1][1]=='X' && arr[1][2]=='X') ||
       (arr[2][0]=='X' && arr[2][1]=='X' && arr[2][2]=='X') ||
       (arr[0][0]=='X' && arr[1][1]=='X' && arr[2][2]=='X') ||
       (arr[0][2]=='X' && arr[1][1]=='X' && arr[2][0]=='X') ||
       (arr[0][0]=='X' && arr[1][0]=='X' && arr[2][0]=='X') ||
       (arr[0][1]=='X' && arr[1][1]=='X' && arr[2][1]=='X') ||
       (arr[0][2]=='X' && arr[1][2]=='X' && arr[2][2]=='X') )       cout<<player1<<" wins!!!"<<endl;
    else if((arr[0][0]=='O' && arr[0][1]=='0' && arr[0][2]=='O') ||
       (arr[1][0]=='O' && arr[1][1]=='O' && arr[1][2]=='O') ||
       (arr[2][0]=='O' && arr[2][1]=='O' && arr[2][2]=='O') ||
       (arr[0][0]=='O' && arr[1][1]=='O' && arr[2][2]=='O') ||
       (arr[0][2]=='O' && arr[1][1]=='O' && arr[2][0]=='O') ||
       (arr[0][0]=='O' && arr[1][0]=='O' && arr[2][0]=='O') ||
       (arr[0][1]=='O' && arr[1][1]=='O' && arr[2][1]=='O') ||
       (arr[0][2]=='O' && arr[1][2]=='O' && arr[2][2]=='O') )      cout<<player2<<" wins!!!"<<endl;
    else cout<<"Match Drawn"<<endl;

    return 0;
}

