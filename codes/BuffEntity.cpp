void BuffEntity___ctor(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE3C5 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_int___ctor__);
    byte_4CEE3C5 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_342BE18 *)Method_DataEntityBase_int___ctor__);
}


bool BuffEntity__ContainsIndividualityToActivate(
        BuffEntity_o *this,
        System_Int32_array *individualityArray,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t Script; // w1

  if ( (byte_4CEE3B8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C7BAE8(&StringLiteral_7455/*"INDIVIDUALITIE"*/);
    byte_4CEE3B8 = 1;
  }
  Script = BuffEntity__getScript(this, (System_String_o *)StringLiteral_7455/*"INDIVIDUALITIE"*/, 0, v3);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)individualityArray,
           Script,
           (const MethodInfo_318C6F4 *)Method_System_Linq_Enumerable_Contains_int___);
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

  if ( (byte_4CEE3A1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Nullable_float___ctor__);
    sub_1C7BAE8(&StringLiteral_17150/*"battleCharaAlpha"*/);
    byte_4CEE3A1 = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17150/*"battleCharaAlpha"*/, 0) )
  {
    v3 = (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17150/*"battleCharaAlpha"*/, 0, 0)
       / 1000.0;
    v4 = (System_Nullable_float__o)&v6;
    v6 = 0;
    System_Nullable_float____ctor(v4, v3, (const MethodInfo_3967354 *)Method_System_Nullable_float___ctor__);
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

  if ( (byte_4CEE3B2 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_17716/*"buffStateNoticeName"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEE3B2 = 1;
  }
  return BuffEntity__getScript_42405876(
           this,
           (System_String_o *)StringLiteral_17716/*"buffStateNoticeName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t BuffEntity__GetCardEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE39E & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_4333/*"CardEffectId"*/);
    byte_4CEE39E = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_4333/*"CardEffectId"*/, 0, v2);
}


int32_t BuffEntity__GetCkIndvCountAbove(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CEE3A9 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18067/*"ckIndvCountAbove"*/);
    byte_4CEE3A9 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18067/*"ckIndvCountAbove"*/, defVal, v3);
}


int32_t BuffEntity__GetCkIndvCountBelow(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CEE3AA & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18068/*"ckIndvCountBelow"*/);
    byte_4CEE3AA = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18068/*"ckIndvCountBelow"*/, defVal, v3);
}


System_Int32_array *BuffEntity__GetCkOpCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4CEE3AC & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18069/*"ckOpCountIndividuality"*/);
    byte_4CEE3AC = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_18069/*"ckOpCountIndividuality"*/, 0, 0x2Cu, v2);
}


System_Int32_array *BuffEntity__GetCkSelfCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4CEE3AB & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18070/*"ckSelfCountIndividuality"*/);
    byte_4CEE3AB = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_18070/*"ckSelfCountIndividuality"*/, 0, 0x2Cu, v2);
}


int32_t BuffEntity__GetClassIconChangeEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE3BB & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18079/*"classIconChangeEffectId"*/);
    byte_4CEE3BB = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18079/*"classIconChangeEffectId"*/, -1, v2);
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

  if ( (byte_4CEE3C4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_Empty_BuffEntity_CondBuffValueData___);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C7BAE8(&Method_JsonManager_Deserialize_BuffEntity_CondBuffValueData_____);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_18300/*"condBuffValue"*/);
    byte_4CEE3C4 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script )
    sub_1C7BD40(0, method);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_18300/*"condBuffValue"*/,
          &value,
          (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    goto LABEL_8;
  v5 = value;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  result = (BuffEntity_CondBuffValueData_array *)JsonManager__Deserialize_object_(
                                                   v5,
                                                   (const MethodInfo_31DEE64 *)Method_JsonManager_Deserialize_BuffEntity_CondBuffValueData_____);
  if ( !result )
  {
LABEL_8:
    v7 = Method_System_Array_Empty_BuffEntity_CondBuffValueData___;
    v8 = *((_QWORD *)Method_System_Array_Empty_BuffEntity_CondBuffValueData___ + 7);
    if ( !v8 )
    {
      sub_1C51BD8(Method_System_Array_Empty_BuffEntity_CondBuffValueData___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C51B7C(inited);
    if ( !*(_DWORD *)(v9 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v9);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C51B7C(inited);
    return **(BuffEntity_CondBuffValueData_array ***)(v10 + 184);
  }
  return result;
}


System_String_o *BuffEntity__GetCounterMessage(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE3A7 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_4835/*"CounterMessage"*/);
    byte_4CEE3A7 = 1;
  }
  return BuffEntity__getScript_42405876(this, (System_String_o *)StringLiteral_4835/*"CounterMessage"*/, 0, v2);
}


int32_t BuffEntity__GetDefCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  return 2 * (this->fields.type == 155);
}


int32_t BuffEntity__GetDisplayPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CEE3B5 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_5303/*"DisplayPriority"*/);
    byte_4CEE3B5 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5303/*"DisplayPriority"*/, defVal, v3);
}


System_String_o *BuffEntity__GetEffectText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE38D & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_19055/*"effectText"*/);
    byte_4CEE38D = 1;
  }
  return BuffEntity__getScript_42405876(this, (System_String_o *)StringLiteral_19055/*"effectText"*/, 0, v2);
}


int32_t BuffEntity__GetExecutePriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CEE3B6 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_19467/*"executePriority"*/);
    byte_4CEE3B6 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19467/*"executePriority"*/, defVal, v3);
}


int32_t BuffEntity__GetExtendLowerLimit(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE39B & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_19477/*"extendLowerLimit"*/);
    byte_4CEE39B = 1;
  }
  return -BuffEntity__getScript(this, (System_String_o *)StringLiteral_19477/*"extendLowerLimit"*/, 0, v2);
}


int32_t BuffEntity__GetGuardEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE38C & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_20080/*"guardEffectId"*/);
    byte_4CEE38C = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_20080/*"guardEffectId"*/, 0, v2);
}


