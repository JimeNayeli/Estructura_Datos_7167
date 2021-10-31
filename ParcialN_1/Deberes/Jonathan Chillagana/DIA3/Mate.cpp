template <typename T>
inline T const& Max (T const& u, T const& i) 
{ 
    return u < i ? i:u; 
} 