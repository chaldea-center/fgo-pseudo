void __fastcall BattleHitStopControl___ctor(BattleHitStopControl_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleHitStopControl__Clear(BattleHitStopControl_o *this, const MethodInfo *method)
{
  BattleHitStopControl_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *stopobjlist; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4A5D77B & 1) == 0 )
  {
    this = (BattleHitStopControl_o *)sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Clear__);
    byte_4A5D77B = 1;
  }
  stopobjlist = v2->fields.stopobjlist;
  if ( !stopobjlist )
    sub_1B8880C(this, method);
  size = stopobjlist->fields._size;
  v5 = stopobjlist->fields._version + 1;
  stopobjlist->fields._size = 0;
  stopobjlist->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)stopobjlist->fields._items, 0, size, 0LL);
}


void __fastcall BattleHitStopControl__Start(BattleHitStopControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5D77A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4A5D77A = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.stopobjlist = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.stopobjlist, (int32_t)v3, v4, v5);
}


void __fastcall BattleHitStopControl__actWait(BattleHitStopControl_o *this, float time, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleHitStopControl__stopwaitCor(this, time, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall BattleHitStopControl__setTargetObject(
        BattleHitStopControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Collections_Generic_List_object__o *stopobjlist; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_4A5D77C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    byte_4A5D77C = 1;
  }
  stopobjlist = (System_Collections_Generic_List_object__o *)this->fields.stopobjlist;
  if ( !stopobjlist
    || (items = stopobjlist->fields._items,
        v8 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++stopobjlist->fields._version,
        !items) )
  {
    sub_1B8880C(stopobjlist, obj);
  }
  size = stopobjlist->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      stopobjlist,
      (Il2CppObject *)obj,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    stopobjlist->fields._size = size + 1;
    v10[4] = (Il2CppClass *)obj;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 4), (int32_t)obj, (int32_t)method, v3);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleHitStopControl__stopwaitCor(
        BattleHitStopControl_o *this,
        float time,
        const MethodInfo *method)
{
  __int64 v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5D77D & 1) == 0 )
  {
    sub_1B885B0(&BattleHitStopControl__stopwaitCor_d__5_TypeInfo);
    byte_4A5D77D = 1;
  }
  v5 = sub_1B887FC(BattleHitStopControl__stopwaitCor_d__5_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(float *)(v5 + 40) = time;
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleHitStopControl__stopwaitCor_d__5___ctor(
        BattleHitStopControl__stopwaitCor_d__5_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleHitStopControl__stopwaitCor_d__5__MoveNext(
        BattleHitStopControl__stopwaitCor_d__5_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleHitStopControl__stopwaitCor_d__5_o *v4; // x19
  int32_t _1__state; // w9
  struct BattleHitStopControl_o *_4__this; // x8
  DefCoroutine_c *v7; // x0
  struct DefCoroutine_StaticFields *static_fields; // x8
  Il2CppObject *milliSecPointOne; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  __int64 v12; // x1
  __int64 v13; // x1
  float time; // s8
  UnityEngine_WaitForSeconds_o *v15; // x20
  ServantStatusBattleListViewItem_o *v16; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-50h] BYREF

  v4 = this;
  if ( (byte_4A5D77E & 1) == 0 )
  {
    sub_1B885B0(&DefCoroutine_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1B885B0(&StringLiteral_22912/*"resumeAnimation"*/);
    this = (BattleHitStopControl__stopwaitCor_d__5_o *)sub_1B885B0(&StringLiteral_23550/*"stopAnimation"*/);
    byte_4A5D77E = 1;
  }
  memset(&i, 0, sizeof(i));
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (BattleHitStopControl__stopwaitCor_d__5_o *)_4__this->fields.stopobjlist;
      if ( this )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v19,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
        for ( i = v19;
              System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
              UnityEngine_GameObject__SendMessage_69440840(
                (UnityEngine_GameObject_o *)i.fields._current,
                (System_String_o *)StringLiteral_22912/*"resumeAnimation"*/,
                0LL) )
        {
          if ( !i.fields._current )
            sub_1B8880C(0LL, v13);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &i,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
        return 0;
      }
    }
LABEL_26:
    sub_1B8880C(this, method);
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v4->fields.__1__state = -1;
      v7 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v7 = DefCoroutine_TypeInfo;
      }
      static_fields = v7->static_fields;
      milliSecPointOne = (Il2CppObject *)static_fields->milliSecPointOne;
      v4->fields.__2__current = (Il2CppObject *)static_fields->milliSecPointOne;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(p__2__current, (int32_t)milliSecPointOne, v2, v3);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
    return 0;
  }
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_26;
  this = (BattleHitStopControl__stopwaitCor_d__5_o *)_4__this->fields.stopobjlist;
  if ( !this )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  for ( i = v19;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        UnityEngine_GameObject__SendMessage_69440840(
          (UnityEngine_GameObject_o *)i.fields._current,
          (System_String_o *)StringLiteral_23550/*"stopAnimation"*/,
          0LL) )
  {
    if ( !i.fields._current )
      sub_1B8880C(0LL, v12);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  time = v4->fields.time;
  v15 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v15, time, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v15;
  v16 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B88554(v16, (int32_t)v15, v17, v18);
  result = 1;
  *(_DWORD *)&v16[-1].fields.isMine = 2;
  return result;
}


Il2CppObject *__fastcall BattleHitStopControl__stopwaitCor_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleHitStopControl__stopwaitCor_d__5_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleHitStopControl__stopwaitCor_d__5__System_Collections_IEnumerator_Reset(
        BattleHitStopControl__stopwaitCor_d__5_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleHitStopControl__stopwaitCor_d__5_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BattleHitStopControl__stopwaitCor_d__5__System_Collections_IEnumerator_get_Current(
        BattleHitStopControl__stopwaitCor_d__5_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleHitStopControl__stopwaitCor_d__5__System_IDisposable_Dispose(
        BattleHitStopControl__stopwaitCor_d__5_o *this,
        const MethodInfo *method)
{
  ;
}