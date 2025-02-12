void __fastcall RemovedBuffInfoGroup___ctor(RemovedBuffInfoGroup_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BB7282 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo___ctor__, method);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__RemovedBuffInfo__TypeInfo, v3);
    byte_4BB7282 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__RemovedBuffInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_32918D4 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo___ctor__);
  this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField = (struct System_Collections_Generic_Dictionary_int__RemovedBuffInfo__o *)v4;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)v4, v5, v6, v7, v8, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RemovedBuffInfoGroup__Register(
        RemovedBuffInfoGroup_o *this,
        int32_t targetServantUniqueId,
        RemovedBuffInfo_o *removedBuffInfo,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__RemovedBuffInfo__o *servantUniqueIdToRemovedBuffInfoMap_k__BackingField; // x0

  if ( (byte_4BB7283 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__set_Item__,
      *(_QWORD *)&targetServantUniqueId);
    byte_4BB7283 = 1;
  }
  servantUniqueIdToRemovedBuffInfoMap_k__BackingField = this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField;
  if ( !servantUniqueIdToRemovedBuffInfoMap_k__BackingField )
    sub_1C13F80(0LL, *(_QWORD *)&targetServantUniqueId);
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)servantUniqueIdToRemovedBuffInfoMap_k__BackingField,
    targetServantUniqueId,
    (Il2CppObject *)removedBuffInfo,
    (const MethodInfo_3292294 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__set_Item__);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall RemovedBuffInfoGroup__RemovedAllBuffEnumerable(
        RemovedBuffInfoGroup_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BB7284 & 1) == 0 )
  {
    sub_1C13D24(&RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo, method);
    byte_4BB7284 = 1;
  }
  v3 = sub_1C13F70(RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v3 + 40) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v3 + 40), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v3;
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable(
        RemovedBuffInfoGroup_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BB7285 & 1) == 0 )
  {
    sub_1C13D24(&RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo, method);
    byte_4BB7285 = 1;
  }
  v3 = sub_1C13F70(RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v3 + 40) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v3 + 40), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v3;
}


System_Collections_Generic_Dictionary_int__RemovedBuffInfo__o *__fastcall RemovedBuffInfoGroup__get_servantUniqueIdToRemovedBuffInfoMap(
        RemovedBuffInfoGroup_o *this,
        const MethodInfo *method)
{
  return this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField;
}


