void BuffEntity___ctor(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970559 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_5970559 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
}


bool BuffEntity__ContainsIndividualityToActivate(
        BuffEntity_o *this,
        System_Int32_array *individualityArray,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t Script; // w1

  if ( (byte_597054A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&StringLiteral_7759/*"INDIVIDUALITIE"*/);
    byte_597054A = 1;
  }
  Script = BuffEntity__getScript(this, (System_String_o *)StringLiteral_7759/*"INDIVIDUALITIE"*/, 0, v3);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)individualityArray,
           Script,
           (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
}


int32_t BuffEntity__CreatePrimaryKey(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_Nullable_float__o BuffEntity__GetBattleCharaAlpha(BuffEntity_o *this, const MethodInfo *method)
{
  float IntValue; // s0
  System_Nullable_float__o v4; // x0
  System_Nullable_float__o v6; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970533 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&StringLiteral_17796/*"battleCharaAlpha"*/);
    byte_5970533 = 1;
  }
  if ( EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17796/*"battleCharaAlpha"*/, 0) )
  {
    IntValue = (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17796/*"battleCharaAlpha"*/, 0, 0);
    v4 = (System_Nullable_float__o)&v6;
    v6 = 0;
    System_Nullable_float____ctor(
      v4,
      IntValue / 1000.0,
      (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
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

  if ( (byte_5970544 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18400/*"buffStateNoticeName"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5970544 = 1;
  }
  return BuffEntity__getScript_48836904(
           this,
           (System_String_o *)StringLiteral_18400/*"buffStateNoticeName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t BuffEntity__GetCardEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970530 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4495/*"CardEffectId"*/);
    byte_5970530 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_4495/*"CardEffectId"*/, 0, v2);
}


int32_t BuffEntity__GetCkIndvCountAbove(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_597053B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18768/*"ckIndvCountAbove"*/);
    byte_597053B = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18768/*"ckIndvCountAbove"*/, defVal, v3);
}


int32_t BuffEntity__GetCkIndvCountBelow(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_597053C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18769/*"ckIndvCountBelow"*/);
    byte_597053C = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18769/*"ckIndvCountBelow"*/, defVal, v3);
}


System_Int32_array *BuffEntity__GetCkOpCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_597053E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18770/*"ckOpCountIndividuality"*/);
    byte_597053E = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_18770/*"ckOpCountIndividuality"*/, 0, 0x2Cu, v2);
}


System_Int32_array *BuffEntity__GetCkSelfCountIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_597053D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18771/*"ckSelfCountIndividuality"*/);
    byte_597053D = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_18771/*"ckSelfCountIndividuality"*/, 0, 0x2Cu, v2);
}


int32_t BuffEntity__GetClassIconChangeEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_597054D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18780/*"classIconChangeEffectId"*/);
    byte_597054D = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18780/*"classIconChangeEffectId"*/, -1, v2);
}


BuffEntity_CondBuffValueData_array *BuffEntity__GetCondBuffValueArray(BuffEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  long double v5; // q0
  Il2CppObject *v6; // x19
  BuffEntity_CondBuffValueData_array *result; // x0
  _QWORD *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_5970556 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_BuffEntity_CondBuffValueData___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&Method_JsonManager_Deserialize_BuffEntity_CondBuffValueData_____);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&StringLiteral_19013/*"condBuffValue"*/);
    byte_5970556 = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( !script )
    sub_2213CDC(0, method);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_19013/*"condBuffValue"*/,
          &value,
          (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    goto LABEL_8;
  v6 = value;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v4);
  result = (BuffEntity_CondBuffValueData_array *)JsonManager__Deserialize_object_(
                                                   v6,
                                                   (const MethodInfo_38D38E4 *)Method_JsonManager_Deserialize_BuffEntity_CondBuffValueData_____);
  if ( !result )
  {
LABEL_8:
    v8 = Method_System_Array_Empty_BuffEntity_CondBuffValueData___;
    v9 = *((_QWORD *)Method_System_Array_Empty_BuffEntity_CondBuffValueData___ + 7);
    if ( !v9 )
    {
      sub_224B964(Method_System_Array_Empty_BuffEntity_CondBuffValueData___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
      v10 = sub_224B908(v5);
    if ( !*(_DWORD *)(v10 + 228) )
      *(__n128 *)&v5 = j_il2cpp_runtime_class_init_0(v10, v4);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
      v11 = sub_224B908(v5);
    return **(BuffEntity_CondBuffValueData_array ***)(v11 + 184);
  }
  return result;
}


int32_t BuffEntity__GetCondGrantorRelativePosition(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970558 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19014/*"condGrantorRelativePosition"*/);
    byte_5970558 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19014/*"condGrantorRelativePosition"*/, 0, 0);
}


System_String_o *BuffEntity__GetCounterMessage(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970539 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5012/*"CounterMessage"*/);
    byte_5970539 = 1;
  }
  return BuffEntity__getScript_48836904(this, (System_String_o *)StringLiteral_5012/*"CounterMessage"*/, 0, v2);
}


int32_t BuffEntity__GetDefCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  return 2 * (this->fields.type == 155);
}


int32_t BuffEntity__GetDisplayPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5970547 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5491/*"DisplayPriority"*/);
    byte_5970547 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5491/*"DisplayPriority"*/, defVal, v3);
}


System_String_o *BuffEntity__GetEffectText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_597051F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19798/*"effectText"*/);
    byte_597051F = 1;
  }
  return BuffEntity__getScript_48836904(this, (System_String_o *)StringLiteral_19798/*"effectText"*/, 0, v2);
}


int32_t BuffEntity__GetExecutePriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5970548 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20220/*"executePriority"*/);
    byte_5970548 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_20220/*"executePriority"*/, defVal, v3);
}


int32_t BuffEntity__GetExtendLowerLimit(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_597052D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20230/*"extendLowerLimit"*/);
    byte_597052D = 1;
  }
  return -BuffEntity__getScript(this, (System_String_o *)StringLiteral_20230/*"extendLowerLimit"*/, 0, v2);
}


int32_t BuffEntity__GetGuardEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_597051E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20862/*"guardEffectId"*/);
    byte_597051E = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_20862/*"guardEffectId"*/, 0, v2);
}


