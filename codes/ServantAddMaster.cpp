void __fastcall ServantAddMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B16843 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantAddMaster_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_22833/*"presentDialogMessageId"*/, v8, v9);
    byte_4B16843 = 1;
  }
  ServantAddMaster_TypeInfo->static_fields->PRESENT_DIALOG_MESSAGE_ID = (struct System_String_o *)StringLiteral_22833/*"presentDialogMessageId"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantAddMaster_TypeInfo->static_fields,
    StringLiteral_22833/*"presentDialogMessageId"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantAddMaster___ctor(ServantAddMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16842 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__, method, v2);
    byte_4B16842 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    375,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__);
}