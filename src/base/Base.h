#pragma once

#ifdef _WIN32
#include "env/Win32.h"
#endif

#include <string>
#include <stdexcept>

#define THROW(  _text ) throw std::runtime_error( _text )

#ifdef DEBUG
#include "env/Debug.h"
#else
#include "env/Release.h"
#endif

namespace base {

class Base {
public:
	Base();
	virtual ~Base();
	virtual const std::string GetNamespace() const;
	const std::string GetName() const;
	const std::string& GetLocalName() const;
	virtual const std::string GetClassName() const = 0;
protected:
	const size_t m_object_id = 0;
	std::string m_class_name = "";
	std::string m_name = "";
	void Log( const std::string &text ) const;
};

#define CLASS( _name, _parent ) \
class _name : public _parent { \
public: \
	virtual const std::string GetNamespace() const { \
		return _parent::GetNamespace() + # _name + "::" ; \
	} \
	const std::string GetClassName() const { \
		return #_name; \
	}

} /* namespace base */

using namespace base;
