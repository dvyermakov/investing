APPNAME = investing

SRCS += main.cpp
SRCS += source/dbg.cpp
SRCS += source/moneyoperation.cpp
SRCS += source/date.cpp

all:
	g++ -Wall $(SRCS) -o $(APPNAME)

clean:
	rm -f $(APPNAME)

debug:
	g++ -Wall $(SRCS) -o $(APPNAME) -DDEBUG