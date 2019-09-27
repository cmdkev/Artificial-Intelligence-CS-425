#include "Backtracking.cpp"
#include "SudokuBoard.cpp"
#include <iostream>

int main()
{
	SudokuBoard sudoku;
	sudoku.input();
	sudoku.print();
	BacktrackingSearch(sudoku);
	// sudoku.print();
	return 0;
}

/*
0 0 3 0 0 9 4 6 0
0 0 6 0 0 0 1 0 0
0 0 0 6 3 2 0 0 0
5 0 0 0 0 1 0 0 2
0 2 4 0 0 0 6 8 0
8 0 0 2 0 0 0 0 7 
0 0 0 5 4 7 0 0 0
0 0 2 0 0 0 8 0 0
0 4 5 1 0 0 9 0 0
*/