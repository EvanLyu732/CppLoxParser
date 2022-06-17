all:
	rm -rf build && mkdir build && cd build && cmake .. && make

.PHONY: clean

clean:
	rm -rf build 