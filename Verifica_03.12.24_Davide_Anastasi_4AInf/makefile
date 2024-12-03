all: compito


clean: compito main.o pow.o logger.o math.o
	rm -f compito main.o pow.o logger.o math.o

compito: main.o pow.o logger.o math.o
	gcc -o compito main.o pow.o logger.o math.o

main.o: main.c
	gcc -c -o main.o main.c

pow.o: pow.c
	gcc -c -o pow.o pow.c

logger.o: logger.c
	gcc -c -o logger.o logger.c

math.o: math.c
	gcc -c -o math.o math.c
