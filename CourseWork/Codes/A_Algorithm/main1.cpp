#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using std::istringstream;
using std::cout;
using std::ifstream;
using std::string;
using std::vector;

// TODO: Add the ParseLine function here.
vector<int> ParseLine(string line)
{
	vector<int> ParseLine;
	istringstream my_stream(line);
	int n;
	char c; 
	while(my_stream >> n >> c)
    {
      ParseLine.push_back(n);
    }
	return ParseLine;
}
vector<vector<int>> ReadBoardFile(string path) {
  ifstream myfile (path);
  vector<vector<int>> board;
  if (myfile) {
    string line;
    while (getline(myfile, line)) {
      board.push_back(ParseLine(line));
    }
    return board;
  }
}

void PrintBoard(const vector<vector<int>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j] << " ";
    }
    cout << "\n";
  }
}

int main() {
  // Leave commented out.
  PrintBoard(ReadBoardFile("1.board"));
}