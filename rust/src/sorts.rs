fn swap(list:&mut[i32], a:usize, b:usize) {
    let tmp:i32 = list[a];
    list[a] = list[b];
    list[b] = tmp;
}

pub fn selection_sort(list:&mut [i32]) {
    for i in 0..list.len() {
        let mut min_index:usize = i;
        for j in i+1..list.len() {
            if list[min_index] > list[j] {
                min_index = j;
            }
        }
        swap(list, min_index, i);
    }
}

pub fn print_array(sort_name:&String, list:&[i32]) {
    print!("{} ", sort_name);
    for elem in list.iter() {
        print!("{} ", elem)
    }
    println!();
}
