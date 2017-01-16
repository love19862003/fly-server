// lua_tinker.h
//
// LuaTinker - Simple and light C++ wrapper for Lua.
//
// Copyright (c) 2005-2007 Kwon-il Lee (zupet@hitel.net)
// 
// please check Licence.txt file for licence and legal issues. 

#if !defined(_LUA_TINKER_H_)
#define _LUA_TINKER_H_

#include <new>
#include <stdint.h>
#include <string.h>
#include <lua.hpp>
#include <stdio.h>
#include <typeinfo>
#include <memory>
#include <assert.h>

namespace lua_tinker
{
    // init LuaTinker
    //void    init(lua_State *L);

    //void    init_s64(lua_State *L);
    //void    init_u64(lua_State *L);

    // string-buffer excution
    const  char* version();

    void    dofile(lua_State *L, const char *filename);
    void    dostring(lua_State *L, const char* buff);
    void    dobuffer(lua_State *L, const char* buff, size_t sz);
    void    openLuaLib(lua_State* L, const char* name, lua_CFunction fun);
    void    openLuaLibs(lua_State* L);
    
    // debug helpers
    void    enum_stack(lua_State *L);
    int     on_error(lua_State *L);
    void    print_error(lua_State *L, const char* fmt, ...);

    // class helper
    int meta_get(lua_State *L);
    int meta_set(lua_State *L);
    void push_meta(lua_State *L, const char* name);

    // dynamic type extention
    struct lua_value
    {
        virtual void to_lua(lua_State *L) = 0;
    };

    // type trait
    template<typename T> struct class_name;
    struct table;
    struct nil;

    // �����ڼ��if�����C��true����A���ͣ�false����B����
    template<bool C, typename A, typename B> struct if_ {};
    template<typename A, typename B>        struct if_<true, A, B> { typedef A type; };
    template<typename A, typename B>        struct if_<false, A, B> { typedef B type; };

    // �ж��Ƿ���ָ��
    template<typename A>
    struct is_ptr { static const bool value = false; };
    template<typename A>
    struct is_ptr<A*> { static const bool value = true; };

    // �ж��Ƿ�������
    template<typename A>
    struct is_ref { static const bool value = false; };
    template<typename A>
    struct is_ref<A&> { static const bool value = true; };

    // �Ƴ�const
    template<typename A>
    struct remove_const { typedef A type; };
    template<typename A>
    struct remove_const<const A> { typedef A type; };

    // ��ȡ�������� ָ���Լ�����
    template<typename A>
    struct base_type { typedef A type; };
    template<typename A>
    struct base_type<A*> { typedef A type; };
    template<typename A>
    struct base_type<A&> { typedef A type; };

    // ��ȡ������� class A;
    // class_type<A*>::type a_inst;
    // class_type<A&>::type a_inst;
    // class_type<const A*>::type a_inst;
    // class_type<const A&>::type a_inst;
    
    // ��������������
    template<typename A>
    struct class_type { typedef typename remove_const<typename base_type<A>::type>::type type; };
    
    // �ж��Ƿ��Ƕ���
    template<typename A>
    struct is_obj { static const bool value = true; };
    template<> struct is_obj<char>                  { static const bool value = false; };
    template<> struct is_obj<unsigned char>         { static const bool value = false; };
    template<> struct is_obj<short>                 { static const bool value = false; };
    template<> struct is_obj<unsigned short>        { static const bool value = false; };
    template<> struct is_obj<long>                  { static const bool value = false; };
    template<> struct is_obj<unsigned long>         { static const bool value = false; };
    template<> struct is_obj<int>                   { static const bool value = false; };
    template<> struct is_obj<unsigned int>          { static const bool value = false; };
    template<> struct is_obj<float>                 { static const bool value = false; };
    template<> struct is_obj<double>                { static const bool value = false; };
    template<> struct is_obj<char*>                 { static const bool value = false; };
    template<> struct is_obj<const char*>           { static const bool value = false; };
    template<> struct is_obj<bool>                  { static const bool value = false; };
    template<> struct is_obj<lua_value*>            { static const bool value = false; };
    template<> struct is_obj<long long>             { static const bool value = false; };
    template<> struct is_obj<unsigned long long>    { static const bool value = false; };
    template<> struct is_obj<table>                 { static const bool value = false; };
    template<> struct is_obj<nil>                   { static const bool value = false; };

    /////////////////////////////////
    // �������� sizeof(no_type) == 1  sizeof(yes_type) == 2
    enum { no = 1, yes = 2 }; 
    typedef char (& no_type )[no]; 
    typedef char (& yes_type)[yes]; 

    // int_conv_type �ṹ�壬���������Ĺ��캯������Ҫ����һ��int����
    struct int_conv_type { int_conv_type(int); }; 

    // ö�ٿ�����ʽת��Ϊint
    // �����int���;ͻ���ʽת��Ϊint_conv_type������yes_type��������no_type
    no_type int_conv_tester (...); 
    yes_type int_conv_tester (int_conv_type); 

    // ����ö�����ͷ���yes_type
    // enum XXX xxx;
    // sizeof(vfnd_ptr_tester(add_ptr(xxx))) == sizeof(yes_type)
    no_type vfnd_ptr_tester (const volatile char *); 
    no_type vfnd_ptr_tester (const volatile short *); 
    no_type vfnd_ptr_tester (const volatile int *); 
    no_type vfnd_ptr_tester (const volatile long *); 
    no_type vfnd_ptr_tester (const volatile double *); 
    no_type vfnd_ptr_tester (const volatile float *); 
    no_type vfnd_ptr_tester (const volatile bool *); 
    yes_type vfnd_ptr_tester (const volatile void *); 

    // ��ȡָ������
    template <typename T> T* add_ptr(T&); 

    // bool����ת��Ϊyes_type ���� no_type
    template <bool C> struct bool_to_yesno { typedef no_type type; }; 
    template <> struct bool_to_yesno<true> { typedef yes_type type; }; 

    // �ж��Ƿ���ö�ٱ���
    template <typename T> 
    struct is_enum 
    { 
        static T arg; 
        static const bool value = ( (sizeof(int_conv_tester(arg)) == sizeof(yes_type)) && (sizeof(vfnd_ptr_tester(add_ptr(arg))) == sizeof(yes_type)) ); 
    }; 
    /////////////////////////////////

