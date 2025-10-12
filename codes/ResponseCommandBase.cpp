// attributes: thunk
void ResponseCommandBase___ctor(ResponseCommandBase_o *this, const MethodInfo *method)
{
  ResponseData___ctor((ResponseData_o *)this, method);
}


int32_t ResponseCommandBase__ExecuteResponse(
        ResponseCommandBase_o *this,
        ResponseData_o *data,
        const MethodInfo *method)
{
  return 0;
}


System_String_o *ResponseCommandBase__GetCommandName(ResponseCommandBase_o *this, const MethodInfo *method)
{
  int32_t v3; // w19

  if ( (byte_4C39582 & 1) == 0 )
  {
    sub_1C32C20(&ResponseCommandKind_TypeInfo);
    byte_4C39582 = 1;
  }
  v3 = ((__int64 (__fastcall *)(ResponseCommandBase_o *, const MethodInfo *))this->klass->vtable._4_GetKind.methodPtr)(
         this,
         this->klass->vtable._4_GetKind.method);
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  return ResponseCommandKind__GetName(v3, 0);
}


int32_t ResponseCommandBase__GetKind(ResponseCommandBase_o *this, const MethodInfo *method)
{
  return 0;
}