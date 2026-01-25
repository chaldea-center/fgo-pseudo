int32_t LoginResponseCommand__ExecuteResponse(
        LoginResponseCommand_o *this,
        ResponseData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C7BD40(this, 0);
  return !ResponseData__checkError((ResponseData_o *)this, data->fields.resCode, method);
}


int32_t LoginResponseCommand__GetKind(LoginResponseCommand_o *this, const MethodInfo *method)
{
  return 4;
}