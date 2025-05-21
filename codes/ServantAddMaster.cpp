void __fastcall ServantAddMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1

  if ( (byte_4B4524D & 1) == 0 )
  {
    sub_1BDB878(&ServantAddMaster_TypeInfo, v1);
    sub_1BDB878(&StringLiteral_22782/*"presentDialogMessageId"*/, v4);
    byte_4B4524D = 1;
  }
  ServantAddMaster_TypeInfo->static_fields->PRESENT_DIALOG_MESSAGE_ID = (struct System_String_o *)StringLiteral_22782/*"presentDialogMessageId"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)ServantAddMaster_TypeInfo->static_fields, StringLiteral_22782/*"presentDialogMessageId"*/, v2, v3);
}


void __fastcall ServantAddMaster___ctor(ServantAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B4524B & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__, method);
    byte_4B4524B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    381,
    (const MethodInfo_32DFB18 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__);
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

  if ( (byte_4B4524C & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__, *(_QWORD *)&svtId);
    sub_1BDB878(&LocalizationManager_TypeInfo, v7);
    sub_1BDB878(&StringLiteral_11861/*"SERVANT_STATUS_ADD_IDENTIFY_TEXT"*/, v8);
    byte_4B4524C = 1;
  }
  entity = 0LL;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         svtId,
         (const MethodInfo_32E1E88 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
  {
    if ( !entity )
      sub_1BDBAD4(0LL, v9);
    IdentifyText = (Il2CppObject *)ServantAddEntity__GetIdentifyText((ServantAddEntity_o *)entity, v9);
    if ( !System_String__IsNullOrEmpty((System_String_o *)IdentifyText, 0LL) )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_11861/*"SERVANT_STATUS_ADD_IDENTIFY_TEXT"*/, 0LL);
      return System_String__Format_62613552(v11, (Il2CppObject *)baseName, IdentifyText, 0LL);
    }
  }
  return baseName;
}