#include "xgk-api/src/renderer/renderer.h"



namespace XGK
{
	namespace API
	{
		struct RendererOffsets
		{
			size_t width { offsetof(Renderer, width) };
			size_t height { offsetof(Renderer, height) };
		};

		RendererOffsets renderer_offsets {};
	}
}
