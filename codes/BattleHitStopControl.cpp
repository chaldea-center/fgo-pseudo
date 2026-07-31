void BattleHitStopControl___ctor(BattleHitStopControl_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleHitStopControl__Clear(BattleHitStopControl_o *this, const MethodInfo *method)
{
  BattleHitStopControl_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *stopobjlist; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_593B34D & 1) == 0 )
  {
    this = (BattleHitStopControl_o *)sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Clear__);
    byte_593B34D = 1;
  }
  stopobjlist = v2->fields.stopobjlist;
  if ( !stopobjlist )
    sub_21FFECC(this, method);
  size = stopobjlist->fields._size;
  v5 = stopobjlist->fields._version + 1;
  stopobjlist->fields._size = 0;
  stopobjlist->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)stopobjlist->fields._items, 0, size, 0);
}


void BattleHitStopControl__Start(BattleHitStopControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593B34C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_593B34C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.stopobjlist = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.stopobjlist, (int32_t)v3, v4, v5, v6, v7, v8, v9);
}


void BattleHitStopControl__actWait(BattleHitStopControl_o *this, float time, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleHitStopControl__stopwaitCor(this, time, method);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v4, 0);
}


void BattleHitStopControl__setTargetObject(
        BattleHitStopControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleHitStopControl_o *v9; // x20
  System_Collections_Generic_List_object__o *stopobjlist; // x8
  struct System_Object_array *items; // x9
  _QWORD *v12; // x10
  __int64 size; // x11
  Il2CppClass **v14; // x0

  v9 = this;
  if ( (byte_593B34E & 1) == 0 )
  {
    this = (BattleHitStopControl_o *)sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    byte_593B34E = 1;
  }
  stopobjlist = (System_Collections_Generic_List_object__o *)v9->fields.stopobjlist;
  if ( !stopobjlist
    || (items = stopobjlist->fields._items,
        v12 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++stopobjlist->fields._version,
        !items) )
  {
    sub_21FFECC(this, obj);
  }
  size = stopobjlist->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      stopobjlist,
      (Il2CppObject *)obj,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    stopobjlist->fields._size = size + 1;
    v14[4] = (Il2CppClass *)obj;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v14 + 4),
      (int32_t)obj,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


System_Collections_IEnumerator_o *BattleHitStopControl__stopwaitCor(
        BattleHitStopControl_o *this,
        float time,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_593B34F & 1) == 0 )
  {
    sub_21FFC50(&BattleHitStopControl__stopwaitCor_d__5_TypeInfo);
    byte_593B34F = 1;
  }
  v5 = sub_21FFEBC(BattleHitStopControl__stopwaitCor_d__5_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  result = (System_Collections_IEnumerator_o *)v5;
  *(float *)(v5 + 40) = time;
  return result;
}


void BattleHitStopControl__stopwaitCor_d__5___ctor(
        BattleHitStopControl__stopwaitCor_d__5_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleHitStopControl__stopwaitCor_d__5__MoveNext(
        BattleHitStopControl__stopwaitCor_d__5_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleHitStopControl__stopwaitCor_d__5_o *v8; // x19
  int32_t _1__state; // w9
  struct BattleHitStopControl_o *_4__this; // x8
  DefCoroutine_c *v11; // x0
  struct DefCoroutine_StaticFields *static_fields; // x8
  Il2CppObject *milliSecPointOne; // x1
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  bool result; // w0
  __int64 v16; // x1
  __int64 v17; // x1
  float time; // s8
  UnityEngine_WaitForSeconds_o *v19; // x20
  MissionNaviTransitionBoardItem_o *v20; // x19
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+18h] [xbp-48h] BYREF

  v8 = this;
  if ( (byte_593B350 & 1) == 0 )
  {
    sub_21FFC50(&DefCoroutine_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_21FFC50(&StringLiteral_24244/*"resumeAnimation"*/);
    this = (BattleHitStopControl__stopwaitCor_d__5_o *)sub_21FFC50(&StringLiteral_24925/*"stopAnimation"*/);
    byte_593B350 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  memset(&v27, 0, sizeof(v27));
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (BattleHitStopControl__stopwaitCor_d__5_o *)_4__this->fields.stopobjlist;
      if ( this )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v27,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v27,
                  (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
        {
          if ( !v27.fields._current )
            sub_21FFECC(0, v17);
          UnityEngine_GameObject__SendMessage_83224792(
            (UnityEngine_GameObject_o *)v27.fields._current,
            (System_String_o *)StringLiteral_24244/*"resumeAnimation"*/,
            0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v27,
          (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
        return 0;
      }
    }
LABEL_26:
    sub_21FFECC(this, method);
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v8->fields.__1__state = -1;
      v11 = DefCoroutine_TypeInfo;
      if ( !*(&DefCoroutine_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo, method);
        v11 = DefCoroutine_TypeInfo;
      }
      static_fields = v11->static_fields;
      milliSecPointOne = (Il2CppObject *)static_fields->milliSecPointOne;
      v8->fields.__2__current = (Il2CppObject *)static_fields->milliSecPointOne;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_21FFBF4(p__2__current, (int32_t)milliSecPointOne, v2, v3, v4, v5, v6, v7);
      result = 1;
      p__2__current[-1].fields._BoardType_k__BackingField = 1;
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v27.fields._current )
      sub_21FFECC(0, v16);
    UnityEngine_GameObject__SendMessage_83224792(
      (UnityEngine_GameObject_o *)v27.fields._current,
      (System_String_o *)StringLiteral_24925/*"stopAnimation"*/,
      0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  time = v8->fields.time;
  v19 = (UnityEngine_WaitForSeconds_o *)sub_21FFEBC(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v19, time, 0);
  v8->fields.__2__current = (Il2CppObject *)v19;
  v20 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
  sub_21FFBF4(v20, (int32_t)v19, v21, v22, v23, v24, v25, v26);
  result = 1;
  v20[-1].fields._BoardType_k__BackingField = 2;
  return result;
}


Il2CppObject *BattleHitStopControl__stopwaitCor_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleHitStopControl__stopwaitCor_d__5_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleHitStopControl__stopwaitCor_d__5__System_Collections_IEnumerator_Reset(
        BattleHitStopControl__stopwaitCor_d__5_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_BattleHitStopControl__stopwaitCor_d__5_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *BattleHitStopControl__stopwaitCor_d__5__System_Collections_IEnumerator_get_Current(
        BattleHitStopControl__stopwaitCor_d__5_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleHitStopControl__stopwaitCor_d__5__System_IDisposable_Dispose(
        BattleHitStopControl__stopwaitCor_d__5_o *this,
        const MethodInfo *method)
{
  ;
}