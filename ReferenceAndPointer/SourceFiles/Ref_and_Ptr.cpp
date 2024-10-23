#include "Ref_and_Ptr.h"
void Ref_and_Ptr::ref_ptr() {
    string a = "manav";
    char* ptr = &a[0];

    for (int i = 0; i < a.length(); i++) {
        cout << i << *(ptr + i) << endl;
    }
    
}
