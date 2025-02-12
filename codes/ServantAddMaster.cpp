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

  if ( (byte_4BC812D & 1) == 0 )
  {
    sub_1C1ABD4(&ServantAddMaster_TypeInfo, v1);
    sub_1C1ABD4(&StringLiteral_22982/*"presentDialogMessageId"*/, v8);
    byte_4BC812D = 1;
  }
  ServantAddMaster_TypeInfo->static_fields->PRESENT_DIALOG_MESSAGE_ID = (struct System_String_o *)StringLiteral_22982/*"presentDialogMessageId"*/;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)ServantAddMaster_TypeInfo->static_fields,
    StringLiteral_22982/*"presentDialogMessageId"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantAddMaster___ctor(ServantAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC812B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__, method);
    byte_4BC812B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    379,
    (const MethodInfo_3246354 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantAddMaster__AddIdentifyText(
        ServantAddMaster_o *this,
        int32_t svtId,
        System_String_o *baseName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  Il2CppObject *IdentifyText; // x20
  System_String_o *v11; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BC812C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__, *(_QWORD *)&svtId);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v7);
    sub_1C1ABD4(&StringLiteral_12052/*"SERVANT_STATUS_ADD_IDENTIFY_TEXT"*/, v8);
    byte_4BC812C = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         svtId,
         (const MethodInfo_32486C4 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1C1AE30(0LL, v9);
    IdentifyText = (Il2CppObject *)ServantAddEntity__GetIdentifyText((ServantAddEntity_o *)entity, v9);
    if ( !System_String__IsNullOrEmpty((System_String_o *)IdentifyText, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_12052/*"SERVANT_STATUS_ADD_IDENTIFY_TEXT"*/, 0LL);
      return System_String__Format_63054740(v11, (Il2CppObject *)baseName, IdentifyText, 0LL);
    }
  }
  return baseName;
}