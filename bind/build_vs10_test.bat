call "%VS100COMNTOOLS%vsvars32.bat"

mkdir libs
pushd libs
cmake -DWITH_TESTS=YES -G "Visual Studio 10" ../

popd
