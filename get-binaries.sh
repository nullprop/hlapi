#!/bin/bash

set -euo pipefail

HLA="$HOME/.local/share/Steam/steamapps/common/Half-Life Alyx"

mkdir -p bin

cp "$HLA"/game/bin/linuxsteamrt64/*.so ./bin/
cp "$HLA"/game/bin/linuxsteamrt64/hlvr ./bin/
cp "$HLA"/game/hlvr/bin/linuxsteamrt64/*.so ./bin/