void __fastcall RemovedBuffInfoGroup__set_servantUniqueIdToRemovedBuffInfoMap(
        RemovedBuffInfoGroup_o *this,
        System_Collections_Generic_Dictionary_int__RemovedBuffInfo__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField = value;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6___ctor(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6__MoveNext(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t _1__state; // w8
  struct RemovedBuffInfoGroup_o *_4__this; // x8
  System_Collections_Generic_Dictionary_int__object__o *servantUniqueIdToRemovedBuffInfoMap_k__BackingField; // x0
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v12; // x9
  __int128 v13; // q0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // q1
  struct System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__o *p__7__wrap1; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v22; // x8
  bool result; // w0
  const MethodInfo *v24; // x1
  Il2CppObject *value; // x8
  System_Collections_Generic_List_object__o *klass; // x0
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v27; // x9
  __int128 v28; // q0
  struct System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__o *p__7__wrap2; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  const MethodInfo *v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  bool v43; // w8
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v44; // x0
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v45; // x8
  struct BattleBuffData_BuffData_o *v46; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v47; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v48; // [xsp+30h] [xbp-60h]
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o **v49; // [xsp+68h] [xbp-28h]
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v50; // [xsp+78h] [xbp-18h] BYREF

  v50 = this;
  v2 = this;
  if ( (byte_4BB7286 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__get_Current__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_int__RemovedBuffInfo__get_Value__, v7);
    this = (RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *)sub_1C13D24(
                                                                      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__,
                                                                      v8);
    byte_4BB7286 = 1;
  }
  v49 = &v50;
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
    goto LABEL_15;
  if ( _1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    sub_1C13F80(this, method);
  servantUniqueIdToRemovedBuffInfoMap_k__BackingField = (System_Collections_Generic_Dictionary_int__object__o *)_4__this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField;
  if ( !servantUniqueIdToRemovedBuffInfoMap_k__BackingField )
    sub_1C13F80(0LL, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v47,
    servantUniqueIdToRemovedBuffInfoMap_k__BackingField,
    (const MethodInfo_32926E0 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__);
  v12 = v50;
  v13 = *(_OWORD *)&v47.fields._dictionary;
  current = v47.fields._current;
  p__7__wrap1 = &v50->fields.__7__wrap1;
  v48 = v47;
  *(_QWORD *)&v50->fields.__7__wrap1.fields._getEnumeratorRetType = *(_QWORD *)&v47.fields._getEnumeratorRetType;
  *(_OWORD *)&v12->fields.__7__wrap1.fields._dictionary = v13;
  v12->fields.__7__wrap1.fields._current = current;
  sub_1C13CC8((PartyOrganizationUtility_o *)p__7__wrap1, 0LL, v16, v17, v18, v19, v20, v21);
  v22 = v50;
  v50->fields.__1__state = -3;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v22->fields.__7__wrap1,
            (const MethodInfo_33E218C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__) )
    {
      RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally1(v50, v24);
      v45 = v50;
      result = 0;
      *(_QWORD *)&v50->fields.__7__wrap1.fields._getEnumeratorRetType = 0LL;
      *(_OWORD *)&v45->fields.__7__wrap1.fields._dictionary = 0u;
      v45->fields.__7__wrap1.fields._current = 0u;
      return result;
    }
    value = v50->fields.__7__wrap1.fields._current.fields.value;
    if ( !value )
      sub_1C13F80(v50, v24);
    klass = (System_Collections_Generic_List_object__o *)value[1].klass;
    if ( !klass )
      sub_1C13F80(0LL, v24);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v47,
      klass,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    v27 = v50;
    v28 = *(_OWORD *)&v47.fields._dictionary;
    p__7__wrap2 = &v50->fields.__7__wrap2;
    *(_OWORD *)&v48.fields._dictionary = *(_OWORD *)&v47.fields._dictionary;
    v48.fields._current.fields.key = v47.fields._current.fields.key;
    v50->fields.__7__wrap2.fields._current = (struct BattleBuffData_BuffData_o *)v47.fields._current.fields.key;
    *(_OWORD *)&v27->fields.__7__wrap2.fields._list = v28;
    sub_1C13CC8((PartyOrganizationUtility_o *)p__7__wrap2, 0LL, v30, v31, v32, v33, v34, v35);
    v2 = v50;
LABEL_15:
    v2->fields.__1__state = -4;
    v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap2,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    v44 = v50;
    if ( v43 )
      break;
    RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally2(v50, v36);
    v22 = v50;
    v50->fields.__7__wrap2.fields._list = 0LL;
    *(_QWORD *)&v22->fields.__7__wrap2.fields._index = 0LL;
    v22->fields.__7__wrap2.fields._current = 0LL;
  }
  v46 = v50->fields.__7__wrap2.fields._current;
  v50->fields.__2__current = v46;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v44->fields.__2__current, (int64_t)v46, v37, v38, v39, v40, v41, v42);
  result = 1;
  v50->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *__fastcall RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct RemovedBuffInfoGroup_o *_4__this; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BB7289 & 1) == 0 )
  {
    sub_1C13D24(&RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo, method);
    byte_4BB7289 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C13F70(RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v4 + 40), (int64_t)_4__this, v6, v7, v8, v9, v10, v11);
    return (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)this;
}


