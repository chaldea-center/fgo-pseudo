void BuffEntity___ctor(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42CE6 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_int___ctor__);
    byte_4C42CE6 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_339EBBC *)Method_DataEntityBase_int___ctor__);
}


bool BuffEntity__ContainsIndividualityToActivate(
        BuffEntity_o *this,
        System_Int32_array *individualityArray,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t Script; // w1

  if ( (byte_4C42CD8 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C37058(&StringLiteral_7439/*"INDIVIDUALITIE"*/);
    byte_4C42CD8 = 1;
  }
  Script = BuffEntity__getScript(this, (System_String_o *)StringLiteral_7439/*"INDIVIDUALITIE"*/, 0, v3);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)individualityArray,
           Script,
           (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___);
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

  if ( (byte_4C42CBE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Nullable_float___ctor__);
    sub_1C37058(&StringLiteral_17068/*"battleCharaAlpha"*/);
    byte_4C42CBE = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17068/*"battleCharaAlpha"*/, 0) )
  {
    v3 = (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17068/*"battleCharaAlpha"*/, 0, 0)
       / 1000.0;
    v4 = (System_Nullable_float__o)&v6;
    v6 = 0;
    System_Nullable_float____ctor(v4, v3, (const MethodInfo_38CAEA4 *)Method_System_Nullable_float___ctor__);
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

  if ( (byte_4C42CD2 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17626/*"buffStateNoticeName"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C42CD2 = 1;
  }
  return BuffEntity__getScript_41834400(
           this,
           (System_String_o *)StringLiteral_17626/*"buffStateNoticeName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t BuffEntity__GetCardEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C42CBB & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4329/*"CardEffectId"*/);
    byte_4C42CBB = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_4329/*"CardEffectId"*/, 0, v2);
}


int32_t BuffEntity__GetCkIndvCountAbove(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C42CC6 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17975/*"ckIndvCountAbove"*/);
    byte_4C42CC6 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17975/*"ckIndvCountAbove"*/, defVal, v3);
}


int32_t BuffEntity__GetCkIndvCountBelow(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C42CC7 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17976/*"ckIndvCountBelow"*/);
    byte_4C42CC7 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17976/*"ckIndvCountBelow"*/, defVal, v3);
}


System_Int32_array *BuffEntity__GetCkOpCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4C42CC9 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17977/*"ckOpCountIndividuality"*/);
    byte_4C42CC9 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_17977/*"ckOpCountIndividuality"*/, 0, 0x2Cu, v2);
}


System_Int32_array *BuffEntity__GetCkSelfCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4C42CC8 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17978/*"ckSelfCountIndividuality"*/);
    byte_4C42CC8 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_17978/*"ckSelfCountIndividuality"*/, 0, 0x2Cu, v2);
}


int32_t BuffEntity__GetClassIconChangeEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C42CDB & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17987/*"classIconChangeEffectId"*/);
    byte_4C42CDB = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17987/*"classIconChangeEffectId"*/, -1, v2);
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

  if ( (byte_4C42CE5 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_BuffEntity_CondBuffValueData___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C37058(&Method_JsonManager_Deserialize_BuffEntity_CondBuffValueData_____);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&StringLiteral_18202/*"condBuffValue"*/);
    byte_4C42CE5 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script )
    sub_1C372B4(0);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_18202/*"condBuffValue"*/,
          &value,
          (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    goto LABEL_8;
  v5 = value;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  result = (BuffEntity_CondBuffValueData_array *)JsonManager__Deserialize_object_(
                                                   v5,
                                                   (const MethodInfo_3156F74 *)Method_JsonManager_Deserialize_BuffEntity_CondBuffValueData_____);
  if ( !result )
  {
LABEL_8:
    v7 = Method_System_Array_Empty_BuffEntity_CondBuffValueData___;
    v8 = *((_QWORD *)Method_System_Array_Empty_BuffEntity_CondBuffValueData___ + 7);
    if ( !v8 )
    {
      sub_1C877C8(Method_System_Array_Empty_BuffEntity_CondBuffValueData___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C8776C(inited);
    if ( !*(_DWORD *)(v9 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v9);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C8776C(inited);
    return **(BuffEntity_CondBuffValueData_array ***)(v10 + 184);
  }
  return result;
}


int32_t BuffEntity__GetConditionTargetType(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42CE0 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_20778/*"individualityCondTargetType"*/);
    byte_4C42CE0 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20778/*"individualityCondTargetType"*/, 0, 0);
}


System_String_o *BuffEntity__GetCounterMessage(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C42CC4 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4831/*"CounterMessage"*/);
    byte_4C42CC4 = 1;
  }
  return BuffEntity__getScript_41834400(this, (System_String_o *)StringLiteral_4831/*"CounterMessage"*/, 0, v2);
}


int32_t BuffEntity__GetDefCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  return 2 * (this->fields.type == 155);
}


int32_t BuffEntity__GetDisplayPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C42CD5 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5300/*"DisplayPriority"*/);
    byte_4C42CD5 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5300/*"DisplayPriority"*/, defVal, v3);
}


System_String_o *BuffEntity__GetEffectText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C42CAA & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_18929/*"effectText"*/);
    byte_4C42CAA = 1;
  }
  return BuffEntity__getScript_41834400(this, (System_String_o *)StringLiteral_18929/*"effectText"*/, 0, v2);
}


int32_t BuffEntity__GetExecutePriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C42CD6 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19326/*"executePriority"*/);
    byte_4C42CD6 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19326/*"executePriority"*/, defVal, v3);
}


int32_t BuffEntity__GetExtendLowerLimit(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C42CB8 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19336/*"extendLowerLimit"*/);
    byte_4C42CB8 = 1;
  }
  return -BuffEntity__getScript(this, (System_String_o *)StringLiteral_19336/*"extendLowerLimit"*/, 0, v2);
}