    // from lua
    // �������ת��T����
    template<typename T>
    struct void2val { static T invoke(void* input){ return *(T*)input; } };
    // �������ת��T����ָ��
    template<typename T>
    struct void2ptr { static T* invoke(void* input){ return (T*)input; } };
    // �������ת��T��������
    template<typename T>
    struct void2ref { static T& invoke(void* input){ return *(T*)input; } };

    // ���������ptrת����T T* ����T&
    template<typename T>  
    struct void2type
    {
        static T invoke(void* ptr)
        {
            return  if_<is_ptr<T>::value
                        ,void2ptr<typename base_type<T>::type>
                        ,typename if_<is_ref<T>::value
                            ,void2ref<typename base_type<T>::type>
                            ,void2val<typename base_type<T>::type>
                        >::type
                    >::type::invoke(ptr);
        }
    };

    // �洢ָ�����
    struct user
    {
        user(void* p) : m_p(p) {}
        virtual ~user() {}
        void* m_p;
    };

    // ��luaջ��������userdataת��ΪT T* T&
    template<typename T>  
    struct user2type { static T invoke(lua_State *L, int index) { return void2type<T>::invoke(lua_touserdata(L, index)); } };

    // ��luaջ��������numberת��ΪT T* T&
    // TΪ��������
    template<typename T>
    struct lua2enum { static T invoke(lua_State *L, int index) { return (T)(int)lua_tonumber(L, index); } };

    // ��luaջ��������userdataת��ΪT T* T&
    // ��userdata����
    template<typename T>
    struct lua2object
    { 
        static T invoke(lua_State *L, int index) 
        { 
            if(!lua_isuserdata(L,index))
            {
                lua_pushstring(L, "no class at first argument. (forgot ':' expression ?)");
                lua_error(L);
            }
            return void2type<T>::invoke(user2type<user*>::invoke(L,index)->m_p); 
        } 
    };

    // ��luaջ��������ö��ֵ����userdataת��Ϊ���Ӧ������
    template<typename T>
    T lua2type(lua_State *L, int index)
    {
        return  if_<is_enum<T>::value
                    ,lua2enum<T>
                    ,lua2object<T> 
                >::type::invoke(L, index);
    }

    // valת����user
    template<typename T>
    struct val2user : user
    {
        //val2user() : user(new T) {}

        template<typename ... Args>
        val2user(Args ... args) : user(new T(args...)) {}

//         template<typename T1, typename T2>
//         val2user(T1 t1, T2 t2) : user(new T(t1, t2)) {}
// 
//         template<typename T1, typename T2, typename T3>
//         val2user(T1 t1, T2 t2, T3 t3) : user(new T(t1, t2, t3)) {}
// 
//         template<typename T1, typename T2, typename T3, typename T4>
//         val2user(T1 t1, T2 t2, T3 t3, T4 t4) : user(new T(t1, t2, t3,t4)) {}
// 
//         template<typename T1, typename T2, typename T3, typename T4, typename T5>
//         val2user(T1 t1, T2 t2, T3 t3, T4 t4, T5 t5) : user(new T(t1, t2, t3,t4,t5)) {}

        // ֻ��lua����new��C++���Ϸ����ڴ�Żᱻ__gc
        ~val2user() { delete ((T*)m_p); }
    };

    // ptrת����user
    template<typename T>
    struct ptr2user : user
    {
#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"

#endif
        // ָ�봫�벻�ᱻ__gc
        ptr2user(T* t) : user((void*)t) {}
#ifdef __GNUC_
#pragma GCC diagnostic pop
#endif
    };

    // refת����user
    template<typename T>
    struct ref2user : user
    {
        // ���ô��벻�ᱻ__gc
        ref2user(T& t) : user(&t) {}
    };

    // to lua
    // ֵ����lua 
    // ������val2user<T> ������lua�ϣ���T����input������C++���ϣ�ͨ��val2user<T>�е�ָ��ָ��
    template<typename T>
    struct val2lua { static void invoke(lua_State *L, T& input){ new(lua_newuserdata(L, sizeof(val2user<T>))) val2user<T>(input); } };
    // ָ�봫��lua 
    // ������ptr2user<T> ������lua�ϣ���Tָ��input����C++�У�ͨ��ptr2user<T>�е�ָ��ָ��
    template<typename T>
    struct ptr2lua { static void invoke(lua_State *L, T* input){ if(input) new(lua_newuserdata(L, sizeof(ptr2user<T>))) ptr2user<T>(input); else lua_pushnil(L); } };
    template<typename T>
    // ָ�봫��lua 
    // ������ref2user<T> ������lua�ϣ���T����input����C++�У�ͨ��ref2user<T>�е�ָ��ָ��
    struct ref2lua { static void invoke(lua_State *L, T& input){ new(lua_newuserdata(L, sizeof(ref2user<T>))) ref2user<T>(input); } };

    // ö�ٴ���lua
    template<typename T>
    struct enum2lua { static void invoke(lua_State *L, T val) { lua_pushnumber(L, (int)val); } };

    // ������lua
    template<typename T>
    struct object2lua 
    { 
        static void invoke(lua_State *L, T val) 
        { 
            if_<is_ptr<T>::value
                ,ptr2lua<typename base_type<T>::type>
                ,typename if_<is_ref<T>::value
                    ,ref2lua<typename base_type<T>::type>
                    ,val2lua<typename base_type<T>::type>
                >::type
            >::type::invoke(L, val);

            // set C++������lua ����metatable
            push_meta(L, class_name<typename class_type<T>::type>::name());
            lua_setmetatable(L, -2);
        } 
    };

    // ���ʹ���lua
    template<typename T>
    void type2lua(lua_State *L, T val)
    {
        if_<is_enum<T>::value
            ,enum2lua<T>
            ,object2lua<T>
        >::type::invoke(L, val);
    }

    // get value from cclosure
    template<typename T>  
    T upvalue_(lua_State *L)
    {
        // ��ȡ����ָ��
        return user2type<T>::invoke(L, lua_upvalueindex(1));
    }

    // read a value from lua stack 
    template<typename T>  
    T read(lua_State *L, int index)             { return lua2type<T>(L, index); }

