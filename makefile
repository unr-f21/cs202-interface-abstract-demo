interface-demo: Car.cpp Vehicle.cpp main.cpp boat.cpp
	g++ -std=c++11 -o interface-demo Car.cpp Vehicle.cpp main.cpp boat.cpp

clean:
	rm interface-demo