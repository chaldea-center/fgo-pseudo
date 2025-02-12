void __fastcall BattleSubject___ctor(BattleSubject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BB750A & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleObserver___ctor__, method);
    sub_1C13D24(&System_Collections_Generic_List_BattleObserver__TypeInfo, v3);
    byte_4BB750A = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_BattleObserver__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_BattleObserver___ctor__);
  this->fields.observers = (struct System_Collections_Generic_List_BattleObserver__o *)v4;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4BB7507 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleObserver__Add__, observer);
    byte_4BB7507 = 1;
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
      sub_1C13F80(observers, observer);
    }
    size = observers->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        observers,
        (Il2CppObject *)observer,
        *(const MethodInfo_362D1CC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    }
    else
    {
      v14 = &items->obj.klass + size;
      observers->fields._size = size + 1;
      v14[4] = (Il2CppClass *)observer;
      sub_1C13CC8((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)observer, (int64_t)method, v3, v4, v5, v6, v7);
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

  if ( (byte_4BB7509 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_BattleObserver__TypeInfo, method);
    sub_1C13D24(&Method_BattleSubject__Notify_b__3_0__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleObserver__ForEach__, v4);
    byte_4BB7509 = 1;
  }
  observers = (System_Collections_Generic_List_object__o *)this->fields.observers;
  v6 = (System_Action_object__o *)sub_1C13F70(System_Action_BattleObserver__TypeInfo);
  System_Action_object____ctor(v6, (Il2CppObject *)this, Method_BattleSubject__Notify_b__3_0__, 0LL);
  if ( !observers )
    sub_1C13F80(v7, v8);
  System_Collections_Generic_List_object___ForEach(
    observers,
    (System_Action_T__o *)v6,
    (const MethodInfo_362DC0C *)Method_System_Collections_Generic_List_BattleObserver__ForEach__);
}


void __fastcall BattleSubject__Remove(BattleSubject_o *this, BattleObserver_o *observer, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *observers; // x0

  if ( (byte_4BB7508 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleObserver__Remove__, observer);
    byte_4BB7508 = 1;
  }
  if ( observer )
  {
    observers = (System_Collections_Generic_List_object__o *)this->fields.observers;
    if ( !observers )
      sub_1C13F80(0LL, observer);
    System_Collections_Generic_List_object___Remove(
      observers,
      (Il2CppObject *)observer,
      (const MethodInfo_362E6F4 *)Method_System_Collections_Generic_List_BattleObserver__Remove__);
  }
}


void __fastcall BattleSubject___Notify_b__3_0(BattleSubject_o *this, BattleObserver_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  ((void (__fastcall *)(BattleObserver_o *, BattleSubject_o *, const char *))x->klass[1]._1.gc_desc)(
    x,
    this,
    x->klass[1]._1.name);
}