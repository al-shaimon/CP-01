#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  fstream FileName;
  FileName.open("FileName");
  if (!FileName)
  {
    cout << "Error while creating the file";
  }
  else
  {
    cout << "File created successfully";
    FileName << "Writing to File";
    FileName << "International Islamic University Chittagong";
    // Writing the data to the created file. 
    FileName.close();
  }
  return 0;
}
// Program for Reading from File:
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//   fstream FileName;
//   FileName.open("FileName.txt", ios::in);
//   if (!FileName)
//   {
//     cout << "File doesn’t exist.";
//   }
//   else
//   {
//     char x;
//     while (1)
//     {
//       FileName >> x;
//       if (FileName.eof())
//         break;
//       cout << x;
//     }
//   }
//   FileName.close();
//   return 0;
// }