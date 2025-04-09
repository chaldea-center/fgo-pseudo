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
  if ( (byte_49BD659 & 1) == 0 )
  {
    this = (BattleHitStopControl_o *)sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__Clear__, method);
    byte_49BD659 = 1;
  }
  stopobjlist = v2->fields.stopobjlist;
  if ( !stopobjlist )
    sub_1B4D1EC(this, method);
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_49BD658 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1B4CF90(&System_Collections_Generic_List_GameObject__TypeInfo, v3);
    byte_49BD658 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.stopobjlist = (struct System_Collections_Generic_List_GameObject__o *)v4;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.stopobjlist, (int32_t)v4, v5, v6);
}


void __fastcall BattleHitStopControl__actWait(BattleHitStopControl_o *this, float time, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleHitStopControl__stopwaitCor(this, time, method);
  UnityEngine_MonoBehaviour__StartCoroutine_68789728((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall BattleHitStopControl__setTargetObject(
        BattleHitStopControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_List_object__o *stopobjlist; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_49BD65A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__Add__, obj);
    byte_49BD65A = 1;
  }
  stopobjlist = (System_Collections_Generic_List_object__o *)this->fields.stopobjlist;
  if ( !stopobjlist
    || (items = stopobjlist->fields._items,
        v8 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++stopobjlist->fields._version,
        !items) )
  {
    sub_1B4D1EC(stopobjlist, obj);
  }
  size = stopobjlist->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      stopobjlist,
      (Il2CppObject *)obj,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    stopobjlist->fields._size = size + 1;
    v10[4] = (Il2CppClass *)obj;
    sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 4), (int32_t)obj, (int32_t)method, v3);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleHitStopControl__stopwaitCor(
        BattleHitStopControl_o *this,
        float time,
        const MethodInfo *method)
{
  __int64 v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_49BD65B & 1) == 0 )
  {
    sub_1B4CF90(&BattleHitStopControl__stopwaitCor_d__5_TypeInfo, method);
    byte_49BD65B = 1;
  }
  v5 = sub_1B4D1DC(BattleHitStopControl__stopwaitCor_d__5_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
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
  const MethodInfo *v3; // x3
  BattleHitStopControl__stopwaitCor_d__5_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w9
  struct BattleHitStopControl_o *_4__this; // x8
  DefCoroutine_c *v14; // x0
  struct DefCoroutine_StaticFields *static_fields; // x8
  Il2CppObject *milliSecPointOne; // x1
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  __int64 v19; // x1
  __int64 v20; // x1
  float time; // s8
  UnityEngine_WaitForSeconds_o *v22; // x20
  CGThumbnailListItem_o *v23; // x19
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-50h] BYREF

  v4 = this;
  if ( (byte_49BD65C & 1) == 0 )
  {
    sub_1B4CF90(&DefCoroutine_TypeInfo, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_1B4CF90(&UnityEngine_WaitForSeconds_TypeInfo, v9);
    sub_1B4CF90(&StringLiteral_22636/*"resumeAnimation"*/, v10);
    this = (BattleHitStopControl__stopwaitCor_d__5_o *)sub_1B4CF90(&StringLiteral_23268/*"stopAnimation"*/, v11);
    byte_49BD65C = 1;
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v26,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
        for ( i = v26;
              System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
              UnityEngine_GameObject__SendMessage_68785916(
                (UnityEngine_GameObject_o *)i.fields._current,
                (System_String_o *)StringLiteral_22636/*"resumeAnimation"*/,
                0LL) )
        {
          if ( !i.fields._current )
            sub_1B4D1EC(0LL, v20);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &i,
          (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
        return 0;
      }
    }
LABEL_26:
    sub_1B4D1EC(this, method);
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v4->fields.__1__state = -1;
      v14 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v14 = DefCoroutine_TypeInfo;
      }
      static_fields = v14->static_fields;
      milliSecPointOne = (Il2CppObject *)static_fields->milliSecPointOne;
      v4->fields.__2__current = (Il2CppObject *)static_fields->milliSecPointOne;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1B4CF34(p__2__current, (int32_t)milliSecPointOne, v2, v3);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  for ( i = v26;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        UnityEngine_GameObject__SendMessage_68785916(
          (UnityEngine_GameObject_o *)i.fields._current,
          (System_String_o *)StringLiteral_23268/*"stopAnimation"*/,
          0LL) )
  {
    if ( !i.fields._current )
      sub_1B4D1EC(0LL, v19);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  time = v4->fields.time;
  v22 = (UnityEngine_WaitForSeconds_o *)sub_1B4D1DC(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v22, time, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v22;
  v23 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1B4CF34(v23, (int32_t)v22, v24, v25);
  result = 1;
  LODWORD(v23[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
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

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_BattleHitStopControl__stopwaitCor_d__5_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
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