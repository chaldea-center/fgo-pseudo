void __fastcall UserSupportDeckMaster___ctor(UserSupportDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B5E60 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string___ctor__);
    byte_42B5E60 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    183,
    (const MethodInfo_23E268C *)Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserSupportDeckEntity_o *__fastcall UserSupportDeckMaster__GetEntity(
        UserSupportDeckMaster_o *this,
        int64_t userId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B5E5E & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__GetEntity__);
    byte_42B5E5E = 1;
  }
  PK = UserSupportDeckEntity__CreatePK(userId, supportDeckId, *(const MethodInfo **)&supportDeckId);
  return (UserSupportDeckEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_23E2728 *)Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__GetEntity__);
}


bool __fastcall UserSupportDeckMaster__TryGetEntity(
        UserSupportDeckMaster_o *this,
        UserSupportDeckEntity_o **entity,
        int64_t userId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42B5E5F & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__TryGetEntity__);
    byte_42B5E5F = 1;
  }
  PK = UserSupportDeckEntity__CreatePK(userId, supportDeckId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__TryGetEntity__);
}


System_String_o *__fastcall UserSupportDeckMaster__getDeckName(
        UserSupportDeckMaster_o *this,
        int32_t deckId,
        const MethodInfo *method)
{
  System_String_o *v5; // x21
  int64_t UserId; // x0
  const MethodInfo *v7; // x4
  _BOOL8 v8; // x0
  __int64 v9; // x1
  UserSupportDeckEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B5E61 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B5E61 = 1;
  }
  entity = 0LL;
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v8 = UserSupportDeckMaster__TryGetEntity(this, &entity, UserId, deckId, v7);
  if ( v8 )
  {
    if ( !entity )
      sub_B52A5C(v8, v9);
    return entity->fields.name;
  }
  return v5;
}