void UserPrivilegeEntity___ctor(UserPrivilegeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC8321 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC8321 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserPrivilegeEntity__CreatePK(int64_t userId, int32_t privilegeId, const MethodInfo *method)
{
  if ( (byte_4CC8320 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_4CC8320 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           privilegeId,
           (const MethodInfo_314939C *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *UserPrivilegeEntity__CreatePrimaryKey(UserPrivilegeEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserPrivilegeEntity__CreatePK(this->fields.userId, this->fields.privilegeId, v2);
}


bool UserPrivilegeEntity__IsEnabledNum(UserPrivilegeEntity_o *this, int32_t baseNum, const MethodInfo *method)
{
  return this->fields.num >= baseNum;
}


bool UserPrivilegeEntity__IsValidPeriod(
        UserPrivilegeEntity_o *this,
        int64_t *startAt,
        int64_t *endAt,
        int64_t nowTime,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CC831F & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_PrivilegeMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int__TryGetEntity__);
    sub_1C713B0(&NetworkManager_TypeInfo);
    byte_4CC831F = 1;
  }
  entity = 0;
  *startAt = 0;
  *endAt = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_PrivilegeMaster___);
  if ( !Master_object )
    goto LABEL_18;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          this->fields.privilegeId,
          (const MethodInfo_3408ECC *)Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
    goto LABEL_18;
  Master_object = (Il2CppObject *)PrivilegeEntity__IsNoTimeLimit((PrivilegeEntity_o *)entity, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    return 1;
  *startAt = this->fields.startedAt;
  if ( !entity )
LABEL_18:
    sub_1C71608(Master_object, v10);
  *endAt = (int64_t)entity[1].monitor + this->fields.startedAt;
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0);
  }
  if ( *startAt > nowTime )
    return 0;
  return nowTime <= *endAt;
}