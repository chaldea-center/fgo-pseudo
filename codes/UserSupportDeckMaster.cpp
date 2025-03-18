void __fastcall UserSupportDeckMaster___ctor(UserSupportDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22EF9 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string___ctor__, method);
    byte_4C22EF9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    188,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserSupportDeckEntity_o *__fastcall UserSupportDeckMaster__GetEntity(
        UserSupportDeckMaster_o *this,
        int64_t userId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C22EF7 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__GetEntity__, userId);
    byte_4C22EF7 = 1;
  }
  PK = (Il2CppObject *)UserSupportDeckEntity__CreatePK(userId, supportDeckId, *(const MethodInfo **)&supportDeckId);
  return (UserSupportDeckEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_329F900 *)Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__GetEntity__);
}


bool __fastcall UserSupportDeckMaster__TryGetEntity(
        UserSupportDeckMaster_o *this,
        UserSupportDeckEntity_o **entity,
        int64_t userId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C22EF8 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__TryGetEntity__, entity);
    byte_4C22EF8 = 1;
  }
  PK = (Il2CppObject *)UserSupportDeckEntity__CreatePK(userId, supportDeckId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserSupportDeckMaster__getDeckName(
        UserSupportDeckMaster_o *this,
        int32_t deckId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x1
  System_String_o *v7; // x21
  NetworkManager_c *v8; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  UserSupportDeckEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C22EFA & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, *(_QWORD *)&deckId);
    sub_1C3B764(&StringLiteral_1/*""*/, v6);
    byte_4C22EFA = 1;
  }
  entity = 0LL;
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C1C955 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, *(_QWORD *)&deckId);
    byte_4C1C955 = 1;
  }
  v8 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v8 = NetworkManager_TypeInfo;
  }
  v9 = UserSupportDeckMaster__TryGetEntity(this, &entity, v8->static_fields->userIdNumber, deckId, v3);
  if ( v9 )
  {
    if ( !entity )
      sub_1C3B9C0(v9, v10);
    return entity->fields.name;
  }
  return v7;
}