echo ">>> start compiling"

g++ -o build/main $1

echo ">>> start running"

./build/main
rm build/main