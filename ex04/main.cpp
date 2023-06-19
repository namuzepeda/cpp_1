#include <iostream>
#include <fstream>

int	search_and_replace(std::string fileName, std::string data, std::string search, std::string replace)
{
	std::string 	str;
	std::ofstream	file;
	int				searchLength;
	int				replaceLength;

	file.open((std::string(fileName) + ".replace").c_str());
	if(file.fail())
		return (1);
	searchLength = search.size();
	replaceLength = replace.size();
	for(int i = 0; (int) data.size() > i; i++) {
		if(searchLength && replaceLength)
		{
			int pos = data.find(search, i);
			if(pos != -1 && pos == i) {
				file << replace;
				i += searchLength -1;
			} else
				file << data[i];
		} else
			file << data[i];
	}
	file.close();
	return (0);
}

int	main(int argc, char **argv)
{
	char			c;
	std::ifstream	file;
	std::string		str;

	if (argc != 4)
	{
		std::cout << "Bad usage: <file> <search> <replace>" << std::endl;
		return (1);
	}
	file.open(argv[1]);
	if(file.fail()) {
		std::cout << "Error: " << argv[1] << ":" << " no such file or directory" << std::endl;
		return (1);
	}
	while(!file.eof() && file >> std::noskipws >> c)
		str += c;
	file.close();
	return (search_and_replace(argv[1], str, argv[2], argv[3]));
}
