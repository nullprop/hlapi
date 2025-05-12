#!/bin/bash

set -euo pipefail

HLA="$HOME/.local/share/Steam/steamapps/common/Half-Life Alyx"

mkdir -p bin

cp "$HLA"/game/bin/win64/*.dll ./bin/
cp "$HLA"/game/bin/win64/*.exe ./bin/
cp "$HLA"/game/hlvr/bin/win64/*.dll ./bin/