    template<>  std::string         read(lua_State *L, int index);
    template<>  void*               read(lua_State *L, int index);
    template<>  char*               read(lua_State *L, int index);
    template<>  const char*         read(lua_State *L, int index);
    template<>  char                read(lua_State *L, int index);
    template<>  unsigned char       read(lua_State *L, int index);
    template<>  short               read(lua_State *L, int index);
    template<>  unsigned short      read(lua_State *L, int index);
    template<>  long                read(lua_State *L, int index);
    template<>  unsigned long       read(lua_State *L, int index);
    template<>  int                 read(lua_State *L, int index);
    template<>  unsigned int        read(lua_State *L, int index);
    template<>  float               read(lua_State *L, int index);
    template<>  double              read(lua_State *L, int index);
    template<>  bool                read(lua_State *L, int index);
    template<>  void                read(lua_State *L, int index);
    template<>  long long           read(lua_State *L, int index);
    template<>  unsigned long long  read(lua_State *L, int index);
    template<>  table               read(lua_State *L, int index);
    template<>  nil                 read(lua_State *L, int index);

    // push a value to lua stack 
    template<typename T>  
    void push(lua_State *L, T ret)                  { type2lua<T>(L, ret); }
    template<>  void push(lua_State *L, std::string ret);
    template<>  void push(lua_State *L, void* ret);
    template<>  void push(lua_State *L, char ret);
    template<>  void push(lua_State *L, unsigned char ret);
    template<>  void push(lua_State *L, short ret);
    template<>  void push(lua_State *L, unsigned short ret);
    template<>  void push(lua_State *L, long ret);
    template<>  void push(lua_State *L, unsigned long ret);
    template<>  void push(lua_State *L, int ret);
    template<>  void push(lua_State *L, unsigned int ret);
    template<>  void push(lua_State *L, float ret);
    template<>  void push(lua_State *L, double ret);
    template<>  void push(lua_State *L, char* ret);
    template<>  void push(lua_State *L, const char* ret);
    template<>  void push(lua_State *L, bool ret);
    template<>  void push(lua_State *L, lua_value* ret);
    template<>  void push(lua_State *L, long long ret);
    template<>  void push(lua_State *L, unsigned long long ret);
    template<>  void push(lua_State *L, table ret);
    template<>  void push(lua_State *L, nil ret);

    // pop a value from lua stack
    template<typename T>  
    T pop(lua_State *L) { T t = read<T>(L, -1); lua_pop(L, 1); return t; }
    
    template<>  void    pop(lua_State *L);
    template<>  table   pop(lua_State *L);

    // functor (with return value)
    // C����
    // upvalue_<>(L)��ȡ����ָ��
    // ִ�иú�������ѹ��ջ
    template<typename RVal, typename T1=void, typename T2=void, typename T3=void, typename T4=void, typename T5=void>
    struct functor
    {
        static int invoke(lua_State *L) { push(L,upvalue_<RVal(*)(T1,T2,T3,T4,T5)>(L)(read<T1>(L,1),read<T2>(L,2),read<T3>(L,3),read<T4>(L,4),read<T5>(L,5))); return 1; }
    };

    template<typename RVal, typename T1, typename T2, typename T3, typename T4>
    struct functor<RVal,T1,T2,T3,T4> 
    {
        static int invoke(lua_State *L) { push(L,upvalue_<RVal(*)(T1,T2,T3,T4)>(L)(read<T1>(L,1),read<T2>(L,2),read<T3>(L,3),read<T4>(L,4))); return 1; }
    };

    template<typename RVal, typename T1, typename T2, typename T3>
    struct functor<RVal,T1,T2,T3> 
    {
        static int invoke(lua_State *L) { push(L,upvalue_<RVal(*)(T1,T2,T3)>(L)(read<T1>(L,1),read<T2>(L,2),read<T3>(L,3))); return 1; }
    };

    template<typename RVal, typename T1, typename T2>
    struct functor<RVal,T1,T2> 
    {
        static int invoke(lua_State *L) { push(L,upvalue_<RVal(*)(T1,T2)>(L)(read<T1>(L,1),read<T2>(L,2))); return 1; }
    };

    template<typename RVal, typename T1>
    struct functor<RVal,T1> 
    {
        static int invoke(lua_State *L) { push(L,upvalue_<RVal(*)(T1)>(L)(read<T1>(L,1))); return 1; }
    };

    template<typename RVal>
    struct functor<RVal>
    {
        static int invoke(lua_State *L) { push(L,upvalue_<RVal(*)()>(L)()); return 1; }
    };

    // functor (without return value)
    // C����
    // upvalue_<>(L)��ȡ����ָ��
    // ִ�иú���������ѹ��ջ
    template<typename T1, typename T2, typename T3, typename T4, typename T5>
    struct functor<void, T1, T2, T3, T4, T5>
    {
        static int invoke(lua_State *L) { upvalue_<void(*)(T1,T2,T3,T4,T5)>(L)(read<T1>(L,1),read<T2>(L,2),read<T3>(L,3),read<T4>(L,4),read<T5>(L,5)); return 0; }
    };

    template<typename T1, typename T2, typename T3, typename T4>
    struct functor<void, T1, T2, T3, T4>
    {
        static int invoke(lua_State *L) { upvalue_<void(*)(T1,T2,T3,T4)>(L)(read<T1>(L,1),read<T2>(L,2),read<T3>(L,3),read<T4>(L,4)); return 0; }
    };

    template<typename T1, typename T2, typename T3>
    struct functor<void, T1, T2, T3>
    {
        static int invoke(lua_State *L) { upvalue_<void(*)(T1,T2,T3)>(L)(read<T1>(L,1),read<T2>(L,2),read<T3>(L,3)); return 0; }
    };

    template<typename T1, typename T2>
    struct functor<void, T1, T2>
    {
        static int invoke(lua_State *L) { upvalue_<void(*)(T1,T2)>(L)(read<T1>(L,1),read<T2>(L,2)); return 0; }
    };

    template<typename T1>
    struct functor<void, T1>
    {
        static int invoke(lua_State *L) { upvalue_<void(*)(T1)>(L)(read<T1>(L,1)); return 0; }
    };

    template<>
    struct functor<void>
    {
        static int invoke(lua_State *L) { upvalue_<void(*)()>(L)(); return 0; }
    };

