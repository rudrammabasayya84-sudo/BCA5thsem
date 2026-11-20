<?php 
$filename = "myfile.txt"; 
$file = fopen($filename, "w"); 
if($file) 
{  
$text = "Welcome to PHP Programming.\n"; 
$text .= "This is a file handling program.";  
fwrite($file, $text); 
echo "File created and data written successfully.";  
fclose($file); 
}
else 
{ 
echo "Unable to create file.";
}
?>