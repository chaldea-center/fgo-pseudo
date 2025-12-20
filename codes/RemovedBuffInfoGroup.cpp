void RemovedBuffInfoGroup___ctor(RemovedBuffInfoGroup_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2F897 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__RemovedBuffInfo__TypeInfo);
    byte_4D2F897 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__RemovedBuffInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo___ctor__);
  this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField = (struct System_Collections_Generic_Dictionary_int__RemovedBuffInfo__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
void RemovedBuffInfoGroup__Register(
        RemovedBuffInfoGroup_o *this,
        int32_t targetServantUniqueId,
        RemovedBuffInfo_o *removedBuffInfo,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__RemovedBuffInfo__o *servantUniqueIdToRemovedBuffInfoMap_k__BackingField; // x0

  if ( (byte_4D2F898 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__set_Item__);
    byte_4D2F898 = 1;
  }
  servantUniqueIdToRemovedBuffInfoMap_k__BackingField = this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField;
  if ( !servantUniqueIdToRemovedBuffInfoMap_k__BackingField )
    sub_1C942F0(0, *(_QWORD *)&targetServantUniqueId);
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)servantUniqueIdToRemovedBuffInfoMap_k__BackingField,
    targetServantUniqueId,
    (Il2CppObject *)removedBuffInfo,
    (const MethodInfo_34B48C0 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__set_Item__);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *RemovedBuffInfoGroup__RemovedAllBuffEnumerable(
        RemovedBuffInfoGroup_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2F899 & 1) == 0 )
  {
    sub_1C94098(&RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo);
    byte_4D2F899 = 1;
  }
  v3 = sub_1C942E4(RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 40), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v3;
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable(
        RemovedBuffInfoGroup_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2F89A & 1) == 0 )
  {
    sub_1C94098(&RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo);
    byte_4D2F89A = 1;
  }
  v3 = sub_1C942E4(RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 40), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField = value;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v16; // x8
  bool result; // w0
  const MethodInfo *v18; // x1
  Il2CppObject *value; // x8
  System_Collections_Generic_List_object__o *klass; // x0
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v21; // x9
  __int128 v22; // q0
  struct System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__o *p__7__wrap2; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  const MethodInfo *v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  bool v37; // w8
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v38; // x0
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v39; // x8
  struct BattleBuffData_BuffData_o *v40; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v41; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v42; // [xsp+30h] [xbp-60h]
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o **v43; // [xsp+68h] [xbp-28h]
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v44; // [xsp+78h] [xbp-18h] BYREF

  v44 = this;
  v2 = this;
  if ( (byte_4D2F89B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__RemovedBuffInfo__get_Value__);
    this = (RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *)sub_1C94098(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_4D2F89B = 1;
  }
  v43 = &v44;
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
    goto LABEL_15;
  if ( _1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    sub_1C942F0(this, method);
  servantUniqueIdToRemovedBuffInfoMap_k__BackingField = (System_Collections_Generic_Dictionary_int__object__o *)_4__this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField;
  if ( !servantUniqueIdToRemovedBuffInfoMap_k__BackingField )
    sub_1C942F0(0, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v41,
    servantUniqueIdToRemovedBuffInfoMap_k__BackingField,
    (const MethodInfo_34B4D0C *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__);
  v6 = v44;
  v7 = *(_OWORD *)&v41.fields._dictionary;
  current = v41.fields._current;
  p__7__wrap1 = &v44->fields.__7__wrap1;
  v42 = v41;
  *(_QWORD *)&v44->fields.__7__wrap1.fields._getEnumeratorRetType = *(_QWORD *)&v41.fields._getEnumeratorRetType;
  *(_OWORD *)&v6->fields.__7__wrap1.fields._dictionary = v7;
  v6->fields.__7__wrap1.fields._current = current;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p__7__wrap1, 0, v10, v11, v12, v13, v14, v15);
  v16 = v44;
  v44->fields.__1__state = -3;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v16->fields.__7__wrap1,
            (const MethodInfo_360FFAC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__) )
    {
      RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally1(v44, v18);
      v39 = v44;
      result = 0;
      *(_QWORD *)&v44->fields.__7__wrap1.fields._getEnumeratorRetType = 0;
      *(_OWORD *)&v39->fields.__7__wrap1.fields._dictionary = 0u;
      v39->fields.__7__wrap1.fields._current = 0u;
      return result;
    }
    value = v44->fields.__7__wrap1.fields._current.fields.value;
    if ( !value )
      sub_1C942F0(v44, v18);
    klass = (System_Collections_Generic_List_object__o *)value[1].klass;
    if ( !klass )
      sub_1C942F0(0, v18);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v41,
      klass,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    v21 = v44;
    v22 = *(_OWORD *)&v41.fields._dictionary;
    p__7__wrap2 = &v44->fields.__7__wrap2;
    *(_OWORD *)&v42.fields._dictionary = *(_OWORD *)&v41.fields._dictionary;
    v42.fields._current.fields.key = v41.fields._current.fields.key;
    v44->fields.__7__wrap2.fields._current = (struct BattleBuffData_BuffData_o *)v41.fields._current.fields.key;
    *(_OWORD *)&v21->fields.__7__wrap2.fields._list = v22;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)p__7__wrap2, 0, v24, v25, v26, v27, v28, v29);
    v2 = v44;
