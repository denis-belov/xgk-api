#ifndef __XGK_API_UNIFORM__
#define __XGK_API_UNIFORM__



// size_t
#include <cstddef>
#include <string>



namespace XGK
{
	namespace API
	{
		struct Uniform
		{
			void* object_addr {};

			std::string name {};

			size_t block_index {};

			size_t size {};
		};
	}
}



#endif
