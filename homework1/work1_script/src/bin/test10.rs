//! Error type B at Line 8: Syntex error
//! 
//! 
//! 本编译器只在词法分析阶段解析注释，所以会支持注释之中添加注释，当然，你也可以不支持。
//! 所以，按照本编译器的逻辑，这个nested 注释不会影响结果
//! 
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
                DefList (9)
                    Def (9)
                        Specifier (9)
                            TYPE: int
                        DecList (9)
                            Dec (9)
                                VarDec (9)
                                    ID: i
                                ASSIGNOP
                                Exp (9)
                                    INT: 1
                        SEMI
                RC
 */

use std::process::Command;
pub fn main(){
    println!("this is test10");
    let mut command = Command::new("../parser");
    command.arg("../test/test10.cmm");
    let output = command.output().expect("Failed to execute command");
    // 打印输出结果
    if !output.stderr.is_empty(){
        println!("Error: {}", String::from_utf8_lossy(&output.stderr));
        return;
    }
    println!("Output:");
    println!("{}", String::from_utf8_lossy(&output.stdout));
}