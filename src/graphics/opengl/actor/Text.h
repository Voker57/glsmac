#pragma once

#include "Actor.h"

#include "scene/actor/Text.h"
#include "types/Font.h"

using namespace types;

namespace graphics {
namespace opengl {

class FontTexture;
	
CLASS( Text, Actor )

	Text( scene::actor::Text *actor, Font* font );
	~Text();
	
	void Update( Font* font, const std::string& text, const float x, const float y );
	void Draw( shader_program::ShaderProgram *shader_program, Camera *camera = nullptr );
	
protected:

	typedef struct {
		GLfloat x;
		GLfloat y;
		GLfloat tx;
		GLfloat ty;
	} vertex_t;
	typedef struct {
		vertex_t v1;
		vertex_t v2;
		vertex_t v3;
		vertex_t v4;
	} vertex_box_t;

	GLuint m_vbo = 0;
	size_t m_boxes_count = 0;

	Font *m_font = nullptr;
	FontTexture *m_texture = nullptr;
};

} /* namespace opengl */
} /* namespace graphics */

#include "../texture/FontTexture.h"