    // functor (non-managed)
    template<typename T1>
    struct functor<int, lua_State*, T1>
    {
        static int invoke(lua_State *L) { return upvalue_<int(*)(lua_State*,T1)>(L)(L,read<T1>(L,1)); }
    };

    template<>
    struct functor<int,lua_State*>
    {
        static int invoke(lua_State *L) { return upvalue_<int(*)(lua_State*)>(L)(L); }
    };

    // push_functor
    // ��ջ�����ݣ�����ָ�룩ѹ��functor<>::invoke�հ�
    // ��ѹ��ú���
    template<typename RVal> 
    void push_functor(lua_State *L, RVal (*func)())
    {
        (void)func;
        lua_pushcclosure(L, functor<RVal>::invoke, 1);
    }

    template<typename RVal, typename T1> 
    void push_functor(lua_State *L, RVal (*func)(T1))
    { 
        (void)func;
        lua_pushcclosure(L, functor<RVal,T1>::invoke, 1);
    }

    template<typename RVal, typename T1, typename T2> 
    void push_functor(lua_State *L, RVal (*func)(T1,T2))
    { 
        (void)func;
        lua_pushcclosure(L, functor<RVal,T1,T2>::invoke, 1);
    }

    template<typename RVal, typename T1, typename T2, typename T3> 
    void push_functor(lua_State *L, RVal (*func)(T1,T2,T3))
    { 
        (void)func;
        lua_pushcclosure(L, functor<RVal,T1,T2,T3>::invoke, 1);
    }

    template<typename RVal, typename T1, typename T2, typename T3, typename T4> 
    void push_functor(lua_State *L, RVal (*func)(T1,T2,T3,T4))
    { 
        (void)func;
        lua_pushcclosure(L, functor<RVal,T1,T2,T3,T4>::invoke, 1);
    }

    template<typename RVal, typename T1, typename T2, typename T3, typename T4, typename T5> 
    void push_functor(lua_State *L, RVal (*func)(T1,T2,T3,T4,T5))
    { 
        (void)func;
        lua_pushcclosure(L, functor<RVal,T1,T2,T3,T4,T5>::invoke, 1);
    }

    // member variable
    struct var_base
    {
        virtual ~var_base() {};
        virtual void get(lua_State *L) = 0;
        virtual void set(lua_State *L) = 0;
    };

    template<typename T, typename V>
    struct mem_var : var_base
    {
        V T::*_var;
        mem_var(V T::*val) : _var(val) {}
        void get(lua_State *L)  { push<typename if_<is_obj<V>::value,V&,V>::type>(L, read<T*>(L,1)->*(_var));   }
        void set(lua_State *L)  { read<T*>(L,1)->*(_var) = read<V>(L, 3);   }
    };

    // class member functor (with return value)
    template<typename RVal, typename T, typename T1=void, typename T2=void, typename T3=void, typename T4=void, typename T5=void>
    struct mem_functor
    {
        static int invoke(lua_State *L) { push(L,(read<T*>(L,1)->*upvalue_<RVal(T::*)(T1,T2,T3,T4,T5)>(L))(read<T1>(L,2),read<T2>(L,3),read<T3>(L,4),read<T4>(L,5),read<T5>(L,6)));; return 1; }
    };

    template<typename RVal, typename T, typename T1, typename T2, typename T3, typename T4> 
    struct mem_functor<RVal,T,T1,T2,T3,T4>
    {
        static int invoke(lua_State *L) { push(L,(read<T*>(L,1)->*upvalue_<RVal(T::*)(T1,T2,T3,T4)>(L))(read<T1>(L,2),read<T2>(L,3),read<T3>(L,4),read<T4>(L,5))); return 1; }
    };

    template<typename RVal, typename T, typename T1, typename T2, typename T3> 
    struct mem_functor<RVal,T,T1,T2,T3>
    {
        static int invoke(lua_State *L) { push(L,(read<T*>(L,1)->*upvalue_<RVal(T::*)(T1,T2,T3)>(L))(read<T1>(L,2),read<T2>(L,3),read<T3>(L,4))); return 1; }
    };

    template<typename RVal, typename T, typename T1, typename T2> 
    struct mem_functor<RVal,T,T1,T2>
    {
        static int invoke(lua_State *L) { push(L,(read<T*>(L,1)->*upvalue_<RVal(T::*)(T1,T2)>(L))(read<T1>(L,2),read<T2>(L,3))); return 1; }
    };

    template<typename RVal, typename T, typename T1> 
    struct mem_functor<RVal,T,T1>
    {
        static int invoke(lua_State *L) { push(L,(read<T*>(L,1)->*upvalue_<RVal(T::*)(T1)>(L))(read<T1>(L,2))); return 1; }
    };

    template<typename RVal, typename T> 
    struct mem_functor<RVal,T>
    {
        static int invoke(lua_State *L) { push(L,(read<T*>(L,1)->*upvalue_<RVal(T::*)()>(L))()); return 1; }
    };

    // class member functor (without return value)
    template<typename T, typename T1, typename T2, typename T3, typename T4, typename T5>
    struct mem_functor<void,T,T1,T2,T3,T4,T5>
    {
        static int invoke(lua_State *L)  { (read<T*>(L,1)->*upvalue_<void(T::*)(T1,T2,T3,T4,T5)>(L))(read<T1>(L,2),read<T2>(L,3),read<T3>(L,4),read<T4>(L,5),read<T5>(L,6)); return 0; }
    };

    template<typename T, typename T1, typename T2, typename T3, typename T4>
    struct mem_functor<void,T,T1,T2,T3,T4>
    {
        static int invoke(lua_State *L)  { (read<T*>(L,1)->*upvalue_<void(T::*)(T1,T2,T3,T4)>(L))(read<T1>(L,2),read<T2>(L,3),read<T3>(L,4),read<T4>(L,5)); return 0; }
    };

    template<typename T, typename T1, typename T2, typename T3>
    struct mem_functor<void,T,T1,T2,T3>
    {
        static int invoke(lua_State *L)  { (read<T*>(L,1)->*upvalue_<void(T::*)(T1,T2,T3)>(L))(read<T1>(L,2),read<T2>(L,3),read<T3>(L,4)); return 0; }
    };

    template<typename T, typename T1, typename T2>
    struct mem_functor<void,T,T1,T2>
    {
        static int invoke(lua_State *L)  { (read<T*>(L,1)->*upvalue_<void(T::*)(T1,T2)>(L))(read<T1>(L,2),read<T2>(L,3)); return 0; }
    };

