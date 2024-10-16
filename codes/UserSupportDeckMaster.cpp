void __fastcall UserSupportDeckMaster___ctor(UserSupportDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6C3F & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string___ctor__, method);
    byte_4AB6C3F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    184,
    (const MethodInfo_31640A8 *)Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserSupportDeckEntity_o *__fastcall UserSupportDeckMaster__GetEntity(
        UserSupportDeckMaster_o *this,
        int64_t userId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4AB6C3D & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__GetEntity__, userId);
    byte_4AB6C3D = 1;
  }
  PK = (Il2CppObject *)UserSupportDeckEntity__CreatePK(userId, supportDeckId, *(const MethodInfo **)&supportDeckId);
  return (UserSupportDeckEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_31640E8 *)Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__GetEntity__);
}


bool __fastcall UserSupportDeckMaster__TryGetEntity(
        UserSupportDeckMaster_o *this,
        UserSupportDeckEntity_o **entity,
        int64_t userId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4AB6C3E & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__TryGetEntity__, entity);
    byte_4AB6C3E = 1;
  }
  PK = (Il2CppObject *)UserSupportDeckEntity__CreatePK(userId, supportDeckId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3164138 *)Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__TryGetEntity__);
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
  UserSupportDeckEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4AB6C40 & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_TypeInfo, *(_QWORD *)&deckId);
    sub_1BAB41C(&StringLiteral_1/*""*/, v5);
    byte_4AB6C40 = 1;
  }
  entity = 0LL;
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  v9 = UserSupportDeckMaster__TryGetEntity(this, &entity, UserId, deckId, v8);
  if ( v9 )
  {
    if ( !entity )
      sub_1BAB678(v9, v10);
    return entity->fields.name;
  }
  return v6;
}