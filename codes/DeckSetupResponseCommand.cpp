int32_t __fastcall DeckSetupResponseCommand__ExecuteResponse(
        DeckSetupResponseCommand_o *this,
        ResponseData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B71828(this, 0LL);
  return data->fields.success == 0LL;
}


int32_t __fastcall DeckSetupResponseCommand__GetKind(DeckSetupResponseCommand_o *this, const MethodInfo *method)
{
  return 7;
}