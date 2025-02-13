void __fastcall ServantAddMaster___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7

  if ( (byte_4BDCBC9 & 1) == 0 )
  {
    sub_1C21E38(&ServantAddMaster_TypeInfo);
    sub_1C21E38(&StringLiteral_23002/*"presentDialogMessageId"*/);
    byte_4BDCBC9 = 1;
  }
  ServantAddMaster_TypeInfo->static_fields->PRESENT_DIALOG_MESSAGE_ID = (struct System_String_o *)StringLiteral_23002/*"presentDialogMessageId"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)ServantAddMaster_TypeInfo->static_fields,
    StringLiteral_23002/*"presentDialogMessageId"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void __fastcall ServantAddMaster___ctor(ServantAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDCBC7 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__);
    byte_4BDCBC7 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    379,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__);
}


System_String_o *__fastcall ServantAddMaster__AddIdentifyText(
        ServantAddMaster_o *this,
        int32_t svtId,
        System_String_o *baseName,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  Il2CppObject *IdentifyText; // x20
  System_String_o *v9; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDCBC8 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&StringLiteral_12062/*"SERVANT_STATUS_ADD_IDENTIFY_TEXT"*/);
    byte_4BDCBC8 = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         svtId,
         (const MethodInfo_325BE14 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1C22094(0LL, v7);
    IdentifyText = (Il2CppObject *)ServantAddEntity__GetIdentifyText((ServantAddEntity_o *)entity, v7);
    if ( !System_String__IsNullOrEmpty((System_String_o *)IdentifyText, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_12062/*"SERVANT_STATUS_ADD_IDENTIFY_TEXT"*/, 0LL);
      return System_String__Format_63129848(v9, (Il2CppObject *)baseName, IdentifyText, 0LL);
    }
  }
  return baseName;
}