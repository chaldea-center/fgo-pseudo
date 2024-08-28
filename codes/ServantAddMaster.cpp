void __fastcall ServantAddMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_4A200F2 & 1) == 0 )
  {
    sub_1B715CC(&ServantAddMaster_TypeInfo, v1);
    sub_1B715CC(&StringLiteral_22535/*"presentDialogMessageId"*/, v4);
    byte_4A200F2 = 1;
  }
  ServantAddMaster_TypeInfo->static_fields->PRESENT_DIALOG_MESSAGE_ID = (struct System_String_o *)StringLiteral_22535/*"presentDialogMessageId"*/;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)ServantAddMaster_TypeInfo->static_fields,
    StringLiteral_22535/*"presentDialogMessageId"*/,
    v2,
    v3);
}


void __fastcall ServantAddMaster___ctor(ServantAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A200F1 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__, method);
    byte_4A200F1 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    375,
    (const MethodInfo_30F8720 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__);
}