#ifndef FIXED_HPP
# define FIXED_HPP
# include "iostream"

class Fixed
{
	public:
		Fixed( void );
		Fixed( int const n );
		Fixed( Fixed const & src);
		~Fixed( void );

		Fixed &		operator=( Fixed const & rhs );

		int 	getRawBits( void ) const;
		void	setRawBits( int const raw);

	private:
		int _fix;
		static const int _stat = 8;
};

#endif