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

  if ( (byte_4B1A3D9 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Diagnostics_StackFrame_TypeInfo, *(_QWORD *)&stackBackCount);
    byte_4B1A3D9 = 1;
  }
  v4 = (System_Diagnostics_StackFrame_o *)sub_1BCB244(System_Diagnostics_StackFrame_TypeInfo);
  System_Diagnostics_StackFrame___ctor_63752172(v4, stackBackCount, 1, 0LL);
  if ( !v4 )
    sub_1BCB254(v5, v6);
  ((void (__fastcall *)(System_Diagnostics_StackFrame_o *, Il2CppMethodPointer))v4->klass->vtable._7_GetMethod.method)(
    v4,
    v4->klass->vtable._8_GetNativeOffset.methodPtr);
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
  const MethodInfo *v3; // x3

  this->fields.generalParams = inputGeneralParams;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)inputGeneralParams, (int32_t)method, v3);
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
  __int64 v7; // x2

  if ( (byte_4B1A3DB & 1) == 0 )
  {
    sub_1BCAFF8(&int___TypeInfo, dataVals);
    byte_4B1A3DB = 1;
  }
  Param = sub_1BCB0A0(int___TypeInfo, 1LL);
  if ( !dataVals || (v6 = (System_Int32_array *)Param, Param = DataVals__GetParam(dataVals, 151, 0, 0LL), !v6) )
    sub_1BCB254(Param, v5);
  if ( !v6->max_length )
    sub_1BCB25C(Param, v5, v7);
  v6->m_Items[1] = Param;
  return v6;
}


bool __fastcall BuffDataExtension_GeneralParamContinueFunction__get_NotExecFunctionIfKeepAlive(
        BuffDataExtension_GeneralParamContinueFunction_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1A3DA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_IndexValue_int____76920464, method);
    byte_4B1A3DA = 1;
  }
  return BasicHelper__IndexValue_int_(
           this->fields.generalParams,
           0,
           0,
           (const MethodInfo_3009038 *)Method_BasicHelper_IndexValue_int____76920464) > 0;
}