/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "tasks_explorer.h"

int *
task_explorer_init_1(argp, rqstp)
	void *argp;
	struct svc_req *rqstp;
{

	static int  result;

	/*
	 * insert server code here
	 */

	return(&result);
}

int *
task_explorer_free_1(argp, rqstp)
	void *argp;
	struct svc_req *rqstp;
{

	static int  result;

	/*
	 * insert server code here
	 */

	return(&result);
}

host_info_dynamic *
task_explorer_update_1(argp, rqstp)
	void *argp;
	struct svc_req *rqstp;
{

	static host_info_dynamic  result;

	/*
	 * insert server code here
	 */

	return(&result);
}

tasks_list *
task_explorer_tasks_list_1(argp, rqstp)
	void *argp;
	struct svc_req *rqstp;
{

	static tasks_list  result;

	/*
	 * insert server code here
	 */

	return(&result);
}

task_info_base *
task_explorer_base_info_1(argp, rqstp)
	int *argp;
	struct svc_req *rqstp;
{

	static task_info_base  result;

	/*
	 * insert server code here
	 */

	return(&result);
}

command_line *
task_explorer_params_1(argp, rqstp)
	int *argp;
	struct svc_req *rqstp;
{

	static command_line  result;

	/*
	 * insert server code here
	 */

	return(&result);
}

int *
kill_process_1(argp, rqstp)
	int *argp;
	struct svc_req *rqstp;
{

	static int  result;

	/*
	 * insert server code here
	 */

	return(&result);
}

env_list *
task_explorer_env_list_1(argp, rqstp)
	int *argp;
	struct svc_req *rqstp;
{

	static env_list  result;

	/*
	 * insert server code here
	 */

	return(&result);
}

task_info_dynamic *
task_explorer_dyninfo_1(argp, rqstp)
	int *argp;
	struct svc_req *rqstp;
{

	static task_info_dynamic  result;

	/*
	 * insert server code here
	 */

	return(&result);
}

files_list *
task_explorer_files_list_1(argp, rqstp)
	int *argp;
	struct svc_req *rqstp;
{

	static files_list  result;

	/*
	 * insert server code here
	 */

	return(&result);
}

app_descr *
task_explorer_app_descr_1(argp, rqstp)
	int *argp;
	struct svc_req *rqstp;
{

	static app_descr  result;

	/*
	 * insert server code here
	 */

	return(&result);
}

thread_info_list *
task_explorer_threads_info_1(argp, rqstp)
	int *argp;
	struct svc_req *rqstp;
{

	static thread_info_list  result;

	/*
	 * insert server code here
	 */

	return(&result);
}

stack_info_list *
task_explorer_stack_for_thread_1(argp, rqstp)
	struct call_stack_request *argp;
	struct svc_req *rqstp;
{

	static stack_info_list  result;

	/*
	 * insert server code here
	 */

	return(&result);
}