int32_t BuffEntity__GetGuardEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C42CA9 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19920/*"guardEffectId"*/);
    byte_4C42CA9 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19920/*"guardEffectId"*/, 0, v2);
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
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v14; // x20
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  __int64 v18; // x20
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 IsOpen; // x0
  __int64 v28; // x21
  __int64 v29; // x19
  int v30; // w8
  int v31; // w27
  char v32; // w26
  __int64 v33; // x23
  __int64 v34; // x0
  int32_t v35; // w22
  __int64 v36; // x8
  int32_t v37; // w23
  int64_t v38; // x24
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  int32_t v44; // [xsp+Ch] [xbp-64h]

  if ( (byte_4C42C99 & 1) == 0 )
  {
    sub_1C37058(&BattleData_TypeInfo);
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_EnumUtility_CastToEnum_CondType_Kind___);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderByDescending_BuffEntity_OverwriteBuffIconData__int___);
    sub_1C37058(&System_Func_BuffEntity_OverwriteBuffIconData__int__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_BuffEntity_OverwriteBuffIconData__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_BuffEntity___c__GetIconId_b__20_0__);
    sub_1C37058(&BuffEntity___c_TypeInfo);
    byte_4C42C99 = 1;
  }
  iconId = this->fields.iconId;
  OverwriteBuffIconDataArray = BuffEntity__GetOverwriteBuffIconDataArray(this, method);
  v5 = BuffEntity___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)OverwriteBuffIconDataArray;
  v44 = iconId;
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
    _9__20_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_BuffEntity_OverwriteBuffIconData__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_0, v8, Method_BuffEntity___c__GetIconId_b__20_0__, 0);
    static_fields = BuffEntity___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Func_BuffEntity_OverwriteBuffIconData__int__o *)_9__20_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v10, v11);
  }
  v12 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v6,
          (System_Func_TSource__TKey__o *)_9__20_0,
          (const MethodInfo_311792C *)Method_System_Linq_Enumerable_OrderByDescending_BuffEntity_OverwriteBuffIconData__int___);
  if ( !v12 )
    sub_1C372B4(0);
  klass = v12->klass;
  v14 = v12;
  v15 = *(unsigned __int16 *)&v12->klass->_2.rank;
  if ( *(_WORD *)&v12->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__TypeInfo )
    {
      --v15;
      p_offset += 4;
      if ( !v15 )
        goto LABEL_14;
    }
    v17 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v17 = sub_1C87870(v12, System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__TypeInfo, 0);
  }
  v18 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v17)(v14, *(_QWORD *)(v17 + 8));
  if ( !v18 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v19 = *(_QWORD *)v18;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_21;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_21:
      v22 = sub_1C87870(v18, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8)) & 1) == 0 )
      break;
    v23 = *(_QWORD *)v18;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BuffEntity_OverwriteBuffIconData__c **)v25 - 1) != System_Collections_Generic_IEnumerator_BuffEntity_OverwriteBuffIconData__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_28;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_28:
      v26 = sub_1C87870(v18, System_Collections_Generic_IEnumerator_BuffEntity_OverwriteBuffIconData__TypeInfo, 0);
    }
    IsOpen = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v18, *(_QWORD *)(v26 + 8));
    v28 = IsOpen;
    if ( !IsOpen )
      sub_1C372B4(0);
    v29 = *(_QWORD *)(IsOpen + 24);
    if ( !v29 )
      sub_1C372B4(IsOpen);
    v30 = *(_DWORD *)(v29 + 24);
    if ( v30 >= 1 )
    {
      v31 = 0;
      v32 = 1;
      do
      {
        if ( v31 >= (unsigned int)v30 )
          sub_1C372BC(IsOpen);
        v33 = *(_QWORD *)(v29 + 8LL * v31 + 32);
        if ( !v33 )
          sub_1C372B4(IsOpen);
        v34 = EnumUtility__CastToEnum_Int32Enum_(
                *(System_String_o **)(v33 + 16),
                0,
                (const MethodInfo_30EEC1C *)Method_EnumUtility_CastToEnum_CondType_Kind___);
        v35 = v34;
        if ( (_DWORD)v34 == 81 )
        {
          if ( !BattleData_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
          IsOpen = BattleData__get_BattleGenderType(0) == *(_DWORD *)(v33 + 24);
        }
        else
        {
          v36 = *(_QWORD *)(v33 + 32);
          if ( !v36 )
            sub_1C372B4(v34);
          if ( !*(_DWORD *)(v36 + 24) )
            sub_1C372BC(v34);
          v37 = *(_DWORD *)(v33 + 24);
          v38 = *(int *)(v36 + 32);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v35, v37, v38, 0, 0, 0);
        }
        v30 = *(_DWORD *)(v29 + 24);
        ++v31;
        v32 &= IsOpen;
      }
      while ( v31 < v30 );
      if ( (v32 & 1) == 0 )
        continue;
    }
    v44 = *(_DWORD *)(v28 + 16);
    break;
  }
  v39 = *(_QWORD *)v18;
  v40 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
  {
    v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_52;
    }
    v42 = v39 + 16LL * *v41 + 312;
  }
  else
  {
LABEL_52:
    v42 = sub_1C87870(v18, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v42)(v18, *(_QWORD *)(v42 + 8));
  return v44;
}


int32_t BuffEntity__GetIndividualitieCountAbove(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C42CCA & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_7440/*"INDIVIDUALITIE_COUNT_ABOVE"*/);
    byte_4C42CCA = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7440/*"INDIVIDUALITIE_COUNT_ABOVE"*/, defVal, v3);
}


int32_t BuffEntity__GetIndividualitieCountBelow(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C42CCB & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_7441/*"INDIVIDUALITIE_COUNT_BELOW"*/);
    byte_4C42CCB = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7441/*"INDIVIDUALITIE_COUNT_BELOW"*/, defVal, v3);
}


int32_t BuffEntity__GetMaxBuffRate(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C42CC1 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_8974/*"MaxBuffRate"*/);
    byte_4C42CC1 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_8974/*"MaxBuffRate"*/, -1, v2);
}


