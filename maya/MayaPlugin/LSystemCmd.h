#ifndef CreateLSystemCmd_H_
#define CreateLSystemCmd_H_

#include <maya/MPxCommand.h>
#include <maya/MSyntax.h>
#include <string>

class LSystemCmd : public MPxCommand
{
public:
    LSystemCmd();
    virtual ~LSystemCmd();
    static void* creator() { return new LSystemCmd(); }
	static MSyntax newSyntax();
    MStatus doIt( const MArgList& args );
};

#endif