$(document).ready(function()
{
    $(".bd").click(function()
    {
        setInterval(function()
        {
            var d=new Date();
            var hours=d.getHours();
            var cTime=d.toLocaleTimeString();
            $("#clock").html(cTime);
        },1000)
    });
    
});
$(document).ready(function()
{
    $(".bd").click(function()
    {
        setInterval(function()
        {
            if(sec==0)
            {
                sec=59;
                min--;
            }
            if(min>=0 )
            {
                $("#timer").html(min+":"+sec);
                if(sec>=10)
                {
                    sec--;
                }
                else if(sec>=0)
                {
                    sec--;
                    $("#timer").html(min+":0"+sec);
                    if(sec==0 && min==0)
                    {
                        window.location.href="timesUp.html"
                    }
                }
            }
        },1000)
        
    })

});
var min=5;
var sec=00;
$(document).ready(function()
{
    $("#uName").focus(function()
    {
        $("#uName").css("background-color","green");
    });
    $("#uName").blur(function()
    {
        $("#uName").css("background-color","blue");
    });
    $("#email").focus(function()
    {
        $("#email").css("background-color","green");
    });
    $("#email").blur(function()
    {
        $("#email").css("background-color","blue");
    });
    $("#PhoneNumber").focus(function()
    {
        $("#PhoneNumber").css("background-color","green");
    });
    $("#PhoneNumber").blur(function()
    {
        $("#PhoneNumber").css("background-color","blue");
    });
    $("#pwd").focus(function()
    {
        $("#pwd").css("background-color","green");
    });
    $("#pwd").blur(function()
    {
        $("#pwd").css("background-color","blue");
    });
});
$(document).ready(function()
{
    
    $("#uName").keypress(function(e)
    {
        var keyCode = e.which;
        if(keyCode>=65 && keyCode<=90)
        {
            return true;
        }
        else
        {
           alert("Only Capital Characters Allowed");
           return false; 
        }
    })
    $("#PhoneNumber").keypress(function(e)
    {
        // alert(e.which);
        var key=e.which;
        if(key>=48 && key<=57)
        {
            return true;
        }
        else
        {
            alert("Only Numbers Allowed");
            return false;
        }
    })
    $("#eye-slash-btn").click(function()
    {
        $("#pwd").attr("type","text");
        $("#eye-slash-btn").hide();
        $("#eye-btn").show();
    });
    $("#eye-btn").click(function()
    {
        $("#pwd").attr("type","password");
        $("#eye-slash-btn").show();
        $("#eye-btn").hide();
    })
        
    $(".validation").on("keyup  change",function()
    {
        // alert("running")
        var Name = $("#uName").val();
        var Email = $("#email").val();
        var Phone = $("#PhoneNumber").val();
        var Password = $("#pwd").val();
        var genlen=$("input[name='gender']").length;
        var Gender= $("[name=gender");
        var hobbylen=$("input[name='hobbies']").length;
        var Hobby= $("[name=hobbies]");
        var City = $("#city").val();
        // alert(genlen);
        var count=0;
        var hbcount=0;
        var result=true;
        if(Name=="")
        {
            $("#nameErr").html("Please Enter Name");
            result=false;
        }
        else
        {
            $("#nameErr").html("");
            
        }
        if(Email=="")
        {
            $("#emailErr").html("Please Enter Email");
            result=false;
        }
        else
        {
            $("#emailErr").html("");
            
        }
        if(Phone=="")
        {
            $("#phoneErr").html("Please Enter Phone Number");
            result=false;
        }
        else if(Phone.length<10 || Phone.length>10 )
        {
            $("#phoneErr").html("Invalid Phone Number");
            result=false;
        }
        else
        {
            $("#phoneErr").html("Correct Phone Number");
            
        }
        if(Password=="")
        {
            $("#pwdErr").html("Please Enter Password");
            result=false;
        }
        else if(Password.length<8)
        {
            $("#pwdErr").html("Weak Password");
        }
        else
        {
            $("#pwdErr").html("Strong Password");
        }

        for(var i=0;i<genlen;i++)
        {
            if(Gender[i].checked==true)
            {
                // alert("gen if")
            }
            else
            {
                // alert("gen else")
                count++;  
            }
        }
        if(count==genlen)
        {
            $("#genderErr").html("Please Select Gender");
            result=false;
        }
        else
        {
            $("#genderErr").html("");
        }
        for(var j=0;j<hobbylen;j++)
        {
            if(Hobby[j].checked==true)
            {
                // alert("if hobby");
            }
            else
            {
                // alert("else hoby");
                hbcount++;
            }
        }
        if(hbcount==hobbylen)
        {
            $("#hobbiesErr").html("Please Select Hobby");
            result=false;
        }
        else
        {
            $("#hobbiesErr").html("");
        }
        if(City=="")
        {
            $("#cityErr").html("Please Select City");
            result=false;
        }
        else
        {
            $("#cityErr").html("");
        }
        if(result==true)
        {
            $("#btn").prop("disabled",false);
            return result;
        }
    })
    
});

