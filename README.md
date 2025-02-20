# Capsa UnrealEngine Demo

Demo game with Capsa integration, based on third-person shooter. Developed and tested on Windows.

## Requirements

- Unreal Engine 5.5 built from source, no changes in Engine necessary (for allowing dedicated server builds)
- `UEROOT` environment variable set with the path of the root of the UE5 repository
- This project cloned to disk

## Shipping build testing instructions

- Generate project files
- Open the Solution, now compile and open the editor, verify everything seems to be correct
- To build Shipping builds: `.\build.ps1`
- Now open the Shipping builds with `.\run.ps1`
