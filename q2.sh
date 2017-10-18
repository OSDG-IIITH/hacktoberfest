#!/bin/bash
declare -a name1[100]
declare -a name2[100]
declare -a fsiz[100]
declare -a dsize[100]
size=`ls -d */ | wc -l`
for((i=1;i<=size;i++))
do
	name1[$i]=`ls -Sld */ | cut -d " " -f 10 | cut -d$'\n' -f$i`
	name2[$i]=`ls -Sld */ | cut -d " " -f 10 | cut -d$'\n' -f$i`
	fsiz[$i]=`find ${name[$i]} -type f | xargs ls -l | wc -l`
	dsize[$i]=`find ${name[$i]} -type f | xargs ls -Sl | awk '{print$5}' | head -$i | tail -1 `
done
for((i=1;i<=size;i++))
do
        for((j=0;j<size;j++))
        do
                if [ ${fsiz[$i]} -gt ${fsiz[$j]} ]
                then
                        temp=${fsiz[$i]}
                        fsiz[$i]=${fsiz[$j]}
                        fsiz[$j]=$temp
		       	y=${name1[$i]}
                        name1[$i]=${name1[$j]}
                        name1[$j]=$temp
                fi
		if [ ${dsize[$i]} -gt ${dsize[$j]} ]
                then
                        temp=${dsize[$i]}
                        dsize[$i]=${dsize[$j]}
                        dsize[$j]=$temp
			y=${name2[$i]}
                        name2[$i]=${name2[$j]}
                        name2[$j]=$temp
                fi
        done
done
for((i=0;i<=size;i++))
do
        echo "${name1[$i]}           ${dsize[$i]}"
done

for((i=0;i<=size;i++))
do
	echo "${name2[$i]}           ${fsiz[$i]}"
done

