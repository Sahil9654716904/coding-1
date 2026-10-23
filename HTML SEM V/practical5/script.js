function validateForm() {

    // Get input values
    let name = document.getElementById("name").value;
    let email = document.getElementById("email").value;
    let mobile = document.getElementById("mobile").value;
    let age = document.getElementById("age").value;
    let password = document.getElementById("password").value;
    let confirmPassword = document.getElementById("confirmPassword").value;

    // Name validation
    if (name == "") {
        alert("Please enter your name");
        return false;
    }

    // Email validation
    let emailPattern =
        /^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$/;

    if (!emailPattern.test(email)) {
        alert("Please enter a valid email address");
        return false;
    }

    // Mobile number validation
    let mobilePattern = /^[0-9]{10}$/;

    if (!mobilePattern.test(mobile)) {
        alert("Please enter a valid 10-digit mobile number");
        return false;
    }

    // Age validation
    if (age == "" || age < 18 || age > 60) {
        alert("Age must be between 18 and 60");
        return false;
    }

    // Password validation
    if (password.length < 8) {
        alert("Password must contain at least 8 characters");
        return false;
    }

    // Confirm password validation
    if (password != confirmPassword) {
        alert("Passwords do not match");
        return false;
    }

    alert("Form submitted successfully!");
    return true;
}