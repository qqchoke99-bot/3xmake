# Port status

## Extracted from the supplied Java mod

The supplied JAR contains major systems for:
- sound physics
- sound-rate management
- raycasting utilities
- reflected audio
- occlusion configuration
- reflectivity configuration
- reverb parameters
- block sound definitions
- client-side mixins into the sound system/source/channel

## What must be rewritten

The Java classes and Forge/Mixin hooks cannot be reused as Bedrock native code.
The following need Bedrock/LeviLamina equivalents:

1. Client audio interception
2. Listener/player position and orientation
3. Block/world raycasts
4. Material/reflectivity lookup
5. Occlusion calculation
6. Reflection path calculation
7. Reverb parameter calculation
8. Runtime audio gain/filter/spatialization changes

This package is therefore a development starting point rather than a ready-to-install mod.
