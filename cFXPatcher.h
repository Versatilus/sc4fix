#pragma once
#include "cIFXPatcher.h"
#include "cIFXPatch.h"
#include <cRZUnknown.h>
#include <list>

class cFXPatcher : public cIFXPatcher, public cRZUnknown
{
	public:
		bool InstallPatches(bool bUseSteamPatches);
		bool UninstallPatches(void);

		patchv GetPatcherVersion(void);

	private:
		std::list<cIFXPatch*> sPatches;
};