void UserServantAppendPassiveSkillMaster___ctor(UserServantAppendPassiveSkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C38924 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string___ctor__);
    byte_4C38924 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    375,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantAppendPassiveSkillEntity_o *UserServantAppendPassiveSkillMaster__GetEntity(
        UserServantAppendPassiveSkillMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C38925 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__GetEntity__);
    byte_4C38925 = 1;
  }
  PK = (Il2CppObject *)UserServantAppendPassiveSkillEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  return (UserServantAppendPassiveSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                    PK,
                                                    (const MethodInfo_339B2F0 *)Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool UserServantAppendPassiveSkillMaster__IsAppendSkillExchangeLimit(int32_t svtId, const MethodInfo *method)
{
  int32_t v2; // w19
  const MethodInfo *v3; // x4
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v5; // x0
  int32_t exchangeNum; // w19
  BalanceConfig_c *v7; // x0
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = svtId;
  if ( (byte_4C38923 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    *(_QWORD *)&svtId = sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C38923 = 1;
  }
  entity = 0;
  if ( !UserServantAppendPassiveSkillMaster__IsExchangeLimited(*(const MethodInfo **)&svtId) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  v5 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v5 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
LABEL_19:
    sub_1C32E7C(v5);
  v5 = (NetworkManager_c *)UserServantAppendPassiveSkillMaster__TryGetEntity(
                             (UserServantAppendPassiveSkillMaster_o *)Master_object,
                             &entity,
                             v5->static_fields->userIdNumber,
                             v2,
                             v3);
  if ( ((unsigned __int8)v5 & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_19;
  exchangeNum = entity->fields.exchangeNum;
  v7 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  return exchangeNum >= v7->static_fields->AppendPassiveSkillMaxExchangeNum;
}


bool UserServantAppendPassiveSkillMaster__IsExchangeLimited(const MethodInfo *method)
{
  BalanceConfig_c *v1; // x0

  if ( (byte_4C38922 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    byte_4C38922 = 1;
  }
  v1 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v1 = BalanceConfig_TypeInfo;
  }
  return v1->static_fields->AppendPassiveSkillMaxExchangeNum > 0;
}


bool UserServantAppendPassiveSkillMaster__TryGetEntity(
        UserServantAppendPassiveSkillMaster_o *this,
        UserServantAppendPassiveSkillEntity_o **entity,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C38926 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__TryGetEntity__);
    byte_4C38926 = 1;
  }
  PK = (Il2CppObject *)UserServantAppendPassiveSkillEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__TryGetEntity__);
}