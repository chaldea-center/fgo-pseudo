int32_t __fastcall UserNameChangeResponseCommand__ExecuteResponse(
        UserNameChangeResponseCommand_o *this,
        ResponseData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1BCB254(this, 0LL);
  return !ResponseData__checkError((ResponseData_o *)this, data->fields.resCode, method) || !data->fields.success;
}


int32_t __fastcall UserNameChangeResponseCommand__GetKind(
        UserNameChangeResponseCommand_o *this,
        const MethodInfo *method)
{
  return 19;
}