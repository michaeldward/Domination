-- https://www.hackerrank.com/challenges/fp-hello-world-n-times

import Control.Applicative
import Control.Monad
import System.IO

-- prints "Hello World" n times
printHelloWorld 0 = return()
printHelloWorld n = 
    do
    putStrLn "Hello World"
    printHelloWorld (n - 1)


main :: IO ()
main = do
    n_temp <- getLine
    let n = read n_temp :: Int
    printHelloWorld n

getMultipleLines :: Int -> IO [String]

getMultipleLines n
    | n <= 0 = return []
    | otherwise = do          
        x <- getLine         
        xs <- getMultipleLines (n-1)    
        let ret = (x:xs)    
        return ret          


