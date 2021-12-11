// TODO: specify binding index at pushing (desc_set2->injectBinding(uniform_block0, 0))?



#ifndef __XGK_API_DESCRIPTOR_SET__
#define __XGK_API_DESCRIPTOR_SET__



#include <vector>

#include "xgk-api/src/uniform-block/uniform-block.h"



namespace XGK
{
	namespace API
	{
		struct DescriptorSet
		{
			std::vector<UniformBlock*> bindings {};
		};
	}
}



#endif
