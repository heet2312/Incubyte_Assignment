#include <iostream>
using namespace std;
void forward(int cordinate[3], int distance)
{
    cordinate[0] += distance;
}
void backward(int cordinate[3], int distance)
{
    cordinate[0] -= distance;
}

int main()
{
    string s;
    cout << "Enter command:";
    cin >> s;
    int cordinate[3] = {0, 0, 0};
    bool flag = 0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='F')
        {
            forward(cordinate, 1);
        }
        else if(s[i]=='B')
        {
            backward(cordinate, 1);
        }
    }
    cout<<"Final cordinates are: "<<cordinate[0]<<" "<<cordinate[1]<<" "<<cordinate[2]<<endl;
    return 0;
}