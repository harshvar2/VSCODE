echo "ENTER A 5 DIGIT NUMBER"
read n
sd=0
rev=0
while [ $n -gt 0 ]
do
	sd=$(( $n % 10 ))
	rev=`expr $rev \* 10 + $sd`
	n=$(( $n / 10 ))
done
echo "REVERSE OF THE NUMBER $rev"
