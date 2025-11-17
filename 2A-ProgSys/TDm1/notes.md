# Programmation Système TDm1

**1.1** Le programme s'éxecute deux fois avec des `id` de processus différents, ce qui etait prévisible. Le PPID du fils est aussi le PID du père.



**1.2** on utilise le fait que le fils donne à `fork()` une valeur de retour de 0, contrairement au père.
