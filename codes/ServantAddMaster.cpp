void __fastcall ServantAddMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A5B792 & 1) == 0 )
  {
    sub_1B885B0(&ServantAddMaster_TypeInfo);
    sub_1B885B0(&StringLiteral_22591/*"presentDialogMessageId"*/);
    byte_4A5B792 = 1;
  }
  ServantAddMaster_TypeInfo->static_fields->PRESENT_DIALOG_MESSAGE_ID = (struct System_String_o *)StringLiteral_22591/*"presentDialogMessageId"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ServantAddMaster_TypeInfo->static_fields,
    StringLiteral_22591/*"presentDialogMessageId"*/,
    v1,
    v2);
}


void __fastcall ServantAddMaster___ctor(ServantAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B791 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__);
    byte_4A5B791 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    375,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__);
}