    template<typename T, typename T1>
    struct mem_functor<void,T,T1>
    {
        static int invoke(lua_State *L)  { (read<T*>(L,1)->*upvalue_<void(T::*)(T1)>(L))(read<T1>(L,2)); return 0; }
    };

    template<typename T>
    struct mem_functor<void,T>
    {
        static int invoke(lua_State *L)  { (read<T*>(L,1)->*upvalue_<void(T::*)()>(L))(); return 0; }
    };

    // class member functor (non-managed)
    template<typename T, typename T1> 
    struct mem_functor<int,T,lua_State*,T1>
    {
        static int invoke(lua_State *L) { return (read<T*>(L,1)->*upvalue_<int(T::*)(lua_State*,T1)>(L))(L, read<T1>(L,2)); }
    };

    template<typename T> 
    struct mem_functor<int,T,lua_State*>
    {
        static int invoke(lua_State *L) { return (read<T*>(L,1)->*upvalue_<int(T::*)(lua_State*)>(L))(L); }
    };

    // push_functor
    template<typename RVal, typename T>
    void push_functor(lua_State *L, RVal (T::*func)()) 
    { 
        (void)func;
        lua_pushcclosure(L, mem_functor<RVal,T>::invoke, 1); 
    }

    template<typename RVal, typename T>
    void push_functor(lua_State *L, RVal (T::*func)() const) 
    { 
        (void)func;
        lua_pushcclosure(L, mem_functor<RVal,T>::invoke, 1); 
    }

    template<typename RVal, typename T, typename T1>
    void push_functor(lua_State *L, RVal (T::*func)(T1)) 
    { 
        (void)func;
        lua_pushcclosure(L, mem_functor<RVal,T,T1>::invoke, 1); 
    }

    template<typename RVal, typename T, typename T1>
    void push_functor(lua_State *L, RVal (T::*func)(T1) const) 
    { 
        (void)func;
        lua_pushcclosure(L, mem_functor<RVal,T,T1>::invoke, 1); 
    }

    template<typename RVal, typename T, typename T1, typename T2>
    void push_functor(lua_State *L, RVal (T::*func)(T1,T2)) 
    { 
        (void)func;
        lua_pushcclosure(L, mem_functor<RVal,T,T1,T2>::invoke, 1); 
    }

    template<typename RVal, typename T, typename T1, typename T2>
    void push_functor(lua_State *L, RVal (T::*func)(T1,T2) const) 
    { 
        (void)func;
        lua_pushcclosure(L, mem_functor<RVal,T,T1,T2>::invoke, 1); 
    }

    template<typename RVal, typename T, typename T1, typename T2, typename T3>
    void push_functor(lua_State *L, RVal (T::*func)(T1,T2,T3)) 
    { 
        (void)func;
        lua_pushcclosure(L, mem_functor<RVal,T,T1,T2,T3>::invoke, 1); 
    }

    template<typename RVal, typename T, typename T1, typename T2, typename T3>
    void push_functor(lua_State *L, RVal (T::*func)(T1,T2,T3) const) 
    { 
        (void)func;
        lua_pushcclosure(L, mem_functor<RVal,T,T1,T2,T3>::invoke, 1); 
    }

    template<typename RVal, typename T, typename T1, typename T2, typename T3, typename T4>
    void push_functor(lua_State *L, RVal (T::*func)(T1,T2,T3,T4)) 
    { 
        (void)func;
        lua_pushcclosure(L, mem_functor<RVal,T,T1,T2,T3,T4>::invoke, 1); 
    }

    template<typename RVal, typename T, typename T1, typename T2, typename T3, typename T4>
    void push_functor(lua_State *L, RVal (T::*func)(T1,T2,T3,T4) const) 
    { 
        (void)func;
        lua_pushcclosure(L, mem_functor<RVal,T,T1,T2,T3,T4>::invoke, 1); 
    }

    template<typename RVal, typename T, typename T1, typename T2, typename T3, typename T4, typename T5>
    void push_functor(lua_State *L, RVal (T::*func)(T1,T2,T3,T4,T5)) 
    { 
        (void)func;
        lua_pushcclosure(L, mem_functor<RVal,T,T1,T2,T3,T4,T5>::invoke, 1); 
    }

    template<typename RVal, typename T, typename T1, typename T2, typename T3, typename T4, typename T5>
    void push_functor(lua_State *L, RVal (T::*func)(T1,T2,T3,T4,T5) const) 
    { 
        (void)func;
        lua_pushcclosure(L, mem_functor<RVal,T,T1,T2,T3,T4,T5>::invoke, 1); 
    }


    template<typename RVal, typename T, typename T1 = void, typename T2 = void, typename T3 = void, typename T4 = void, typename T5 = void, typename T6 = void>
    struct mem_functor6 {
      static int invoke(lua_State *L) { push(L, (read<T*>(L, 1)->*upvalue_<RVal(T::*)(T1, T2, T3, T4, T5, T6)>(L))(read<T1>(L, 2), read<T2>(L, 3), read<T3>(L, 4), read<T4>(L, 5), read<T5>(L, 6), read<T6>(L, 7)));; return 1; }
    };


    template<typename RVal, typename T, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
    void push_functor(lua_State *L, RVal(T::*func)(T1, T2, T3, T4, T5, T6)) {
      (void)func;
      lua_pushcclosure(L, mem_functor6<RVal, T, T1, T2, T3, T4, T5, T6>::invoke, 1);
    }

    template<typename RVal, typename T, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
    void push_functor(lua_State *L, RVal(T::*func)(T1, T2, T3, T4, T5, T6) const) {
      (void)func;
      lua_pushcclosure(L, mem_functor6<RVal, T, T1, T2, T3, T4, T5, T6>::invoke, 1);
    }

    // constructor
    template<typename T, typename T1, typename T2, typename T3, typename T4, typename T5>
    int constructor(lua_State *L) 
    { 
        // ��T���캯���������ֱ�ΪT1 T2 T3 T4 T5 
        // ͸��new������C++����
        new(lua_newuserdata(L, sizeof(val2user<T>))) val2user<T>(read<T1>(L,2),read<T2>(L,3),read<T3>(L,4),read<T4>(L,5),read<T5>(L,6));
        // ��ʵ������metatable
        push_meta(L, class_name<typename class_type<T>::type>::name());
        lua_setmetatable(L, -2);

        return 1; 
    }

