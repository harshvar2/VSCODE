#shell script to find the armstong number or not
i=1
while((i<=1000))
do
c=$i
d=$i
a=0
b=0

while((c>0))
do
#seperating each digit
a=$((c%10))
#finding cube of each digit and adding them
b=$((b + a*a*a))
c=$((c/10))
done 
if((b==d));then
echo "$i"
fi
i=$((i+1))
done
