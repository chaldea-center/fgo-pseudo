void __fastcall ServantAddMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_4AB638F & 1) == 0 )
  {
    sub_1BAB41C(&ServantAddMaster_TypeInfo, v1);
    sub_1BAB41C(&StringLiteral_22629/*"presentDialogMessageId"*/, v4);
    byte_4AB638F = 1;
  }
  ServantAddMaster_TypeInfo->static_fields->PRESENT_DIALOG_MESSAGE_ID = (struct System_String_o *)StringLiteral_22629/*"presentDialogMessageId"*/;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)ServantAddMaster_TypeInfo->static_fields,
    StringLiteral_22629/*"presentDialogMessageId"*/,
    v2,
    v3);
}


void __fastcall ServantAddMaster___ctor(ServantAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB638E & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__, method);
    byte_4AB638E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    375,
    (const MethodInfo_3163D50 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__);
}