    template<typename T, typename T1, typename T2, typename T3, typename T4>
    int constructor(lua_State *L) 
    { 
        new(lua_newuserdata(L, sizeof(val2user<T>))) val2user<T>(read<T1>(L,2),read<T2>(L,3),read<T3>(L,4),read<T4>(L,5));
        push_meta(L, class_name<typename class_type<T>::type>::name());
        lua_setmetatable(L, -2);

        return 1; 
    }

    template<typename T, typename T1, typename T2, typename T3>
    int constructor(lua_State *L) 
    { 
        new(lua_newuserdata(L, sizeof(val2user<T>))) val2user<T>(read<T1>(L,2),read<T2>(L,3),read<T3>(L,4));
        push_meta(L, class_name<typename class_type<T>::type>::name());
        lua_setmetatable(L, -2);

        return 1; 
    }

    template<typename T, typename T1, typename T2>
    int constructor(lua_State *L) 
    { 
        new(lua_newuserdata(L, sizeof(val2user<T>))) val2user<T>(read<T1>(L,2),read<T2>(L,3));
        push_meta(L, class_name<typename class_type<T>::type>::name());
        lua_setmetatable(L, -2);

        return 1; 
    }

    template<typename T, typename T1>
    int constructor(lua_State *L) 
    { 
        new(lua_newuserdata(L, sizeof(val2user<T>))) val2user<T>(read<T1>(L,2));
        push_meta(L, class_name<typename class_type<T>::type>::name());
        lua_setmetatable(L, -2);

        return 1; 
    }

    template<typename T>
    int constructor(lua_State *L) 
    { 
        new(lua_newuserdata(L, sizeof(val2user<T>))) val2user<T>();
        push_meta(L, class_name<typename class_type<T>::type>::name());
        lua_setmetatable(L, -2);

        return 1; 
    }

    // destroyer
    template<typename T>
    int destroyer(lua_State *L) 
    { 
        // ɾ��C++���Ϸ�����ڴ�
        ((user*)lua_touserdata(L, 1))->~user();
        return 0;
    }

    // global function
    template<typename F> 
    void def(lua_State* L, const char* name, F func)
    { 
        // ���뺯��ָ��
        lua_pushlightuserdata(L, (void*)func);
        // ѹ�뺯����ʵ����ѹ�����functor<>::invoke �����ĺ���ָ����ڱհ���)
        push_functor(L, func);
        // ��������
        lua_setglobal(L, name);
    }

    // global variable
    // ����ȫ�ֱ���
    template<typename T>
    void set(lua_State* L, const char* name, T object)
    {
        push(L, object);
        lua_setglobal(L, name);
    }

    template<typename T>
    // ��ȡȫ�ֱ���
    // get<T>()
    T get(lua_State* L, const char* name)
    {
        lua_getglobal(L, name);
        return pop<T>(L);
    }

