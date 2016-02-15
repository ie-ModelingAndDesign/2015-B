#!/bin/sh
# This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.24.3/Targets/CPlusPlus/iOS/run.sh'.
# WARNING: Changes might be lost if you edit this file directly.
set -e
cd "`dirname "$0"`"

case $1 in
debug)
    echo "Opening Xcode"
    open -aXcode "MyFirstProject.xcodeproj"
    exit $?
    ;;
esac

"/usr/local/share/uno/Packages/UnoCore/0.24.3/Targets/CPlusPlus/Prebuilt/iOS/bin/ios-deploy" --justlaunch --debug --bundle "build/Debug-iphoneos/MyFirstProject.app" "$@"
