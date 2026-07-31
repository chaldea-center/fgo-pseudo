void LoginResponseCommand___ctor(LoginResponseCommand_o *this, const MethodInfo *method)
{
  ResponseCommandBase___ctor((ResponseCommandBase_o *)this, 0);
}


int32_t LoginResponseCommand__ExecuteResponse(
        LoginResponseCommand_o *this,
        ResponseData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_21FFECC(this, 0);
  return !ResponseData__checkError_51190916(data, 0);
}


int32_t LoginResponseCommand__GetKind(LoginResponseCommand_o *this, const MethodInfo *method)
{
  return 4;
}