APPNAME = investing

SRCS += main.cpp
SRCS += source/dbg.cpp

all:
	g++ -Wall $(SRCS) -o $(APPNAME)

clean:
	rm -f $(APPNAME)

debug:
	g++ -Wall $(SRCS) -o $(APPNAME) -DDEBUG