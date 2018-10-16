.SUFFIXES:	.cpp .elf

.PHONY:	clean run_%

all:	a.elf b.elf c.elf d.elf

.cpp.elf:
	g++ -std=gnu++1y -O2 -o $@ $<

run_%:	%.elf
	./$<

clean:
	rm -f -v *.elf
