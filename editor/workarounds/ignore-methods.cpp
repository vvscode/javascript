/**************************************************************************/
/*  ignore-methods.cpp                                                    */
/**************************************************************************/

/* All types are generated in editor_tools, but constructors are missing we need to add them manually. */

#include "../editor_tools.h"

Array create_ignore_methods() {
	Array array = Array();
	array.push_back("get_flag");
	array.push_back("set_flag");
	array.push_back("set_play_area_mode");
	return array;
}

Array JavaScriptPlugin::IGNORE_METHODS = create_ignore_methods();
