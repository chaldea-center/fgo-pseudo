void BuffEntity___ctor(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5FF1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_int___ctor__);
    byte_4CB5FF1 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33F6BF8 *)Method_DataEntityBase_int___ctor__);
}


bool BuffEntity__ContainsIndividualityToActivate(
        BuffEntity_o *this,
        System_Int32_array *individualityArray,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t Script; // w1

  if ( (byte_4CB5FE3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C6BA08(&StringLiteral_7432/*"INDIVIDUALITIE"*/);
    byte_4CB5FE3 = 1;
  }
  Script = BuffEntity__getScript(this, (System_String_o *)StringLiteral_7432/*"INDIVIDUALITIE"*/, 0, v3);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)individualityArray,
           Script,
           (const MethodInfo_31583F4 *)Method_System_Linq_Enumerable_Contains_int___);
}


int32_t BuffEntity__CreatePrimaryKey(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Nullable_float__o BuffEntity__GetBattleCharaAlpha(BuffEntity_o *this, const MethodInfo *method)
{
  float v3; // s0
  System_Nullable_float__o v4; // x0
  System_Nullable_float__o v6; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB5FC9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Nullable_float___ctor__);
    sub_1C6BA08(&StringLiteral_17081/*"battleCharaAlpha"*/);
    byte_4CB5FC9 = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17081/*"battleCharaAlpha"*/, 0) )
  {
    v3 = (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17081/*"battleCharaAlpha"*/, 0, 0)
       / 1000.0;
    v4 = (System_Nullable_float__o)&v6;
    v6 = 0;
    System_Nullable_float____ctor(v4, v3, (const MethodInfo_392B698 *)Method_System_Nullable_float___ctor__);
    return v6;
  }
  else
  {
    return (System_Nullable_float__o)0LL;
  }
}


System_String_o *BuffEntity__GetBuffStateNoticeName(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5FDD & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_17641/*"buffStateNoticeName"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB5FDD = 1;
  }
  return BuffEntity__getScript_42070256(
           this,
           (System_String_o *)StringLiteral_17641/*"buffStateNoticeName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t BuffEntity__GetCardEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5FC6 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_4319/*"CardEffectId"*/);
    byte_4CB5FC6 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_4319/*"CardEffectId"*/, 0, v2);
}


int32_t BuffEntity__GetCkIndvCountAbove(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CB5FD1 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_17992/*"ckIndvCountAbove"*/);
    byte_4CB5FD1 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17992/*"ckIndvCountAbove"*/, defVal, v3);
}


int32_t BuffEntity__GetCkIndvCountBelow(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CB5FD2 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_17993/*"ckIndvCountBelow"*/);
    byte_4CB5FD2 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17993/*"ckIndvCountBelow"*/, defVal, v3);
}


System_Int32_array *BuffEntity__GetCkOpCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4CB5FD4 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_17994/*"ckOpCountIndividuality"*/);
    byte_4CB5FD4 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_17994/*"ckOpCountIndividuality"*/, 0, 0x2Cu, v2);
}


System_Int32_array *BuffEntity__GetCkSelfCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4CB5FD3 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_17995/*"ckSelfCountIndividuality"*/);
    byte_4CB5FD3 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_17995/*"ckSelfCountIndividuality"*/, 0, 0x2Cu, v2);
}


int32_t BuffEntity__GetClassIconChangeEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5FE6 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18004/*"classIconChangeEffectId"*/);
    byte_4CB5FE6 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18004/*"classIconChangeEffectId"*/, -1, v2);
}


BuffEntity_CondBuffValueData_array *BuffEntity__GetCondBuffValueArray(BuffEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  long double inited; // q0
  Il2CppObject *v5; // x19
  BuffEntity_CondBuffValueData_array *result; // x0
  _QWORD *v7; // x19
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4CB5FF0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_BuffEntity_CondBuffValueData___);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C6BA08(&Method_JsonManager_Deserialize_BuffEntity_CondBuffValueData_____);
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_18225/*"condBuffValue"*/);
    byte_4CB5FF0 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script )
    sub_1C6BC60(0, method);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_18225/*"condBuffValue"*/,
          &value,
          (const MethodInfo_34BD148 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    goto LABEL_8;
  v5 = value;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  result = (BuffEntity_CondBuffValueData_array *)JsonManager__Deserialize_object_(
                                                   v5,
                                                   (const MethodInfo_31AAEC8 *)Method_JsonManager_Deserialize_BuffEntity_CondBuffValueData_____);
  if ( !result )
  {
LABEL_8:
    v7 = Method_System_Array_Empty_BuffEntity_CondBuffValueData___;
    v8 = *((_QWORD *)Method_System_Array_Empty_BuffEntity_CondBuffValueData___ + 7);
    if ( !v8 )
    {
      sub_1C41AF8(Method_System_Array_Empty_BuffEntity_CondBuffValueData___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C41A9C(inited);
    if ( !*(_DWORD *)(v9 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v9);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C41A9C(inited);
    return **(BuffEntity_CondBuffValueData_array ***)(v10 + 184);
  }
  return result;
}


int32_t BuffEntity__GetConditionTargetType(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5FEB & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_20842/*"individualityCondTargetType"*/);
    byte_4CB5FEB = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20842/*"individualityCondTargetType"*/, 0, 0);
}


System_String_o *BuffEntity__GetCounterMessage(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5FCF & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_4821/*"CounterMessage"*/);
    byte_4CB5FCF = 1;
  }
  return BuffEntity__getScript_42070256(this, (System_String_o *)StringLiteral_4821/*"CounterMessage"*/, 0, v2);
}


int32_t BuffEntity__GetDefCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  return 2 * (this->fields.type == 155);
}


int32_t BuffEntity__GetDisplayPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CB5FE0 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_5288/*"DisplayPriority"*/);
    byte_4CB5FE0 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5288/*"DisplayPriority"*/, defVal, v3);
}


System_String_o *BuffEntity__GetEffectText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5FB5 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18965/*"effectText"*/);
    byte_4CB5FB5 = 1;
  }
  return BuffEntity__getScript_42070256(this, (System_String_o *)StringLiteral_18965/*"effectText"*/, 0, v2);
}


int32_t BuffEntity__GetExecutePriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CB5FE1 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_19375/*"executePriority"*/);
    byte_4CB5FE1 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19375/*"executePriority"*/, defVal, v3);
}


int32_t BuffEntity__GetExtendLowerLimit(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5FC3 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_19385/*"extendLowerLimit"*/);
    byte_4CB5FC3 = 1;
  }
  return -BuffEntity__getScript(this, (System_String_o *)StringLiteral_19385/*"extendLowerLimit"*/, 0, v2);
}


int32_t BuffEntity__GetGuardEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5FB4 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_19984/*"guardEffectId"*/);
    byte_4CB5FB4 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19984/*"guardEffectId"*/, 0, v2);
}


