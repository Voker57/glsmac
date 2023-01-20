#pragma once

#include "base/Task.h"

#include <vector>
#include <string>

#include "ui/object/Surface.h"

#include "MenuObject.h"

#include "game/Settings.h"

#include "ui/MenuTheme.h"

using namespace std;
using namespace types;

using namespace ui;
namespace ui {
using namespace object;
}

namespace game {
namespace mainmenu {

CHILD_CLASS( MainMenu, base::Task )
	void Start();
	void Iterate();
	void Stop();
	
	game::Settings m_settings = {};
	
	void ShowMenu( MenuObject* menu_object );
	void GoBack();
	
protected:
	MenuTheme m_theme;

	const UIEventHandler* m_key_handler = nullptr;
	const UIEventHandler* m_mouse_handler = nullptr;
	
	Surface *m_background = nullptr;
	
	MenuObject *m_menu_object = nullptr;
	vector<MenuObject*> m_menu_history = {};
	vector<string> m_choice_history = {};
	
	MenuObject *m_menu_next = nullptr;
	bool m_goback = false;
	
};

} /* namespace mainmenu */
} /* namespace game */
