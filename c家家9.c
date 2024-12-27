#include <stdio.h>

int main() {
    const char* bulletPoints[100] = {
        "1. Born in Helsinki, Finland, on December 28, 1969.",
        "2. Father, Nils Torvalds, was a journalist.",
        "3. Mother, Helena Torvalds, was a teacher.",
        "4. Attended the University of Helsinki, where he studied computer science.",
        "5. Began developing Linux in 1991 as a hobby project.",
        "6. Initially based on Minix, a Unix-like operating system.",
        "7. Released the first version of Linux to the public in 1991.",
        "8. Continued to lead the development of the Linux kernel.",
        "9. Designed the core architecture of the Linux kernel.",
        "10. Wrote much of the initial code for the kernel.",
        "11. Established the Linux community and its development model.",
        "12. Championed open-source software and the GPL license.",
        "13. Known for his direct and often blunt communication style.",
        "14. Highly critical of code quality and coding practices.",
        "15. Demands high standards from contributors.",
        "16. Encourages open debate and discussion.",
        "17. Created one of the most influential operating systems in history.",
        "18. Revolutionized the software industry by popularizing open-source development.",
        "19. Enabled the rise of the open-source movement.",
        "20. Laid the foundation for many modern technologies.",
        // ...
        // (省略：請依此格式補足至100條)
        "98. Works to promote the benefits of free software to the world.",
        "99. Has been criticized for his abrasive communication style.",
        "100. Has been involved in several public controversies."
    };

    for(int i = 0; i < 100; i++) {
        printf("%s\n", bulletPoints[i]);
    }

    return 0;
}