int32_t BuffEntity__GetIconId(BuffEntity_o *this, const MethodInfo *method)
{
  int32_t iconId; // w21
  System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__o *OverwriteBuffIconDataArray; // x0
  BuffEntity___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_Func_object__int__o *_9__20_0; // x21
  Il2CppObject *v8; // x22
  struct BuffEntity___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v12; // x0
  __int64 v13; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v15; // x20
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x20
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 IsOpen; // x0
  __int64 v30; // x1
  __int64 v31; // x21
  __int64 v32; // x19
  int v33; // w8
  int v34; // w27
  char v35; // w26
  __int64 v36; // x23
  __int64 v37; // x0
  __int64 v38; // x1
  int32_t v39; // w22
  __int64 v40; // x8
  int32_t v41; // w23
  int64_t v42; // x24
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  int32_t v48; // [xsp+Ch] [xbp-64h]

  if ( (byte_4CB5FA4 & 1) == 0 )
  {
    sub_1C6BA08(&BattleData_TypeInfo);
    sub_1C6BA08(&CondType_TypeInfo);
    sub_1C6BA08(&Method_EnumUtility_CastToEnum_CondType_Kind___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_OrderByDescending_BuffEntity_OverwriteBuffIconData__int___);
    sub_1C6BA08(&System_Func_BuffEntity_OverwriteBuffIconData__int__TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_BuffEntity_OverwriteBuffIconData__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_BuffEntity___c__GetIconId_b__20_0__);
    sub_1C6BA08(&BuffEntity___c_TypeInfo);
    byte_4CB5FA4 = 1;
  }
  iconId = this->fields.iconId;
  OverwriteBuffIconDataArray = BuffEntity__GetOverwriteBuffIconDataArray(this, method);
  v5 = BuffEntity___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)OverwriteBuffIconDataArray;
  v48 = iconId;
  if ( !BuffEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffEntity___c_TypeInfo);
    v5 = BuffEntity___c_TypeInfo;
  }
  _9__20_0 = (System_Func_object__int__o *)v5->static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BuffEntity___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__20_0 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_BuffEntity_OverwriteBuffIconData__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_0, v8, Method_BuffEntity___c__GetIconId_b__20_0__, 0);
    static_fields = BuffEntity___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Func_BuffEntity_OverwriteBuffIconData__int__o *)_9__20_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v10, v11);
  }
  v12 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v6,
          (System_Func_TSource__TKey__o *)_9__20_0,
          (const MethodInfo_316B118 *)Method_System_Linq_Enumerable_OrderByDescending_BuffEntity_OverwriteBuffIconData__int___);
  if ( !v12 )
    sub_1C6BC60(0, v13);
  klass = v12->klass;
  v15 = v12;
  v16 = *(unsigned __int16 *)&v12->klass->_2.rank;
  if ( *(_WORD *)&v12->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_14;
    }
    v18 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v18 = sub_1C41D90(v12, System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__TypeInfo, 0);
  }
  v20 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v18)(v15, *(_QWORD *)(v18 + 8));
  if ( !v20 )
    sub_1C6BC60(0, v19);
  while ( 1 )
  {
    v21 = *(_QWORD *)v20;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_21;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_21:
      v24 = sub_1C41D90(v20, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
      break;
    v25 = *(_QWORD *)v20;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BuffEntity_OverwriteBuffIconData__c **)v27 - 1) != System_Collections_Generic_IEnumerator_BuffEntity_OverwriteBuffIconData__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_28;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_28:
      v28 = sub_1C41D90(v20, System_Collections_Generic_IEnumerator_BuffEntity_OverwriteBuffIconData__TypeInfo, 0);
    }
    IsOpen = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
    v31 = IsOpen;
    if ( !IsOpen )
      sub_1C6BC60(0, v30);
    v32 = *(_QWORD *)(IsOpen + 24);
    if ( !v32 )
      sub_1C6BC60(IsOpen, v30);
    v33 = *(_DWORD *)(v32 + 24);
    if ( v33 >= 1 )
    {
      v34 = 0;
      v35 = 1;
      do
      {
        if ( v34 >= (unsigned int)v33 )
          sub_1C6BC68(IsOpen);
        v36 = *(_QWORD *)(v32 + 8LL * v34 + 32);
        if ( !v36 )
          sub_1C6BC60(IsOpen, v30);
        v37 = EnumUtility__CastToEnum_Int32Enum_(
                *(System_String_o **)(v36 + 16),
                0,
                (const MethodInfo_314232C *)Method_EnumUtility_CastToEnum_CondType_Kind___);
        v39 = v37;
        if ( (_DWORD)v37 == 81 )
        {
          if ( !BattleData_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
          IsOpen = BattleData__get_BattleGenderType(0) == *(_DWORD *)(v36 + 24);
        }
        else
        {
          v40 = *(_QWORD *)(v36 + 32);
          if ( !v40 )
            sub_1C6BC60(v37, v38);
          if ( !*(_DWORD *)(v40 + 24) )
            sub_1C6BC68(v37);
          v41 = *(_DWORD *)(v36 + 24);
          v42 = *(int *)(v40 + 32);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v39, v41, v42, 0, 0, 0);
        }
        v33 = *(_DWORD *)(v32 + 24);
        ++v34;
        v35 &= IsOpen;
      }
      while ( v34 < v33 );
      if ( (v35 & 1) == 0 )
        continue;
    }
    v48 = *(_DWORD *)(v31 + 16);
    break;
  }
  v43 = *(_QWORD *)v20;
  v44 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
  {
    v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_52;
    }
    v46 = v43 + 16LL * *v45 + 312;
  }
  else
  {
LABEL_52:
    v46 = sub_1C41D90(v20, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v46)(v20, *(_QWORD *)(v46 + 8));
  return v48;
}


int32_t BuffEntity__GetIndividualitieCountAbove(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CB5FD5 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_7433/*"INDIVIDUALITIE_COUNT_ABOVE"*/);
    byte_4CB5FD5 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7433/*"INDIVIDUALITIE_COUNT_ABOVE"*/, defVal, v3);
}


int32_t BuffEntity__GetIndividualitieCountBelow(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CB5FD6 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_7434/*"INDIVIDUALITIE_COUNT_BELOW"*/);
    byte_4CB5FD6 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7434/*"INDIVIDUALITIE_COUNT_BELOW"*/, defVal, v3);
}


int32_t BuffEntity__GetMaxBuffRate(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5FCC & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_8971/*"MaxBuffRate"*/);
    byte_4CB5FCC = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_8971/*"MaxBuffRate"*/, -1, v2);
}


System_String_o *BuffEntity__GetMotionName(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5FB6 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_21742/*"motionName"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB5FB6 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_42070256(this, (System_String_o *)StringLiteral_21742/*"motionName"*/, 0, v2);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


