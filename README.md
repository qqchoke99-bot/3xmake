# Sound Physics Remastered — Bedrock / LeviLamina Port Starter

Target:
- LeviLauncher 1.5.24
- LeviLamina 26.51.x
- Minecraft Bedrock 26.51.x
- Windows x64 client

This is a PORT STARTER, not a finished Sound Physics Remastered implementation.

The original Java/Forge JAR cannot be converted directly into a Bedrock native mod.
The actual audio interception, raycasting/occlusion, reflection, reverb and mixing
logic must be implemented against the Bedrock/LeviLamina client APIs.

Build environment:
1. Install the matching LeviLamina client development environment.
2. Use the official LeviLamina mod template structure.
3. Set target_type=client.
4. Build with xmake for Windows x64.

Planned modules:
- audio hook
- block/material sound properties
- raycast/occlusion
- reflection
- reverb
- configuration
- debug logging

Version note:
LeviLamina's 26.51.x client support tracks Bedrock 26.51.x. Keep the exact
LeviLamina patch aligned with the installed Bedrock build before compiling.