System_String_o *BuffEntity__GetMotionName(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C42CAB & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_21657/*"motionName"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C42CAB = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_41834400(this, (System_String_o *)StringLiteral_21657/*"motionName"*/, 0, v2);
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
  Il2CppObject *v8; // x21
  __int64 naturalAligment; // x10
  System_Object_array *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *v13; // x20
  Il2CppObject *current; // x22
  __int64 v15; // x10
  BuffEntity_BuffConditionIndividualityData_o *v16; // x21
  const MethodInfo *v17; // x2
  __int64 v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4C42CE4 & 1) == 0 )
  {
    sub_1C37058(&BuffEntity_BuffConditionIndividualityData___TypeInfo);
    sub_1C37058(&BuffEntity_BuffConditionIndividualityData_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData___ctor__);
    sub_1C37058(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData__TypeInfo);
    sub_1C37058(&BuffList_MULTI_CONDITION_TypeInfo);
    byte_4C42CE4 = 1;
  }
  value = 0;
  memset(&v26, 0, sizeof(v26));
  p_cachedConditionIndividualityDataArray = (CGThumbnailListItem_o *)&this->fields.cachedConditionIndividualityDataArray;
  result = this->fields.cachedConditionIndividualityDataArray;
  if ( !result )
  {
    MultiConditionType = BuffEntity__GetMultiConditionType(this, method);
    if ( MultiConditionType )
    {
      script = this->fields.script;
      LODWORD(v25.fields._current) = MultiConditionType;
      v25.fields._list = (struct System_Collections_Generic_List_T__o *)BuffList_MULTI_CONDITION_TypeInfo;
      *(_QWORD *)&v25.fields._index = -1;
      v7 = (Il2CppObject *)System_Enum__ToString((System_Enum_o *)&v25, 0);
      if ( script )
      {
        System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          v7,
          &value,
          (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
        v8 = value;
        if ( !value )
          goto LABEL_9;
        naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
        if ( value->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
        {
          goto LABEL_9;
        }
        v13 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v13,
          (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData___ctor__);
        System_Collections_Generic_List_object___GetEnumerator(
          &v25,
          (System_Collections_Generic_List_object__o *)v8,
          (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v26 = v25;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  (System_Collections_Generic_List_Enumerator_object__o *)&v26,
                  (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        {
          current = v26.fields._current;
          if ( v26.fields._current )
          {
            v15 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
            if ( v26.fields._current->klass->_2.naturalAligment >= (unsigned int)v15
              && (System_Collections_Generic_Dictionary_string__object__c *)v26.fields._current->klass->_2.typeHierarchy[v15 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
            {
              v16 = (BuffEntity_BuffConditionIndividualityData_o *)sub_1C372A4(BuffEntity_BuffConditionIndividualityData_TypeInfo);
              BuffEntity_BuffConditionIndividualityData___ctor(
                v16,
                (System_Collections_Generic_Dictionary_string__object__o *)current,
                v17);
              if ( !v13 )
                sub_1C372B4(v18);
              items = v13->fields._items;
              v22 = Method_System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData__Add__;
              ++v13->fields._version;
              if ( !items )
                sub_1C372B4(v18);
              size = v13->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v13,
                  (Il2CppObject *)v16,
                  *(const MethodInfo_37A3024 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                v24 = &items->obj.klass + size;
                v13->fields._size = size + 1;
                v24[4] = (Il2CppClass *)v16;
                sub_1C36FFC((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v16, v19, v20);
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          (System_Collections_Generic_List_Enumerator_object__o *)&v26,
          (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        if ( v13 )
        {
          v10 = System_Collections_Generic_List_object___ToArray(
                  v13,
                  (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData__ToArray__);
          goto LABEL_10;
        }
      }
      sub_1C372B4(v7);
    }
LABEL_9:
    v10 = (System_Object_array *)sub_1C37100(BuffEntity_BuffConditionIndividualityData___TypeInfo, 0);
LABEL_10:
    p_cachedConditionIndividualityDataArray->klass = (CGThumbnailListItem_c *)v10;
    sub_1C36FFC(p_cachedConditionIndividualityDataArray, (int32_t)v10, v11, v12);
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
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_IEnumerator_c *v12; // x8
  __int64 v13; // x9
  System_Collections_IEnumerator_c **v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x2
  __int64 v18; // x3
  int32_t v19; // w21
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x22
  Il2CppObject *v21; // x0
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x19
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  System_Enum_o v29; // [xsp+8h] [xbp-68h] BYREF
  int32_t v30; // [xsp+18h] [xbp-58h]

  if ( (byte_4C42CE3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&System_Enum_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&BuffList_MULTI_CONDITION_var);
    sub_1C37058(&BuffList_MULTI_CONDITION_TypeInfo);
    sub_1C37058(&System_Type_TypeInfo);
    byte_4C42CE3 = 1;
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
    sub_1C372B4(0);
  Enumerator = System_Array__GetEnumerator(Values, 0);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_13;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_13:
      v11 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v11)(Enumerator, *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 2;
        if ( !v13 )
          goto LABEL_20;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1];
    }
    else
    {
LABEL_20:
      v15 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(Enumerator, *(_QWORD *)(v15 + 8));
    if ( !v16 )
      sub_1C372B4(0);
    if ( *(Il2CppClass **)(*(_QWORD *)v16 + 64LL) != BuffList_MULTI_CONDITION_TypeInfo->_1.element_class )
    {
      sub_1C37574(v16);
LABEL_40:
      sub_1C372B4(v21);
    }
    v19 = *(_DWORD *)j_il2cpp_object_unbox_0(v16, BuffList_MULTI_CONDITION_TypeInfo, v17, v18);
    if ( v19 )
    {
      script = this->fields.script;
      v30 = v19;
      v29.klass = (System_Enum_c *)BuffList_MULTI_CONDITION_TypeInfo;
      v29.monitor = (void *)-1LL;
      v21 = (Il2CppObject *)System_Enum__ToString(&v29, 0);
      if ( !script )
        goto LABEL_40;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)script,
             v21,
             (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        goto LABEL_29;
      }
    }
  }
  v19 = 0;
LABEL_29:
  v22 = sub_1C37194(Enumerator, System_IDisposable_TypeInfo);
  if ( v22 )
  {
    v23 = *(_QWORD *)v22;
    v24 = v22;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_34;
      }
      v27 = v23 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_34:
      v27 = sub_1C87870(v22, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
  }
  return v19;
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

  if ( (byte_4C42CDF & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_BuffEntity_OverwriteBuffIconData___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C37058(&Method_JsonManager_Deserialize_BuffEntity_OverwriteBuffIconData_____);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&StringLiteral_22557/*"overwriteIconIds"*/);
    byte_4C42CDF = 1;
  }
  v4 = Method_System_Array_Empty_BuffEntity_OverwriteBuffIconData___;
  value = 0;
  v5 = *((_QWORD *)Method_System_Array_Empty_BuffEntity_OverwriteBuffIconData___ + 7);
  if ( !v5 )
  {
    sub_1C877C8(Method_System_Array_Empty_BuffEntity_OverwriteBuffIconData___);
    v5 = v4[7];
  }
  v6 = *(_QWORD *)(v5 + 16);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C8776C(inited);
  if ( !*(_DWORD *)(v6 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v6);
  v7 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C8776C(inited);
  script = this->fields.script;
  if ( !script )
    sub_1C372B4(v7);
  v9 = **(System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__o ***)(v7 + 184);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_22557/*"overwriteIconIds"*/,
         &value,
         (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v10 = value;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__o *)JsonManager__Deserialize_object_(
                                                                                           v10,
                                                                                           (const MethodInfo_3156F74 *)Method_JsonManager_Deserialize_BuffEntity_OverwriteBuffIconData_____);
  }
  return v9;
}


int32_t BuffEntity__GetOverwriteClassIconChangeEffectIdAtBuffRemove(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C42CDC & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22534/*"overwriteClassIconChangeEffectIdAtBuffRemove"*/);
    byte_4C42CDC = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_22534/*"overwriteClassIconChangeEffectIdAtBuffRemove"*/, defVal, v3);
}


int32_t BuffEntity__GetPopupEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C42CA8 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22733/*"popupEffectId"*/);
    byte_4C42CA8 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_22733/*"popupEffectId"*/, 0, v2);
}


int32_t BuffEntity__GetProgressSelfTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C42CB9 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_10759/*"ProgressSelfTurn"*/);
    byte_4C42CB9 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10759/*"ProgressSelfTurn"*/, -1, v2);
}


int32_t BuffEntity__GetProgressTurnCond(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C42CBA & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_10761/*"ProgressTurnCond"*/);
    byte_4C42CBA = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10761/*"ProgressTurnCond"*/, -1, v2);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *BuffEntity__GetScriptIntArray(
        BuffEntity_o *this,
        System_String_o *key,
        System_Int32_array *defValues,
        uint16_t separator,
        const MethodInfo *method)
{
  System_String_o *Script_41834400; // x21
  _BOOL8 IsNullOrEmpty; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  BuffEntity___c_c *v13; // x8
  System_Func_object__int__o *_9__25_0; // x20
  Il2CppObject *v15; // x21
  struct BuffEntity___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_4C42C9D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&System_Func_string__int__TypeInfo);
    sub_1C37058(&Method_BuffEntity___c__GetScriptIntArray_b__25_0__);
    sub_1C37058(&BuffEntity___c_TypeInfo);
    byte_4C42C9D = 1;
  }
  Script_41834400 = BuffEntity__getScript_41834400(this, key, 0, (const MethodInfo *)separator);
  IsNullOrEmpty = System_String__IsNullOrEmpty(Script_41834400, 0);
  if ( IsNullOrEmpty )
    return defValues;
  if ( !Script_41834400 )
    sub_1C372B4(IsNullOrEmpty);
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(Script_41834400, separator, 0, 0);
  v13 = BuffEntity___c_TypeInfo;
  if ( !BuffEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffEntity___c_TypeInfo);
    v13 = BuffEntity___c_TypeInfo;
  }
  _9__25_0 = (System_Func_object__int__o *)v13->static_fields->__9__25_0;
  if ( !_9__25_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = BuffEntity___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__25_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(_9__25_0, v15, Method_BuffEntity___c__GetScriptIntArray_b__25_0__, 0);
    static_fields = BuffEntity___c_TypeInfo->static_fields;
    static_fields->__9__25_0 = (struct System_Func_string__int__o *)_9__25_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__25_0, (int32_t)_9__25_0, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v12,
                                                               (System_Func_TSource__TResult__o *)_9__25_0,
                                                               (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v19,
           (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t BuffEntity__GetShowStateWarBoardEnemyEquip(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C42CC5 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_12867/*"ShowStateWarBoardEnemyEquip"*/);
    byte_4C42CC5 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_12867/*"ShowStateWarBoardEnemyEquip"*/, defVal, v3);
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

  if ( (byte_4C42CE2 & 1) == 0 )
  {
    sub_1C37058(&BuffEntity_BuffConditionIndividualityData_TypeInfo);
    byte_4C42CE2 = 1;
  }
  result = this->fields.cachedConditionIndividualityData;
  if ( !result )
  {
    if ( BuffEntity__isConditionIndividuality(this, method) )
    {
      script = this->fields.script;
      v5 = (BuffEntity_BuffConditionIndividualityData_o *)sub_1C372A4(BuffEntity_BuffConditionIndividualityData_TypeInfo);
      BuffEntity_BuffConditionIndividualityData___ctor(v5, script, v6);
      this->fields.cachedConditionIndividualityData = v5;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cachedConditionIndividualityData, (int32_t)v5, v7, v8);
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

  if ( (byte_4C42CC2 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_13655/*"TargetIndiv"*/);
    byte_4C42CC2 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_13655/*"TargetIndiv"*/, 0, 0x2Cu, v2);
}


int32_t BuffEntity__GetUnSubStateWhenContinueStatus(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C42CD1 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_14890/*"UnSubStateWhenContinue"*/);
    byte_4C42CD1 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_14890/*"UnSubStateWhenContinue"*/, 0, v2);
}


System_Int32_array *BuffEntity__GetUpBuffRateBuffIndivList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4C42CC0 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_15171/*"UpBuffRateBuffIndiv"*/);
    byte_4C42CC0 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15171/*"UpBuffRateBuffIndiv"*/, 0, 0x2Cu, v2);
}


