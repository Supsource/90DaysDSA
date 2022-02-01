class Solution {
    Node* clone(unordered_map<int, Node*> &copy, Node* n) {
		// if copy of this node exists, simply return it
        if (copy[n->val]) return copy[n->val];
        
		// Step 1: Create a copy of this node
        copy[n->val] = new Node(n->val);
		
		// Step 2: Create copies of neighbors using "clone" and populate them
        for (auto &x : n->neighbors) {
            auto &neighbors_copy = copy[n->val]->neighbors;
			neighbors_copy.push_back( clone(copy, x) );
        }
		
		// Finally, return the copy of this node
        return copy[n->val];
    }
public:
    Node* cloneGraph(Node* node) {
        if (!node) return node;
        
		// hash table to store copies of nodes
        unordered_map<int, Node*> copy;
		
        return clone(copy, node);
    }
};