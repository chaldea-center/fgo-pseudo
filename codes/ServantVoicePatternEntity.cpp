void ServantVoicePatternEntity___ctor(ServantVoicePatternEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C57846 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_string___ctor__);
    byte_4C57846 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33B0AEC *)Method_DataEntityBase_string___ctor__);
}


bool ServantVoicePatternEntity__CheckAddCond(
        ServantVoicePatternEntity_o *this,
        int32_t limitCount,
        int32_t targetValue,
        const MethodInfo *method)
{
  int32_t value2; // w19
  int32_t v8; // w20
  int32_t value1; // w8
  const MethodInfo *v11; // x2
  Il2CppObject *Master_object; // x21
  NetworkManager_c *v13; // x0
  int64_t userIdNumber; // x22
  UserServantCollectionEntity_o *FixSvtId; // x0
  __int64 v16; // x1
  int32_t FriendShipRank; // w0
  Il2CppObject *v18; // x21
  const MethodInfo *v19; // x2

  if ( (byte_4C57844 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&VoiceCondType_TypeInfo);
    byte_4C57844 = 1;
  }
  if ( targetValue == -1 )
  {
    value1 = this->fields.value1;
    if ( value1 <= 5 )
    {
      if ( value1 == 3 )
        goto LABEL_15;
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
LABEL_15:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C50AE2 )
        {
          sub_1C3E564(&NetworkManager_TypeInfo);
          byte_4C50AE2 = 1;
        }
        v13 = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          v13 = NetworkManager_TypeInfo;
        }
        userIdNumber = v13->static_fields->userIdNumber;
        FixSvtId = (UserServantCollectionEntity_o *)ServantVoicePatternEntity__GetFixSvtId(this, limitCount, v11);
        if ( Master_object )
        {
          FixSvtId = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       userIdNumber,
                       (int32_t)FixSvtId,
                       0);
          if ( FixSvtId )
          {
            FriendShipRank = UserServantCollectionEntity__getFriendShipRank(FixSvtId, 0);
LABEL_26:
            targetValue = FriendShipRank;
            goto LABEL_4;
          }
        }
        goto LABEL_33;
      }
      if ( value1 == 23 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v18 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        FixSvtId = (UserServantCollectionEntity_o *)ServantVoicePatternEntity__GetFixSvtId(this, limitCount, v19);
        if ( v18 )
        {
          FriendShipRank = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                             (ServantLimitImageMaster_o *)v18,
                             (int32_t)FixSvtId,
                             limitCount,
                             0);
          goto LABEL_26;
        }
LABEL_33:
        sub_1C3E7C0(FixSvtId, v16);
      }
    }
    targetValue = -1;
  }
LABEL_4:
  v8 = this->fields.value1;
  value2 = this->fields.value2;
  if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
  return VoiceCondType__IsSatisfyCondition(v8, value2, targetValue, 0);
}


System_String_o *ServantVoicePatternEntity__CreatePK(
        int32_t id,
        int32_t svtId,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  if ( (byte_4C57843 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_CreateMultiplePK_int__int__string___);
    byte_4C57843 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__object_(
           id,
           svtId,
           (Il2CppObject *)voiceId,
           (const MethodInfo_30F81B0 *)Method_DataEntityBase_CreateMultiplePK_int__int__string___);
}


System_String_o *ServantVoicePatternEntity__CreatePrimaryKey(
        ServantVoicePatternEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantVoicePatternEntity__CreatePK(this->fields.id, this->fields.svtId, this->fields.voiceId, v2);
}


int32_t ServantVoicePatternEntity__GetCondType(ServantVoicePatternEntity_o *this, const MethodInfo *method)
{
  return this->fields.value1;
}


int32_t ServantVoicePatternEntity__GetCondValue(ServantVoicePatternEntity_o *this, const MethodInfo *method)
{
  return this->fields.value2;
}


int32_t ServantVoicePatternEntity__GetFixSvtId(
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
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  ServantTransformEntity_o *v14; // x0

  if ( (byte_4C57845 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    byte_4C57845 = 1;
  }
  svtId = this->fields.svtId;
  p_svtId = &this->fields.svtId;
  v6 = svtId;
  v8 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  static_fields = v8->static_fields;
  if ( v6 == static_fields->ServantIdHyde )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    p_ServantIdJekyll = &static_fields->ServantIdJekyll;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ServantTransformMaster___);
    if ( !Master_object )
      sub_1C3E7C0(0, v12);
    v14 = ServantTransformMaster__GetBeforeTransformEntity(
            (ServantTransformMaster_o *)Master_object,
            *p_svtId,
            dispLimitCount + 1,
            v13);
    p_ServantIdJekyll = &v14->fields.befSvtId;
    if ( !v14 )
      p_ServantIdJekyll = p_svtId;
  }
  return *p_ServantIdJekyll;
}


bool ServantVoicePatternEntity__IsSatisfyPlayCondition(
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