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
  if ( (byte_4CC9F9D & 1) == 0 )
  {
    this = (BattleHitStopControl_o *)sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__Clear__);
    byte_4CC9F9D = 1;
  }
  stopobjlist = v2->fields.stopobjlist;
  if ( !stopobjlist )
    sub_1C71608(this, method);
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
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CC9F9C & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4CC9F9C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.stopobjlist = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.stopobjlist, (int32_t)v3, v4, v5, v6, v7, v8, v9);
}


void BattleHitStopControl__actWait(BattleHitStopControl_o *this, float time, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleHitStopControl__stopwaitCor(this, time, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v4, 0);
}


void BattleHitStopControl__setTargetObject(
        BattleHitStopControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_List_object__o *stopobjlist; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4CC9F9E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    byte_4CC9F9E = 1;
  }
  stopobjlist = (System_Collections_Generic_List_object__o *)this->fields.stopobjlist;
  if ( !stopobjlist
    || (items = stopobjlist->fields._items,
        v12 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++stopobjlist->fields._version,
        !items) )
  {
    sub_1C71608(stopobjlist, obj);
  }
  size = stopobjlist->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      stopobjlist,
      (Il2CppObject *)obj,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    stopobjlist->fields._size = size + 1;
    v14[4] = (Il2CppClass *)obj;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v14 + 4), (int32_t)obj, (int32_t)method, v3, v4, v5, v6, v7);
  }
}


System_Collections_IEnumerator_o *BattleHitStopControl__stopwaitCor(
        BattleHitStopControl_o *this,
        float time,
        const MethodInfo *method)
{
  __int64 v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CC9F9F & 1) == 0 )
  {
    sub_1C713B0(&BattleHitStopControl__stopwaitCor_d__5_TypeInfo);
    byte_4CC9F9F = 1;
  }
  v5 = sub_1C715FC(BattleHitStopControl__stopwaitCor_d__5_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(float *)(v5 + 40) = time;
  return (System_Collections_IEnumerator_o *)v5;
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattleHitStopControl__stopwaitCor_d__5_o *v8; // x19
  int32_t _1__state; // w9
  struct BattleHitStopControl_o *_4__this; // x8
  DefCoroutine_c *v11; // x0
  struct DefCoroutine_StaticFields *static_fields; // x8
  Il2CppObject *milliSecPointOne; // x1
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  bool result; // w0
  __int64 v16; // x1
  __int64 v17; // x1
  float time; // s8
  UnityEngine_WaitForSeconds_o *v19; // x20
  GrandQuestFolderBoardItem_o *v20; // x19
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-50h] BYREF

  v8 = this;
  if ( (byte_4CC9FA0 & 1) == 0 )
  {
    sub_1C713B0(&DefCoroutine_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C713B0(&UnityEngine_WaitForSeconds_TypeInfo);
    sub_1C713B0(&StringLiteral_23200/*"resumeAnimation"*/);
    this = (BattleHitStopControl__stopwaitCor_d__5_o *)sub_1C713B0(&StringLiteral_23827/*"stopAnimation"*/);
    byte_4CC9FA0 = 1;
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v27,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
        for ( i = v27;
              System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
              UnityEngine_GameObject__SendMessage_71705976(
                (UnityEngine_GameObject_o *)i.fields._current,
                (System_String_o *)StringLiteral_23200/*"resumeAnimation"*/,
                0) )
        {
          if ( !i.fields._current )
            sub_1C71608(0, v17);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &i,
          (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
        return 0;
      }
    }
LABEL_26:
    sub_1C71608(this, method);
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v8->fields.__1__state = -1;
      v11 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v11 = DefCoroutine_TypeInfo;
      }
      static_fields = v11->static_fields;
      milliSecPointOne = (Il2CppObject *)static_fields->milliSecPointOne;
      v8->fields.__2__current = (Il2CppObject *)static_fields->milliSecPointOne;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C71354(p__2__current, (int32_t)milliSecPointOne, v2, v3, v4, v5, v6, v7);
      result = 1;
      LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
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
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  for ( i = v27;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        UnityEngine_GameObject__SendMessage_71705976(
          (UnityEngine_GameObject_o *)i.fields._current,
          (System_String_o *)StringLiteral_23827/*"stopAnimation"*/,
          0) )
  {
    if ( !i.fields._current )
      sub_1C71608(0, v16);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  time = v8->fields.time;
  v19 = (UnityEngine_WaitForSeconds_o *)sub_1C715FC(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(v19, time, 0);
  v8->fields.__2__current = (Il2CppObject *)v19;
  v20 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
  sub_1C71354(v20, (int32_t)v19, v21, v22, v23, v24, v25, v26);
  result = 1;
  LODWORD(v20[-1].fields._ClosedMessage_k__BackingField) = 2;
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

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_BattleHitStopControl__stopwaitCor_d__5_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
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