LABEL_15:
    v2->fields.__1__state = -4;
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap2,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    v38 = v44;
    if ( v37 )
      break;
    RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally2(v44, v30);
    v16 = v44;
    v44->fields.__7__wrap2.fields._list = 0;
    *(_QWORD *)&v16->fields.__7__wrap2.fields._index = 0;
    v16->fields.__7__wrap2.fields._current = 0;
  }
  v40 = v44->fields.__7__wrap2.fields._current;
  v44->fields.__2__current = v40;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v38->fields.__2__current, (int32_t)v40, v31, v32, v33, v34, v35, v36);
  result = 1;
  v44->fields.__1__state = 1;
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D2F89E & 1) == 0 )
  {
    sub_1C94098(&RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo);
    byte_4D2F89E = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C942E4(RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7, v8, v9, v10, v11);
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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
  if ( (byte_4D2F89C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__);
    byte_4D2F89C = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    (const MethodInfo_36100D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__);
}


void RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally2(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2F89D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    byte_4D2F89D = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap2,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v16; // x8
  bool result; // w0
  const MethodInfo *v18; // x1
  Il2CppObject *value; // x8
  System_Collections_Generic_List_object__o *monitor; // x0
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v21; // x9
  __int128 v22; // q0
  struct System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__o *p__7__wrap2; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  const MethodInfo *v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  bool v37; // w8
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v38; // x0
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v39; // x8
  struct BattleBuffData_BuffData_o *v40; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v41; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v42; // [xsp+30h] [xbp-60h]
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o **v43; // [xsp+68h] [xbp-28h]
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v44; // [xsp+78h] [xbp-18h] BYREF

  v44 = this;
  v2 = this;
  if ( (byte_4D2F89F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_int__RemovedBuffInfo__get_Value__);
    this = (RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *)sub_1C94098(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    byte_4D2F89F = 1;
  }
  v43 = &v44;
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
    goto LABEL_15;
  if ( _1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    sub_1C942F0(this, method);
  servantUniqueIdToRemovedBuffInfoMap_k__BackingField = (System_Collections_Generic_Dictionary_int__object__o *)_4__this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField;
  if ( !servantUniqueIdToRemovedBuffInfoMap_k__BackingField )
    sub_1C942F0(0, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v41,
    servantUniqueIdToRemovedBuffInfoMap_k__BackingField,
    (const MethodInfo_34B4D0C *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__);
  v6 = v44;
  v7 = *(_OWORD *)&v41.fields._dictionary;
  current = v41.fields._current;
  p__7__wrap1 = &v44->fields.__7__wrap1;
  v42 = v41;
  *(_QWORD *)&v44->fields.__7__wrap1.fields._getEnumeratorRetType = *(_QWORD *)&v41.fields._getEnumeratorRetType;
  *(_OWORD *)&v6->fields.__7__wrap1.fields._dictionary = v7;
  v6->fields.__7__wrap1.fields._current = current;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p__7__wrap1, 0, v10, v11, v12, v13, v14, v15);
  v16 = v44;
  v44->fields.__1__state = -3;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v16->fields.__7__wrap1,
            (const MethodInfo_360FFAC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__) )
    {
      RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally1(v44, v18);
      v39 = v44;
      result = 0;
      *(_QWORD *)&v44->fields.__7__wrap1.fields._getEnumeratorRetType = 0;
      *(_OWORD *)&v39->fields.__7__wrap1.fields._dictionary = 0u;
      v39->fields.__7__wrap1.fields._current = 0u;
      return result;
    }
    value = v44->fields.__7__wrap1.fields._current.fields.value;
    if ( !value )
      sub_1C942F0(v44, v18);
    monitor = (System_Collections_Generic_List_object__o *)value[1].monitor;
    if ( !monitor )
      sub_1C942F0(0, v18);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v41,
      monitor,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    v21 = v44;
    v22 = *(_OWORD *)&v41.fields._dictionary;
    p__7__wrap2 = &v44->fields.__7__wrap2;
    *(_OWORD *)&v42.fields._dictionary = *(_OWORD *)&v41.fields._dictionary;
    v42.fields._current.fields.key = v41.fields._current.fields.key;
    v44->fields.__7__wrap2.fields._current = (struct BattleBuffData_BuffData_o *)v41.fields._current.fields.key;
    *(_OWORD *)&v21->fields.__7__wrap2.fields._list = v22;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)p__7__wrap2, 0, v24, v25, v26, v27, v28, v29);
    v2 = v44;
LABEL_15:
    v2->fields.__1__state = -4;
    v37 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap2,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    v38 = v44;
    if ( v37 )
      break;
    RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally2(v44, v30);
    v16 = v44;
    v44->fields.__7__wrap2.fields._list = 0;
    *(_QWORD *)&v16->fields.__7__wrap2.fields._index = 0;
    v16->fields.__7__wrap2.fields._current = 0;
  }
  v40 = v44->fields.__7__wrap2.fields._current;
  v44->fields.__2__current = v40;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v38->fields.__2__current, (int32_t)v40, v31, v32, v33, v34, v35, v36);
  result = 1;
  v44->fields.__1__state = 1;
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D2F8A2 & 1) == 0 )
  {
    sub_1C94098(&RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo);
    byte_4D2F8A2 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C942E4(RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7, v8, v9, v10, v11);
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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
  if ( (byte_4D2F8A0 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__);
    byte_4D2F8A0 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    (const MethodInfo_36100D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__);
}


void RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally2(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2F8A1 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    byte_4D2F8A1 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap2,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}