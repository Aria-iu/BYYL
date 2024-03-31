/*
测试注释功能
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
                DefList (7)
                    Def (7)
                        Specifier (7)
                            TYPE: int
                        DecList (7)
                            Dec (7)
                                VarDec (7)
                                    ID: i
                                ASSIGNOP
                                Exp (7)
                                    INT: 1
                        SEMI
                RC

*/

use std::process::Command;
pub fn main(){
    println!("this is test9");
    let mut command = Command::new("../parser");
    command.arg("../test/test9.cmm");
    let output = command.output().expect("Failed to execute command");
    // 打印输出结果
    if !output.stderr.is_empty(){
        println!("Error: {}", String::from_utf8_lossy(&output.stderr));
        return;
    }
    println!("Output:");
    println!("{}", String::from_utf8_lossy(&output.stdout));
}