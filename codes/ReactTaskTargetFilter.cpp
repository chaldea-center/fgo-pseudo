void ReactTaskTargetFilter___ctor(ReactTaskTargetFilter_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_BattleServantData__o *ReactTaskTargetFilter__Apply(
        ReactTaskTargetFilter_o *this,
        System_Collections_Generic_IEnumerable_BattleServantData__o *targets,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5973CE1 & 1) == 0 )
  {
    sub_2213A60(&ReactTaskTargetFilter__Apply_d__4_TypeInfo);
    byte_5973CE1 = 1;
  }
  v5 = sub_2213CCC(ReactTaskTargetFilter__Apply_d__4_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v5 + 56) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 56), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 48) = targets;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 48), (int32_t)targets, v12, v13, v14, v15, v16, v17);
  return (System_Collections_Generic_IEnumerable_BattleServantData__o *)v5;
}


bool ReactTaskTargetFilter__IsFilterFuncMatched(
        ReactTaskTargetFilter_o *this,
        BattleServantData_o *target,
        const MethodInfo *method)
{
  struct System_Func_BattleServantData__bool__o *FilterFunc_k__BackingField; // x8

  FilterFunc_k__BackingField = this->fields._FilterFunc_k__BackingField;
  if ( FilterFunc_k__BackingField )
    return ((__int64 (__fastcall *)(intptr_t, BattleServantData_o *, intptr_t))FilterFunc_k__BackingField->fields.invoke_impl)(
             FilterFunc_k__BackingField->fields.method_code,
             target,
             FilterFunc_k__BackingField->fields.method);
  else
    return 1;
}


System_Func_BattleServantData__bool__o *ReactTaskTargetFilter__get_FilterFunc(
        ReactTaskTargetFilter_o *this,
        const MethodInfo *method)
{
  return this->fields._FilterFunc_k__BackingField;
}


void ReactTaskTargetFilter__set_FilterFunc(
        ReactTaskTargetFilter_o *this,
        System_Func_BattleServantData__bool__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._FilterFunc_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ReactTaskTargetFilter__Apply_d__4___ctor(
        ReactTaskTargetFilter__Apply_d__4_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool ReactTaskTargetFilter__Apply_d__4__MoveNext(ReactTaskTargetFilter__Apply_d__4_o *this, const MethodInfo *method)
{
  ReactTaskTargetFilter__Apply_d__4_o *v2; // x19
  ReactTaskTargetFilter__Apply_d__4_Fields *p_fields; // x8
  int32_t _1__state; // w9
  struct ReactTaskTargetFilter_o *_4__this; // x20
  System_Collections_Generic_IEnumerable_T__o *targets; // x0
  System_Collections_Generic_IEnumerable_T__o *v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_T__o *v9; // x19
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Collections_Generic_IEnumerator_BattleServantData__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_BattleServantData__c *v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  const MethodInfo *v26; // x1
  struct System_Collections_Generic_IEnumerator_BattleServantData__o *v27; // x19
  System_Collections_Generic_IEnumerator_BattleServantData__c *v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct System_Func_BattleServantData__bool__o *FilterFunc_k__BackingField; // x8
  struct BattleServantData_o *v41; // x19
  bool result; // w0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  ReactTaskTargetFilter__Apply_d__4_o *v49; // [xsp+18h] [xbp-28h]

  v49 = this;
  v2 = this;
  if ( (byte_5973CE2 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_ExcludeNull_BattleServantData___);
    sub_2213A60(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo);
    this = (ReactTaskTargetFilter__Apply_d__4_o *)sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_5973CE2 = 1;
  }
  p_fields = &v2->fields;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    targets = (System_Collections_Generic_IEnumerable_T__o *)v2->fields.targets;
    v2->fields.__1__state = -1;
    v7 = BasicHelper__ExcludeNull_object_(
           targets,
           (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_BattleServantData___);
    v9 = v7;
    if ( !v7 )
      sub_2213CDC(0, v8);
    klass = v7->klass;
    v11 = *(unsigned __int16 *)&v7->klass->_2.rank;
    if ( *(_WORD *)&v7->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_10;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v13 = sub_224BC3C(v7, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v13)(
            v9,
            *(_QWORD *)(v13 + 8));
    v49->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_BattleServantData__o *)v14;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v49->fields.__7__wrap1, v14, v15, v16, v17, v18, v19, v20);
    p_fields = &v49->fields;
  }
  p_fields->__1__state = -3;
  while ( 1 )
  {
    _7__wrap1 = v49->fields.__7__wrap1;
    if ( !_7__wrap1 )
      sub_2213CDC(this, method);
    v22 = _7__wrap1->klass;
    v23 = *(unsigned __int16 *)&_7__wrap1->klass->_2.rank;
    if ( *(_WORD *)&_7__wrap1->klass->_2.rank )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_19;
      }
      v25 = (__int64)&v22->vtable[*v24];
    }
    else
    {
LABEL_19:
      v25 = sub_224BC3C(v49->fields.__7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleServantData__o *, _QWORD))v25)(
            _7__wrap1,
            *(_QWORD *)(v25 + 8))
        & 1) == 0 )
      break;
    v27 = v49->fields.__7__wrap1;
    if ( !v27 )
      sub_2213CDC(v49, v26);
    v28 = v27->klass;
    v29 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v30 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_27;
      }
      v31 = (__int64)&v28->vtable[*v30];
    }
    else
    {
LABEL_27:
      v31 = sub_224BC3C(v49->fields.__7__wrap1, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
    }
    v32 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleServantData__o *, _QWORD))v31)(
            v27,
            *(_QWORD *)(v31 + 8));
    if ( !_4__this )
      sub_2213CDC(v32, v33);
    FilterFunc_k__BackingField = _4__this->fields._FilterFunc_k__BackingField;
    v41 = (struct BattleServantData_o *)v32;
    if ( FilterFunc_k__BackingField )
    {
      this = (ReactTaskTargetFilter__Apply_d__4_o *)((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))FilterFunc_k__BackingField->fields.invoke_impl)(
                                                      FilterFunc_k__BackingField->fields.method_code,
                                                      v32,
                                                      FilterFunc_k__BackingField->fields.method);
      if ( ((unsigned __int8)this & 1) == 0 )
        continue;
    }
    v49->fields.__2__current = v41;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v49->fields.__2__current,
      (int32_t)v41,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    result = 1;
    v49->fields.__1__state = 1;
    return result;
  }
  ReactTaskTargetFilter__Apply_d__4____m__Finally1(v49, v26);
  v49->fields.__7__wrap1 = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v49->fields.__7__wrap1, 0, v43, v44, v45, v46, v47, v48);
  return 0;
}


