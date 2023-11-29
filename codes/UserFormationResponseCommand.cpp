void __fastcall UserFormationResponseCommand___ctor(UserFormationResponseCommand_o *this, const MethodInfo *method)
{
  ResponseCommandBase___ctor((ResponseCommandBase_o *)this, 0LL);
}


int32_t __fastcall UserFormationResponseCommand__ExecuteResponse(
        UserFormationResponseCommand_o *this,
        ResponseData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B170D4();
  return !ResponseData__checkError_30924960(data, 0LL) || !data->fields.success;
}


int32_t __fastcall UserFormationResponseCommand__GetKind(
        UserFormationResponseCommand_o *this,
        const MethodInfo *method)
{
  return 8;
}