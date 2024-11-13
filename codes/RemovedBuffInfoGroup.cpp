void __fastcall RemovedBuffInfoGroup___ctor(RemovedBuffInfoGroup_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  System_Collections_Generic_Dictionary_int__object__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B18D04 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__RemovedBuffInfo__TypeInfo, v4, v5);
    byte_4B18D04 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_int__RemovedBuffInfo__TypeInfo,
                                                                 v6,
                                                                 v7,
                                                                 v8);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo___ctor__);
  this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField = (struct System_Collections_Generic_Dictionary_int__RemovedBuffInfo__o *)v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v9, v10, v11, v12, v13, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RemovedBuffInfoGroup__Register(
        RemovedBuffInfoGroup_o *this,
        int32_t targetServantUniqueId,
        RemovedBuffInfo_o *removedBuffInfo,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__RemovedBuffInfo__o *servantUniqueIdToRemovedBuffInfoMap_k__BackingField; // x0

  if ( (byte_4B18D05 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__set_Item__,
      *(_QWORD *)&targetServantUniqueId,
      removedBuffInfo);
    byte_4B18D05 = 1;
  }
  servantUniqueIdToRemovedBuffInfoMap_k__BackingField = this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField;
  if ( !servantUniqueIdToRemovedBuffInfoMap_k__BackingField )
    sub_1BCAA3C(0LL, *(_QWORD *)&targetServantUniqueId);
  System_Collections_Generic_Dictionary_int__object___set_Item(
    (System_Collections_Generic_Dictionary_int__object__o *)servantUniqueIdToRemovedBuffInfoMap_k__BackingField,
    targetServantUniqueId,
    (Il2CppObject *)removedBuffInfo,
    (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__set_Item__);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall RemovedBuffInfoGroup__RemovedAllBuffEnumerable(
        RemovedBuffInfoGroup_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B18D06 & 1) == 0 )
  {
    sub_1BCA7E0(&RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo, method, v2);
    byte_4B18D06 = 1;
  }
  v5 = sub_1BCAA2C(RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v5 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v5;
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable(
        RemovedBuffInfoGroup_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B18D07 & 1) == 0 )
  {
    sub_1BCA7E0(&RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo, method, v2);
    byte_4B18D07 = 1;
  }
  v5 = sub_1BCAA2C(RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v5 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v5;
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v2; // x2
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int32_t _1__state; // w8
  struct RemovedBuffInfoGroup_o *_4__this; // x8
  System_Collections_Generic_Dictionary_int__object__o *servantUniqueIdToRemovedBuffInfoMap_k__BackingField; // x0
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v19; // x9
  __int128 v20; // q0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // q1
  struct System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__o *p__7__wrap1; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v29; // x8
  bool result; // w0
  const MethodInfo *v31; // x1
  Il2CppObject *value; // x8
  System_Collections_Generic_List_object__o *klass; // x0
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v34; // x9
  __int128 v35; // q0
  struct System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__o *p__7__wrap2; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  const MethodInfo *v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  bool v50; // w8
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v51; // x0
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v52; // x8
  struct BattleBuffData_BuffData_o *v53; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v54; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v55; // [xsp+30h] [xbp-60h]
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o **v56; // [xsp+68h] [xbp-28h]
  RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *v57; // [xsp+78h] [xbp-18h] BYREF

  v57 = this;
  v3 = this;
  if ( (byte_4B18D08 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__RemovedBuffInfo__get_Value__, v12, v13);
    this = (RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *)sub_1BCA7E0(
                                                                      &Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__,
                                                                      v14,
                                                                      v15);
    byte_4B18D08 = 1;
  }
  v56 = &v57;
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
    goto LABEL_15;
  if ( _1__state )
    return 0;
  _4__this = v3->fields.__4__this;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  servantUniqueIdToRemovedBuffInfoMap_k__BackingField = (System_Collections_Generic_Dictionary_int__object__o *)_4__this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField;
  if ( !servantUniqueIdToRemovedBuffInfoMap_k__BackingField )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v54,
    servantUniqueIdToRemovedBuffInfoMap_k__BackingField,
    (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__);
  v19 = v57;
  v20 = *(_OWORD *)&v54.fields._dictionary;
  current = v54.fields._current;
  p__7__wrap1 = &v57->fields.__7__wrap1;
  v55 = v54;
  *(_QWORD *)&v57->fields.__7__wrap1.fields._getEnumeratorRetType = *(_QWORD *)&v54.fields._getEnumeratorRetType;
  *(_OWORD *)&v19->fields.__7__wrap1.fields._dictionary = v20;
  v19->fields.__7__wrap1.fields._current = current;
  sub_1BCA784((PartyOrganizationUtility_o *)p__7__wrap1, 0LL, v23, v24, v25, v26, v27, v28);
  v29 = v57;
  v57->fields.__1__state = -3;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v29->fields.__7__wrap1,
            (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__) )
    {
      RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally1(v57, v31);
      v52 = v57;
      result = 0;
      *(_QWORD *)&v57->fields.__7__wrap1.fields._getEnumeratorRetType = 0LL;
      *(_OWORD *)&v52->fields.__7__wrap1.fields._dictionary = 0u;
      v52->fields.__7__wrap1.fields._current = 0u;
      return result;
    }
    value = v57->fields.__7__wrap1.fields._current.fields.value;
    if ( !value )
      sub_1BCAA3C(v57, v31);
    klass = (System_Collections_Generic_List_object__o *)value[1].klass;
    if ( !klass )
      sub_1BCAA3C(0LL, v31);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v54,
      klass,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    v34 = v57;
    v35 = *(_OWORD *)&v54.fields._dictionary;
    p__7__wrap2 = &v57->fields.__7__wrap2;
    *(_OWORD *)&v55.fields._dictionary = *(_OWORD *)&v54.fields._dictionary;
    v55.fields._current.fields.key = v54.fields._current.fields.key;
    v57->fields.__7__wrap2.fields._current = (struct BattleBuffData_BuffData_o *)v54.fields._current.fields.key;
    *(_OWORD *)&v34->fields.__7__wrap2.fields._list = v35;
    sub_1BCA784((PartyOrganizationUtility_o *)p__7__wrap2, 0LL, v37, v38, v39, v40, v41, v42);
    v3 = v57;
LABEL_15:
    v3->fields.__1__state = -4;
    v50 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v3->fields.__7__wrap2,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    v51 = v57;
    if ( v50 )
      break;
    RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally2(v57, v43);
    v29 = v57;
    v57->fields.__7__wrap2.fields._list = 0LL;
    *(_QWORD *)&v29->fields.__7__wrap2.fields._index = 0LL;
    v29->fields.__7__wrap2.fields._current = 0LL;
  }
  v53 = v57->fields.__7__wrap2.fields._current;
  v57->fields.__2__current = v53;
  sub_1BCA784((PartyOrganizationUtility_o *)&v51->fields.__2__current, (int64_t)v53, v44, v45, v46, v47, v48, v49);
  result = 1;
  v57->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *__fastcall RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  int32_t l__initialThreadId; // w20
  __int64 v6; // x20
  struct RemovedBuffInfoGroup_o *_4__this; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B18D0B & 1) == 0 )
  {
    sub_1BCA7E0(&RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo, method, v2);
    byte_4B18D0B = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v6 = sub_1BCAA2C(RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_TypeInfo, method, v2, v3);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    *(_DWORD *)(v6 + 16) = 0;
    *(_DWORD *)(v6 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v6 + 40) = _4__this;
    sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)_4__this, v8, v9, v10, v11, v12, v13);
    return (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v6;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2

  if ( (byte_4B18D09 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__, method, v2);
    byte_4B18D09 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__);
}


