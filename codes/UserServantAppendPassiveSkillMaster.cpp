void UserServantAppendPassiveSkillMaster___ctor(UserServantAppendPassiveSkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D31932 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string___ctor__);
    byte_4D31932 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    375,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantAppendPassiveSkillEntity_o *UserServantAppendPassiveSkillMaster__GetEntity(
        UserServantAppendPassiveSkillMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D31933 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__GetEntity__);
    byte_4D31933 = 1;
  }
  PK = (Il2CppObject *)UserServantAppendPassiveSkillEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  return (UserServantAppendPassiveSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                    PK,
                                                    (const MethodInfo_34681D4 *)Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool UserServantAppendPassiveSkillMaster__IsAppendSkillExchangeLimit(int32_t svtId, const MethodInfo *method)
{
  int32_t v2; // w19
  __int64 v3; // x1
  const MethodInfo *v4; // x4
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v6; // x0
  int32_t exchangeNum; // w19
  BalanceConfig_c *v8; // x0
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = svtId;
  if ( (byte_4D31931 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    *(_QWORD *)&svtId = sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D31931 = 1;
  }
  entity = 0;
  if ( !UserServantAppendPassiveSkillMaster__IsExchangeLimited(*(const MethodInfo **)&svtId) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2A55B )
  {
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2A55B = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
LABEL_19:
    sub_1C93D2C(v6, v3);
  v6 = (NetworkManager_c *)UserServantAppendPassiveSkillMaster__TryGetEntity(
                             (UserServantAppendPassiveSkillMaster_o *)Master_object,
                             &entity,
                             v6->static_fields->userIdNumber,
                             v2,
                             v4);
  if ( ((unsigned __int8)v6 & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_19;
  exchangeNum = entity->fields.exchangeNum;
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  return exchangeNum >= v8->static_fields->AppendPassiveSkillMaxExchangeNum;
}


bool UserServantAppendPassiveSkillMaster__IsExchangeLimited(const MethodInfo *method)
{
  BalanceConfig_c *v1; // x0

  if ( (byte_4D31930 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    byte_4D31930 = 1;
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

  if ( (byte_4D31934 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__TryGetEntity__);
    byte_4D31934 = 1;
  }
  PK = (Il2CppObject *)UserServantAppendPassiveSkillEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__TryGetEntity__);
}