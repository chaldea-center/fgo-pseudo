void UserSupportDeckMaster___ctor(UserSupportDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59397B6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string___ctor__);
    byte_59397B6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    190,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserSupportDeckEntity_o *UserSupportDeckMaster__GetEntity(
        UserSupportDeckMaster_o *this,
        int64_t userId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59397B4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__GetEntity__);
    byte_59397B4 = 1;
  }
  PK = (Il2CppObject *)UserSupportDeckEntity__CreatePK(userId, supportDeckId, *(const MethodInfo **)&supportDeckId);
  return (UserSupportDeckEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_3EE2044 *)Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__GetEntity__);
}


bool UserSupportDeckMaster__TryGetEntity(
        UserSupportDeckMaster_o *this,
        UserSupportDeckEntity_o **entity,
        int64_t userId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59397B5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__TryGetEntity__);
    byte_59397B5 = 1;
  }
  PK = (Il2CppObject *)UserSupportDeckEntity__CreatePK(userId, supportDeckId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_59397B7 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59397B7 = 1;
  }
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  entity = 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&deckId);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, *(_QWORD *)&deckId);
    v7 = NetworkManager_TypeInfo;
  }
  v8 = UserSupportDeckMaster__TryGetEntity(this, &entity, v7->static_fields->userIdNumber, deckId, v3);
  if ( v8 )
  {
    if ( !entity )
      sub_21FFECC(v8, v9);
    return entity->fields.name;
  }
  return v6;
}