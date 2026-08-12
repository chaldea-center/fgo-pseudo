void UserPrivilegeEntity___ctor(UserPrivilegeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59717E2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_59717E2 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserPrivilegeEntity__CreatePK(int64_t userId, int32_t privilegeId, const MethodInfo *method)
{
  if ( (byte_59717E1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_long__int___);
    byte_59717E1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           privilegeId,
           (const MethodInfo_3854538 *)Method_DataEntityBase_CreateMultiplePK_long__int___);
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
  DataManager_c *v9; // x0
  int v10; // w8
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  int64_t startedAt; // x8
  Il2CppObject *v15; // x9
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59717E0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_PrivilegeMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int__TryGetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_59717E0 = 1;
  }
  v9 = DataManager_TypeInfo;
  entity = 0;
  v10 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  *startAt = 0;
  *endAt = 0;
  if ( !v10 )
    j_il2cpp_runtime_class_init_0(v9, startAt);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_PrivilegeMaster___);
  if ( !Master_object )
    goto LABEL_18;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          this->fields.privilegeId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
    goto LABEL_18;
  Master_object = (Il2CppObject *)PrivilegeEntity__IsNoTimeLimit((PrivilegeEntity_o *)entity, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    return 1;
  startedAt = this->fields.startedAt;
  v15 = entity;
  *startAt = startedAt;
  if ( !v15 )
LABEL_18:
    sub_2213CDC(Master_object, v12);
  *endAt = (int64_t)v15[1].monitor + startedAt;
  if ( !nowTime )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
    nowTime = NetworkManager__getTime(0);
  }
  if ( *startAt > nowTime )
    return 0;
  return nowTime <= *endAt;
}