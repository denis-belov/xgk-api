#include "uniform.h"



namespace XGK
{
	namespace API
	{
		struct UniformOffsets
		{
			size_t object_addr = offsetof(Uniform, object_addr);
			size_t name = offsetof(Uniform, name);
			size_t block_index = offsetof(Uniform, block_index);
		};

		UniformOffsets uniform_offsets;
	}
}
