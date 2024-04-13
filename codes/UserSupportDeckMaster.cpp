void __fastcall UserSupportDeckMaster___ctor(UserSupportDeckMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EE6C7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EE6C7 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    183,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserSupportDeckEntity_o *__fastcall UserSupportDeckMaster__GetEntity(
        UserSupportDeckMaster_o *this,
        int64_t userId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EE6C5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__GetEntity__,
      userId,
      supportDeckId,
      method);
    byte_42EE6C5 = 1;
  }
  PK = UserSupportDeckEntity__CreatePK(userId, supportDeckId, *(const MethodInfo **)&supportDeckId);
  return (UserSupportDeckEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                      (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                      PK,
                                      (const MethodInfo_23FB260 *)Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserSupportDeckMaster__TryGetEntity(
        UserSupportDeckMaster_o *this,
        UserSupportDeckEntity_o **entity,
        int64_t userId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EE6C6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&supportDeckId);
    byte_42EE6C6 = 1;
  }
  PK = UserSupportDeckEntity__CreatePK(userId, supportDeckId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__TryGetEntity__);
}


System_String_o *__fastcall UserSupportDeckMaster__getDeckName(
        UserSupportDeckMaster_o *this,
        int32_t deckId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_o *v9; // x21
  int64_t UserId; // x0
  const MethodInfo *v11; // x4
  _BOOL8 v12; // x0
  __int64 v13; // x1
  UserSupportDeckEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EE6C8 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, deckId, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v6, v7, v8);
    byte_42EE6C8 = 1;
  }
  entity = 0LL;
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v12 = UserSupportDeckMaster__TryGetEntity(this, &entity, UserId, deckId, v11);
  if ( v12 )
  {
    if ( !entity )
      sub_B5D69C(v12, v13);
    return entity->fields.name;
  }
  return v9;
}