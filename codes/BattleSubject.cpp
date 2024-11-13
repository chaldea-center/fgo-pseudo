void __fastcall BattleSubject___ctor(BattleSubject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B18F73 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleObserver___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleObserver__TypeInfo, v5, v6);
    byte_4B18F73 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_BattleObserver__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleObserver___ctor__);
  this->fields.observers = (struct System_Collections_Generic_List_BattleObserver__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_4B18F70 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleObserver__Add__, observer, method);
    byte_4B18F70 = 1;
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
      sub_1BCAA3C(observers, observer);
    }
    size = observers->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        observers,
        (Il2CppObject *)observer,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    }
    else
    {
      v14 = &items->obj.klass + size;
      observers->fields._size = size + 1;
      v14[4] = (Il2CppClass *)observer;
      sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)observer, (int64_t)method, v3, v4, v5, v6, v7);
    }
  }
}


void __fastcall BattleSubject__Notify(BattleSubject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *observers; // x20
  System_Action_object__o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_4B18F72 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleObserver__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattleSubject__Notify_b__3_0__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleObserver__ForEach__, v7, v8);
    byte_4B18F72 = 1;
  }
  observers = (System_Collections_Generic_List_object__o *)this->fields.observers;
  v10 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleObserver__TypeInfo, method, v2, v3);
  System_Action_object____ctor(v10, (Il2CppObject *)this, Method_BattleSubject__Notify_b__3_0__, 0LL);
  if ( !observers )
    sub_1BCAA3C(v11, v12);
  System_Collections_Generic_List_object___ForEach(
    observers,
    (System_Action_T__o *)v10,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_BattleObserver__ForEach__);
}


void __fastcall BattleSubject__Remove(BattleSubject_o *this, BattleObserver_o *observer, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *observers; // x0

  if ( (byte_4B18F71 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleObserver__Remove__, observer, method);
    byte_4B18F71 = 1;
  }
  if ( observer )
  {
    observers = (System_Collections_Generic_List_object__o *)this->fields.observers;
    if ( !observers )
      sub_1BCAA3C(0LL, observer);
    System_Collections_Generic_List_object___Remove(
      observers,
      (Il2CppObject *)observer,
      (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_BattleObserver__Remove__);
  }
}


void __fastcall BattleSubject___Notify_b__3_0(BattleSubject_o *this, BattleObserver_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  ((void (__fastcall *)(BattleObserver_o *, BattleSubject_o *, const char *))x->klass[1]._1.gc_desc)(
    x,
    this,
    x->klass[1]._1.name);
}