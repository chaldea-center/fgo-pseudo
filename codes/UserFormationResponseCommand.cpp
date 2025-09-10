int32_t UserFormationResponseCommand__ExecuteResponse(
        UserFormationResponseCommand_o *this,
        ResponseData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C2D6EC(this, 0);
  return !ResponseData__checkError((ResponseData_o *)this, data->fields.resCode, method) || !data->fields.success;
}


int32_t UserFormationResponseCommand__GetKind(UserFormationResponseCommand_o *this, const MethodInfo *method)
{
  return 8;
}