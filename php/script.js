const username = document.getElementsByName("username")[0];
const password = document.getElementsByName("password")[0];
const form = document.getElementsByTagName("form")[0];

form.addEventListener("submit", (event) => {
  event.preventDefault();

  if (username.value === "admin" && password.value === "password") {
    alert("Login successful!");
  } else {
    alert("Invalid username or password.");
  }
});
