//Autogenerated PPP header from /home/andrew/git/panda/panda/plugins/hooks2/hooks2_ppp.h

// Hook functions must be of this type
typedef bool (*hooks2_func_t)(CPUState *, TranslationBlock *, void *);


typedef void (*on_process_start_t)(CPUState *cpu,const char *procname,target_ulong asid,target_pid_t pid);
void ppp_add_cb_on_process_start(on_process_start_t);
bool ppp_remove_cb_on_process_start(on_process_start_t);

typedef void (*on_process_end_t)(CPUState *cpu,const char *procname,target_ulong asid,target_pid_t pid);
void ppp_add_cb_on_process_end(on_process_end_t);
bool ppp_remove_cb_on_process_end(on_process_end_t);

typedef void (*on_thread_start_t)(CPUState* cpu,const char *procname,target_ulong asid,target_pid_t pid,target_pid_t tid);
void ppp_add_cb_on_thread_start(on_thread_start_t);
bool ppp_remove_cb_on_thread_start(on_thread_start_t);

typedef void (*on_thread_end_t)(CPUState* cpu,const char *procname,target_ulong asid,target_pid_t pid,target_pid_t tid);
void ppp_add_cb_on_thread_end(on_thread_end_t);
bool ppp_remove_cb_on_thread_end(on_thread_end_t);

typedef void (*on_mmap_updated_t)(CPUState* cpu,const char *libname,target_ulong base,target_ulong size);
void ppp_add_cb_on_mmap_updated(on_mmap_updated_t);
bool ppp_remove_cb_on_mmap_updated(on_mmap_updated_t);


typedef int (*_add_hooks2_t)(hooks2_func_t hook,void *cb_data,bool is_kernel,const char *procname,const char *libname,target_ulong trace_start,target_ulong trace_stop,target_ulong range_begin,target_ulong range_end);

typedef void (*_enable_hooks2_t)(int id);
void ppp_add_cb__enable_hooks2(_enable_hooks2_t);
bool ppp_remove_cb__enable_hooks2(_enable_hooks2_t);
typedef void (*_disable_hooks2_t)(int id);
void ppp_add_cb__disable_hooks2(_disable_hooks2_t);
bool ppp_remove_cb__disable_hooks2(_disable_hooks2_t);

