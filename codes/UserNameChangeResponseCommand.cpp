int32_t UserNameChangeResponseCommand__ExecuteResponse(
        UserNameChangeResponseCommand_o *this,
        ResponseData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C372B4(this);
  return !ResponseData__checkError((ResponseData_o *)this, data->fields.resCode, method) || !data->fields.success;
}


int32_t UserNameChangeResponseCommand__GetKind(UserNameChangeResponseCommand_o *this, const MethodInfo *method)
{
  return 19;
}