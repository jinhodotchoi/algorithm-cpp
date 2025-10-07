echo ">>> start running"

g++ -o build/main $1
./build/main
rm build/main

echo ">>> end running"