    string addBinary(string a, string b) {
        int lungime = a.size();
        int suma = 0;
        int carry = 0;
        int difference = 0;
        string result = "";
        if (a.size() != b.size()) {
            if (a.size() > b.size()) {
                lungime = a.size();
                difference = a.size() - b.size();
                for (int i = 1; i <= difference; i++)
                {
                    b.insert(0, "0");


                }
            }
            else
            {
                lungime = b.size();
                difference = b.size() - a.size();
                for (int i = 1; i <= difference; i++)
                {
                    a.insert(0, "0");


                }
            }
        }
        
        for (int i = lungime-1; i >= 0; i--)
        {
            
            int c, d;
            if (a[i] == '0') {
                c = 0;
            }
            else
            {
                c = 1;
            }
            if (b[i] == '0') {
				d = 0;
			}
            else
            {
				d = 1;
			}   
            suma += (c + d + carry);
            if (suma  == 2) {
                result = result + '0';
                if (c != 0 && d != 0) {
                    carry = 1;
                }
                suma = 0;
            }
            else if(suma==1){
                result = result + '1';
                carry = 0;
                suma = 0;
            }
            else if (suma == 3) {
				result = result + '1';
				carry = 1;
				suma = 0;
			}
            else if (suma == 0) {
				result = result + '0';
				carry = 0;
				suma = 0;
			}
        }
        if (carry != 0) {
            result = result + '1';
        }
        reverse(result.begin(), result.end());
        return result;
    }
