void ServantAddMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D2D0AC & 1) == 0 )
  {
    sub_1C94098(&ServantAddMaster_TypeInfo);
    sub_1C94098(&StringLiteral_22985/*"presentDialogMessageId"*/);
    byte_4D2D0AC = 1;
  }
  ServantAddMaster_TypeInfo->static_fields->PRESENT_DIALOG_MESSAGE_ID = (struct System_String_o *)StringLiteral_22985/*"presentDialogMessageId"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)ServantAddMaster_TypeInfo->static_fields,
    StringLiteral_22985/*"presentDialogMessageId"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void ServantAddMaster___ctor(ServantAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D0AA & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__);
    byte_4D2D0AA = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    381,
    (const MethodInfo_345919C *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__);
}


System_String_o *ServantAddMaster__AddIdentifyText(
        ServantAddMaster_o *this,
        int32_t svtId,
        System_String_o *baseName,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  Il2CppObject *IdentifyText; // x20
  System_String_o *v9; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2D0AB & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_11939/*"SERVANT_STATUS_ADD_IDENTIFY_TEXT"*/);
    byte_4D2D0AB = 1;
  }
  entity = 0;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         svtId,
         (const MethodInfo_345B50C *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1C942F0(0, v7);
    IdentifyText = (Il2CppObject *)ServantAddEntity__GetIdentifyText((ServantAddEntity_o *)entity, v7);
    if ( !System_String__IsNullOrEmpty((System_String_o *)IdentifyText, 0) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11939/*"SERVANT_STATUS_ADD_IDENTIFY_TEXT"*/, 0);
      return System_String__Format_64459052(v9, (Il2CppObject *)baseName, IdentifyText, 0);
    }
  }
  return baseName;
}