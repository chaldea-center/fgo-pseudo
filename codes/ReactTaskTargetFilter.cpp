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

  if ( (byte_4C3AB07 & 1) == 0 )
  {
    sub_1C32C20(&ReactTaskTargetFilter__Apply_d__4_TypeInfo);
    byte_4C3AB07 = 1;
  }
  v5 = sub_1C32E6C(ReactTaskTargetFilter__Apply_d__4_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v5 + 56) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 56), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 48) = targets;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 48), (int32_t)targets, v8, v9);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
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
  System_Collections_Generic_IEnumerable_T__o *v6; // x19
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Collections_Generic_IEnumerator_BattleServantData__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_BattleServantData__c *v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  const MethodInfo *v19; // x1
  struct System_Collections_Generic_IEnumerator_BattleServantData__o *v20; // x19
  System_Collections_Generic_IEnumerator_BattleServantData__c *v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Func_BattleServantData__bool__o *FilterFunc_k__BackingField; // x8
  struct BattleServantData_o *v29; // x19
  bool result; // w0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  ReactTaskTargetFilter__Apply_d__4_o *v33; // [xsp+18h] [xbp-28h]

  v33 = this;
  v2 = this;
  if ( (byte_4C3AB08 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_ExcludeNull_BattleServantData___);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo);
    this = (ReactTaskTargetFilter__Apply_d__4_o *)sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    byte_4C3AB08 = 1;
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
           (const MethodInfo_30C70E4 *)Method_BasicHelper_ExcludeNull_BattleServantData___);
    v6 = v5;
    if ( !v5 )
      sub_1C32E7C(0);
    klass = v5->klass;
    v8 = *(unsigned __int16 *)&v5->klass->_2.rank;
    if ( *(_WORD *)&v5->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_10;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v10 = sub_1C83438(v5, System_Collections_Generic_IEnumerable_BattleServantData__TypeInfo, 0);
    }
    v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v10)(
            v6,
            *(_QWORD *)(v10 + 8));
    v33->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_BattleServantData__o *)v11;
    sub_1C32BC4((CGThumbnailListItem_o *)&v33->fields.__7__wrap1, v11, v12, v13);
    v2 = v33;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
LABEL_32:
    sub_1C32E7C(this);
  while ( 1 )
  {
    v15 = _7__wrap1->klass;
    v16 = *(unsigned __int16 *)&_7__wrap1->klass->_2.rank;
    if ( *(_WORD *)&_7__wrap1->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_18;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_18:
      v18 = sub_1C83438(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleServantData__o *, _QWORD))v18)(
            _7__wrap1,
            *(_QWORD *)(v18 + 8))
        & 1) == 0 )
      break;
    v20 = v33->fields.__7__wrap1;
    if ( !v20 )
      sub_1C32E7C(v33);
    v21 = v20->klass;
    v22 = *(unsigned __int16 *)&v20->klass->_2.rank;
    if ( *(_WORD *)&v20->klass->_2.rank )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleServantData__c **)v23 - 1) != System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_26;
      }
      v24 = (__int64)&v21->vtable[*v23];
    }
    else
    {
LABEL_26:
      v24 = sub_1C83438(v33->fields.__7__wrap1, System_Collections_Generic_IEnumerator_BattleServantData__TypeInfo, 0);
    }
    v25 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleServantData__o *, _QWORD))v24)(
            v20,
            *(_QWORD *)(v24 + 8));
    if ( !_4__this )
      sub_1C32E7C(v25);
    FilterFunc_k__BackingField = _4__this->fields._FilterFunc_k__BackingField;
    v29 = (struct BattleServantData_o *)v25;
    if ( !FilterFunc_k__BackingField
      || (this = (ReactTaskTargetFilter__Apply_d__4_o *)((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))FilterFunc_k__BackingField->fields.invoke_impl)(
                                                          FilterFunc_k__BackingField->fields.method_code,
                                                          v25,
                                                          FilterFunc_k__BackingField->fields.method),
          ((unsigned __int8)this & 1) != 0) )
    {
      v33->fields.__2__current = v29;
      sub_1C32BC4((CGThumbnailListItem_o *)&v33->fields.__2__current, (int32_t)v29, v26, v27);
      result = 1;
      v33->fields.__1__state = 1;
      return result;
    }
    _7__wrap1 = v33->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_32;
  }
  ReactTaskTargetFilter__Apply_d__4____m__Finally1(v33, v19);
  v33->fields.__7__wrap1 = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&v33->fields.__7__wrap1, 0, v31, v32);
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

  if ( (byte_4C3AB0A & 1) == 0 )
  {
    sub_1C32C20(&ReactTaskTargetFilter__Apply_d__4_TypeInfo);
    byte_4C3AB0A = 1;
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
    v6 = (ReactTaskTargetFilter__Apply_d__4_o *)sub_1C32E6C(ReactTaskTargetFilter__Apply_d__4_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v6->fields.__4__this = _4__this;
    sub_1C32BC4((CGThumbnailListItem_o *)&v6->fields.__4__this, (int32_t)_4__this, v8, v9);
  }
  _3__targets = this->fields.__3__targets;
  v6->fields.targets = _3__targets;
  sub_1C32BC4((CGThumbnailListItem_o *)&v6->fields.targets, (int32_t)_3__targets, v4, v5);
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_ReactTaskTargetFilter__Apply_d__4_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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

  if ( (byte_4C3AB09 & 1) == 0 )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    byte_4C3AB09 = 1;
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
      v7 = sub_1C83438(_7__wrap1, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleServantData__o *, _QWORD))v7)(
      _7__wrap1,
      *(_QWORD *)(v7 + 8));
  }
}