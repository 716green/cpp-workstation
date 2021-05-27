# sh run.sh
## Search this folder for .cpp file, compile, run
if [ -z "$1" ]; then
app_to_run=$(ls *.cpp)
len=${#app_to_run}
app_name_len=`expr $len - 4` 

app_name=$(echo $app_to_run | cut -c1-$app_name_len)
echo Running: $app_name.cpp

g++ $app_to_run -o $app_name
./$app_name


# sh run.sh next topicName
## Move current file to ./complete
elif [ $1 == "next" ]; then
mkdir complete || echo "complete folder already exists"
app_to_run=$(ls *.cpp)
len=${#app_to_run}
app_name_len=`expr $len - 4` 
app_name=$(echo $app_to_run | cut -c1-$app_name_len)
rm $app_name || echo "executable not available"
mv $app_name* ./complete
echo $app_name files moved to ./complete
touch $2.cpp
echo "# "$2 > $2_notes.md
echo named file $2


elif [ $1 == "keep" ]; then
mkdir keep || echo "keep folder already exists"
app_to_run=$(ls *.cpp)
len=${#app_to_run}
app_name_len=`expr $len - 4` 
app_name=$(echo $app_to_run | cut -c1-$app_name_len)
rm $app_name || echo "executable not available"
mv $app_name* ./keep
echo $app_name files moved to ./complete
touch $2.cpp
echo "# "$2 > $2_notes.md
echo named file $2
fi