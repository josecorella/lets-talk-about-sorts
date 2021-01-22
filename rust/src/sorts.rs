fn swap(list:&mut[u32], a:usize, b:usize) {
    let tmp:u32 = list[a];
    list[a] = list[b];
    list[b] = tmp;
}

pub fn selection_sort(list:&mut [u32]) {
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

pub fn bubble_sort(list:&mut [u32]) {
    for i in 0..list.len() {
        for j in 0..list.len()-1-i {
            if list[j] > list[j+1] {
                swap(list, j, j+1);
            }
        }
    }
}

pub fn print_array(sort_name:&String, list:&[u32]) {
    print!("{} ", sort_name);
    for elem in list.iter() {
        print!("{} ", elem)
    }
    println!();
}
