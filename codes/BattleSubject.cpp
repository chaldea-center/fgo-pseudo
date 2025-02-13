void __fastcall BattleSubject___ctor(BattleSubject_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDF39E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleObserver___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleObserver__TypeInfo);
    byte_4BDF39E = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleObserver__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleObserver___ctor__);
  this->fields.observers = (struct System_Collections_Generic_List_BattleObserver__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSubject__Add(BattleSubject_o *this, BattleObserver_o *observer, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Collections_Generic_List_object__o *observers; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4BDF39B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleObserver__Add__);
    byte_4BDF39B = 1;
  }
  if ( observer )
  {
    observers = (System_Collections_Generic_List_object__o *)this->fields.observers;
    if ( !observers
      || (items = observers->fields._items,
          v12 = Method_System_Collections_Generic_List_BattleObserver__Add__,
          ++observers->fields._version,
          !items) )
    {
      sub_1C22094(observers, observer);
    }
    size = observers->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        observers,
        (Il2CppObject *)observer,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    }
    else
    {
      v14 = &items->obj.klass + size;
      observers->fields._size = size + 1;
      v14[4] = (Il2CppClass *)observer;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)observer, (int64_t)method, v3, v4, v5, v6, v7);
    }
  }
}


void __fastcall BattleSubject__Notify(BattleSubject_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *observers; // x20
  System_Action_object__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BDF39D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_BattleObserver__TypeInfo);
    sub_1C21E38(&Method_BattleSubject__Notify_b__3_0__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleObserver__ForEach__);
    byte_4BDF39D = 1;
  }
  observers = (System_Collections_Generic_List_object__o *)this->fields.observers;
  v4 = (System_Action_object__o *)sub_1C22084(System_Action_BattleObserver__TypeInfo);
  System_Action_object____ctor(v4, (Il2CppObject *)this, Method_BattleSubject__Notify_b__3_0__, 0LL);
  if ( !observers )
    sub_1C22094(v5, v6);
  System_Collections_Generic_List_object___ForEach(
    observers,
    (System_Action_T__o *)v4,
    (const MethodInfo_364FAF4 *)Method_System_Collections_Generic_List_BattleObserver__ForEach__);
}


void __fastcall BattleSubject__Remove(BattleSubject_o *this, BattleObserver_o *observer, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *observers; // x0

  if ( (byte_4BDF39C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleObserver__Remove__);
    byte_4BDF39C = 1;
  }
  if ( observer )
  {
    observers = (System_Collections_Generic_List_object__o *)this->fields.observers;
    if ( !observers )
      sub_1C22094(0LL, observer);
    System_Collections_Generic_List_object___Remove(
      observers,
      (Il2CppObject *)observer,
      (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_BattleObserver__Remove__);
  }
}


void __fastcall BattleSubject___Notify_b__3_0(BattleSubject_o *this, BattleObserver_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  ((void (__fastcall *)(BattleObserver_o *, BattleSubject_o *, const char *))x->klass[1]._1.gc_desc)(
    x,
    this,
    x->klass[1]._1.name);
}