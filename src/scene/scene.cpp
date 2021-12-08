#include <cstring>

#include "scene.h"



namespace XGK
{
	namespace API
	{
		void Scene::addObject (Object& object)
		{
			object.scene_vertex_data_offset = vertex_data.size() / 3;
			object.scene_vertex_data_length = object.vertex_data.size() / 3;

			std::size_t asd = vertex_data.size();

			vertex_data.resize(vertex_data.size() + object.vertex_data.size());

			memcpy(vertex_data.data() + asd, object.vertex_data.data(), object.vertex_data.size() * 4);
		}

		void Scene::addObject (Object* object)
		{
			object->scene_vertex_data_offset = vertex_data.size() / 3;
			object->scene_vertex_data_length = object->vertex_data.size() / 3;

			std::size_t asd = vertex_data.size();

			vertex_data.resize(vertex_data.size() + object->vertex_data.size());

			memcpy(vertex_data.data() + asd, object->vertex_data.data(), object->vertex_data.size() * 4);
		}
	}
}
