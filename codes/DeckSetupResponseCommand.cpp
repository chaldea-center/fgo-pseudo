void __fastcall DeckSetupResponseCommand___ctor(DeckSetupResponseCommand_o *this, const MethodInfo *method)
{
  ResponseCommandBase___ctor((ResponseCommandBase_o *)this, 0LL);
}


int32_t __fastcall DeckSetupResponseCommand__ExecuteResponse(
        DeckSetupResponseCommand_o *this,
        ResponseData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B170D4();
  return data->fields.success == 0LL;
}


int32_t __fastcall DeckSetupResponseCommand__GetKind(DeckSetupResponseCommand_o *this, const MethodInfo *method)
{
  return 7;
}