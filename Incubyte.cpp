#include <iostream>
using namespace std;

// for mooving forward
void forward(int cordinate[3], char direction)
{
    switch (direction)
    {
    case 'N':
        cordinate[1] += 1;
        break;
    case 'S':
        cordinate[1] -= 1;
        break;
    case 'E':
        cordinate[0] += 1;
        break;
    case 'W':
        cordinate[0] -= 1;
        break;
    case 'U':
        cordinate[2] += 1;
        break;
    case 'D':
        cordinate[2] -= 1;
        break;
    }
}

// for mooving backward
void backward(int cordinate[3], char direction)
{
    switch (direction)
    {
    case 'N':
        cordinate[1] -= 1;
        break;
    case 'S':
        cordinate[1] += 1;
        break;
    case 'E':
        cordinate[0] -= 1;
        break;
    case 'W':
        cordinate[0] += 1;
        break;
    case 'U':
        cordinate[2] -= 1;
        break;
    case 'D':
        cordinate[2] += 1;
        break;
    }
}

// left rotation
void left(char &direction)
{
    switch (direction)
    {
    case 'N':
        direction = 'W';
        break;
    case 'S':
        direction = 'E';
        break;
    case 'E':
        direction = 'N';
        break;
    case 'W':
        direction = 'S';
        break;
    }
}

// right rotation
void right(char &direction)
{
    switch (direction)
    {
    case 'N':
        direction = 'E';
        break;
    case 'S':
        direction = 'W';
        break;
    case 'E':
        direction = 'S';
        break;
    case 'W':
        direction = 'N';
        break;
    }
}

int main()
{
    string s;
    cout << "Enter command:";
    cin >> s;
    char direction = 'N';
    char prev = 'N';
    int cordinate[3] = {0, 0, 0};

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'F')
        {
            forward(cordinate, direction);
        }
        else if (s[i] == 'B')
        {
            backward(cordinate, direction);
        }
    }
    cout << "Final cordinates are: " << cordinate[0] << " " << cordinate[1] << " " << cordinate[2] << endl;
    return 0;
}