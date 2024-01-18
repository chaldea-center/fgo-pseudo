void __fastcall CompensateArgForShowAll___ctor(
        CompensateArgForShowAll_o *this,
        BattlePerformance_o *perf,
        UnityEngine_GameObject_o *actObj,
        CompensateArgForShowAll_EffectType_array *effectTypes,
        System_Int32_array *extraEffectIdArray,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  CompensateArgForShowAll___c_c *v32; // x0
  struct CompensateArgForShowAll___c_StaticFields *static_fields; // x8
  System_Func_CompensateArgForShowAll_EffectType__int__o *_9__13_0; // x22
  Il2CppObject *v35; // x23
  struct CompensateArgForShowAll___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  BitValue_CompensateArgForShowAll_EffectType__o *v43; // x23
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Action_ShopRootConstants_State__o *v50; // x22
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7

  if ( (byte_4187F34 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_CompensateArgForShowAll_EffectType___ctor__, perf);
    sub_B2C35C(&System_Action_CompensateArgForShowAll_EffectType__TypeInfo, v11);
    sub_B2C35C(&Method_BasicHelper_ForEach_CompensateArgForShowAll_EffectType___, v12);
    sub_B2C35C(&Method_BitValue_CompensateArgForShowAll_EffectType___ctor__, v13);
    sub_B2C35C(&BitValue_CompensateArgForShowAll_EffectType__TypeInfo, v14);
    sub_B2C35C(&Method_CompensateArgForShowAll___ctor_b__13_1__, v15);
    sub_B2C35C(&Method_System_Func_CompensateArgForShowAll_EffectType__int___ctor__, v16);
    sub_B2C35C(&System_Func_CompensateArgForShowAll_EffectType__int__TypeInfo, v17);
    sub_B2C35C(&Method_CompensateArgForShowAll___c___ctor_b__13_0__, v18);
    sub_B2C35C(&CompensateArgForShowAll___c_TypeInfo, v19);
    byte_4187F34 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Perf_k__BackingField = perf;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)perf, v20, v21, v22, v23, v24, v25);
  this->fields._ActObj_k__BackingField = actObj;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._ActObj_k__BackingField,
    (System_Int32_array **)actObj,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = CompensateArgForShowAll___c_TypeInfo;
  if ( (BYTE3(CompensateArgForShowAll___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CompensateArgForShowAll___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompensateArgForShowAll___c_TypeInfo);
    v32 = CompensateArgForShowAll___c_TypeInfo;
  }
  static_fields = v32->static_fields;
  _9__13_0 = static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      static_fields = CompensateArgForShowAll___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Func_CompensateArgForShowAll_EffectType__int__o *)sub_B2C42C(System_Func_CompensateArgForShowAll_EffectType__int__TypeInfo);
    System_Func_CompensateArgForShowAll_EffectType__int____ctor(
      _9__13_0,
      v35,
      Method_CompensateArgForShowAll___c___ctor_b__13_0__,
      (const MethodInfo_270E72C *)Method_System_Func_CompensateArgForShowAll_EffectType__int___ctor__);
    v36 = CompensateArgForShowAll___c_TypeInfo->static_fields;
    v36->__9__13_0 = _9__13_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v36->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  v43 = (BitValue_CompensateArgForShowAll_EffectType__o *)sub_B2C42C(BitValue_CompensateArgForShowAll_EffectType__TypeInfo);
  BitValue_CompensateArgForShowAll_EffectType____ctor(
    v43,
    (System_Func_T__int__o *)_9__13_0,
    (const MethodInfo_2A020D0 *)Method_BitValue_CompensateArgForShowAll_EffectType___ctor__);
  this->fields._EffectTypeBit_k__BackingField = v43;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._EffectTypeBit_k__BackingField,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = (System_Action_ShopRootConstants_State__o *)sub_B2C42C(System_Action_CompensateArgForShowAll_EffectType__TypeInfo);
  System_Action_ShopRootConstants_State____ctor(
    v50,
    (Il2CppObject *)this,
    Method_CompensateArgForShowAll___ctor_b__13_1__,
    (const MethodInfo_24BA81C *)Method_System_Action_CompensateArgForShowAll_EffectType___ctor__);
  BasicHelper__ForEach_CompensateArgForShowAll_EffectType_(
    (System_Collections_Generic_IEnumerable_T__o *)effectTypes,
    (System_Action_T__o *)v50,
    (const MethodInfo_172797C *)Method_BasicHelper_ForEach_CompensateArgForShowAll_EffectType___);
  this->fields._ExtraEffectIdArray_k__BackingField = extraEffectIdArray;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._ExtraEffectIdArray_k__BackingField,
    (System_Int32_array **)extraEffectIdArray,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompensateArgForShowAll____ctor_b__13_1(
        CompensateArgForShowAll_o *this,
        int32_t x,
        const MethodInfo *method)
{
  BitValue_CompensateArgForShowAll_EffectType__o *EffectTypeBit_k__BackingField; // x0

  if ( (byte_4187F35 & 1) == 0 )
  {
    sub_B2C35C(&Method_BitValue_CompensateArgForShowAll_EffectType__On__, *(_QWORD *)&x);
    byte_4187F35 = 1;
  }
  EffectTypeBit_k__BackingField = this->fields._EffectTypeBit_k__BackingField;
  if ( !EffectTypeBit_k__BackingField )
    sub_B2C434(0LL, *(_QWORD *)&x);
  BitValue_CompensateArgForShowAll_EffectType___On(
    EffectTypeBit_k__BackingField,
    x,
    (const MethodInfo_2A0210C *)Method_BitValue_CompensateArgForShowAll_EffectType__On__);
}


UnityEngine_GameObject_o *__fastcall CompensateArgForShowAll__get_ActObj(
        CompensateArgForShowAll_o *this,
        const MethodInfo *method)
{
  return this->fields._ActObj_k__BackingField;
}


BitValue_CompensateArgForShowAll_EffectType__o *__fastcall CompensateArgForShowAll__get_EffectTypeBit(
        CompensateArgForShowAll_o *this,
        const MethodInfo *method)
{
  return this->fields._EffectTypeBit_k__BackingField;
}


System_Int32_array *__fastcall CompensateArgForShowAll__get_ExtraEffectIdArray(
        CompensateArgForShowAll_o *this,
        const MethodInfo *method)
{
  return this->fields._ExtraEffectIdArray_k__BackingField;
}


BattlePerformance_o *__fastcall CompensateArgForShowAll__get_Perf(
        CompensateArgForShowAll_o *this,
        const MethodInfo *method)
{
  return this->fields._Perf_k__BackingField;
}


void __fastcall CompensateArgForShowAll___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_418647B & 1) == 0 )
  {
    sub_B2C35C(&CompensateArgForShowAll___c_TypeInfo, v1);
    byte_418647B = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(CompensateArgForShowAll___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)CompensateArgForShowAll___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
}


void __fastcall CompensateArgForShowAll___c___ctor(CompensateArgForShowAll___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CompensateArgForShowAll___c____ctor_b__13_0(
        CompensateArgForShowAll___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}