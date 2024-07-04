void __fastcall ServantAddMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_48E2DCB & 1) == 0 )
  {
    sub_1B00CCC(&ServantAddMaster_TypeInfo, v1);
    sub_1B00CCC(&StringLiteral_22282/*"presentDialogMessageId"*/, v4);
    byte_48E2DCB = 1;
  }
  ServantAddMaster_TypeInfo->static_fields->PRESENT_DIALOG_MESSAGE_ID = (struct System_String_o *)StringLiteral_22282/*"presentDialogMessageId"*/;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)ServantAddMaster_TypeInfo->static_fields,
    StringLiteral_22282/*"presentDialogMessageId"*/,
    v2,
    v3);
}


void __fastcall ServantAddMaster___ctor(ServantAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_48E2DCA & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__, method);
    byte_48E2DCA = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    374,
    (const MethodInfo_2FE6A0C *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__);
}