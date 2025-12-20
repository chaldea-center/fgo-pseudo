void DeckSetupResponseCommand___ctor(DeckSetupResponseCommand_o *this, const MethodInfo *method)
{
  ResponseCommandBase___ctor((ResponseCommandBase_o *)this, 0);
}


int32_t DeckSetupResponseCommand__ExecuteResponse(
        DeckSetupResponseCommand_o *this,
        ResponseData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C942F0(this, 0);
  return data->fields.success == 0;
}


int32_t DeckSetupResponseCommand__GetKind(DeckSetupResponseCommand_o *this, const MethodInfo *method)
{
  return 7;
}