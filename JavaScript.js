var counter = 1;
function fun1()
{
    
    var newid = counter + "s";
    var notesid = document.getElementById("notesid");
    var notes = document.getElementById("notes").value;
    if (notes == "")
    {
        alert("empty");
    }
    else{
        var newnote = document.createElement("div");
        newnote.textContent = notes;
        newnote.setAttribute("id", newid);
        newnote.setAttribute("class", "newnotescl");


        var delbtn = document.createElement("button");
        delbtn.textContent = "x";
        delbtn.setAttribute("id", newid);
        delbtn.setAttribute("class", "newbtn");
        delbtn.setAttribute("onclick", "dele(this.id)");

        newnote.appendChild(delbtn);
        notesid.appendChild(newnote);
        counter++;
    }

}

function dele(x)
{
    var notesid = document.getElementById("notesid");
    var delno = document.getElementById(x);

    notesid.removeChild(delno);
}