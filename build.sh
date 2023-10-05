# !/bin/bash

yellow="$(printf '\033[33m')"
red="$(printf '\033[31m')"
blue="$(printf '\033[34m')"
green="$(printf '\033[32m')"
reset="$(printf '\033[0m')"
bold="$(printf '\033[1m')"

echo $red"- - - - - - - - - - - - - - - - -"$reset
echo $blue"Comenzando asistente de compilación."$reset
debug=false
compileFolder=/
app=app

if [[ $1 ]]
then 
    debug=true
    mkdir -p debug
    compileFolder=./debug/
    app=$compileFolder"appDebug.exe"
else
    debug=false
    mkdir -p dist
    compileFolder=./dist/
    app=$compileFolder"app.exe"
fi

echo $yellow"Debug: "$red$debug$reset
echo ""
echo "|---#- -#- -#- -#- -#---|"
echo ""
mkdir -p target
cp ./src/bin/* $compileFolder
mingw32-make DEBUG=$debug
echo ""
echo "|---#- -#- -#- -#- -#---|"
echo ""
echo $green"El asistente ha terminado."$reset
echo $yellow$bold"Nota: "$red"A partir de acá, las impresiones por consolas serán producidas por la aplicacion y no por el asistente."$reset
echo $blue"- - - - - - - - - - - - - - - - -"$reset
echo ""
$app