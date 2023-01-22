## Steps to run simulation using verilator.

```bash
 verilator --Wall -cc thruwire.v
 cd obj_dir/
 make -f Vthruwire.mk
 cd ..
 touch thruwire.cpp  
 g++ -I /usr/share/verilator/include -I obj_dir/ /usr/share/verilator/include/verilated.cpp thruwire.cpp obj_dir/Vthruwire__ALL.a -o thruwire
 

 ```
 
