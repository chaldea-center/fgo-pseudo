void BuffDataExtension_GeneralParamAccessors___ctor(
        BuffDataExtension_GeneralParamAccessors_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BuffDataExtension_GeneralParamAccessors__get_NotExecFunctionIfKeepAlive(
        BuffDataExtension_GeneralParamAccessors_o *this,
        const MethodInfo *method)
{
  return 0;
}


void BuffDataExtension_GeneralParamAccessorsBase___ctor(
        BuffDataExtension_GeneralParamAccessorsBase_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BuffDataExtension_GeneralParamAccessorsBase__Assertion(
        BuffDataExtension_GeneralParamAccessorsBase_o *this,
        int32_t stackBackCount,
        const MethodInfo *method)
{
  System_Diagnostics_StackFrame_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C54BBD & 1) == 0 )
  {
    sub_1C3E564(&System_Diagnostics_StackFrame_TypeInfo);
    byte_4C54BBD = 1;
  }
  v4 = (System_Diagnostics_StackFrame_o *)sub_1C3E7B0(System_Diagnostics_StackFrame_TypeInfo);
  System_Diagnostics_StackFrame___ctor_64939612(v4, stackBackCount, 1, 0);
  if ( !v4 )
    sub_1C3E7C0(v5, v6);
  ((void (__fastcall *)(System_Diagnostics_StackFrame_o *, const MethodInfo *))v4->klass->vtable._7_GetMethod.methodPtr)(
    v4,
    v4->klass->vtable._7_GetMethod.method);
}


bool BuffDataExtension_GeneralParamAccessorsBase__InvalidAccessReturnBool(
        BuffDataExtension_GeneralParamAccessorsBase_o *this,
        const MethodInfo *method)
{
  return 0;
}


void BuffDataExtension_GeneralParamAccessorsBase__SetGeneralParams(
        BuffDataExtension_GeneralParamAccessorsBase_o *this,
        System_Int32_array *inputGeneralParams,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.generalParams = inputGeneralParams;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)inputGeneralParams, (int32_t)method, v3);
}


void BuffDataExtension_GeneralParamContinueFunction___ctor(
        BuffDataExtension_GeneralParamContinueFunction_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Int32_array *BuffDataExtension_GeneralParamContinueFunction__MakeGeneralParams(
        BuffDataExtension_GeneralParamContinueFunction_o *this,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  __int64 Param; // x0
  __int64 v5; // x1
  __int64 v6; // x20

  if ( (byte_4C54BBF & 1) == 0 )
  {
    sub_1C3E564(&int___TypeInfo);
    byte_4C54BBF = 1;
  }
  Param = sub_1C3E60C(int___TypeInfo, 1);
  if ( !dataVals || (v6 = Param, Param = DataVals__GetParam(dataVals, 151, 0, 0), !v6) )
    sub_1C3E7C0(Param, v5);
  if ( !*(_DWORD *)(v6 + 24) )
    sub_1C3E7C8(Param, v5);
  *(_DWORD *)(v6 + 32) = Param;
  return (System_Int32_array *)v6;
}


bool BuffDataExtension_GeneralParamContinueFunction__get_NotExecFunctionIfKeepAlive(
        BuffDataExtension_GeneralParamContinueFunction_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C54BBE & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_IndexValue_int____78190416);
    byte_4C54BBE = 1;
  }
  return BasicHelper__IndexValue_int_(
           this->fields.generalParams,
           0,
           0,
           (const MethodInfo_30E7F2C *)Method_BasicHelper_IndexValue_int____78190416) > 0;
}