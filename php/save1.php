#!/usr/bin/env php
<?php
    
    $table=[];
    $dic='small';
    
    
    foreach(file($dic) as $word){
        $table[chop($word)] = true; 
        $size++;
        
    }
    
        print_r($table);
    

    echo " $size <br />\n"
?>