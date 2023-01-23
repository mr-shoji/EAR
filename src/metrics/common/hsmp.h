/*
*
* This program is part of the EAR software.
*
* EAR provides a dynamic, transparent and ligth-weigth solution for
* Energy management. It has been developed in the context of the
* Barcelona Supercomputing Center (BSC)&Lenovo Collaboration project.
*
* Copyright © 2017-present BSC-Lenovo
* BSC Contact   mailto:ear-support@bsc.es
* Lenovo contact  mailto:hpchelp@lenovo.com
*
* EAR is an open source software, and it is licensed under both the BSD-3 license
* and EPL-1.0 license. Full text of both licenses can be found in COPYING.BSD
* and COPYING.EPL files.
*/

#ifndef METRICS_COMMON_HSMP_H
#define METRICS_COMMON_HSMP_H

#include <common/states.h>
#include <common/plugins.h>
#include <common/hardware/topology.h>

state_t hsmp_scan(topology_t *tp);

state_t hsmp_close();

state_t hsmp_send(int socket, uint function, uint *args, uint *reps);

#endif
