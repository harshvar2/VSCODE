#!/bin/sh
pwd
ls
echo "Enter A"
read a
echo "Enter B"
read b
val=`expr $a + $b`
echo "a+b :$val"
val=`expr $a - $b`
echo "a-b :$val"
val=`expr $a \* $b`
echo "a*b :$val"
val=`expr $b / $a`
echo "b/a :$ val"
val=`expr $b % $a`
echo "b%a : $val"

if [ $a==$b ]
then 
	echo "$a==$b :a is equal to b"
else
	echo "$a==$b :a is  not equal to b"
fi
if [ $a != $b ]
then
	echo "$a != $b :a is not equal to b"
fi

if [ $a -eq $b ]
then 
	echo " $a -eq $b : a is equal to b"
else
	echo "$a -eq $b :a is not equal to b"
fi

if [ $a -ne $b ]
then 
	echo " $a -ne $b: a is not equal to b"
else 
	echo "$a -ne $b : a is equal to b"
fi

