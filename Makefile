compile1:
	gcc Q1_part1.c -o Q1_part1

run1:compile1
	./Q1_part1
	
compile2:
	gcc Q1_part2.c -o Q1_part2 -lpthread
	
run2:compile2
	./Q1_part2