    // ����ȫ�ֱ���
    template<typename T>
    void decl(lua_State* L, const char* name, T object)
    {
        set(L, name, object);
    }

   
    // call
    // C++����lua����
    // �����������������!!!!!!!!
    template<typename RVal>
    RVal call(lua_State* L, const char* name)
    {
        lua_pushcclosure(L, on_error, 0);
        int errfunc = lua_gettop(L);

        lua_getglobal(L, name);
        if(lua_isfunction(L,-1))
        {
            lua_pcall(L, 0, 1, errfunc);
        }
        else
        {
            print_error(L, "lua_tinker::call() attempt to call global `%s' (not a function)", name);
        }

        lua_remove(L, errfunc);
        return pop<RVal>(L);
    }
    /*
    template<typename RVal, typename T1>
    RVal call(lua_State* L, const char* name, T1 arg)
    {
        lua_pushcclosure(L, on_error, 0);
        int errfunc = lua_gettop(L);

        lua_getglobal(L, name);
        if(lua_isfunction(L,-1))
        {
            push(L, arg);
            lua_pcall(L, 1, 1, errfunc); 
        }
        else
        {
            print_error(L, "lua_tinker::call() attempt to call global `%s' (not a function)", name);
        }

        lua_remove(L, errfunc);
        return pop<RVal>(L);
    }

    template<typename RVal, typename T1, typename T2>
    RVal call(lua_State* L, const char* name, T1 arg1, T2 arg2)
    {
        lua_pushcclosure(L, on_error, 0);
        int errfunc = lua_gettop(L);

        lua_getglobal(L, name);
        if(lua_isfunction(L,-1))
        {
            push(L, arg1);
            push(L, arg2);
            lua_pcall(L, 2, 1, errfunc);
        }
        else
        {
            print_error(L, "lua_tinker::call() attempt to call global `%s' (not a function)", name);
        }

        lua_remove(L, errfunc);
        return pop<RVal>(L);
    }

    template<typename RVal, typename T1, typename T2, typename T3>
    RVal call(lua_State* L, const char* name, T1 arg1, T2 arg2, T3 arg3)
    {
        lua_pushcclosure(L, on_error, 0);
        int errfunc = lua_gettop(L);

        lua_getglobal(L, name);
        if(lua_isfunction(L,-1))
        {
            push(L, arg1);
            push(L, arg2);
            push(L, arg3);
            lua_pcall(L, 3, 1, errfunc);
        }
        else
        {
            print_error(L, "lua_tinker::call() attempt to call global `%s' (not a function)", name);
        }

        lua_remove(L, errfunc);
        return pop<RVal>(L);
    }

template<typename RVal, typename T1, typename T2, typename T3, typename T4>
RVal call(lua_State* L, const char* name, T1 arg1, T2 arg2, T3 arg3, T4 arg4)
{
    lua_pushcclosure(L, on_error, 0);
    int errfunc = lua_gettop(L);

    lua_getglobal(L,name);
    if(lua_isfunction(L,-1))
    {
        push(L, arg1);
        push(L, arg2);
        push(L, arg3);
        push(L, arg4);
        if(lua_pcall(L, 4, 1, errfunc) != 0)
        {
            lua_pop(L, 1);
        }
    }
    else
    {
        print_error(L, "lua_tinker::call() attempt to call global `%s' (not a function)", name);
    }

    lua_remove(L, -2);
    return pop<RVal>(L);
}

template<typename RVal, typename T1, typename T2, typename T3, typename T4, typename T5>
RVal call(lua_State* L, const char* name, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
{
    lua_pushcclosure(L, on_error, 0);
    int errfunc = lua_gettop(L);

    lua_getglobal(L,name);
    if(lua_isfunction(L,-1))
    {
        push(L, arg1);
        push(L, arg2);
        push(L, arg3);
        push(L, arg4);
        push(L, arg5);
        if(lua_pcall(L, 5, 1, errfunc) != 0)
        {
            lua_pop(L, 1);
        }
    }
    else
    {
        print_error(L, "lua_tinker::call() attempt to call global `%s' (not a function)", name);
    }

    lua_remove(L, -2);
    return pop<RVal>(L);
}

template<typename RVal, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
RVal call(lua_State* L, const char* name, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6)
{
    lua_pushcclosure(L, on_error, 0);
    int errfunc = lua_gettop(L);

    lua_getglobal(L,name);
    if(lua_isfunction(L,-1))
    {
        push(L, arg1);
        push(L, arg2);
        push(L, arg3);
        push(L, arg4);
        push(L, arg5);
        push(L, arg6);
        if(lua_pcall(L, 6, 1, errfunc) != 0)
        {
            lua_pop(L, 1);
        }
    }
    else
    {
        print_error(L, "lua_tinker::call() attempt to call global `%s' (not a function)", name);
    }

    lua_remove(L, -2);
    return pop<RVal>(L);
}

template<typename RVal, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
RVal call(lua_State* L, const char* name, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7)
{
    lua_pushcclosure(L, on_error, 0);
    int errfunc = lua_gettop(L);

    lua_getglobal(L,name);
    if(lua_isfunction(L,-1))
    {
        push(L, arg1);
        push(L, arg2);
        push(L, arg3);
        push(L, arg4);
        push(L, arg5);
        push(L, arg6);
        push(L, arg7);
        if(lua_pcall(L, 7, 1, errfunc) != 0)
        {
            lua_pop(L, 1);
        }
    }
    else
    {
        print_error(L, "lua_tinker::call() attempt to call global `%s' (not a function)", name);
    }

    lua_remove(L, -2);
    return pop<RVal>(L);
}

template<typename RVal, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
RVal call(lua_State* L, const char* name, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8)
{
    lua_pushcclosure(L, on_error, 0);
    int errfunc = lua_gettop(L);

    lua_getglobal(L,name);
    if(lua_isfunction(L,-1))
    {
        push(L, arg1);
        push(L, arg2);
        push(L, arg3);
        push(L, arg4);
        push(L, arg5);
        push(L, arg6);
        push(L, arg7);
        push(L, arg8);
        if(lua_pcall(L, 8, 1, errfunc) != 0)
        {
            lua_pop(L, 1);
        }
    }
    else
    {
        print_error(L, "lua_tinker::call() attempt to call global `%s' (not a function)", name);
    }

    lua_remove(L, -2);
    return pop<RVal>(L);
}
  */
  

template<typename T>
void pushArgs(lua_State *L, T t){
  push(L, t);
}

template<typename T, typename ... Args >
void pushArgs(lua_State *L, T t, Args... args){
  push(L, t);
  pushArgs(L, args...);
}

template<typename RVal, typename T, typename ... Args>
RVal call(lua_State* L, const char* name, T t, Args ... args){
  lua_pushcclosure(L, on_error, 0);
  int errfunc = lua_gettop(L);

  lua_getglobal(L, name);
  if(lua_isfunction(L, -1)){
    pushArgs(L, t, args...);
    if(lua_pcall(L, sizeof...(args)+1, 1, errfunc) != 0){
      lua_pop(L, 1);
    }
  } else{
    print_error(L, "lua_tinker::call() attempt to call global `%s' (not a function)", name);
  }

  lua_remove(L, -2);
  return pop<RVal>(L);
}


// }

    // class init
    template<typename T>
    void class_add(lua_State* L, const char* name) 
    { 
        // ͨ������������table
        // �������û��ע�ᣬ��lua���ǻ�ȡ��������Ϣ��
        class_name<T>::name(name);

        lua_newtable(L);

        lua_pushstring(L, "__name");
        lua_pushstring(L, name);
        lua_rawset(L, -3);

        lua_pushstring(L, "__index");
        lua_pushcclosure(L, meta_get, 0);
        lua_rawset(L, -3);

        lua_pushstring(L, "__newindex");
        lua_pushcclosure(L, meta_set, 0);
        lua_rawset(L, -3);

        lua_pushstring(L, "__gc");
        lua_pushcclosure(L, destroyer<T>, 0);
        lua_rawset(L, -3);

        lua_setglobal(L, name);
    }

    // Tinker Class Inheritence
    template<typename T, typename P>
    void class_inh(lua_State* L)
    {
        // ��ȡ��table
        push_meta(L, class_name<T>::name());
        if(lua_istable(L, -1))
        {
            // ѹ�븸������
            lua_pushstring(L, "__parent");
            push_meta(L, class_name<P>::name());
            lua_rawset(L, -3);
        }
        lua_pop(L, 1);
    }

    // Tinker Class Constructor
    template<typename T, typename F>
    void class_con(lua_State* L,F func)
    {
        // ��ȡ��table
        push_meta(L, class_name<T>::name());
        if(lua_istable(L, -1))
        {
            // �����µ�table __call
            lua_newtable(L);
            lua_pushstring(L, "__call");
            // ѹ�빹�캯��
            lua_pushcclosure(L, func, 0);
            lua_rawset(L, -3);
            // ����__callΪ��table��metatable
            lua_setmetatable(L, -2);
        }
        lua_pop(L, 1);
    }

    // Tinker Class Functions
    template<typename T, typename F>
    void class_def(lua_State* L, const char* name, F func) 
    { 
        // ��ȡ��table
        push_meta(L, class_name<T>::name());
        if(lua_istable(L, -1))
        {
            // ѹ�뺯������table
            lua_pushstring(L, name);
            new(lua_newuserdata(L,sizeof(F))) F(func);
            push_functor(L, func);
            lua_rawset(L, -3);
        }
        lua_pop(L, 1);
    }

