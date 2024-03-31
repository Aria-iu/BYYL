/*
    Program (1)
    ExtDefList (1)
        ExtDef (1)
            Specifier (1)
                TYPE: int
            FunDec (1)
                ID: main
                LP
                RP
            CompSt (2)
                LC
                DefList (3)
                    Def (3)
                        Specifier (3)
                            TYPE: float
                        DecList (3)
                            Dec (3)
                                VarDec (3)
                                    ID: i
                                ASSIGNOP
                                Exp (3)
                                    FLOAT: 0.000105
                        SEMI
                RC
*/
 
use std::process::Command;
pub fn main(){
    println!("this is test7");
    let mut command = Command::new("../parser");
    command.arg("../test/test7.cmm");
    let output = command.output().expect("Failed to execute command");
    // 打印输出结果
    if !output.stderr.is_empty(){
        println!("Error: {}", String::from_utf8_lossy(&output.stderr));
        return;
    }
    println!("Output:");
    println!("{}", String::from_utf8_lossy(&output.stdout));
}