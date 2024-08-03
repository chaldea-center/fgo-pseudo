void __fastcall BattleSubject___ctor(BattleSubject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FF08F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleObserver___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_BattleObserver__TypeInfo, v4);
    byte_49FF08F = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_BattleObserver__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleObserver___ctor__);
  this->fields.observers = (struct System_Collections_Generic_List_BattleObserver__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSubject__Add(BattleSubject_o *this, BattleObserver_o *observer, const MethodInfo *method)
{
  int32_t v3; // w3
  System_Collections_Generic_List_object__o *observers; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_49FF08C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleObserver__Add__, observer);
    byte_49FF08C = 1;
  }
  if ( observer )
  {
    observers = (System_Collections_Generic_List_object__o *)this->fields.observers;
    if ( !observers
      || (items = observers->fields._items,
          v8 = Method_System_Collections_Generic_List_BattleObserver__Add__,
          ++observers->fields._version,
          !items) )
    {
      sub_1B64324(observers);
    }
    size = observers->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        observers,
        (Il2CppObject *)observer,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    }
    else
    {
      v10 = &items->obj.klass + size;
      observers->fields._size = size + 1;
      v10[4] = (Il2CppClass *)observer;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 4), (int32_t)observer, (int32_t)method, v3);
    }
  }
}


void __fastcall BattleSubject__Notify(BattleSubject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *observers; // x20
  System_Action_object__o *v7; // x21
  __int64 v8; // x0

  if ( (byte_49FF08E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattleObserver__TypeInfo, method);
    sub_1B640C8(&Method_BattleSubject__Notify_b__3_0__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleObserver__ForEach__, v5);
    byte_49FF08E = 1;
  }
  observers = (System_Collections_Generic_List_object__o *)this->fields.observers;
  v7 = (System_Action_object__o *)sub_1B64314(System_Action_BattleObserver__TypeInfo, method, v2);
  System_Action_object____ctor(v7, (Il2CppObject *)this, Method_BattleSubject__Notify_b__3_0__, 0LL);
  if ( !observers )
    sub_1B64324(v8);
  System_Collections_Generic_List_object___ForEach(
    observers,
    (System_Action_T__o *)v7,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_BattleObserver__ForEach__);
}


void __fastcall BattleSubject__Remove(BattleSubject_o *this, BattleObserver_o *observer, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *observers; // x0

  if ( (byte_49FF08D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleObserver__Remove__, observer);
    byte_49FF08D = 1;
  }
  if ( observer )
  {
    observers = (System_Collections_Generic_List_object__o *)this->fields.observers;
    if ( !observers )
      sub_1B64324(0LL);
    System_Collections_Generic_List_object___Remove(
      observers,
      (Il2CppObject *)observer,
      (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_BattleObserver__Remove__);
  }
}


void __fastcall BattleSubject___Notify_b__3_0(BattleSubject_o *this, BattleObserver_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  ((void (__fastcall *)(BattleObserver_o *, BattleSubject_o *, const char *))x->klass[1]._1.gc_desc)(
    x,
    this,
    x->klass[1]._1.name);
}