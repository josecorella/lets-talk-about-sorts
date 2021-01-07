mod sorts;

fn main() {
    let mut sel_sort: [i32;10] = [4, 10, 2, 708, 66, 44, 1, 23, 7, 2];
    sorts::print_array(
                    &String::from("Before Selection Sort"), 
                    &sel_sort);
    sorts::selection_sort(&mut sel_sort);
    sorts::print_array(
                    &String::from("After Selection Sort"), 
                    &sel_sort);
}
