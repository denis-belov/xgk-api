#ifndef __XGK_API_BASE__
#define __XGK_API_BASE__



// size_t
#include <cstddef>
#include <string>



namespace XGK
{
	namespace API
	{
		struct Base
		{
			void* opengl_impl {};
			void* vulkan_impl {};
		};
	}
}



#endif