System_Int32_array *BuffEntity__GetUpBuffRateBuffTypeList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4C42CBF & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_15172/*"UpBuffRateBuffType"*/);
    byte_4C42CBF = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15172/*"UpBuffRateBuffType"*/, 0, 0x2Cu, v2);
}


bool BuffEntity__IsBattleEndNotReduceTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C42CBC & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17071/*"battleEndNotReduceTurnFlag"*/);
    byte_4C42CBC = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17071/*"battleEndNotReduceTurnFlag"*/, 0, v2) > 0;
}


bool BuffEntity__IsCheckIndividualityForEachDamage(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C42CD3 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_4437/*"CkIndvForEachDamage"*/);
    byte_4C42CD3 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_4437/*"CkIndvForEachDamage"*/, 0, v2) == 1;
}


bool BuffEntity__IsConditionBuffValue(BuffEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C42CA6 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&StringLiteral_18202/*"condBuffValue"*/);
    byte_4C42CA6 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_18202/*"condBuffValue"*/,
                       (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool BuffEntity__IsConditionIndividualityMulti(BuffEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  Il2CppObject *v5; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v6; // x19
  System_Enum_o v8; // [xsp+8h] [xbp-48h] BYREF
  int v9; // [xsp+18h] [xbp-38h]

  if ( (byte_4C42CE1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&BuffList_MULTI_CONDITION_TypeInfo);
    byte_4C42CE1 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.script, 0) )
  {
    script = this->fields.script;
    v9 = 1;
    v8.klass = (System_Enum_c *)BuffList_MULTI_CONDITION_TypeInfo;
    v8.monitor = (void *)-1LL;
    v5 = (Il2CppObject *)System_Enum__ToString(&v8, 0);
    if ( script )
    {
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)script,
             v5,
             (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        return 1;
      }
      v6 = this->fields.script;
      v8.klass = (System_Enum_c *)BuffList_MULTI_CONDITION_TypeInfo;
      v8.monitor = (void *)-1LL;
      v9 = 2;
      v5 = (Il2CppObject *)System_Enum__ToString(&v8, 0);
      if ( v6 )
        return System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)v6,
                 v5,
                 (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    }
    sub_1C372B4(v5);
  }
  return 0;
}


