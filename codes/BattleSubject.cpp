void BattleSubject___ctor(BattleSubject_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C4637B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_BattleObserver___ctor__);
    sub_1C37058(&System_Collections_Generic_List_BattleObserver__TypeInfo);
    byte_4C4637B = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BattleObserver__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BattleObserver___ctor__);
  this->fields.observers = (struct System_Collections_Generic_List_BattleObserver__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleSubject__Add(BattleSubject_o *this, BattleObserver_o *observer, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *observers; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4C46378 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_BattleObserver__Add__);
    byte_4C46378 = 1;
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
      sub_1C372B4(observers);
    }
    size = observers->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        observers,
        (Il2CppObject *)observer,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    }
    else
    {
      v10 = &items->obj.klass + size;
      observers->fields._size = size + 1;
      v10[4] = (Il2CppClass *)observer;
      sub_1C36FFC((CGThumbnailListItem_o *)(v10 + 4), (int32_t)observer, (int32_t)method, v3);
    }
  }
}


void BattleSubject__Notify(BattleSubject_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *observers; // x20
  System_Action_object__o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C4637A & 1) == 0 )
  {
    sub_1C37058(&System_Action_BattleObserver__TypeInfo);
    sub_1C37058(&Method_BattleSubject__Notify_b__3_0__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleObserver__ForEach__);
    byte_4C4637A = 1;
  }
  observers = (System_Collections_Generic_List_object__o *)this->fields.observers;
  v4 = (System_Action_object__o *)sub_1C372A4(System_Action_BattleObserver__TypeInfo);
  System_Action_object____ctor(v4, (Il2CppObject *)this, Method_BattleSubject__Notify_b__3_0__, 0);
  if ( !observers )
    sub_1C372B4(v5);
  System_Collections_Generic_List_object___ForEach(
    observers,
    (System_Action_T__o *)v4,
    (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_BattleObserver__ForEach__);
}


void BattleSubject__Remove(BattleSubject_o *this, BattleObserver_o *observer, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *observers; // x0

  if ( (byte_4C46379 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_BattleObserver__Remove__);
    byte_4C46379 = 1;
  }
  if ( observer )
  {
    observers = (System_Collections_Generic_List_object__o *)this->fields.observers;
    if ( !observers )
      sub_1C372B4(0);
    System_Collections_Generic_List_object___Remove(
      observers,
      (Il2CppObject *)observer,
      (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_BattleObserver__Remove__);
  }
}


void BattleSubject___Notify_b__3_0(BattleSubject_o *this, BattleObserver_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  ((void (__fastcall *)(BattleObserver_o *, BattleSubject_o *, void *))x->klass[1]._1.image)(
    x,
    this,
    x->klass[1]._1.gc_desc);
}