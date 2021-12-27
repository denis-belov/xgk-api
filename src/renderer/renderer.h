#ifndef __XGK_API_RENDERER__
#define __XGK_API_RENDERER__



// size_t
#include <cstddef>

#include "xgk-api/src/base/base.h"



namespace XGK
{
	namespace API
	{
		struct Renderer : public Base
		{
			size_t width {};
			size_t height {};
		};
	}
}



#endif
