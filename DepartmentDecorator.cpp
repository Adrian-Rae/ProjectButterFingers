 #include "DepartmentDecorator.h"

DepartmentDecorator::DepartmentDecorator(Staff* next) {
	component = next;
}
void DepartmentDecorator::work() {
	component->work();
}
void DepartmentDecorator::identify() {
	component->identify();
}