BuffEntity_BuffConditionIndividualityData_array *BuffEntity__GetMultiConditionIndividualityDataArray(
        BuffEntity_o *this,
        const MethodInfo *method)
{
  BuffEntity_BuffConditionIndividualityData_array *result; // x0
  CGThumbnailListItem_o *p_cachedConditionIndividualityDataArray; // x19
  int32_t MultiConditionType; // w0
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  __int64 naturalAligment; // x10
  System_Object_array *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_object__o *v14; // x20
  Il2CppObject *current; // x22
  __int64 v16; // x10
  BuffEntity_BuffConditionIndividualityData_o *v17; // x21
  const MethodInfo *v18; // x2
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4CB5FEF & 1) == 0 )
  {
    sub_1C6BA08(&BuffEntity_BuffConditionIndividualityData___TypeInfo);
    sub_1C6BA08(&BuffEntity_BuffConditionIndividualityData_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData__TypeInfo);
    sub_1C6BA08(&BuffList_MULTI_CONDITION_TypeInfo);
    byte_4CB5FEF = 1;
  }
  value = 0;
  memset(&v28, 0, sizeof(v28));
  p_cachedConditionIndividualityDataArray = (CGThumbnailListItem_o *)&this->fields.cachedConditionIndividualityDataArray;
  result = this->fields.cachedConditionIndividualityDataArray;
  if ( !result )
  {
    MultiConditionType = BuffEntity__GetMultiConditionType(this, method);
    if ( MultiConditionType )
    {
      script = this->fields.script;
      LODWORD(v27.fields._current) = MultiConditionType;
      v27.fields._list = (struct System_Collections_Generic_List_T__o *)BuffList_MULTI_CONDITION_TypeInfo;
      *(_QWORD *)&v27.fields._index = -1;
      v7 = (Il2CppObject *)System_Enum__ToString((System_Enum_o *)&v27, 0);
      if ( script )
      {
        System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          v7,
          &value,
          (const MethodInfo_34BD148 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
        v9 = value;
        if ( !value )
          goto LABEL_9;
        naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
        if ( value->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
        {
          goto LABEL_9;
        }
        v14 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v14,
          (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData___ctor__);
        System_Collections_Generic_List_object___GetEnumerator(
          &v27,
          (System_Collections_Generic_List_object__o *)v9,
          (const MethodInfo_380146C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v28 = v27;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  (System_Collections_Generic_List_Enumerator_object__o *)&v28,
                  (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        {
          current = v28.fields._current;
          if ( v28.fields._current )
          {
            v16 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
            if ( v28.fields._current->klass->_2.naturalAligment >= (unsigned int)v16
              && (System_Collections_Generic_Dictionary_string__object__c *)v28.fields._current->klass->_2.typeHierarchy[v16 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
            {
              v17 = (BuffEntity_BuffConditionIndividualityData_o *)sub_1C6BC54(BuffEntity_BuffConditionIndividualityData_TypeInfo);
              BuffEntity_BuffConditionIndividualityData___ctor(
                v17,
                (System_Collections_Generic_Dictionary_string__object__o *)current,
                v18);
              if ( !v14 )
                sub_1C6BC60(v19, v20);
              items = v14->fields._items;
              v24 = Method_System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData__Add__;
              ++v14->fields._version;
              if ( !items )
                sub_1C6BC60(v19, v20);
              size = v14->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v14,
                  (Il2CppObject *)v17,
                  *(const MethodInfo_3800974 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
              }
              else
              {
                v26 = &items->obj.klass + size;
                v14->fields._size = size + 1;
                v26[4] = (Il2CppClass *)v17;
                sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v17, v21, v22);
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          (System_Collections_Generic_List_Enumerator_object__o *)&v28,
          (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        if ( v14 )
        {
          v11 = System_Collections_Generic_List_object___ToArray(
                  v14,
                  (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData__ToArray__);
          goto LABEL_10;
        }
      }
      sub_1C6BC60(v7, v8);
    }
LABEL_9:
    v11 = (System_Object_array *)sub_1C6BAB0(BuffEntity_BuffConditionIndividualityData___TypeInfo, 0);
LABEL_10:
    p_cachedConditionIndividualityDataArray->klass = (CGThumbnailListItem_c *)v11;
    sub_1C6B9AC(p_cachedConditionIndividualityDataArray, (int32_t)v11, v12, v13);
    return (BuffEntity_BuffConditionIndividualityData_array *)p_cachedConditionIndividualityDataArray->klass;
  }
  return result;
}


int32_t BuffEntity__GetMultiConditionType(BuffEntity_o *this, const MethodInfo *method)
{
  Il2CppType *v3; // x19
  System_RuntimeTypeHandle_o v4; // x0
  System_Type_o *TypeFromHandle; // x19
  System_Array_o *Values; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_IEnumerator_c *v14; // x8
  __int64 v15; // x9
  System_Collections_IEnumerator_c **v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  int32_t v22; // w21
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x22
  Il2CppObject *v24; // x0
  Il2CppObject *v25; // x1
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x19
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  System_Enum_o v33; // [xsp+8h] [xbp-68h] BYREF
  int32_t v34; // [xsp+18h] [xbp-58h]

  if ( (byte_4CB5FEE & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C6BA08(&System_Enum_TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&BuffList_MULTI_CONDITION_var);
    sub_1C6BA08(&BuffList_MULTI_CONDITION_TypeInfo);
    sub_1C6BA08(&System_Type_TypeInfo);
    byte_4CB5FEE = 1;
  }
  v3 = BuffList_MULTI_CONDITION_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v4.fields.value = (intptr_t)v3;
  TypeFromHandle = System_Type__GetTypeFromHandle(v4, 0);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Values = System_Enum__GetValues(TypeFromHandle, 0);
  if ( !Values )
    sub_1C6BC60(0, v7);
  Enumerator = System_Array__GetEnumerator(Values, 0);
  if ( !Enumerator )
    sub_1C6BC60(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_13;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_13:
      v13 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(Enumerator, *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = (System_Collections_IEnumerator_c **)&v14->_1.interfaceOffsets->offset;
      while ( *(v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 2;
        if ( !v15 )
          goto LABEL_20;
      }
      v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 1];
    }
    else
    {
LABEL_20:
      v17 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(Enumerator, *(_QWORD *)(v17 + 8));
    if ( !v18 )
      sub_1C6BC60(0, v19);
    if ( *(Il2CppClass **)(*(_QWORD *)v18 + 64LL) != BuffList_MULTI_CONDITION_TypeInfo->_1.element_class )
    {
      sub_1C6BFFC(v18);
LABEL_40:
      sub_1C6BC60(v24, v25);
    }
    v22 = *(_DWORD *)j_il2cpp_object_unbox_0(v18, BuffList_MULTI_CONDITION_TypeInfo, v20, v21);
    if ( v22 )
    {
      script = this->fields.script;
      v34 = v22;
      v33.klass = (System_Enum_c *)BuffList_MULTI_CONDITION_TypeInfo;
      v33.monitor = (void *)-1LL;
      v24 = (Il2CppObject *)System_Enum__ToString(&v33, 0);
      v25 = v24;
      if ( !script )
        goto LABEL_40;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)script,
             v24,
             (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        goto LABEL_29;
      }
    }
  }
  v22 = 0;
LABEL_29:
  v26 = sub_1C6BB44(Enumerator, System_IDisposable_TypeInfo);
  if ( v26 )
  {
    v27 = *(_QWORD *)v26;
    v28 = v26;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_34;
      }
      v31 = v27 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_34:
      v31 = sub_1C41D90(v26, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
  }
  return v22;
}


System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__o *BuffEntity__GetOverwriteBuffIconDataArray(
        BuffEntity_o *this,
        const MethodInfo *method)
{
  long double inited; // q0
  _QWORD *v4; // x20
  __int64 v5; // x8
  __int64 v6; // x0
  __int64 v7; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x8
  System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__o *v9; // x19
  Il2CppObject *v10; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB5FEA & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_BuffEntity_OverwriteBuffIconData___);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C6BA08(&Method_JsonManager_Deserialize_BuffEntity_OverwriteBuffIconData_____);
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_22645/*"overwriteIconIds"*/);
    byte_4CB5FEA = 1;
  }
  v4 = Method_System_Array_Empty_BuffEntity_OverwriteBuffIconData___;
  value = 0;
  v5 = *((_QWORD *)Method_System_Array_Empty_BuffEntity_OverwriteBuffIconData___ + 7);
  if ( !v5 )
  {
    sub_1C41AF8(Method_System_Array_Empty_BuffEntity_OverwriteBuffIconData___);
    v5 = v4[7];
  }
  v6 = *(_QWORD *)(v5 + 16);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C41A9C(inited);
  if ( !*(_DWORD *)(v6 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v6);
  v7 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C41A9C(inited);
  script = this->fields.script;
  if ( !script )
    sub_1C6BC60(v7, method);
  v9 = **(System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__o ***)(v7 + 184);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_22645/*"overwriteIconIds"*/,
         &value,
         (const MethodInfo_34BD148 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v10 = value;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__o *)JsonManager__Deserialize_object_(
                                                                                           v10,
                                                                                           (const MethodInfo_31AAEC8 *)Method_JsonManager_Deserialize_BuffEntity_OverwriteBuffIconData_____);
  }
  return v9;
}


int32_t BuffEntity__GetOverwriteClassIconChangeEffectIdAtBuffRemove(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CB5FE7 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_22622/*"overwriteClassIconChangeEffectIdAtBuffRemove"*/);
    byte_4CB5FE7 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_22622/*"overwriteClassIconChangeEffectIdAtBuffRemove"*/, defVal, v3);
}


int32_t BuffEntity__GetPopupEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5FB3 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_22822/*"popupEffectId"*/);
    byte_4CB5FB3 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_22822/*"popupEffectId"*/, 0, v2);
}


int32_t BuffEntity__GetProgressSelfTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5FC4 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_10757/*"ProgressSelfTurn"*/);
    byte_4CB5FC4 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10757/*"ProgressSelfTurn"*/, -1, v2);
}


int32_t BuffEntity__GetProgressTurnCond(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5FC5 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_10759/*"ProgressTurnCond"*/);
    byte_4CB5FC5 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10759/*"ProgressTurnCond"*/, -1, v2);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *BuffEntity__GetScriptIntArray(
        BuffEntity_o *this,
        System_String_o *key,
        System_Int32_array *defValues,
        uint16_t separator,
        const MethodInfo *method)
{
  System_String_o *Script_42070256; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  BuffEntity___c_c *v14; // x8
  System_Func_object__int__o *_9__25_0; // x20
  Il2CppObject *v16; // x21
  struct BuffEntity___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_4CB5FA8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C6BA08(&System_Func_string__int__TypeInfo);
    sub_1C6BA08(&Method_BuffEntity___c__GetScriptIntArray_b__25_0__);
    sub_1C6BA08(&BuffEntity___c_TypeInfo);
    byte_4CB5FA8 = 1;
  }
  Script_42070256 = BuffEntity__getScript_42070256(this, key, 0, (const MethodInfo *)separator);
  IsNullOrEmpty = System_String__IsNullOrEmpty(Script_42070256, 0);
  if ( IsNullOrEmpty )
    return defValues;
  if ( !Script_42070256 )
    sub_1C6BC60(IsNullOrEmpty, v11);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(Script_42070256, separator, 0, 0);
  v14 = BuffEntity___c_TypeInfo;
  if ( !BuffEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffEntity___c_TypeInfo);
    v14 = BuffEntity___c_TypeInfo;
  }
  _9__25_0 = (System_Func_object__int__o *)v14->static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = BuffEntity___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__25_0 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(_9__25_0, v16, Method_BuffEntity___c__GetScriptIntArray_b__25_0__, 0);
    static_fields = BuffEntity___c_TypeInfo->static_fields;
    static_fields->__9__25_0 = (struct System_Func_string__int__o *)_9__25_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__25_0, (int32_t)_9__25_0, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v13,
                                                               (System_Func_TSource__TResult__o *)_9__25_0,
                                                               (const MethodInfo_3171234 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v20,
           (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t BuffEntity__GetShowStateWarBoardEnemyEquip(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CB5FD0 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_12871/*"ShowStateWarBoardEnemyEquip"*/);
    byte_4CB5FD0 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_12871/*"ShowStateWarBoardEnemyEquip"*/, defVal, v3);
}


