void ServantAddMaster___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_59710DB & 1) == 0 )
  {
    sub_2213A60(&ServantAddMaster_TypeInfo);
    sub_2213A60(&StringLiteral_23945/*"presentDialogMessageId"*/);
    byte_59710DB = 1;
  }
  v7 = StringLiteral_23945/*"presentDialogMessageId"*/;
  ServantAddMaster_TypeInfo->static_fields->PRESENT_DIALOG_MESSAGE_ID = (struct System_String_o *)StringLiteral_23945/*"presentDialogMessageId"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)ServantAddMaster_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
}


void ServantAddMaster___ctor(ServantAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59710D9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__);
    byte_59710D9 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    383,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__);
}


System_String_o *ServantAddMaster__AddIdentifyText(
        ServantAddMaster_o *this,
        int32_t svtId,
        System_String_o *baseName,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  Il2CppObject *IdentifyText; // x20
  __int64 v9; // x1
  System_String_o *v10; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59710DA & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_12403/*"SERVANT_STATUS_ADD_IDENTIFY_TEXT"*/);
    byte_59710DA = 1;
  }
  entity = 0;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         svtId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_2213CDC(0, v7);
    IdentifyText = (Il2CppObject *)ServantAddEntity__GetIdentifyText((ServantAddEntity_o *)entity, v7);
    if ( !System_String__IsNullOrEmpty((System_String_o *)IdentifyText, 0) )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
      v10 = LocalizationManager__Get((System_String_o *)StringLiteral_12403/*"SERVANT_STATUS_ADD_IDENTIFY_TEXT"*/, 0);
      return System_String__Format_75697880(v10, (Il2CppObject *)baseName, IdentifyText, 0);
    }
  }
  return baseName;
}