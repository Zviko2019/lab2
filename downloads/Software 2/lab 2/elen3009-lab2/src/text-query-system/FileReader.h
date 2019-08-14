#ifndef FILEREADER_H
#define FILEREADER_H

#include "Paragraph.h"
#include <string>
#include <fstream>
using namespace std;

// exception class
class FileCannotBeOpened{};

class FileReader
{
public:	
	// DO NOT MODIFY THE PUBLIC INTERFACE OF THIS CLASS

	FileReader(const string& filename);
	void readFileInto(Paragraph& file_receiver);

private:	
	ifstream infile_; // input file stream
};

#endif

