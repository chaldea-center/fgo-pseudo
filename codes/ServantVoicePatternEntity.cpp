void __fastcall ServantVoicePatternEntity___ctor(ServantVoicePatternEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16B7E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16B7E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantVoicePatternEntity__CheckAddCond(
        ServantVoicePatternEntity_o *this,
        int32_t limitCount,
        int32_t targetValue,
        const MethodInfo *method)
{
  int32_t FriendShipRank; // w21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t value2; // w19
  int32_t v16; // w20
  int32_t value1; // w8
  __int64 v19; // x1
  Il2CppObject *Master_object; // x21
  int64_t UserId; // x22
  const MethodInfo *v22; // x2
  UserServantCollectionEntity_o *FixSvtId; // x0
  __int64 v24; // x1
  Il2CppObject *v25; // x21
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x3
  int v28; // w22
  int32_t ServantLimitCountSealAfter; // w0

  FriendShipRank = targetValue;
  if ( (byte_4B16B7C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMaster_ServantLimitImageMaster___,
      *(_QWORD *)&limitCount,
      *(_QWORD *)&targetValue);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&VoiceCondType_TypeInfo, v13, v14);
    byte_4B16B7C = 1;
  }
  if ( FriendShipRank == -1 )
  {
    value1 = this->fields.value1;
    if ( value1 <= 5 )
    {
      if ( value1 == 3 )
      {
LABEL_15:
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&limitCount);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
        UserId = NetworkManager__get_UserId(0LL);
        FixSvtId = (UserServantCollectionEntity_o *)ServantVoicePatternEntity__GetFixSvtId(this, limitCount, v22);
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
            goto LABEL_4;
          }
        }
        goto LABEL_32;
      }
      if ( value1 == 5 )
      {
        FriendShipRank = this->fields.svtId;
        goto LABEL_4;
      }
    }
    else if ( (unsigned int)value1 <= 0x1A )
    {
      if ( ((1 << value1) & 0x7020200) != 0 )
        goto LABEL_10;
      if ( ((1 << value1) & 0x500000) != 0 )
        goto LABEL_15;
      if ( value1 == 23 )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&limitCount);
        v25 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
        FixSvtId = (UserServantCollectionEntity_o *)ServantVoicePatternEntity__GetFixSvtId(this, limitCount, v26);
        if ( v25 )
        {
          if ( limitCount >= 11 )
            v28 = limitCount;
          else
            v28 = limitCount + 1;
          ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                         (ServantLimitImageMaster_o *)v25,
                                         (int32_t)FixSvtId,
                                         v28,
                                         v27);
          if ( ServantLimitCountSealAfter != v28 )
          {
            FriendShipRank = ServantLimitCountSealAfter - (limitCount < 11);
            goto LABEL_4;
          }
LABEL_10:
          FriendShipRank = limitCount;
          goto LABEL_4;
        }
LABEL_32:
        sub_1BCAA3C(FixSvtId, v24);
      }
    }
    FriendShipRank = -1;
  }
LABEL_4:
  v16 = this->fields.value1;
  value2 = this->fields.value2;
  if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, *(_QWORD *)&limitCount);
  return VoiceCondType__IsSatisfyCondition(v16, value2, FriendShipRank, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantVoicePatternEntity__CreatePK(
        int32_t id,
        int32_t svtId,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  if ( (byte_4B16B7B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int__string___, *(_QWORD *)&svtId, voiceId);
    byte_4B16B7B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__object_(
           id,
           svtId,
           (Il2CppObject *)voiceId,
           (const MethodInfo_2F1146C *)Method_DataEntityBase_CreateMultiplePK_int__int__string___);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t *p_svtId; // x19
  int32_t v10; // w22
  int32_t svtId; // t1
  BalanceConfig_c *v12; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  int32_t *p_ServantIdJekyll; // x8
  Il2CppObject *Master_object; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  ServantTransformEntity_o *v18; // x0

  if ( (byte_4B16B7D & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&dispLimitCount, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantTransformMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    byte_4B16B7D = 1;
  }
  svtId = this->fields.svtId;
  p_svtId = &this->fields.svtId;
  v10 = svtId;
  v12 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&dispLimitCount);
    v12 = BalanceConfig_TypeInfo;
  }
  static_fields = v12->static_fields;
  if ( v10 == static_fields->ServantIdHyde )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12, *(_QWORD *)&dispLimitCount);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    p_ServantIdJekyll = &static_fields->ServantIdJekyll;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&dispLimitCount);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantTransformMaster___);
    if ( !Master_object )
      sub_1BCAA3C(0LL, v16);
    v18 = ServantTransformMaster__GetBeforeTransformEntity(
            (ServantTransformMaster_o *)Master_object,
            *p_svtId,
            dispLimitCount + 1,
            v17);
    p_ServantIdJekyll = &v18->fields.befSvtId;
    if ( !v18 )
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