    // Tinker Class Variables
    template<typename T, typename BASE, typename VAR>
    void class_mem(lua_State* L, const char* name, VAR BASE::*val) 
    { 
        // ��ȡ��table
        push_meta(L, class_name<T>::name());
        if(lua_istable(L, -1))
        {
            // ѹ�������
            lua_pushstring(L, name);
            new(lua_newuserdata(L,sizeof(mem_var<BASE,VAR>))) mem_var<BASE,VAR>(val);
            lua_rawset(L, -3);
        }
        lua_pop(L, 1);
    }

    template<typename T>
    struct class_name
    {
        // global name
        static const char* name(const char* name = NULL)
        {
            static char temp[256] = "";
            if (name != NULL) strncpy(temp, name, sizeof(temp)-1);
            return temp;
        }
    };
    struct nil { nil(){m_nil = true;} nil(bool n) :m_nil(n) {}  bool m_nil; };
    // Table Object on Stack
    struct table_obj
    {
        table_obj(lua_State* L, int index);
        virtual ~table_obj();

        //void inc_ref();
        //void dec_ref();

        bool validate();

        template<typename T>
        void set(const char* name, T object)
        {
            if(validate())
            {
                lua_pushstring(m_L, name);
                push(m_L, object);
                lua_settable(m_L, m_index);
            }
        }
        template<typename T>
        bool add(T object) {
          if(validate()) {
            unsigned int l = len();
            lua_pushinteger(m_L, l + 1);
            push(m_L, object);
            lua_settable(m_L, m_index);
            return true;
          }
          return false;
        }
        bool has(const char* name){
          if(validate()){
            lua_pushstring(m_L, name);
            lua_gettable(m_L, m_index);
            return !pop<nil>(m_L).m_nil;
          }else{
            return false;
          }
        }

        bool has(int index) {
          if(validate()) {
            lua_pushinteger(m_L, index);
            lua_gettable(m_L, m_index);
            return !pop<nil>(m_L).m_nil;
          } else {
            return false;
          }
        }

        unsigned int len(){
          if (validate()){
            lua_len(m_L, m_index);
          }else{
            return 0;
          }
          return pop<unsigned int>(m_L);
        }

        template<typename T>
        T get(const char* name)
        {
            if(validate())
            {
                lua_pushstring(m_L, name);
                lua_gettable(m_L, m_index);
            }
            else
            {
                lua_pushnil(m_L);
            }

            return pop<T>(m_L);
        }

        template<typename T>
        T get(int num)
        {
            if(validate())
            {
                lua_pushinteger(m_L, num);
                lua_gettable(m_L, m_index);
            }
            else
            {
                lua_pushnil(m_L);
            }

            return pop<T>(m_L);
        }

        template<typename RVal>
        RVal call(const char* name){
            if(validate()){
                lua_pushcclosure(m_L, on_error, 0);
                int errfunc = lua_gettop(m_L);
                lua_pushstring(m_L, name);
                lua_gettable(m_L, m_index);

                if(lua_isfunction(m_L, -1)){
                    lua_pcall(m_L, 0, 1, errfunc);
                } else{
                    print_error(m_L, "lua_tinker::call() attempt to call table function `%s' (not a function)", name);
                }
                lua_remove(m_L, errfunc);
            } else{
                lua_pushnil(m_L);
            }
            return pop<RVal>(m_L);
        }

        template<typename RVal, typename T1, typename ... Args>
        RVal call(const char* name, T1 obj, Args... args){
            if(validate()){
                lua_pushcclosure(m_L, on_error, 0);
                int errfunc = lua_gettop(m_L);
                lua_pushstring(m_L, name);
                lua_gettable(m_L, m_index);

                if(lua_isfunction(m_L, -1)){
                    pushArgs(m_L, obj, args...);
                    lua_pcall(m_L, 1, 1, errfunc);
                } else{
                    print_error(m_L, "lua_tinker::call() attempt to call table function `%s' (not a function)", name);
                }
                lua_remove(m_L, errfunc);
            } else{
                lua_pushnil(m_L);
            }
            return pop<RVal>(m_L);
        }


        lua_State*      m_L;
        int             m_index;
        const void*     m_pointer;
        //int             m_ref;
    };

    
    // Table Object Holder
    struct table
    {
        table(lua_State* L);
        table(lua_State* L, int index);
        table(lua_State* L, const char* name);
        table(const table& input);
      
        virtual ~table();

        table childTable(const char* name){
          if (m_nil){assert(false); return nilTable();}
          table t(m_obj->m_L);
          set(name, t);
          return std::move(t);
        }
        table childTable() {
          if (m_nil){assert(false); return nilTable();}
          table t(m_obj->m_L);
          add(t);
          return std::move(t);
        }

        template<typename T>
        void set(const char* name, T object)
        {
            if (m_nil){ assert(false); return ;}
            m_obj->set(name, object);
        }

        template<typename T>
        bool add(T object) {
          if (m_nil){assert(false);  return false;}
          return m_obj->add(object);
        }

        bool has(const char* name) {
          if (m_nil){ assert(false); return false;}
          return m_obj->has(name);
        }

        bool has(int index) {
          if (m_nil){ assert(false); return false;}
          return m_obj->has(index);
        }

        template<typename T>
        T get(const char* name)
        {    
           if (m_nil){assert(false); return T();}
           return m_obj->get<T>(name);
        }

        template<typename T>
        T get(int num)
        {     
          if (m_nil){ assert(false); return T();}
          return m_obj->get<T>(num);
        }

        unsigned int len(){
          if (m_nil){ assert(false); return 0;}
          return m_obj->len();
        }

        
        template<typename RVal, typename T1>
        RVal call(const char* name, T1 obj){
          if(m_nil){ assert(false); return RVal(); }
          return m_obj->call<RVal, T1>(name, obj);
        }
        template<typename RVal>
        RVal call(const char* name){
          if (m_nil){ assert(false); return RVal();}
          return m_obj->call<RVal>(name);
        }
        //table_obj*      m_obj
        std::shared_ptr<table_obj>     m_obj;
        const bool  m_nil ;

        static table nilTable(){ static table t;  return t;}
    private:
      // nil table
      table();
    };
} // namespace lua_tinker

typedef lua_tinker::table LuaTable;
typedef lua_tinker::nil LuaNil;


#endif //_LUA_TINKER_H_
