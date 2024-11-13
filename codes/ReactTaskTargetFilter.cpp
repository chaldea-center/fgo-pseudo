void __fastcall ReactTaskTargetFilter___ctor(ReactTaskTargetFilter_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleServantData__o *__fastcall ReactTaskTargetFilter__Apply(
        ReactTaskTargetFilter_o *this,
        System_Collections_Generic_IEnumerable_BattleServantData__o *targets,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B18ED0 & 1) == 0 )
  {
    sub_1BCA7E0(&ReactTaskTargetFilter__Apply_d__4_TypeInfo, targets, method);
    byte_4B18ED0 = 1;
  }
  v6 = sub_1BCAA2C(ReactTaskTargetFilter__Apply_d__4_TypeInfo, targets, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = -2;
  *(_DWORD *)(v6 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v6 + 56) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 56), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 48) = targets;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 48), (int64_t)targets, v13, v14, v15, v16, v17, v18);
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)v6;
}


bool __fastcall ReactTaskTargetFilter__IsFilterFuncMatched(
        ReactTaskTargetFilter_o *this,
        BattleServantData_o *target,
        const MethodInfo *method)
{
  struct System_Func_BattleServantData__bool__o *FilterFunc_k__BackingField; // x8

  FilterFunc_k__BackingField = this->fields._FilterFunc_k__BackingField;
  if ( FilterFunc_k__BackingField )
    return ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, BattleServantData_o *, _QWORD))FilterFunc_k__BackingField->fields.m_target)(
             FilterFunc_k__BackingField->fields.original_method_info,
             target,
             *(_QWORD *)&FilterFunc_k__BackingField->fields.extra_arg);
  else
    return 1;
}


System_Func_BattleServantData__bool__o *__fastcall ReactTaskTargetFilter__get_FilterFunc(
        ReactTaskTargetFilter_o *this,
        const MethodInfo *method)
{
  return this->fields._FilterFunc_k__BackingField;
}


void __fastcall ReactTaskTargetFilter__set_FilterFunc(
        ReactTaskTargetFilter_o *this,
        System_Func_BattleServantData__bool__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._FilterFunc_k__BackingField = value;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall ReactTaskTargetFilter__Apply_d__4___ctor(
        ReactTaskTargetFilter__Apply_d__4_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall ReactTaskTargetFilter__Apply_d__4__MoveNext(
        ReactTaskTargetFilter__Apply_d__4_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ReactTaskTargetFilter__Apply_d__4_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t _1__state; // w8
  struct ReactTaskTargetFilter_o *_4__this; // x21
  System_Collections_Generic_IEnumerable_T__o *v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_T__o *v14; // x19
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int64_t v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Collections_Generic_IEnumerator_BattleServantData__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_BattleServantData__c *v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  const MethodInfo *v31; // x1
  struct System_Collections_Generic_IEnumerator_BattleServantData__o *v32; // x19
  System_Collections_Generic_IEnumerator_BattleServantData__c *v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Func_BattleServantData__bool__o *FilterFunc_k__BackingField; // x8
  int64_t v46; // x19
  bool result; // w0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  ReactTaskTargetFilter__Apply_d__4_o *v54; // [xsp+18h] [xbp-28h]

  v54 = this;
  v3 = this;
  if ( (byte_4B18ED1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_ExcludeNull_BattleServantData___, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, v6, v7);
    this = (ReactTaskTargetFilter__Apply_d__4_o *)sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v8, v9);
    byte_4B18ED1 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v3->fields.__1__state = -1;
    v12 = BasicHelper__ExcludeNull_object_(
            (System_Collections_Generic_IEnumerable_T__o *)v3->fields.targets,
            (const MethodInfo_2EFE5E8 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
    v14 = v12;
    if ( !v12 )
      sub_1BCAA3C(0LL, v13);
    klass = v12->klass;
    v16 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(v12, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
            v14,
            *(_QWORD *)(p_method + 8));
    v54->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_BattleServantData__o *)v19;
    sub_1BCA784((PartyOrganizationUtility_o *)&v54->fields.__7__wrap1, v19, v20, v21, v22, v23, v24, v25);
    v3 = v54;
  }
  _7__wrap1 = v3->fields.__7__wrap1;
  v3->fields.__1__state = -3;
  if ( !_7__wrap1 )
LABEL_32:
    sub_1BCAA3C(this, method);
  while ( 1 )
  {
    v27 = _7__wrap1->klass;
    v28 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_18;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_18:
      v30 = sub_1C1C7C0(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleServantData__o *, _QWORD))v30)(
            _7__wrap1,
            *(_QWORD *)(v30 + 8)) & 1) == 0 )
      break;
    v32 = v54->fields.__7__wrap1;
    if ( !v32 )
      sub_1BCAA3C(v54, v31);
    v33 = v32->klass;
    v34 = *(unsigned __int16 *)(&v32->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v32->klass->_2.bitflags2 + 3) )
    {
      v35 = &v33->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v35 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_26;
      }
      v36 = (__int64)&v33->vtable[*v35].method;
    }
    else
    {
LABEL_26:
      v36 = sub_1C1C7C0(v54->fields.__7__wrap1, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
    }
    v37 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleServantData__o *, _QWORD))v36)(
            v32,
            *(_QWORD *)(v36 + 8));
    if ( !_4__this )
      sub_1BCAA3C(v37, v38);
    FilterFunc_k__BackingField = _4__this->fields._FilterFunc_k__BackingField;
    v46 = v37;
    if ( !FilterFunc_k__BackingField
      || (this = (ReactTaskTargetFilter__Apply_d__4_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))FilterFunc_k__BackingField->fields.m_target)(
                                                          FilterFunc_k__BackingField->fields.original_method_info,
                                                          v37,
                                                          *(_QWORD *)&FilterFunc_k__BackingField->fields.extra_arg),
          ((unsigned __int8)this & 1) != 0) )
    {
      v54->fields.__2__current = (struct BattleServantData_o *)v46;
      sub_1BCA784((PartyOrganizationUtility_o *)&v54->fields.__2__current, v46, v39, v40, v41, v42, v43, v44);
      result = 1;
      v54->fields.__1__state = 1;
      return result;
    }
    _7__wrap1 = v54->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_32;
  }
  ReactTaskTargetFilter__Apply_d__4____m__Finally1(v54, v31);
  v54->fields.__7__wrap1 = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v54->fields.__7__wrap1, 0LL, v48, v49, v50, v51, v52, v53);
  return 0;
}


