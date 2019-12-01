#pragma once
class uDynamic
{
public:
	uDynamic(unsigned __int8 size);
	uDynamic(const uDynamic &a);
	~uDynamic();
	uDynamic& operator=(const uDynamic& a_src);

	unsigned __int8* data;
	unsigned __int8 size;
	int numb=0;
};


