#include "uniform-block.h"



namespace XGK
{
	namespace API
	{
		UniformBlock::UniformBlock (void)
		{
			UniformBlock::instances.push_back(this);
		}

		UniformBlock::UniformBlock (const UniformBlockOptions& options)
		{
			binding = options.binding;
			name = options.name;
			// dedicated = options.dedicated;

			UniformBlock::instances.push_back(this);
		}

		UniformBlock::UniformBlock (const UniformBlockOptions&& options)
		{
			binding = options.binding;
			name = options.name;
			// dedicated = options.dedicated;

			UniformBlock::instances.push_back(this);
		}

		UniformBlock::UniformBlock (const UniformBlockOptions* options)
		{
			binding = options->binding;
			name = options->name;
			// dedicated = options->dedicated;

			UniformBlock::instances.push_back(this);
		}

		void UniformBlock::destroy (void)
		{
			for (std::size_t i {}; i < UniformBlock::instances.size(); ++i)
			{
				delete UniformBlock::instances[i];
			}
		}

		void UniformBlock::injectUniform (XGK::API::Uniform& uniform)
		{
			uniforms.push_back(&uniform);
		}

		void UniformBlock::injectUniform (XGK::API::Uniform&& uniform)
		{
			uniforms.push_back(&uniform);
		}

		void UniformBlock::injectUniform (XGK::API::Uniform* uniform)
		{
			uniforms.push_back(uniform);
		}



		struct UniformBlockOffsets
		{
			size_t binding = offsetof(UniformBlock, binding);
			size_t name = offsetof(UniformBlock, name);
			size_t uniforms = offsetof(UniformBlock, uniforms);
			size_t dedicated = offsetof(UniformBlock, dedicated);
		};

		UniformBlockOffsets uniform_block_offsets;
	}
}
