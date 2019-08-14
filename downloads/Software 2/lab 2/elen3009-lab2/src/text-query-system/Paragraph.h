#ifndef PARAGRAPH_H
#define PARAGRAPH_H

#include <vector>
#include <tuple>
#include "Word.h"
#include "Line.h"
using namespace std;

class Paragraph
{
public:
	// DO NOT MODIFY THE PUBLIC INTERFACE OF THIS CLASS

	// no need for constructor
	void addLine(const Line& line);
	// the bool return type is true if the word is found in the paragraph; false otherwise
	// the vector return type contains the line numbers at which the search word is found
	// if the search word is not found an empty vector is returned
	tuple<bool, vector<int>> contains(const Word& search_word) const;	

private:	

};

#endif

