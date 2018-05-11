	// Add your code here

  // Constructor
  Difference(vector<int> v) : elements(v) {}

  // Get's the maximun distance
  void computeDifference(){
    int size = elements.size();
    int min = elements[0], max = elements[0];
    for (size_t i = 0; i < size; i++) {
      if (elements[i] < min){
        min = elements[i];
      }
      if (elements[i] > max){
        max = elements[i];
      }
    }
    maximumDifference = max - min;
  }
