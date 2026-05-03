
#[repr(C)]
struct Generic
{
    id: i32,
}

#[unsafe(no_mangle)]
pub extern "C" fn make_generic(id: i32)->Generic
{
    println!("The Generic is created in Rust! ");
    Generic { id }
}

#[unsafe(no_mangle)]
pub extern "C" fn get_generic(g: Generic) -> i32
{
    println!("This returns the id from Rust! ");
    g.id
}