int32_t BuffEntity__GetIconId(BuffEntity_o *this, const MethodInfo *method)
{
  int32_t iconId; // w19
  System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__o *OverwriteBuffIconDataArray; // x0
  __int64 v5; // x1
  BuffEntity___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x20
  struct BuffEntity___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__22_0; // x21
  Il2CppObject *v10; // x22
  struct BuffEntity___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v18; // x0
  __int64 v19; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v21; // x20
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  __int64 IsOpen; // x0
  __int64 v26; // x1
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x20
  __int64 v36; // x24
  int v37; // w8
  int v38; // w19
  char v39; // w26
  __int64 v40; // x22
  __int64 v41; // x0
  __int64 v42; // x1
  int32_t v43; // w21
  __int64 v44; // x8
  int32_t v45; // w22
  int64_t v46; // x23
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  int32_t v52; // [xsp+4h] [xbp-7Ch]
  __int64 v53; // [xsp+18h] [xbp-68h]

  if ( (byte_597050E & 1) == 0 )
  {
    sub_2213A60(&BattleData_TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_EnumUtility_CastToEnum_CondType_Kind___);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_BuffEntity_OverwriteBuffIconData__int___);
    sub_2213A60(&System_Func_BuffEntity_OverwriteBuffIconData__int__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_BuffEntity_OverwriteBuffIconData__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_BuffEntity___c__GetIconId_b__22_0__);
    sub_2213A60(&BuffEntity___c_TypeInfo);
    byte_597050E = 1;
  }
  iconId = this->fields.iconId;
  OverwriteBuffIconDataArray = BuffEntity__GetOverwriteBuffIconDataArray(this, method);
  v6 = BuffEntity___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)OverwriteBuffIconDataArray;
  v52 = iconId;
  if ( !*(&BuffEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BuffEntity___c_TypeInfo, v5);
    v6 = BuffEntity___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__22_0 = (System_Func_object__int__o *)static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v5);
      static_fields = BuffEntity___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__22_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BuffEntity_OverwriteBuffIconData__int__TypeInfo);
    System_Func_object__int____ctor(_9__22_0, v10, Method_BuffEntity___c__GetIconId_b__22_0__, 0);
    v11 = BuffEntity___c_TypeInfo->static_fields;
    v11->__9__22_0 = (struct System_Func_BuffEntity_OverwriteBuffIconData__int__o *)_9__22_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__22_0, (int32_t)_9__22_0, v12, v13, v14, v15, v16, v17);
  }
  v18 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v7,
          (System_Func_TSource__TKey__o *)_9__22_0,
          (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_BuffEntity_OverwriteBuffIconData__int___);
  if ( !v18 )
    sub_2213CDC(0, v19);
  klass = v18->klass;
  v21 = v18;
  v22 = *(unsigned __int16 *)&v18->klass->_2.rank;
  if ( *(_WORD *)&v18->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_14;
    }
    v24 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v24 = sub_224BC3C(v18, System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__TypeInfo, 0);
  }
  IsOpen = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v24)(
             v21,
             *(_QWORD *)(v24 + 8));
  v53 = IsOpen;
  while ( 1 )
  {
    if ( !v53 )
      sub_2213CDC(IsOpen, v26);
    v27 = *(_QWORD *)v53;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_22;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_22:
      v30 = sub_224BC3C(v53, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v53, *(_QWORD *)(v30 + 8)) & 1) == 0 )
      break;
    v31 = *(_QWORD *)v53;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BuffEntity_OverwriteBuffIconData__c **)v33 - 1) != System_Collections_Generic_IEnumerator_BuffEntity_OverwriteBuffIconData__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_29;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_29:
      v34 = sub_224BC3C(v53, System_Collections_Generic_IEnumerator_BuffEntity_OverwriteBuffIconData__TypeInfo, 0);
    }
    IsOpen = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v53, *(_QWORD *)(v34 + 8));
    v35 = IsOpen;
    if ( !IsOpen )
      sub_2213CDC(0, v26);
    v36 = *(_QWORD *)(IsOpen + 24);
    if ( !v36 )
      sub_2213CDC(IsOpen, v26);
    v37 = *(_DWORD *)(v36 + 24);
    if ( v37 >= 1 )
    {
      v38 = 0;
      v39 = 1;
      do
      {
        if ( v38 >= (unsigned int)v37 )
          sub_2213CE4(IsOpen);
        v40 = *(_QWORD *)(v36 + 8LL * v38 + 32);
        if ( !v40 )
          sub_2213CDC(IsOpen, v26);
        v41 = EnumUtility__CastToEnum_Int32Enum_(
                *(System_String_o **)(v40 + 16),
                0,
                (const MethodInfo_3861A88 *)Method_EnumUtility_CastToEnum_CondType_Kind___);
        v43 = v41;
        if ( (_DWORD)v41 == 81 )
        {
          if ( !*(&BattleData_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v42);
          IsOpen = BattleData__get_BattleGenderType(0) == *(_DWORD *)(v40 + 24);
        }
        else
        {
          v44 = *(_QWORD *)(v40 + 32);
          if ( !v44 )
            sub_2213CDC(v41, v42);
          if ( !*(_DWORD *)(v44 + 24) )
            sub_2213CE4(v41);
          v45 = *(_DWORD *)(v40 + 24);
          v46 = *(int *)(v44 + 32);
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v42);
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
  v47 = *(_QWORD *)v53;
  v48 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
  {
    v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_53;
    }
    v50 = v47 + 16LL * *v49 + 312;
  }
  else
  {
LABEL_53:
    v50 = sub_224BC3C(v53, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v50)(v53, *(_QWORD *)(v50 + 8));
  return v52;
}


int32_t BuffEntity__GetMaxBuffRate(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970536 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9342/*"MaxBuffRate"*/);
    byte_5970536 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_9342/*"MaxBuffRate"*/, -1, v2);
}


System_String_o *BuffEntity__GetMotionName(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970520 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22760/*"motionName"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5970520 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_48836904(this, (System_String_o *)StringLiteral_22760/*"motionName"*/, 0, v2);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


