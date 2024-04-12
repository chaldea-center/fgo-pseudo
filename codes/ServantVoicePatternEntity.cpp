void __fastcall ServantVoicePatternEntity___ctor(ServantVoicePatternEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B3355 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B3355 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


bool __fastcall ServantVoicePatternEntity__CheckAddCond(
        ServantVoicePatternEntity_o *this,
        int32_t limitCount,
        int32_t targetValue,
        const MethodInfo *method)
{
  int32_t value2; // w19
  int32_t v8; // w20
  int32_t value1; // w8
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x21
  const MethodInfo *v15; // x1
  int32_t FriendShipRank; // w0
  ServantLimitImageMaster_o *v17; // x21
  const MethodInfo *v18; // x1

  if ( (byte_42B3353 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&VoiceCondType_TypeInfo);
    byte_42B3353 = 1;
  }
  if ( targetValue == -1 )
  {
    value1 = this->fields.value1;
    if ( value1 <= 5 )
    {
      if ( value1 == 3 )
        goto LABEL_16;
      if ( value1 == 5 )
      {
        targetValue = this->fields.svtId;
        goto LABEL_4;
      }
    }
    else if ( (unsigned int)value1 <= 0x1A )
    {
      if ( ((1 << value1) & 0x7020200) != 0 )
      {
        targetValue = limitCount;
        goto LABEL_4;
      }
      if ( ((1 << value1) & 0x500000) != 0 )
      {
LABEL_16:
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  Instance,
                                                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          Instance = (DataManager_o *)ServantVoicePatternEntity__GetFixSvtId(this, v15);
          if ( MasterData_WarQuestSelectionMaster )
          {
            Instance = (DataManager_o *)UserServantCollectionMaster__GetEntityDefinitely(
                                          MasterData_WarQuestSelectionMaster,
                                          UserId,
                                          (int32_t)Instance,
                                          0LL);
            if ( Instance )
            {
              FriendShipRank = UserServantCollectionEntity__getFriendShipRank(
                                 (UserServantCollectionEntity_o *)Instance,
                                 0LL);
LABEL_23:
              targetValue = FriendShipRank;
              goto LABEL_4;
            }
          }
        }
        goto LABEL_29;
      }
      if ( value1 == 23 )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v17 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               Instance,
                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          Instance = (DataManager_o *)ServantVoicePatternEntity__GetFixSvtId(this, v18);
          if ( v17 )
          {
            FriendShipRank = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                               v17,
                               (int32_t)Instance,
                               limitCount,
                               0LL);
            goto LABEL_23;
          }
        }
LABEL_29:
        sub_B52A5C(Instance, v12);
      }
    }
    targetValue = -1;
  }
LABEL_4:
  v8 = this->fields.value1;
  value2 = this->fields.value2;
  if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !VoiceCondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
  }
  return VoiceCondType__IsSatisfyCondition(v8, value2, targetValue, 0LL);
}


System_String_o *__fastcall ServantVoicePatternEntity__CreatePK(
        int32_t id,
        int32_t svtId,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  if ( (byte_42B3352 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__string___);
    byte_42B3352 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__string_(
           id,
           svtId,
           voiceId,
           (const MethodInfo_1A4E4C8 *)Method_DataEntityBase_CreateMultiplePK_int__int__string___);
}


System_String_o *__fastcall ServantVoicePatternEntity__CreatePrimaryKey(
        ServantVoicePatternEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantVoicePatternEntity__CreatePK(this->fields.id, this->fields.svtId, this->fields.voiceId, v2);
}


int32_t __fastcall ServantVoicePatternEntity__GetCondType(ServantVoicePatternEntity_o *this, const MethodInfo *method)
{
  return this->fields.value1;
}


int32_t __fastcall ServantVoicePatternEntity__GetCondValue(ServantVoicePatternEntity_o *this, const MethodInfo *method)
{
  return this->fields.value2;
}


int32_t __fastcall ServantVoicePatternEntity__GetFixSvtId(ServantVoicePatternEntity_o *this, const MethodInfo *method)
{
  int32_t *p_svtId; // x19
  int32_t v4; // w21
  int32_t svtId; // t1
  BalanceConfig_c *v6; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8

  if ( (byte_42B3354 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    byte_42B3354 = 1;
  }
  svtId = this->fields.svtId;
  p_svtId = &this->fields.svtId;
  v4 = svtId;
  v6 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  static_fields = v6->static_fields;
  if ( v4 == static_fields->ServantIdHyde )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    p_svtId = &static_fields->ServantIdJekyll;
  }
  return *p_svtId;
}


bool __fastcall ServantVoicePatternEntity__IsSatisfyPlayCondition(
        ServantVoicePatternEntity_o *this,
        int32_t limitCount,
        int32_t targetValue,
        const MethodInfo *method)
{
  int32_t type; // w8

  type = this->fields.type;
  if ( !type )
    return 0;
  if ( type == 1 )
    return ServantVoicePatternEntity__CheckAddCond(this, limitCount, targetValue, method);
  return 1;
}