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

  if ( (byte_4B67227 & 1) == 0 )
  {
    sub_1BE4ACC(&ServantAddMaster_TypeInfo, v1);
    sub_1BE4ACC(&StringLiteral_22911/*"presentDialogMessageId"*/, v8);
    byte_4B67227 = 1;
  }
  ServantAddMaster_TypeInfo->static_fields->PRESENT_DIALOG_MESSAGE_ID = (struct System_String_o *)StringLiteral_22911/*"presentDialogMessageId"*/;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)ServantAddMaster_TypeInfo->static_fields,
    StringLiteral_22911/*"presentDialogMessageId"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantAddMaster___ctor(ServantAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67226 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__, method);
    byte_4B67226 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    379,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__);
}