bool BuffEntity__IsDelayRemoveExpiredOnPlayerTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C42CD4 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_18557/*"delayRemoveExpiredOnPlayerTurn"*/);
    byte_4C42CD4 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18557/*"delayRemoveExpiredOnPlayerTurn"*/, 0, v2) == 1;
}


bool BuffEntity__IsDisableForciblyAddState(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C42CCC & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5288/*"DisableForciblyAddState"*/);
    byte_4C42CCC = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5288/*"DisableForciblyAddState"*/, 0, v2) == 1;
}


bool BuffEntity__IsDisableMoveStateTurnChange(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C42CCF & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5289/*"DisableMoveStateTurnChange"*/);
    byte_4C42CCF = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5289/*"DisableMoveStateTurnChange"*/, 0, v2) == 1;
}


bool BuffEntity__IsDrawShadowDespiteBattleCharaInvisible(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42CBD & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_18670/*"drawShadowDespiteBattleCharaInvisible"*/);
    byte_4C42CBD = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18670/*"drawShadowDespiteBattleCharaInvisible"*/, 0);
}


bool BuffEntity__IsExcludeUnSubStateIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C42CD0 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_6296/*"ExcludeUnSubStateIndiv"*/);
    byte_4C42CD0 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_6296/*"ExcludeUnSubStateIndiv"*/, 0, v2) == 1;
}


bool BuffEntity__IsIncludeIgnoreIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C42CC3 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_7583/*"IncludeIgnoreIndividuality"*/);
    byte_4C42CC3 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7583/*"IncludeIgnoreIndividuality"*/, 0, v2) == 1;
}


bool BuffEntity__IsIndvAddBuffPassive(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C42CCE & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_7628/*"IndvAddBuffPassive"*/);
    byte_4C42CCE = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7628/*"IndvAddBuffPassive"*/, 0, v2) == 1;
}


bool BuffEntity__IsMatchBattleSkillInfoCondition(
        BuffEntity_o *this,
        BattleSkillInfoData_o *skillInfoData,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C42CD9 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19693/*"fromCommandSpell"*/);
    sub_1C37058(&StringLiteral_19694/*"fromMasterEquip"*/);
    byte_4C42CD9 = 1;
  }
  v5 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_19694/*"fromMasterEquip"*/, method);
  if ( v5 )
  {
    if ( !skillInfoData )
      goto LABEL_11;
    if ( skillInfoData->fields.type != 1 )
      return 0;
  }
  v5 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_19693/*"fromCommandSpell"*/, v6);
  if ( !v5 )
    return 1;
  if ( !skillInfoData )
LABEL_11:
    sub_1C372B4(v5);
  return skillInfoData->fields.type == 2;
}


bool BuffEntity__IsMatchSkillCountingCondition(BuffEntity_o *this, BattleData_o *data, const MethodInfo *method)
{
  _BOOL8 v5; // x0

  if ( (byte_4C42CD7 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_24480/*"useFirstTimeInTurn"*/);
    byte_4C42CD7 = 1;
  }
  v5 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_24480/*"useFirstTimeInTurn"*/, method);
  if ( !v5 )
    return 1;
  if ( !data )
    sub_1C372B4(v5);
  return data->fields.playerSkillCount == 1;
}


bool BuffEntity__IsNotPierce(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42CDE & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_20937/*"isNotPierce"*/);
    byte_4C42CDE = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20937/*"isNotPierce"*/, 0);
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

  if ( (byte_4C42CCD & 1) == 0 )
  {
    sub_1C37058(&BuffList_CONDITIONS_TypeInfo);
    byte_4C42CCD = 1;
  }
  v13.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v13.monitor = (void *)-1LL;
  v14 = condition;
  v7 = System_Enum__ToString(&v13, 0);
  ScriptIntArray = BuffEntity__GetScriptIntArray(this, v7, 0, 0x2Cu, v8);
  *paramArray = ScriptIntArray;
  sub_1C36FFC((CGThumbnailListItem_o *)paramArray, (int32_t)ScriptIntArray, v10, v11);
  return *paramArray != 0;
}


bool BuffEntity__TryGetIndividualityDisplayOnCard(
        BuffEntity_o *this,
        System_Int32_array_array **result,
        const MethodInfo *method)
{
  if ( (byte_4C42CDD & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_20779/*"individualityDisplayOnCard"*/);
    byte_4C42CDD = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_20779/*"individualityDisplayOnCard"*/,
           result,
           0);
}


bool BuffEntity__TryGetNotPierceIndividuality(
        BuffEntity_o *this,
        System_Int32_array_array **result,
        const MethodInfo *method)
{
  if ( (byte_4C42CDA & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9574/*"NotPierceIndividuality"*/);
    byte_4C42CDA = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_9574/*"NotPierceIndividuality"*/,
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

  if ( (byte_4C42CAF & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_21598/*"missText"*/);
    byte_4C42CAF = 1;
  }
  return BuffEntity__checkScript(this, (System_String_o *)StringLiteral_21598/*"missText"*/, v2);
}


bool BuffEntity__checkScript(BuffEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C42C9A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4C42C9A = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


int32_t BuffEntity__getAppearanceId(BuffEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v5; // x2
  __int64 v6; // x3
  BuffEntity_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C42CAC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&StringLiteral_2290/*"AppId"*/);
    byte_4C42CAC = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_2290/*"AppId"*/,
           (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_2290/*"AppId"*/,
                                                                                (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_1C372B4(Item);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v5, v6);
      }
      else
      {
        sub_1C37574(Item);
        LODWORD(script) = BuffEntity__getDamageRelease(v7, v8);
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

  if ( (byte_4C42CB6 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16926/*"atkPriority"*/);
    byte_4C42CB6 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_16926/*"atkPriority"*/, defVal, v3);
}


int32_t BuffEntity__getCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C42CB4 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17946/*"checkIndvType"*/);
    byte_4C42CB4 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17946/*"checkIndvType"*/, 2 * (this->fields.type == 155), v2);
  else
    return 2 * (this->fields.type == 155);
}


int32_t BuffEntity__getDamageRelease(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C42CAD & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_5045/*"DamageRelease"*/);
    byte_4C42CAD = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5045/*"DamageRelease"*/, 0, v2);
}


System_String_o *BuffEntity__getDamageReleaseText(BuffEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4C42CAE & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_2762/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/);
    sub_1C37058(&StringLiteral_11293/*"ReleaseText"*/);
    byte_4C42CAE = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2762/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/, 0);
  if ( this->fields.script )
    return BuffEntity__getScript_41834400(this, (System_String_o *)StringLiteral_11293/*"ReleaseText"*/, result, v4);
  return result;
}


