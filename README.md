# Linux System Programming Lab

A collection of basic Linux System Programming programs demonstrating process management, multithreading, synchronization, inter-process communication (IPC), and socket programming concepts.

---

## Repository Structure

```text
Linux-System-Programming-Lab/
│
├── 01_File_Handling/
├── 02_Process/
├── 03_Child_Process/
├── 04_Threads/
├── 05_Mutex/
├── 06_Semaphore/
├── 07_Unnamed_Pipe/
├── 08_Named_Pipe_FIFO/
├── 09_Shared_Memory/
├── 10_Message_Queue/
├── 11_TCP_Socket/
└── 12_UDP_Socket/
```

---

## Experiments

### 1. File Handling

**Objective:** Create a file named `test.txt` and write "Hello Linux" into it.

**System Calls Used**

* `open()`
* `write()`
* `close()`

---

### 2. Process Management

**Objective:** Display the Process ID (PID) of the running process.

**System Calls Used**

* `getpid()`

---

### 3. Child Process Creation

**Objective:** Create a child process and print messages from both parent and child.

**System Calls Used**

* `fork()`

---

### 4. Thread Creation

**Objective:** Create a thread that prints "Hello Thread".

**APIs Used**

* `pthread_create()`
* `pthread_join()`

---

### 5. Mutex Synchronization

**Objective:** Synchronize two threads using a mutex.

**APIs Used**

* `pthread_mutex_lock()`
* `pthread_mutex_unlock()`

---

### 6. Semaphore Synchronization

**Objective:** Allow only one thread to access a critical section at a time.

**APIs Used**

* `sem_init()`
* `sem_wait()`
* `sem_post()`

---

### 7. Unnamed Pipe

**Objective:** Send "Hello Child" from parent to child through a pipe.

**System Calls Used**

* `pipe()`
* `read()`
* `write()`

---

### 8. Named Pipe (FIFO)

**Objective:** Communicate between two programs using a FIFO file.

**System Calls Used**

* `mkfifo()`
* `open()`
* `read()`
* `write()`

---

### 9. Shared Memory

**Objective:** Store and access data using shared memory.

**System Calls Used**

* `shmget()`
* `shmat()`

---

### 10. Message Queue

**Objective:** Send and receive messages using a message queue.

**System Calls Used**

* `msgget()`
* `msgsnd()`
* `msgrcv()`

---

### 11. TCP Socket Programming

**Objective:** Implement a simple TCP client-server communication.

**System Calls Used**

* `socket()`
* `bind()`
* `listen()`
* `accept()`
* `send()`
* `recv()`

---

### 12. UDP Socket Programming

**Objective:** Implement communication using UDP sockets.

**System Calls Used**

* `socket()`
* `sendto()`
* `recvfrom()`

---

## Compilation Guide

### Standard Programs

```bash
gcc program.c -o program
./program
```

### Thread / Mutex / Semaphore Programs

```bash
gcc program.c -o program -lpthread
./program
```

### TCP Programs

```bash
gcc server.c -o server
gcc client.c -o client
```

Run:

```bash
./server
./client
```

---

## Concepts Covered

* Linux System Calls
* Process Creation and Management
* POSIX Threads
* Mutexes and Semaphores
* Inter Process Communication (IPC)
* Shared Memory
* Message Queues
* TCP/IP Networking
* UDP Communication

---

## Prerequisites

* Linux Operating System
* GCC Compiler
* POSIX Thread Library
* Basic C Programming Knowledge

---

## Developed For

Linux System Programming Laboratory
Electronics and Communication Engineering

---

## Author

**NARMATHASREE M**
