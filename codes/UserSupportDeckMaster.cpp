void __fastcall UserSupportDeckMaster___ctor(UserSupportDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418D28E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string___ctor__, method);
    byte_418D28E = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    182,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserSupportDeckEntity_o *__fastcall UserSupportDeckMaster__GetEntity(
        UserSupportDeckMaster_o *this,
        int64_t userId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_418D28C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__GetEntity__, userId);
    byte_418D28C = 1;
  }
  PK = UserSupportDeckEntity__CreatePK(userId, supportDeckId, *(const MethodInfo **)&supportDeckId);
  return (UserSupportDeckEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                      (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_24E4520 *)Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__GetEntity__);
}


bool __fastcall UserSupportDeckMaster__TryGetEntity(
        UserSupportDeckMaster_o *this,
        UserSupportDeckEntity_o **entity,
        int64_t userId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_418D28D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__TryGetEntity__, entity);
    byte_418D28D = 1;
  }
  PK = UserSupportDeckEntity__CreatePK(userId, supportDeckId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserSupportDeckMaster__getDeckName(
        UserSupportDeckMaster_o *this,
        int32_t deckId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *v6; // x21
  int64_t UserId; // x0
  const MethodInfo *v8; // x4
  _BOOL8 v9; // x0
  __int64 v10; // x1
  UserSupportDeckEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418D28F & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, *(_QWORD *)&deckId);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_418D28F = 1;
  }
  entity = 0LL;
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v9 = UserSupportDeckMaster__TryGetEntity(this, &entity, UserId, deckId, v8);
  if ( v9 )
  {
    if ( !entity )
      sub_B2C434(v9, v10);
    return entity->fields.name;
  }
  return v6;
}