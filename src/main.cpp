#include <ll/api/memory/Hook.h>
#include <ll/api/mod/NativeMod.h>

#include <memory>

namespace sound_physics_bedrock {

class Mod {
public:
    bool load() {
        // TODO: Register the Bedrock client audio hooks here.
        // This starter intentionally does not pretend to contain a working
        // Sound Physics implementation.
        return true;
    }

    bool enable() {
        return true;
    }

    bool disable() {
        return true;
    }

    bool unload() {
        return true;
    }
};

} // namespace sound_physics_bedrock