BuffEntity_BuffConditionIndividualityData_o *BuffEntity__GetSingleConditionIndividualityData(
        BuffEntity_o *this,
        const MethodInfo *method)
{
  BuffEntity_BuffConditionIndividualityData_o *result; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x21
  BuffEntity_BuffConditionIndividualityData_o *v5; // x22
  const MethodInfo *v6; // x2
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CB5FED & 1) == 0 )
  {
    sub_1C6BA08(&BuffEntity_BuffConditionIndividualityData_TypeInfo);
    byte_4CB5FED = 1;
  }
  result = this->fields.cachedConditionIndividualityData;
  if ( !result )
  {
    if ( BuffEntity__isConditionIndividuality(this, method) )
    {
      script = this->fields.script;
      v5 = (BuffEntity_BuffConditionIndividualityData_o *)sub_1C6BC54(BuffEntity_BuffConditionIndividualityData_TypeInfo);
      BuffEntity_BuffConditionIndividualityData___ctor(v5, script, v6);
      this->fields.cachedConditionIndividualityData = v5;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.cachedConditionIndividualityData, (int32_t)v5, v7, v8);
      return this->fields.cachedConditionIndividualityData;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


System_Int32_array *BuffEntity__GetTargetIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4CB5FCD & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_13658/*"TargetIndiv"*/);
    byte_4CB5FCD = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_13658/*"TargetIndiv"*/, 0, 0x2Cu, v2);
}


int32_t BuffEntity__GetUnSubStateWhenContinueStatus(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5FDC & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_14887/*"UnSubStateWhenContinue"*/);
    byte_4CB5FDC = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_14887/*"UnSubStateWhenContinue"*/, 0, v2);
}


System_Int32_array *BuffEntity__GetUpBuffRateBuffIndivList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4CB5FCB & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_15168/*"UpBuffRateBuffIndiv"*/);
    byte_4CB5FCB = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15168/*"UpBuffRateBuffIndiv"*/, 0, 0x2Cu, v2);
}


System_Int32_array *BuffEntity__GetUpBuffRateBuffTypeList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4CB5FCA & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_15169/*"UpBuffRateBuffType"*/);
    byte_4CB5FCA = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15169/*"UpBuffRateBuffType"*/, 0, 0x2Cu, v2);
}


bool BuffEntity__IsBattleEndNotReduceTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5FC7 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_17084/*"battleEndNotReduceTurnFlag"*/);
    byte_4CB5FC7 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17084/*"battleEndNotReduceTurnFlag"*/, 0, v2) > 0;
}


bool BuffEntity__IsCheckIndividualityForEachDamage(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5FDE & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_4427/*"CkIndvForEachDamage"*/);
    byte_4CB5FDE = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_4427/*"CkIndvForEachDamage"*/, 0, v2) == 1;
}


bool BuffEntity__IsConditionBuffValue(BuffEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4CB5FB1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C6BA08(&StringLiteral_18225/*"condBuffValue"*/);
    byte_4CB5FB1 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_18225/*"condBuffValue"*/,
                       (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool BuffEntity__IsConditionIndividualityMulti(BuffEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v7; // x19
  System_Enum_o v9; // [xsp+8h] [xbp-48h] BYREF
  int v10; // [xsp+18h] [xbp-38h]

  if ( (byte_4CB5FEC & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C6BA08(&BuffList_MULTI_CONDITION_TypeInfo);
    byte_4CB5FEC = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.script, 0) )
  {
    script = this->fields.script;
    v10 = 1;
    v9.klass = (System_Enum_c *)BuffList_MULTI_CONDITION_TypeInfo;
    v9.monitor = (void *)-1LL;
    v5 = (Il2CppObject *)System_Enum__ToString(&v9, 0);
    if ( script )
    {
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)script,
             v5,
             (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        return 1;
      }
      v7 = this->fields.script;
      v9.klass = (System_Enum_c *)BuffList_MULTI_CONDITION_TypeInfo;
      v9.monitor = (void *)-1LL;
      v10 = 2;
      v5 = (Il2CppObject *)System_Enum__ToString(&v9, 0);
      if ( v7 )
        return System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)v7,
                 v5,
                 (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    }
    sub_1C6BC60(v5, v6);
  }
  return 0;
}


bool BuffEntity__IsDelayRemoveExpiredOnPlayerTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5FDF & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18585/*"delayRemoveExpiredOnPlayerTurn"*/);
    byte_4CB5FDF = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18585/*"delayRemoveExpiredOnPlayerTurn"*/, 0, v2) == 1;
}


bool BuffEntity__IsDisableForciblyAddState(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5FD7 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_5276/*"DisableForciblyAddState"*/);
    byte_4CB5FD7 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5276/*"DisableForciblyAddState"*/, 0, v2) == 1;
}


bool BuffEntity__IsDisableMoveStateTurnChange(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5FDA & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_5277/*"DisableMoveStateTurnChange"*/);
    byte_4CB5FDA = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5277/*"DisableMoveStateTurnChange"*/, 0, v2) == 1;
}


bool BuffEntity__IsDrawShadowDespiteBattleCharaInvisible(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5FC8 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18703/*"drawShadowDespiteBattleCharaInvisible"*/);
    byte_4CB5FC8 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18703/*"drawShadowDespiteBattleCharaInvisible"*/, 0);
}


bool BuffEntity__IsExcludeUnSubStateIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5FDB & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_6288/*"ExcludeUnSubStateIndiv"*/);
    byte_4CB5FDB = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_6288/*"ExcludeUnSubStateIndiv"*/, 0, v2) == 1;
}


bool BuffEntity__IsIncludeIgnoreIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5FCE & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_7580/*"IncludeIgnoreIndividuality"*/);
    byte_4CB5FCE = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7580/*"IncludeIgnoreIndividuality"*/, 0, v2) == 1;
}


bool BuffEntity__IsIndvAddBuffPassive(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5FD9 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_7625/*"IndvAddBuffPassive"*/);
    byte_4CB5FD9 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7625/*"IndvAddBuffPassive"*/, 0, v2) == 1;
}