BuffEntity_BuffConditionIndividualityData_array *BuffEntity__GetMultiConditionIndividualityDataArray(
        BuffEntity_o *this,
        const MethodInfo *method)
{
  BuffEntity_BuffConditionIndividualityData_array *result; // x0
  MissionNaviTransitionBoardItem_o *p_cachedConditionIndividualityDataArray; // x19
  int32_t MultiConditionType; // w0
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  __int64 naturalAligment; // x10
  System_Object_array *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_List_object__o *v18; // x20
  Il2CppObject *current; // x22
  __int64 v20; // x10
  BuffEntity_BuffConditionIndividualityData_o *v21; // x21
  const MethodInfo *v22; // x2
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_5970555 & 1) == 0 )
  {
    sub_2213A60(&BuffEntity_BuffConditionIndividualityData___TypeInfo);
    sub_2213A60(&BuffEntity_BuffConditionIndividualityData_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_object__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData__TypeInfo);
    sub_2213A60(&BuffList_MULTI_CONDITION_TypeInfo);
    byte_5970555 = 1;
  }
  value = 0;
  p_cachedConditionIndividualityDataArray = (MissionNaviTransitionBoardItem_o *)&this->fields.cachedConditionIndividualityDataArray;
  result = this->fields.cachedConditionIndividualityDataArray;
  memset(&v36, 0, sizeof(v36));
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
          (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
        v9 = value;
        if ( !value )
          goto LABEL_9;
        naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
        if ( value->klass->_2.naturalAligment < (unsigned int)naturalAligment
          || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
        {
          goto LABEL_9;
        }
        v18 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v18,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData___ctor__);
        System_Collections_Generic_List_object___GetEnumerator(
          &v35,
          (System_Collections_Generic_List_object__o *)v9,
          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
        v36 = v35;
        v35.fields._list = 0;
        *(_QWORD *)&v35.fields._index = &v36;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  (System_Collections_Generic_List_Enumerator_object__o *)&v36,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
        {
          current = v36.fields._current;
          if ( v36.fields._current )
          {
            v20 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
            if ( v36.fields._current->klass->_2.naturalAligment >= (unsigned int)v20
              && (System_Collections_Generic_Dictionary_string__object__c *)v36.fields._current->klass->_2.typeHierarchy[v20 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
            {
              v21 = (BuffEntity_BuffConditionIndividualityData_o *)sub_2213CCC(BuffEntity_BuffConditionIndividualityData_TypeInfo);
              BuffEntity_BuffConditionIndividualityData___ctor(
                v21,
                (System_Collections_Generic_Dictionary_string__object__o *)current,
                v22);
              if ( !v18
                || (items = v18->fields._items,
                    v32 = Method_System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData__Add__,
                    ++v18->fields._version,
                    !items) )
              {
                sub_2213CDC(v23, v24);
              }
              size = v18->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v18,
                  (Il2CppObject *)v21,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
              }
              else
              {
                v34 = &items->obj.klass + size;
                v18->fields._size = size + 1;
                v34[4] = (Il2CppClass *)v21;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)v21, v25, v26, v27, v28, v29, v30);
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          (System_Collections_Generic_List_Enumerator_object__o *)&v36,
          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
        if ( v18 )
        {
          v11 = System_Collections_Generic_List_object___ToArray(
                  v18,
                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BuffEntity_BuffConditionIndividualityData__ToArray__);
          goto LABEL_10;
        }
      }
      sub_2213CDC(v7, v8);
    }
LABEL_9:
    v11 = (System_Object_array *)sub_2213B20(BuffEntity_BuffConditionIndividualityData___TypeInfo, 0);
LABEL_10:
    p_cachedConditionIndividualityDataArray->klass = (MissionNaviTransitionBoardItem_c *)v11;
    sub_2213A04(p_cachedConditionIndividualityDataArray, (int32_t)v11, v12, v13, v14, v15, v16, v17);
    return (BuffEntity_BuffConditionIndividualityData_array *)p_cachedConditionIndividualityDataArray->klass;
  }
  return result;
}


int32_t BuffEntity__GetMultiConditionType(BuffEntity_o *this, const MethodInfo *method)
{
  Il2CppType *v3; // x20
  System_RuntimeTypeHandle_o v4; // x0
  __int64 v5; // x1
  System_Type_o *TypeFromHandle; // x20
  System_Array_o *Values; // x0
  __int64 v8; // x1
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v10; // x1
  System_Collections_IEnumerator_o *v11; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v13; // x9
  int *p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_IEnumerator_o *v18; // x20
  System_Collections_IEnumerator_c *v19; // x8
  __int64 v20; // x9
  System_Collections_IEnumerator_c **v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  int32_t v27; // w20
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x21
  Il2CppObject *v29; // x0
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x21
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  System_Enum_o v37; // [xsp+0h] [xbp-80h] BYREF
  int v38; // [xsp+10h] [xbp-70h]
  __int64 v39; // [xsp+18h] [xbp-68h]
  System_Collections_IEnumerator_o **v40; // [xsp+20h] [xbp-60h]
  __int64 *v41; // [xsp+28h] [xbp-58h]
  __int64 v42; // [xsp+30h] [xbp-50h] BYREF
  System_Collections_IEnumerator_o *v43; // [xsp+38h] [xbp-48h] BYREF

  if ( (byte_5970554 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&BuffList_MULTI_CONDITION_var);
    sub_2213A60(&BuffList_MULTI_CONDITION_TypeInfo);
    byte_5970554 = 1;
  }
  v3 = BuffList_MULTI_CONDITION_var;
  v42 = 0;
  v43 = 0;
  if ( !*(_DWORD *)(qword_59843E0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_59843E0, method);
  v4.fields.value = (intptr_t)v3;
  TypeFromHandle = System_Type__GetTypeFromHandle(v4, 0);
  if ( !*(_DWORD *)(qword_5984398 + 228) )
    j_il2cpp_runtime_class_init_0(qword_5984398, v5);
  Values = System_Enum__GetValues(TypeFromHandle, 0);
  if ( !Values )
    sub_2213CDC(0, v8);
  Enumerator = System_Array__GetEnumerator(Values, 0);
  v43 = Enumerator;
  v39 = 0;
  v40 = &v43;
  v41 = &v42;
  if ( !Enumerator )
LABEL_30:
    sub_2213CDC(Enumerator, v10);
  v11 = Enumerator;
  while ( 1 )
  {
    klass = v11->klass;
    v13 = *(unsigned __int16 *)&v11->klass->_2.rank;
    if ( *(_WORD *)&v11->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_14;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_14:
      v15 = sub_224BC3C(v11, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(v11, *(_QWORD *)(v15 + 8));
    if ( (v16 & 1) == 0 )
      break;
    v18 = v43;
    if ( !v43 )
      goto LABEL_42;
    v19 = v43->klass;
    v20 = *(unsigned __int16 *)&v43->klass->_2.rank;
    if ( *(_WORD *)&v43->klass->_2.rank )
    {
      v21 = (System_Collections_IEnumerator_c **)&v19->_1.interfaceOffsets->offset;
      while ( *(v21 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        v21 += 2;
        if ( !v20 )
          goto LABEL_22;
      }
      v22 = (__int64)&v19->vtable[*(_DWORD *)v21 + 1];
    }
    else
    {
LABEL_22:
      v22 = sub_224BC3C(v43, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8));
    if ( !v23 )
      sub_2213CDC(0, v24);
    if ( *(Il2CppClass **)(*(_QWORD *)v23 + 64LL) != BuffList_MULTI_CONDITION_TypeInfo->_1.element_class )
    {
      sub_221405C(v23, BuffList_MULTI_CONDITION_TypeInfo, v25, v26);
LABEL_42:
      sub_2213CDC(v16, v17);
    }
    Enumerator = (System_Collections_IEnumerator_o *)j_il2cpp_object_unbox_0(
                                                       v23,
                                                       BuffList_MULTI_CONDITION_TypeInfo,
                                                       v25,
                                                       v26);
    v27 = (int32_t)Enumerator->klass;
    if ( LODWORD(Enumerator->klass) )
    {
      script = this->fields.script;
      v38 = (int)Enumerator->klass;
      v37.klass = (System_Enum_c *)BuffList_MULTI_CONDITION_TypeInfo;
      v37.monitor = (void *)-1LL;
      v29 = (Il2CppObject *)System_Enum__ToString(&v37, 0);
      if ( !script )
        sub_2213CDC(v29, v29);
      Enumerator = (System_Collections_IEnumerator_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                         (System_Collections_Generic_Dictionary_object__object__o *)script,
                                                         v29,
                                                         (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)Enumerator & 1) != 0 )
        goto LABEL_32;
    }
    v11 = v43;
    if ( !v43 )
      goto LABEL_30;
  }
  v27 = 0;
LABEL_32:
  v30 = sub_2213BB4(v43, System_IDisposable_TypeInfo);
  v42 = v30;
  if ( v30 )
  {
    v31 = *(_QWORD *)v30;
    v32 = v30;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_37;
      }
      v35 = v31 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_37:
      v35 = sub_224BC3C(v30, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v35)(v32, *(_QWORD *)(v35 + 8));
  }
  return v27;
}


System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__o *BuffEntity__GetOverwriteBuffIconDataArray(
        BuffEntity_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  _QWORD *v4; // x20
  __int64 v5; // x8
  __int64 v6; // x0
  __int64 v7; // x0
  System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__o **v8; // x11
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__o *v10; // x19
  __int64 v11; // x1
  Il2CppObject *v12; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970551 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_BuffEntity_OverwriteBuffIconData___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&Method_JsonManager_Deserialize_BuffEntity_OverwriteBuffIconData_____);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&StringLiteral_23700/*"overwriteIconIds"*/);
    byte_5970551 = 1;
  }
  v4 = Method_System_Array_Empty_BuffEntity_OverwriteBuffIconData___;
  value = 0;
  v5 = *((_QWORD *)Method_System_Array_Empty_BuffEntity_OverwriteBuffIconData___ + 7);
  if ( !v5 )
  {
    sub_224B964(Method_System_Array_Empty_BuffEntity_OverwriteBuffIconData___);
    v5 = v4[7];
  }
  v6 = *(_QWORD *)(v5 + 16);
  if ( (*(_WORD *)(v6 + 309) & 1) == 0 )
    v6 = sub_224B908(v2);
  if ( !*(_DWORD *)(v6 + 228) )
    *(__n128 *)&v2 = j_il2cpp_runtime_class_init_0(v6, method);
  v7 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_224B908(v2);
  if ( !this->fields.script )
    sub_2213CDC(v7, method);
  v8 = *(System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__o ***)(v7 + 184);
  script = this->fields.script;
  v10 = *v8;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_23700/*"overwriteIconIds"*/,
         &value,
         (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v12 = value;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v11);
    return (System_Collections_Generic_IEnumerable_BuffEntity_OverwriteBuffIconData__o *)JsonManager__Deserialize_object_(
                                                                                           v12,
                                                                                           (const MethodInfo_38D38E4 *)Method_JsonManager_Deserialize_BuffEntity_OverwriteBuffIconData_____);
  }
  return v10;
}


