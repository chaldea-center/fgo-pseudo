void __fastcall BattleSubject___ctor(BattleSubject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4A51544 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleObserver___ctor__, method);
    sub_1B863B8(&System_Collections_Generic_List_BattleObserver__TypeInfo, v3);
    byte_4A51544 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_BattleObserver__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_BattleObserver___ctor__);
  this->fields.observers = (struct System_Collections_Generic_List_BattleObserver__o *)v4;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields, (int32_t)v4, v5, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSubject__Add(BattleSubject_o *this, BattleObserver_o *observer, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *observers; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4A51541 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleObserver__Add__, observer);
    byte_4A51541 = 1;
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
      sub_1B86614(observers, observer);
    }
    size = observers->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        observers,
        (Il2CppObject *)observer,
        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    }
    else
    {
      v10 = &items->obj.klass + size;
      observers->fields._size = size + 1;
      v10[4] = (Il2CppClass *)observer;
      sub_1B8635C((CGThumbnailListItem_o *)(v10 + 4), (int32_t)observer, (int32_t)method, v3);
    }
  }
}


void __fastcall BattleSubject__Notify(BattleSubject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *observers; // x20
  System_Action_object__o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A51543 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_BattleObserver__TypeInfo, method);
    sub_1B863B8(&Method_BattleSubject__Notify_b__3_0__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleObserver__ForEach__, v4);
    byte_4A51543 = 1;
  }
  observers = (System_Collections_Generic_List_object__o *)this->fields.observers;
  v6 = (System_Action_object__o *)sub_1B86604(System_Action_BattleObserver__TypeInfo);
  System_Action_object____ctor(v6, (Il2CppObject *)this, Method_BattleSubject__Notify_b__3_0__, 0LL);
  if ( !observers )
    sub_1B86614(v7, v8);
  System_Collections_Generic_List_object___ForEach(
    observers,
    (System_Action_T__o *)v6,
    (const MethodInfo_35FD398 *)Method_System_Collections_Generic_List_BattleObserver__ForEach__);
}


void __fastcall BattleSubject__Remove(BattleSubject_o *this, BattleObserver_o *observer, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *observers; // x0

  if ( (byte_4A51542 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleObserver__Remove__, observer);
    byte_4A51542 = 1;
  }
  if ( observer )
  {
    observers = (System_Collections_Generic_List_object__o *)this->fields.observers;
    if ( !observers )
      sub_1B86614(0LL, observer);
    System_Collections_Generic_List_object___Remove(
      observers,
      (Il2CppObject *)observer,
      (const MethodInfo_35FDE80 *)Method_System_Collections_Generic_List_BattleObserver__Remove__);
  }
}


void __fastcall BattleSubject___Notify_b__3_0(BattleSubject_o *this, BattleObserver_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  ((void (__fastcall *)(BattleObserver_o *, BattleSubject_o *, const char *))x->klass[1]._1.gc_desc)(
    x,
    this,
    x->klass[1]._1.name);
}