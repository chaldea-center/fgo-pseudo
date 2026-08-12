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

  if ( (byte_596E588 & 1) == 0 )
  {
    sub_2213A60(&System_Diagnostics_StackFrame_TypeInfo);
    byte_596E588 = 1;
  }
  v4 = (System_Diagnostics_StackFrame_o *)sub_2213CCC(System_Diagnostics_StackFrame_TypeInfo);
  System_Diagnostics_StackFrame___ctor_76784932(v4, stackBackCount, 1, 0);
  if ( !v4 )
    sub_2213CDC(v5, v6);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.generalParams = inputGeneralParams;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)inputGeneralParams,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_596E58A & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    byte_596E58A = 1;
  }
  Param = sub_2213B20(int___TypeInfo, 1);
  if ( !dataVals || (v6 = Param, Param = DataVals__GetParam(dataVals, 154, 0, 0), !v6) )
    sub_2213CDC(Param, v5);
  if ( !*(_DWORD *)(v6 + 24) )
    sub_2213CE4(Param);
  *(_DWORD *)(v6 + 32) = Param;
  return (System_Int32_array *)v6;
}


bool BuffDataExtension_GeneralParamContinueFunction__get_NotExecFunctionIfKeepAlive(
        BuffDataExtension_GeneralParamContinueFunction_o *this,
        const MethodInfo *method)
{
  if ( (byte_596E589 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_int____91713824);
    byte_596E589 = 1;
  }
  return BasicHelper__IndexValue_int_(
           this->fields.generalParams,
           0,
           0,
           (const MethodInfo_3814BE4 *)Method_BasicHelper_IndexValue_int____91713824) > 0;
}