int32_t BuffEntity__GetOverwriteClassIconChangeEffectIdAtBuffRemove(
        BuffEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_597054E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23674/*"overwriteClassIconChangeEffectIdAtBuffRemove"*/);
    byte_597054E = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_23674/*"overwriteClassIconChangeEffectIdAtBuffRemove"*/, defVal, v3);
}


int32_t BuffEntity__GetPopupEffectId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_597051D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23908/*"popupEffectId"*/);
    byte_597051D = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_23908/*"popupEffectId"*/, 0, v2);
}


int32_t BuffEntity__GetProgressSelfTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_597052E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11228/*"ProgressSelfTurn"*/);
    byte_597052E = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_11228/*"ProgressSelfTurn"*/, -1, v2);
}


int32_t BuffEntity__GetProgressTurnCond(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_597052F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11230/*"ProgressTurnCond"*/);
    byte_597052F = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_11230/*"ProgressTurnCond"*/, -1, v2);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *BuffEntity__GetScriptIntArray(
        BuffEntity_o *this,
        System_String_o *key,
        System_Int32_array *defValues,
        uint16_t separator,
        const MethodInfo *method)
{
  System_String_o *Script_48836904; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v11; // x1
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x19
  BuffEntity___c_c *v15; // x8
  struct BuffEntity___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__27_0; // x20
  Il2CppObject *v18; // x21
  struct BuffEntity___c_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_5970512 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&System_Func_string__int__TypeInfo);
    sub_2213A60(&Method_BuffEntity___c__GetScriptIntArray_b__27_0__);
    sub_2213A60(&BuffEntity___c_TypeInfo);
    byte_5970512 = 1;
  }
  Script_48836904 = BuffEntity__getScript_48836904(this, key, 0, (const MethodInfo *)separator);
  IsNullOrEmpty = System_String__IsNullOrEmpty(Script_48836904, 0);
  if ( IsNullOrEmpty )
    return defValues;
  if ( !Script_48836904 )
    sub_2213CDC(IsNullOrEmpty, v11);
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(Script_48836904, separator, 0, 0);
  v15 = BuffEntity___c_TypeInfo;
  if ( !*(&BuffEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BuffEntity___c_TypeInfo, v13);
    v15 = BuffEntity___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__27_0 = (System_Func_object__int__o *)static_fields->__9__27_0;
  if ( !_9__27_0 )
  {
    if ( !*(&v15->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v15, v13);
      static_fields = BuffEntity___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__27_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(_9__27_0, v18, Method_BuffEntity___c__GetScriptIntArray_b__27_0__, 0);
    v19 = BuffEntity___c_TypeInfo->static_fields;
    v19->__9__27_0 = (struct System_Func_string__int__o *)_9__27_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v19->__9__27_0, (int32_t)_9__27_0, v20, v21, v22, v23, v24, v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v14,
                                                               (System_Func_TSource__TResult__o *)_9__27_0,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v26,
           (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t BuffEntity__GetShowStateWarBoardEnemyEquip(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_597053A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13411/*"ShowStateWarBoardEnemyEquip"*/);
    byte_597053A = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_13411/*"ShowStateWarBoardEnemyEquip"*/, defVal, v3);
}


BuffEntity_BuffConditionIndividualityData_o *BuffEntity__GetSingleConditionIndividualityData(
        BuffEntity_o *this,
        const MethodInfo *method)
{
  BuffEntity_BuffConditionIndividualityData_o *result; // x0
  System_Collections_Generic_Dictionary_string__object__o *script; // x21
  BuffEntity_BuffConditionIndividualityData_o *v5; // x22
  const MethodInfo *v6; // x2
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5970553 & 1) == 0 )
  {
    sub_2213A60(&BuffEntity_BuffConditionIndividualityData_TypeInfo);
    byte_5970553 = 1;
  }
  result = this->fields.cachedConditionIndividualityData;
  if ( !result )
  {
    if ( BuffEntity__isConditionIndividuality(this, method) )
    {
      script = this->fields.script;
      v5 = (BuffEntity_BuffConditionIndividualityData_o *)sub_2213CCC(BuffEntity_BuffConditionIndividualityData_TypeInfo);
      BuffEntity_BuffConditionIndividualityData___ctor(v5, script, v6);
      this->fields.cachedConditionIndividualityData = v5;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.cachedConditionIndividualityData,
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

  if ( (byte_5970537 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_14221/*"TargetIndiv"*/);
    byte_5970537 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_14221/*"TargetIndiv"*/, 0, 0x2Cu, v2);
}


int32_t BuffEntity__GetUnSubStateWhenContinueStatus(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970543 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_15486/*"UnSubStateWhenContinue"*/);
    byte_5970543 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_15486/*"UnSubStateWhenContinue"*/, 0, v2);
}


System_Int32_array *BuffEntity__GetUpBuffRateBuffIndivList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_5970535 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_15777/*"UpBuffRateBuffIndiv"*/);
    byte_5970535 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15777/*"UpBuffRateBuffIndiv"*/, 0, 0x2Cu, v2);
}


System_Int32_array *BuffEntity__GetUpBuffRateBuffTypeList(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( (byte_5970534 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_15778/*"UpBuffRateBuffType"*/);
    byte_5970534 = 1;
  }
  return BuffEntity__GetScriptIntArray(this, (System_String_o *)StringLiteral_15778/*"UpBuffRateBuffType"*/, 0, 0x2Cu, v2);
}


bool BuffEntity__IsBattleEndNotReduceTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970531 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17799/*"battleEndNotReduceTurnFlag"*/);
    byte_5970531 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17799/*"battleEndNotReduceTurnFlag"*/, 0, v2) > 0;
}


bool BuffEntity__IsCheckIndividualityForEachDamage(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970545 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_4610/*"CkIndvForEachDamage"*/);
    byte_5970545 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_4610/*"CkIndvForEachDamage"*/, 0, v2) == 1;
}


bool BuffEntity__IsCondGrantorRelativePosition(BuffEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_5970557 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&StringLiteral_19014/*"condGrantorRelativePosition"*/);
    byte_5970557 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_19014/*"condGrantorRelativePosition"*/,
                       (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool BuffEntity__IsConditionBuffValue(BuffEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_597051B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&StringLiteral_19013/*"condBuffValue"*/);
    byte_597051B = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)StringLiteral_19013/*"condBuffValue"*/,
                       (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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

  if ( (byte_5970552 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&BuffList_MULTI_CONDITION_TypeInfo);
    byte_5970552 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.script, 0) )
  {
    script = this->fields.script;
    v9.klass = (System_Enum_c *)BuffList_MULTI_CONDITION_TypeInfo;
    v9.monitor = (void *)-1LL;
    v10 = 1;
    v5 = (Il2CppObject *)System_Enum__ToString(&v9, 0);
    if ( script )
    {
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)script,
             v5,
             (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                 (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    }
    sub_2213CDC(v5, v6);
  }
  return 0;
}


