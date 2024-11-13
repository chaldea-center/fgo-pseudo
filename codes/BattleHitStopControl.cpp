void __fastcall BattleHitStopControl___ctor(BattleHitStopControl_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleHitStopControl__Clear(BattleHitStopControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleHitStopControl_o *v3; // x19
  struct System_Collections_Generic_List_GameObject__o *stopobjlist; // x8
  int32_t size; // w2
  int v6; // w9

  v3 = this;
  if ( (byte_4B18862 & 1) == 0 )
  {
    this = (BattleHitStopControl_o *)sub_1BCA7E0(
                                       &Method_System_Collections_Generic_List_GameObject__Clear__,
                                       method,
                                       v2);
    byte_4B18862 = 1;
  }
  stopobjlist = v3->fields.stopobjlist;
  if ( !stopobjlist )
    sub_1BCAA3C(this, method);
  size = stopobjlist->fields._size;
  v6 = stopobjlist->fields._version + 1;
  stopobjlist->fields._size = 0;
  stopobjlist->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)stopobjlist->fields._items, 0, size, 0LL);
}


void __fastcall BattleHitStopControl__Start(BattleHitStopControl_o *this, const MethodInfo *method)
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

  if ( (byte_4B18861 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v5, v6);
    byte_4B18861 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_GameObject__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.stopobjlist = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.stopobjlist, (int64_t)v7, v8, v9, v10, v11, v12, v13);
}


void __fastcall BattleHitStopControl__actWait(BattleHitStopControl_o *this, float time, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleHitStopControl__stopwaitCor(this, time, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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

  if ( (byte_4B18863 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, obj, method);
    byte_4B18863 = 1;
  }
  stopobjlist = (System_Collections_Generic_List_object__o *)this->fields.stopobjlist;
  if ( !stopobjlist
    || (items = stopobjlist->fields._items,
        v12 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++stopobjlist->fields._version,
        !items) )
  {
    sub_1BCAA3C(stopobjlist, obj);
  }
  size = stopobjlist->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      stopobjlist,
      (Il2CppObject *)obj,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    stopobjlist->fields._size = size + 1;
    v14[4] = (Il2CppClass *)obj;
    sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)obj, (int64_t)method, v3, v4, v5, v6, v7);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleHitStopControl__stopwaitCor(
        BattleHitStopControl_o *this,
        float time,
        const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B18864 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleHitStopControl__stopwaitCor_d__5_TypeInfo, method, v3);
    byte_4B18864 = 1;
  }
  v7 = sub_1BCAA2C(BattleHitStopControl__stopwaitCor_d__5_TypeInfo, method, v3, v4);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(float *)(v7 + 40) = time;
  return (System_Collections_IEnumerator_o *)v7;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t _1__state; // w9
  struct BattleHitStopControl_o *_4__this; // x8
  DefCoroutine_c *v25; // x0
  int64_t *static_fields; // x8
  int64_t v27; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  __int64 v30; // x1
  __int64 v31; // x1
  float time; // s8
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  UnityEngine_WaitForSeconds_o *v36; // x20
  PartyOrganizationUtility_o *v37; // x19
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-50h] BYREF

  v8 = this;
  if ( (byte_4B18865 & 1) == 0 )
  {
    sub_1BCA7E0(&DefCoroutine_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_23159/*"resumeAnimation"*/, v19, v20);
    this = (BattleHitStopControl__stopwaitCor_d__5_o *)sub_1BCA7E0(&StringLiteral_23798/*"stopAnimation"*/, v21, v22);
    byte_4B18865 = 1;
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v44,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
        for ( i = v44;
              System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
              UnityEngine_GameObject__SendMessage_70135704(
                (UnityEngine_GameObject_o *)i.fields._current,
                (System_String_o *)StringLiteral_23159/*"resumeAnimation"*/,
                0LL) )
        {
          if ( !i.fields._current )
            sub_1BCAA3C(0LL, v31);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &i,
          (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
        return 0;
      }
    }
LABEL_26:
    sub_1BCAA3C(this, method);
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v8->fields.__1__state = -1;
      v25 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, method);
        v25 = DefCoroutine_TypeInfo;
      }
      static_fields = (int64_t *)v25->static_fields;
      v27 = *static_fields;
      v8->fields.__2__current = (Il2CppObject *)*static_fields;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(p__2__current, v27, v2, v3, v4, v5, v6, v7);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  for ( i = v44;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        UnityEngine_GameObject__SendMessage_70135704(
          (UnityEngine_GameObject_o *)i.fields._current,
          (System_String_o *)StringLiteral_23798/*"stopAnimation"*/,
          0LL) )
  {
    if ( !i.fields._current )
      sub_1BCAA3C(0LL, v30);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  time = v8->fields.time;
  v36 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, v33, v34, v35);
  UnityEngine_WaitForSeconds___ctor(v36, time, 0LL);
  v8->fields.__2__current = (Il2CppObject *)v36;
  v37 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1BCA784(v37, (int64_t)v36, v38, v39, v40, v41, v42, v43);
  result = 1;
  *(_DWORD *)&v37[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BattleHitStopControl__stopwaitCor_d__5_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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