#ifndef __SYSCALL_H__
#define __SYSCALL_H__

#include "include/type.h"

typedef struct args {
    uint64_t arg0;
    uint64_t arg1;
    uint64_t arg2;
    uint64_t arg3;
    uint64_t arg4;
    uint64_t arg5;
    uint64_t arg6;
} args_t;

struct utsname {
    char sysname[65];
    char nodename[65];
    char release[65];
    char version[65];
    char machine[65];
    char domainname[65];
};

uint64_t func_SYS_io_setup(args_t *regs);
uint64_t func_SYS_io_destroy(args_t *regs);
uint64_t func_SYS_io_submit(args_t *regs);
uint64_t func_SYS_io_cancel(args_t *regs);
uint64_t func_SYS_io_getevents(args_t *regs);
uint64_t func_SYS_setxattr(args_t *regs);
uint64_t func_SYS_lsetxattr(args_t *regs);
uint64_t func_SYS_fsetxattr(args_t *regs);
uint64_t func_SYS_getxattr(args_t *regs);
uint64_t func_SYS_lgetxattr(args_t *regs);
uint64_t func_SYS_fgetxattr(args_t *regs);
uint64_t func_SYS_listxattr(args_t *regs);
uint64_t func_SYS_llistxattr(args_t *regs);
uint64_t func_SYS_flistxattr(args_t *regs);
uint64_t func_SYS_removexattr(args_t *regs);
uint64_t func_SYS_lremovexattr(args_t *regs);
uint64_t func_SYS_fremovexattr(args_t *regs);
uint64_t func_SYS_getcwd(args_t *regs);
uint64_t func_SYS_lookup_dcookie(args_t *regs);
uint64_t func_SYS_eventfd2(args_t *regs);
uint64_t func_SYS_epoll_create1(args_t *regs);
uint64_t func_SYS_epoll_ctl(args_t *regs);
uint64_t func_SYS_epoll_pwait(args_t *regs);
uint64_t func_SYS_dup(args_t *regs);
uint64_t func_SYS_dup3(args_t *regs);
uint64_t func_SYS_fcntl(args_t *regs);
uint64_t func_SYS_inotify_init1(args_t *regs);
uint64_t func_SYS_inotify_add_watch(args_t *regs);
uint64_t func_SYS_inotify_rm_watch(args_t *regs);
uint64_t func_SYS_ioctl(args_t *regs);
uint64_t func_SYS_ioprio_set(args_t *regs);
uint64_t func_SYS_ioprio_get(args_t *regs);
uint64_t func_SYS_flock(args_t *regs);
uint64_t func_SYS_mknodat(args_t *regs);
uint64_t func_SYS_mkdirat(args_t *regs);
uint64_t func_SYS_unlinkat(args_t *regs);
uint64_t func_SYS_symlinkat(args_t *regs);
uint64_t func_SYS_linkat(args_t *regs);
uint64_t func_SYS_umount2(args_t *regs);
uint64_t func_SYS_mount(args_t *regs);
uint64_t func_SYS_pivot_root(args_t *regs);
uint64_t func_SYS_nfsservctl(args_t *regs);
uint64_t func_SYS_statfs(args_t *regs);
uint64_t func_SYS_fstatfs(args_t *regs);
uint64_t func_SYS_truncate(args_t *regs);
uint64_t func_SYS_ftruncate(args_t *regs);
uint64_t func_SYS_fallocate(args_t *regs);
uint64_t func_SYS_faccessat(args_t *regs);
uint64_t func_SYS_chdir(args_t *regs);
uint64_t func_SYS_fchdir(args_t *regs);
uint64_t func_SYS_chroot(args_t *regs);
uint64_t func_SYS_fchmod(args_t *regs);
uint64_t func_SYS_fchmodat(args_t *regs);
uint64_t func_SYS_fchownat(args_t *regs);
uint64_t func_SYS_fchown(args_t *regs);
uint64_t func_SYS_openat(args_t *regs);
uint64_t func_SYS_close(args_t *regs);
uint64_t func_SYS_vhangup(args_t *regs);
uint64_t func_SYS_pipe2(args_t *regs);
uint64_t func_SYS_quotactl(args_t *regs);
uint64_t func_SYS_getdents64(args_t *regs);
uint64_t func_SYS_lseek(args_t *regs);
uint64_t func_SYS_read(args_t *regs);
uint64_t func_SYS_write(args_t *regs);
uint64_t func_SYS_readv(args_t *regs);
uint64_t func_SYS_writev(args_t *regs);
uint64_t func_SYS_pread64(args_t *regs);
uint64_t func_SYS_pwrite64(args_t *regs);
uint64_t func_SYS_preadv(args_t *regs);
uint64_t func_SYS_pwritev(args_t *regs);
uint64_t func_SYS_sendfile(args_t *regs);
uint64_t func_SYS_pselect6(args_t *regs);
uint64_t func_SYS_ppoll(args_t *regs);
uint64_t func_SYS_signalfd4(args_t *regs);
uint64_t func_SYS_vmsplice(args_t *regs);
uint64_t func_SYS_splice(args_t *regs);
uint64_t func_SYS_tee(args_t *regs);
uint64_t func_SYS_readlinkat(args_t *regs);
uint64_t func_SYS_fstatat(args_t *regs);
uint64_t func_SYS_fstat(args_t *regs);
uint64_t func_SYS_sync(args_t *regs);
uint64_t func_SYS_fsync(args_t *regs);
uint64_t func_SYS_fdatasync(args_t *regs);
uint64_t func_SYS_sync_file_range(args_t *regs);
uint64_t func_SYS_timerfd_create(args_t *regs);
uint64_t func_SYS_timerfd_settime(args_t *regs);
uint64_t func_SYS_timerfd_gettime(args_t *regs);
uint64_t func_SYS_utimensat(args_t *regs);
uint64_t func_SYS_acct(args_t *regs);
uint64_t func_SYS_capget(args_t *regs);
uint64_t func_SYS_capset(args_t *regs);
uint64_t func_SYS_personality(args_t *regs);
uint64_t func_SYS_exit(args_t *regs);
uint64_t func_SYS_exit_group(args_t *regs);
uint64_t func_SYS_waitid(args_t *regs);
uint64_t func_SYS_set_tid_address(args_t *regs);
uint64_t func_SYS_unshare(args_t *regs);
uint64_t func_SYS_futex(args_t *regs);
uint64_t func_SYS_set_robust_list(args_t *regs);
uint64_t func_SYS_get_robust_list(args_t *regs);
uint64_t func_SYS_nanosleep(args_t *regs);
uint64_t func_SYS_getitimer(args_t *regs);
uint64_t func_SYS_setitimer(args_t *regs);
uint64_t func_SYS_kexec_load(args_t *regs);
uint64_t func_SYS_init_module(args_t *regs);
uint64_t func_SYS_delete_module(args_t *regs);
uint64_t func_SYS_timer_create(args_t *regs);
uint64_t func_SYS_timer_gettime(args_t *regs);
uint64_t func_SYS_timer_getoverrun(args_t *regs);
uint64_t func_SYS_timer_settime(args_t *regs);
uint64_t func_SYS_timer_delete(args_t *regs);
uint64_t func_SYS_clock_settime(args_t *regs);
uint64_t func_SYS_clock_gettime(args_t *regs);
uint64_t func_SYS_clock_getres(args_t *regs);
uint64_t func_SYS_clock_nanosleep(args_t *regs);
uint64_t func_SYS_syslog(args_t *regs);
uint64_t func_SYS_ptrace(args_t *regs);
uint64_t func_SYS_sched_setparam(args_t *regs);
uint64_t func_SYS_sched_setscheduler(args_t *regs);
uint64_t func_SYS_sched_getscheduler(args_t *regs);
uint64_t func_SYS_sched_getparam(args_t *regs);
uint64_t func_SYS_sched_setaffinity(args_t *regs);
uint64_t func_SYS_sched_getaffinity(args_t *regs);
uint64_t func_SYS_sched_yield(args_t *regs);
uint64_t func_SYS_sched_get_priority_max(args_t *regs);
uint64_t func_SYS_sched_get_priority_min(args_t *regs);
uint64_t func_SYS_sched_rr_get_interval(args_t *regs);
uint64_t func_SYS_restart_syscall(args_t *regs);
uint64_t func_SYS_kill(args_t *regs);
uint64_t func_SYS_tkill(args_t *regs);
uint64_t func_SYS_tgkill(args_t *regs);
uint64_t func_SYS_sigaltstack(args_t *regs);
uint64_t func_SYS_rt_sigsuspend(args_t *regs);
uint64_t func_SYS_rt_sigaction(args_t *regs);
uint64_t func_SYS_rt_sigprocmask(args_t *regs);
uint64_t func_SYS_rt_sigpending(args_t *regs);
uint64_t func_SYS_rt_sigtimedwait(args_t *regs);
uint64_t func_SYS_rt_sigqueueinfo(args_t *regs);
uint64_t func_SYS_rt_sigreturn(args_t *regs);
uint64_t func_SYS_setpriority(args_t *regs);
uint64_t func_SYS_getpriority(args_t *regs);
uint64_t func_SYS_reboot(args_t *regs);
uint64_t func_SYS_setregid(args_t *regs);
uint64_t func_SYS_setgid(args_t *regs);
uint64_t func_SYS_setreuid(args_t *regs);
uint64_t func_SYS_setuid(args_t *regs);
uint64_t func_SYS_setresuid(args_t *regs);
uint64_t func_SYS_getresuid(args_t *regs);
uint64_t func_SYS_setresgid(args_t *regs);
uint64_t func_SYS_getresgid(args_t *regs);
uint64_t func_SYS_setfsuid(args_t *regs);
uint64_t func_SYS_setfsgid(args_t *regs);
uint64_t func_SYS_times(args_t *regs);
uint64_t func_SYS_time(args_t *regs);
uint64_t func_SYS_setpgid(args_t *regs);
uint64_t func_SYS_getpgid(args_t *regs);
uint64_t func_SYS_getsid(args_t *regs);
uint64_t func_SYS_setsid(args_t *regs);
uint64_t func_SYS_getgroups(args_t *regs);
uint64_t func_SYS_setgroups(args_t *regs);
uint64_t func_SYS_uname(args_t *regs);
uint64_t func_SYS_sethostname(args_t *regs);
uint64_t func_SYS_setdomainname(args_t *regs);
uint64_t func_SYS_getrlimit(args_t *regs);
uint64_t func_SYS_setrlimit(args_t *regs);
uint64_t func_SYS_getrusage(args_t *regs);
uint64_t func_SYS_umask(args_t *regs);
uint64_t func_SYS_prctl(args_t *regs);
uint64_t func_SYS_getcpu(args_t *regs);
uint64_t func_SYS_gettimeofday(args_t *regs);
uint64_t func_SYS_settimeofday(args_t *regs);
uint64_t func_SYS_adjtimex(args_t *regs);
uint64_t func_SYS_getpid(args_t *regs);
uint64_t func_SYS_getppid(args_t *regs);
uint64_t func_SYS_getuid(args_t *regs);
uint64_t func_SYS_geteuid(args_t *regs);
uint64_t func_SYS_getgid(args_t *regs);
uint64_t func_SYS_getegid(args_t *regs);
uint64_t func_SYS_gettid(args_t *regs);
uint64_t func_SYS_sysinfo(args_t *regs);
uint64_t func_SYS_mq_open(args_t *regs);
uint64_t func_SYS_mq_unlink(args_t *regs);
uint64_t func_SYS_mq_timedsend(args_t *regs);
uint64_t func_SYS_mq_timedreceive(args_t *regs);
uint64_t func_SYS_mq_notify(args_t *regs);
uint64_t func_SYS_mq_getsetattr(args_t *regs);
uint64_t func_SYS_msgget(args_t *regs);
uint64_t func_SYS_msgctl(args_t *regs);
uint64_t func_SYS_msgrcv(args_t *regs);
uint64_t func_SYS_msgsnd(args_t *regs);
uint64_t func_SYS_semget(args_t *regs);
uint64_t func_SYS_semctl(args_t *regs);
uint64_t func_SYS_semtimedop(args_t *regs);
uint64_t func_SYS_semop(args_t *regs);
uint64_t func_SYS_shmget(args_t *regs);
uint64_t func_SYS_shmctl(args_t *regs);
uint64_t func_SYS_shmat(args_t *regs);
uint64_t func_SYS_shmdt(args_t *regs);
uint64_t func_SYS_socket(args_t *regs);
uint64_t func_SYS_socketpair(args_t *regs);
uint64_t func_SYS_bind(args_t *regs);
uint64_t func_SYS_listen(args_t *regs);
uint64_t func_SYS_accept(args_t *regs);
uint64_t func_SYS_connect(args_t *regs);
uint64_t func_SYS_getsockname(args_t *regs);
uint64_t func_SYS_getpeername(args_t *regs);
uint64_t func_SYS_sendto(args_t *regs);
uint64_t func_SYS_recvfrom(args_t *regs);
uint64_t func_SYS_setsockopt(args_t *regs);
uint64_t func_SYS_getsockopt(args_t *regs);
uint64_t func_SYS_shutdown(args_t *regs);
uint64_t func_SYS_sendmsg(args_t *regs);
uint64_t func_SYS_recvmsg(args_t *regs);
uint64_t func_SYS_readahead(args_t *regs);
uint64_t func_SYS_brk(args_t *regs);
uint64_t func_SYS_munmap(args_t *regs);
uint64_t func_SYS_mremap(args_t *regs);
uint64_t func_SYS_add_key(args_t *regs);
uint64_t func_SYS_request_key(args_t *regs);
uint64_t func_SYS_keyctl(args_t *regs);
uint64_t func_SYS_clone(args_t *regs);
uint64_t func_SYS_execve(args_t *regs);
uint64_t func_SYS_mmap(args_t *regs);
uint64_t func_SYS_fadvise64(args_t *regs);
uint64_t func_SYS_swapon(args_t *regs);
uint64_t func_SYS_swapoff(args_t *regs);
uint64_t func_SYS_mprotect(args_t *regs);
uint64_t func_SYS_msync(args_t *regs);
uint64_t func_SYS_mlock(args_t *regs);
uint64_t func_SYS_munlock(args_t *regs);
uint64_t func_SYS_mlockall(args_t *regs);
uint64_t func_SYS_munlockall(args_t *regs);
uint64_t func_SYS_mincore(args_t *regs);
uint64_t func_SYS_madvise(args_t *regs);
uint64_t func_SYS_remap_file_pages(args_t *regs);
uint64_t func_SYS_mbind(args_t *regs);
uint64_t func_SYS_get_mempolicy(args_t *regs);
uint64_t func_SYS_set_mempolicy(args_t *regs);
uint64_t func_SYS_migrate_pages(args_t *regs);
uint64_t func_SYS_move_pages(args_t *regs);
uint64_t func_SYS_rt_tgsigqueueinfo(args_t *regs);
uint64_t func_SYS_perf_event_open(args_t *regs);
uint64_t func_SYS_accept4(args_t *regs);
uint64_t func_SYS_recvmmsg(args_t *regs);
uint64_t func_SYS_arch_specific_syscall(args_t *regs);
uint64_t func_SYS_wait4(args_t *regs);
uint64_t func_SYS_prlimit64(args_t *regs);
uint64_t func_SYS_fanotify_init(args_t *regs);
uint64_t func_SYS_fanotify_mark(args_t *regs);
uint64_t func_SYS_name_to_handle_at(args_t *regs);
uint64_t func_SYS_open_by_handle_at(args_t *regs);
uint64_t func_SYS_clock_adjtime(args_t *regs);
uint64_t func_SYS_syncfs(args_t *regs);
uint64_t func_SYS_setns(args_t *regs);
uint64_t func_SYS_sendmmsg(args_t *regs);
uint64_t func_SYS_process_vm_readv(args_t *regs);
uint64_t func_SYS_process_vm_writev(args_t *regs);
uint64_t func_SYS_kcmp(args_t *regs);
uint64_t func_SYS_finit_module(args_t *regs);
uint64_t func_SYS_sched_setattr(args_t *regs);
uint64_t func_SYS_sched_getattr(args_t *regs);
uint64_t func_SYS_renameat2(args_t *regs);
uint64_t func_SYS_seccomp(args_t *regs);
uint64_t func_SYS_getrandom(args_t *regs);
uint64_t func_SYS_memfd_create(args_t *regs);
uint64_t func_SYS_bpf(args_t *regs);
uint64_t func_SYS_execveat(args_t *regs);
uint64_t func_SYS_userfaultfd(args_t *regs);
uint64_t func_SYS_membarrier(args_t *regs);
uint64_t func_SYS_mlock2(args_t *regs);
uint64_t func_SYS_copy_file_range(args_t *regs);
uint64_t func_SYS_preadv2(args_t *regs);
uint64_t func_SYS_pwritev2(args_t *regs);
uint64_t func_SYS_pkey_mprotect(args_t *regs);
uint64_t func_SYS_pkey_alloc(args_t *regs);
uint64_t func_SYS_pkey_free(args_t *regs);
uint64_t func_SYS_statx(args_t *regs);
uint64_t func_SYS_io_pgetevents(args_t *regs);
uint64_t func_SYS_rseq(args_t *regs);
uint64_t func_SYS_kexec_file_load(args_t *regs);
uint64_t func_SYS_riscv_flush_icache(args_t *regs);
uint64_t func_SYS_spawn(args_t *regs);
uint64_t func_SYS_mailread(args_t *regs);
uint64_t func_SYS_mailwrite(args_t *regs);
uint64_t func_SYS_mkdir(args_t *regs);
uint64_t func_SYS_NONE(args_t *regs);

struct SyscallJumpTable {
    uint64_t (*func)(args_t *args);
    uint64_t syscall_id;
    uint64_t index;
};

uint64_t syscall_id_to_index(uint64_t syscall_id);

#endif
