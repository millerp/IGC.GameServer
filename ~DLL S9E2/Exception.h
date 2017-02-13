#ifndef EXCEPTION_H
#define EXCEPTION_H

class CException : public std::exception{
	std::string m_Exception;
public:
	CException(const char* format, ...);
	CException(const CException& e);
	CException operator=(const CException& e);

	virtual const char* what();
};

#endif