bool BuffEntity__IsDelayRemoveExpiredOnPlayerTurn(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970546 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19393/*"delayRemoveExpiredOnPlayerTurn"*/);
    byte_5970546 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19393/*"delayRemoveExpiredOnPlayerTurn"*/, 0, v2) == 1;
}


bool BuffEntity__IsDisableForciblyAddState(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_597053F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5479/*"DisableForciblyAddState"*/);
    byte_597053F = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5479/*"DisableForciblyAddState"*/, 0, v2) == 1;
}


bool BuffEntity__IsDisableMoveStateTurnChange(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970541 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5480/*"DisableMoveStateTurnChange"*/);
    byte_5970541 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5480/*"DisableMoveStateTurnChange"*/, 0, v2) == 1;
}


bool BuffEntity__IsDrawShadowDespiteBattleCharaInvisible(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970532 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19522/*"drawShadowDespiteBattleCharaInvisible"*/);
    byte_5970532 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19522/*"drawShadowDespiteBattleCharaInvisible"*/, 0);
}


bool BuffEntity__IsEndProgressAct(BuffEntity_o *this, System_Int32_array *indiv, const MethodInfo *method)
{
  int32_t type; // w8
  bool v6; // zf
  bool result; // w0
  System_Int32_array *ckSelfIndv; // x20

  if ( (byte_5970514 & 1) == 0 )
  {
    sub_2213A60(&Individuality_TypeInfo);
    byte_5970514 = 1;
  }
  type = this->fields.type;
  if ( indiv )
    v6 = 0;
  else
    v6 = type == 248;
  result = v6;
  if ( indiv && type == 248 )
  {
    ckSelfIndv = this->fields.ckSelfIndv;
    if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, indiv);
    return Individuality__CheckIndividualities(indiv, ckSelfIndv, 0);
  }
  return result;
}


bool BuffEntity__IsExcludeUnSubStateIndiv(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970542 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6568/*"ExcludeUnSubStateIndiv"*/);
    byte_5970542 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_6568/*"ExcludeUnSubStateIndiv"*/, 0, v2) == 1;
}


bool BuffEntity__IsIncludeIgnoreIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970538 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7911/*"IncludeIgnoreIndividuality"*/);
    byte_5970538 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7911/*"IncludeIgnoreIndividuality"*/, 0, v2) == 1;
}


bool BuffEntity__IsIndvAddBuffPassive(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970540 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7958/*"IndvAddBuffPassive"*/);
    byte_5970540 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_7958/*"IndvAddBuffPassive"*/, 0, v2) == 1;
}


bool BuffEntity__IsMatchBattleSkillInfoCondition(
        BuffEntity_o *this,
        BattleSkillInfoData_o *skillInfoData,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_597054B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20623/*"fromCommandSpell"*/);
    sub_2213A60(&StringLiteral_20624/*"fromMasterEquip"*/);
    byte_597054B = 1;
  }
  v5 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_20624/*"fromMasterEquip"*/, method);
  if ( v5 )
  {
    if ( !skillInfoData )
      goto LABEL_11;
    if ( skillInfoData->fields.type != 1 )
      return 0;
  }
  v5 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_20623/*"fromCommandSpell"*/, v7);
  if ( !v5 )
    return 1;
  if ( !skillInfoData )
LABEL_11:
    sub_2213CDC(v5, v6);
  return skillInfoData->fields.type == 2;
}


bool BuffEntity__IsMatchSkillCountingCondition(BuffEntity_o *this, BattleData_o *data, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_5970549 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25828/*"useFirstTimeInTurn"*/);
    byte_5970549 = 1;
  }
  v5 = BuffEntity__checkScript(this, (System_String_o *)StringLiteral_25828/*"useFirstTimeInTurn"*/, method);
  if ( !v5 )
    return 1;
  if ( !data )
    sub_2213CDC(v5, v6);
  return data->fields.playerSkillCount == 1;
}


bool BuffEntity__IsNotPierce(BuffEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970550 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21956/*"isNotPierce"*/);
    byte_5970550 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21956/*"isNotPierce"*/, 0);
}


bool BuffEntity__IsProgressAct(BuffEntity_o *this, System_Int32_array *indiv, const MethodInfo *method)
{
  int32_t type; // w8
  bool v6; // zf
  bool result; // w0
  System_Int32_array *ckSelfIndv; // x20

  if ( (byte_5970515 & 1) == 0 )
  {
    sub_2213A60(&Individuality_TypeInfo);
    byte_5970515 = 1;
  }
  type = this->fields.type;
  if ( indiv )
    v6 = 0;
  else
    v6 = type == 251;
  result = v6;
  if ( indiv && type == 251 )
  {
    ckSelfIndv = this->fields.ckSelfIndv;
    if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, indiv);
    return Individuality__CheckIndividualities(indiv, ckSelfIndv, 0);
  }
  return result;
}


bool BuffEntity__TryGetIndividualityDisplayOnCard(
        BuffEntity_o *this,
        System_Int32_array_array **result,
        const MethodInfo *method)
{
  if ( (byte_597054F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21784/*"individualityDisplayOnCard"*/);
    byte_597054F = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_21784/*"individualityDisplayOnCard"*/,
           result,
           0);
}


bool BuffEntity__TryGetNotPierceIndividuality(
        BuffEntity_o *this,
        System_Int32_array_array **result,
        const MethodInfo *method)
{
  if ( (byte_597054C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9968/*"NotPierceIndividuality"*/);
    byte_597054C = 1;
  }
  return EntityScriptUtil__TryGet2DimensionalIntArray(
           this->fields.script,
           (System_String_o *)StringLiteral_9968/*"NotPierceIndividuality"*/,
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

  if ( (byte_5970524 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22699/*"missText"*/);
    byte_5970524 = 1;
  }
  return BuffEntity__checkScript(this, (System_String_o *)StringLiteral_22699/*"missText"*/, v2);
}


bool BuffEntity__checkScript(BuffEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_597050F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_597050F = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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

  if ( (byte_5970521 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&StringLiteral_2395/*"AppId"*/);
    byte_5970521 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_2395/*"AppId"*/,
           (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_2395/*"AppId"*/,
                                                                                (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_2213CDC(Item, v4);
      }
      if ( Item->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, qword_5984368, v6, v7);
      }
      else
      {
        sub_221405C(Item, qword_5984368, v6, v7);
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

  if ( (byte_597052B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17642/*"atkPriority"*/);
    byte_597052B = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_17642/*"atkPriority"*/, defVal, v3);
}


int32_t BuffEntity__getCheckIndvType(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970529 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18737/*"checkIndvType"*/);
    byte_5970529 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_18737/*"checkIndvType"*/, 2 * (this->fields.type == 155), v2);
  else
    return 2 * (this->fields.type == 155);
}


int32_t BuffEntity__getDamageRelease(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970522 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5232/*"DamageRelease"*/);
    byte_5970522 = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_5232/*"DamageRelease"*/, 0, v2);
}


System_String_o *BuffEntity__getDamageReleaseText(BuffEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  const MethodInfo *v4; // x3

  if ( (byte_5970523 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_2875/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/);
    sub_2213A60(&StringLiteral_11785/*"ReleaseText"*/);
    byte_5970523 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2875/*"BATTLE_DO_NOT_ACT_DAMAGE_RELEASE_TEXT"*/, 0);
  if ( this->fields.script )
    return BuffEntity__getScript_48836904(this, (System_String_o *)StringLiteral_11785/*"ReleaseText"*/, result, v4);
  return result;
}


