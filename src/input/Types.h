#pragma once

namespace input {

enum mouse_button_t : uint8_t {
	MB_NONE,
	MB_LEFT,
	MB_RIGHT,
	MB_MIDDLE,
};

enum event_type_t {
	EV_NONE,
	EV_MOUSE_MOVE,
	EV_MOUSE_OVER,
	EV_MOUSE_OUT,
	EV_MOUSE_DOWN,
	EV_MOUSE_UP,
	EV_MOUSE_SCROLL,
	EV_KEY_DOWN,
	EV_KEY_UP,
	EV_KEY_PRESS,
	EV_CLICK,
	EV_DOUBLE_CLICK,
	EV_CHANGE,
	EV_SELECT,
	EV_RESIZE,
	EV_CONFIRM,
	EV_OFFCLICK,
};

enum event_flag_t : uint8_t {
	EF_NONE = 0,
	EF_MOUSE = 1 << 0,
	EF_KEYBOARD = 1 << 1,
};

}
