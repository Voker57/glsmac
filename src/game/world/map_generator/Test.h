#pragma once

#include "MapGenerator.h"

namespace game {
namespace world {
namespace map_generator {
		
CLASS( Test, MapGenerator )
	
	void Generate( Tiles* tiles, size_t seed );
	
};
	
}
}
}

