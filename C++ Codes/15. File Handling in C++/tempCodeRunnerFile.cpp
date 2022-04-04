fstream st; // step 1: Creating object of ofstream class
	st.open("abc.txt",ios::out);   // Step 2: open a file
  
    string ch="ProgramingLab";
    
    st <<ch;  // Step 4: writing on a file
	
    st.close(); // Step 5: Closing file
    
    system("pause");