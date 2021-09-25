class ProductOfNumbers {
public:
    vector <int> prod;
    ProductOfNumbers() {
        prod = {1};
    }
    
    void add(int num) {
        if(num){
         prod.push_back(prod.back()*num);
        }
        else{
            prod={1};
        }
    }
    
    int getProduct(int k) {
        int n=prod.size();
        return (n-1-k>=0)?(prod.back()/prod[n-k-1]):0;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */