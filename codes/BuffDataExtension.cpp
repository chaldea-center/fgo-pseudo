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

  if ( (byte_49FA59A & 1) == 0 )
  {
    sub_1B640C8(&System_Diagnostics_StackFrame_TypeInfo, *(_QWORD *)&stackBackCount);
    byte_49FA59A = 1;
  }
  v4 = (System_Diagnostics_StackFrame_o *)sub_1B64314(
                                            System_Diagnostics_StackFrame_TypeInfo,
                                            *(_QWORD *)&stackBackCount,
                                            method);
  System_Diagnostics_StackFrame___ctor_61887452(v4, stackBackCount, 1, 0LL);
  if ( !v4 )
    sub_1B64324(v5);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)inputGeneralParams, (int32_t)method, v3);
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
  System_Int32_array *v5; // x20
  __int64 v6; // x1

  if ( (byte_49FA59C & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, dataVals);
    byte_49FA59C = 1;
  }
  Param = sub_1B64170(int___TypeInfo, 1LL);
  if ( !dataVals || (v5 = (System_Int32_array *)Param, Param = DataVals__GetParam(dataVals, 150, 0, 0LL), !v5) )
    sub_1B64324(Param);
  if ( !v5->max_length )
    sub_1B6432C(Param, v6);
  v5->m_Items[1] = Param;
  return v5;
}


bool __fastcall BuffDataExtension_GeneralParamContinueFunction__get_NotExecFunctionIfKeepAlive(
        BuffDataExtension_GeneralParamContinueFunction_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FA59B & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_int____75711232, method);
    byte_49FA59B = 1;
  }
  return BasicHelper__IndexValue_int_(
           this->fields.generalParams,
           0,
           0,
           (const MethodInfo_2E28154 *)Method_BasicHelper_IndexValue_int____75711232) > 0;
}