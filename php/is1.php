#!/usr/bin/env php
<?php

    $mas = [];
    
    $mas["I"] = true;
    
    $mas["love"] = true;
    
    $mas["you"] = true;
    
    $word = "love";
    
    if (isset($mas[$word])){
        print "yes\n";
    }
    
    //foreach( $mas as $i){
        print_r($mas);
    //}
?>