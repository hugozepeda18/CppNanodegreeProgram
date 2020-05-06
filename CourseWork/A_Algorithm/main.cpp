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
void ReadBoardFile(string path) {
  ifstream myfile (path);
  if (myfile) {
    string line;
    while (getline(myfile, line)) {
      cout << line << "\n";
      for(int i=0;i<ParseLine(line).size();i++)
      {
          cout << ParseLine(line)[i] << "\n";
      }
    }
  }
}

void PrintBoard(const vector<vector<int>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
}

int main() {
  ReadBoardFile("1.board");
  // Leave commented out.
  // PrintBoard(board);
}