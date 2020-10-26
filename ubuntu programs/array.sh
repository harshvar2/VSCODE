#shell script to read and print an array
echo ENTER NO OF ELEMENTS
read n
echo enter elements
while[ test $i -lt n]
	do
		read a[$i]
		i='expr $i + i'
		done
		
while[$i -ln $n]
do 
echo ${a[$i]}
i='expr $a +i'
done

