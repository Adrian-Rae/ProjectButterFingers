#ifndef BUILDER_H
#define BUILDER_H

class Builder{
public:
	Builder() {};
	virtual bool build(int n, int teams) = 0;
};

#endif

