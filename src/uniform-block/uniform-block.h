#ifndef __XGK_API_UNIFORM_BLOCK__
#define __XGK_API_UNIFORM_BLOCK__



#include <cstdint>
#include <string>
#include <vector>

#include "xgk-api/src/uniform/uniform.h"



namespace XGK
{
	namespace API
	{
		enum class DescriptorBindingType : std::size_t
		{
			UNIFORM_BUFFER,
		};



		// struct DescriptorBinding
		struct UniformBlock
		{
			static std::vector<UniformBlock*> instances;

			// TODO: destroy all dedicated uniforms
			static void destroy (void);



			// No constructors for aggregate type



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
