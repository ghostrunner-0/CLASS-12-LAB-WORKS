// 6.Write a program to perform following operations using switch structure.
// If you enter A+, it says you have obtained grade A+.
// If you enter A, it says you have obtained grade A.
// If you enter B+, it says you have obtained grade B+.
// If you enter B, it says you have obtained grade B.
// If you enter any other value/character, it says you have obtained other grade.
let grade=prompt("Enter your Grade");
switch (grade) {
    case "A+":
        console.log("You have obtained grade A+");
        break;
    case "A":
        console.log("You have obtained grade A");
        break;
    case "B+":
        console.log("You have obtained grade B+");
        break;
    case "B":
        console.log("You have obtained grade B");
        break;
    default:
        console.log("You have obtained other grade");
        }