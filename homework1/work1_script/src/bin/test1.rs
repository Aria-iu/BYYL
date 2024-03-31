//! Error type A at Line 4: Mysterious character '~'
//! 
use std::process::Command;
pub fn main(){
    println!("this is test1");
    let mut command = Command::new("../parser");
    command.arg("../test/test1.cmm");
    let output = command.output().expect("Failed to execute command");
    // 打印输出结果
    if !output.stderr.is_empty(){
        println!("Error: {}", String::from_utf8_lossy(&output.stderr));
        return;
    }
    println!("Output: {}", String::from_utf8_lossy(&output.stdout));
}