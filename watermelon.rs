use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input);
    let w: i32 = input.parse();
    
    if w % 2 == 0 && w > 2 {
        println!("YES");
    } else {
        println!("NO");
    }
}
