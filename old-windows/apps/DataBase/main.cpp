/*#include "readWriteFile.h"*/
#include "common.h"
#include "util.h"

/*using namespace std;*/

void columnsRows();
void menu();

string identify(int val);

int convert(string val);

string identify(string val)
{
  int counter = 0;

  for (int i = 0; i < val.length(); i++)
  {

    if((val[i] >= 'a' && val[i] <= 'z') || (val[i] >= 'A' && val[i] <= 'Z'))
    {
      cout << "letters detected" << endl << endl;
      return "letter";
    }
    else if(val[i] >= '0' && val[i] <= '9')
    {
      counter++;

      if (counter == val.length())
      {
        cout << "numbers detected" << endl << endl;
        return "number";
      }

    }
    else if((val[i] == '+' || val[i] == '-' || val[i] == '*' || val[i] == '/') & (val.length() == 1))
    {
      cout << "operator detected" << endl << endl;
      return "operator";
    }
    else
    {
      cout << "misc detected" << endl << endl;
      return "misc";
    }
  }
}

int convert(string val)
{
  string result;

  int number;

  result = identify(val);

  if (result != "number")
  {
    columnsRows();
  }
  else
  {
    return number = stoi(val);
  }
}

int main()
{
  menu();

  return 0;
}

void menu()
{
  columnsRows();
}

void columnsRows()
{
  string columns = "1";
  string rows = "1";

  int columns2 = 0;
  int rows2 = 0;

  cout << "How many columns would you like?: ";
  cin >> columns; cout << endl << endl;

  columns2 = convert(columns);

  cout << columns2;

  cout << "How many rows would you like?: ";
  cin >> rows; cout << endl << endl;

  rows2 = convert(rows);

  cout << rows2;
}
