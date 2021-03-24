use rand::Rng;

mod sorts;

fn fill_array(list: &mut [u32]) {
    let mut rng = rand::thread_rng();

    for i in list {
        *i = rng.gen_range(0..1000);
    }
}

fn main() {
    let mut sort_array: [u32; 25] = [0; 25];
    fill_array(&mut sort_array);

    // Selection Sort
    sorts::print_array(&String::from("Before Selection Sort:"), &sort_array);
    sorts::selection_sort(&mut sort_array);
    sorts::print_array(&String::from("After Selection Sort:"), &sort_array);

    println!();
    fill_array(&mut sort_array);

    // Bubble Sort
    sorts::print_array(&String::from("Before Bubble Sort:"), &sort_array);
    sorts::bubble_sort(&mut sort_array);
    sorts::print_array(&String::from("After Bubble Sort:"), &sort_array);
}
