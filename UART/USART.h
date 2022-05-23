


#ifndef USART_H_
#define USART_H_
void UART_vInit(unsigned long baud);
void UART_vSendData(char data);
char UART_u8ReceiveData(void);
void UART_vSendstring( char *ptr);
#endif /* USART_H_ */