int32_t BuffEntity__GetIconId(BuffEntity_o *this, const MethodInfo *method)
{
  int32_t iconId; // w21
  System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__o *OverwriteBuffIconDataArray; // x0
  BuffEntity___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_Func_object__int__o *_9__21_0; // x21
  Il2CppObject *v8; // x22
  struct BuffEntity___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v16; // x0
  __int64 v17; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v19; // x20
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x20
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 IsOpen; // x0
  __int64 v34; // x1
  __int64 v35; // x21
  __int64 v36; // x19
  int v37; // w8
  int v38; // w27
  char v39; // w26
  __int64 v40; // x23
  __int64 v41; // x0
  __int64 v42; // x1
  int32_t v43; // w22
  __int64 v44; // x8
  int32_t v45; // w23
  int64_t v46; // x24
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  int32_t v52; // [xsp+Ch] [xbp-64h]

  if ( (byte_4CEE37E & 1) == 0 )
  {
    sub_1C7BAE8(&BattleData_TypeInfo);
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_EnumUtility_CastToEnum_CondType_Kind___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OrderByDescending_BuffEntity_OverwriteBuffIconData__int___);
    sub_1C7BAE8(&System_Func_BuffEntity_OverwriteBuffIconData__int__TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_BuffEntity_OverwriteBuffIconData__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_BuffEntity___c__GetIconId_b__21_0__);
    sub_1C7BAE8(&BuffEntity___c_TypeInfo);
    byte_4CEE37E = 1;
  }
  iconId = this->fields.iconId;
  OverwriteBuffIconDataArray = BuffEntity__GetOverwriteBuffIconDataArray(this, method);
  v5 = BuffEntity___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)OverwriteBuffIconDataArray;
  v52 = iconId;
  if ( !BuffEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffEntity___c_TypeInfo);
    v5 = BuffEntity___c_TypeInfo;
  }
  _9__21_0 = (System_Func_object__int__o *)v5->static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BuffEntity___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__21_0 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_BuffEntity_OverwriteBuffIconData__int__TypeInfo);
    System_Func_object__int____ctor(_9__21_0, v8, Method_BuffEntity___c__GetIconId_b__21_0__, 0);
    static_fields = BuffEntity___c_TypeInfo->static_fields;
    static_fields->__9__21_0 = (struct System_Func_BuffEntity_OverwriteBuffIconData__int__o *)_9__21_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__21_0,
      (int32_t)_9__21_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v6,
          (System_Func_TSource__TKey__o *)_9__21_0,
          (const MethodInfo_319F4D8 *)Method_System_Linq_Enumerable_OrderByDescending_BuffEntity_OverwriteBuffIconData__int___);
  if ( !v16 )
    sub_1C7BD40(0, v17);
  klass = v16->klass;
  v19 = v16;
  v20 = *(unsigned __int16 *)&v16->klass->_2.rank;
  if ( *(_WORD *)&v16->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_14;
    }
    v22 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v22 = sub_1C51E70(v16, System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__TypeInfo, 0);
  }
  v24 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
  if ( !v24 )
    sub_1C7BD40(0, v23);
  while ( 1 )
  {
    v25 = *(_QWORD *)v24;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_21;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_21:
      v28 = sub_1C51E70(v24, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
      break;
    v29 = *(_QWORD *)v24;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BuffEntity_OverwriteBuffIconData__c **)v31 - 1) != System_Collections_Generic_IEnumerator_BuffEntity_OverwriteBuffIconData__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_28;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_28:
      v32 = sub_1C51E70(v24, System_Collections_Generic_IEnumerator_BuffEntity_OverwriteBuffIconData__TypeInfo, 0);
    }
    IsOpen = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
    v35 = IsOpen;
    if ( !IsOpen )
      sub_1C7BD40(0, v34);
    v36 = *(_QWORD *)(IsOpen + 24);
    if ( !v36 )
      sub_1C7BD40(IsOpen, v34);
    v37 = *(_DWORD *)(v36 + 24);
    if ( v37 >= 1 )
    {
      v38 = 0;
      v39 = 1;
      do
      {
        if ( v38 >= (unsigned int)v37 )
          sub_1C7BD48(IsOpen);
        v40 = *(_QWORD *)(v36 + 8LL * v38 + 32);
        if ( !v40 )
          sub_1C7BD40(IsOpen, v34);
        v41 = EnumUtility__CastToEnum_Int32Enum_(
                *(System_String_o **)(v40 + 16),
                0,
                (const MethodInfo_31773B8 *)Method_EnumUtility_CastToEnum_CondType_Kind___);
        v43 = v41;
        if ( (_DWORD)v41 == 81 )
        {
          if ( !BattleData_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
          IsOpen = BattleData__get_BattleGenderType(0) == *(_DWORD *)(v40 + 24);
        }
        else
        {
          v44 = *(_QWORD *)(v40 + 32);
          if ( !v44 )
            sub_1C7BD40(v41, v42);
          if ( !*(_DWORD *)(v44 + 24) )
            sub_1C7BD48(v41);
          v45 = *(_DWORD *)(v40 + 24);
          v46 = *(int *)(v44 + 32);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v43, v45, v46, 0, 0, 0);
        }
        v37 = *(_DWORD *)(v36 + 24);
        ++v38;
        v39 &= IsOpen;
      }
      while ( v38 < v37 );
      if ( (v39 & 1) == 0 )
        continue;
    }
    v52 = *(_DWORD *)(v35 + 16);
    break;
  }
  v47 = *(_QWORD *)v24;
  v48 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
  {
    v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_52;
    }
    v50 = v47 + 16LL * *v49 + 312;
  }
  else
  {
LABEL_52:
    v50 = sub_1C51E70(v24, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v50)(v24, *(_QWORD *)(v50 + 8));
  return v52;
}


int32_t BuffEntity__GetMaxBuffRate(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE3A4 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_8998/*"MaxBuffRate"*/);
    byte_4CEE3A4 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_8998/*"MaxBuffRate"*/, -1, v2);
}


System_String_o *BuffEntity__GetMotionName(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE38E & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_21858/*"motionName"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEE38E = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_42405876(this, (System_String_o *)StringLiteral_21858/*"motionName"*/, 0, v2);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


