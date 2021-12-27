#ifndef __XGK_API_UNIFORM__
#define __XGK_API_UNIFORM__



// size_t
#include <cstddef>
#include <string>

#include "xgk-api/src/base/base.h"



namespace XGK
{
	namespace API
	{
		struct Uniform : public Base
		{
			void* object_addr {};

			std::string name {};

			size_t block_index {};

			size_t size {};
		};
	}
}



#endif
