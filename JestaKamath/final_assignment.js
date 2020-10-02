function validateFirstName(){ //test input for 2-15 allowed characters
	var fName= document.getElementById("firstName").value;
	var rel = /^[a-zA-z\s\'\-]{2,15}$/;
	
	if(rel.test(fName)) { //if input is valid, update page to show successful entry
		document.getElementById("firstNamePrompt").style.color = "green";
		document.getElementById("firstNamePrompt").innerHTML = "<strong>valid</strong>"
		return true;
	}
	else{ // if input is invalid, update page to prompt for new input
		document.getElementById("firstNamePrompt").style.color = "Red";
		document.getElementById("firstNamePrompt").innerHTML = "<strong>Enter 2-15 characters</strong>"
		return false;
	}
}

function validateLastName(){ //test input for 2-15 allowed characters
	var gName= document.getElementById("lastName").value;
	var re2 = /^[a-zA-z\s\'\-]{2,15}$/;
	
	if(re2.test(gName)) { //if input is valid, update page to show successful entry
		document.getElementById("lastNamePrompt").style.color = "green";
		document.getElementById("lastNamePrompt").innerHTML = "<strong>valid</strong>"
		return true;
	}
	else{ // if input is invalid, update page to prompt for new input
		document.getElementById("lastNamePrompt").style.color = "Red";
		document.getElementById("lastNamePrompt").innerHTML = "<strong>Enter 2-15 characters</strong>"
		return false;
	}
}

function validatePhoneNumber(){ //test xxx-xxx-xxxx
	var pName= document.getElementById("phone").value;
	var re3 = /^\d{3}-\d{3}-\d{4}$/;
	
	if(re3.test(pName)) { //if input is valid
		document.getElementById("phonePrompt").style.color = "green";
		document.getElementById("phonePrompt").innerHTML = "<strong>valid</strong>"
		return true;
	}
	else{ // if input is invalid, update page to prompt for new input
		document.getElementById("phonePrompt").style.color = "Red";
		document.getElementById("phonePrompt").innerHTML = "<strong>Use xxx-xxx-xxxx format</strong>"
		return false;
	}
}

function DisplayFormValues()
{
	var str = '';
	var elem = document.getElementById('widgetForm').elements;
	for(var i = 0; i < elem.length; i++)
	{
		str += "<b>Type: </b>" + elem[i].type + "&nbsp&nbsp";
		str += "<b>Name: </b>" + elem[i].name + "&nbsp;&nbsp;";
		str += "<b>Value: </b><i>" + elem[i].value + "</i>&nbsp;&nbsp;";
		str += "<BR>";
	}
	document.getElementById('formElements').innerHTML = str;
}

function validateForm(){ //used to check if the passwords match
	var pass1 = document.getElementById("Password1").value;
	var pass2 = document.getElementById("Password2").value;
	
	if (pass1 == pass2) // if the passwords match then say passwords match
	{
		alert("Passwords match");
		return true;
	}
	else  //else say they  dont match
	{
		alert("Passwords do not match");
		return false;
	}
	return false;
}
