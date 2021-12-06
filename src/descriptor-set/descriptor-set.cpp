#include "descriptor-set.h"



namespace XGK
{
	namespace API
	{
		struct DescriptorSetOffsets
		{
			std::size_t bindings = offsetof(DescriptorSet, bindings);
		};

		DescriptorSetOffsets descriptor_set_offsets {};
	}
}
