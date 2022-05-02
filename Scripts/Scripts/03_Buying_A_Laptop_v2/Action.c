Action()
{

	lr_start_transaction("03_Buying_A_Laptop");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	
	
	
	
	
	lr_start_transaction("Home");
	
	web_reg_find("Text/IC=Advantage Shopping",
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("DNT", 
		"1");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"100\", \"Google Chrome\";v=\"100\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("http://18.212.178.84", 
		"URL=http://18.212.178.84/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t112.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/main.min.js", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=/css/images/logo.png", ENDITEM, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=http://18.212.178.84/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=http://18.212.178.84/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=http://18.212.178.84/css/main.min.css", ENDITEM, 
		"Url=/css/images/closeDark.png", ENDITEM, 
		"Url=/css/images/arrow_right.png", "Referer=http://18.212.178.84/css/main.min.css", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=speakers", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=tablets", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=mice", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=laptops", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=headphones", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=http://18.212.178.84/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=http://18.212.178.84/css/main.min.css", ENDITEM, 
		"Url=/css/images/Special-offer.jpg", ENDITEM, 
		"Url=/css/images/facebook.png", ENDITEM, 
		"Url=/css/images/GoUp.png", ENDITEM, 
		"Url=/css/images/twitter.png", ENDITEM, 
		"Url=/css/images/Banner1.jpg", ENDITEM, 
		"Url=/css/images/Banner2.jpg", ENDITEM, 
		"Url=/css/images/linkedin.png", ENDITEM, 
		"Url=/css/images/Banner3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
		"Url=/css/images/FacebookLogo.png", "Referer=http://18.212.178.84/css/main.min.css", ENDITEM, 
		"Url=/css/images/Filter.png", ENDITEM, 
		"Url=/css/images/category_banner_1.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1249", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1250", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1700", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1600", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=11100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1400", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1245", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1800", ENDITEM, 
		"Url=/css/images/Bell.png", "Referer=http://18.212.178.84/css/main.min.css", ENDITEM, 
		"Url=/css/images/Check.png", "Referer=http://18.212.178.84/css/main.min.css", ENDITEM, 
		"Url=/css/images/User.jpg", ENDITEM, 
		"Url=/css/images/Shipex.png", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("ALL", 
		"URL=http://18.212.178.84/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t113.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_gat=1; DOMAIN=http://18.212.178.84");

	web_add_header("Origin", 
		"http://18.212.178.84");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountConfigurationRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=http://18.212.178.84:8081//accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t114.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_url("categories", 
		"URL=http://18.212.178.84/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t115.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search", 
		"URL=http://18.212.178.84/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t116.inf", 
		"Mode=HTML", 
		LAST);

	web_url("popularProducts.json", 
		"URL=http://18.212.178.84/app/tempFiles/popularProducts.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t117.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL=http://18.212.178.84/app/views/home-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t118.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Home",LR_AUTO);
	
	
	
	
	
	lr_think_time(5);

	lr_start_transaction("Login");
	
	web_reg_find("Text/IC=Login Successful",
		LAST);

	web_add_header("Origin", 
		"http://18.212.178.84");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLoginRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");
	
	web_reg_save_param("UserId",
		"LB/IC=<ns2:userId>",
		"RB/IC=<",
		LAST);
	
	web_reg_save_param("Authorization",
		"LB/IC=<ns2:t_authorization>",
		"RB/IC=<",
		LAST);

	web_custom_request("AccountLoginRequest", 
		"URL=http://18.212.178.84:8081//accountservice/ws/AccountLoginRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t119.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email></email>" 
						"<loginPassword>{password}</loginPassword>" 
						"<loginUser>{login}</loginUser>" 
					"</AccountLoginRequest></soap:Body></soap:Envelope>",
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");
	
	web_add_header("Authorization",
		"Basic {Authorization}");
	
	web_reg_save_param("SessionId",
		"LB/IC=\"sessionId\":\"",
		"RB/IC=\"",
		LAST);

	web_url("{UserId}", 
		"URL=http://18.212.178.84/order/api/v1/carts/{UserId}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t120.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_think_time(5);

	lr_end_transaction("Login",LR_AUTO);
	
	
	
	
	

	lr_start_transaction("Laptops");
	
	web_reg_find("Text/IC=LAPTOPS",
		LAST);

	web_url("products", 
		"URL=http://18.212.178.84/catalog/api/v1/categories/1/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		LAST);

	web_url("attributes", 
		"URL=http://18.212.178.84/catalog/api/v1/categories/attributes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t122.inf", 
		"Mode=HTML", 
		LAST);

	web_url("category-page.html", 
		"URL=http://18.212.178.84/app/views/category-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t123.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_think_time(5);

	lr_end_transaction("Laptops",LR_AUTO);
	
	
	
	
	
	

	lr_start_transaction("Laptop Selection 1");
	
	web_reg_find("Text/IC=HP Chromebook 14 G1(ENERGY STAR)",
		LAST);

	web_url("9", 
		"URL=http://18.212.178.84/catalog/api/v1/products/9", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		LAST);

	web_url("all_data", 
		"URL=http://18.212.178.84/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products_2", 
		"URL=http://18.212.178.84/catalog/api/v1/categories/1/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		LAST);

	web_url("product-page.html", 
		"URL=http://18.212.178.84/app/views/product-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t127.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"http://18.212.178.84");
	
	web_add_header("Authorization",
		"Basic {Authorization}");

	web_submit_data("414141",
		"Action=http://18.212.178.84/order/api/v1/carts/{UserId}/product/9/color/414141?quantity=1",
		"Method=POST",
		"RecContentType=application/json",
		"Referer=http://18.212.178.84/",
		"Snapshot=t128.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=sessionId", "Value={SessionId}", ENDITEM,
		LAST);
	
	lr_think_time(5);

	lr_end_transaction("Laptop Selection 1",LR_AUTO);

	
	
	
	
	
	

	lr_start_transaction("Check The Cart");
	
	web_reg_find("Text/IC=productsInCart",
		LAST);

	web_add_header("Authorization",
		"Basic {Authorization}");

	web_url("{UserId}_2", 
		"URL=http://18.212.178.84/order/api/v1/carts/{UserId}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t129.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shoppingCart.html", 
		"URL=http://18.212.178.84/app/views/shoppingCart.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t130.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_think_time(5);

	lr_end_transaction("Check The Cart",LR_AUTO);
	
	
	
	
	

	lr_start_transaction("Payment Details");
	
	web_reg_find("Text/IC=<ns2:cityName>{city}</ns2:cityName>",
		LAST);
	
//	web_reg_find("Text/IC=<ns2:safePayUsername>{safepayLogin}</ns2:safePayUsername>",
//		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountByIdRequest");

	web_add_auto_header("Origin", 
		"http://18.212.178.84");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(10);

	web_custom_request("GetAccountByIdRequest", 
		"URL=http://18.212.178.84:8081//accountservice/ws/GetAccountByIdRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t131.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdRequest xmlns=\"com.advantage.online.store.accountservice\">" 
						"<accountId>{UserId}</accountId>" 
						"<base64Token>Basic {Authorization}</base64Token>" 
					"</GetAccountByIdRequest></soap:Body></soap:Envelope>",
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountByIdNewRequest");

	web_custom_request("GetAccountByIdNewRequest", 
		"URL=http://18.212.178.84:8081//accountservice/ws/GetAccountByIdNewRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t132.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdNewRequest xmlns=\"com.advantage.online.store.accountservice\">" 
						"<accountId>{UserId}</accountId>" 
						"<base64Token>Basic {Authorization}</base64Token>" 
					"</GetAccountByIdNewRequest></soap:Body></soap:Envelope>",
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");
	
	web_add_header("Authorization",
		"Basic {Authorization}");

	web_url("{UserId}_3", 
		"URL=http://18.212.178.84/order/api/v1/carts/{UserId}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"http://18.212.178.84");

	web_custom_request("shippingcost", 
		"URL=http://18.212.178.84/order/api/v1/shippingcost/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t134.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"seaddress\":{\"addressLine1\":\"{address}\"," 
								"\"addressLine2\":\"\"," 
								"\"city\":\"{city}\"," 
								"\"country\":\"{country}\"," 
								"\"postalCode\":{postalCode}," 
								"\"state\":{region}}," 
				"\"secustomerName\":\"{firstName} {lastName}\"," 
				"\"secustomerPhone\":\"{phone}\"," 
				"\"senumberOfProducts\":1," 
				"\"setransactionType\":\"SHIPPING_COST\"," 
				"\"sessionId\":\"{SessionId}\"}",
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountPaymentPreferencesRequest");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountPaymentPreferencesRequest", 
		"URL=http://18.212.178.84:8081//accountservice/ws/GetAccountPaymentPreferencesRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t135.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountPaymentPreferencesRequest xmlns=\"com.advantage.online.store.accountservice\">" 
						"<accountId>{UserId}</accountId>" 
						"<base64Token>Basic {Authorization}</base64Token>" 
					"</GetAccountPaymentPreferencesRequest></soap:Body></soap:Envelope>",
		LAST);

	web_revert_auto_header("Origin");

	web_url("orderPayment-page.html", 
		"URL=http://18.212.178.84/app/order/views/orderPayment-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t136.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetCountriesRequest");

	web_add_auto_header("Origin", 
		"http://18.212.178.84");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetCountriesRequest", 
		"URL=http://18.212.178.84:8081//accountservice/ws/GetCountriesRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t137.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>", 
		LAST);

	lr_think_time(20);
	
	lr_end_transaction("Payment Details",LR_AUTO);
	
	
	
	
	
	
	lr_start_transaction("Order Payment");
	
	web_reg_find("Text/IC=ns2:reason>SafePay data updated successfully</ns2:reason>",
		LAST);
	
//	web_reg_find("Text/IC=\"reason\":\"order completed successfully\"",
//		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAddSafePayMethodRequest");

	lr_think_time(10);

	web_custom_request("AddSafePayMethodRequest", 
		"URL=http://18.212.178.84:8081//accountservice/ws/AddSafePayMethodRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t138.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AddSafePayMethodRequest xmlns=\"com.advantage.online.store.accountservice\">" 
				"<safePayUsername>{safepayLogin}</safePayUsername>" 
				"<accountId>{UserId}</accountId>" 
				"<safePayPassword>{safepayPassword}</safePayPassword>" 
				"<base64Token>Basic {Authorization}</base64Token></"
			"AddSafePayMethodRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("X-Requested-With");
	
	web_add_header("Authorization",
		"Basic {Authorization}");

	web_custom_request("{UserId}_4",
		"URL=http://18.212.178.84/order/api/v1/orders/users/{UserId}",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://18.212.178.84/",
		"Snapshot=t139.inf",
		"Mode=HTML",
		"EncType=application/json",
		"Body={\"orderPaymentInformation\":{\"Transaction_AccountNumber\":\"843200971\",\"Transaction_Currency\":\"USD\",\"Transaction_CustomerPhone\":\"{phone}\",\"Transaction_MasterCredit_CVVNumber\":\"\",\"Transaction_MasterCredit_CardNumber\":\"4886\",\"Transaction_MasterCredit_CustomerName\":\"\",\"Transaction_MasterCredit_ExpirationDate\":\"122027\",\"Transaction_PaymentMethod\":\"SafePay\",\"Transaction_ReferenceNumber\":0,\"Transaction_SafePay_Password\":\"{safepayPassword}\",\"Transaction_SafePay_UserName\":\"{safepayLogin}\",\"Transaction_TransactionDate\":\"{date}\",\"Transaction_Type\":\"PAYMENT\"},\"orderShippingInformation\":{\"Shipping_Address_Address\":\"{address}\",\"Shipping_Address_City\":\"{city}\",\"Shipping_Address_CountryCode\":40,\"Shipping_Address_CustomerName\":\"{firstName} {lastName}\",\"Shipping_Address_CustomerPhone\":\"{phone}\",\"Shipping_Address_PostalCode\":{postalCode},\"Shipping_Address_State\":\"{region}\",\"Shipping_Cost\":299.99,\"Shipping_NumberOfProducts\":1,\"Shipping_Trackin"
		"gNumber\":0},\"purchasedProducts\":[{\"hexColor\":\"414141\",\"productId\":9,\"quantity\":1,\"hasWarranty\":false}]}",
		LAST);

	web_add_header("Authorization",
		"Basic {Authorization}");
	
	web_custom_request("{UserId}_5", 
		"URL=http://18.212.178.84/order/api/v1/carts/{UserId}", 
		"Method=DELETE", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t140.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("Order Payment",LR_AUTO);
	
	
	
	
	
	

	lr_end_transaction("03_Buying_A_Laptop",LR_AUTO);

	

	return 0;
}