BattleBuffData_BuffData_o *__fastcall RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6__System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__get_Current(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6__System_Collections_IEnumerator_Reset(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
}


Il2CppObject *__fastcall RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6__System_Collections_IEnumerator_get_Current(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6__System_IDisposable_Dispose(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( (_1__state & 0xFFFFFFFE) == -4 )
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


void __fastcall RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally1(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB7287 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__, method);
    byte_4BB7287 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    (const MethodInfo_33E22B0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__);
}


void __fastcall RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally2(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB7288 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, method);
    byte_4BB7288 = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap2,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


void __fastcall RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7___ctor(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7__MoveNext(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t _1__state; // w8
  struct RemovedBuffInfoGroup_o *_4__this; // x8
  System_Collections_Generic_Dictionary_int__object__o *servantUniqueIdToRemovedBuffInfoMap_k__BackingField; // x0
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v12; // x9
  __int128 v13; // q0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // q1
  struct System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__o *p__7__wrap1; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v22; // x8
  bool result; // w0
  const MethodInfo *v24; // x1
  Il2CppObject *value; // x8
  System_Collections_Generic_List_object__o *monitor; // x0
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v27; // x9
  __int128 v28; // q0
  struct System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__o *p__7__wrap2; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  const MethodInfo *v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  bool v43; // w8
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v44; // x0
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v45; // x8
  struct BattleBuffData_BuffData_o *v46; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v47; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v48; // [xsp+30h] [xbp-60h]
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o **v49; // [xsp+68h] [xbp-28h]
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v50; // [xsp+78h] [xbp-18h] BYREF

  v50 = this;
  v2 = this;
  if ( (byte_4BB728A & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__get_Current__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_int__RemovedBuffInfo__get_Value__, v7);
    this = (RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *)sub_1C13D24(
                                                                          &Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__,
                                                                          v8);
    byte_4BB728A = 1;
  }
  v49 = &v50;
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
    goto LABEL_15;
  if ( _1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    sub_1C13F80(this, method);
  servantUniqueIdToRemovedBuffInfoMap_k__BackingField = (System_Collections_Generic_Dictionary_int__object__o *)_4__this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField;
  if ( !servantUniqueIdToRemovedBuffInfoMap_k__BackingField )
    sub_1C13F80(0LL, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v47,
    servantUniqueIdToRemovedBuffInfoMap_k__BackingField,
    (const MethodInfo_32926E0 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__);
  v12 = v50;
  v13 = *(_OWORD *)&v47.fields._dictionary;
  current = v47.fields._current;
  p__7__wrap1 = &v50->fields.__7__wrap1;
  v48 = v47;
  *(_QWORD *)&v50->fields.__7__wrap1.fields._getEnumeratorRetType = *(_QWORD *)&v47.fields._getEnumeratorRetType;
  *(_OWORD *)&v12->fields.__7__wrap1.fields._dictionary = v13;
  v12->fields.__7__wrap1.fields._current = current;
  sub_1C13CC8((PartyOrganizationUtility_o *)p__7__wrap1, 0LL, v16, v17, v18, v19, v20, v21);
  v22 = v50;
  v50->fields.__1__state = -3;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v22->fields.__7__wrap1,
            (const MethodInfo_33E218C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__) )
    {
      RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally1(v50, v24);
      v45 = v50;
      result = 0;
      *(_QWORD *)&v50->fields.__7__wrap1.fields._getEnumeratorRetType = 0LL;
      *(_OWORD *)&v45->fields.__7__wrap1.fields._dictionary = 0u;
      v45->fields.__7__wrap1.fields._current = 0u;
      return result;
    }
    value = v50->fields.__7__wrap1.fields._current.fields.value;
    if ( !value )
      sub_1C13F80(v50, v24);
    monitor = (System_Collections_Generic_List_object__o *)value[1].monitor;
    if ( !monitor )
      sub_1C13F80(0LL, v24);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v47,
      monitor,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    v27 = v50;
    v28 = *(_OWORD *)&v47.fields._dictionary;
    p__7__wrap2 = &v50->fields.__7__wrap2;
    *(_OWORD *)&v48.fields._dictionary = *(_OWORD *)&v47.fields._dictionary;
    v48.fields._current.fields.key = v47.fields._current.fields.key;
    v50->fields.__7__wrap2.fields._current = (struct BattleBuffData_BuffData_o *)v47.fields._current.fields.key;
    *(_OWORD *)&v27->fields.__7__wrap2.fields._list = v28;
    sub_1C13CC8((PartyOrganizationUtility_o *)p__7__wrap2, 0LL, v30, v31, v32, v33, v34, v35);
    v2 = v50;
LABEL_15:
    v2->fields.__1__state = -4;
    v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap2,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    v44 = v50;
    if ( v43 )
      break;
    RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally2(v50, v36);
    v22 = v50;
    v50->fields.__7__wrap2.fields._list = 0LL;
    *(_QWORD *)&v22->fields.__7__wrap2.fields._index = 0LL;
    v22->fields.__7__wrap2.fields._current = 0LL;
  }
  v46 = v50->fields.__7__wrap2.fields._current;
  v50->fields.__2__current = v46;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v44->fields.__2__current, (int64_t)v46, v37, v38, v39, v40, v41, v42);
  result = 1;
  v50->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *__fastcall RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct RemovedBuffInfoGroup_o *_4__this; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BB728D & 1) == 0 )
  {
    sub_1C13D24(&RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo, method);
    byte_4BB728D = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C13F70(RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v4 + 40), (int64_t)_4__this, v6, v7, v8, v9, v10, v11);
    return (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)this;
}


BattleBuffData_BuffData_o *__fastcall RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7__System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__get_Current(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7__System_Collections_IEnumerator_Reset(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
}


Il2CppObject *__fastcall RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7__System_Collections_IEnumerator_get_Current(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7__System_IDisposable_Dispose(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( (_1__state & 0xFFFFFFFE) == -4 )
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


void __fastcall RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally1(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB728B & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__, method);
    byte_4BB728B = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    (const MethodInfo_33E22B0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__);
}


void __fastcall RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally2(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB728C & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, method);
    byte_4BB728C = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap2,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}