void __fastcall RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6____m__Finally2(
        RemovedBuffInfoGroup__RemovedAllBuffEnumerable_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B18D0A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, method, v2);
    byte_4B18D0A = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap2,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
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
  __int64 v2; // x2
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int32_t _1__state; // w8
  struct RemovedBuffInfoGroup_o *_4__this; // x8
  System_Collections_Generic_Dictionary_int__object__o *servantUniqueIdToRemovedBuffInfoMap_k__BackingField; // x0
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v19; // x9
  __int128 v20; // q0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // q1
  struct System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__o *p__7__wrap1; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v29; // x8
  bool result; // w0
  const MethodInfo *v31; // x1
  Il2CppObject *value; // x8
  System_Collections_Generic_List_object__o *monitor; // x0
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v34; // x9
  __int128 v35; // q0
  struct System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__o *p__7__wrap2; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  const MethodInfo *v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  bool v50; // w8
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v51; // x0
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v52; // x8
  struct BattleBuffData_BuffData_o *v53; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v54; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v55; // [xsp+30h] [xbp-60h]
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o **v56; // [xsp+68h] [xbp-28h]
  RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *v57; // [xsp+78h] [xbp-18h] BYREF

  v57 = this;
  v3 = this;
  if ( (byte_4B18D0C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__RemovedBuffInfo__get_Value__, v12, v13);
    this = (RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *)sub_1BCA7E0(
                                                                          &Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__,
                                                                          v14,
                                                                          v15);
    byte_4B18D0C = 1;
  }
  v56 = &v57;
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
    goto LABEL_15;
  if ( _1__state )
    return 0;
  _4__this = v3->fields.__4__this;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  servantUniqueIdToRemovedBuffInfoMap_k__BackingField = (System_Collections_Generic_Dictionary_int__object__o *)_4__this->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField;
  if ( !servantUniqueIdToRemovedBuffInfoMap_k__BackingField )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v54,
    servantUniqueIdToRemovedBuffInfoMap_k__BackingField,
    (const MethodInfo_320631C *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__GetEnumerator__);
  v19 = v57;
  v20 = *(_OWORD *)&v54.fields._dictionary;
  current = v54.fields._current;
  p__7__wrap1 = &v57->fields.__7__wrap1;
  v55 = v54;
  *(_QWORD *)&v57->fields.__7__wrap1.fields._getEnumeratorRetType = *(_QWORD *)&v54.fields._getEnumeratorRetType;
  *(_OWORD *)&v19->fields.__7__wrap1.fields._dictionary = v20;
  v19->fields.__7__wrap1.fields._current = current;
  sub_1BCA784((PartyOrganizationUtility_o *)p__7__wrap1, 0LL, v23, v24, v25, v26, v27, v28);
  v29 = v57;
  v57->fields.__1__state = -3;
  while ( 1 )
  {
    if ( !System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v29->fields.__7__wrap1,
            (const MethodInfo_335671C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__MoveNext__) )
    {
      RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally1(v57, v31);
      v52 = v57;
      result = 0;
      *(_QWORD *)&v57->fields.__7__wrap1.fields._getEnumeratorRetType = 0LL;
      *(_OWORD *)&v52->fields.__7__wrap1.fields._dictionary = 0u;
      v52->fields.__7__wrap1.fields._current = 0u;
      return result;
    }
    value = v57->fields.__7__wrap1.fields._current.fields.value;
    if ( !value )
      sub_1BCAA3C(v57, v31);
    monitor = (System_Collections_Generic_List_object__o *)value[1].monitor;
    if ( !monitor )
      sub_1BCAA3C(0LL, v31);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v54,
      monitor,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    v34 = v57;
    v35 = *(_OWORD *)&v54.fields._dictionary;
    p__7__wrap2 = &v57->fields.__7__wrap2;
    *(_OWORD *)&v55.fields._dictionary = *(_OWORD *)&v54.fields._dictionary;
    v55.fields._current.fields.key = v54.fields._current.fields.key;
    v57->fields.__7__wrap2.fields._current = (struct BattleBuffData_BuffData_o *)v54.fields._current.fields.key;
    *(_OWORD *)&v34->fields.__7__wrap2.fields._list = v35;
    sub_1BCA784((PartyOrganizationUtility_o *)p__7__wrap2, 0LL, v37, v38, v39, v40, v41, v42);
    v3 = v57;
LABEL_15:
    v3->fields.__1__state = -4;
    v50 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v3->fields.__7__wrap2,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    v51 = v57;
    if ( v50 )
      break;
    RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally2(v57, v43);
    v29 = v57;
    v57->fields.__7__wrap2.fields._list = 0LL;
    *(_QWORD *)&v29->fields.__7__wrap2.fields._index = 0LL;
    v29->fields.__7__wrap2.fields._current = 0LL;
  }
  v53 = v57->fields.__7__wrap2.fields._current;
  v57->fields.__2__current = v53;
  sub_1BCA784((PartyOrganizationUtility_o *)&v51->fields.__2__current, (int64_t)v53, v44, v45, v46, v47, v48, v49);
  result = 1;
  v57->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *__fastcall RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  int32_t l__initialThreadId; // w20
  __int64 v6; // x20
  struct RemovedBuffInfoGroup_o *_4__this; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B18D0F & 1) == 0 )
  {
    sub_1BCA7E0(&RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo, method, v2);
    byte_4B18D0F = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v6 = sub_1BCAA2C(RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_TypeInfo, method, v2, v3);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    *(_DWORD *)(v6 + 16) = 0;
    *(_DWORD *)(v6 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v6 + 40) = _4__this;
    sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)_4__this, v8, v9, v10, v11, v12, v13);
    return (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v6;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2

  if ( (byte_4B18D0D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__, method, v2);
    byte_4B18D0D = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&this->fields.__7__wrap1,
    (const MethodInfo_3356840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__RemovedBuffInfo__Dispose__);
}


void __fastcall RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7____m__Finally2(
        RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B18D0E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, method, v2);
    byte_4B18D0E = 1;
  }
  this->fields.__1__state = -3;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap2,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}