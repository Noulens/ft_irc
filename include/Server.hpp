#ifndef SERVER_HPP
# define SERVER_HPP

class Server
{
	private:

	public:
		Server();

		Server(const Server &copy);

		~Server();

		Server &operator=(const Server &assign);
};

#endif
