#pragma once

#include "Event.h"

namespace game {
namespace event {

class DespawnUnit : public Event {
public:
	DespawnUnit( const size_t initiator_slot, const size_t unit_id );

	const std::string* Validate( const Game* game ) const override;
	const gse::Value Apply( game::Game* game ) const override;
	TS_DEF()

private:
	friend class Event;

	static void Serialize( types::Buffer& buf, const DespawnUnit* event );
	static DespawnUnit* Unserialize( types::Buffer& buf, const size_t initiator_slot );

private:
	size_t m_unit_id;
};

}
}