bool BuffEntity__IsMatchBattleSkillInfoCondition(
        BuffEntity_o *this,
        BattleSkillInfoData_o *skillInfoData,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4CB5FE4 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_19756/*"fromCommandSpell"*/);
    sub_1C6BA08(&StringLiteral_19757/*"fromMasterEquip"*/);
    byte_4CB5FE4 = 1;
  }
  v5 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_19757/*"fromMasterEquip"*/, method);
  if ( v5 )
  {
    if ( !skillInfoData )
      goto LABEL_11;
    if ( skillInfoData->fields.type != 1 )
      return 0;
  }
  v5 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_19756/*"fromCommandSpell"*/, v7);
  if ( !v5 )
    return 1;
  if ( !skillInfoData )
LABEL_11:
    sub_1C6BC60(v5, v6);
  return skillInfoData->fields.type == 2;
}


bool BuffEntity__IsMatchSkillCountingCondition(BuffEntity_o *this, BattleData_o *data, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CB5FE2 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_24583/*"useFirstTimeInTurn"*/);
    byte_4CB5FE2 = 1;
  }
  v5 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_24583/*"useFirstTimeInTurn"*/, method);
  if ( !v5 )
    return 1;
  if ( !data )
    sub_1C6BC60(v5, v6);
  return data->fields.playerSkillCount == 1;
}


bool BuffEntity__IsNotPierce(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5FE9 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_21002/*"isNotPierce"*/);
    byte_4CB5FE9 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21002/*"isNotPierce"*/, 0);
}


bool BuffEntity__TryGetConditionParamArray(
        BuffEntity_o *this,
        int32_t condition,
        System_Int32_array **paramArray,
        const MethodInfo *method)
{
  System_String_o *v7; // x0
  const MethodInfo *v8; // x4
  System_Int32_array *ScriptIntArray; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Enum_o v13; // [xsp+8h] [xbp-48h] BYREF
  int32_t v14; // [xsp+18h] [xbp-38h]

  if ( (byte_4CB5FD8 & 1) == 0 )
  {
    sub_1C6BA08(&BuffList_CONDITIONS_TypeInfo);
    byte_4CB5FD8 = 1;
  }
  v13.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v13.monitor = (void *)-1LL;
  v14 = condition;
  v7 = System_Enum__ToString(&v13, 0);
  ScriptIntArray = BuffEntity__GetScriptIntArray(this, v7, 0, 0x2Cu, v8);
  *paramArray = ScriptIntArray;
  sub_1C6B9AC((CGThumbnailListItem_o *)paramArray, (int32_t)ScriptIntArray, v10, v11);
  return *paramArray != 0;
}


bool BuffEntity__TryGetIndividualityDisplayOnCard(
        BuffEntity_o *this,
        System_Int32_array_array **result,
        const MethodInfo *method)
{
  if ( (byte_4CB5FE8 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_20843/*"individualityDisplayOnCard"*/);
    byte_4CB5FE8 = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_20843/*"individualityDisplayOnCard"*/,
           result,
           0);
}


bool BuffEntity__TryGetNotPierceIndividuality(
        BuffEntity_o *this,
        System_Int32_array_array **result,
        const MethodInfo *method)
{
  if ( (byte_4CB5FE5 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_9570/*"NotPierceIndividuality"*/);
    byte_4CB5FE5 = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_9570/*"NotPierceIndividuality"*/,
           result,
           0);
}


bool BuffEntity__checkBuffType(BuffEntity_o *this, int32_t buffType, const MethodInfo *method)
{
  return this->fields.type == buffType;
}


bool BuffEntity__checkMissText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4CB5FBA & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_21683/*"missText"*/);
    byte_4CB5FBA = 1;
  }
  return BuffEntity__checkScript(this, (System_String_o *)StringLiteral_21683/*"missText"*/, v2);
}


bool BuffEntity__checkScript(BuffEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4CB5FA5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4CB5FA5 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


int32_t BuffEntity__getAppearanceId(BuffEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  BuffEntity_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4CB5FB7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&StringLiteral_2283/*"AppId"*/);
    byte_4CB5FB7 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_2283/*"AppId"*/,
           (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_2283/*"AppId"*/,
                                                                                (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_1C6BC60(Item, v4);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v6, v7);
      }
      else
      {
        sub_1C6BFFC(Item);
        LODWORD(script) = BuffEntity__getDamageRelease(v8, v9);
      }
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


int32_t BuffEntity__getAtkRelationPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CB5FC1 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_16939/*"atkPriority"*/);
    byte_4CB5FC1 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_16939/*"atkPriority"*/, defVal, v3);
}


int32_t BuffEntity__getCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5FBF & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_17964/*"checkIndvType"*/);
    byte_4CB5FBF = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17964/*"checkIndvType"*/, 2 * (this->fields.type == 155), v2);
  else
    return 2 * (this->fields.type == 155);
}


int32_t BuffEntity__getDamageRelease(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5FB8 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_5032/*"DamageRelease"*/);
    byte_4CB5FB8 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5032/*"DamageRelease"*/, 0, v2);
}


System_String_o *BuffEntity__getDamageReleaseText(BuffEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4CB5FB9 & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_2754/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/);
    sub_1C6BA08(&StringLiteral_11292/*"ReleaseText"*/);
    byte_4CB5FB9 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2754/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/, 0);
  if ( this->fields.script )
    return BuffEntity__getScript_42070256(this, (System_String_o *)StringLiteral_11292/*"ReleaseText"*/, result, v4);
  return result;
}


int32_t BuffEntity__getDefRelationPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CB5FC2 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18564/*"defPriority"*/);
    byte_4CB5FC2 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18564/*"defPriority"*/, defVal, v3);
}


int32_t BuffEntity__getEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v6; // x2
  __int64 v7; // x3
  BuffEntity_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4CB5FB2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&StringLiteral_5909/*"EffectId"*/);
    byte_4CB5FB2 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_5909/*"EffectId"*/,
           (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_5909/*"EffectId"*/,
                                                                                (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_1C6BC60(Item, v4);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v6, v7);
      }
      else
      {
        sub_1C6BFFC(Item);
        LODWORD(script) = BuffEntity__GetPopupEffectId(v8, v9);
      }
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


System_Int32_array *BuffEntity__getEffectList(BuffEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_4CB5FAA & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    byte_4CB5FAA = 1;
  }
  result = this->fields.effectList;
  if ( !result )
    return (System_Int32_array *)sub_1C6BAB0(int___TypeInfo, 0);
  return result;
}


int32_t BuffEntity__getGutsIcon(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5FBE & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_19986/*"gutsIconId"*/);
    byte_4CB5FBE = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19986/*"gutsIconId"*/, 0, v2);
  else
    return 0;
}


System_String_o *BuffEntity__getGutsText(BuffEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4CB5FBC & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_2727/*"BATTLE_DEFAULT_GUTS_TEXT"*/);
    sub_1C6BA08(&StringLiteral_19987/*"gutsText"*/);
    byte_4CB5FBC = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2727/*"BATTLE_DEFAULT_GUTS_TEXT"*/, 0);
  if ( this->fields.script )
    return BuffEntity__getScript_42070256(this, (System_String_o *)StringLiteral_19987/*"gutsText"*/, result, v4);
  return result;
}


System_String_o *BuffEntity__getIconName(BuffEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t IconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CB5FAB & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&StringLiteral_17647/*"bufficon_{0:000}"*/);
    byte_4CB5FAB = 1;
  }
  IconId = BuffEntity__GetIconId(this, method);
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &IconId);
  return System_String__Format((System_String_o *)StringLiteral_17647/*"bufficon_{0:000}"*/, v3, 0);
}


System_Int32_array *BuffEntity__getIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.vals;
}


