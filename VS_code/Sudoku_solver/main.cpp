#include "main.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

void displaygrid(int grid[9][9]){
        for (int i = 0; i <= 8; ++i)
    {
        cout << endl
             << "-----------------------------------" << endl;
        for (int j = 0; j <= 8; ++j)
        {
            cout << grid[i][j] << " | ";
        }
    }
}
int main()
{
    int grid[9][9]{0}, known_positions, cinx, ciny, input;
    cout << "How many positions are known?" << endl;
    cin >> known_positions;
    while (known_positions--)
    {
        cout << "enter the integer and its corresponding positions(x, y)";
        cin >> input >> cinx >> ciny;
        grid[abs(ciny)][abs(cinx)] = input;
    }
    displaygrid(grid);
    
}
