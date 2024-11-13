void __fastcall FuncParamValueUpInfoBase___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  BattleDataDefine_c *v5; // x0

  if ( (byte_4B18D17 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, v1, v2);
    sub_1BCA7E0(&FuncParamValueUpInfoBase_TypeInfo, v3, v4);
    byte_4B18D17 = 1;
  }
  v5 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v1);
    v5 = BattleDataDefine_TypeInfo;
  }
  FuncParamValueUpInfoBase_TypeInfo->static_fields->ValueEnhanceDenominator = v5->static_fields->PERMILLAGE_DENOMINATOR_INT;
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
  __int64 v8; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  __int64 v10; // x1
  FuncParamValueUpInfoBase_c *v11; // x0

  LODWORD(v4) = value;
  if ( (byte_4B18D16 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_DataVals_TYPE___, *(_QWORD *)&type, *(_QWORD *)&value);
    sub_1BCA7E0(&FuncParamValueUpInfoBase_TypeInfo, v7, v8);
    byte_4B18D16 = 1;
  }
  if ( this->fields._ValueEnhanceRate_k__BackingField )
  {
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)((__int64 (__fastcall *)(FuncParamValueUpInfoBase_o *, Il2CppMethodPointer, _QWORD, const MethodInfo *))this->klass->vtable._4_unknown.method)(
                                                                this,
                                                                this->klass->vtable._5_Enhance.methodPtr,
                                                                *(_QWORD *)&value,
                                                                method);
    if ( v9 )
    {
      if ( System_Linq_Enumerable__Contains_Int32Enum_(
             v9,
             type,
             (const MethodInfo_2F2B078 *)Method_System_Linq_Enumerable_Contains_DataVals_TYPE___) )
      {
        v11 = FuncParamValueUpInfoBase_TypeInfo;
        if ( !FuncParamValueUpInfoBase_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(FuncParamValueUpInfoBase_TypeInfo, v10);
          v11 = FuncParamValueUpInfoBase_TypeInfo;
        }
        return (this->fields._ValueEnhanceRate_k__BackingField + v11->static_fields->ValueEnhanceDenominator)
             * (__int64)(int)v4
             / v11->static_fields->ValueEnhanceDenominator;
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