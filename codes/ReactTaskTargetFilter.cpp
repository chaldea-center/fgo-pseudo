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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CB95B3 & 1) == 0 )
  {
    sub_1C6BA08(&ReactTaskTargetFilter__Apply_d__4_TypeInfo);
    byte_4CB95B3 = 1;
  }
  v5 = sub_1C6BC54(ReactTaskTargetFilter__Apply_d__4_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v5 + 56) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 56), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 48) = targets;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 48), (int32_t)targets, v8, v9);
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
  const MethodInfo *v3; // x3

  this->fields._FilterFunc_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
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
  ReactTaskTargetFilter__Apply_d__4_o *v2; // x20
  int32_t _1__state; // w8
  struct ReactTaskTargetFilter_o *_4__this; // x21
  System_Collections_Generic_IEnumerable_T__o *v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_T__o *v7; // x19
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Collections_Generic_IEnumerator_BattleServantData__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_BattleServantData__c *v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  const MethodInfo *v20; // x1
  struct System_Collections_Generic_IEnumerator_BattleServantData__o *v21; // x19
  System_Collections_Generic_IEnumerator_BattleServantData__c *v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Func_BattleServantData__bool__o *FilterFunc_k__BackingField; // x8
  struct BattleServantData_o *v31; // x19
  bool result; // w0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  ReactTaskTargetFilter__Apply_d__4_o *v35; // [xsp+18h] [xbp-28h]

  v35 = this;
  v2 = this;
  if ( (byte_4CB95B4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_ExcludeNull_BattleServantData___);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo);
    this = (ReactTaskTargetFilter__Apply_d__4_o *)sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    byte_4CB95B4 = 1;
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
           (const MethodInfo_3124D84 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
    v7 = v5;
    if ( !v5 )
      sub_1C6BC60(0, v6);
    klass = v5->klass;
    v9 = *(unsigned __int16 *)&v5->klass->_2.rank;
    if ( *(_WORD *)&v5->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_10;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v11 = sub_1C41D90(v5, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v11)(
            v7,
            *(_QWORD *)(v11 + 8));
    v35->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_BattleServantData__o *)v12;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v35->fields.__7__wrap1, v12, v13, v14);
    v2 = v35;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
LABEL_32:
    sub_1C6BC60(this, method);
  while ( 1 )
  {
    v16 = _7__wrap1->klass;
    v17 = *(unsigned __int16 *)&_7__wrap1->klass->_2.rank;
    if ( *(_WORD *)&_7__wrap1->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_18;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_18:
      v19 = sub_1C41D90(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleServantData__o *, _QWORD))v19)(
            _7__wrap1,
            *(_QWORD *)(v19 + 8))
        & 1) == 0 )
      break;
    v21 = v35->fields.__7__wrap1;
    if ( !v21 )
      sub_1C6BC60(v35, v20);
    v22 = v21->klass;
    v23 = *(unsigned __int16 *)&v21->klass->_2.rank;
    if ( *(_WORD *)&v21->klass->_2.rank )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v24 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_26;
      }
      v25 = (__int64)&v22->vtable[*v24];
    }
    else
    {
LABEL_26:
      v25 = sub_1C41D90(v35->fields.__7__wrap1, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
    }
    v26 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleServantData__o *, _QWORD))v25)(
            v21,
            *(_QWORD *)(v25 + 8));
    if ( !_4__this )
      sub_1C6BC60(v26, v27);
    FilterFunc_k__BackingField = _4__this->fields._FilterFunc_k__BackingField;
    v31 = (struct BattleServantData_o *)v26;
    if ( !FilterFunc_k__BackingField
      || (this = (ReactTaskTargetFilter__Apply_d__4_o *)((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))FilterFunc_k__BackingField->fields.invoke_impl)(
                                                          FilterFunc_k__BackingField->fields.method_code,
                                                          v26,
                                                          FilterFunc_k__BackingField->fields.method),
          ((unsigned __int8)this & 1) != 0) )
    {
      v35->fields.__2__current = v31;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v35->fields.__2__current, (int32_t)v31, v28, v29);
      result = 1;
      v35->fields.__1__state = 1;
      return result;
    }
    _7__wrap1 = v35->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_32;
  }
  ReactTaskTargetFilter__Apply_d__4____m__Finally1(v35, v20);
  v35->fields.__7__wrap1 = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v35->fields.__7__wrap1, 0, v33, v34);
  return 0;
}


System_Collections_Generic_IEnumerator_BattleServantData__o *ReactTaskTargetFilter__Apply_d__4__System_Collections_Generic_IEnumerable_BattleServantData__GetEnumerator(
        ReactTaskTargetFilter__Apply_d__4_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  ReactTaskTargetFilter__Apply_d__4_o *v6; // x20
  struct ReactTaskTargetFilter_o *_4__this; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Collections_Generic_IEnumerable_BattleServantData__o *_3__targets; // x1

  if ( (byte_4CB95B6 & 1) == 0 )
  {
    sub_1C6BA08(&ReactTaskTargetFilter__Apply_d__4_TypeInfo);
    byte_4CB95B6 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v6 = this;
  }
  else
  {
    v6 = (ReactTaskTargetFilter__Apply_d__4_o *)sub_1C6BC54(ReactTaskTargetFilter__Apply_d__4_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v6->fields.__4__this, (int32_t)_4__this, v8, v9);
  }
  _3__targets = this->fields.__3__targets;
  v6->fields.targets = _3__targets;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v6->fields.targets, (int32_t)_3__targets, v4, v5);
  return (System_Collections_Generic_IEnumerator_BattleServantData__o *)v6;
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_ReactTaskTargetFilter__Apply_d__4_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
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

  if ( (byte_4CB95B5 & 1) == 0 )
  {
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    byte_4CB95B5 = 1;
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
      v7 = sub_1C41D90(_7__wrap1, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleServantData__o *, _QWORD))v7)(
      _7__wrap1,
      *(_QWORD *)(v7 + 8));
  }
}