System_String_o *BuffEntity__getMissText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5FBB & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_21683/*"missText"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB5FBB = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_42070256(
             this,
             (System_String_o *)StringLiteral_21683/*"missText"*/,
             (System_String_o *)StringLiteral_1/*""*/,
             v2);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t BuffEntity__getRelationId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5FC0 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_23115/*"relationId"*/);
    byte_4CB5FC0 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_23115/*"relationId"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t BuffEntity__getScript(BuffEntity_o *this, System_String_o *key, int32_t defVal, const MethodInfo *method)
{
  int32_t v4; // w20
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  BuffEntity_o *v12; // x0
  System_String_o *v13; // x1
  System_String_o *v14; // x2
  const MethodInfo *v15; // x3

  v4 = defVal;
  if ( (byte_4CB5FA6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C6BA08(&long_TypeInfo);
    byte_4CB5FA6 = 1;
  }
  if ( !BuffEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C6BC60(script, v7);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v9, v10);
  sub_1C6BFFC(script);
  return (unsigned int)BuffEntity__getScript_42070256(v12, v13, v14, v15);
}


System_String_o *BuffEntity__getScript_42070256(
        BuffEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0

  if ( (byte_4CB5FA7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_4CB5FA7 = 1;
  }
  if ( !BuffEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C6BC60(script, v7);
  }
  return (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))script->klass->vtable._3_ToString.methodPtr)(
                              script,
                              script->klass->vtable._3_ToString.method);
}


int32_t BuffEntity__get_BuffType(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


int32_t BuffEntity__getgutsTextColor(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB5FBD & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_19988/*"gutsTextColor"*/);
    byte_4CB5FBD = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19988/*"gutsTextColor"*/, 1, v2);
  else
    return 1;
}


bool BuffEntity__isCheckGroup(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.buffGroup != 0;
}


bool BuffEntity__isCondition(BuffEntity_o *this, int32_t cond, int32_t *pal, const MethodInfo *method)
{
  System_String_o *v7; // x0
  const MethodInfo *v8; // x3
  System_Enum_o v10; // [xsp+8h] [xbp-48h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h]

  if ( (byte_4CB5FAC & 1) == 0 )
  {
    sub_1C6BA08(&BuffList_CONDITIONS_TypeInfo);
    byte_4CB5FAC = 1;
  }
  v10.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v10.monitor = (void *)-1LL;
  v11 = cond;
  v7 = System_Enum__ToString(&v10, 0);
  return BuffEntity__isCondition_42071360(this, v7, pal, v8);
}


bool BuffEntity__isConditionIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  Il2CppObject *v4; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v5; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x19
  System_Enum_o v11; // [xsp+8h] [xbp-48h] BYREF
  int v12; // [xsp+18h] [xbp-38h]

  if ( (byte_4CB5FB0 & 1) == 0 )
  {
    sub_1C6BA08(&BuffList_CONDITIONS_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4CB5FB0 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v11.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v11.monitor = (void *)-1LL;
  v12 = 2;
  v4 = (Il2CppObject *)System_Enum__ToString(&v11, 0);
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          v4,
          (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v5 = this->fields.script;
    v11.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
    v11.monitor = (void *)-1LL;
    v12 = 3;
    v6 = (Il2CppObject *)System_Enum__ToString(&v11, 0);
    if ( v5 )
    {
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)v5,
             v6,
             (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        return 1;
      }
      v9 = this->fields.script;
      v11.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
      v11.monitor = (void *)-1LL;
      v12 = 4;
      v6 = (Il2CppObject *)System_Enum__ToString(&v11, 0);
      if ( v9 )
        return System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)v9,
                 v6,
                 (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    }
    sub_1C6BC60(v6, v7);
  }
  return 1;
}


bool BuffEntity__isCondition_42071360(BuffEntity_o *this, System_String_o *key, int32_t *pal, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x8
  BuffEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4CB5FAD & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C6BA08(&long_TypeInfo);
    byte_4CB5FAD = 1;
  }
  *pal = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_1C6BC60(Item, v8);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v12 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11);
        LOBYTE(script) = 1;
        *pal = v12;
      }
      else
      {
        sub_1C6BFFC(Item);
        LOBYTE(script) = BuffEntity__isConditions(v13, v14);
      }
    }
    else
    {
      LOBYTE(script) = 0;
    }
  }
  return (char)script;
}


