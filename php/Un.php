#!/usr/bin/env php
<?php

    for ($i = 0; $i < 10; $i++ ) {
        print( "The number is:$i \n");
    }

    $array = [ 1,2,3,4,5,6,7,8,9];
    
    $prime = [ 2, 3, 5, 7];
    
    $prime2 = 2;
    
    foreach( $array as $prime2 ){
        if ( $array[$prime2] == 3 )
        printf ("Prime: $array[$prime2]\n");
    }
    
    foreach( $array as $key => $prime2 ){
        echo "{$key} => {$prime2}\n";
     //   print_r($array);
    }

    unset($prime2);

    echo "$prime2 <br>";
    
?>