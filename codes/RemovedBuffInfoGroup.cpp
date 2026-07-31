void RemovedBuffInfoGroup___ctor(RemovedBuffInfoGroup_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593B6B9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__RemovedBuffInfo__TypeInfo);
    byte_593B6B9 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__RemovedBuffInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo___ctor__);
  this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField = (struct System_Collections_Generic_Dictionary_int__RemovedBuffInfo__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
void RemovedBuffInfoGroup__Register(
        RemovedBuffInfoGroup_o *this,
        int32_t targetServantUniqueId,
        RemovedBuffInfo_o *removedBuffInfo,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__RemovedBuffInfo__o *servantUniqueIdToRemovedBuffInfoMap_k__BackingField; // x0

  if ( (byte_593B6BA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__set_Item__);
    byte_593B6BA = 1;
  }
  servantUniqueIdToRemovedBuffInfoMap_k__BackingField = this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField;
  if ( !servantUniqueIdToRemovedBuffInfoMap_k__BackingField )
    sub_21FFECC(0, *(_QWORD *)&targetServantUniqueId);
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)servantUniqueIdToRemovedBuffInfoMap_k__BackingField,
    targetServantUniqueId,
    (Il2CppObject *)removedBuffInfo,
    (const MethodInfo_3F68CF4 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__set_Item__);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *RemovedBuffInfoGroup__RemovedAllBuffEnumerable(
        RemovedBuffInfoGroup_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593B6BB & 1) == 0 )
  {
    sub_21FFC50(&RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo);
    byte_593B6BB = 1;
  }
  v3 = sub_21FFEBC(RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 40), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v3;
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable(
        RemovedBuffInfoGroup_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593B6BC & 1) == 0 )
  {
    sub_21FFC50(&RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo);
    byte_593B6BC = 1;
  }
  v3 = sub_21FFEBC(RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 40), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v3;
}


System_Collections_Generic_Dictionary_int__RemovedBuffInfo__o *RemovedBuffInfoGroup__get_servantUniqueIdToRemovedBuffInfoMap(
        RemovedBuffInfoGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField;
}


void RemovedBuffInfoGroup__set_servantUniqueIdToRemovedBuffInfoMap(
        RemovedBuffInfoGroup_o *this,
        System_Collections_Generic_Dictionary_int__RemovedBuffInfo__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6___ctor(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6__MoveNext(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v2; // x19
  int32_t _1__state; // w8
  struct RemovedBuffInfoGroup_o *_4__this; // x8
  System_Collections_Generic_Dictionary_int__object__o *servantUniqueIdToRemovedBuffInfoMap_k__BackingField; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // q1
  __int64 v7; // x8
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v8; // x9
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v15; // x8
  bool result; // w0
  const MethodInfo *v17; // x1
  Il2CppObject *value; // x8
  System_Collections_Generic_List_object__o *klass; // x0
  Il2CppObject *key; // x8
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v21; // x9
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  const MethodInfo_40C7F4C *v28; // x1
  const MethodInfo *v29; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  bool v36; // w8
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v37; // x0
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v38; // x8
  struct BattleBuffData_BuffData_o *v39; // x1
  __int64 v40; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v41; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v42; // [xsp+30h] [xbp-70h]
  __int64 v43; // [xsp+60h] [xbp-40h]
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o **v44; // [xsp+68h] [xbp-38h] BYREF
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v45; // [xsp+78h] [xbp-28h] BYREF

  v45 = this;
  v2 = this;
  if ( (byte_593B6BD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__RemovedBuffInfo__get_Value__);
    this = (RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *)sub_21FFC50(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_593B6BD = 1;
  }
  _1__state = v2->fields.__1__state;
  v43 = 0;
  v44 = &v45;
  if ( _1__state == 1 )
    goto LABEL_15;
  if ( _1__state )
  {
    result = 0;
  }
  else
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_21FFECC(this, method);
    servantUniqueIdToRemovedBuffInfoMap_k__BackingField = (System_Collections_Generic_Dictionary_int__object__o *)_4__this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField;
    if ( !servantUniqueIdToRemovedBuffInfoMap_k__BackingField )
      sub_21FFECC(0, method);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v41,
      servantUniqueIdToRemovedBuffInfoMap_k__BackingField,
      (const MethodInfo_3F69144 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__);
    current = v41.fields._current;
    v7 = *(_QWORD *)&v41.fields._getEnumeratorRetType;
    v8 = v45;
    v42 = v41;
    *(_OWORD *)&v45->fields.__7__wrap1.fields._dictionary = *(_OWORD *)&v41.fields._dictionary;
    v8->fields.__7__wrap1.fields._current = current;
    *(_QWORD *)&v8->fields.__7__wrap1.fields._getEnumeratorRetType = v7;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields.__7__wrap1, 0, v9, v10, v11, v12, v13, v14);
    v15 = v45;
    v45->fields.__1__state = -3;
    while ( 1 )
    {
      if ( !System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v15->fields.__7__wrap1,
              (const MethodInfo_41249BC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__) )
      {
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally1(v45, v17);
        v38 = v45;
        result = 0;
        *(_QWORD *)&v45->fields.__7__wrap1.fields._getEnumeratorRetType = 0;
        *(_OWORD *)&v38->fields.__7__wrap1.fields._dictionary = 0u;
        v38->fields.__7__wrap1.fields._current = 0u;
        goto LABEL_19;
      }
      value = v45->fields.__7__wrap1.fields._current.fields.value;
      if ( !value )
        sub_21FFECC(v45, v17);
      klass = (System_Collections_Generic_List_object__o *)value[1].klass;
      if ( !klass )
        sub_21FFECC(0, v17);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v41,
        klass,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      key = v41.fields._current.fields.key;
      v21 = v45;
      *(_OWORD *)&v42.fields._dictionary = *(_OWORD *)&v41.fields._dictionary;
      v42.fields._current.fields.key = v41.fields._current.fields.key;
      *(_OWORD *)&v45->fields.__7__wrap2.fields._list = *(_OWORD *)&v41.fields._dictionary;
      v21->fields.__7__wrap2.fields._current = (struct BattleBuffData_BuffData_o *)key;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->fields.__7__wrap2, 0, v22, v23, v24, v25, v26, v27);
      v2 = v45;
LABEL_15:
      v28 = (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__;
      v2->fields.__1__state = -4;
      v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap2,
              v28);
      v37 = v45;
      if ( v36 )
        break;
      RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally2(v45, v29);
      v15 = v45;
      *(_QWORD *)&v45->fields.__7__wrap2.fields._index = 0;
      v15->fields.__7__wrap2.fields._current = 0;
      v15->fields.__7__wrap2.fields._list = 0;
    }
    v39 = v45->fields.__7__wrap2.fields._current;
    v45->fields.__2__current = v39;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v37->fields.__2__current,
      (int32_t)v39,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    result = 1;
    v45->fields.__1__state = 1;
  }
LABEL_19:
  v40 = v43;
  if ( v43 )
  {
    sub_1FFEF78(&v44, method);
    sub_21FFEC4(v40);
  }
  return result;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  int32_t CurrentManagedThreadId; // w0
  struct RemovedBuffInfoGroup_o *_4__this; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_593B6C0 & 1) == 0 )
  {
    sub_21FFC50(&RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo);
    byte_593B6C0 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_21FFEBC(RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_DWORD *)(v4 + 32) = CurrentManagedThreadId;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 40), (int32_t)_4__this, v7, v8, v9, v10, v11, v12);
    return (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)this;
}


