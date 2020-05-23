#include "File.h"
#include <fstream>
#include <iostream>
#include "String.h"
#include <stdlib.h>
using namespace std;

File::File()
{}
void File::open(const char* fileName)
{
    ifstream outfile(fileName);
    outfile.open(fileName);
    cout << "Successfully opened file.txt" << endl;
    outfile.close();
}
void File::close(const char* fileName)
{
    cout << "Successfully closed file.txt" << endl;
}
void File::save(const char* fileName)
{
    String data;
    ofstream outfile;
    outfile.open(fileName);
    outfile << data ;
    cout << "Successfully saved file.txt" << endl;
    outfile.close();
}
void File::saveas(const char* fileName)
{
    String data;
    ifstream outfile;
    ofstream newfile;
    newfile << data << outfile;
    cout << "Successfully saved another file.txt";
}
void File::Exit()
{
    cout << "Exiting the program..." << endl;
    exit(0);
}
void File::help()
{
    cout << "open: opens a file" << endl << "close: closes a file without saving the changes" << endl << "save: saves the changes to the file" << endl << "saveas : saves the changes to a new file" << "help: provides info about the commands available to the user" << endl << "exit: exits the program" << endl;


}


File::~File()
{}
