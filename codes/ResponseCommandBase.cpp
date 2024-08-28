int32_t __fastcall ResponseCommandBase__ExecuteResponse(
        ResponseCommandBase_o *this,
        ResponseData_o *data,
        const MethodInfo *method)
{
  return 0;
}


System_String_o *__fastcall ResponseCommandBase__GetCommandName(ResponseCommandBase_o *this, const MethodInfo *method)
{
  int32_t v3; // w19

  if ( (byte_4A0A581 & 1) == 0 )
  {
    sub_1B686D4(&ResponseCommandKind_TypeInfo, method);
    byte_4A0A581 = 1;
  }
  v3 = ((__int64 (__fastcall *)(ResponseCommandBase_o *, Il2CppMethodPointer))this->klass->vtable._4_GetKind.method)(
         this,
         this->klass->vtable._5_ExecuteResponse.methodPtr);
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  return ResponseCommandKind__GetName(v3, 0LL);
}


int32_t __fastcall ResponseCommandBase__GetKind(ResponseCommandBase_o *this, const MethodInfo *method)
{
  return 0;
}