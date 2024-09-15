void __fastcall BuffDataExtension_GeneralParamAccessors___ctor(
        BuffDataExtension_GeneralParamAccessors_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BuffDataExtension_GeneralParamAccessors__get_NotExecFunctionIfKeepAlive(
        BuffDataExtension_GeneralParamAccessors_o *this,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall BuffDataExtension_GeneralParamAccessorsBase___ctor(
        BuffDataExtension_GeneralParamAccessorsBase_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BuffDataExtension_GeneralParamAccessorsBase__Assertion(
        BuffDataExtension_GeneralParamAccessorsBase_o *this,
        int32_t stackBackCount,
        const MethodInfo *method)
{
  System_Diagnostics_StackFrame_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A2C0A4 & 1) == 0 )
  {
    sub_1B761C0(&System_Diagnostics_StackFrame_TypeInfo, *(_QWORD *)&stackBackCount);
    byte_4A2C0A4 = 1;
  }
  v4 = (System_Diagnostics_StackFrame_o *)sub_1B7640C(System_Diagnostics_StackFrame_TypeInfo);
  System_Diagnostics_StackFrame___ctor_62047124(v4, stackBackCount, 1, 0LL);
  if ( !v4 )
    sub_1B7641C(v5, v6);
  ((void (__fastcall *)(System_Diagnostics_StackFrame_o *, Il2CppMethodPointer))v4->klass->vtable._8_GetMethod.method)(
    v4,
    v4->klass->vtable._9_GetNativeOffset.methodPtr);
}


bool __fastcall BuffDataExtension_GeneralParamAccessorsBase__InvalidAccessReturnBool(
        BuffDataExtension_GeneralParamAccessorsBase_o *this,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall BuffDataExtension_GeneralParamAccessorsBase__SetGeneralParams(
        BuffDataExtension_GeneralParamAccessorsBase_o *this,
        System_Int32_array *inputGeneralParams,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.generalParams = inputGeneralParams;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)inputGeneralParams, (int32_t)method, v3);
}


void __fastcall BuffDataExtension_GeneralParamContinueFunction___ctor(
        BuffDataExtension_GeneralParamContinueFunction_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int32_array *__fastcall BuffDataExtension_GeneralParamContinueFunction__MakeGeneralParams(
        BuffDataExtension_GeneralParamContinueFunction_o *this,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  __int64 Param; // x0
  __int64 v5; // x1
  System_Int32_array *v6; // x20

  if ( (byte_4A2C0A6 & 1) == 0 )
  {
    sub_1B761C0(&int___TypeInfo, dataVals);
    byte_4A2C0A6 = 1;
  }
  Param = sub_1B76268(int___TypeInfo, 1LL);
  if ( !dataVals || (v6 = (System_Int32_array *)Param, Param = DataVals__GetParam(dataVals, 150, 0, 0LL), !v6) )
    sub_1B7641C(Param, v5);
  if ( !v6->max_length )
    sub_1B76424(Param, v5);
  v6->m_Items[1] = Param;
  return v6;
}


bool __fastcall BuffDataExtension_GeneralParamContinueFunction__get_NotExecFunctionIfKeepAlive(
        BuffDataExtension_GeneralParamContinueFunction_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A2C0A5 & 1) == 0 )
  {
    sub_1B761C0(&Method_BasicHelper_IndexValue_int____75908528, method);
    byte_4A2C0A5 = 1;
  }
  return BasicHelper__IndexValue_int_(
           this->fields.generalParams,
           0,
           0,
           (const MethodInfo_2E51170 *)Method_BasicHelper_IndexValue_int____75908528) > 0;
}