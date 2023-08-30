#include <iostream>
using namespace std;

// inverse of direction
char inverse(char direction)
{
    switch (direction)
    {
    case 'N':
        return 'S';
        break;
    case 'S':
        return 'N';
        break;
    case 'E':
        return 'W';
        break;
    case 'W':
        return 'E';
        break;
    case 'U':
        return 'D';
        break;
    case 'D':
        return 'U';
        break;
    }
}

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
void left(char &direction, char &prev)
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

    case 'U':
        switch (prev)
        {
        case 'E':
            direction = 'N';
            break;

        case 'W':
            direction = 'S';
            break;

        case 'N':
            direction = 'W';
            break;

        case 'S':
            direction = 'E';
            break;
        }
        break;

    case 'D':
        switch (prev)
        {
        case 'E':
            direction = 'S';
            break;

        case 'W':
            direction = 'N';
            break;

        case 'N':
            direction = 'E';
            break;

        case 'S':
            direction = 'W';
            break;
        }
        break;
    }
}

// right rotation
void right(char &direction, char &prev)
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

    case 'U':
        switch (prev)
        {
        case 'E':
            direction = 'S';
            break;

        case 'W':
            direction = 'N';
            break;

        case 'N':
            direction = 'E';
            break;

        case 'S':
            direction = 'W';
            break;
        }
        break;

    case 'D':
        switch (prev)
        {
        case 'E':
            direction = 'N';
            break;

        case 'W':
            direction = 'S';
            break;

        case 'N':
            direction = 'W';
            break;

        case 'S':
            direction = 'E';
            break;
        }
        break;
    }
}

// upward rotation
void up(char &direction, char &prev, char &prevCommand)
{
    switch (direction)
    {
    case 'N':
        prev = 'N';
        direction = 'U';
        break;

    case 'S':
        prev = 'S';
        direction = 'U';
        break;

    case 'E':
        prev = 'E';
        direction = 'U';
        break;

    case 'W':
        prev = 'W';
        direction = 'U';
        break;

    case 'U':
        direction = inverse(prev);
        break;

    case 'D':
        direction = prev;
        break;
    }
    prevCommand = 'U';
}

// downward rotation
void down(char &direction, char &prev, char &prevCommand)
{
    switch (direction)
    {
    case 'N':
        prev = 'N';
        direction = 'D';
        break;
    case 'S':
        prev = 'S';
        direction = 'D';
        break;
    case 'E':
        prev = 'E';
        direction = 'D';
        break;
    case 'W':
        prev = 'W';
        direction = 'D';
        break;
    case 'U':
        direction = prev;
        break;
    case 'D':
        direction = inverse(prev);
        break;
    }
    prevCommand = 'D';
}

int main()
{
    // taking input
    string s;
    cout << "Enter command:";
    cin >> s;

    // initial cordinates
    char direction = 'N';
    char prev;
    char prevCommand;
    int cordinate[3] = {0, 0, 0};

    // traversing the string
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
        else if (s[i] == 'L')
        {
            left(direction, prev);
        }
        else if (s[i] == 'R')
        {
            right(direction, prev);
        }
        else if (s[i] == 'U')
        {
            up(direction, prev, prevCommand);
        }
        else if (s[i] == 'D')
        {
            down(direction, prev, prevCommand);
        }
        else
        {
            cout << "Invalid command" << endl;
            break;
        }
    }
    cout << "Final cordinates are: " << cordinate[0] << " " << cordinate[1] << " " << cordinate[2] << endl;
    cout << "Final direction is: " << direction << endl;
    return 0;
}