int32_t BuffEntity__getDefRelationPriority(BuffEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_597052C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19370/*"defPriority"*/);
    byte_597052C = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_19370/*"defPriority"*/, defVal, v3);
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

  if ( (byte_597051C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&StringLiteral_6169/*"EffectId"*/);
    byte_597051C = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)StringLiteral_6169/*"EffectId"*/,
           (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)StringLiteral_6169/*"EffectId"*/,
                                                                                (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_2213CDC(Item, v4);
      }
      if ( Item->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
      {
        LODWORD(script) = *(_DWORD *)j_il2cpp_object_unbox_0(Item, qword_5984368, v6, v7);
      }
      else
      {
        sub_221405C(Item, qword_5984368, v6, v7);
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

  if ( (byte_5970528 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20864/*"gutsIconId"*/);
    byte_5970528 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_20864/*"gutsIconId"*/, 0, v2);
  else
    return 0;
}


System_String_o *BuffEntity__getGutsText(BuffEntity_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  const MethodInfo *v4; // x3

  if ( (byte_5970526 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_2848/*"BATTLE_DEFAULT_GUTS_TEXT"*/);
    sub_2213A60(&StringLiteral_20865/*"gutsText"*/);
    byte_5970526 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  result = LocalizationManager__Get((System_String_o *)StringLiteral_2848/*"BATTLE_DEFAULT_GUTS_TEXT"*/, 0);
  if ( this->fields.script )
    return BuffEntity__getScript_48836904(this, (System_String_o *)StringLiteral_20865/*"gutsText"*/, result, v4);
  return result;
}


System_Int32_array *BuffEntity__getIndividuality(BuffEntity_o *this, const MethodInfo *method)
{
  return this->fields.vals;
}


System_String_o *BuffEntity__getMissText(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970525 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22699/*"missText"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5970525 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript_48836904(
             this,
             (System_String_o *)StringLiteral_22699/*"missText"*/,
             (System_String_o *)StringLiteral_1/*""*/,
             v2);
  else
    return (System_String_o *)StringLiteral_1/*""*/;
}


int32_t BuffEntity__getRelationId(BuffEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_597052A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24218/*"relationId"*/);
    byte_597052A = 1;
  }
  return BuffEntity__getScript(this, (System_String_o *)StringLiteral_24218/*"relationId"*/, 0, v2);
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
  if ( (byte_5970510 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_5970510 = 1;
  }
  if ( !BuffEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_2213CDC(script, v7);
  }
  if ( script->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, qword_5984368, v9, v10);
  sub_221405C(script, qword_5984368, v9, v10);
  return (unsigned int)BuffEntity__getScript_48836904(v12, v13, v14, v15);
}


