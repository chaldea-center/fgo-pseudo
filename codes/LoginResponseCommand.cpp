void __fastcall LoginResponseCommand___ctor(LoginResponseCommand_o *this, const MethodInfo *method)
{
  ResponseCommandBase___ctor((ResponseCommandBase_o *)this, 0LL);
}


int32_t __fastcall LoginResponseCommand__ExecuteResponse(
        LoginResponseCommand_o *this,
        ResponseData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B2C434(this, 0LL);
  return !ResponseData__checkError_31019724(data, 0LL);
}


int32_t __fastcall LoginResponseCommand__GetKind(LoginResponseCommand_o *this, const MethodInfo *method)
{
  return 4;
}