int32_t BuffEntity__getDefRelationPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C42CB7 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_18536/*"defPriority"*/);
    byte_4C42CB7 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18536/*"defPriority"*/, defVal, v3);
}


int32_t BuffEntity__getEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v5; // x2
  __int64 v6; // x3
  BuffEntity_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C42CA7 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&StringLiteral_5919/*"EffectId"*/);
    byte_4C42CA7 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_5919/*"EffectId"*/,
           (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_5919/*"EffectId"*/,
                                                                                (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_1C372B4(Item);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v5, v6);
      }
      else
      {
        sub_1C37574(Item);
        LODWORD(script) = BuffEntity__GetPopupEffectId(v7, v8);
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

  if ( (byte_4C42C9F & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    byte_4C42C9F = 1;
  }
  result = this->fields.effectList;
  if ( !result )
    return (System_Int32_array *)sub_1C37100(int___TypeInfo, 0);
  return result;
}


int32_t BuffEntity__getGutsIcon(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C42CB3 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19922/*"gutsIconId"*/);
    byte_4C42CB3 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19922/*"gutsIconId"*/, 0, v2);
  else
    return 0;
}


System_String_o *BuffEntity__getGutsText(BuffEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4C42CB1 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_2735/*"BATTLE_DEFAULT_GUTS_TEXT"*/);
    sub_1C37058(&StringLiteral_19923/*"gutsText"*/);
    byte_4C42CB1 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2735/*"BATTLE_DEFAULT_GUTS_TEXT"*/, 0);
  if ( this->fields.script )
    return BuffEntity__getScript_41834400(this, (System_String_o *)StringLiteral_19923/*"gutsText"*/, result, v4);
  return result;
}


System_String_o *BuffEntity__getIconName(BuffEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v6; // x5
  __int64 v7; // x6
  __int64 v8; // x7
  Il2CppObject *v9; // x0
  int32_t IconId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C42CA0 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&StringLiteral_17632/*"bufficon_{0:000}"*/);
    byte_4C42CA0 = 1;
  }
  IconId = BuffEntity__GetIconId(this, method);
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &IconId, v3, v4, v5, v6, v7, v8);
  return System_String__Format((System_String_o *)StringLiteral_17632/*"bufficon_{0:000}"*/, v9, 0);
}


System_Int32_array *BuffEntity__getIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.vals;
}


System_String_o *BuffEntity__getMissText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C42CB0 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_21598/*"missText"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C42CB0 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_41834400(
             this,
             (System_String_o *)StringLiteral_21598/*"missText"*/,
             (System_String_o *)StringLiteral_1/*""*/,
             v2);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t BuffEntity__getRelationId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C42CB5 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_23021/*"relationId"*/);
    byte_4C42CB5 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_23021/*"relationId"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t BuffEntity__getScript(BuffEntity_o *this, System_String_o *key, int32_t defVal, const MethodInfo *method)
{
  int32_t v4; // w20
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  BuffEntity_o *v11; // x0
  System_String_o *v12; // x1
  System_String_o *v13; // x2
  const MethodInfo *v14; // x3

  v4 = defVal;
  if ( (byte_4C42C9B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&long_TypeInfo);
    byte_4C42C9B = 1;
  }
  if ( !BuffEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C372B4(script);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v8, v9);
  sub_1C37574(script);
  return (unsigned int)BuffEntity__getScript_41834400(v11, v12, v13, v14);
}


System_String_o *BuffEntity__getScript_41834400(
        BuffEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *script; // x0

  if ( (byte_4C42C9C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_4C42C9C = 1;
  }
  if ( !BuffEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C372B4(script);
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

  if ( (byte_4C42CB2 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19924/*"gutsTextColor"*/);
    byte_4C42CB2 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19924/*"gutsTextColor"*/, 1, v2);
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

  if ( (byte_4C42CA1 & 1) == 0 )
  {
    sub_1C37058(&BuffList_CONDITIONS_TypeInfo);
    byte_4C42CA1 = 1;
  }
  v10.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v10.monitor = (void *)-1LL;
  v11 = cond;
  v7 = System_Enum__ToString(&v10, 0);
  return BuffEntity__isCondition_41835504(this, v7, pal, v8);
}


bool BuffEntity__isConditionIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  Il2CppObject *v4; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v5; // x20
  Il2CppObject *v6; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v8; // x19
  System_Enum_o v10; // [xsp+8h] [xbp-48h] BYREF
  int v11; // [xsp+18h] [xbp-38h]

  if ( (byte_4C42CA5 & 1) == 0 )
  {
    sub_1C37058(&BuffList_CONDITIONS_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4C42CA5 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v10.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v10.monitor = (void *)-1LL;
  v11 = 2;
  v4 = (Il2CppObject *)System_Enum__ToString(&v10, 0);
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          v4,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v5 = this->fields.script;
    v10.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
    v10.monitor = (void *)-1LL;
    v11 = 3;
    v6 = (Il2CppObject *)System_Enum__ToString(&v10, 0);
    if ( v5 )
    {
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)v5,
             v6,
             (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        return 1;
      }
      v8 = this->fields.script;
      v10.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
      v10.monitor = (void *)-1LL;
      v11 = 4;
      v6 = (Il2CppObject *)System_Enum__ToString(&v10, 0);
      if ( v8 )
        return System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)v8,
                 v6,
                 (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    }
    sub_1C372B4(v6);
  }
  return 1;
}