System_String_o *BuffEntity__getScript_48836904(
        BuffEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0

  if ( (byte_5970511 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_5970511 = 1;
  }
  if ( !BuffEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_2213CDC(script, v7);
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

  if ( (byte_5970527 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20866/*"gutsTextColor"*/);
    byte_5970527 = 1;
  }
  if ( this->fields.script )
    return BuffEntity__getScript(this, (System_String_o *)StringLiteral_20866/*"gutsTextColor"*/, 1, v2);
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

  if ( (byte_5970516 & 1) == 0 )
  {
    sub_2213A60(&BuffList_CONDITIONS_TypeInfo);
    byte_5970516 = 1;
  }
  v11 = cond;
  v10.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v10.monitor = (void *)-1LL;
  v7 = System_Enum__ToString(&v10, 0);
  return BuffEntity__isCondition_48838044(this, v7, pal, v8);
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

  if ( (byte_597051A & 1) == 0 )
  {
    sub_2213A60(&BuffList_CONDITIONS_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_597051A = 1;
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
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
             (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                 (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    }
    sub_2213CDC(v6, v7);
  }
  return 1;
}


bool BuffEntity__isCondition_48838044(BuffEntity_o *this, System_String_o *key, int32_t *pal, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  _QWORD *v12; // x8
  BuffEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_5970517 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_5970517 = 1;
  }
  script = this->fields.script;
  *pal = 0;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
      if ( !Item
        || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                Item,
                                                                                (Il2CppObject *)key,
                                                                                (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
      {
        sub_2213CDC(Item, v8);
      }
      if ( Item->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
      {
        v12 = (_QWORD *)j_il2cpp_object_unbox_0(Item, qword_5984368, v10, v11);
        LOBYTE(script) = 1;
        *pal = *v12;
      }
      else
      {
        sub_221405C(Item, qword_5984368, v10, v11);
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

  if ( (byte_5970518 & 1) == 0 )
  {
    sub_2213A60(&BuffList_CONDITIONS_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&BuffList_MULTI_CONDITION_TypeInfo);
    sub_2213A60(&StringLiteral_19013/*"condBuffValue"*/);
    sub_2213A60(&StringLiteral_19014/*"condGrantorRelativePosition"*/);
    byte_5970518 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v17.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
  v17.monitor = (void *)-1LL;
  v18 = 0;
  v4 = (Il2CppObject *)System_Enum__ToString(&v17, 0);
  v5 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         v4,
         (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  v6 = 1;
  if ( !v5 )
  {
    v7 = this->fields.script;
    v18 = 1;
    v17.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
    v17.monitor = (void *)-1LL;
    v8 = (Il2CppObject *)System_Enum__ToString(&v17, 0);
    if ( !v7 )
      goto LABEL_24;
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)v7,
            v8,
            (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      v10 = this->fields.script;
      v17.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
      v17.monitor = (void *)-1LL;
      v18 = 2;
      v8 = (Il2CppObject *)System_Enum__ToString(&v17, 0);
      if ( !v10 )
        goto LABEL_24;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)v10,
              v8,
              (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                 (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                    (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                     (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
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
                       (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
                {
                  return 1;
                }
                v8 = (Il2CppObject *)this->fields.script;
                if ( v8 )
                {
                  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                         (System_Collections_Generic_Dictionary_object__object__o *)v8,
                         (Il2CppObject *)StringLiteral_19013/*"condBuffValue"*/,
                         (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
                  {
                    return 1;
                  }
                  v8 = (Il2CppObject *)this->fields.script;
                  if ( v8 )
                    return System_Collections_Generic_Dictionary_object__object___ContainsKey(
                             (System_Collections_Generic_Dictionary_object__object__o *)v8,
                             (Il2CppObject *)StringLiteral_19014/*"condGrantorRelativePosition"*/,
                             (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
                }
              }
            }
          }
        }
LABEL_24:
        sub_2213CDC(v8, v9);
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

  if ( (byte_5970519 & 1) == 0 )
  {
    sub_2213A60(&BuffList_CONDITIONS_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_5970519 = 1;
  }
  script = this->fields.script;
  if ( script )
  {
    v11.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
    v11.monitor = (void *)-1LL;
    v12 = 0;
    v4 = (Il2CppObject *)System_Enum__ToString(&v11, 0);
    v5 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           v4,
           (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    v6 = 1;
    if ( !v5 )
    {
      v7 = this->fields.script;
      v12 = 1;
      v11.klass = (System_Enum_c *)BuffList_CONDITIONS_TypeInfo;
      v11.monitor = (void *)-1LL;
      v8 = (Il2CppObject *)System_Enum__ToString(&v11, 0);
      if ( !v7 )
        sub_2213CDC(v8, v9);
      return System_Collections_Generic_Dictionary_object__object___ContainsKey(
               (System_Collections_Generic_Dictionary_object__object__o *)v7,
               v8,
               (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  int32_t type; // w8
  bool v6; // zf
  bool result; // w0
  System_Int32_array *ckSelfIndv; // x20

  if ( (byte_5970513 & 1) == 0 )
  {
    sub_2213A60(&Individuality_TypeInfo);
    byte_5970513 = 1;
  }
  type = this->fields.type;
  if ( indiv )
    v6 = 0;
  else
    v6 = type == 76;
  result = v6;
  if ( indiv && type == 76 )
  {
    ckSelfIndv = this->fields.ckSelfIndv;
    if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, indiv);
    return Individuality__CheckIndividualities(indiv, ckSelfIndv, 0);
  }
  return result;
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
  Il2CppObject *currentKey; // x21
  __int64 v10; // x1
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x21
  BuffEntity_BuffConditionIndividualityData___c_c *v14; // x8
  struct BuffEntity_BuffConditionIndividualityData___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__9_0; // x22
  Il2CppObject *v17; // x23
  struct BuffEntity_BuffConditionIndividualityData___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  struct System_Int32_array *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_String_o *StringValue; // x0
  struct System_String_o **p_individualityTargetCount; // x19
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v41; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v42; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_597055A & 1) == 0 )
  {
    sub_2213A60(&BuffList_CONDITIONS_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
    sub_2213A60(&Method_System_Enum_TryParse_BuffList_CONDITIONS___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__get_Current__);
    sub_2213A60(&System_Func_string__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
    sub_2213A60(&Method_BuffEntity_BuffConditionIndividualityData___c___ctor_b__9_0__);
    sub_2213A60(&BuffEntity_BuffConditionIndividualityData___c_TypeInfo);
    sub_2213A60(&StringLiteral_21783/*"individualityCondTargetType"*/);
    sub_2213A60(&StringLiteral_7760/*"INDIVIDUALITIE_COUNT_ABOVE"*/);
    sub_2213A60(&StringLiteral_7759/*"INDIVIDUALITIE"*/);
    sub_2213A60(&StringLiteral_21785/*"individualityTargetCount"*/);
    sub_2213A60(&StringLiteral_19022/*"condTargetRelativePosition"*/);
    sub_2213A60(&StringLiteral_7761/*"INDIVIDUALITIE_COUNT_BELOW"*/);
    byte_597055A = 1;
  }
  memset(&v42, 0, sizeof(v42));
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !conditionScript )
    goto LABEL_24;
  Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
           (System_Collections_Generic_Dictionary_object__object__o *)conditionScript,
           (const MethodInfo_3FFD8D8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Keys__);
  if ( !Keys )
    goto LABEL_24;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
    &v41,
    Keys,
    (const MethodInfo_43896F0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__object__GetEnumerator__);
  v42 = v41;
  v41.fields._dictionary = 0;
  *(_QWORD *)&v41.fields._index = &v42;
  while ( 1 )
  {
    v7 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
           &v42,
           (const MethodInfo_4169D50 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__MoveNext__);
    if ( !v7 )
    {
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
        &v42,
        (const MethodInfo_4169D4C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
      return;
    }
    currentKey = v42.fields._currentKey;
    if ( !v42.fields._currentKey )
      sub_2213CDC(v7, v8);
    if ( System_String__Contains((System_String_o *)v42.fields._currentKey, (System_String_o *)StringLiteral_7759/*"INDIVIDUALITIE"*/, 0) )
    {
      if ( !*(_DWORD *)(qword_5984398 + 228) )
        j_il2cpp_runtime_class_init_0(qword_5984398, v10);
      if ( System_Enum__TryParse_Int32Enum_(
             (System_String_o *)currentKey,
             &this->fields.condition,
             (const MethodInfo_3861584 *)Method_System_Enum_TryParse_BuffList_CONDITIONS___) )
      {
        break;
      }
    }
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
    &v42,
    (const MethodInfo_4169D4C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__object__Dispose__);
  LODWORD(v41.fields._currentKey) = this->fields.condition;
  v41.fields._dictionary = (struct System_Collections_Generic_Dictionary_TKey__TValue__o *)BuffList_CONDITIONS_TypeInfo;
  *(_QWORD *)&v41.fields._index = -1;
  v11 = (Il2CppObject *)System_Enum__ToString((System_Enum_o *)&v41, 0);
  Keys = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  (System_Collections_Generic_Dictionary_object__object__o *)conditionScript,
                                                                                  v11,
                                                                                  (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Keys
    || (Keys = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *, const MethodInfo *))Keys->klass->vtable._3_ToString.methodPtr)(
                                                                                        Keys,
                                                                                        Keys->klass->vtable._3_ToString.method)) == 0 )
  {
LABEL_24:
    sub_2213CDC(Keys, v6);
  }
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split((System_String_o *)Keys, 0x2Cu, 0, 0);
  v14 = BuffEntity_BuffConditionIndividualityData___c_TypeInfo;
  if ( !*(&BuffEntity_BuffConditionIndividualityData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BuffEntity_BuffConditionIndividualityData___c_TypeInfo, v12);
    v14 = BuffEntity_BuffConditionIndividualityData___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__9_0 = (System_Func_object__int__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !*(&v14->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v14, v12);
      static_fields = BuffEntity_BuffConditionIndividualityData___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__9_0,
      v17,
      Method_BuffEntity_BuffConditionIndividualityData___c___ctor_b__9_0__,
      0);
    v18 = BuffEntity_BuffConditionIndividualityData___c_TypeInfo->static_fields;
    v18->__9__9_0 = (struct System_Func_string__int__o *)_9__9_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->__9__9_0, (int32_t)_9__9_0, v19, v20, v21, v22, v23, v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v13,
                                                               (System_Func_TSource__TResult__o *)_9__9_0,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_string__int___);
  v26 = System_Linq_Enumerable__ToArray_int_(
          v25,
          (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
  this->fields.targetIndividualityArray = v26;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetIndividualityArray,
    (int32_t)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.conditionTargetType = EntityScriptUtil__GetIntValue(
                                       conditionScript,
                                       (System_String_o *)StringLiteral_21783/*"individualityCondTargetType"*/,
                                       0,
                                       0);
  StringValue = EntityScriptUtil__GetStringValue(conditionScript, (System_String_o *)StringLiteral_21785/*"individualityTargetCount"*/, 0, 0);
  this->fields.individualityTargetCount = StringValue;
  p_individualityTargetCount = &this->fields.individualityTargetCount;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_individualityTargetCount,
    (int32_t)StringValue,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  *((_DWORD *)p_individualityTargetCount + 4) = EntityScriptUtil__GetIntValue(
                                                  conditionScript,
                                                  (System_String_o *)StringLiteral_7760/*"INDIVIDUALITIE_COUNT_ABOVE"*/,
                                                  0,
                                                  0);
  *((_DWORD *)p_individualityTargetCount + 5) = EntityScriptUtil__GetIntValue(
                                                  conditionScript,
                                                  (System_String_o *)StringLiteral_7761/*"INDIVIDUALITIE_COUNT_BELOW"*/,
                                                  0,
                                                  0);
  *((_DWORD *)p_individualityTargetCount + 9) = EntityScriptUtil__GetIntValue(
                                                  conditionScript,
                                                  (System_String_o *)StringLiteral_19022/*"condTargetRelativePosition"*/,
                                                  -1,
                                                  0);
}


bool BuffEntity_BuffConditionIndividualityData__CompareValue(
        BuffEntity_BuffConditionIndividualityData_o *this,
        int32_t totalCount,
        const MethodInfo *method)
{
  struct System_Func_int__int__bool__o *compareFunc; // x8
  __int64 checkValue; // x2
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  int32_t v13; // w1
  struct System_Func_int__int__bool__o *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x0
  __int64 v22; // x1

  if ( (byte_597055B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1834/*">=1"*/);
    byte_597055B = 1;
  }
  compareFunc = this->fields.compareFunc;
  if ( compareFunc )
  {
    checkValue = (unsigned int)this->fields.checkValue;
  }
  else
  {
    if ( System_String__IsNullOrEmpty(this->fields.individualityTargetCount, 0) )
    {
      v13 = StringLiteral_1834/*">=1"*/;
      this->fields.individualityTargetCount = (struct System_String_o *)StringLiteral_1834/*">=1"*/;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.individualityTargetCount,
        v13,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
    }
    v14 = BattleUtility__CheckValueSatisfiesCondition(this->fields.individualityTargetCount, 0);
    this->fields.compareFunc = v14;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.compareFunc,
      (int32_t)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    v21 = BattleUtility__ParseConditionValue(this->fields.individualityTargetCount, 0);
    compareFunc = this->fields.compareFunc;
    this->fields.checkValue = v21;
    if ( !compareFunc )
      sub_2213CDC(v21, v22);
    checkValue = (unsigned int)v21;
  }
  return ((__int64 (__fastcall *)(intptr_t, _QWORD, __int64, intptr_t))compareFunc->fields.invoke_impl)(
           compareFunc->fields.method_code,
           (unsigned int)totalCount,
           checkValue,
           compareFunc->fields.method);
}


void BuffEntity_BuffConditionIndividualityData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597055C & 1) == 0 )
  {
    sub_2213A60(&BuffEntity_BuffConditionIndividualityData___c_TypeInfo);
    byte_597055C = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BuffEntity_BuffConditionIndividualityData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BuffEntity_BuffConditionIndividualityData___c_TypeInfo->static_fields->__9 = (struct BuffEntity_BuffConditionIndividualityData___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BuffEntity_BuffConditionIndividualityData___c_TypeInfo->static_fields,
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


int32_t BuffEntity_BuffConditionIndividualityData___c____ctor_b__9_0(
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
  System_Func_int__int__bool__o *v7; // x23
  intptr_t *v8; // x8
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  System_String_o *v16; // x21
  System_String_o *v17; // x0
  char v19; // w22
  __int64 v20; // x0
  bool v21; // w24
  __int64 v22; // x0

  if ( (byte_597055D & 1) == 0 )
  {
    sub_2213A60(&Method_BuffEntity_CondBuffValueData_IsEqualOrHigher__);
    sub_2213A60(&Method_BuffEntity_CondBuffValueData_IsEqualOrLower__);
    sub_2213A60(&Method_BuffEntity_CondBuffValueData_IsEqual__);
    sub_2213A60(&Method_BuffEntity_CondBuffValueData_IsHigher__);
    sub_2213A60(&Method_BuffEntity_CondBuffValueData_IsLower__);
    sub_2213A60(&Method_BuffEntity_CondBuffValueData_IsNotEqual__);
    sub_2213A60(&System_Func_int__int__bool__TypeInfo);
    sub_2213A60(&System_Text_RegularExpressions_Regex_TypeInfo);
    sub_2213A60(&StringLiteral_1613/*"<>"*/);
    sub_2213A60(&StringLiteral_1825/*"="*/);
    sub_2213A60(&StringLiteral_16590/*"[^0-9]"*/);
    sub_2213A60(&StringLiteral_1573/*"<"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_1831/*">"*/);
    sub_2213A60(&StringLiteral_362/*"!="*/);
    byte_597055D = 1;
  }
  compareFunc = this->fields.compareFunc;
  if ( !compareFunc )
  {
    condValue = this->fields.condValue;
    if ( !condValue )
      goto LABEL_25;
    if ( System_String__Contains(condValue, (System_String_o *)StringLiteral_362/*"!="*/, 0) )
      goto LABEL_8;
    condValue = this->fields.condValue;
    if ( !condValue )
      goto LABEL_25;
    if ( System_String__Contains(condValue, (System_String_o *)StringLiteral_1613/*"<>"*/, 0) )
    {
LABEL_8:
      v7 = (System_Func_int__int__bool__o *)sub_2213CCC(System_Func_int__int__bool__TypeInfo);
      v8 = (intptr_t *)&Method_BuffEntity_CondBuffValueData_IsNotEqual__;
    }
    else
    {
      condValue = this->fields.condValue;
      if ( !condValue )
        goto LABEL_25;
      condValue = (System_String_o *)System_String__Contains(condValue, (System_String_o *)StringLiteral_1825/*"="*/, 0);
      if ( !this->fields.condValue )
        goto LABEL_25;
      v19 = (char)condValue;
      if ( System_String__Contains(this->fields.condValue, (System_String_o *)StringLiteral_1831/*">"*/, 0) )
      {
        v20 = sub_2213CCC(System_Func_int__int__bool__TypeInfo);
        v8 = (intptr_t *)&Method_BuffEntity_CondBuffValueData_IsHigher__;
        v7 = (System_Func_int__int__bool__o *)v20;
        if ( (v19 & 1) != 0 )
          v8 = (intptr_t *)&Method_BuffEntity_CondBuffValueData_IsEqualOrHigher__;
      }
      else
      {
        condValue = this->fields.condValue;
        if ( !condValue )
          goto LABEL_25;
        v21 = System_String__Contains(condValue, (System_String_o *)StringLiteral_1573/*"<"*/, 0);
        v22 = sub_2213CCC(System_Func_int__int__bool__TypeInfo);
        v8 = (intptr_t *)&Method_BuffEntity_CondBuffValueData_IsLower__;
        v7 = (System_Func_int__int__bool__o *)v22;
        if ( (v19 & 1) != 0 )
          v8 = (intptr_t *)&Method_BuffEntity_CondBuffValueData_IsEqualOrLower__;
        if ( !v21 )
          v8 = (intptr_t *)&Method_BuffEntity_CondBuffValueData_IsEqual__;
      }
    }
    System_Func_int__int__bool____ctor(v7, 0, *v8, 0);
    this->fields.compareFunc = v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.compareFunc, (int32_t)v7, v9, v10, v11, v12, v13, v14);
    v16 = this->fields.condValue;
    if ( !*(&System_Text_RegularExpressions_Regex_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Text_RegularExpressions_Regex_TypeInfo, v15);
    v17 = System_Text_RegularExpressions_Regex__Replace(
            v16,
            (System_String_o *)StringLiteral_16590/*"[^0-9]"*/,
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
LABEL_25:
    sub_2213CDC(condValue, *(_QWORD *)&totalValue);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597055E & 1) == 0 )
  {
    sub_2213A60(&BuffEntity___c_TypeInfo);
    byte_597055E = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BuffEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BuffEntity___c_TypeInfo->static_fields->__9 = (struct BuffEntity___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BuffEntity___c_TypeInfo->static_fields,
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


int32_t BuffEntity___c___GetIconId_b__22_0(
        BuffEntity___c_o *this,
        BuffEntity_OverwriteBuffIconData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_2213CDC(this, 0);
  return data->fields.priority;
}


int32_t BuffEntity___c___GetScriptIntArray_b__27_0(
        BuffEntity___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0);
}