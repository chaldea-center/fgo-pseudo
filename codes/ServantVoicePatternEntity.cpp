void __fastcall ServantVoicePatternEntity___ctor(ServantVoicePatternEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBF77 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EBF77 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


bool __fastcall ServantVoicePatternEntity__CheckAddCond(
        ServantVoicePatternEntity_o *this,
        int32_t limitCount,
        int32_t targetValue,
        const MethodInfo *method)
{
  int32_t svtId; // w21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int32_t value2; // w19
  int32_t v20; // w20
  int32_t value1; // w8
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x21
  const MethodInfo *v27; // x1
  int32_t FriendShipRank; // w0
  ServantLimitImageMaster_o *v29; // x21
  const MethodInfo *v30; // x1

  svtId = targetValue;
  if ( (byte_42EBF75 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, limitCount, targetValue, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v7, v8, v9);
    sub_B5D5C4(&NetworkManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    sub_B5D5C4(&VoiceCondType_TypeInfo, v16, v17, v18);
    byte_42EBF75 = 1;
  }
  if ( svtId == -1 )
  {
    value1 = this->fields.value1;
    if ( value1 <= 5 )
    {
      if ( value1 == 3 )
        goto LABEL_16;
      if ( value1 == 5 )
      {
        svtId = this->fields.svtId;
        goto LABEL_4;
      }
    }
    else if ( (unsigned int)value1 <= 0x1A )
    {
      if ( ((1 << value1) & 0x7020200) != 0 )
      {
        svtId = limitCount;
        goto LABEL_4;
      }
      if ( ((1 << value1) & 0x500000) != 0 )
      {
LABEL_16:
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  Instance,
                                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          UserId = NetworkManager__get_UserId(0LL);
          Instance = (DataManager_o *)ServantVoicePatternEntity__GetFixSvtId(this, v27);
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
              svtId = FriendShipRank;
              goto LABEL_4;
            }
          }
        }
        goto LABEL_29;
      }
      if ( value1 == 23 )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v29 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               Instance,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
          Instance = (DataManager_o *)ServantVoicePatternEntity__GetFixSvtId(this, v30);
          if ( v29 )
          {
            FriendShipRank = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                               v29,
                               (int32_t)Instance,
                               limitCount,
                               0LL);
            goto LABEL_23;
          }
        }
LABEL_29:
        sub_B5D69C(Instance, v24);
      }
    }
    svtId = -1;
  }
LABEL_4:
  v20 = this->fields.value1;
  value2 = this->fields.value2;
  if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !VoiceCondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
  }
  return VoiceCondType__IsSatisfyCondition(v20, value2, svtId, 0LL);
}


System_String_o *__fastcall ServantVoicePatternEntity__CreatePK(
        int32_t id,
        int32_t svtId,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  if ( (byte_42EBF74 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__string___, svtId, (_DWORD)voiceId, method);
    byte_42EBF74 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__string_(
           id,
           svtId,
           voiceId,
           (const MethodInfo_1AE3590 *)Method_DataEntityBase_CreateMultiplePK_int__int__string___);
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
  int v2; // w2
  __int64 v3; // x3
  int32_t *p_svtId; // x19
  int32_t v6; // w21
  int32_t svtId; // t1
  BalanceConfig_c *v8; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8

  if ( (byte_42EBF76 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBF76 = 1;
  }
  svtId = this->fields.svtId;
  p_svtId = &this->fields.svtId;
  v6 = svtId;
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  static_fields = v8->static_fields;
  if ( v6 == static_fields->ServantIdHyde )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
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