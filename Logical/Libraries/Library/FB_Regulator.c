
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
void FB_Regulator(struct FB_Regulator* inst)
{
	float BON(float x)
		{
		if(x>inst->max_abs_value)
		{
			return inst->max_abs_value;
		}
		else 
			return x;
			}
	inst->integrator.in=inst->e*inst->k_i*inst->dt+inst->iyOld;
	inst->u=BON((BON(inst->e*inst->k_p)+inst->integrator.out));
	inst->iyOld=-(BON(inst->e*inst->k_p+inst->integrator.out)+BON((BON(inst->e*inst->k_p)+inst->integrator.out));


}
