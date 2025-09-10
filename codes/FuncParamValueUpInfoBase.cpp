void FuncParamValueUpInfoBase___cctor(const MethodInfo *method)
{
  BattleDataDefine_c *v1; // x0

  if ( (byte_4C2A1F0 & 1) == 0 )
  {
    sub_1C2D490(&BattleDataDefine_TypeInfo);
    sub_1C2D490(&FuncParamValueUpInfoBase_TypeInfo);
    byte_4C2A1F0 = 1;
  }
  v1 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v1 = BattleDataDefine_TypeInfo;
  }
  FuncParamValueUpInfoBase_TypeInfo->static_fields->ValueEnhanceDenominator = v1->static_fields->PERMILLAGE_DENOMINATOR_INT;
}


void FuncParamValueUpInfoBase___ctor(FuncParamValueUpInfoBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
int32_t FuncParamValueUpInfoBase__Enhance(
        FuncParamValueUpInfoBase_o *this,
        int32_t type,
        int32_t value,
        const MethodInfo *method)
{
  __int64 v4; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  FuncParamValueUpInfoBase_c *v8; // x0

  LODWORD(v4) = value;
  if ( (byte_4C2A1EF & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_DataVals_TYPE___);
    sub_1C2D490(&FuncParamValueUpInfoBase_TypeInfo);
    byte_4C2A1EF = 1;
  }
  if ( this->fields._ValueEnhanceRate_k__BackingField )
  {
    v7 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(FuncParamValueUpInfoBase_o *, const MethodInfo *, _QWORD, const MethodInfo *))this->klass->vtable._4_unknown.methodPtr)(
                                                                this,
                                                                this->klass->vtable._4_unknown.method,
                                                                *(_QWORD *)&value,
                                                                method);
    if ( v7 )
    {
      if ( System_Linq_Enumerable__Contains_Int32Enum_(
             v7,
             type,
             (const MethodInfo_30EB9FC *)Method_System_Linq_Enumerable_Contains_DataVals_TYPE___) )
      {
        v8 = FuncParamValueUpInfoBase_TypeInfo;
        if ( !FuncParamValueUpInfoBase_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoBase_TypeInfo);
          v8 = FuncParamValueUpInfoBase_TypeInfo;
        }
        return (this->fields._ValueEnhanceRate_k__BackingField + v8->static_fields->ValueEnhanceDenominator)
             * (__int64)(int)v4
             / v8->static_fields->ValueEnhanceDenominator;
      }
    }
  }
  return v4;
}


int32_t FuncParamValueUpInfoBase__get_ValueEnhanceRate(FuncParamValueUpInfoBase_o *this, const MethodInfo *method)
{
  return this->fields._ValueEnhanceRate_k__BackingField;
}


void FuncParamValueUpInfoBase__set_ValueEnhanceRate(
        FuncParamValueUpInfoBase_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ValueEnhanceRate_k__BackingField = value;
}