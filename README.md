## Shared_Memory_XV6_OS
The existing xv6 Operating Systems does not have shared memory and mutex implementation. Hence it is implemented.  
The following functions were added to the userspace API of xv6:  
### shared memory
void* spalloc();
void spfree(void* ptr);

### mutexes
int mutex_init(mutex_t* lock);
int mutex_lock(mutex_t* lock);
int mutex_unlock(mutex_t* lock);

Mutex is implemented using test and set atomic instructions.  

The spalloc function should allocate a single 4k page of shared memory and return a pointer to it.  
Shared memory remains shared across calls to fork().  