bool BuffEntity__isCondition_41835504(BuffEntity_o *this, System_String_o *key, int32_t *pal, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x8
  BuffEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4C42CA2 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&long_TypeInfo);
    byte_4C42CA2 = 1;
  }
  *pal = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_1C372B4(Item);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v11 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10);
        LOBYTE(script) = 1;
        *pal = v11;
      }
      else
      {
        sub_1C37574(Item);
        LOBYTE(script) = BuffEntity__isConditions(v12, v13);
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
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v12; // x20
  bool v13; // w8
  struct System_Collections_Generic_Dictionary_string__object__o *v14; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v15; // x20
  System_Enum_o v16; // [xsp+8h] [xbp-48h] BYREF
  int v17; // [xsp+18h] [xbp-38h]

  if ( (byte_4C42CA3 & 1) == 0 )
  {
    sub_1C37058(&BuffList_CONDITIONS_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&BuffList_MULTI_CONDITION_TypeInfo);
    sub_1C37058(&StringLiteral_18202/*"condBuffValue"*/);
    byte_4C42CA3 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v17 = 0;
  v16.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v16.monitor = (void *)-1LL;
  v4 = (Il2CppObject *)System_Enum__ToString(&v16, 0);
  v5 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         v4,
         (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  v6 = 1;
  if ( !v5 )
  {
    v7 = this->fields.script;
    v17 = 1;
    v16.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
    v16.monitor = (void *)-1LL;
    v8 = (Il2CppObject *)System_Enum__ToString(&v16, 0);
    if ( !v7 )
      goto LABEL_22;
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)v7,
            v8,
            (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v9 = this->fields.script;
      v16.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
      v16.monitor = (void *)-1LL;
      v17 = 2;
      v8 = (Il2CppObject *)System_Enum__ToString(&v16, 0);
      if ( !v9 )
        goto LABEL_22;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)v9,
              v8,
              (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        v10 = this->fields.script;
        v16.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
        v16.monitor = (void *)-1LL;
        v17 = 3;
        v8 = (Il2CppObject *)System_Enum__ToString(&v16, 0);
        if ( v10 )
        {
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)v10,
                 v8,
                 (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            return 1;
          }
          v12 = this->fields.script;
          v16.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
          v16.monitor = (void *)-1LL;
          v17 = 4;
          v8 = (Il2CppObject *)System_Enum__ToString(&v16, 0);
          if ( v12 )
          {
            v13 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                    (System_Collections_Generic_Dictionary_object__object__o *)v12,
                    v8,
                    (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
            v6 = 1;
            if ( v13 )
              return v6;
            v14 = this->fields.script;
            v17 = 1;
            v16.klass = (System_Enum_c *)BuffList_MULTI_CONDITION_TypeInfo;
            v16.monitor = (void *)-1LL;
            v8 = (Il2CppObject *)System_Enum__ToString(&v16, 0);
            if ( v14 )
            {
              if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                     (System_Collections_Generic_Dictionary_object__object__o *)v14,
                     v8,
                     (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
              {
                return 1;
              }
              v15 = this->fields.script;
              v16.klass = (System_Enum_c *)BuffList_MULTI_CONDITION_TypeInfo;
              v16.monitor = (void *)-1LL;
              v17 = 2;
              v8 = (Il2CppObject *)System_Enum__ToString(&v16, 0);
              if ( v15 )
              {
                if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)v15,
                       v8,
                       (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
                {
                  return 1;
                }
                v8 = (Il2CppObject *)this->fields.script;
                if ( v8 )
                  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
                           (System_Collections_Generic_Dictionary_object__object__o *)v8,
                           (Il2CppObject *)StringLiteral_18202/*"condBuffValue"*/,
                           (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
              }
            }
          }
        }
LABEL_22:
        sub_1C372B4(v8);
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
  System_Enum_o v10; // [xsp+8h] [xbp-48h] BYREF
  int v11; // [xsp+18h] [xbp-38h]

  if ( (byte_4C42CA4 & 1) == 0 )
  {
    sub_1C37058(&BuffList_CONDITIONS_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4C42CA4 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    v11 = 0;
    v10.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
    v10.monitor = (void *)-1LL;
    v4 = (Il2CppObject *)System_Enum__ToString(&v10, 0);
    v5 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           v4,
           (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    v6 = 1;
    if ( !v5 )
    {
      v7 = this->fields.script;
      v11 = 1;
      v10.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
      v10.monitor = (void *)-1LL;
      v8 = (Il2CppObject *)System_Enum__ToString(&v10, 0);
      if ( !v7 )
        sub_1C372B4(v8);
      return System_Collections_Generic_Dictionary_object__object___ContainsKey(
               (System_Collections_Generic_Dictionary_object__object__o *)v7,
               v8,
               (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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

  if ( (byte_4C42C9E & 1) == 0 )
  {
    sub_1C37058(&Individuality_TypeInfo);
    byte_4C42C9E = 1;
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
  _BOOL8 v6; // x0
  Il2CppObject *currentKey; // x22
  Il2CppObject *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x21
  BuffEntity_BuffConditionIndividualityData___c_c *v10; // x8
  System_Func_object__int__o *_9__5_0; // x22
  Il2CppObject *v12; // x23
  struct BuffEntity_BuffConditionIndividualityData___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  struct System_Int32_array *v17; // x0
  struct System_Int32_array **p_targetIndividualityArray; // x19
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v22; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C42CE7 & 1) == 0 )
  {
    sub_1C37058(&BuffList_CONDITIONS_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    sub_1C37058(&Method_System_Enum_TryParse_BuffList_CONDITIONS___);
    sub_1C37058(&System_Enum_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__get_Current__);
    sub_1C37058(&System_Func_string__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    sub_1C37058(&Method_BuffEntity_BuffConditionIndividualityData___c___ctor_b__5_0__);
    sub_1C37058(&BuffEntity_BuffConditionIndividualityData___c_TypeInfo);
    sub_1C37058(&StringLiteral_20778/*"individualityCondTargetType"*/);
    sub_1C37058(&StringLiteral_7440/*"INDIVIDUALITIE_COUNT_ABOVE"*/);
    sub_1C37058(&StringLiteral_7439/*"INDIVIDUALITIE"*/);
    sub_1C37058(&StringLiteral_7441/*"INDIVIDUALITIE_COUNT_BELOW"*/);
    byte_4C42CE7 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !conditionScript )
    goto LABEL_24;
  Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
           (System_Collections_Generic_Dictionary_object__object__o *)conditionScript,
           (const MethodInfo_3463310 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
  if ( !Keys )
    goto LABEL_24;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
    &v21,
    Keys,
    (const MethodInfo_36C85B4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    v6 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
           &v22,
           (const MethodInfo_3560C80 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
    if ( !v6 )
    {
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
        &v22,
        (const MethodInfo_3560C7C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
      return;
    }
    currentKey = v22.fields._currentKey;
    if ( !v22.fields._currentKey )
      sub_1C372B4(v6);
    if ( System_String__Contains((System_String_o *)v22.fields._currentKey, (System_String_o *)StringLiteral_7439/*"INDIVIDUALITIE"*/, 0) )
    {
      if ( !System_Enum_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
      if ( System_Enum__TryParse_Int32Enum_(
             (System_String_o *)currentKey,
             &this->fields.condition,
             (const MethodInfo_30EE79C *)Method_System_Enum_TryParse_BuffList_CONDITIONS___) )
      {
        break;
      }
    }
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
    &v22,
    (const MethodInfo_3560C7C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
  v21.fields._dictionary = (struct System_Collections_Generic_Dictionary_TKey__TValue__o *)BuffList_CONDITIONS_TypeInfo;
  *(_QWORD *)&v21.fields._index = -1;
  LODWORD(v21.fields._currentKey) = this->fields.condition;
  v8 = (Il2CppObject *)System_Enum__ToString((System_Enum_o *)&v21, 0);
  Keys = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  (System_Collections_Generic_Dictionary_object__object__o *)conditionScript,
                                                                                  v8,
                                                                                  (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Keys
    || (Keys = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *, const MethodInfo *))Keys->klass->vtable._3_ToString.methodPtr)(
                                                                                        Keys,
                                                                                        Keys->klass->vtable._3_ToString.method)) == 0 )
  {
LABEL_24:
    sub_1C372B4(Keys);
  }
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split((System_String_o *)Keys, 0x2Cu, 0, 0);
  v10 = BuffEntity_BuffConditionIndividualityData___c_TypeInfo;
  if ( !BuffEntity_BuffConditionIndividualityData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffEntity_BuffConditionIndividualityData___c_TypeInfo);
    v10 = BuffEntity_BuffConditionIndividualityData___c_TypeInfo;
  }
  _9__5_0 = (System_Func_object__int__o *)v10->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = BuffEntity_BuffConditionIndividualityData___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__5_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__5_0,
      v12,
      Method_BuffEntity_BuffConditionIndividualityData___c___ctor_b__5_0__,
      0);
    static_fields = BuffEntity_BuffConditionIndividualityData___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_string__int__o *)_9__5_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v14, v15);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v9,
                                                               (System_Func_TSource__TResult__o *)_9__5_0,
                                                               (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_string__int___);
  v17 = System_Linq_Enumerable__ToArray_int_(
          v16,
          (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.targetIndividualityArray = v17;
  p_targetIndividualityArray = &this->fields.targetIndividualityArray;
  sub_1C36FFC((CGThumbnailListItem_o *)p_targetIndividualityArray, (int32_t)v17, v19, v20);
  *((_DWORD *)p_targetIndividualityArray - 1) = EntityScriptUtil__GetIntValue(
                                                  conditionScript,
                                                  (System_String_o *)StringLiteral_20778/*"individualityCondTargetType"*/,
                                                  0,
                                                  0);
  *((_DWORD *)p_targetIndividualityArray + 2) = EntityScriptUtil__GetIntValue(
                                                  conditionScript,
                                                  (System_String_o *)StringLiteral_7440/*"INDIVIDUALITIE_COUNT_ABOVE"*/,
                                                  0,
                                                  0);
  *((_DWORD *)p_targetIndividualityArray + 3) = EntityScriptUtil__GetIntValue(
                                                  conditionScript,
                                                  (System_String_o *)StringLiteral_7441/*"INDIVIDUALITIE_COUNT_BELOW"*/,
                                                  0,
                                                  0);
}


void BuffEntity_BuffConditionIndividualityData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C42CE8 & 1) == 0 )
  {
    sub_1C37058(&BuffEntity_BuffConditionIndividualityData___c_TypeInfo);
    byte_4C42CE8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(BuffEntity_BuffConditionIndividualityData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BuffEntity_BuffConditionIndividualityData___c_TypeInfo->static_fields->__9 = (struct BuffEntity_BuffConditionIndividualityData___c_o *)v1;
  sub_1C36FFC(
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

  if ( (byte_4C42CE9 & 1) == 0 )
  {
    sub_1C37058(&Method_BuffEntity_CondBuffValueData_IsEqualOrHigher__);
    sub_1C37058(&Method_BuffEntity_CondBuffValueData_IsEqualOrLower__);
    sub_1C37058(&Method_BuffEntity_CondBuffValueData_IsEqual__);
    sub_1C37058(&Method_BuffEntity_CondBuffValueData_IsHigher__);
    sub_1C37058(&Method_BuffEntity_CondBuffValueData_IsLower__);
    sub_1C37058(&Method_BuffEntity_CondBuffValueData_IsNotEqual__);
    sub_1C37058(&System_Func_int__int__bool__TypeInfo);
    sub_1C37058(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C37058(&StringLiteral_1533/*"<>"*/);
    sub_1C37058(&StringLiteral_1744/*"="*/);
    sub_1C37058(&StringLiteral_15959/*"[^0-9]"*/);
    sub_1C37058(&StringLiteral_1497/*"<"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_1750/*">"*/);
    sub_1C37058(&StringLiteral_339/*"!="*/);
    byte_4C42CE9 = 1;
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
    if ( System_String__Contains(condValue, (System_String_o *)StringLiteral_1533/*"<>"*/, 0) )
    {
LABEL_8:
      v7 = sub_1C372A4(System_Func_int__int__bool__TypeInfo);
      v8 = (intptr_t *)&Method_BuffEntity_CondBuffValueData_IsNotEqual__;
      v9 = (System_Func_int__int__bool__o *)v7;
      goto LABEL_9;
    }
    condValue = this->fields.condValue;
    if ( !condValue )
      goto LABEL_24;
    condValue = (System_String_o *)System_String__Contains(condValue, (System_String_o *)StringLiteral_1744/*"="*/, 0);
    if ( !this->fields.condValue )
      goto LABEL_24;
    v15 = (char)condValue;
    if ( System_String__Contains(this->fields.condValue, (System_String_o *)StringLiteral_1750/*">"*/, 0) )
    {
      v16 = sub_1C372A4(System_Func_int__int__bool__TypeInfo);
      v8 = (intptr_t *)&Method_BuffEntity_CondBuffValueData_IsHigher__;
      v17 = (intptr_t *)&Method_BuffEntity_CondBuffValueData_IsEqualOrHigher__;
      v9 = (System_Func_int__int__bool__o *)v16;
    }
    else
    {
      condValue = this->fields.condValue;
      if ( !condValue )
        goto LABEL_24;
      v18 = System_String__Contains(condValue, (System_String_o *)StringLiteral_1497/*"<"*/, 0);
      v9 = (System_Func_int__int__bool__o *)sub_1C372A4(System_Func_int__int__bool__TypeInfo);
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
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.compareFunc, (int32_t)v9, v10, v11);
    v12 = this->fields.condValue;
    if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
    v13 = System_Text_RegularExpressions_Regex__Replace(
            v12,
            (System_String_o *)StringLiteral_15959/*"[^0-9]"*/,
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
    sub_1C372B4(condValue);
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

  if ( (byte_4C42CEA & 1) == 0 )
  {
    sub_1C37058(&BuffEntity___c_TypeInfo);
    byte_4C42CEA = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(BuffEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BuffEntity___c_TypeInfo->static_fields->__9 = (struct BuffEntity___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)BuffEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
  return data->fields.priority;
}


int32_t BuffEntity___c___GetScriptIntArray_b__25_0(
        BuffEntity___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0);
}