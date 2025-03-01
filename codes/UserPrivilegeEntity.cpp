void __fastcall UserPrivilegeEntity___ctor(UserPrivilegeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BFE562 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataEntityBase_string___ctor__, method);
    byte_4BFE562 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3278D14 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserPrivilegeEntity__CreatePK(
        int64_t userId,
        int32_t privilegeId,
        const MethodInfo *method)
{
  if ( (byte_4BFE561 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataEntityBase_CreateMultiplePK_long__int___, *(_QWORD *)&privilegeId);
    byte_4BFE561 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int_(
           userId,
           privilegeId,
           (const MethodInfo_2FCFB5C *)Method_DataEntityBase_CreateMultiplePK_long__int___);
}


System_String_o *__fastcall UserPrivilegeEntity__CreatePrimaryKey(
        UserPrivilegeEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return UserPrivilegeEntity__CreatePK(this->fields.userId, this->fields.privilegeId, v2);
}


bool __fastcall UserPrivilegeEntity__IsEnabledNum(
        UserPrivilegeEntity_o *this,
        int32_t baseNum,
        const MethodInfo *method)
{
  return this->fields.num >= baseNum;
}


bool __fastcall UserPrivilegeEntity__IsValidPeriod(
        UserPrivilegeEntity_o *this,
        int64_t *startAt,
        int64_t *endAt,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BFE560 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_PrivilegeMaster___, startAt);
    sub_1C2E12C(&DataManager_TypeInfo, v9);
    sub_1C2E12C(&Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int__TryGetEntity__, v10);
    sub_1C2E12C(&NetworkManager_TypeInfo, v11);
    byte_4BFE560 = 1;
  }
  entity = 0LL;
  *startAt = 0LL;
  *endAt = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_PrivilegeMaster___);
  if ( !Master_object )
    goto LABEL_18;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          this->fields.privilegeId,
          (const MethodInfo_327B1CC *)Method_DataMasterBase_PrivilegeMaster__PrivilegeEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
    goto LABEL_18;
  Master_object = (Il2CppObject *)PrivilegeEntity__IsNoTimeLimit((PrivilegeEntity_o *)entity, 0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    return 1;
  *startAt = this->fields.startedAt;
  if ( !entity )
LABEL_18:
    sub_1C2E388(Master_object, v13);
  *endAt = (int64_t)entity[1].monitor + this->fields.startedAt;
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0LL);
  }
  if ( *startAt > nowTime )
    return 0;
  return nowTime <= *endAt;
}