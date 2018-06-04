// f: takes in an integer (delim) and a list(arr). The funciton will
// return a copy of arr but only with values that are less than delim.
// List's filter method is used to accomplish this.
def f(delim:Int,arr:List[Int]):List[Int] = arr.filter(_ < delim)
