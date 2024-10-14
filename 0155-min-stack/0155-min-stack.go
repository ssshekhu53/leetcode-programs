type MinStack struct {
    min int
    stack []int
    n int
}


func Constructor() MinStack {
    return MinStack{min: math.MaxInt, stack: make([]int, 0)}
}


func (this *MinStack) Push(val int)  {
    if this.n == 0 {
        this.min = val
    }

    if val < this.min {
        tempMin := val
        val = 2 * val - this.min
        this.min = tempMin
    }

    this.stack = append(this.stack, val)
    this.n += 1
}


func (this *MinStack) Pop()  {
    if this.n == 0 {
        return
    }

    this.n -= 1
    val := this.stack[this.n]

    if val < this.min {
        this.min = 2 * this.min - val
    }

    this.stack = this.stack[0:this.n]
}


func (this *MinStack) Top() int {
    if this.n == 0 {
        return -1
    }

    val := this.stack[this.n-1]

    if val < this.min {
        return this.min
    } 

    return val
}


func (this *MinStack) GetMin() int {
    return this.min
}


/**
 * Your MinStack object will be instantiated and called as such:
 * obj := Constructor();
 * obj.Push(val);
 * obj.Pop();
 * param_3 := obj.Top();
 * param_4 := obj.GetMin();
 */