BattleBuffData_BuffData_o *RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6__System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__get_Current(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6__System_Collections_IEnumerator_Reset(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6__System_Collections_IEnumerator_get_Current(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6__System_IDisposable_Dispose(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( (_1__state & 0xFFFFFFFE) == 0xFFFFFFFC )
  {
    if ( _1__state != -4 )
      goto LABEL_6;
  }
  else if ( _1__state != 1 )
  {
    return;
  }
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally2(this, method);
LABEL_6:
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally1(this, method);
}


void RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally1(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  const MethodInfo_4124AE0 *v3; // x1

  if ( (byte_593B6BE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__);
    byte_593B6BE = 1;
  }
  v3 = (const MethodInfo_4124AE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__;
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    v3);
}


void RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally2(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  const MethodInfo_40C7F48 *v3; // x1

  if ( (byte_593B6BF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    byte_593B6BF = 1;
  }
  v3 = (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__;
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap2,
    v3);
}


void RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7___ctor(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7__MoveNext(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v2; // x19
  int32_t _1__state; // w8
  struct RemovedBuffInfoGroup_o *_4__this; // x8
  System_Collections_Generic_Dictionary_int__object__o *servantUniqueIdToRemovedBuffInfoMap_k__BackingField; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // q1
  __int64 v7; // x8
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v8; // x9
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v15; // x8
  bool result; // w0
  const MethodInfo *v17; // x1
  Il2CppObject *value; // x8
  System_Collections_Generic_List_object__o *monitor; // x0
  Il2CppObject *key; // x8
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v21; // x9
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  const MethodInfo_40C7F4C *v28; // x1
  const MethodInfo *v29; // x1
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  bool v36; // w8
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v37; // x0
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v38; // x8
  struct BattleBuffData_BuffData_o *v39; // x1
  __int64 v40; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v41; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v42; // [xsp+30h] [xbp-70h]
  __int64 v43; // [xsp+60h] [xbp-40h]
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o **v44; // [xsp+68h] [xbp-38h] BYREF
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v45; // [xsp+78h] [xbp-28h] BYREF

  v45 = this;
  v2 = this;
  if ( (byte_593B6C1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__RemovedBuffInfo__get_Value__);
    this = (RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *)sub_21FFC50(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_593B6C1 = 1;
  }
  _1__state = v2->fields.__1__state;
  v43 = 0;
  v44 = &v45;
  if ( _1__state == 1 )
    goto LABEL_15;
  if ( _1__state )
  {
    result = 0;
  }
  else
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_21FFECC(this, method);
    servantUniqueIdToRemovedBuffInfoMap_k__BackingField = (System_Collections_Generic_Dictionary_int__object__o *)_4__this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField;
    if ( !servantUniqueIdToRemovedBuffInfoMap_k__BackingField )
      sub_21FFECC(0, method);
    System_Collections_Generic_Dictionary_int__object___GetEnumerator(
      &v41,
      servantUniqueIdToRemovedBuffInfoMap_k__BackingField,
      (const MethodInfo_3F69144 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__);
    current = v41.fields._current;
    v7 = *(_QWORD *)&v41.fields._getEnumeratorRetType;
    v8 = v45;
    v42 = v41;
    *(_OWORD *)&v45->fields.__7__wrap1.fields._dictionary = *(_OWORD *)&v41.fields._dictionary;
    v8->fields.__7__wrap1.fields._current = current;
    *(_QWORD *)&v8->fields.__7__wrap1.fields._getEnumeratorRetType = v7;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields.__7__wrap1, 0, v9, v10, v11, v12, v13, v14);
    v15 = v45;
    v45->fields.__1__state = -3;
    while ( 1 )
    {
      if ( !System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
              (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v15->fields.__7__wrap1,
              (const MethodInfo_41249BC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__) )
      {
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally1(v45, v17);
        v38 = v45;
        result = 0;
        *(_QWORD *)&v45->fields.__7__wrap1.fields._getEnumeratorRetType = 0;
        *(_OWORD *)&v38->fields.__7__wrap1.fields._dictionary = 0u;
        v38->fields.__7__wrap1.fields._current = 0u;
        goto LABEL_19;
      }
      value = v45->fields.__7__wrap1.fields._current.fields.value;
      if ( !value )
        sub_21FFECC(v45, v17);
      monitor = (System_Collections_Generic_List_object__o *)value[1].monitor;
      if ( !monitor )
        sub_21FFECC(0, v17);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v41,
        monitor,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      key = v41.fields._current.fields.key;
      v21 = v45;
      *(_OWORD *)&v42.fields._dictionary = *(_OWORD *)&v41.fields._dictionary;
      v42.fields._current.fields.key = v41.fields._current.fields.key;
      *(_OWORD *)&v45->fields.__7__wrap2.fields._list = *(_OWORD *)&v41.fields._dictionary;
      v21->fields.__7__wrap2.fields._current = (struct BattleBuffData_BuffData_o *)key;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->fields.__7__wrap2, 0, v22, v23, v24, v25, v26, v27);
      v2 = v45;
LABEL_15:
      v28 = (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__;
      v2->fields.__1__state = -4;
      v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap2,
              v28);
      v37 = v45;
      if ( v36 )
        break;
      RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally2(v45, v29);
      v15 = v45;
      *(_QWORD *)&v45->fields.__7__wrap2.fields._index = 0;
      v15->fields.__7__wrap2.fields._current = 0;
      v15->fields.__7__wrap2.fields._list = 0;
    }
    v39 = v45->fields.__7__wrap2.fields._current;
    v45->fields.__2__current = v39;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v37->fields.__2__current,
      (int32_t)v39,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    result = 1;
    v45->fields.__1__state = 1;
  }
LABEL_19:
  v40 = v43;
  if ( v43 )
  {
    sub_1FFEF84(&v44, method);
    sub_21FFEC4(v40);
  }
  return result;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  int32_t CurrentManagedThreadId; // w0
  struct RemovedBuffInfoGroup_o *_4__this; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_593B6C4 & 1) == 0 )
  {
    sub_21FFC50(&RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo);
    byte_593B6C4 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_21FFEBC(RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_DWORD *)(v4 + 32) = CurrentManagedThreadId;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 40), (int32_t)_4__this, v7, v8, v9, v10, v11, v12);
    return (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)this;
}


BattleBuffData_BuffData_o *RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7__System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__get_Current(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7__System_Collections_IEnumerator_Reset(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7__System_Collections_IEnumerator_get_Current(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7__System_IDisposable_Dispose(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( (_1__state & 0xFFFFFFFE) == 0xFFFFFFFC )
  {
    if ( _1__state != -4 )
      goto LABEL_6;
  }
  else if ( _1__state != 1 )
  {
    return;
  }
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally2(this, method);
LABEL_6:
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally1(this, method);
}


void RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally1(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  const MethodInfo_4124AE0 *v3; // x1

  if ( (byte_593B6C2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__);
    byte_593B6C2 = 1;
  }
  v3 = (const MethodInfo_4124AE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__;
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    v3);
}


void RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally2(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  const MethodInfo_40C7F48 *v3; // x1

  if ( (byte_593B6C3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    byte_593B6C3 = 1;
  }
  v3 = (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__;
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap2,
    v3);
}