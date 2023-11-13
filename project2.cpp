// project2
// Find out if the Given Number is Prime
/* We have already declared the input variable number at the backend.
int number;
Find whether the given number is prime or not, and then
print your output to the console
*/
bool isPrime = true;
if (number <= 1)
{
	std::cout << "not prime";
	isPrime = false;
}
else if (number > 2)
{
	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			std::cout << "not prime";
			isPrime = false;
			break;
		}
		
	}
}
if (isPrime)
{
	std::cout << "prime";
}
