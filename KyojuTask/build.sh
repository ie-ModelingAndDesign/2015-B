#!/bin/sh
# This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.24.3/Targets/CPlusPlus/iOS/build.sh'.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

mkdir -p data
xcodebuild -project "MyFirstProject.xcodeproj"
