using System;
using Xunit;

namespace FizzBuzzTDDKata
{
    public class FizzBuzzTest
    {
        [Fact]
		public void should_return_1_if_num_is_1()
		{
			int number = 1;
			string result = FizzBuzz.GetValueFor(number);
			Assert.Equal("1", result);
		}
























		// [Fact]
		// public void should_return_2_if_num_is_2()
		// {
		// }

		// [Fact]
		// public void should_return_Fizz_if_num_is_3()
		// {
		// }
	}
}
