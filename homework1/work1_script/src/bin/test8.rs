//! Error type B at Line 3: Syntax error.
//! 
//! 或者
//! 在本paser中采用词法分析阶段检测非法的浮点数。
//! 
//! Error type A at Line 3: Illegal floating point number "1.05e".
//! 
 
use std::process::Command;
pub fn main(){
    println!("this is test8");
    let mut command = Command::new("../parser");
    command.arg("../test/test8.cmm");
    let output = command.output().expect("Failed to execute command");
    // 打印输出结果
    if !output.stderr.is_empty(){
        println!("Error: {}", String::from_utf8_lossy(&output.stderr));
        return;
    }
    println!("Output:");
    println!("{}", String::from_utf8_lossy(&output.stdout));
}