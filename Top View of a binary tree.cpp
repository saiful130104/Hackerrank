void topView(Node * root) {
        map<int,bool>ck;    //to check the level map is updated or not
        map<int,int>mp;     //mapping the level with data
        map<Node *, int>mnp;    //mapping the node with its level
        mnp[root] = 0;      //mapping root node with level 0
        ck[0]=1;
        mp[0] = root->data;     //mapping level 0 with node data
        queue<Node *>q;     //holds all the node level order
        q.push(root);       //enqueue with root node
        while(!q.empty())
        {
            root = q.front();
            q.pop();
            Node * lftNode=root->left, * rgtNode=root->right;
            if(lftNode!=NULL)
            {
                q.push(lftNode);
                mnp[lftNode] = mnp[root]-1; //left node level is rootLevel - 1
                if(!ck[mnp[lftNode]])
                    ck[mnp[lftNode]] = 1 ,mp[mnp[lftNode]]=lftNode->data;
            }
            if (rgtNode != NULL) {
              q.push(rgtNode);
              mnp[rgtNode] = mnp[root] + 1; //right node level is rootLevel+1
              if (!ck[mnp[rgtNode]])
                ck[mnp[rgtNode]] = 1, mp[mnp[rgtNode]] = rgtNode->data;
            }
        }
        map<int,int>:: iterator it;
        for(it = mp.begin(); it!=mp.end();it++)
            cout<<it->second<<" ";  //print out the vertical order node

    }