BuffEntity_BuffConditionIndividualityData_array *BuffEntity__GetMultiConditionIndividualityDataArray(
        BuffEntity_o *this,
        const MethodInfo *method)
{
  BuffEntity_BuffConditionIndividualityData_array *result; // x0
  GrandQuestFolderBoardItem_o *p_cachedConditionIndividualityDataArray; // x19
  int32_t MultiConditionType; // w0
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  __int64 naturalAligment; // x10
  System_Object_array *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_List_object__o *v18; // x20
  Il2CppObject *current; // x22
  __int64 v20; // x10
  BuffEntity_BuffConditionIndividualityData_o *v21; // x21
  const MethodInfo *v22; // x2
  __int64 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4CEE3C3 & 1) == 0 )
  {
    sub_1C7BAE8(&BuffEntity_BuffConditionIndividualityData___TypeInfo);
    sub_1C7BAE8(&BuffEntity_BuffConditionIndividualityData_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData__TypeInfo);
    sub_1C7BAE8(&BuffList_MULTI_CONDITION_TypeInfo);
    byte_4CEE3C3 = 1;
  }
  value = 0;
  memset(&v36, 0, sizeof(v36));
  p_cachedConditionIndividualityDataArray = (GrandQuestFolderBoardItem_o *)&this->fields.cachedConditionIndividualityDataArray;
  result = this->fields.cachedConditionIndividualityDataArray;
  if ( !result )
  {
    MultiConditionType = BuffEntity__GetMultiConditionType(this, method);
    if ( MultiConditionType )
    {
      script = this->fields.script;
      LODWORD(v35.fields._current) = MultiConditionType;
      v35.fields._list = (struct System_Collections_Generic_List_T__o *)BuffList_MULTI_CONDITION_TypeInfo;
      *(_QWORD *)&v35.fields._index = -1;
      v7 = (Il2CppObject *)System_Enum__ToString((System_Enum_o *)&v35, 0);
      if ( script )
      {
        System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          v7,
          &value,
          (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
        v9 = value;
        if ( !value )
          goto LABEL_9;
        naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
        if ( value->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
        {
          goto LABEL_9;
        }
        v18 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v18,
          (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData___ctor__);
        System_Collections_Generic_List_object___GetEnumerator(
          &v35,
          (System_Collections_Generic_List_object__o *)v9,
          (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v36 = v35;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  (System_Collections_Generic_List_Enumerator_object__o *)&v36,
                  (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        {
          current = v36.fields._current;
          if ( v36.fields._current )
          {
            v20 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
            if ( v36.fields._current->klass->_2.naturalAligment >= (unsigned int)v20
              && (System_Collections_Generic_Dictionary_string__object__c *)v36.fields._current->klass->_2.typeHierarchy[v20 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
            {
              v21 = (BuffEntity_BuffConditionIndividualityData_o *)sub_1C7BD34(BuffEntity_BuffConditionIndividualityData_TypeInfo);
              BuffEntity_BuffConditionIndividualityData___ctor(
                v21,
                (System_Collections_Generic_Dictionary_string__object__o *)current,
                v22);
              if ( !v18 )
                sub_1C7BD40(v23, v24);
              items = v18->fields._items;
              v32 = Method_System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData__Add__;
              ++v18->fields._version;
              if ( !items )
                sub_1C7BD40(v23, v24);
              size = v18->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v18,
                  (Il2CppObject *)v21,
                  *(const MethodInfo_383EDFC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
              }
              else
              {
                v34 = &items->obj.klass + size;
                v18->fields._size = size + 1;
                v34[4] = (Il2CppClass *)v21;
                sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v34 + 4), (int32_t)v21, v25, v26, v27, v28, v29, v30);
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          (System_Collections_Generic_List_Enumerator_object__o *)&v36,
          (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        if ( v18 )
        {
          v11 = System_Collections_Generic_List_object___ToArray(
                  v18,
                  (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData__ToArray__);
          goto LABEL_10;
        }
      }
      sub_1C7BD40(v7, v8);
    }
LABEL_9:
    v11 = (System_Object_array *)sub_1C7BB90(BuffEntity_BuffConditionIndividualityData___TypeInfo, 0);
LABEL_10:
    p_cachedConditionIndividualityDataArray->klass = (GrandQuestFolderBoardItem_c *)v11;
    sub_1C7BA8C(p_cachedConditionIndividualityDataArray, (int32_t)v11, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_4CEE3C2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C7BAE8(&System_Enum_TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&BuffList_MULTI_CONDITION_var);
    sub_1C7BAE8(&BuffList_MULTI_CONDITION_TypeInfo);
    sub_1C7BAE8(&System_Type_TypeInfo);
    byte_4CEE3C2 = 1;
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
    sub_1C7BD40(0, v7);
  Enumerator = System_Array__GetEnumerator(Values, 0);
  if ( !Enumerator )
    sub_1C7BD40(0, v8);
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
      v13 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v17 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(Enumerator, *(_QWORD *)(v17 + 8));
    if ( !v18 )
      sub_1C7BD40(0, v19);
    if ( *(Il2CppClass **)(*(_QWORD *)v18 + 64LL) != BuffList_MULTI_CONDITION_TypeInfo->_1.element_class )
    {
      sub_1C7C0DC(v18);
LABEL_40:
      sub_1C7BD40(v24, v25);
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
             (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        goto LABEL_29;
      }
    }
  }
  v22 = 0;
LABEL_29:
  v26 = sub_1C7BC24(Enumerator, System_IDisposable_TypeInfo);
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
      v31 = sub_1C51E70(v26, System_IDisposable_TypeInfo, 0);
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

  if ( (byte_4CEE3BF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Array_Empty_BuffEntity_OverwriteBuffIconData___);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C7BAE8(&Method_JsonManager_Deserialize_BuffEntity_OverwriteBuffIconData_____);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22769/*"overwriteIconIds"*/);
    byte_4CEE3BF = 1;
  }
  v4 = Method_System_Array_Empty_BuffEntity_OverwriteBuffIconData___;
  value = 0;
  v5 = *((_QWORD *)Method_System_Array_Empty_BuffEntity_OverwriteBuffIconData___ + 7);
  if ( !v5 )
  {
    sub_1C51BD8(Method_System_Array_Empty_BuffEntity_OverwriteBuffIconData___);
    v5 = v4[7];
  }
  v6 = *(_QWORD *)(v5 + 16);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C51B7C(inited);
  if ( !*(_DWORD *)(v6 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v6);
  v7 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C51B7C(inited);
  script = this->fields.script;
  if ( !script )
    sub_1C7BD40(v7, method);
  v9 = **(System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__o ***)(v7 + 184);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_22769/*"overwriteIconIds"*/,
         &value,
         (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v10 = value;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__o *)JsonManager__Deserialize_object_(
                                                                                           v10,
                                                                                           (const MethodInfo_31DEE64 *)Method_JsonManager_Deserialize_BuffEntity_OverwriteBuffIconData_____);
  }
  return v9;
}


int32_t BuffEntity__GetOverwriteClassIconChangeEffectIdAtBuffRemove(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CEE3BC & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22744/*"overwriteClassIconChangeEffectIdAtBuffRemove"*/);
    byte_4CEE3BC = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_22744/*"overwriteClassIconChangeEffectIdAtBuffRemove"*/, defVal, v3);
}


int32_t BuffEntity__GetPopupEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE38B & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_22948/*"popupEffectId"*/);
    byte_4CEE38B = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_22948/*"popupEffectId"*/, 0, v2);
}


int32_t BuffEntity__GetProgressSelfTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE39C & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_10800/*"ProgressSelfTurn"*/);
    byte_4CEE39C = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10800/*"ProgressSelfTurn"*/, -1, v2);
}


int32_t BuffEntity__GetProgressTurnCond(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE39D & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_10802/*"ProgressTurnCond"*/);
    byte_4CEE39D = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_10802/*"ProgressTurnCond"*/, -1, v2);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *BuffEntity__GetScriptIntArray(
        BuffEntity_o *this,
        System_String_o *key,
        System_Int32_array *defValues,
        uint16_t separator,
        const MethodInfo *method)
{
  System_String_o *Script_42405876; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  BuffEntity___c_c *v14; // x8
  System_Func_object__int__o *_9__26_0; // x20
  Il2CppObject *v16; // x21
  struct BuffEntity___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4CEE382 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C7BAE8(&System_Func_string__int__TypeInfo);
    sub_1C7BAE8(&Method_BuffEntity___c__GetScriptIntArray_b__26_0__);
    sub_1C7BAE8(&BuffEntity___c_TypeInfo);
    byte_4CEE382 = 1;
  }
  Script_42405876 = BuffEntity__getScript_42405876(this, key, 0, (const MethodInfo *)separator);
  IsNullOrEmpty = System_String__IsNullOrEmpty(Script_42405876, 0);
  if ( IsNullOrEmpty )
    return defValues;
  if ( !Script_42405876 )
    sub_1C7BD40(IsNullOrEmpty, v11);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(Script_42405876, separator, 0, 0);
  v14 = BuffEntity___c_TypeInfo;
  if ( !BuffEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffEntity___c_TypeInfo);
    v14 = BuffEntity___c_TypeInfo;
  }
  _9__26_0 = (System_Func_object__int__o *)v14->static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = BuffEntity___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__26_0 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(_9__26_0, v16, Method_BuffEntity___c__GetScriptIntArray_b__26_0__, 0);
    static_fields = BuffEntity___c_TypeInfo->static_fields;
    static_fields->__9__26_0 = (struct System_Func_string__int__o *)_9__26_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__26_0,
      (int32_t)_9__26_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v13,
                                                               (System_Func_TSource__TResult__o *)_9__26_0,
                                                               (const MethodInfo_31A5664 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v24,
           (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t BuffEntity__GetShowStateWarBoardEnemyEquip(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CEE3A8 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_12923/*"ShowStateWarBoardEnemyEquip"*/);
    byte_4CEE3A8 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_12923/*"ShowStateWarBoardEnemyEquip"*/, defVal, v3);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CEE3C1 & 1) == 0 )
  {
    sub_1C7BAE8(&BuffEntity_BuffConditionIndividualityData_TypeInfo);
    byte_4CEE3C1 = 1;
  }
  result = this->fields.cachedConditionIndividualityData;
  if ( !result )
  {
    if ( BuffEntity__isConditionIndividuality(this, method) )
    {
      script = this->fields.script;
      v5 = (BuffEntity_BuffConditionIndividualityData_o *)sub_1C7BD34(BuffEntity_BuffConditionIndividualityData_TypeInfo);
      BuffEntity_BuffConditionIndividualityData___ctor(v5, script, v6);
      this->fields.cachedConditionIndividualityData = v5;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields.cachedConditionIndividualityData,
        (int32_t)v5,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
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

  if ( (byte_4CEE3A5 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_13713/*"TargetIndiv"*/);
    byte_4CEE3A5 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_13713/*"TargetIndiv"*/, 0, 0x2Cu, v2);
}


int32_t BuffEntity__GetUnSubStateWhenContinueStatus(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE3B1 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_14948/*"UnSubStateWhenContinue"*/);
    byte_4CEE3B1 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_14948/*"UnSubStateWhenContinue"*/, 0, v2);
}


