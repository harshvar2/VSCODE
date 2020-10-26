#!/bin/bash
#author:Harsh
#Copyright(c) Tutorialpoint.com
#Script follows here:
pwd
ls
#echo "What is your name"
#read PERSON
#echo "Hello,$PERSON"

Name="Harshvardhan Rajdan"
echo $Name
echo "File Name :$0"
echo "First Parameter : $1"
echo "Second Parameter: $2"
echo "Quoted Values: $@"
echo "Quoted Values: $*"
echo "Total Number Of Parameters: $#"
echo $?
#array
Name[0]="harsh"
Name[1]="meenal"
Name[2]="saurabh"
Name[3]="prem"
Name[4]="kota"
echo "First Index: ${Name[1]}"
echo "second Index:${Name[0]}"
echo "${Name[*]}"
echo "${Name[@]}"
