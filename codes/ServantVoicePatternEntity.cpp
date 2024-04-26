void __fastcall ServantVoicePatternEntity___ctor(ServantVoicePatternEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4354470 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_string___ctor__);
    byte_4354470 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21C038C *)Method_DataEntityBase_string___ctor__);
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
  UserServantCollectionMaster_o *Master_WarQuestSelectionMaster; // x21
  int64_t UserId; // x22
  const MethodInfo *v13; // x2
  UserServantCollectionEntity_o *FixSvtId; // x0
  __int64 v15; // x1
  int32_t FriendShipRank; // w0
  ServantLimitImageMaster_o *v17; // x21
  const MethodInfo *v18; // x2

  if ( (byte_435446E & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B70694(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&VoiceCondType_TypeInfo);
    byte_435446E = 1;
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
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        FixSvtId = (UserServantCollectionEntity_o *)ServantVoicePatternEntity__GetFixSvtId(this, limitCount, v13);
        if ( Master_WarQuestSelectionMaster )
        {
          FixSvtId = UserServantCollectionMaster__GetEntityDefinitely(
                       Master_WarQuestSelectionMaster,
                       UserId,
                       (int32_t)FixSvtId,
                       0LL);
          if ( FixSvtId )
          {
            FriendShipRank = UserServantCollectionEntity__getFriendShipRank(FixSvtId, 0LL);
LABEL_25:
            targetValue = FriendShipRank;
            goto LABEL_4;
          }
        }
        goto LABEL_33;
      }
      if ( value1 == 23 )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v17 = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        FixSvtId = (UserServantCollectionEntity_o *)ServantVoicePatternEntity__GetFixSvtId(this, limitCount, v18);
        if ( v17 )
        {
          FriendShipRank = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                             v17,
                             (int32_t)FixSvtId,
                             limitCount,
                             0LL);
          goto LABEL_25;
        }
LABEL_33:
        sub_B7076C(FixSvtId, v15);
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
  if ( (byte_435446D & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_CreateMultiplePK_int__int__string___);
    byte_435446D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__string_(
           id,
           svtId,
           voiceId,
           (const MethodInfo_1CA28E4 *)Method_DataEntityBase_CreateMultiplePK_int__int__string___);
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


int32_t __fastcall ServantVoicePatternEntity__GetFixSvtId(
        ServantVoicePatternEntity_o *this,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  int32_t *p_svtId; // x19
  int32_t v6; // w22
  int32_t svtId; // t1
  BalanceConfig_c *v8; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t *p_ServantIdJekyll; // x8
  ServantTransformMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  ServantTransformEntity_o *v14; // x0

  if ( (byte_435446F & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_B70694(&DataManager_TypeInfo);
    byte_435446F = 1;
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
    p_ServantIdJekyll = &static_fields->ServantIdJekyll;
  }
  else
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ServantTransformMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ServantTransformMaster___);
    if ( !Master_WarQuestSelectionMaster )
      sub_B7076C(0LL, v12);
    v14 = ServantTransformMaster__GetBeforeTransformEntity(
            Master_WarQuestSelectionMaster,
            *p_svtId,
            dispLimitCount + 1,
            v13);
    p_ServantIdJekyll = &v14->fields.befSvtId;
    if ( !v14 )
      p_ServantIdJekyll = p_svtId;
  }
  return *p_ServantIdJekyll;
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