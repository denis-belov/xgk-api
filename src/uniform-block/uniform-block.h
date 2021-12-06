#ifndef __XGK_API_UNIFORM_BLOCK__
#define __XGK_API_UNIFORM_BLOCK__



#include <cstdint>
#include <string>
#include <vector>

#include "uniform/uniform.h"



namespace XGK
{
	namespace API
	{
		enum class DescriptorBindingType : std::size_t
		{
			UNIFORM_BUFFER,
		};



		struct UniformBlockOptions
		{
			std::size_t binding {};

			DescriptorBindingType type {};

			std::string name {};
		};



		// struct DescriptorBinding
		struct UniformBlock
		{
			static std::vector<UniformBlock*> instances;

			// TODO: destroy all dedicated uniforms
			static void destroy (void);



			// UniformBlock () = default;
			UniformBlock (void);
			UniformBlock (const UniformBlockOptions&);
			UniformBlock (const UniformBlockOptions&&);
			UniformBlock (const UniformBlockOptions*);



			std::size_t binding {};

			DescriptorBindingType type {};

			std::string name {};

			std::vector<XGK::API::Uniform*> uniforms {};



			void injectUniform (XGK::API::Uniform&);
			void injectUniform (XGK::API::Uniform&&);
			void injectUniform (XGK::API::Uniform*);
		};
	}
}



#endif
