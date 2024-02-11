#ifndef PROCESS_H
#define PROCESS_H
/**
 * @file Process.h
 * @author SDSU Department of Computer Science
 * @brief Defines a process class
 * @version 0.1
 * @date 2024-02-09 
 */

#include <iostream>

class Process {

    private:
        int priority;
        int pid;

    public:
        Process(int priority, int pid) {
            this->priority = priority;
            this->pid = pid;
        }

        /**
         * @brief Get the Priority of the process
         * 
         * @return int 
         */
        int getPriority() {
            return this->priority;
        }

        /**
         * @brief Set the Priority of the process
         * 
         * @param pid process id
         * @return bool 
         */
        bool setPriority(int priority) {
            this->priority = priority;
            return true;
        }

        /**
         * @brief Get the ID of the process
         * 
         * @return int
         */
        int getPID() {
            return this->pid;
        }

        friend std::ostream &operator<<(std::ostream &output, const Process &p) {
            output << "(" << p.priority << ", " << p.pid << ")";
            return output;
        }

};

#endif //PROCESS_H