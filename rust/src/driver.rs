mod sorts;

fn main() {
    // Selection Sort
    let mut sel_sort: [i32;10] = [4, 10, 2, 708, 66, 44, 1, 23, 7, 2];
    sorts::print_array(
                    &String::from("Before Selection Sort"), 
                    &sel_sort);
    sorts::selection_sort(&mut sel_sort);
    sorts::print_array(
                    &String::from("After Selection Sort"), 
                    &sel_sort);

    // Bubble Sort
    let mut bub_sort: [i32;10] = [4, 10, 2, 7, 99, 100, 1, 42, 34, 23];
    sorts::print_array(
                    &String::from("Before Bubble Sort"), 
                    &bub_sort);
    sorts::bubble_sort(&mut bub_sort);
    sorts::print_array(
                    &String::from("After Bubble Sort"), 
                    &bub_sort);
}
