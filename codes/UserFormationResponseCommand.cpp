int32_t __fastcall UserFormationResponseCommand__ExecuteResponse(
        UserFormationResponseCommand_o *this,
        ResponseData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C2E388(this, 0LL);
  return !ResponseData__checkError((ResponseData_o *)this, data->fields.resCode, method) || !data->fields.success;
}


int32_t __fastcall UserFormationResponseCommand__GetKind(
        UserFormationResponseCommand_o *this,
        const MethodInfo *method)
{
  return 8;
}