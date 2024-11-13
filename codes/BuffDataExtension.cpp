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
  __int64 v3; // x3
  System_Diagnostics_StackFrame_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B1423C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Diagnostics_StackFrame_TypeInfo, *(_QWORD *)&stackBackCount, method);
    byte_4B1423C = 1;
  }
  v5 = (System_Diagnostics_StackFrame_o *)sub_1BCAA2C(
                                            System_Diagnostics_StackFrame_TypeInfo,
                                            *(_QWORD *)&stackBackCount,
                                            method,
                                            v3);
  System_Diagnostics_StackFrame___ctor_62913612(v5, stackBackCount, 1, 0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  ((void (__fastcall *)(System_Diagnostics_StackFrame_o *, Il2CppMethodPointer))v5->klass->vtable._8_GetMethod.method)(
    v5,
    v5->klass->vtable._9_GetNativeOffset.methodPtr);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.generalParams = inputGeneralParams;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields,
    (int64_t)inputGeneralParams,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4B1423E & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, dataVals, method);
    byte_4B1423E = 1;
  }
  Param = sub_1BCA888(int___TypeInfo, 1LL);
  if ( !dataVals || (v6 = (System_Int32_array *)Param, Param = DataVals__GetParam(dataVals, 150, 0, 0LL), !v6) )
    sub_1BCAA3C(Param, v5);
  if ( !v6->max_length )
    sub_1BCAA44(Param, v5);
  v6->m_Items[1] = Param;
  return v6;
}


bool __fastcall BuffDataExtension_GeneralParamContinueFunction__get_NotExecFunctionIfKeepAlive(
        BuffDataExtension_GeneralParamContinueFunction_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1423D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_int____76842096, method, v2);
    byte_4B1423D = 1;
  }
  return BasicHelper__IndexValue_int_(
           this->fields.generalParams,
           0,
           0,
           (const MethodInfo_2F01774 *)Method_BasicHelper_IndexValue_int____76842096) > 0;
}