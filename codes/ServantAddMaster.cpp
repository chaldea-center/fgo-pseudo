void __fastcall ServantAddMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FF13C & 1) == 0 )
  {
    sub_1B64A00(&ServantAddMaster_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_22502/*"presentDialogMessageId"*/, v4);
    byte_49FF13C = 1;
  }
  ServantAddMaster_TypeInfo->static_fields->PRESENT_DIALOG_MESSAGE_ID = (struct System_String_o *)StringLiteral_22502/*"presentDialogMessageId"*/;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)ServantAddMaster_TypeInfo->static_fields,
    StringLiteral_22502/*"presentDialogMessageId"*/,
    v2,
    v3);
}


void __fastcall ServantAddMaster___ctor(ServantAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FF13B & 1) == 0 )
  {
    sub_1B64A00(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__, method);
    byte_49FF13B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    375,
    (const MethodInfo_30D6758 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__);
}