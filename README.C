# CSC 308 – Operating Systems Practicals

This repository contains my practical implementations for **CSC 308 (Operating Systems)**. The programs demonstrate key operating system concepts such as thread synchronization, mutual exclusion, semaphores, the Producer-Consumer problem, and Inter-Process Communication (IPC) using shared memory.

## Practical Sessions

### 1. Mutex Lock Demonstration

**Objective**
- Demonstrate mutual exclusion using POSIX mutex locks.

**Programs**
- `without_mutex.c`
- `with_mutex.c`

**Description**
A shared counter is incremented by multiple threads.

- **Without Mutex:** Threads access the counter simultaneously, resulting in race conditions and inconsistent outputs.
- **With Mutex:** A mutex protects the critical section, ensuring only one thread updates the counter at a time and producing the correct result.

**Compile**

```bash
gcc without_mutex.c -o without_mutex -pthread
gcc with_mutex.c -o with_mutex -pthread
```

**Run**

```bash
./without_mutex
./with_mutex
```

---

### 2. Producer-Consumer Simulation

**Objective**
- Implement the Producer-Consumer problem using POSIX semaphores.

**Program**
- `producer_consumer.c`

**Description**
A producer thread generates data and stores it in a circular buffer, while a consumer thread retrieves the data. Synchronization is achieved using:
- `empty` semaphore
- `full` semaphore
- `mutex` lock

This prevents race conditions, buffer overflow, and buffer underflow.

**Compile**

```bash
gcc producer_consumer.c -o producer_consumer -pthread
```

**Run**

```bash
./producer_consumer
```

---

### 3. Semaphore Implementation

**Objective**
- Demonstrate synchronization using semaphores.

**Program**
- `semaphore_demo.c`

**Description**
Multiple threads access a shared counter protected by a binary semaphore. This practical highlights how semaphores can synchronize access to shared resources and compares their behavior with mutex locks.

**Compile**

```bash
gcc semaphore_demo.c -o semaphore_demo -pthread
```

**Run**

```bash
./semaphore_demo
```

---

### 4. Shared Memory Programming

**Objective**
- Implement Inter-Process Communication (IPC) using shared memory.

**Program**
- `shared_memory.c`

**Description**
The program creates a shared memory segment that is accessed by both a parent and child process. The parent writes data into shared memory, the child reads it, and both processes detach before the shared memory is removed.

**Compile**

```bash
gcc shared_memory.c -o shared_memory
```

**Run**

```bash
./shared_memory
```
