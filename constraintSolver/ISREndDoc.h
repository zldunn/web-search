//
// Created by Jake Close on 3/13/18.
//

#pragma once

#include <iostream>
#include <vector>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "WordSeek.h"
#include "../util/util.h"
#include "../indexer/DocumentEnding.h"
#include "../DataStructures/DiskHashTable/MMDiskHashTable.h"

// Find occurrences of document ends.
typedef size_t Location;
class ISREndDoc
	{
public:

	ISREndDoc();
	DocumentEnding next();
	void seek(Location target);
	DocumentEnding getCurrentDoc();
	Location GetStartingPositionOfDoc( );

	unsigned GetDocumentLength ( );
	unsigned GetTitleLength ( );
	string getURL ( );
	size_t currentChunk;
private:

	DocumentEnding currentDoc;
	char* memMap;

    int currentFile;

};


