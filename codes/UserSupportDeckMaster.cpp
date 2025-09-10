void UserSupportDeckMaster___ctor(UserSupportDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C2836D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string___ctor__);
    byte_4C2836D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    188,
    (const MethodInfo_338A52C *)Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserSupportDeckEntity_o *UserSupportDeckMaster__GetEntity(
        UserSupportDeckMaster_o *this,
        int64_t userId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C2836B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__GetEntity__);
    byte_4C2836B = 1;
  }
  PK = (Il2CppObject *)UserSupportDeckEntity__CreatePK(userId, supportDeckId, *(const MethodInfo **)&supportDeckId);
  return (UserSupportDeckEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_338C850 *)Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__GetEntity__);
}


bool UserSupportDeckMaster__TryGetEntity(
        UserSupportDeckMaster_o *this,
        UserSupportDeckEntity_o **entity,
        int64_t userId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C2836C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__TryGetEntity__);
    byte_4C2836C = 1;
  }
  PK = (Il2CppObject *)UserSupportDeckEntity__CreatePK(userId, supportDeckId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__TryGetEntity__);
}


System_String_o *UserSupportDeckMaster__getDeckName(
        UserSupportDeckMaster_o *this,
        int32_t deckId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  System_String_o *v6; // x21
  NetworkManager_c *v7; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  UserSupportDeckEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2836E & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2836E = 1;
  }
  entity = 0;
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = NetworkManager_TypeInfo;
  }
  v8 = UserSupportDeckMaster__TryGetEntity(this, &entity, v7->static_fields->userIdNumber, deckId, v3);
  if ( v8 )
  {
    if ( !entity )
      sub_1C2D6EC(v8, v9);
    return entity->fields.name;
  }
  return v6;
}