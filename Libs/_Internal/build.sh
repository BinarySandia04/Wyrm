#!/bin/bash
cd "$(dirname "$0")"

mkdir .build 2>/dev/null
cd .build
cmake ../
cmake --build . -j 
cd ..

#sudo mkdir -p /usr/local/lib/zag/packages/_Internal 2>/dev/null
#sudo cp .build/lib_internal.so /usr/local/lib/zag/packages/_Internal/.
#sudo cp package.toml /usr/local/lib/zag/packages/_Internal/.
#sudo cp -r src /usr/local/lib/zag/packages/_Internal/.

mkdir -p ~/.zag/sources/_Internal
cp -r * ~/.zag/sources/_Internal/.
