void __fastcall UserServantAppendPassiveSkillMaster___ctor(
        UserServantAppendPassiveSkillMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A4F36E & 1) == 0 )
  {
    sub_1B863B8(
      &Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string___ctor__,
      method);
    byte_4A4F36E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    375,
    (const MethodInfo_3216A14 *)Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantAppendPassiveSkillEntity_o *__fastcall UserServantAppendPassiveSkillMaster__GetEntity(
        UserServantAppendPassiveSkillMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A4F36F & 1) == 0 )
  {
    sub_1B863B8(
      &Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__GetEntity__,
      userId);
    byte_4A4F36F = 1;
  }
  PK = (Il2CppObject *)UserServantAppendPassiveSkillEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  return (UserServantAppendPassiveSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                    PK,
                                                    (const MethodInfo_3218D38 *)Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantAppendPassiveSkillMaster__IsAppendSkillExchangeLimit(
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v2; // w19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  Il2CppObject *Master_object; // x20
  NetworkManager_c *v9; // x0
  int32_t exchangeNum; // w19
  BalanceConfig_c *v11; // x0
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = svtId;
  if ( (byte_4A4F36D & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v3);
    sub_1B863B8(&DataManager_TypeInfo, v4);
    *(_QWORD *)&svtId = sub_1B863B8(&NetworkManager_TypeInfo, v5);
    byte_4A4F36D = 1;
  }
  entity = 0LL;
  if ( !UserServantAppendPassiveSkillMaster__IsExchangeLimited(*(const MethodInfo **)&svtId) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v6);
    byte_4A48C25 = 1;
  }
  v9 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v9 = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
LABEL_19:
    sub_1B86614(v9, v6);
  v9 = (NetworkManager_c *)UserServantAppendPassiveSkillMaster__TryGetEntity(
                             (UserServantAppendPassiveSkillMaster_o *)Master_object,
                             &entity,
                             v9->static_fields->userIdNumber,
                             v2,
                             v7);
  if ( ((unsigned __int8)v9 & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_19;
  exchangeNum = entity->fields.exchangeNum;
  v11 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  return exchangeNum >= v11->static_fields->AppendPassiveSkillMaxExchangeNum;
}


bool __fastcall UserServantAppendPassiveSkillMaster__IsExchangeLimited(const MethodInfo *method)
{
  __int64 v1; // x1
  BalanceConfig_c *v2; // x0

  if ( (byte_4A4F36C & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, v1);
    byte_4A4F36C = 1;
  }
  v2 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v2 = BalanceConfig_TypeInfo;
  }
  return v2->static_fields->AppendPassiveSkillMaxExchangeNum > 0;
}


bool __fastcall UserServantAppendPassiveSkillMaster__TryGetEntity(
        UserServantAppendPassiveSkillMaster_o *this,
        UserServantAppendPassiveSkillEntity_o **entity,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A4F370 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__TryGetEntity__,
      entity);
    byte_4A4F370 = 1;
  }
  PK = (Il2CppObject *)UserServantAppendPassiveSkillEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3218D84 *)Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__TryGetEntity__);
}