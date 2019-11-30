#include "stdafx.h"
#include "uDynamic.h"

uDynamic::uDynamic(unsigned __int8 size)
{
	this->size = size;
	this->data = (unsigned __int8*)calloc(8, size);
}

uDynamic::~uDynamic()
{
	//std::cout << "term ";
	delete this->data;
}