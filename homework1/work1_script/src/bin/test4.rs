/*
Program (1)
    ExtDefList (1)
        ExtDef (1)
            Specifier (1)
                StructSpecifier (1)
                    STRUCT
                    OptTag (1)
                        ID: Complex
                    LC
                    DefList (3)
                        Def (3)
                            Specifier (3)
                                TYPE: float
                            DecList (3)
                                Dec (3)
                                    VarDec (3)
                                        ID: real
                                COMMA
                                DecList (3)
                                    Dec (3)
                                        VarDec (3)
                                            ID: image
                            SEMI
                    RC
            SEMI
        ExtDefList (5)
            ExtDef (5)
                Specifier (5)
                    TYPE: int
                FunDec (5)
                    ID: main
                    LP
                    RP
                CompSt (6)
                    LC
                    DefList (7)
                        Def (7)
                            Specifier (7)
                                StructSpecifier (7)
                                    STRUCT
                                    Tag (7)
                                        ID: Complex
                            DecList (7)
                                Dec (7)
                                    VarDec (7)
                                        ID: x
                            SEMI
                    StmtList (8)
                        Stmt (8)
                            Exp (8)
                                Exp (8)
                                    Exp (8)
                                        ID: y
                                    DOT
                                    ID: image
                                ASSIGNOP
                                Exp (8)
                                    FLOAT: 3.500000
                            SEMI
                    RC


*/

use std::process::Command;
pub fn main(){
    println!("this is test4");
    let mut command = Command::new("../parser");
    command.arg("../test/test4.cmm");
    let output = command.output().expect("Failed to execute command");
    // 打印输出结果
    if !output.stderr.is_empty(){
        println!("Error: {}", String::from_utf8_lossy(&output.stderr));
        return;
    }
    println!("Output:");
    println!("{}", String::from_utf8_lossy(&output.stdout));
}