System_Int32_array *BuffEntity__GetUpBuffRateBuffIndivList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4CEE3A3 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_15229/*"UpBuffRateBuffIndiv"*/);
    byte_4CEE3A3 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15229/*"UpBuffRateBuffIndiv"*/, 0, 0x2Cu, v2);
}


System_Int32_array *BuffEntity__GetUpBuffRateBuffTypeList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_4CEE3A2 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_15230/*"UpBuffRateBuffType"*/);
    byte_4CEE3A2 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15230/*"UpBuffRateBuffType"*/, 0, 0x2Cu, v2);
}


bool BuffEntity__IsBattleEndNotReduceTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE39F & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_17153/*"battleEndNotReduceTurnFlag"*/);
    byte_4CEE39F = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17153/*"battleEndNotReduceTurnFlag"*/, 0, v2) > 0;
}


bool BuffEntity__IsCheckIndividualityForEachDamage(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE3B3 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_4441/*"CkIndvForEachDamage"*/);
    byte_4CEE3B3 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_4441/*"CkIndvForEachDamage"*/, 0, v2) == 1;
}


bool BuffEntity__IsConditionBuffValue(BuffEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4CEE389 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C7BAE8(&StringLiteral_18300/*"condBuffValue"*/);
    byte_4CEE389 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_18300/*"condBuffValue"*/,
                       (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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

  if ( (byte_4CEE3C0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C7BAE8(&BuffList_MULTI_CONDITION_TypeInfo);
    byte_4CEE3C0 = 1;
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
             (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                 (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    }
    sub_1C7BD40(v5, v6);
  }
  return 0;
}


bool BuffEntity__IsDelayRemoveExpiredOnPlayerTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE3B4 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18663/*"delayRemoveExpiredOnPlayerTurn"*/);
    byte_4CEE3B4 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18663/*"delayRemoveExpiredOnPlayerTurn"*/, 0, v2) == 1;
}


