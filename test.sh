# remember to run chmod 755 ./test.sh first time
# then run ./test.sh
echo ' ______________________________________________________ '
echo '|                                                      |'
echo '|              /$$ /$$                     /$$         |'
echo '|             |__/| $$                    | $$         |'
echo '|    /$$$$$$$  /$$| $$  /$$$$$$   /$$$$$$$| $$   /$$   |'
echo '|   | $$__  $$| $$| $$ /$$__  $$ /$$_____/| $$  /$$/   |'
echo '|   | $$  \ $$| $$| $$| $$  \ $$| $$      | $$$$$$/    |'
echo '|   | $$  | $$| $$| $$| $$  | $$| $$      | $$_  $$    |'
echo '|   | $$  | $$| $$| $$|  $$$$$$/|  $$$$$$$| $$ \  $$   |'
echo '|   |__/  |__/|__/|__/ \______/  \_______/|__/  \__/   |'
echo '|______________________________________________________|'                                                
echo
echo 'Removing old buid'
rm -f ./nilock
echo 'Starting build'
g++ -o nilock main.cpp -std=c++11
echo 'Build complete'
echo 'Running test case'
./nilock example test_out