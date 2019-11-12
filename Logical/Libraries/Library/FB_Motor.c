
#include <bur/plctypes.h>
#ifdef __cplusplus
	extern "C"
	{
#endif
	#include "Library.h"
#ifdef __cplusplus
	};
#endif
/* TODO: Add your comment here */
void FB_Motor(struct FB_Motor* inst)
{
	inst->integrator.in = (inst->u/inst->ke)*(inst->dt/inst->Tm);
	inst->w=inst->integrator.out-inst->u;
	inst->integrator.in= inst->w*inst->dt;
	inst->phi = inst->integrator.out;


}