bool BuffEntity__IsDisableForciblyAddState(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE3AD & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_5291/*"DisableForciblyAddState"*/);
    byte_4CEE3AD = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5291/*"DisableForciblyAddState"*/, 0, v2) == 1;
}


bool BuffEntity__IsDisableMoveStateTurnChange(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE3AF & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_5292/*"DisableMoveStateTurnChange"*/);
    byte_4CEE3AF = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5292/*"DisableMoveStateTurnChange"*/, 0, v2) == 1;
}


bool BuffEntity__IsDrawShadowDespiteBattleCharaInvisible(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE3A0 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18783/*"drawShadowDespiteBattleCharaInvisible"*/);
    byte_4CEE3A0 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18783/*"drawShadowDespiteBattleCharaInvisible"*/, 0);
}


bool BuffEntity__IsExcludeUnSubStateIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE3B0 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_6307/*"ExcludeUnSubStateIndiv"*/);
    byte_4CEE3B0 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_6307/*"ExcludeUnSubStateIndiv"*/, 0, v2) == 1;
}


bool BuffEntity__IsIncludeIgnoreIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE3A6 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_7603/*"IncludeIgnoreIndividuality"*/);
    byte_4CEE3A6 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7603/*"IncludeIgnoreIndividuality"*/, 0, v2) == 1;
}


bool BuffEntity__IsIndvAddBuffPassive(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE3AE & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_7648/*"IndvAddBuffPassive"*/);
    byte_4CEE3AE = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7648/*"IndvAddBuffPassive"*/, 0, v2) == 1;
}


bool BuffEntity__IsMatchBattleSkillInfoCondition(
        BuffEntity_o *this,
        BattleSkillInfoData_o *skillInfoData,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4CEE3B9 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_19849/*"fromCommandSpell"*/);
    sub_1C7BAE8(&StringLiteral_19850/*"fromMasterEquip"*/);
    byte_4CEE3B9 = 1;
  }
  v5 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_19850/*"fromMasterEquip"*/, method);
  if ( v5 )
  {
    if ( !skillInfoData )
      goto LABEL_11;
    if ( skillInfoData->fields.type != 1 )
      return 0;
  }
  v5 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_19849/*"fromCommandSpell"*/, v7);
  if ( !v5 )
    return 1;
  if ( !skillInfoData )
LABEL_11:
    sub_1C7BD40(v5, v6);
  return skillInfoData->fields.type == 2;
}


bool BuffEntity__IsMatchSkillCountingCondition(BuffEntity_o *this, BattleData_o *data, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_4CEE3B7 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_24724/*"useFirstTimeInTurn"*/);
    byte_4CEE3B7 = 1;
  }
  v5 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_24724/*"useFirstTimeInTurn"*/, method);
  if ( !v5 )
    return 1;
  if ( !data )
    sub_1C7BD40(v5, v6);
  return data->fields.playerSkillCount == 1;
}


bool BuffEntity__IsNotPierce(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEE3BE & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_21115/*"isNotPierce"*/);
    byte_4CEE3BE = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21115/*"isNotPierce"*/, 0);
}


bool BuffEntity__TryGetIndividualityDisplayOnCard(
        BuffEntity_o *this,
        System_Int32_array_array **result,
        const MethodInfo *method)
{
  if ( (byte_4CEE3BD & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_20950/*"individualityDisplayOnCard"*/);
    byte_4CEE3BD = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_20950/*"individualityDisplayOnCard"*/,
           result,
           0);
}


bool BuffEntity__TryGetNotPierceIndividuality(
        BuffEntity_o *this,
        System_Int32_array_array **result,
        const MethodInfo *method)
{
  if ( (byte_4CEE3BA & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_9599/*"NotPierceIndividuality"*/);
    byte_4CEE3BA = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_9599/*"NotPierceIndividuality"*/,
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

  if ( (byte_4CEE392 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_21798/*"missText"*/);
    byte_4CEE392 = 1;
  }
  return BuffEntity__checkScript(this, (System_String_o *)StringLiteral_21798/*"missText"*/, v2);
}


bool BuffEntity__checkScript(BuffEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4CEE37F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4CEE37F = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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

  if ( (byte_4CEE38F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&StringLiteral_2288/*"AppId"*/);
    byte_4CEE38F = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_2288/*"AppId"*/,
           (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_2288/*"AppId"*/,
                                                                                (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_1C7BD40(Item, v4);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v6, v7);
      }
      else
      {
        sub_1C7C0DC(Item);
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

  if ( (byte_4CEE399 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_17006/*"atkPriority"*/);
    byte_4CEE399 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17006/*"atkPriority"*/, defVal, v3);
}


int32_t BuffEntity__getCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE397 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18039/*"checkIndvType"*/);
    byte_4CEE397 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18039/*"checkIndvType"*/, 2 * (this->fields.type == 155), v2);
  else
    return 2 * (this->fields.type == 155);
}


int32_t BuffEntity__getDamageRelease(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE390 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_5047/*"DamageRelease"*/);
    byte_4CEE390 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5047/*"DamageRelease"*/, 0, v2);
}


System_String_o *BuffEntity__getDamageReleaseText(BuffEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4CEE391 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_2759/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/);
    sub_1C7BAE8(&StringLiteral_11342/*"ReleaseText"*/);
    byte_4CEE391 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2759/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/, 0);
  if ( this->fields.script )
    return BuffEntity__getScript_42405876(this, (System_String_o *)StringLiteral_11342/*"ReleaseText"*/, result, v4);
  return result;
}


int32_t BuffEntity__getDefRelationPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CEE39A & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18642/*"defPriority"*/);
    byte_4CEE39A = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18642/*"defPriority"*/, defVal, v3);
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

  if ( (byte_4CEE38A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5928/*"EffectId"*/);
    byte_4CEE38A = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_5928/*"EffectId"*/,
           (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_5928/*"EffectId"*/,
                                                                                (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_1C7BD40(Item, v4);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v6, v7);
      }
      else
      {
        sub_1C7C0DC(Item);
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


int32_t BuffEntity__getGutsIcon(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE396 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_20082/*"gutsIconId"*/);
    byte_4CEE396 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_20082/*"gutsIconId"*/, 0, v2);
  else
    return 0;
}


