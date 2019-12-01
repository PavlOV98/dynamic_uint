#include "stdafx.h"
#include "uDynamic.h"

uDynamic::uDynamic(unsigned __int8 size)
{
	this->size = size;
	this->data = (unsigned __int8*)calloc(8, size);
}

uDynamic::uDynamic(const uDynamic& a)
{
	this->size = a.size;
	this->numb = a.numb+1;
	this->data = new unsigned __int8[this->size];
	memcpy(this->data, a.data, this->size);
}

uDynamic::~uDynamic()
{
	//std::cout << "term "<<numb;
	delete this->data;
}

uDynamic& uDynamic::operator=(const uDynamic& src)
{
	this->~uDynamic();
	this->size = src.size;
	this->numb = src.numb + 1;
	this->data = new unsigned __int8[this->size];
	memcpy(this->data, src.data, this->size);;
	return *this;
	// TODO: вставьте здесь оператор return

}

