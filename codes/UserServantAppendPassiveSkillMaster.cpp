void UserServantAppendPassiveSkillMaster___ctor(UserServantAppendPassiveSkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5939668 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string___ctor__);
    byte_5939668 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    377,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantAppendPassiveSkillEntity_o *UserServantAppendPassiveSkillMaster__GetEntity(
        UserServantAppendPassiveSkillMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5939669 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__GetEntity__);
    byte_5939669 = 1;
  }
  PK = (Il2CppObject *)UserServantAppendPassiveSkillEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  return (UserServantAppendPassiveSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                    PK,
                                                    (const MethodInfo_3EE2044 *)Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool UserServantAppendPassiveSkillMaster__IsAppendSkillExchangeLimit(int32_t svtId, const MethodInfo *method)
{
  int32_t v2; // w19
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x4
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v7; // x0
  int32_t exchangeNum; // w19
  BalanceConfig_c *v9; // x0
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = svtId;
  if ( (byte_5939667 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    *(_QWORD *)&svtId = sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5939667 = 1;
  }
  entity = 0;
  if ( !UserServantAppendPassiveSkillMaster__IsExchangeLimited(*(const MethodInfo **)&svtId) )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    v7 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
LABEL_19:
    sub_21FFECC(v7, v4);
  v7 = (NetworkManager_c *)UserServantAppendPassiveSkillMaster__TryGetEntity(
                             (UserServantAppendPassiveSkillMaster_o *)Master_object,
                             &entity,
                             v7->static_fields->userIdNumber,
                             v2,
                             v5);
  if ( ((unsigned __int8)v7 & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_19;
  exchangeNum = entity->fields.exchangeNum;
  v9 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4);
    v9 = BalanceConfig_TypeInfo;
  }
  return exchangeNum >= v9->static_fields->AppendPassiveSkillMaxExchangeNum;
}


bool UserServantAppendPassiveSkillMaster__IsExchangeLimited(const MethodInfo *method)
{
  __int64 v1; // x1
  BalanceConfig_c *v2; // x0

  if ( (byte_5939666 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_5939666 = 1;
  }
  v2 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v1);
    v2 = BalanceConfig_TypeInfo;
  }
  return v2->static_fields->AppendPassiveSkillMaxExchangeNum > 0;
}


bool UserServantAppendPassiveSkillMaster__TryGetEntity(
        UserServantAppendPassiveSkillMaster_o *this,
        UserServantAppendPassiveSkillEntity_o **entity,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_593966A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__TryGetEntity__);
    byte_593966A = 1;
  }
  PK = (Il2CppObject *)UserServantAppendPassiveSkillEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__TryGetEntity__);
}