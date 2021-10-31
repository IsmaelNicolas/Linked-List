#if !defined(LIST_HPP)
#define LIST_HPP

#include "Includes.hpp"
#define log(val) std::cout<<val<<std::endl;
#define log_2(val_1,val_2) std::cout<<val_1<<val_2<<std::endl;
#define console_log(val) std::cout<<val;
#define console_log_2(val,val_1) std::cout<<val<<val_1;


#pragma region Node


template<class T>
class Node
{
public:

    T data;
    Node* next;
    Node();
    Node(T); 
    friend std::ostream &operator <<(std::ostream&out,const Node<T> &node)
    {out<<node.data;return out;}
};

template<class T>
Node<T>::Node()
{
    this->data = nullptr;
    this->next = nullptr;
}
template<typename T>
Node<T>::Node(T data)
{
    this->data = data;
    this->next = nullptr;
}

#pragma endregion //NODE

#pragma region List
namespace List
{
#pragma region Declaration

    template<class R>
    class ordered
    {
    private:
        Node<R> object;
        int size;
        
    public:
        ordered();
        bool insert(Node<R>);
        bool remove(Node<R>);
        bool clean(Node<R>);
        bool is_empy();
        ~ordered();
    };

    template <typename T>
    class simple
    {
    private:
        Node<T>* object;
        int size;
    
    public:
        simple();
        simple(Node<T>);
        void print_list();
        bool push_back(T);
        bool push_font(Node<T>);
        bool push_after_node(Node<T>,Node<T>);
        bool pop_front(Node<T>);
        bool pop_back(Node<T>);
        bool remplace(Node<T>,Node<T>);
        bool clean();
        bool is_empy();
        int get_size();

        friend std::ostream &operator <<(std::ostream&out,const List::simple<T> &list)
        {
            if (list.size == 0)
            {
                out<<"[ empy ]";
                return out;
            }else
            {
                Node<T> *tmp = list.object; 
                //out<<std::endl;
                out<<"[";
                while (tmp->next != NULL)
                {
                    out<<*tmp<<",";
                    tmp = tmp->next;
                }
                out<<tmp->data<<"]";
                return out;
            }
            
        }

    };

#pragma endregion //DECLARATION

#pragma region Implementation

template<class T>
simple<T>::simple() : object(NULL),size(0){}

template<class T>
bool simple<T>::is_empy() {return this->size==0? true:false;}

template<class T>
int simple<T>::get_size(){return this->size;}

template<class T>
void simple<T>::print_list()
{
    if(size == 0){
        log("Lista vacia");
    }else{
        Node<T> *tmp = this->object; 
        log("Elementos:")
        
        while (tmp->next != NULL)
        {
            console_log_2(*tmp,"->");
            tmp = tmp->next;
        }
            log(tmp->data);
    
    }

}

template<class T>
bool simple<T>::push_back(T item)
{
    Node<T> *tmp = new  Node<T>(item); 
    if(this->size == 0 )
    {   
        try
        {   
            this->object=tmp;
            this->size += 1;
            return true;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            return false;
        }   
    }
    else
    {
        try
        {
            Node<T> * tmp_1 = this->object;
            while (tmp_1->next != NULL)
            {
                tmp_1 = tmp_1->next;
            }
            tmp_1->next = tmp;
            this->size += 1;

        return true;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            return false;
        }
        
        
    }
    

}

template<class T>
bool simple<T>::clean()
{
    Node<T> * tmp_1 = this->object;
    Node<T> * tmp_2;

    while (tmp_1->next != NULL)
    {
        tmp_2 = tmp_1;
        tmp_1 = tmp_1->next;
        tmp_2 = NULL;
    }
    this->size = 0; 
    return true;
}

#pragma endregion //IMPLEMENTATION

}
#pragma endregion ///LIST

#endif // LIST_HPP
