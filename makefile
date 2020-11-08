ofiles = main.o Staff.o Engineer.o ConcreteEngineer.o  Strategist.o ConcreteStrategist.o CurrentSeason.o NextSeason.o DepartmentDecorator.o Electronics.o Chassis.o Engine.o Aerodynamics.o WheelManufacturer.o Wheel.o HardWheel.o SoftWheel.o MediumWheel.o Car.o FormulaOneCar.o Factory.o CarFactory.o Team.o Logistics.o AbstractFactory.o Transporter.o ShippingContainer.o TruckContainer.o European.o NonEuropean.o Iterator.o RaceIterator.o Aggregate.o Race.o RaceCatelogue.o NonEuropeanRace.o EuropeanRace.o Saturday.o RaceState.o RaceManager.o Friday.o MorningPractice.o RaceDecorator.o Sunday.o AfternoonQualifying.o RaceDay.o Test.o SimulatorTest.o ComputerSoftware.o WindTunnel.o Builder.o RaceBuilder.o 
gpp_o= g++ -c -std=c++14 -static
main: $(ofiles)
	g++ -std=c++14 -static $(ofiles) -o main
main.o: main.cpp
	$(gpp_o) main.cpp
	
Staff: Staff.cpp Staff.h
	$(gpp_o) Staff.cpp
	
Engineer: Engineer.cpp Engineer.h
	$(gpp_o) Engineer.cpp
	
ConcreteEngineer: ConcreteEngineer.cpp ConcreteEngineer.h
	$(gpp_o) ConcreteEngineer.cpp
	
Strategist: Strategist.cpp Strategist.h
	$(gpp_o) Strategist.cpp
	
ConcreteStrategist: ConcreteStrategist.cpp ConcreteStrategist.h
	$(gpp_o) ConcreteStrategist.cpp
	
CurrentSeason: CurrentSeason.cpp CurrentSeason.h
	$(gpp_o) CurrentSeason.cpp
	
NextSeason: NextSeason.cpp NextSeason.h
	$(gpp_o) NextSeason.cpp
	
DepartmentDecorator: DepartmentDecorator.cpp DepartmentDecorator.h
	$(gpp_o) DepartmentDecorator.cpp
	
Electronics: Electronics.cpp Electronics.h
	$(gpp_o) Electronics.cpp
	
Chassis: Chassis.cpp Chassis.h
	$(gpp_o) Chassis.cpp
	
Engine: Engine.cpp Engine.h
	$(gpp_o) Engine.cpp
	
Aerodynamics: Aerodynamics.cpp Aerodynamics.h
	$(gpp_o) Aerodynamics.cpp
	
WheelManufacturer: WheelManufacturer.cpp WheelManufacturer.h
	$(gpp_o) WheelManufacturer.cpp
	
Wheel: Wheel.cpp Wheel.h
	$(gpp_o) Wheel.cpp
	
HardWheel: HardWheel.cpp HardWheel.h
	$(gpp_o) HardWheel.cpp
	
SoftWheel: SoftWheel.cpp SoftWheel.h
	$(gpp_o) SoftWheel.cpp
	
MediumWheel: MediumWheel.cpp MediumWheel.h
	$(gpp_o) MediumWheel.cpp
	
Car: Car.cpp Car.h
	$(gpp_o) Car.cpp
	
FormulaOneCar: FormulaOneCar.cpp FormulaOneCar.h
	$(gpp_o) FormulaOneCar.cpp
	
Factory: Factory.cpp Factory.h
	$(gpp_o) Factory.cpp
	
CarFactory: CarFactory.cpp CarFactory.h
	$(gpp_o) CarFactory.cpp
	
Team: Team.cpp Team.h
	$(gpp_o) Team.cpp
	
Logistics: Logistics.cpp Logistics.h
	$(gpp_o) Logistics.cpp
	
AbstractFactory: AbstractFactory.cpp AbstractFactory.h
	$(gpp_o) AbstractFactory.cpp
	
Transporter: Transporter.cpp Transporter.h
	$(gpp_o) Transporter.cpp
	
ShippingContainer: ShippingContainer.cpp ShippingContainer.h
	$(gpp_o) ShippingContainer.cpp
	
TruckContainer: TruckContainer.cpp TruckContainer.h
	$(gpp_o) TruckContainer.cpp
	
European: European.cpp European.h
	$(gpp_o) European.cpp
	
NonEuropean: NonEuropean.cpp NonEuropean.h
	$(gpp_o) NonEuropean.cpp
	
Iterator: Iterator.cpp Iterator.h
	$(gpp_o) Iterator.cpp
	
RaceIterator: RaceIterator.cpp RaceIterator.h
	$(gpp_o) RaceIterator.cpp
	
Aggregate: Aggregate.cpp Aggregate.h
	$(gpp_o) Aggregate.cpp
	
Race: Race.cpp Race.h
	$(gpp_o) Race.cpp
	
RaceCatelogue: RaceCatelogue.cpp RaceCatelogue.h
	$(gpp_o) RaceCatelogue.cpp
	
NonEuropeanRace: NonEuropeanRace.cpp NonEuropeanRace.h
	$(gpp_o) NonEuropeanRace.cpp
	
EuropeanRace: EuropeanRace.cpp EuropeanRace.h
	$(gpp_o) EuropeanRace.cpp
	
Saturday: Saturday.cpp Saturday.h
	$(gpp_o) Saturday.cpp
	
RaceState: RaceState.cpp RaceState.h
	$(gpp_o) RaceState.cpp
	
RaceManager: RaceManager.cpp RaceManager.h
	$(gpp_o) RaceManager.cpp
	
Friday: Friday.cpp Friday.h
	$(gpp_o) Friday.cpp
	
MorningPractice: MorningPractice.cpp MorningPractice.h
	$(gpp_o) MorningPractice.cpp
	
RaceDecorator: RaceDecorator.cpp RaceDecorator.h
	$(gpp_o) RaceDecorator.cpp
	
Sunday: Sunday.cpp Sunday.h
	$(gpp_o) Sunday.cpp
	
AfternoonQualifying: AfternoonQualifying.cpp AfternoonQualifying.h
	$(gpp_o) AfternoonQualifying.cpp
	
RaceDay: RaceDay.cpp RaceDay.h
	$(gpp_o) RaceDay.cpp
	
Test: Test.cpp Test.h
	$(gpp_o) Test.cpp
	
SimulatorTest: SimulatorTest.cpp SimulatorTest.h
	$(gpp_o) SimulatorTest.cpp
	
ComputerSoftware: ComputerSoftware.cpp ComputerSoftware.h
	$(gpp_o) ComputerSoftware.cpp
	
WindTunnel: WindTunnel.cpp WindTunnel.h
	$(gpp_o) WindTunnel.cpp
	
Builder: Builder.cpp Builder.h
	$(gpp_o) Builder.cpp
	
RaceBuilder: RaceBuilder.cpp RaceBuilder.h
	$(gpp_o) RaceBuilder.cpp

run: main
	./main

clean:
	rm *.o main
