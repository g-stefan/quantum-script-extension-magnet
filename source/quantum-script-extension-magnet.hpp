//
// Quantum Script Extension Magnet
//
// Copyright (c) 2020-2021 Grigore Stefan <g_stefan@yahoo.com>
// Created by Grigore Stefan <g_stefan@yahoo.com>
//
// MIT License (MIT) <http://opensource.org/licenses/MIT>
//

#ifndef QUANTUM_SCRIPT_EXTENSION_MAGNET_HPP
#define QUANTUM_SCRIPT_EXTENSION_MAGNET_HPP

#ifndef QUANTUM_SCRIPT_HPP
#include "quantum-script.hpp"
#endif

#ifndef QUANTUM_SCRIPT_EXTENSION_MAGNET__EXPORT_HPP
#include "quantum-script-extension-magnet--export.hpp"
#endif

#ifndef QUANTUM_SCRIPT_EXTENSION_MAGNET_COPYRIGHT_HPP
#include "quantum-script-extension-magnet-copyright.hpp"
#endif

#ifndef QUANTUM_SCRIPT_EXTENSION_MAGNET_LICENSE_HPP
#include "quantum-script-extension-magnet-license.hpp"
#endif

#ifndef QUANTUM_SCRIPT_EXTENSION_MAGNET_VERSION_HPP
#include "quantum-script-extension-magnet-version.hpp"
#endif

namespace Quantum {
	namespace Script {
		namespace Extension {
			namespace Magnet {

				using namespace Quantum::Script;

				QUANTUM_SCRIPT_EXTENSION_MAGNET_EXPORT void initExecutive(Executive *executive, void *extensionId);
				QUANTUM_SCRIPT_EXTENSION_MAGNET_EXPORT void registerInternalExtension(Executive *executive);

			};
		};
	};
};

#endif
