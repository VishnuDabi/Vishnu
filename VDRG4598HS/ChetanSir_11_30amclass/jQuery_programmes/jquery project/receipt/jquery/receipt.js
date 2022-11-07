$(document).ready(function()
{
    $("#gst").change(function()
    {   
        var studentName=$("#stName").val();
        var COURSE= $("#course").val();
        var FEES_VAL = $("#fee").val();
        var FEES=parseInt(FEES_VAL);
        var DATE = $("#date_val").val();
        var result=true;
        if(DATE=="")
        {
            alert("Please Select Date");
            result=false;
        }
        else if(studentName=="")
        {
            alert("PLease Enter Student Name");
            result=false;
        }
        else if(COURSE=="")
        {
            alert("Please Select Course");
            result=false;
        }
        else if(FEES_VAL=="")
        {
            alert("Please Enter Fees");
            result=false;
        }
        else
        {
            var gst_rate = parseInt($("#gst").val());
            var gstRate=(FEES*gst_rate)/100;
            var cgstRate=(gstRate/2);
            var sgstRate=(gstRate/2);
            var totalAmount=parseInt((FEES+gstRate+cgstRate+cgstRate));
            $("#gst_cost").val(gstRate);
            $("#cgst_cost").val(cgstRate);
            $("#sgst_cost").val(sgstRate);
            $("#total_amount").val(totalAmount);
            $(".btn").prop("disabled",false);
        }
        if(result==true)
        {
            $(".btn").prop("disabled",false);
            return result;
        }
    });
    $(".btn").click(function()
    {
       print();
    });
});