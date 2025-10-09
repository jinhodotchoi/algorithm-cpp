echo ">>> start compiling"

sed -i 's/\/\/ freopen/freopen/g' $1

g++ -o build/main $1

echo ">>> start running"

./build/main

sed -i 's/freopen/\/\/ freopen/g' $1

rm build/main