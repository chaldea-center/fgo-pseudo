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
  if ( (byte_4BB6DEC & 1) == 0 )
  {
    this = (BattleHitStopControl_o *)sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    byte_4BB6DEC = 1;
  }
  stopobjlist = v2->fields.stopobjlist;
  if ( !stopobjlist )
    sub_1C13F80(this, method);
  size = stopobjlist->fields._size;
  v5 = stopobjlist->fields._version + 1;
  stopobjlist->fields._size = 0;
  stopobjlist->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)stopobjlist->fields._items, 0, size, 0LL);
}


void __fastcall BattleHitStopControl__Start(BattleHitStopControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BB6DEB & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1C13D24(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_4BB6DEB = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.stopobjlist = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.stopobjlist, (int64_t)v4, v5, v6, v7, v8, v9, v10);
}


void __fastcall BattleHitStopControl__actWait(BattleHitStopControl_o *this, float time, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleHitStopControl__stopwaitCor(this, time, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70707260((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall BattleHitStopControl__setTargetObject(
        BattleHitStopControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Collections_Generic_List_object__o *stopobjlist; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4BB6DED & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Add__, obj);
    byte_4BB6DED = 1;
  }
  stopobjlist = (System_Collections_Generic_List_object__o *)this->fields.stopobjlist;
  if ( !stopobjlist
    || (items = stopobjlist->fields._items,
        v12 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++stopobjlist->fields._version,
        !items) )
  {
    sub_1C13F80(stopobjlist, obj);
  }
  size = stopobjlist->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      stopobjlist,
      (Il2CppObject *)obj,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    stopobjlist->fields._size = size + 1;
    v14[4] = (Il2CppClass *)obj;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)obj, (int64_t)method, v3, v4, v5, v6, v7);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleHitStopControl__stopwaitCor(
        BattleHitStopControl_o *this,
        float time,
        const MethodInfo *method)
{
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BB6DEE & 1) == 0 )
  {
    sub_1C13D24(&BattleHitStopControl__stopwaitCor_d__5_TypeInfo, method);
    byte_4BB6DEE = 1;
  }
  v5 = sub_1C13F70(BattleHitStopControl__stopwaitCor_d__5_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleHitStopControl__stopwaitCor_d__5_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t _1__state; // w9
  struct BattleHitStopControl_o *_4__this; // x8
  DefCoroutine_c *v18; // x0
  int64_t *static_fields; // x8
  int64_t v20; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  __int64 v23; // x1
  __int64 v24; // x1
  float time; // s8
  UnityEngine_WaitForSeconds_o *v26; // x20
  PartyOrganizationUtility_o *v27; // x19
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-50h] BYREF

  v8 = this;
  if ( (byte_4BB6DEF & 1) == 0 )
  {
    sub_1C13D24(&DefCoroutine_TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v12);
    sub_1C13D24(&UnityEngine_WaitForSeconds_TypeInfo, v13);
    sub_1C13D24(&StringLiteral_23291/*"resourceName"*/, v14);
    this = (BattleHitStopControl__stopwaitCor_d__5_o *)sub_1C13D24(&StringLiteral_23938/*"status_raid_frame"*/, v15);
    byte_4BB6DEF = 1;
  }
  memset(&i, 0, sizeof(i));
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (BattleHitStopControl__stopwaitCor_d__5_o *)_4__this->fields.stopobjlist;
      if ( this )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v34,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
        for ( i = v34;
              System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
              UnityEngine_GameObject__SendMessage_70703448(
                (UnityEngine_GameObject_o *)i.fields._current,
                (System_String_o *)StringLiteral_23291/*"resourceName"*/,
                0LL) )
        {
          if ( !i.fields._current )
            sub_1C13F80(0LL, v24);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &i,
          (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
        return 0;
      }
    }
LABEL_26:
    sub_1C13F80(this, method);
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v8->fields.__1__state = -1;
      v18 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v18 = DefCoroutine_TypeInfo;
      }
      static_fields = (int64_t *)v18->static_fields;
      v20 = *static_fields;
      v8->fields.__2__current = (Il2CppObject *)*static_fields;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C13CC8(p__2__current, v20, v2, v3, v4, v5, v6, v7);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    }
    return 0;
  }
  v8->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_26;
  this = (BattleHitStopControl__stopwaitCor_d__5_o *)_4__this->fields.stopobjlist;
  if ( !this )
    goto LABEL_26;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  for ( i = v34;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        UnityEngine_GameObject__SendMessage_70703448(
          (UnityEngine_GameObject_o *)i.fields._current,
          (System_String_o *)StringLiteral_23938/*"status_raid_frame"*/,
          0LL) )
  {
    if ( !i.fields._current )
      sub_1C13F80(0LL, v23);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  time = v8->fields.time;
  v26 = (UnityEngine_WaitForSeconds_o *)sub_1C13F70(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v26, time, 0LL);
  v8->fields.__2__current = (Il2CppObject *)v26;
  v27 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1C13CC8(v27, (int64_t)v26, v28, v29, v30, v31, v32, v33);
  result = 1;
  *(_DWORD *)&v27[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
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

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_BattleHitStopControl__stopwaitCor_d__5_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
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