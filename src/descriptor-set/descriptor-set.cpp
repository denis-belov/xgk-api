// size_t
#include <cstddef>

#include "xgk-api/src/descriptor-set/descriptor-set.h"



namespace XGK
{
	namespace API
	{
		struct DescriptorSetOffsets
		{
			size_t bindings = offsetof(DescriptorSet, bindings);
		};

		DescriptorSetOffsets descriptor_set_offsets {};
	}
}