System_String_o *BuffEntity__getGutsText(BuffEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4CEE394 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_2732/*"BATTLE_DEFAULT_GUTS_TEXT"*/);
    sub_1C7BAE8(&StringLiteral_20083/*"gutsText"*/);
    byte_4CEE394 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2732/*"BATTLE_DEFAULT_GUTS_TEXT"*/, 0);
  if ( this->fields.script )
    return BuffEntity__getScript_42405876(this, (System_String_o *)StringLiteral_20083/*"gutsText"*/, result, v4);
  return result;
}


System_Int32_array *BuffEntity__getIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.vals;
}


System_String_o *BuffEntity__getMissText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE393 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_21798/*"missText"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEE393 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_42405876(
             this,
             (System_String_o *)StringLiteral_21798/*"missText"*/,
             (System_String_o *)StringLiteral_1/*""*/,
             v2);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t BuffEntity__getRelationId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEE398 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_23242/*"relationId"*/);
    byte_4CEE398 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_23242/*"relationId"*/, 0, v2);
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
  if ( (byte_4CEE380 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C7BAE8(&long_TypeInfo);
    byte_4CEE380 = 1;
  }
  if ( !BuffEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C7BD40(script, v7);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v9, v10);
  sub_1C7C0DC(script);
  return (unsigned int)BuffEntity__getScript_42405876(v12, v13, v14, v15);
}


