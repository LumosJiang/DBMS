#include "Variant.h"


Varchar::Varchar(QString var, int maxSize)
	:QString(var)
{
	this->maxSize = maxSize;
	if (var.size() > maxSize) {
		throw VarcharException();
	}
}

