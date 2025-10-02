Algoritmo Cajero_Electronico
    Definir usuario, contrasena Como Cadena
    Definir usuarioCorrecto, contrasenaCorrecta Como Cadena
    Definir intentos, opcion, opcionPago, subopcion, opcionLicencia Como Entero
    Definir saldo, monto Como Real
   
	
    usuarioCorrecto <- "Eliu"
    contrasenaCorrecta <- "1234"
    saldo <- 500
    intentos <- 0
    autenticado <- Falso
	
    // --- ACCESO ---
    Repetir
        Escribir ""
        Escribir "=== ACCESO AL CAJERO ==="
        Escribir "Ingrese usuario: "
        Leer usuario
        Escribir "Ingrese contrasena: "
        Leer contrasena
		
        Si usuario = usuarioCorrecto Y contrasena = contrasenaCorrecta Entonces
            autenticado <- Verdadero
            Escribir "Bienvenido, ", usuario
        SiNo
            intentos <- intentos + 1
            Si intentos < 3 Entonces
                Escribir "Usuario o contrasena incorrecta. Intentos restantes: ", 3 - intentos
            SiNo
                Escribir "Tarjeta bloqueada por exceso de intentos."
            FinSi
        FinSi
    Hasta Que autenticado = Verdadero O intentos = 3
	
    // --- SI AUTENTICADO: ejecutar menú (TODO dentro de este Si) ---
    Si autenticado Entonces
        Repetir
            Escribir ""
            Escribir "----- MENU DEL CAJERO -----"
            Escribir "1. Depositar"
            Escribir "2. Retirar"
            Escribir "3. Pago de servicios"
            Escribir "4. Pago de tarjeta de credito"
            Escribir "5. Consultar saldo"
            Escribir "6. Salir"
            Escribir ""
            Escribir "Seleccione una opcion: "
            Leer opcion
			
            Segun opcion Hacer
                Caso 1:
                    Escribir ""
                    Escribir "Ingrese cantidad a depositar: $"
                    Leer monto
                    saldo <- saldo + monto
                    Escribir ""
                    Escribir "Deposito exitoso."
                    Escribir "Nuevo saldo: $", saldo
					
					
                Caso 2:
                    Escribir ""
                    Escribir "Ingrese cantidad a retirar: $"
                    Leer monto
                    Si monto <= saldo Entonces
                        saldo <- saldo - monto
                        Escribir ""
                        Escribir "Retiro exitoso."
                        Escribir "Nuevo saldo: $", saldo
                    SiNo
                        Escribir ""
                        Escribir "Saldo insuficiente."
                    FinSi
					
					
                Caso 3:
                    Escribir ""
                    Escribir "--- PAGO DE SERVICIOS ---"
                    Escribir "1. Tesoreria"
                    Escribir "2. Telefonia"
                    Escribir "3. Servicios de TV"
                    Escribir "4. Tienda Departamental"
                    Escribir ""
                    Escribir "Seleccione una opcion: "
                    Leer opcionPago
					
                    Segun opcionPago Hacer
                        Caso 1: // Tesorería
                            Escribir ""
                            Escribir "1. Luz"
                            Escribir "2. Agua"
                            Escribir "3. Predial"
                            Escribir "4. Licencia de conducir"
                            Escribir "5. Multa Automotriz"
                            Escribir "6. Tenencia"
                            Escribir ""
                            Escribir "Seleccione servicio: "
                            Leer subopcion
							
                            Si subopcion = 4 Entonces
                                Escribir ""
                                Escribir "--- LICENCIAS DE CONDUCIR ---"
                                Escribir "1. Permiso menor de edad ($1200)"
                                Escribir "2. Licencia A autos particulares ($1800)"
                                Escribir "3. Licencia A1 motocicletas ($1500)"
                                Escribir "4. Licencia B taxi ($1800)"
                                Escribir "5. Licencia C transporte de carga ($2300)"
                                Escribir "6. Licencia D transporte de pasajeros ($3200)"
                                Escribir "7. Licencia E servicios especiales ($4100)"
                                Escribir ""
                                Escribir "Seleccione licencia: "
                                Leer opcionLicencia
								
                                Segun opcionLicencia Hacer
                                    Caso 1: monto <- 1200
                                    Caso 2: monto <- 1800
                                    Caso 3: monto <- 1500
                                    Caso 4: monto <- 1800
                                    Caso 5: monto <- 2300
                                    Caso 6: monto <- 3200
                                    Caso 7: monto <- 4100
                                    De Otro Modo: monto <- 0
                                FinSegun
								
                                Si monto > 0 Entonces
                                    Si monto <= saldo Entonces
                                        saldo <- saldo - monto
                                        Escribir ""
                                        Escribir "Pago de licencia realizado."
                                        Escribir "Nuevo saldo: $", saldo
                                    SiNo
                                        Escribir ""
                                        Escribir "Saldo insuficiente."
                                    FinSi
                                SiNo
                                    Escribir ""
                                    Escribir "Licencia no valida."
                                FinSi
								
                            SiNo
                                Escribir ""
                                Escribir "Ingrese monto a pagar: $"
                                Leer monto
                                Si monto <= saldo Entonces
                                    saldo <- saldo - monto
                                    Escribir ""
                                    Escribir "Pago realizado."
                                    Escribir "Nuevo saldo: $", saldo
                                SiNo
                                    Escribir ""
                                    Escribir "Saldo insuficiente."
                                FinSi
                            FinSi
							
							
                        Caso 2: // Telefonía
                            Escribir ""
                            Escribir "1. Telmex"
                            Escribir "2. AT&T Mexico"
                            Escribir "3. Claro"
                            Escribir "4. Movistar Mexico"
                            Escribir ""
                            Escribir "Seleccione servicio: "
                            Leer subopcion
                            Escribir ""
                            Escribir "Ingrese monto a pagar: $"
                            Leer monto
                            Si monto <= saldo Entonces
                                saldo <- saldo - monto
                                Escribir ""
                                Escribir "Pago realizado."
                                Escribir "Nuevo saldo: $", saldo
                            SiNo
                                Escribir ""
                                Escribir "Saldo insuficiente."
                            FinSi
							
							
                        Caso 3: // Servicios de TV
                            Escribir ""
                            Escribir "1. iZZ!"
                            Escribir "2. Megacable"
                            Escribir "3. Dish"
                            Escribir "4. Sky"
                            Escribir "5. VeTV"
                            Escribir "6. Star TV"
                            Escribir "7. Totalplay"
                            Escribir ""
                            Escribir "Seleccione servicio: "
                            Leer subopcion
                            Escribir ""
                            Escribir "Ingrese monto a pagar: $"
                            Leer monto
                            Si monto <= saldo Entonces
                                saldo <- saldo - monto
                                Escribir ""
                                Escribir "Pago realizado."
                                Escribir "Nuevo saldo: $", saldo
                            SiNo
                                Escribir ""
                                Escribir "Saldo insuficiente."
                            FinSi
							
							
                        Caso 4: // Tienda Departamental
                            Escribir ""
                            Escribir "1. Liverpool"
                            Escribir "2. Sears"
                            Escribir "3. Palacio de Hierro"
                            Escribir "4. Suburbia"
                            Escribir ""
                            Escribir "Seleccione tienda: "
                            Leer subopcion
                            Escribir ""
                            Escribir "Ingrese monto a pagar: $"
                            Leer monto
                            Si monto <= saldo Entonces
                                saldo <- saldo - monto
                                Escribir ""
                                Escribir "Pago realizado."
                                Escribir "Nuevo saldo: $", saldo
                            SiNo
                                Escribir ""
                                Escribir "Saldo insuficiente."
                            FinSi
							
							
                        De Otro Modo:
                            Escribir ""
                            Escribir "Opcion invalida en Pago de servicios."
                    FinSegun
					
					
                Caso 4:
                    Escribir ""
                    Escribir "Ingrese monto a pagar de tarjeta de credito: $"
                    Leer monto
                    Si monto <= saldo Entonces
                        saldo <- saldo - monto
                        Escribir ""
                        Escribir "Pago de tarjeta realizado."
                        Escribir "Nuevo saldo: $", saldo
                    SiNo
                        Escribir ""
                        Escribir "Saldo insuficiente."
                    FinSi
					
					
                Caso 5:
                    Escribir ""
                    Escribir "Su saldo disponible es: $", saldo
					
					
                Caso 6:
                    Escribir ""
                    Escribir "Gracias por usar el Cajero Electronico."
                    Escribir "Saldo final: $", saldo
					
					
                De Otro Modo:
                    Escribir ""
                    Escribir "Opcion invalida."
            FinSegun
        Hasta Que opcion = 6
    SiNo
        Escribir ""
        Escribir "Acceso denegado. Tarjeta bloqueada o credenciales incorrectas."
    FinSi
	
FinAlgoritmo
