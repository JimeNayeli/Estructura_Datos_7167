#pragma once

class Vector{
	
	public:
		
		int x;
		int y;
		bool operator== (Vector v) {
    		return ((v.x == x) && (v.y == y))? true: false;
		}
	private:	
};
