#pragma once

#include <iostream>

using namespace std;

class DocumentEnding
	{
public:

	DocumentEnding ( )
		{
		docEndPosition = 0;
		docNumWords = 0;
		url = "";
		}

	size_t docEndPosition;
	size_t docNumWords;
	string url;
	};