bool BuffEntity__isConditions(BuffEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  Il2CppObject *v4; // x0
  bool v5; // w8
  bool v6; // w0
  struct System_Collections_Generic_Dictionary_string__object__o *v7; // x20
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v11; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v13; // x20
  bool v14; // w8
  struct System_Collections_Generic_Dictionary_string__object__o *v15; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v16; // x20
  System_Enum_o v17; // [xsp+8h] [xbp-48h] BYREF
  int v18; // [xsp+18h] [xbp-38h]

  if ( (byte_4CB5FAE & 1) == 0 )
  {
    sub_1C6BA08(&BuffList_CONDITIONS_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C6BA08(&BuffList_MULTI_CONDITION_TypeInfo);
    sub_1C6BA08(&StringLiteral_18225/*"condBuffValue"*/);
    byte_4CB5FAE = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v18 = 0;
  v17.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v17.monitor = (void *)-1LL;
  v4 = (Il2CppObject *)System_Enum__ToString(&v17, 0);
  v5 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         v4,
         (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  v6 = 1;
  if ( !v5 )
  {
    v7 = this->fields.script;
    v18 = 1;
    v17.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
    v17.monitor = (void *)-1LL;
    v8 = (Il2CppObject *)System_Enum__ToString(&v17, 0);
    if ( !v7 )
      goto LABEL_22;
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)v7,
            v8,
            (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v10 = this->fields.script;
      v17.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
      v17.monitor = (void *)-1LL;
      v18 = 2;
      v8 = (Il2CppObject *)System_Enum__ToString(&v17, 0);
      if ( !v10 )
        goto LABEL_22;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)v10,
              v8,
              (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        v11 = this->fields.script;
        v17.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
        v17.monitor = (void *)-1LL;
        v18 = 3;
        v8 = (Il2CppObject *)System_Enum__ToString(&v17, 0);
        if ( v11 )
        {
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)v11,
                 v8,
                 (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            return 1;
          }
          v13 = this->fields.script;
          v17.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
          v17.monitor = (void *)-1LL;
          v18 = 4;
          v8 = (Il2CppObject *)System_Enum__ToString(&v17, 0);
          if ( v13 )
          {
            v14 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                    (System_Collections_Generic_Dictionary_object__object__o *)v13,
                    v8,
                    (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
            v6 = 1;
            if ( v14 )
              return v6;
            v15 = this->fields.script;
            v18 = 1;
            v17.klass = (System_Enum_c *)BuffList_MULTI_CONDITION_TypeInfo;
            v17.monitor = (void *)-1LL;
            v8 = (Il2CppObject *)System_Enum__ToString(&v17, 0);
            if ( v15 )
            {
              if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                     (System_Collections_Generic_Dictionary_object__object__o *)v15,
                     v8,
                     (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
              {
                return 1;
              }
              v16 = this->fields.script;
              v17.klass = (System_Enum_c *)BuffList_MULTI_CONDITION_TypeInfo;
              v17.monitor = (void *)-1LL;
              v18 = 2;
              v8 = (Il2CppObject *)System_Enum__ToString(&v17, 0);
              if ( v16 )
              {
                if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)v16,
                       v8,
                       (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
                {
                  return 1;
                }
                v8 = (Il2CppObject *)this->fields.script;
                if ( v8 )
                  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
                           (System_Collections_Generic_Dictionary_object__object__o *)v8,
                           (Il2CppObject *)StringLiteral_18225/*"condBuffValue"*/,
                           (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
              }
            }
          }
        }
LABEL_22:
        sub_1C6BC60(v8, v9);
      }
    }
    return 1;
  }
  return v6;
}


bool BuffEntity__isConditionsHp(BuffEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  Il2CppObject *v4; // x0
  bool v5; // w8
  bool v6; // w0
  struct System_Collections_Generic_Dictionary_string__object__o *v7; // x19
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  System_Enum_o v11; // [xsp+8h] [xbp-48h] BYREF
  int v12; // [xsp+18h] [xbp-38h]

  if ( (byte_4CB5FAF & 1) == 0 )
  {
    sub_1C6BA08(&BuffList_CONDITIONS_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4CB5FAF = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    v12 = 0;
    v11.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
    v11.monitor = (void *)-1LL;
    v4 = (Il2CppObject *)System_Enum__ToString(&v11, 0);
    v5 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           v4,
           (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    v6 = 1;
    if ( !v5 )
    {
      v7 = this->fields.script;
      v12 = 1;
      v11.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
      v11.monitor = (void *)-1LL;
      v8 = (Il2CppObject *)System_Enum__ToString(&v11, 0);
      if ( !v7 )
        sub_1C6BC60(v8, v9);
      return System_Collections_Generic_Dictionary_object__object___ContainsKey(
               (System_Collections_Generic_Dictionary_object__object__o *)v7,
               v8,
               (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    }
  }
  else
  {
    return 0;
  }
  return v6;
}


bool BuffEntity__isEndAct(BuffEntity_o *this, System_Int32_array *indiv, const MethodInfo *method)
{
  int32_t type; // w10
  System_Int32_array *ckSelfIndv; // x20

  if ( (byte_4CB5FA9 & 1) == 0 )
  {
    sub_1C6BA08(&Individuality_TypeInfo);
    byte_4CB5FA9 = 1;
  }
  type = this->fields.type;
  if ( !indiv || type != 76 )
    return indiv == 0 && type == 76;
  ckSelfIndv = this->fields.ckSelfIndv;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  return Individuality__CheckIndividualities(indiv, ckSelfIndv, 0);
}


bool BuffEntity__isReflectionAct(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 97;
}


void BuffEntity_BuffConditionIndividualityData___ctor(
        BuffEntity_BuffConditionIndividualityData_o *this,
        System_Collections_Generic_Dictionary_string__object__o *conditionScript,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *currentKey; // x22
  Il2CppObject *v10; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x21
  BuffEntity_BuffConditionIndividualityData___c_c *v12; // x8
  System_Func_object__int__o *_9__5_0; // x22
  Il2CppObject *v14; // x23
  struct BuffEntity_BuffConditionIndividualityData___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  struct System_Int32_array *v19; // x0
  struct System_Int32_array **p_targetIndividualityArray; // x19
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CB5FF2 & 1) == 0 )
  {
    sub_1C6BA08(&BuffList_CONDITIONS_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    sub_1C6BA08(&Method_System_Enum_TryParse_BuffList_CONDITIONS___);
    sub_1C6BA08(&System_Enum_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__get_Current__);
    sub_1C6BA08(&System_Func_string__int__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    sub_1C6BA08(&Method_BuffEntity_BuffConditionIndividualityData___c___ctor_b__5_0__);
    sub_1C6BA08(&BuffEntity_BuffConditionIndividualityData___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_20842/*"individualityCondTargetType"*/);
    sub_1C6BA08(&StringLiteral_7433/*"INDIVIDUALITIE_COUNT_ABOVE"*/);
    sub_1C6BA08(&StringLiteral_7432/*"INDIVIDUALITIE"*/);
    sub_1C6BA08(&StringLiteral_7434/*"INDIVIDUALITIE_COUNT_BELOW"*/);
    byte_4CB5FF2 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !conditionScript )
    goto LABEL_24;
  Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
           (System_Collections_Generic_Dictionary_object__object__o *)conditionScript,
           (const MethodInfo_34BB61C *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
  if ( !Keys )
    goto LABEL_24;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
    &v23,
    Keys,
    (const MethodInfo_3725F74 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    v7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
           &v24,
           (const MethodInfo_35B9B98 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
    if ( !v7 )
    {
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
        &v24,
        (const MethodInfo_35B9B94 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
      return;
    }
    currentKey = v24.fields._currentKey;
    if ( !v24.fields._currentKey )
      sub_1C6BC60(v7, v8);
    if ( System_String__Contains((System_String_o *)v24.fields._currentKey, (System_String_o *)StringLiteral_7432/*"INDIVIDUALITIE"*/, 0) )
    {
      if ( !System_Enum_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
      if ( System_Enum__TryParse_Int32Enum_(
             (System_String_o *)currentKey,
             &this->fields.condition,
             (const MethodInfo_3141EAC *)Method_System_Enum_TryParse_BuffList_CONDITIONS___) )
      {
        break;
      }
    }
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
    &v24,
    (const MethodInfo_35B9B94 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
  v23.fields._dictionary = (struct System_Collections_Generic_Dictionary_TKey__TValue__o *)BuffList_CONDITIONS_TypeInfo;
  *(_QWORD *)&v23.fields._index = -1;
  LODWORD(v23.fields._currentKey) = this->fields.condition;
  v10 = (Il2CppObject *)System_Enum__ToString((System_Enum_o *)&v23, 0);
  Keys = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  (System_Collections_Generic_Dictionary_object__object__o *)conditionScript,
                                                                                  v10,
                                                                                  (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Keys
    || (Keys = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *, const MethodInfo *))Keys->klass->vtable._3_ToString.methodPtr)(
                                                                                        Keys,
                                                                                        Keys->klass->vtable._3_ToString.method)) == 0 )
  {
LABEL_24:
    sub_1C6BC60(Keys, v6);
  }
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split((System_String_o *)Keys, 0x2Cu, 0, 0);
  v12 = BuffEntity_BuffConditionIndividualityData___c_TypeInfo;
  if ( !BuffEntity_BuffConditionIndividualityData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffEntity_BuffConditionIndividualityData___c_TypeInfo);
    v12 = BuffEntity_BuffConditionIndividualityData___c_TypeInfo;
  }
  _9__5_0 = (System_Func_object__int__o *)v12->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BuffEntity_BuffConditionIndividualityData___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__5_0 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__5_0,
      v14,
      Method_BuffEntity_BuffConditionIndividualityData___c___ctor_b__5_0__,
      0);
    static_fields = BuffEntity_BuffConditionIndividualityData___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_string__int__o *)_9__5_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v16, v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v11,
                                                               (System_Func_TSource__TResult__o *)_9__5_0,
                                                               (const MethodInfo_3171234 *)Method_System_Linq_Enumerable_Select_string__int___);
  v19 = System_Linq_Enumerable__ToArray_int_(
          v18,
          (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.targetIndividualityArray = v19;
  p_targetIndividualityArray = &this->fields.targetIndividualityArray;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_targetIndividualityArray, (int32_t)v19, v21, v22);
  *((_DWORD *)p_targetIndividualityArray - 1) = EntityScriptUtil__GetIntValue(
                                                  conditionScript,
                                                  (System_String_o *)StringLiteral_20842/*"individualityCondTargetType"*/,
                                                  0,
                                                  0);
  *((_DWORD *)p_targetIndividualityArray + 2) = EntityScriptUtil__GetIntValue(
                                                  conditionScript,
                                                  (System_String_o *)StringLiteral_7433/*"INDIVIDUALITIE_COUNT_ABOVE"*/,
                                                  0,
                                                  0);
  *((_DWORD *)p_targetIndividualityArray + 3) = EntityScriptUtil__GetIntValue(
                                                  conditionScript,
                                                  (System_String_o *)StringLiteral_7434/*"INDIVIDUALITIE_COUNT_BELOW"*/,
                                                  0,
                                                  0);
}


void BuffEntity_BuffConditionIndividualityData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB5FF3 & 1) == 0 )
  {
    sub_1C6BA08(&BuffEntity_BuffConditionIndividualityData___c_TypeInfo);
    byte_4CB5FF3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(BuffEntity_BuffConditionIndividualityData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BuffEntity_BuffConditionIndividualityData___c_TypeInfo->static_fields->__9 = (struct BuffEntity_BuffConditionIndividualityData___c_o *)v1;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)BuffEntity_BuffConditionIndividualityData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void BuffEntity_BuffConditionIndividualityData___c___ctor(
        BuffEntity_BuffConditionIndividualityData___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BuffEntity_BuffConditionIndividualityData___c____ctor_b__5_0(
        BuffEntity_BuffConditionIndividualityData___c_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return System_Int32__Parse(x, 0);
}


void BuffEntity_CondBuffValueData___ctor(BuffEntity_CondBuffValueData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool BuffEntity_CondBuffValueData__CompareValue(
        BuffEntity_CondBuffValueData_o *this,
        int32_t totalValue,
        const MethodInfo *method)
{
  struct System_Func_int__int__bool__o *compareFunc; // x8
  System_String_o *condValue; // x0
  __int64 v7; // x0
  intptr_t *v8; // x8
  System_Func_int__int__bool__o *v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_String_o *v12; // x21
  System_String_o *v13; // x0
  char v15; // w22
  __int64 v16; // x0
  intptr_t *v17; // x9
  bool v18; // w24

  if ( (byte_4CB5FF4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BuffEntity_CondBuffValueData_IsEqualOrHigher__);
    sub_1C6BA08(&Method_BuffEntity_CondBuffValueData_IsEqualOrLower__);
    sub_1C6BA08(&Method_BuffEntity_CondBuffValueData_IsEqual__);
    sub_1C6BA08(&Method_BuffEntity_CondBuffValueData_IsHigher__);
    sub_1C6BA08(&Method_BuffEntity_CondBuffValueData_IsLower__);
    sub_1C6BA08(&Method_BuffEntity_CondBuffValueData_IsNotEqual__);
    sub_1C6BA08(&System_Func_int__int__bool__TypeInfo);
    sub_1C6BA08(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C6BA08(&StringLiteral_1525/*"<>"*/);
    sub_1C6BA08(&StringLiteral_1736/*"="*/);
    sub_1C6BA08(&StringLiteral_15952/*"[^0-9]"*/);
    sub_1C6BA08(&StringLiteral_1489/*"<"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_1742/*">"*/);
    sub_1C6BA08(&StringLiteral_339/*"!="*/);
    byte_4CB5FF4 = 1;
  }
  compareFunc = this->fields.compareFunc;
  if ( !compareFunc )
  {
    condValue = this->fields.condValue;
    if ( !condValue )
      goto LABEL_24;
    if ( System_String__Contains(condValue, (System_String_o *)StringLiteral_339/*"!="*/, 0) )
      goto LABEL_8;
    condValue = this->fields.condValue;
    if ( !condValue )
      goto LABEL_24;
    if ( System_String__Contains(condValue, (System_String_o *)StringLiteral_1525/*"<>"*/, 0) )
    {
LABEL_8:
      v7 = sub_1C6BC54(System_Func_int__int__bool__TypeInfo);
      v8 = (intptr_t *)&Method_BuffEntity_CondBuffValueData_IsNotEqual__;
      v9 = (System_Func_int__int__bool__o *)v7;
      goto LABEL_9;
    }
    condValue = this->fields.condValue;
    if ( !condValue )
      goto LABEL_24;
    condValue = (System_String_o *)System_String__Contains(condValue, (System_String_o *)StringLiteral_1736/*"="*/, 0);
    if ( !this->fields.condValue )
      goto LABEL_24;
    v15 = (char)condValue;
    if ( System_String__Contains(this->fields.condValue, (System_String_o *)StringLiteral_1742/*">"*/, 0) )
    {
      v16 = sub_1C6BC54(System_Func_int__int__bool__TypeInfo);
      v8 = (intptr_t *)&Method_BuffEntity_CondBuffValueData_IsHigher__;
      v17 = (intptr_t *)&Method_BuffEntity_CondBuffValueData_IsEqualOrHigher__;
      v9 = (System_Func_int__int__bool__o *)v16;
    }
    else
    {
      condValue = this->fields.condValue;
      if ( !condValue )
        goto LABEL_24;
      v18 = System_String__Contains(condValue, (System_String_o *)StringLiteral_1489/*"<"*/, 0);
      v9 = (System_Func_int__int__bool__o *)sub_1C6BC54(System_Func_int__int__bool__TypeInfo);
      if ( !v18 )
      {
        v8 = (intptr_t *)&Method_BuffEntity_CondBuffValueData_IsEqual__;
        goto LABEL_9;
      }
      v8 = (intptr_t *)&Method_BuffEntity_CondBuffValueData_IsLower__;
      v17 = (intptr_t *)&Method_BuffEntity_CondBuffValueData_IsEqualOrLower__;
    }
    if ( (v15 & 1) != 0 )
      v8 = v17;
LABEL_9:
    System_Func_int__int__bool____ctor(v9, 0, *v8, 0);
    this->fields.compareFunc = v9;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.compareFunc, (int32_t)v9, v10, v11);
    v12 = this->fields.condValue;
    if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
    v13 = System_Text_RegularExpressions_Regex__Replace(
            v12,
            (System_String_o *)StringLiteral_15952/*"[^0-9]"*/,
            (System_String_o *)StringLiteral_1/*""*/,
            0);
    condValue = (System_String_o *)System_Int32__TryParse(v13, &this->fields.checkValue, 0);
    compareFunc = this->fields.compareFunc;
    if ( compareFunc )
      return ((__int64 (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))compareFunc->fields.invoke_impl)(
               compareFunc->fields.method_code,
               (unsigned int)totalValue,
               (unsigned int)this->fields.checkValue,
               compareFunc->fields.method);
LABEL_24:
    sub_1C6BC60(condValue, *(_QWORD *)&totalValue);
  }
  return ((__int64 (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))compareFunc->fields.invoke_impl)(
           compareFunc->fields.method_code,
           (unsigned int)totalValue,
           (unsigned int)this->fields.checkValue,
           compareFunc->fields.method);
}


bool BuffEntity_CondBuffValueData__IsEqual(int32_t totalValue, int32_t checkValue, const MethodInfo *method)
{
  return totalValue == checkValue;
}


bool BuffEntity_CondBuffValueData__IsEqualOrHigher(int32_t totalValue, int32_t checkValue, const MethodInfo *method)
{
  return totalValue >= checkValue;
}


bool BuffEntity_CondBuffValueData__IsEqualOrLower(int32_t totalValue, int32_t checkValue, const MethodInfo *method)
{
  return totalValue <= checkValue;
}


bool BuffEntity_CondBuffValueData__IsHigher(int32_t totalValue, int32_t checkValue, const MethodInfo *method)
{
  return totalValue > checkValue;
}


bool BuffEntity_CondBuffValueData__IsLower(int32_t totalValue, int32_t checkValue, const MethodInfo *method)
{
  return totalValue < checkValue;
}


bool BuffEntity_CondBuffValueData__IsNotEqual(int32_t totalValue, int32_t checkValue, const MethodInfo *method)
{
  return totalValue != checkValue;
}


int32_t BuffEntity_CondBuffValueData__get_BuffType(BuffEntity_CondBuffValueData_o *this, const MethodInfo *method)
{
  return this->fields.buffType;
}


int32_t BuffEntity_CondBuffValueData__get_ValueCondTargetType(
        BuffEntity_CondBuffValueData_o *this,
        const MethodInfo *method)
{
  return this->fields.valueCondTargetType;
}


void BuffEntity_OverwriteBuffIconData___ctor(BuffEntity_OverwriteBuffIconData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BuffEntity_OverwriteBuffIconData_ConditionData___ctor(
        BuffEntity_OverwriteBuffIconData_ConditionData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BuffEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB5FF5 & 1) == 0 )
  {
    sub_1C6BA08(&BuffEntity___c_TypeInfo);
    byte_4CB5FF5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(BuffEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BuffEntity___c_TypeInfo->static_fields->__9 = (struct BuffEntity___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)BuffEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BuffEntity___c___ctor(BuffEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BuffEntity___c___GetIconId_b__20_0(
        BuffEntity___c_o *this,
        BuffEntity_OverwriteBuffIconData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C6BC60(this, 0);
  return data->fields.priority;
}


int32_t BuffEntity___c___GetScriptIntArray_b__25_0(
        BuffEntity___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0);
}