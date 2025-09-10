void RemovedBuffInfoGroup___ctor(RemovedBuffInfoGroup_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2A1DC & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__RemovedBuffInfo__TypeInfo);
    byte_4C2A1DC = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__RemovedBuffInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo___ctor__);
  this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField = (struct System_Collections_Generic_Dictionary_int__RemovedBuffInfo__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
}


// local variable allocation has failed, the output may be wrong!
void RemovedBuffInfoGroup__Register(
        RemovedBuffInfoGroup_o *this,
        int32_t targetServantUniqueId,
        RemovedBuffInfo_o *removedBuffInfo,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__RemovedBuffInfo__o *servantUniqueIdToRemovedBuffInfoMap_k__BackingField; // x0

  if ( (byte_4C2A1DD & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__set_Item__);
    byte_4C2A1DD = 1;
  }
  servantUniqueIdToRemovedBuffInfoMap_k__BackingField = this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField;
  if ( !servantUniqueIdToRemovedBuffInfoMap_k__BackingField )
    sub_1C2D6EC(0, *(_QWORD *)&targetServantUniqueId);
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)servantUniqueIdToRemovedBuffInfoMap_k__BackingField,
    targetServantUniqueId,
    (Il2CppObject *)removedBuffInfo,
    (const MethodInfo_33E1268 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__set_Item__);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *RemovedBuffInfoGroup__RemovedAllBuffEnumerable(
        RemovedBuffInfoGroup_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2A1DE & 1) == 0 )
  {
    sub_1C2D490(&RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo);
    byte_4C2A1DE = 1;
  }
  v3 = sub_1C2D6DC(RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 40), (int32_t)this, v4, v5);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v3;
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable(
        RemovedBuffInfoGroup_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2A1DF & 1) == 0 )
  {
    sub_1C2D490(&RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo);
    byte_4C2A1DF = 1;
  }
  v3 = sub_1C2D6DC(RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 40), (int32_t)this, v4, v5);
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
  const MethodInfo *v3; // x3

  this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
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
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v6; // x9
  __int128 v7; // q0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // q1
  struct System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__o *p__7__wrap1; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v12; // x8
  bool result; // w0
  const MethodInfo *v14; // x1
  Il2CppObject *value; // x8
  System_Collections_Generic_List_object__o *klass; // x0
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v17; // x9
  __int128 v18; // q0
  struct System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__o *p__7__wrap2; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  bool v25; // w8
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v26; // x0
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v27; // x8
  struct BattleBuffData_BuffData_o *v28; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v30; // [xsp+30h] [xbp-60h]
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o **v31; // [xsp+68h] [xbp-28h]
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v32; // [xsp+78h] [xbp-18h] BYREF

  v32 = this;
  v2 = this;
  if ( (byte_4C2A1E0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__RemovedBuffInfo__get_Value__);
    this = (RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *)sub_1C2D490(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_4C2A1E0 = 1;
  }
  v31 = &v32;
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
    goto LABEL_15;
  if ( _1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    sub_1C2D6EC(this, method);
  servantUniqueIdToRemovedBuffInfoMap_k__BackingField = (System_Collections_Generic_Dictionary_int__object__o *)_4__this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField;
  if ( !servantUniqueIdToRemovedBuffInfoMap_k__BackingField )
    sub_1C2D6EC(0, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v29,
    servantUniqueIdToRemovedBuffInfoMap_k__BackingField,
    (const MethodInfo_33E16B4 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__);
  v6 = v32;
  v7 = *(_OWORD *)&v29.fields._dictionary;
  current = v29.fields._current;
  p__7__wrap1 = &v32->fields.__7__wrap1;
  v30 = v29;
  *(_QWORD *)&v32->fields.__7__wrap1.fields._getEnumeratorRetType = *(_QWORD *)&v29.fields._getEnumeratorRetType;
  *(_OWORD *)&v6->fields.__7__wrap1.fields._dictionary = v7;
  v6->fields.__7__wrap1.fields._current = current;
  sub_1C2D434((CGThumbnailListItem_o *)p__7__wrap1, 0, v10, v11);
  v12 = v32;
  v32->fields.__1__state = -3;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v12->fields.__7__wrap1,
            (const MethodInfo_35380F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__) )
    {
      RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally1(v32, v14);
      v27 = v32;
      result = 0;
      *(_QWORD *)&v32->fields.__7__wrap1.fields._getEnumeratorRetType = 0;
      *(_OWORD *)&v27->fields.__7__wrap1.fields._dictionary = 0u;
      v27->fields.__7__wrap1.fields._current = 0u;
      return result;
    }
    value = v32->fields.__7__wrap1.fields._current.fields.value;
    if ( !value )
      sub_1C2D6EC(v32, v14);
    klass = (System_Collections_Generic_List_object__o *)value[1].klass;
    if ( !klass )
      sub_1C2D6EC(0, v14);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v29,
      klass,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    v17 = v32;
    v18 = *(_OWORD *)&v29.fields._dictionary;
    p__7__wrap2 = &v32->fields.__7__wrap2;
    *(_OWORD *)&v30.fields._dictionary = *(_OWORD *)&v29.fields._dictionary;
    v30.fields._current.fields.key = v29.fields._current.fields.key;
    v32->fields.__7__wrap2.fields._current = (struct BattleBuffData_BuffData_o *)v29.fields._current.fields.key;
    *(_OWORD *)&v17->fields.__7__wrap2.fields._list = v18;
    sub_1C2D434((CGThumbnailListItem_o *)p__7__wrap2, 0, v20, v21);
    v2 = v32;
LABEL_15:
    v2->fields.__1__state = -4;
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap2,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    v26 = v32;
    if ( v25 )
      break;
    RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally2(v32, v22);
    v12 = v32;
    v32->fields.__7__wrap2.fields._list = 0;
    *(_QWORD *)&v12->fields.__7__wrap2.fields._index = 0;
    v12->fields.__7__wrap2.fields._current = 0;
  }
  v28 = v32->fields.__7__wrap2.fields._current;
  v32->fields.__2__current = v28;
  sub_1C2D434((CGThumbnailListItem_o *)&v26->fields.__2__current, (int32_t)v28, v23, v24);
  result = 1;
  v32->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct RemovedBuffInfoGroup_o *_4__this; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C2A1E3 & 1) == 0 )
  {
    sub_1C2D490(&RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo);
    byte_4C2A1E3 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C2D6DC(RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1C2D434((CGThumbnailListItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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
  if ( (byte_4C2A1E1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__);
    byte_4C2A1E1 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    (const MethodInfo_3538214 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__);
}


void RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally2(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2A1E2 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    byte_4C2A1E2 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap2,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
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
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v6; // x9
  __int128 v7; // q0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // q1
  struct System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__o *p__7__wrap1; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v12; // x8
  bool result; // w0
  const MethodInfo *v14; // x1
  Il2CppObject *value; // x8
  System_Collections_Generic_List_object__o *monitor; // x0
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v17; // x9
  __int128 v18; // q0
  struct System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__o *p__7__wrap2; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  bool v25; // w8
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v26; // x0
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v27; // x8
  struct BattleBuffData_BuffData_o *v28; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v30; // [xsp+30h] [xbp-60h]
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o **v31; // [xsp+68h] [xbp-28h]
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v32; // [xsp+78h] [xbp-18h] BYREF

  v32 = this;
  v2 = this;
  if ( (byte_4C2A1E4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__RemovedBuffInfo__get_Value__);
    this = (RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *)sub_1C2D490(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_4C2A1E4 = 1;
  }
  v31 = &v32;
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
    goto LABEL_15;
  if ( _1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    sub_1C2D6EC(this, method);
  servantUniqueIdToRemovedBuffInfoMap_k__BackingField = (System_Collections_Generic_Dictionary_int__object__o *)_4__this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField;
  if ( !servantUniqueIdToRemovedBuffInfoMap_k__BackingField )
    sub_1C2D6EC(0, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v29,
    servantUniqueIdToRemovedBuffInfoMap_k__BackingField,
    (const MethodInfo_33E16B4 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__);
  v6 = v32;
  v7 = *(_OWORD *)&v29.fields._dictionary;
  current = v29.fields._current;
  p__7__wrap1 = &v32->fields.__7__wrap1;
  v30 = v29;
  *(_QWORD *)&v32->fields.__7__wrap1.fields._getEnumeratorRetType = *(_QWORD *)&v29.fields._getEnumeratorRetType;
  *(_OWORD *)&v6->fields.__7__wrap1.fields._dictionary = v7;
  v6->fields.__7__wrap1.fields._current = current;
  sub_1C2D434((CGThumbnailListItem_o *)p__7__wrap1, 0, v10, v11);
  v12 = v32;
  v32->fields.__1__state = -3;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v12->fields.__7__wrap1,
            (const MethodInfo_35380F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__) )
    {
      RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally1(v32, v14);
      v27 = v32;
      result = 0;
      *(_QWORD *)&v32->fields.__7__wrap1.fields._getEnumeratorRetType = 0;
      *(_OWORD *)&v27->fields.__7__wrap1.fields._dictionary = 0u;
      v27->fields.__7__wrap1.fields._current = 0u;
      return result;
    }
    value = v32->fields.__7__wrap1.fields._current.fields.value;
    if ( !value )
      sub_1C2D6EC(v32, v14);
    monitor = (System_Collections_Generic_List_object__o *)value[1].monitor;
    if ( !monitor )
      sub_1C2D6EC(0, v14);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v29,
      monitor,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    v17 = v32;
    v18 = *(_OWORD *)&v29.fields._dictionary;
    p__7__wrap2 = &v32->fields.__7__wrap2;
    *(_OWORD *)&v30.fields._dictionary = *(_OWORD *)&v29.fields._dictionary;
    v30.fields._current.fields.key = v29.fields._current.fields.key;
    v32->fields.__7__wrap2.fields._current = (struct BattleBuffData_BuffData_o *)v29.fields._current.fields.key;
    *(_OWORD *)&v17->fields.__7__wrap2.fields._list = v18;
    sub_1C2D434((CGThumbnailListItem_o *)p__7__wrap2, 0, v20, v21);
    v2 = v32;
LABEL_15:
    v2->fields.__1__state = -4;
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap2,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    v26 = v32;
    if ( v25 )
      break;
    RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally2(v32, v22);
    v12 = v32;
    v32->fields.__7__wrap2.fields._list = 0;
    *(_QWORD *)&v12->fields.__7__wrap2.fields._index = 0;
    v12->fields.__7__wrap2.fields._current = 0;
  }
  v28 = v32->fields.__7__wrap2.fields._current;
  v32->fields.__2__current = v28;
  sub_1C2D434((CGThumbnailListItem_o *)&v26->fields.__2__current, (int32_t)v28, v23, v24);
  result = 1;
  v32->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct RemovedBuffInfoGroup_o *_4__this; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C2A1E7 & 1) == 0 )
  {
    sub_1C2D490(&RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo);
    byte_4C2A1E7 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C2D6DC(RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1C2D434((CGThumbnailListItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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
  if ( (byte_4C2A1E5 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__);
    byte_4C2A1E5 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    (const MethodInfo_3538214 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__);
}


void RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally2(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C2A1E6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    byte_4C2A1E6 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap2,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}