#include "uniform.h"



namespace XGK
{
	namespace API
	{
		struct UniformOffsets
		{
			std::size_t object_addr = offsetof(Uniform, object_addr);
			std::size_t name = offsetof(Uniform, name);
			std::size_t block_index = offsetof(Uniform, block_index);
			std::size_t size = offsetof(Uniform, size);
		};

		UniformOffsets uniform_offsets;
	}
}
