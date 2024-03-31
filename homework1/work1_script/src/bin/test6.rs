//! 应识别8进制和16进制数，识别出错误
//! 程序可以选择以下两种错误提示
//! 
//! Error type B at Line 3: Missing ";".
//! Error type B at Line 4: Missing ";".
//! 
//! 或者
//! 
//! Error type A at Line 3: Illegal octal number '09'
//! Error type A at Line 4: Illegal hexadecimal number '0x3G'
//! 

use std::process::Command;
pub fn main(){
    println!("this is test6");
    let mut command = Command::new("../parser");
    command.arg("../test/test6.cmm");
    let output = command.output().expect("Failed to execute command");
    // 打印输出结果
    if !output.stderr.is_empty(){
        println!("Error: {}", String::from_utf8_lossy(&output.stderr));
        return;
    }
    println!("Output:");
    println!("{}", String::from_utf8_lossy(&output.stdout));
}