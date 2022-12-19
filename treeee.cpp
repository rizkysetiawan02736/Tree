#include <iostream>
using namespace std;

// node
struct Node{
  char label;
  Node *left, *right, *parent;
};

// variabel pointer global
Node *root, *newNode;

// create New Tree
void createNewTree( char label )
{

  if( root != NULL )
    cout << "\nTree sudah dibuat" << endl;
  else{
    root = new Node();
    root->label = label;
    root->left = NULL;
    root->right = NULL;
    root->parent = NULL;
    cout << "\nNode " << label << " berhasil dibuat menjadi root." << endl;
  }

}

// insert Left
Node *insertLeft( char label, Node *node )
{
  if( root == NULL ){
    cout << "\nBuat tree terlebih dahulu!!" << endl;
    return NULL;
  }else{
    // cek apakah anak kiri ada atau tidak
    if( node->left != NULL ){
      // kalau ada
      cout << "\nNode "<< node->label << " sudah ada anak kiri!!" << endl;
      return NULL;
    }else{
      // kalau tidak ada
      newNode = new Node();
      newNode->label = label;
      newNode->left = NULL;
      newNode->right = NULL;
      newNode->parent = node;
      node->left = newNode;
      cout << "\nNode " << label << " berhasil ditambahkan ke anak kiri " << newNode->parent->label << endl;
      return newNode;
    }

  }
}

// insert right
Node *insertRight( char label, Node *node )
{
  if( root == NULL ){
    cout << "\nBuat tree terlebih dahulu!!" << endl;
    return NULL;
  }else{
    // cek apakah anak kiri ada atau tidak
    if( node->right != NULL ){
      // kalau ada
      cout << "\nNode " << node->label << " sudah ada anak kanan!!" << endl;
      return NULL;
    }else{
      // kalau tidak ada
      newNode = new Node();
      newNode->label = label;
      newNode->left = NULL;
      newNode->right = NULL;
      newNode->parent = node;
      node->right = newNode;
      cout << "\nNode " << label << " berhasil ditambahkan ke anak kanan " << newNode->parent->label << endl;
      return newNode;
    }

  }
}

// Empty
bool empty()
{
  if( root == NULL )
    return true;
  else
    return false;
}




// Tranversal
// preOrder
void preOrder( Node *node = root )
{

  if( !root )
    cout << "\nBuat tree terlebih dahulu!!" << endl;
  else{

    if( node != NULL ){
      cout << node->label << ", ";
      preOrder(node->left);
      preOrder(node->right);
    }

  }

}

// inOrder
void inOrder( Node *node = root )
{

  if( !root )
    cout << "\nBuat tree terlebih dahulu!!" << endl;
  else{

    if( node != NULL ){
      inOrder(node->left);
      cout << node->label << ", ";
      inOrder(node->right);
    }

  }

}

// postOrder
void postOrder( Node *node = root )
{

  if( !root )
    cout << "\nBuat tree terlebih dahulu!!" << endl;
  else{

    if( node != NULL ){
      postOrder(node->left);
      postOrder(node->right);
      cout << node->label << ", ";
    }

  }

}





int main()
{
    int pilih;
    char label;

    do {

    cout<<"1. Create"<<endl;
    cout<<"2. Tambah kiri"<<endl;
    cout<<"3. Tambah kanan"<<endl;
    cout<<"4. preorder"<<endl;
    cout<<"5. inorder"<<endl;
    cout<<"6. postorder"<<endl;
    cout<<"Pilih Menu :";
    cin>>pilih;

    switch (pilih){
        case 1 :
        cout<<"huruf :"<<endl;
        cin>>label;
        createNewTree(label);
        break;

        case 2 :
        cout<<"huruf :"<<endl;
        cin>>label;
        insertLeft(label,root);
        break;

        case 3 :
        cout<<"huruf :"<<endl;
        cin>>label;
        insertRight(label,root);
        break;

        case 4 :
        preOrder(root);
        cout << "\n" << endl;  
        break;
        

        case 5 : 
        inOrder(root);
        cout << "\n" << endl;  
        break;

        case 6 : 
        postOrder(root);
        cout << "\n" << endl;  
        break;

        case 9 :
        return 0;

        default : 
        cout<<"Pilihan Tidak Tersedia!!!";
        break;
    }
    }while(pilih!=9);

//   createNewTree('A');

//   Node *nodeB, *nodeC, *nodeD, *nodeE, *nodeF, *nodeG, *nodeH, *nodeI, *nodeJ;

//   nodeB = insertLeft('B', root);
//   nodeC = insertRight('C', root);
//   nodeD = insertLeft('D', nodeB);
//   nodeE = insertRight('E', nodeB);
//   nodeF = insertLeft('F', nodeC);
//   nodeG = insertLeft('G', nodeE);
//   nodeH = insertRight('H', nodeE);
//   nodeI = insertLeft('I', nodeG);
//   nodeJ = insertRight('J', nodeG);

//   cout << "Tree empty? : " << empty() << endl;


//   cout << "\nPreOrder :" << endl;
//   preOrder(nodeE);
//   cout << "\n" << endl;
//   cout << "InOrder :" << endl;
//   inOrder(nodeE);
//   cout << "\n" << endl;
//   cout << "PostOrder :" << endl;
//   postOrder(nodeE);
//   cout << "\n" << endl;  













}