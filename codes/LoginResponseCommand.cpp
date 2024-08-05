int32_t __fastcall LoginResponseCommand__ExecuteResponse(
        LoginResponseCommand_o *this,
        ResponseData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B64ACC(this, 0LL);
  return !ResponseData__checkError((ResponseData_o *)this, data->fields.resCode, method);
}


int32_t __fastcall LoginResponseCommand__GetKind(LoginResponseCommand_o *this, const MethodInfo *method)
{
  return 4;
}