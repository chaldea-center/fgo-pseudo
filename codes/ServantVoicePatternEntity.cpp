void __fastcall ServantVoicePatternEntity___ctor(ServantVoicePatternEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB66CF & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB66CF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantVoicePatternEntity__CheckAddCond(
        ServantVoicePatternEntity_o *this,
        int32_t limitCount,
        int32_t targetValue,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t value2; // w19
  int32_t v12; // w20
  int32_t value1; // w8
  Il2CppObject *Master_object; // x21
  int64_t UserId; // x22
  const MethodInfo *v17; // x2
  UserServantCollectionEntity_o *FixSvtId; // x0
  __int64 v19; // x1
  int32_t FriendShipRank; // w0
  Il2CppObject *v21; // x21
  const MethodInfo *v22; // x2

  if ( (byte_4AB66CD & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, *(_QWORD *)&limitCount);
    sub_1BAB41C(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v7);
    sub_1BAB41C(&DataManager_TypeInfo, v8);
    sub_1BAB41C(&NetworkManager_TypeInfo, v9);
    sub_1BAB41C(&VoiceCondType_TypeInfo, v10);
    byte_4AB66CD = 1;
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
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        UserId = NetworkManager__get_UserId(0LL);
        FixSvtId = (UserServantCollectionEntity_o *)ServantVoicePatternEntity__GetFixSvtId(this, limitCount, v17);
        if ( Master_object )
        {
          FixSvtId = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)Master_object,
                       UserId,
                       (int32_t)FixSvtId,
                       0LL);
          if ( FixSvtId )
          {
            FriendShipRank = UserServantCollectionEntity__getFriendShipRank(FixSvtId, 0LL);
LABEL_22:
            targetValue = FriendShipRank;
            goto LABEL_4;
          }
        }
        goto LABEL_29;
      }
      if ( value1 == 23 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v21 = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        FixSvtId = (UserServantCollectionEntity_o *)ServantVoicePatternEntity__GetFixSvtId(this, limitCount, v22);
        if ( v21 )
        {
          FriendShipRank = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                             (ServantLimitImageMaster_o *)v21,
                             (int32_t)FixSvtId,
                             limitCount,
                             0LL);
          goto LABEL_22;
        }
LABEL_29:
        sub_1BAB678(FixSvtId, v19);
      }
    }
    targetValue = -1;
  }
LABEL_4:
  v12 = this->fields.value1;
  value2 = this->fields.value2;
  if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
  return VoiceCondType__IsSatisfyCondition(v12, value2, targetValue, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantVoicePatternEntity__CreatePK(
        int32_t id,
        int32_t svtId,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  if ( (byte_4AB66CC & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int__string___, *(_QWORD *)&svtId);
    byte_4AB66CC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__object_(
           id,
           svtId,
           (Il2CppObject *)voiceId,
           (const MethodInfo_2EC2B50 *)Method_DataEntityBase_CreateMultiplePK_int__int__string___);
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


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantVoicePatternEntity__GetFixSvtId(
        ServantVoicePatternEntity_o *this,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t *p_svtId; // x19
  int32_t v8; // w22
  int32_t svtId; // t1
  BalanceConfig_c *v10; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t *p_ServantIdJekyll; // x8
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  ServantTransformEntity_o *v16; // x0

  if ( (byte_4AB66CE & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, *(_QWORD *)&dispLimitCount);
    sub_1BAB41C(&Method_DataManager_GetMaster_ServantTransformMaster___, v5);
    sub_1BAB41C(&DataManager_TypeInfo, v6);
    byte_4AB66CE = 1;
  }
  svtId = this->fields.svtId;
  p_svtId = &this->fields.svtId;
  v8 = svtId;
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  static_fields = v10->static_fields;
  if ( v8 == static_fields->ServantIdHyde )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    p_ServantIdJekyll = &static_fields->ServantIdJekyll;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2EC5574 *)Method_DataManager_GetMaster_ServantTransformMaster___);
    if ( !Master_object )
      sub_1BAB678(0LL, v14);
    v16 = ServantTransformMaster__GetBeforeTransformEntity(
            (ServantTransformMaster_o *)Master_object,
            *p_svtId,
            dispLimitCount + 1,
            v15);
    p_ServantIdJekyll = &v16->fields.befSvtId;
    if ( !v16 )
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