void __fastcall FuncParamValueUpInfoBase___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  BattleDataDefine_c *v3; // x0

  if ( (byte_40FB2EE & 1) == 0 )
  {
    sub_B16FFC(&BattleDataDefine_TypeInfo, v1);
    sub_B16FFC(&FuncParamValueUpInfoBase_TypeInfo, v2);
    byte_40FB2EE = 1;
  }
  v3 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v3 = BattleDataDefine_TypeInfo;
  }
  FuncParamValueUpInfoBase_TypeInfo->static_fields->ValueEnhanceDenominator = v3->static_fields->PERMILLAGE_DENOMINATOR_INT;
}


void __fastcall FuncParamValueUpInfoBase___ctor(FuncParamValueUpInfoBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall FuncParamValueUpInfoBase__Enhance(
        FuncParamValueUpInfoBase_o *this,
        int32_t type,
        int32_t value,
        const MethodInfo *method)
{
  __int64 v4; // x19
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  FuncParamValueUpInfoBase_c *v9; // x0

  LODWORD(v4) = value;
  if ( (byte_40FB2ED & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_DataVals_TYPE___, *(_QWORD *)&type);
    sub_B16FFC(&FuncParamValueUpInfoBase_TypeInfo, v7);
    byte_40FB2ED = 1;
  }
  if ( this->fields._ValueEnhanceRate_k__BackingField )
  {
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(FuncParamValueUpInfoBase_o *, Il2CppMethodPointer, _QWORD, const MethodInfo *))this->klass->vtable._4_unknown.method)(
                                                                this,
                                                                this->klass->vtable._5_Enhance.methodPtr,
                                                                *(_QWORD *)&value,
                                                                method);
    if ( v8 )
    {
      if ( System_Linq_Enumerable__Contains_ListViewSort_FilterKind_(
             v8,
             type,
             (const MethodInfo_18D1C38 *)Method_System_Linq_Enumerable_Contains_DataVals_TYPE___) )
      {
        v9 = FuncParamValueUpInfoBase_TypeInfo;
        if ( (BYTE3(FuncParamValueUpInfoBase_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !FuncParamValueUpInfoBase_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoBase_TypeInfo);
          v9 = FuncParamValueUpInfoBase_TypeInfo;
        }
        return (this->fields._ValueEnhanceRate_k__BackingField + v9->static_fields->ValueEnhanceDenominator)
             * (__int64)(int)v4
             / v9->static_fields->ValueEnhanceDenominator;
      }
    }
  }
  return v4;
}


int32_t __fastcall FuncParamValueUpInfoBase__get_ValueEnhanceRate(
        FuncParamValueUpInfoBase_o *this,
        const MethodInfo *method)
{
  return this->fields._ValueEnhanceRate_k__BackingField;
}


void __fastcall FuncParamValueUpInfoBase__set_ValueEnhanceRate(
        FuncParamValueUpInfoBase_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ValueEnhanceRate_k__BackingField = value;
}