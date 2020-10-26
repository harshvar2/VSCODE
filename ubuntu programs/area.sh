echo "ENTER THE HEIGHT" 
read height
echo "ENTER THE BREADTH"
read breadth
area= `expr $height \* $breadth \* 0.5 | bc `
perimeter=`expr 3 \* breadth | bc`
echo "AREA OF TRAINGLE = $area" 
echo "PERIMETER OF TRAINGLE = $perimeter"

