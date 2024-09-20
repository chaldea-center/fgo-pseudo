void __fastcall UserSupportDeckMaster___ctor(UserSupportDeckMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C03C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string___ctor__);
    byte_4A5C03C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    184,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserSupportDeckEntity_o *__fastcall UserSupportDeckMaster__GetEntity(
        UserSupportDeckMaster_o *this,
        int64_t userId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5C03A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__GetEntity__);
    byte_4A5C03A = 1;
  }
  PK = (Il2CppObject *)UserSupportDeckEntity__CreatePK(userId, supportDeckId, *(const MethodInfo **)&supportDeckId);
  return (UserSupportDeckEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      PK,
                                      (const MethodInfo_311DC8C *)Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__GetEntity__);
}


bool __fastcall UserSupportDeckMaster__TryGetEntity(
        UserSupportDeckMaster_o *this,
        UserSupportDeckEntity_o **entity,
        int64_t userId,
        int32_t supportDeckId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5C03B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__TryGetEntity__);
    byte_4A5C03B = 1;
  }
  PK = (Il2CppObject *)UserSupportDeckEntity__CreatePK(userId, supportDeckId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_UserSupportDeckMaster__UserSupportDeckEntity__string__TryGetEntity__);
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
  UserSupportDeckEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5C03D & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C03D = 1;
  }
  entity = 0LL;
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  v8 = UserSupportDeckMaster__TryGetEntity(this, &entity, UserId, deckId, v7);
  if ( v8 )
  {
    if ( !entity )
      sub_1B8880C(v8, v9);
    return entity->fields.name;
  }
  return v5;
}