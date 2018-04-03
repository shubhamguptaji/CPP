#include <iostream>
#include <string>
#include <fstream>
#include<sstream>

int main()
{
    using namespace std;
char a = '1';
const char * filename = "file-1.txt";

std::ifstream file(filename);
int myArray[5][5];
    if(file.is_open())
    { 
        

        for(int i = 0; i < 5; ++i)
        {
for(int j=0;j<5;j++)
            file >> myArray[i][j];
        }
    }
for(int i=0;i<5;i++)
{
for(int j=0;j<5;j++)
cout<<myArray[i][j]<<" ";
cout<<endl;
}
}