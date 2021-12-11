#include "xgk-api/src/material/material.h"



namespace XGK
{
	namespace API
	{
		struct MaterialOffsets
		{
			std::size_t topology = offsetof(Material, topology);
			std::size_t glsl100es_code_vertex = offsetof(Material, glsl100es_code_vertex);
			std::size_t glsl100es_code_fragment = offsetof(Material, glsl100es_code_fragment);
			std::size_t glsl300es_code_vertex = offsetof(Material, glsl300es_code_vertex);
			std::size_t glsl300es_code_fragment = offsetof(Material, glsl300es_code_fragment);
			std::size_t glsl4_code_vertex = offsetof(Material, glsl4_code_vertex);
			std::size_t glsl4_code_fragment = offsetof(Material, glsl4_code_fragment);
			std::size_t spirv_code_vertex = offsetof(Material, spirv_code_vertex);
			std::size_t spirv_code_fragment = offsetof(Material, spirv_code_fragment);
			std::size_t wgsl_code_vertex = offsetof(Material, wgsl_code_vertex);
			std::size_t wgsl_code_fragment = offsetof(Material, wgsl_code_fragment);
			std::size_t uniforms = offsetof(Material, uniforms);
			std::size_t uniform_blocks = offsetof(Material, uniform_blocks);
			std::size_t descriptor_sets = offsetof(Material, descriptor_sets);
			// std::size_t dedicated_uniform_block = offsetof(Material, dedicated_uniform_block);
		};

		MaterialOffsets material_offsets;



		std::vector<Material*> Material::instances {};



		// TODO: destroy all dedicated uniforms
		void Material::destroy (void)
		{
			// for (std::size_t i {}; i < Material::instances.size(); ++i)
			// {
			// 	delete Material::instances[i];
			// }

			for (Material* material : Material::instances)
			{
				delete material;
			}
		}

		void Material::injectUniform (XGK::API::Uniform& uniform)
		{
			uniforms.push_back(&uniform);
		}

		void Material::injectUniform (XGK::API::Uniform&& uniform)
		{
			uniforms.push_back(&uniform);
		}

		void Material::injectUniform (XGK::API::Uniform* uniform)
		{
			uniforms.push_back(uniform);
		}

		void Material::injectUniformBlock (XGK::API::UniformBlock& uniform_block)
		{
			uniform_blocks.push_back(&uniform_block);
		}

		void Material::injectUniformBlock (XGK::API::UniformBlock&& uniform_block)
		{
			uniform_blocks.push_back(&uniform_block);
		}

		void Material::injectUniformBlock (XGK::API::UniformBlock* uniform_block)
		{
			uniform_blocks.push_back(uniform_block);
		}
	}
}
