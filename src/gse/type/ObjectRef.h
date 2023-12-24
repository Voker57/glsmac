#pragma once

#include "Type.h"

#include "Object.h"

namespace gse {
namespace type {

class ObjectRef : public Type {
public:

	static const type_t GetType() { return Type::T_OBJECTREF; }

	ObjectRef( Object* object, const std::string& key )
		: Type( GetType() )
		, object( object )
		, key( key ) {}

	Object* object;
	const std::string key;

};

}
}
