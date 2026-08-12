int32_t ResponseCommandBase__ExecuteResponse(
        ResponseCommandBase_o *this,
        ResponseData_o *data,
        const MethodInfo *method)
{
  return 0;
}


System_String_o *ResponseCommandBase__GetCommandName(ResponseCommandBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t v4; // w19

  if ( (byte_59724AE & 1) == 0 )
  {
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    byte_59724AE = 1;
  }
  v4 = ((__int64 (__fastcall *)(ResponseCommandBase_o *, const MethodInfo *))this->klass->vtable._4_GetKind.methodPtr)(
         this,
         this->klass->vtable._4_GetKind.method);
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, v3);
  return ResponseCommandKind__GetName(v4, 0);
}


int32_t ResponseCommandBase__GetKind(ResponseCommandBase_o *this, const MethodInfo *method)
{
  return 0;
}