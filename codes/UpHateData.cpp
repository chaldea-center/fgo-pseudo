void UpHateData___ctor(
        UpHateData_o *this,
        int32_t uniqueId,
        BattleBuffData_o *inBuffData,
        BattleBuffData_BuffData_o *inUpHateBuff,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t PriorityEachType; // w0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._UniqueId_k__BackingField = uniqueId;
  if ( inUpHateBuff )
    PriorityEachType = BattleBuffData_BuffData__GetPriorityEachType(inUpHateBuff, v9);
  else
    PriorityEachType = 0;
  this->fields._Priority_k__BackingField = PriorityEachType;
  this->fields.buffData = inBuffData;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.buffData, (int32_t)inBuffData, v10, v11, v12, v13, v14, v15);
  this->fields.upHateBuff = inUpHateBuff;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.upHateBuff,
    (int32_t)inUpHateBuff,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


int32_t UpHateData__GetFixedTargetIdAndUseUpHateBuff(UpHateData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  BattleBuffData_BuffData_o *upHateBuff; // x0

  upHateBuff = this->fields.upHateBuff;
  if ( upHateBuff )
    BattleBuffData_BuffData__ForceUsed(upHateBuff, this->fields.buffData, 1, v2);
  return this->fields._UniqueId_k__BackingField;
}


UpHateData_o *UpHateData__GetHighPriorityData(
        UpHateData_o *compUpHateA,
        UpHateData_o *compUpHateB,
        const MethodInfo *method)
{
  int32_t Priority_k__BackingField; // w8
  int32_t v4; // w9

  if ( compUpHateA )
  {
    Priority_k__BackingField = compUpHateA->fields._Priority_k__BackingField;
    if ( compUpHateB )
    {
LABEL_3:
      v4 = compUpHateB->fields._Priority_k__BackingField;
      goto LABEL_6;
    }
  }
  else
  {
    Priority_k__BackingField = 0x80000000;
    if ( compUpHateB )
      goto LABEL_3;
  }
  v4 = 0x80000000;
LABEL_6:
  if ( Priority_k__BackingField < v4 )
    return compUpHateB;
  return compUpHateA;
}


UpHateData_o *UpHateData__Make(
        int32_t uniqueId,
        BattleBuffData_o *buffData,
        BattleBuffData_BuffData_o *upHateBuff,
        const MethodInfo *method)
{
  UpHateData_o *v7; // x22
  const MethodInfo *v8; // x4

  if ( (byte_4D333D0 & 1) == 0 )
  {
    sub_1C93AD4(&UpHateData_TypeInfo);
    byte_4D333D0 = 1;
  }
  v7 = (UpHateData_o *)sub_1C93D20(UpHateData_TypeInfo);
  UpHateData___ctor(v7, uniqueId, buffData, upHateBuff, v8);
  return v7;
}


UpHateData_array *UpHateData__MakeArray(
        System_Collections_Generic_IEnumerable_int__o *uniqueIds,
        const MethodInfo *method)
{
  long double inited; // q0
  UpHateData___c_c *v4; // x0
  System_Func_T__TResult__o *_9__13_0; // x20
  Il2CppObject *v6; // x21
  struct UpHateData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  UpHateData_array *result; // x0
  _QWORD *v16; // x19
  __int64 v17; // x8
  __int64 v18; // x0
  __int64 v19; // x0

  if ( (byte_4D333D1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_UpHateData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_int__UpHateData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_UpHateData___);
    sub_1C93AD4(&System_Func_int__UpHateData__TypeInfo);
    sub_1C93AD4(&Method_UpHateData___c__MakeArray_b__13_0__);
    sub_1C93AD4(&UpHateData___c_TypeInfo);
    byte_4D333D1 = 1;
  }
  if ( !uniqueIds )
    goto LABEL_11;
  v4 = UpHateData___c_TypeInfo;
  if ( !UpHateData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UpHateData___c_TypeInfo);
    v4 = UpHateData___c_TypeInfo;
  }
  _9__13_0 = (System_Func_T__TResult__o *)v4->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = UpHateData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__13_0 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_int__UpHateData__TypeInfo);
    System_Func_int__object____ctor(_9__13_0, v6, Method_UpHateData___c__MakeArray_b__13_0__, 0);
    static_fields = UpHateData___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_int__UpHateData__o *)_9__13_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)uniqueIds,
                                                               (System_Func_TSource__TResult__o *)_9__13_0,
                                                               (const MethodInfo_31D7E14 *)Method_System_Linq_Enumerable_Select_int__UpHateData___);
  result = (UpHateData_array *)System_Linq_Enumerable__ToArray_object_(
                                 v14,
                                 (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_UpHateData___);
  if ( !result )
  {
LABEL_11:
    v16 = Method_System_Array_Empty_UpHateData___;
    v17 = *((_QWORD *)Method_System_Array_Empty_UpHateData___ + 7);
    if ( !v17 )
    {
      sub_1C69BC4(Method_System_Array_Empty_UpHateData___);
      v17 = v16[7];
    }
    v18 = *(_QWORD *)(v17 + 16);
    if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
      v18 = sub_1C69B68(inited);
    if ( !*(_DWORD *)(v18 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v18);
    v19 = *(_QWORD *)(v16[7] + 16LL);
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1C69B68(inited);
    return **(UpHateData_array ***)(v19 + 184);
  }
  return result;
}


int32_t UpHateData__get_Priority(UpHateData_o *this, const MethodInfo *method)
{
  return this->fields._Priority_k__BackingField;
}


int32_t UpHateData__get_UniqueId(UpHateData_o *this, const MethodInfo *method)
{
  return this->fields._UniqueId_k__BackingField;
}


void UpHateData__set_Priority(UpHateData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Priority_k__BackingField = value;
}


void UpHateData__set_UniqueId(UpHateData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._UniqueId_k__BackingField = value;
}


void UpHateData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D333D2 & 1) == 0 )
  {
    sub_1C93AD4(&UpHateData___c_TypeInfo);
    byte_4D333D2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(UpHateData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UpHateData___c_TypeInfo->static_fields->__9 = (struct UpHateData___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)UpHateData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UpHateData___c___ctor(UpHateData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UpHateData_o *UpHateData___c___MakeArray_b__13_0(UpHateData___c_o *this, int32_t x, const MethodInfo *method)
{
  UpHateData_o *v4; // x20
  const MethodInfo *v5; // x4

  if ( (byte_4D333D3 & 1) == 0 )
  {
    sub_1C93AD4(&UpHateData_TypeInfo);
    byte_4D333D3 = 1;
  }
  v4 = (UpHateData_o *)sub_1C93D20(UpHateData_TypeInfo);
  UpHateData___ctor(v4, x, 0, 0, v5);
  return v4;
}