#ifndef INC_LIGHT_H
#define INC_LIGHT_H

#include"vec4.h"


struct alignas(16) light {
	vec4 mPosition;
	vec4 mColor;
};

#endif