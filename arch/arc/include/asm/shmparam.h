/*
 * Copyright (C) 2004, 2007-2010, 2011-2012 Synopsys, Inc. (www.synopsys.com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _ASM_ARC_SHMPARAM_H
#define _ASM_ARC_SHMPARAM_H

/* Handle upto 2 cache bins */
#define	SHMLBA	(2 * PAGE_SIZE)

/* Enforce SHMLBA in shmat */
#define __ARCH_FORCE_SHMLBA

#endif /* _ASM_ARC_SHMPARAM_H */
