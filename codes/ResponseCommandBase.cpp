void __fastcall ResponseCommandBase___ctor(ResponseCommandBase_o *this, const MethodInfo *method)
{
  if ( (byte_418ADD5 & 1) == 0 )
  {
    sub_B2C35C(&ResponseData_TypeInfo, method);
    byte_418ADD5 = 1;
  }
  if ( (BYTE3(ResponseData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !ResponseData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseData_TypeInfo);
  ResponseData___ctor((ResponseData_o *)this, method);
}


int32_t __fastcall ResponseCommandBase__ExecuteResponse(
        ResponseCommandBase_o *this,
        ResponseData_o *data,
        const MethodInfo *method)
{
  return 0;
}


System_String_o *__fastcall ResponseCommandBase__GetCommandName(ResponseCommandBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int32_t v4; // w19

  if ( (byte_418ADD4 & 1) == 0 )
  {
    sub_B2C35C(&ResponseCommandKind_TypeInfo, method);
    byte_418ADD4 = 1;
  }
  v4 = ((__int64 (__fastcall *)(ResponseCommandBase_o *, Il2CppMethodPointer))this->klass->vtable._4_GetKind.method)(
         this,
         this->klass->vtable._5_ExecuteResponse.methodPtr);
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  return ResponseCommandKind__GetName(v4, v3);
}


int32_t __fastcall ResponseCommandBase__GetKind(ResponseCommandBase_o *this, const MethodInfo *method)
{
  return 0;
}