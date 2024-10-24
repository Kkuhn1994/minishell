#include "miniRT.h"

double magnitude(xyzvektor a)
{
	double result;

	result = sqrt(a.x * a.x + a.y * a.y + a.z * a.z + a.w * a.w);
	return result;
}

xyzvektor normalize(xyzvektor a)
{
	xyzvektor result;

	result.x = a.x * magnitude(a);
	result.y = a.y * magnitude(a);
	result.z = a.z * magnitude(a);
	result.w = a.w * magnitude(a);
	return result;
}

xyzvektor negateTuple(xyzvektor a)
{
	xyzvektor result;

	result.x = -a.x;
	result.y = -a.y;
	result.z = -a.z;
	result.w = -a.w;
	return result;
}