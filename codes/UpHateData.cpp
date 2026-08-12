void UpHateData___ctor(
        UpHateData_o *this,
        int32_t uniqueId,
        BattleBuffData_o *inBuffData,
        BattleBuffData_BuffData_o *inUpHateBuff,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  int32_t PriorityEachType; // w0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._UniqueId_k__BackingField = uniqueId;
  if ( inUpHateBuff )
    PriorityEachType = BattleBuffData_BuffData__GetPriorityEachType(inUpHateBuff, 0);
  else
    PriorityEachType = 0;
  this->fields._Priority_k__BackingField = PriorityEachType;
  this->fields.buffData = inBuffData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.buffData,
    (int32_t)inBuffData,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.upHateBuff = inUpHateBuff;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.upHateBuff,
    (int32_t)inUpHateBuff,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


int32_t UpHateData__GetFixedTargetIdAndUseUpHateBuff(UpHateData_o *this, const MethodInfo *method)
{
  BattleBuffData_BuffData_o *upHateBuff; // x0

  upHateBuff = this->fields.upHateBuff;
  if ( upHateBuff )
    BattleBuffData_BuffData__ForceUsed(upHateBuff, this->fields.buffData, 1, 0);
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

  if ( (byte_5973364 & 1) == 0 )
  {
    sub_2213A60(&UpHateData_TypeInfo);
    byte_5973364 = 1;
  }
  v7 = (UpHateData_o *)sub_2213CCC(UpHateData_TypeInfo);
  UpHateData___ctor(v7, uniqueId, buffData, upHateBuff, v8);
  return v7;
}


UpHateData_array *UpHateData__MakeArray(
        System_Collections_Generic_IEnumerable_int__o *uniqueIds,
        const MethodInfo *method)
{
  long double v2; // q0
  UpHateData___c_c *v4; // x0
  struct UpHateData___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__14_0; // x20
  Il2CppObject *v7; // x21
  struct UpHateData___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  UpHateData_array *result; // x0
  _QWORD *v17; // x19
  __int64 v18; // x8
  __int64 v19; // x0
  __int64 v20; // x0

  if ( (byte_5973365 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_UpHateData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_int__UpHateData___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_UpHateData___);
    sub_2213A60(&System_Func_int__UpHateData__TypeInfo);
    sub_2213A60(&Method_UpHateData___c__MakeArray_b__14_0__);
    sub_2213A60(&UpHateData___c_TypeInfo);
    byte_5973365 = 1;
  }
  if ( !uniqueIds )
    goto LABEL_11;
  v4 = UpHateData___c_TypeInfo;
  if ( !*(&UpHateData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UpHateData___c_TypeInfo, method);
    v4 = UpHateData___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__14_0 = (System_Func_T__TResult__o *)static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method);
      static_fields = UpHateData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_int__UpHateData__TypeInfo);
    System_Func_int__object____ctor(_9__14_0, v7, Method_UpHateData___c__MakeArray_b__14_0__, 0);
    v8 = UpHateData___c_TypeInfo->static_fields;
    v8->__9__14_0 = (struct System_Func_int__UpHateData__o *)_9__14_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__14_0, (int32_t)_9__14_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)uniqueIds,
                                                               (System_Func_TSource__TResult__o *)_9__14_0,
                                                               (const MethodInfo_388DEA8 *)Method_System_Linq_Enumerable_Select_int__UpHateData___);
  result = (UpHateData_array *)System_Linq_Enumerable__ToArray_object_(
                                 v15,
                                 (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_UpHateData___);
  if ( !result )
  {
LABEL_11:
    v17 = Method_System_Array_Empty_UpHateData___;
    v18 = *((_QWORD *)Method_System_Array_Empty_UpHateData___ + 7);
    if ( !v18 )
    {
      sub_224B964(Method_System_Array_Empty_UpHateData___);
      v18 = v17[7];
    }
    v19 = *(_QWORD *)(v18 + 16);
    if ( (*(_WORD *)(v19 + 309) & 1) == 0 )
      v19 = sub_224B908(v2);
    if ( !*(_DWORD *)(v19 + 228) )
      *(__n128 *)&v2 = j_il2cpp_runtime_class_init_0(v19, method);
    v20 = *(_QWORD *)(v17[7] + 16LL);
    if ( (*(_WORD *)(v20 + 309) & 1) == 0 )
      v20 = sub_224B908(v2);
    return **(UpHateData_array ***)(v20 + 184);
  }
  return result;
}


void UpHateData__RevertUnused(UpHateData_o *this, const MethodInfo *method)
{
  BattleBuffData_BuffData_o *upHateBuff; // x0

  upHateBuff = this->fields.upHateBuff;
  if ( upHateBuff )
    BattleBuffData_BuffData__RevertUnused(upHateBuff, 1, 0);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5973366 & 1) == 0 )
  {
    sub_2213A60(&UpHateData___c_TypeInfo);
    byte_5973366 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(UpHateData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UpHateData___c_TypeInfo->static_fields->__9 = (struct UpHateData___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)UpHateData___c_TypeInfo->static_fields,
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


UpHateData_o *UpHateData___c___MakeArray_b__14_0(UpHateData___c_o *this, int32_t x, const MethodInfo *method)
{
  UpHateData_o *v4; // x20
  const MethodInfo *v5; // x4

  if ( (byte_5973367 & 1) == 0 )
  {
    sub_2213A60(&UpHateData_TypeInfo);
    byte_5973367 = 1;
  }
  v4 = (UpHateData_o *)sub_2213CCC(UpHateData_TypeInfo);
  UpHateData___ctor(v4, x, 0, 0, v5);
  return v4;
}