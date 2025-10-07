echo ">>> start running"

g++ -o build/main questions/$1
./build/main
rm build/main

echo ">>> end running"