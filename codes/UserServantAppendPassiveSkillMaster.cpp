void __fastcall UserServantAppendPassiveSkillMaster___ctor(
        UserServantAppendPassiveSkillMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16FCD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string___ctor__,
      method,
      v2);
    byte_4B16FCD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    369,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantAppendPassiveSkillEntity_o *__fastcall UserServantAppendPassiveSkillMaster__GetEntity(
        UserServantAppendPassiveSkillMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16FCE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__GetEntity__,
      userId,
      *(_QWORD *)&svtId);
    byte_4B16FCE = 1;
  }
  PK = (Il2CppObject *)UserServantAppendPassiveSkillEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  return (UserServantAppendPassiveSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                    PK,
                                                    (const MethodInfo_31B3198 *)Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantAppendPassiveSkillMaster__IsAppendSkillExchangeLimit(
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v3; // w19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Master_object; // x20
  int64_t UserId; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x4
  int32_t exchangeNum; // w19
  BalanceConfig_c *v17; // x0
  UserServantAppendPassiveSkillEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v3 = svtId;
  if ( (byte_4B16FCC & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    *(_QWORD *)&svtId = sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    byte_4B16FCC = 1;
  }
  entity = 0LL;
  if ( !UserServantAppendPassiveSkillMaster__IsExchangeLimited(*(const MethodInfo **)&svtId) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantAppendPassiveSkillMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_object )
LABEL_16:
    sub_1BCAA3C(UserId, v14);
  UserId = UserServantAppendPassiveSkillMaster__TryGetEntity(
             (UserServantAppendPassiveSkillMaster_o *)Master_object,
             &entity,
             UserId,
             v3,
             v15);
  if ( (UserId & 1) == 0 )
    return 0;
  if ( !entity )
    goto LABEL_16;
  exchangeNum = entity->fields.exchangeNum;
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v14);
    v17 = BalanceConfig_TypeInfo;
  }
  return exchangeNum >= v17->static_fields->AppendPassiveSkillMaxExchangeNum;
}


bool __fastcall UserServantAppendPassiveSkillMaster__IsExchangeLimited(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  BalanceConfig_c *v3; // x0

  if ( (byte_4B16FCB & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v1, v2);
    byte_4B16FCB = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v1);
    v3 = BalanceConfig_TypeInfo;
  }
  return v3->static_fields->AppendPassiveSkillMaxExchangeNum > 0;
}


bool __fastcall UserServantAppendPassiveSkillMaster__TryGetEntity(
        UserServantAppendPassiveSkillMaster_o *this,
        UserServantAppendPassiveSkillEntity_o **entity,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16FCF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__TryGetEntity__,
      entity,
      userId);
    byte_4B16FCF = 1;
  }
  PK = (Il2CppObject *)UserServantAppendPassiveSkillEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_UserServantAppendPassiveSkillMaster__UserServantAppendPassiveSkillEntity__string__TryGetEntity__);
}