System_Collections_Generic_IEnumerator_BattleServantData__o *__fastcall ReactTaskTargetFilter__Apply_d__4__System_Collections_Generic_IEnumerable_BattleServantData__GetEnumerator(
        ReactTaskTargetFilter__Apply_d__4_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  __int64 v3; // x3
  int32_t l__initialThreadId; // w20
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  ReactTaskTargetFilter__Apply_d__4_o *v10; // x20
  struct ReactTaskTargetFilter_o *_4__this; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Collections_Generic_IEnumerable_BattleServantData__o *_3__targets; // x1

  if ( (byte_4B18ED3 & 1) == 0 )
  {
    sub_1BCA7E0(&ReactTaskTargetFilter__Apply_d__4_TypeInfo, method, v2);
    byte_4B18ED3 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v10 = this;
  }
  else
  {
    v10 = (ReactTaskTargetFilter__Apply_d__4_o *)sub_1BCAA2C(ReactTaskTargetFilter__Apply_d__4_TypeInfo, method, v2, v3);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v10->fields.__4__this = _4__this;
    sub_1BCA784((PartyOrganizationUtility_o *)&v10->fields.__4__this, (int64_t)_4__this, v12, v13, v14, v15, v16, v17);
  }
  _3__targets = this->fields.__3__targets;
  v10->fields.targets = _3__targets;
  sub_1BCA784((PartyOrganizationUtility_o *)&v10->fields.targets, (int64_t)_3__targets, v2, v3, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerator_BattleServantData__o *)v10;
}


BattleServantData_o *__fastcall ReactTaskTargetFilter__Apply_d__4__System_Collections_Generic_IEnumerator_BattleServantData__get_Current(
        ReactTaskTargetFilter__Apply_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ReactTaskTargetFilter__Apply_d__4__System_Collections_IEnumerator_Reset(
        ReactTaskTargetFilter__Apply_d__4_o *this,
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
  v8 = sub_1BCA7F4(&Method_ReactTaskTargetFilter__Apply_d__4_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall ReactTaskTargetFilter__Apply_d__4__System_Collections_IEnumerator_get_Current(
        ReactTaskTargetFilter__Apply_d__4_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall ReactTaskTargetFilter__Apply_d__4__System_IDisposable_Dispose(
        ReactTaskTargetFilter__Apply_d__4_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    ReactTaskTargetFilter__Apply_d__4____m__Finally1(this, method);
}


void __fastcall ReactTaskTargetFilter__Apply_d__4____m__Finally1(
        ReactTaskTargetFilter__Apply_d__4_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_IEnumerator_BattleServantData__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_BattleServantData__c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B18ED2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, method, v2);
    byte_4B18ED2 = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    v6 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_1C1C7C0(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleServantData__o *, _QWORD))p_method)(
      _7__wrap1,
      *(_QWORD *)(p_method + 8));
  }
}