/* Local variables: */
/* c-file-style: "linux" */
/* End: */

#ifndef _DC_API_CONDOR_FILE_H_
#define _DC_API_CONDOR_FILE_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "dc.h"


extern DC_PhysicalFile *_DC_create_physical_file(const char *label,
						 const char *path);
extern void _DC_destroy_physical_file(DC_PhysicalFile * file);


#ifdef __cplusplus
}
#endif

#endif

/* End of condor/condor_file.h */