#ifndef __XGK_API_SCENE__
#define __XGK_API_SCENE__



#include <vector>

#include "object/object.h"



namespace XGK
{
	namespace API
	{
		struct Scene
		{
			std::vector<float> vertex_data {};
			// std::vector<uint32_t> index_data;

			void addObject (Object&);
			void addObject (Object*);
		};
	}
}



#endif