System_String_o *BuffEntity__getScript_42405876(
        BuffEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0

  if ( (byte_4CEE381 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_4CEE381 = 1;
  }
  if ( !BuffEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C7BD40(script, v7);
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

  if ( (byte_4CEE395 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_20084/*"gutsTextColor"*/);
    byte_4CEE395 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_20084/*"gutsTextColor"*/, 1, v2);
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

  if ( (byte_4CEE384 & 1) == 0 )
  {
    sub_1C7BAE8(&BuffList_CONDITIONS_TypeInfo);
    byte_4CEE384 = 1;
  }
  v10.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v10.monitor = (void *)-1LL;
  v11 = cond;
  v7 = System_Enum__ToString(&v10, 0);
  return BuffEntity__isCondition_42406732(this, v7, pal, v8);
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

  if ( (byte_4CEE388 & 1) == 0 )
  {
    sub_1C7BAE8(&BuffList_CONDITIONS_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4CEE388 = 1;
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
          (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
             (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                 (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    }
    sub_1C7BD40(v6, v7);
  }
  return 1;
}


bool BuffEntity__isCondition_42406732(BuffEntity_o *this, System_String_o *key, int32_t *pal, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x8
  BuffEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4CEE385 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C7BAE8(&long_TypeInfo);
    byte_4CEE385 = 1;
  }
  *pal = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_1C7BD40(Item, v8);
      }
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        v12 = *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11);
        LOBYTE(script) = 1;
        *pal = v12;
      }
      else
      {
        sub_1C7C0DC(Item);
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

  if ( (byte_4CEE386 & 1) == 0 )
  {
    sub_1C7BAE8(&BuffList_CONDITIONS_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C7BAE8(&BuffList_MULTI_CONDITION_TypeInfo);
    sub_1C7BAE8(&StringLiteral_18300/*"condBuffValue"*/);
    byte_4CEE386 = 1;
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
         (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
            (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
              (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                 (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                    (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                     (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                       (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
                {
                  return 1;
                }
                v8 = (Il2CppObject *)this->fields.script;
                if ( v8 )
                  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
                           (System_Collections_Generic_Dictionary_object__object__o *)v8,
                           (Il2CppObject *)StringLiteral_18300/*"condBuffValue"*/,
                           (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
              }
            }
          }
        }
LABEL_22:
        sub_1C7BD40(v8, v9);
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

  if ( (byte_4CEE387 & 1) == 0 )
  {
    sub_1C7BAE8(&BuffList_CONDITIONS_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4CEE387 = 1;
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
           (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    v6 = 1;
    if ( !v5 )
    {
      v7 = this->fields.script;
      v12 = 1;
      v11.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
      v11.monitor = (void *)-1LL;
      v8 = (Il2CppObject *)System_Enum__ToString(&v11, 0);
      if ( !v7 )
        sub_1C7BD40(v8, v9);
      return System_Collections_Generic_Dictionary_object__object___ContainsKey(
               (System_Collections_Generic_Dictionary_object__object__o *)v7,
               v8,
               (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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

  if ( (byte_4CEE383 & 1) == 0 )
  {
    sub_1C7BAE8(&Individuality_TypeInfo);
    byte_4CEE383 = 1;
  }
  type = this->fields.type;
  if ( !indiv || type != 76 )
    return indiv == 0 && type == 76;
  ckSelfIndv = this->fields.ckSelfIndv;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  return Individuality__CheckIndividualities(indiv, ckSelfIndv, 0);
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
  System_Func_object__int__o *_9__8_0; // x22
  Il2CppObject *v14; // x23
  struct BuffEntity_BuffConditionIndividualityData___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  struct System_Int32_array *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_String_o *StringValue; // x0
  GrandQuestFolderBoardItem_o *p_individualityTargetCount; // x19
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v38; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v39; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CEE3C6 & 1) == 0 )
  {
    sub_1C7BAE8(&BuffList_CONDITIONS_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    sub_1C7BAE8(&Method_System_Enum_TryParse_BuffList_CONDITIONS___);
    sub_1C7BAE8(&System_Enum_TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__get_Current__);
    sub_1C7BAE8(&System_Func_string__int__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    sub_1C7BAE8(&Method_BuffEntity_BuffConditionIndividualityData___c___ctor_b__8_0__);
    sub_1C7BAE8(&BuffEntity_BuffConditionIndividualityData___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_20949/*"individualityCondTargetType"*/);
    sub_1C7BAE8(&StringLiteral_7456/*"INDIVIDUALITIE_COUNT_ABOVE"*/);
    sub_1C7BAE8(&StringLiteral_7455/*"INDIVIDUALITIE"*/);
    sub_1C7BAE8(&StringLiteral_20951/*"individualityTargetCount"*/);
    sub_1C7BAE8(&StringLiteral_7457/*"INDIVIDUALITIE_COUNT_BELOW"*/);
    byte_4CEE3C6 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !conditionScript )
    goto LABEL_24;
  Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
           (System_Collections_Generic_Dictionary_object__object__o *)conditionScript,
           (const MethodInfo_34F216C *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
  if ( !Keys )
    goto LABEL_24;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
    &v38,
    Keys,
    (const MethodInfo_375F33C *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
  v39 = v38;
  while ( 1 )
  {
    v7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
           &v39,
           (const MethodInfo_35F1C94 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
    if ( !v7 )
    {
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
        &v39,
        (const MethodInfo_35F1C90 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
      return;
    }
    currentKey = v39.fields._currentKey;
    if ( !v39.fields._currentKey )
      sub_1C7BD40(v7, v8);
    if ( System_String__Contains((System_String_o *)v39.fields._currentKey, (System_String_o *)StringLiteral_7455/*"INDIVIDUALITIE"*/, 0) )
    {
      if ( !System_Enum_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
      if ( System_Enum__TryParse_Int32Enum_(
             (System_String_o *)currentKey,
             &this->fields.condition,
             (const MethodInfo_3176F38 *)Method_System_Enum_TryParse_BuffList_CONDITIONS___) )
      {
        break;
      }
    }
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
    &v39,
    (const MethodInfo_35F1C90 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
  v38.fields._dictionary = (struct System_Collections_Generic_Dictionary_TKey__TValue__o *)BuffList_CONDITIONS_TypeInfo;
  *(_QWORD *)&v38.fields._index = -1;
  LODWORD(v38.fields._currentKey) = this->fields.condition;
  v10 = (Il2CppObject *)System_Enum__ToString((System_Enum_o *)&v38, 0);
  Keys = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  (System_Collections_Generic_Dictionary_object__object__o *)conditionScript,
                                                                                  v10,
                                                                                  (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Keys
    || (Keys = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *, const MethodInfo *))Keys->klass->vtable._3_ToString.methodPtr)(
                                                                                        Keys,
                                                                                        Keys->klass->vtable._3_ToString.method)) == 0 )
  {
LABEL_24:
    sub_1C7BD40(Keys, v6);
  }
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split((System_String_o *)Keys, 0x2Cu, 0, 0);
  v12 = BuffEntity_BuffConditionIndividualityData___c_TypeInfo;
  if ( !BuffEntity_BuffConditionIndividualityData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffEntity_BuffConditionIndividualityData___c_TypeInfo);
    v12 = BuffEntity_BuffConditionIndividualityData___c_TypeInfo;
  }
  _9__8_0 = (System_Func_object__int__o *)v12->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BuffEntity_BuffConditionIndividualityData___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__8_0 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__8_0,
      v14,
      Method_BuffEntity_BuffConditionIndividualityData___c___ctor_b__8_0__,
      0);
    static_fields = BuffEntity_BuffConditionIndividualityData___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Func_string__int__o *)_9__8_0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v16, v17, v18, v19, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v11,
                                                               (System_Func_TSource__TResult__o *)_9__8_0,
                                                               (const MethodInfo_31A5664 *)Method_System_Linq_Enumerable_Select_string__int___);
  v23 = System_Linq_Enumerable__ToArray_int_(
          v22,
          (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.targetIndividualityArray = v23;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.targetIndividualityArray,
    (int32_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.conditionTargetType = EntityScriptUtil__GetIntValue(
                                       conditionScript,
                                       (System_String_o *)StringLiteral_20949/*"individualityCondTargetType"*/,
                                       0,
                                       0);
  StringValue = EntityScriptUtil__GetStringValue(conditionScript, (System_String_o *)StringLiteral_20951/*"individualityTargetCount"*/, 0, 0);
  this->fields.individualityTargetCount = StringValue;
  p_individualityTargetCount = (GrandQuestFolderBoardItem_o *)&this->fields.individualityTargetCount;
  sub_1C7BA8C(p_individualityTargetCount, (int32_t)StringValue, v32, v33, v34, v35, v36, v37);
  p_individualityTargetCount->fields.selectNum = EntityScriptUtil__GetIntValue(
                                                   conditionScript,
                                                   (System_String_o *)StringLiteral_7456/*"INDIVIDUALITIE_COUNT_ABOVE"*/,
                                                   0,
                                                   0);
  p_individualityTargetCount->fields.index = EntityScriptUtil__GetIntValue(
                                               conditionScript,
                                               (System_String_o *)StringLiteral_7457/*"INDIVIDUALITIE_COUNT_BELOW"*/,
                                               0,
                                               0);
}


bool BuffEntity_BuffConditionIndividualityData__CompareValue(
        BuffEntity_BuffConditionIndividualityData_o *this,
        int32_t totalCount,
        const MethodInfo *method)
{
  struct System_Func_int__int__bool__o *compareFunc; // x8
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w1
  struct System_Func_int__int__bool__o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  __int64 v20; // x0
  __int64 v21; // x1

  if ( (byte_4CEE3C7 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1747/*">=1"*/);
    byte_4CEE3C7 = 1;
  }
  compareFunc = this->fields.compareFunc;
  if ( !compareFunc )
  {
    if ( System_String__IsNullOrEmpty(this->fields.individualityTargetCount, 0) )
    {
      v12 = StringLiteral_1747/*">=1"*/;
      this->fields.individualityTargetCount = (struct System_String_o *)StringLiteral_1747/*">=1"*/;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.individualityTargetCount, v12, v6, v7, v8, v9, v10, v11);
    }
    v13 = BattleUtility__CheckValueSatisfiesCondition(this->fields.individualityTargetCount, 0);
    this->fields.compareFunc = v13;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.compareFunc, (int32_t)v13, v14, v15, v16, v17, v18, v19);
    v20 = BattleUtility__ParseConditionValue(this->fields.individualityTargetCount, 0);
    compareFunc = this->fields.compareFunc;
    this->fields.checkValue = v20;
    if ( !compareFunc )
      sub_1C7BD40(v20, v21);
  }
  return ((__int64 (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))compareFunc->fields.invoke_impl)(
           compareFunc->fields.method_code,
           (unsigned int)totalCount,
           (unsigned int)this->fields.checkValue,
           compareFunc->fields.method);
}


void BuffEntity_BuffConditionIndividualityData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEE3C8 & 1) == 0 )
  {
    sub_1C7BAE8(&BuffEntity_BuffConditionIndividualityData___c_TypeInfo);
    byte_4CEE3C8 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(BuffEntity_BuffConditionIndividualityData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BuffEntity_BuffConditionIndividualityData___c_TypeInfo->static_fields->__9 = (struct BuffEntity_BuffConditionIndividualityData___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)BuffEntity_BuffConditionIndividualityData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BuffEntity_BuffConditionIndividualityData___c___ctor(
        BuffEntity_BuffConditionIndividualityData___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BuffEntity_BuffConditionIndividualityData___c____ctor_b__8_0(
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_String_o *v16; // x21
  System_String_o *v17; // x0
  char v19; // w22
  __int64 v20; // x0
  intptr_t *v21; // x9
  bool v22; // w24

  if ( (byte_4CEE3C9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BuffEntity_CondBuffValueData_IsEqualOrHigher__);
    sub_1C7BAE8(&Method_BuffEntity_CondBuffValueData_IsEqualOrLower__);
    sub_1C7BAE8(&Method_BuffEntity_CondBuffValueData_IsEqual__);
    sub_1C7BAE8(&Method_BuffEntity_CondBuffValueData_IsHigher__);
    sub_1C7BAE8(&Method_BuffEntity_CondBuffValueData_IsLower__);
    sub_1C7BAE8(&Method_BuffEntity_CondBuffValueData_IsNotEqual__);
    sub_1C7BAE8(&System_Func_int__int__bool__TypeInfo);
    sub_1C7BAE8(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1527/*"<>"*/);
    sub_1C7BAE8(&StringLiteral_1738/*"="*/);
    sub_1C7BAE8(&StringLiteral_16015/*"[^0-9]"*/);
    sub_1C7BAE8(&StringLiteral_1491/*"<"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_1744/*">"*/);
    sub_1C7BAE8(&StringLiteral_340/*"!="*/);
    byte_4CEE3C9 = 1;
  }
  compareFunc = this->fields.compareFunc;
  if ( !compareFunc )
  {
    condValue = this->fields.condValue;
    if ( !condValue )
      goto LABEL_24;
    if ( System_String__Contains(condValue, (System_String_o *)StringLiteral_340/*"!="*/, 0) )
      goto LABEL_8;
    condValue = this->fields.condValue;
    if ( !condValue )
      goto LABEL_24;
    if ( System_String__Contains(condValue, (System_String_o *)StringLiteral_1527/*"<>"*/, 0) )
    {
LABEL_8:
      v7 = sub_1C7BD34(System_Func_int__int__bool__TypeInfo);
      v8 = (intptr_t *)&Method_BuffEntity_CondBuffValueData_IsNotEqual__;
      v9 = (System_Func_int__int__bool__o *)v7;
      goto LABEL_9;
    }
    condValue = this->fields.condValue;
    if ( !condValue )
      goto LABEL_24;
    condValue = (System_String_o *)System_String__Contains(condValue, (System_String_o *)StringLiteral_1738/*"="*/, 0);
    if ( !this->fields.condValue )
      goto LABEL_24;
    v19 = (char)condValue;
    if ( System_String__Contains(this->fields.condValue, (System_String_o *)StringLiteral_1744/*">"*/, 0) )
    {
      v20 = sub_1C7BD34(System_Func_int__int__bool__TypeInfo);
      v8 = (intptr_t *)&Method_BuffEntity_CondBuffValueData_IsHigher__;
      v21 = (intptr_t *)&Method_BuffEntity_CondBuffValueData_IsEqualOrHigher__;
      v9 = (System_Func_int__int__bool__o *)v20;
    }
    else
    {
      condValue = this->fields.condValue;
      if ( !condValue )
        goto LABEL_24;
      v22 = System_String__Contains(condValue, (System_String_o *)StringLiteral_1491/*"<"*/, 0);
      v9 = (System_Func_int__int__bool__o *)sub_1C7BD34(System_Func_int__int__bool__TypeInfo);
      if ( !v22 )
      {
        v8 = (intptr_t *)&Method_BuffEntity_CondBuffValueData_IsEqual__;
        goto LABEL_9;
      }
      v8 = (intptr_t *)&Method_BuffEntity_CondBuffValueData_IsLower__;
      v21 = (intptr_t *)&Method_BuffEntity_CondBuffValueData_IsEqualOrLower__;
    }
    if ( (v19 & 1) != 0 )
      v8 = v21;
LABEL_9:
    System_Func_int__int__bool____ctor(v9, 0, *v8, 0);
    this->fields.compareFunc = v9;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.compareFunc, (int32_t)v9, v10, v11, v12, v13, v14, v15);
    v16 = this->fields.condValue;
    if ( !System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo);
    v17 = System_Text_RegularExpressions_Regex__Replace(
            v16,
            (System_String_o *)StringLiteral_16015/*"[^0-9]"*/,
            (System_String_o *)StringLiteral_1/*""*/,
            0);
    condValue = (System_String_o *)System_Int32__TryParse(v17, &this->fields.checkValue, 0);
    compareFunc = this->fields.compareFunc;
    if ( compareFunc )
      return ((__int64 (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))compareFunc->fields.invoke_impl)(
               compareFunc->fields.method_code,
               (unsigned int)totalValue,
               (unsigned int)this->fields.checkValue,
               compareFunc->fields.method);
LABEL_24:
    sub_1C7BD40(condValue, *(_QWORD *)&totalValue);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CEE3CA & 1) == 0 )
  {
    sub_1C7BAE8(&BuffEntity___c_TypeInfo);
    byte_4CEE3CA = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(BuffEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BuffEntity___c_TypeInfo->static_fields->__9 = (struct BuffEntity___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)BuffEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BuffEntity___c___ctor(BuffEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BuffEntity___c___GetIconId_b__21_0(
        BuffEntity___c_o *this,
        BuffEntity_OverwriteBuffIconData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C7BD40(this, 0);
  return data->fields.priority;
}


int32_t BuffEntity___c___GetScriptIntArray_b__26_0(
        BuffEntity___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0);
}