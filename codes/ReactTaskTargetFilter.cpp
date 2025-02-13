void __fastcall ReactTaskTargetFilter___ctor(ReactTaskTargetFilter_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_BattleServantData__o *__fastcall ReactTaskTargetFilter__Apply(
        ReactTaskTargetFilter_o *this,
        System_Collections_Generic_IEnumerable_BattleServantData__o *targets,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BDF2F4 & 1) == 0 )
  {
    sub_1C21E38(&ReactTaskTargetFilter__Apply_d__4_TypeInfo);
    byte_4BDF2F4 = 1;
  }
  v5 = sub_1C22084(ReactTaskTargetFilter__Apply_d__4_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v5 + 56) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 56), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 48) = targets;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 48), (int64_t)targets, v12, v13, v14, v15, v16, v17);
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)v5;
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
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
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
  ReactTaskTargetFilter__Apply_d__4_o *v2; // x20
  int32_t _1__state; // w8
  struct ReactTaskTargetFilter_o *_4__this; // x21
  System_Collections_Generic_IEnumerable_T__o *v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_T__o *v7; // x19
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int64_t v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Collections_Generic_IEnumerator_BattleServantData__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_BattleServantData__c *v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  const MethodInfo *v24; // x1
  struct System_Collections_Generic_IEnumerator_BattleServantData__o *v25; // x19
  System_Collections_Generic_IEnumerator_BattleServantData__c *v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Func_BattleServantData__bool__o *FilterFunc_k__BackingField; // x8
  int64_t v39; // x19
  bool result; // w0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  ReactTaskTargetFilter__Apply_d__4_o *v47; // [xsp+18h] [xbp-28h]

  v47 = this;
  v2 = this;
  if ( (byte_4BDF2F5 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_ExcludeNull_BattleServantData___);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo);
    this = (ReactTaskTargetFilter__Apply_d__4_o *)sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    byte_4BDF2F5 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v2->fields.__1__state = -1;
    v5 = BasicHelper__ExcludeNull_object_(
           (System_Collections_Generic_IEnumerable_T__o *)v2->fields.targets,
           (const MethodInfo_2F9B6C4 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
    v7 = v5;
    if ( !v5 )
      sub_1C22094(0LL, v6);
    klass = v5->klass;
    v9 = *(unsigned __int16 *)(&v5->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v5->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C73E18(v5, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0LL);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
            v7,
            *(_QWORD *)(p_method + 8));
    v47->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_BattleServantData__o *)v12;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v47->fields.__7__wrap1, v12, v13, v14, v15, v16, v17, v18);
    v2 = v47;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
LABEL_32:
    sub_1C22094(this, method);
  while ( 1 )
  {
    v20 = _7__wrap1->klass;
    v21 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_18;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_18:
      v23 = sub_1C73E18(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleServantData__o *, _QWORD))v23)(
            _7__wrap1,
            *(_QWORD *)(v23 + 8)) & 1) == 0 )
      break;
    v25 = v47->fields.__7__wrap1;
    if ( !v25 )
      sub_1C22094(v47, v24);
    v26 = v25->klass;
    v27 = *(unsigned __int16 *)(&v25->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v25->klass->_2.bitflags2 + 3) )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v28 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_26;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_26:
      v29 = sub_1C73E18(v47->fields.__7__wrap1, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0LL);
    }
    v30 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleServantData__o *, _QWORD))v29)(
            v25,
            *(_QWORD *)(v29 + 8));
    if ( !_4__this )
      sub_1C22094(v30, v31);
    FilterFunc_k__BackingField = _4__this->fields._FilterFunc_k__BackingField;
    v39 = v30;
    if ( !FilterFunc_k__BackingField
      || (this = (ReactTaskTargetFilter__Apply_d__4_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))FilterFunc_k__BackingField->fields.m_target)(
                                                          FilterFunc_k__BackingField->fields.original_method_info,
                                                          v30,
                                                          *(_QWORD *)&FilterFunc_k__BackingField->fields.extra_arg),
          ((unsigned __int8)this & 1) != 0) )
    {
      v47->fields.__2__current = (struct BattleServantData_o *)v39;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v47->fields.__2__current, v39, v32, v33, v34, v35, v36, v37);
      result = 1;
      v47->fields.__1__state = 1;
      return result;
    }
    _7__wrap1 = v47->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_32;
  }
  ReactTaskTargetFilter__Apply_d__4____m__Finally1(v47, v24);
  v47->fields.__7__wrap1 = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v47->fields.__7__wrap1, 0LL, v41, v42, v43, v44, v45, v46);
  return 0;
}


System_Collections_Generic_IEnumerator_BattleServantData__o *__fastcall ReactTaskTargetFilter__Apply_d__4__System_Collections_Generic_IEnumerable_BattleServantData__GetEnumerator(
        ReactTaskTargetFilter__Apply_d__4_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int64_t v4; // x2
  int32_t v5; // w3
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

  if ( (byte_4BDF2F7 & 1) == 0 )
  {
    sub_1C21E38(&ReactTaskTargetFilter__Apply_d__4_TypeInfo);
    byte_4BDF2F7 = 1;
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
    v10 = (ReactTaskTargetFilter__Apply_d__4_o *)sub_1C22084(ReactTaskTargetFilter__Apply_d__4_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v10->fields.__4__this = _4__this;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v10->fields.__4__this, (int64_t)_4__this, v12, v13, v14, v15, v16, v17);
  }
  _3__targets = this->fields.__3__targets;
  v10->fields.targets = _3__targets;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v10->fields.targets, (int64_t)_3__targets, v4, v5, v6, v7, v8, v9);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_ReactTaskTargetFilter__Apply_d__4_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  struct System_Collections_Generic_IEnumerator_BattleServantData__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_BattleServantData__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4BDF2F6 & 1) == 0 )
  {
    sub_1C21E38(&System_IDisposable_TypeInfo);
    byte_4BDF2F6 = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    v5 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_1C73E18(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleServantData__o *, _QWORD))p_method)(
      _7__wrap1,
      *(_QWORD *)(p_method + 8));
  }
}