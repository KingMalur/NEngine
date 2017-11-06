/////////////////////////////////////////////////////////////////////////////////
//
// NEngine C++ Library
// Copyright (c) 2017-2017 Sebastian Netsch
//
// This software is provided 'as-is', without any express or implied
// warranty. In no event will the authors be held liable for any damages
// arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented; you must not
//    claim that you wrote the original software. If you use this software
//    in a product, an acknowledgment in the product documentation would be
//    appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such, and must not be
//    misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
/////////////////////////////////////////////////////////////////////////////////

#ifndef __NENGINE__NSTATE_MANAGER__NSTATE__
#define __NENGINE__NSTATE_MANAGER__NSTATE__

/////////////////////////////////////////////////////////////////////////////////
// ! memory for shared pointers
// ! SFML/Graphics.hpp for Drawable
/////////////////////////////////////////////////////////////////////////////////
#include <memory>
#include <SFML/Graphics.hpp>

/////////////////////////////////////////////////////////////////////////////////
// ! namespace for the nengine
/////////////////////////////////////////////////////////////////////////////////
namespace nengine {

/////////////////////////////////////////////////////////////////////////////////
// ! namespace for the nstate_manager
/////////////////////////////////////////////////////////////////////////////////
namespace nstate_manager {

/////////////////////////////////////////////////////////////////////////////////
// ! a single nstate
/////////////////////////////////////////////////////////////////////////////////
class nstate
{
	public:
		/////////////////////////////////////////////////////////////////////////////////
		// ! virtual init function to be implemented in every derived class
		// ! used to initialise all needed variables
		/////////////////////////////////////////////////////////////////////////////////
		virtual void init() = 0;
		/////////////////////////////////////////////////////////////////////////////////
		// ! virtual handle function to be implemented in every derived class
		// ! used to handle input events and internal changes
		/////////////////////////////////////////////////////////////////////////////////
		virtual void handle() = 0;
		/////////////////////////////////////////////////////////////////////////////////
		// ! virtual update function to be implemented in every derived class
		// ! used to update internal variables
		/////////////////////////////////////////////////////////////////////////////////
		virtual void update(float dt) = 0;
		/////////////////////////////////////////////////////////////////////////////////
		// ! virtual draw function to be implemented in every derived class
		// ! used to draw all drawable entities
		/////////////////////////////////////////////////////////////////////////////////
		virtual void draw(float dt) = 0;
		/////////////////////////////////////////////////////////////////////////////////
		// ! virtual pause function to be implemented in every derived class
		// ! used to set internal pause variable
		/////////////////////////////////////////////////////////////////////////////////
		virtual void pause() = 0;
		/////////////////////////////////////////////////////////////////////////////////
		// ! virtual resume function to be implemented in every derived class
		// ! used to unset internal pause variable
		/////////////////////////////////////////////////////////////////////////////////
		virtual void resume() = 0;
	private:
}; // end of class nstate

} // end of namespace nstate

} // end of namespace nengine

#endif // end of __NENGINE__NSTATE_MANAGER__NSTATE__
