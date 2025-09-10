void UpHateData___ctor(
        UpHateData_o *this,
        int32_t uniqueId,
        BattleBuffData_o *inBuffData,
        BattleBuffData_BuffData_o *inUpHateBuff,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t PriorityEachType; // w0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._UniqueId_k__BackingField = uniqueId;
  if ( inUpHateBuff )
    PriorityEachType = BattleBuffData_BuffData__GetPriorityEachType(inUpHateBuff, v9);
  else
    PriorityEachType = 0;
  this->fields._Priority_k__BackingField = PriorityEachType;
  this->fields.buffData = inBuffData;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.buffData, (int32_t)inBuffData, v10, v11);
  this->fields.upHateBuff = inUpHateBuff;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.upHateBuff, (int32_t)inUpHateBuff, v13, v14);
}


int32_t UpHateData__GetFixedTargetIdAndUseUpHateBuff(UpHateData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBuffData_BuffData_o *upHateBuff; // x0

  upHateBuff = this->fields.upHateBuff;
  if ( upHateBuff )
    BattleBuffData_BuffData__ForceUsed(upHateBuff, this->fields.buffData, v2);
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

  if ( (byte_4C29B35 & 1) == 0 )
  {
    sub_1C2D490(&UpHateData_TypeInfo);
    byte_4C29B35 = 1;
  }
  v7 = (UpHateData_o *)sub_1C2D6DC(UpHateData_TypeInfo);
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
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  UpHateData_array *result; // x0
  _QWORD *v12; // x19
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0

  if ( (byte_4C29B36 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_UpHateData___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_int__UpHateData___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_UpHateData___);
    sub_1C2D490(&System_Func_int__UpHateData__TypeInfo);
    sub_1C2D490(&Method_UpHateData___c__MakeArray_b__13_0__);
    sub_1C2D490(&UpHateData___c_TypeInfo);
    byte_4C29B36 = 1;
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
    _9__13_0 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_int__UpHateData__TypeInfo);
    System_Func_int__object____ctor(_9__13_0, v6, Method_UpHateData___c__MakeArray_b__13_0__, 0);
    static_fields = UpHateData___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_int__UpHateData__o *)_9__13_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v8, v9);
  }
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)uniqueIds,
                                                               (System_Func_TSource__TResult__o *)_9__13_0,
                                                               (const MethodInfo_3102360 *)Method_System_Linq_Enumerable_Select_int__UpHateData___);
  result = (UpHateData_array *)System_Linq_Enumerable__ToArray_object_(
                                 v10,
                                 (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_UpHateData___);
  if ( !result )
  {
LABEL_11:
    v12 = Method_System_Array_Empty_UpHateData___;
    v13 = *((_QWORD *)Method_System_Array_Empty_UpHateData___ + 7);
    if ( !v13 )
    {
      sub_1C7DC00(Method_System_Array_Empty_UpHateData___);
      v13 = v12[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C7DBA4(inited);
    if ( !*(_DWORD *)(v14 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v14);
    v15 = *(_QWORD *)(v12[7] + 16LL);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C7DBA4(inited);
    return **(UpHateData_array ***)(v15 + 184);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C29B37 & 1) == 0 )
  {
    sub_1C2D490(&UpHateData___c_TypeInfo);
    byte_4C29B37 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(UpHateData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UpHateData___c_TypeInfo->static_fields->__9 = (struct UpHateData___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)UpHateData___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void UpHateData___c___ctor(UpHateData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UpHateData_o *UpHateData___c___MakeArray_b__13_0(UpHateData___c_o *this, int32_t x, const MethodInfo *method)
{
  UpHateData_o *v4; // x20
  const MethodInfo *v5; // x4

  if ( (byte_4C29B38 & 1) == 0 )
  {
    sub_1C2D490(&UpHateData_TypeInfo);
    byte_4C29B38 = 1;
  }
  v4 = (UpHateData_o *)sub_1C2D6DC(UpHateData_TypeInfo);
  UpHateData___ctor(v4, x, 0, 0, v5);
  return v4;
}