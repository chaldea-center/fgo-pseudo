// attributes: thunk
void __fastcall ResponseCommandBase___ctor(ResponseCommandBase_o *this, const MethodInfo *method)
{
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
  __int64 v2; // x2
  __int64 v4; // x1
  int32_t v5; // w19

  if ( (byte_4B17B5E & 1) == 0 )
  {
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, method, v2);
    byte_4B17B5E = 1;
  }
  v5 = ((__int64 (__fastcall *)(ResponseCommandBase_o *, Il2CppMethodPointer))this->klass->vtable._4_GetKind.method)(
         this,
         this->klass->vtable._5_ExecuteResponse.methodPtr);
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, v4);
  return ResponseCommandKind__GetName(v5, 0LL);
}


int32_t __fastcall ResponseCommandBase__GetKind(ResponseCommandBase_o *this, const MethodInfo *method)
{
  return 0;
}