System_Collections_Generic_IEnumerator_BattleServantData__o *ReactTaskTargetFilter__Apply_d__4__System_Collections_Generic_IEnumerable_BattleServantData__GetEnumerator(
        ReactTaskTargetFilter__Apply_d__4_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  ReactTaskTargetFilter__Apply_d__4_o *v10; // x20
  int32_t CurrentManagedThreadId; // w0
  struct ReactTaskTargetFilter_o *_4__this; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Collections_Generic_IEnumerable_BattleServantData__o *_3__targets; // x1

  if ( (byte_5973CE4 & 1) == 0 )
  {
    sub_2213A60(&ReactTaskTargetFilter__Apply_d__4_TypeInfo);
    byte_5973CE4 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v10 = this;
  }
  else
  {
    v10 = (ReactTaskTargetFilter__Apply_d__4_o *)sub_2213CCC(ReactTaskTargetFilter__Apply_d__4_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    v10->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v10->fields.__l__initialThreadId = CurrentManagedThreadId;
    v10->fields.__4__this = _4__this;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v10->fields.__4__this,
      (int32_t)_4__this,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  _3__targets = this->fields.__3__targets;
  v10->fields.targets = _3__targets;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->fields.targets, (int32_t)_3__targets, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerator_BattleServantData__o *)v10;
}


BattleServantData_o *ReactTaskTargetFilter__Apply_d__4__System_Collections_Generic_IEnumerator_BattleServantData__get_Current(
        ReactTaskTargetFilter__Apply_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ReactTaskTargetFilter__Apply_d__4__System_Collections_IEnumerator_Reset(
        ReactTaskTargetFilter__Apply_d__4_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_ReactTaskTargetFilter__Apply_d__4_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *ReactTaskTargetFilter__Apply_d__4__System_Collections_IEnumerator_get_Current(
        ReactTaskTargetFilter__Apply_d__4_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void ReactTaskTargetFilter__Apply_d__4__System_IDisposable_Dispose(
        ReactTaskTargetFilter__Apply_d__4_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    ReactTaskTargetFilter__Apply_d__4____m__Finally1(this, method);
}


void ReactTaskTargetFilter__Apply_d__4____m__Finally1(
        ReactTaskTargetFilter__Apply_d__4_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_BattleServantData__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_BattleServantData__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_5973CE3 & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    byte_5973CE3 = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    v5 = *(unsigned __int16 *)&_7__wrap1->klass->_2.rank;
    if ( *(_WORD *)&_7__wrap1->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      v7 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_8:
      v7 = sub_224BC3C(_7__wrap1, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleServantData__o *, _QWORD))v7)(
      _7__wrap1,
      *(_QWORD *)(v7 + 8));
  }
}