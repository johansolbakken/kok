echo "Building kok"
g++ kok.cpp -o kok
echo "Installing kok"
mv kok /opt/homebrew/bin/kok
echo "Done"
echo "usage: kok <url>"