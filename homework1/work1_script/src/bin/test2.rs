//! Error type B at Line 5: Missing "]"
//! Error type B at Line 6: Missing ";"

use std::process::Command;
pub fn main(){
    println!("this is test2");
    let mut command = Command::new("../parser");
    command.arg("../test/test2.cmm");
    let output = command.output().expect("Failed to execute command");
    // 打印输出结果
    if !output.stderr.is_empty(){
        println!("Error:");
        println!("{}", String::from_utf8_lossy(&output.stderr));
        return;
    }
    println!("Output:");
    println!("{}", String::from_utf8_lossy(&output.stdout));
}