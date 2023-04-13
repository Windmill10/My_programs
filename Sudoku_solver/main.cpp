#include "main.h"

void displaygrid(vector<vector<string>> myvec);
void displaygrid(int mygrid[9][9]);
bool grid_valid();
void note_grid();
void input_entire_grid();
void input_individual_cells();
void solve_sudoku();

vector<vector<string>> strGrid(9, vector<string>(9, "")), blankGrid(9, vector<string>(9, "")); // initialize strGrid with empty strings

int grid[9][9]{0}; //(row, column) (horizontal, vertical)
bool confirmed_number[9][9]{};
int main()
{
    bool input_mode = true;
    cout << "Choose input mode, 0(enter the entire grid), 1(enter individual cells) ";
    cin >> input_mode;

    if(input_mode){
        input_individual_cells();
    }else{
        input_entire_grid();
    }
    if(!grid_valid()){ 
        cout << "Grid is not valid, check input. Program terminated";
        return 0;
    }
    //displaygrid(grid);
    
    note_grid();
    //cout << "size is: " << strGrid[1][0].size() << endl;
    solve_sudoku();
    strGrid = blankGrid;
    note_grid();

    displaygrid(grid);
    
}

void displaygrid(vector<vector<string>> myvec){
    string horizontalLine(100, '-');
    for (int i = 0; i < 9; ++i) {
        cout << endl << horizontalLine << endl;
        for (int j = 0; j < 9; ++j) {
            cout << "| " << std::setw(8) << myvec[i][j] << " ";
        }
        cout << "|";
    }
    cout << endl << horizontalLine << endl;
}

void displaygrid(int mygrid[9][9]) {
    string horizontalLine(100, '-');
    for (int i = 0; i < 9; ++i) {
        cout << endl << horizontalLine << endl;
        for (int j = 0; j < 9; ++j) {
            cout << "| " << std::setw(8) << mygrid[i][j] << " ";
        }
        cout << "|";
    }
    cout << endl << horizontalLine << endl;
}
bool grid_valid(){
    short vertical_presence[9][10]{0}, horizontal_presence[9][10]{0}, box_presence[9][10]{0};
    for(int i = 0; i < 9; ++i){ //i: vertical, j: horizontal
        for(int j = 0; j < 9; ++j){
            if(grid[i][j] != 0){
                vertical_presence[j][grid[i][j]]++;
                horizontal_presence[i][grid[i][j]]++;
                box_presence[(i/3)*3 + j/3][grid[i][j]]++;
            }if(vertical_presence[j][grid[i][j]] > 1 || horizontal_presence[i][grid[i][j]] > 1 
                || box_presence[(i/3)*3 + j/3][grid[i][j]] > 1) return 0;
        }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    }
    return 1;

}
void note_grid(){
    
    bool vertical_presence[9][10]{}, horizontal_presence[9][10]{}, box_presence[9][10]{}; // initialize with all false
    for(int i = 0; i < 9; ++i){ //i: vertical, j: horizontal
        for(int j = 0; j < 9; ++j){
            if(grid[i][j] != 0){
                vertical_presence[j][grid[i][j]] = true;
                horizontal_presence[i][grid[i][j]] = true;
                box_presence[(i/3)*3 + j/3][grid[i][j]] = true;
                confirmed_number[i][j] = true;
            }
            }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
        }
    for(int i = 0; i < 9; ++i){
        for(int j = 0; j < 9; ++j){
            for(int k = 1; k <= 9; ++k){
                if(confirmed_number[i][j]){
                    //cout << grid[i][j] << endl;
                    strGrid[i][j] = std::to_string(grid[i][j]);
                    //cout << strGrid[i][j];
                    break;
                }
                if(!vertical_presence[j][k] && !horizontal_presence[i][k] && !box_presence[(i/3)*3 + j/3][k])
                strGrid[i][j] += std::to_string(k);
            }
        }
    }
    displaygrid(strGrid);
    
}

void solve_sudoku(){

    int previous_modification = 1, modification = 0, i = 3;

        while(true){
            modification = 0;
            for(int i = 0; i < 9; ++i){
                for(int j = 0; j < 9; ++j){
                    if(strGrid[i][j].size() == 1 && !confirmed_number[i][j]){
                        grid[i][j] = stoi(strGrid[i][j]);
                        confirmed_number[i][j] = true;
                        modification++;
                    }
                }
            }
            cout << modification << endl;
            if(modification == 0) break;
            strGrid = blankGrid;
            note_grid();
            

        }
        
}

void advanced_solve_sudoku(){

    int previous_modification = 1, modification = 0, i = 3;

        while(true){
            modification = 0;
            for(int i = 0; i < 9; ++i){
                for(int j = 0; j < 9; ++j){
                    if(strGrid[i][j].size() == 1 && !confirmed_number[i][j]){
                        grid[i][j] = stoi(strGrid[i][j]);
                        confirmed_number[i][j] = true;
                        modification++;
                    }
                }
            }
            
            cout << modification << endl;
            if(modification == 0) break;
            strGrid = blankGrid;
            note_grid();
            

        }
        
}
void input_entire_grid(){
    for(int i = 0; i < 9; ++i) {
        for(int j = 0; j < 9; ++j) {
            cin >> grid[i][j];
        }
    }
}   

void input_individual_cells(){
    int known_positions, cinx, ciny, input;
    cout << "How many positions are known?" << endl;
    cin >> known_positions;
    while (known_positions--)
    {
        cout << "enter the integer and its corresponding positions(x, y)";
        cin >> input >> cinx >> ciny;
        grid[abs(ciny)][abs(cinx)] = input;
    }
}
