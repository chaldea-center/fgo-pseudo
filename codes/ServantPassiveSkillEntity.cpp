void ServantPassiveSkillEntity___ctor(ServantPassiveSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C5774D & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_string___ctor__);
    byte_4C5774D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33B0AEC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantPassiveSkillEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4C57749 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C57749 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_30F8088 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *ServantPassiveSkillEntity__CreatePrimaryKey(
        ServantPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantPassiveSkillEntity__CreatePK(this->fields.svtId, this->fields.num, this->fields.priority, v2);
}


bool ServantPassiveSkillEntity__HasFlag(ServantPassiveSkillEntity_o *this, int32_t typeFlag, const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}


void ServantPassiveSkillEntity__getEffectExplanation(
        ServantPassiveSkillEntity_o *this,
        int32_t *charge,
        System_String_o **title,
        System_String_o **explanation,
        int32_t skillLv,
        bool isEquip,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *Entity; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  SkillEntity_o *v18; // x24
  int32_t v19; // w1
  int32_t EffectChargeTurn; // w0
  LocalizationManager_c *v21; // x0
  System_String_o *unknownNameText; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  System_String_o *EffectTitle; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_String_o *EffectExplanation; // x0

  if ( (byte_4C5774B & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C3E564(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C5774B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v14);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_33B2F58 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v18 = (SkillEntity_o *)Entity;
    if ( isEquip )
    {
      v19 = 0;
      EffectChargeTurn = -1;
    }
    else
    {
      EffectChargeTurn = SkillEntity__getEffectChargeTurn((SkillEntity_o *)Entity, skillLv, 0);
      v19 = skillLv;
    }
    *charge = EffectChargeTurn;
    EffectTitle = SkillEntity__getEffectTitle(v18, v19, 0);
    *title = EffectTitle;
    sub_1C3E508((CGThumbnailListItem_o *)title, (int32_t)EffectTitle, v27, v28);
    EffectExplanation = SkillEntity__getEffectExplanation(v18, skillLv, 0);
    v25 = (int)EffectExplanation;
    *explanation = EffectExplanation;
  }
  else
  {
    *charge = -1;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4C5204F )
    {
      sub_1C3E564(&LocalizationManager_TypeInfo);
      byte_4C5204F = 1;
    }
    v21 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v21->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_1C3E508((CGThumbnailListItem_o *)title, (int32_t)unknownNameText, v16, v17);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    v25 = StringLiteral_1/*""*/;
  }
  sub_1C3E508((CGThumbnailListItem_o *)explanation, v25, v23, v24);
}


int32_t ServantPassiveSkillEntity__getServantID(ServantPassiveSkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


int32_t ServantPassiveSkillEntity__getServantIdx(ServantPassiveSkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.num;
}


int32_t ServantPassiveSkillEntity__getSkillId(ServantPassiveSkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.skillId;
}


System_String_o *ServantPassiveSkillEntity__getSkillName(ServantPassiveSkillEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  LocalizationManager_c *v7; // x0

  if ( (byte_4C5774C & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C3E564(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5774C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0 )
  {
    sub_1C3E7C0(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_33B2F58 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getName((SkillEntity_o *)Entity, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4C5204F )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    byte_4C5204F = 1;
  }
  v7 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager_TypeInfo;
  }
  return v7->static_fields->unknownNameText;
}


bool ServantPassiveSkillEntity__isUse(
        ServantPassiveSkillEntity_o *this,
        int64_t userId,
        int32_t svtLv,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t friendshipRank,
        int32_t beforeClearQuestId,
        bool isMySvt,
        int64_t nowTime,
        const MethodInfo *method)
{
  int64_t Time; // x27
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  bool IsSkillRelease; // w8
  bool v22; // w0
  bool IsExchangeSvt; // w22
  const MethodInfo *v24; // x7
  int condQuestId; // w23
  int32_t condQuestPhase; // w24
  bool IsQuestPhaseClear; // w0
  CommonReleaseMaster_o *v29; // x23
  Il2CppObject *v30; // [xsp+8h] [xbp-68h] BYREF
  EventFilterEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  Time = nowTime;
  if ( (byte_4C5774A & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventFilterMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_ServantPassiveSkillReleaseMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_UserExchangeSvtMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C5774A = 1;
  }
  entity = 0;
  v30 = 0;
  if ( nowTime <= 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
  }
  if ( Time < this->fields.startedAt || Time > this->fields.endedAt || !isMySvt && (this->fields.flag & 0x40) != 0 )
    return 0;
  if ( this->fields.eventId < 1 )
    goto LABEL_22;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventFilterMaster___);
  if ( !Instance )
    goto LABEL_45;
  if ( EventFilterMaster__TryGetEntity_42038772((EventFilterMaster_o *)Instance, &entity, this->fields.eventId, 0, 0) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_45;
    if ( !EventFilterEntity__IsOpen(entity, 0) )
      return 0;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_45;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v30,
          this->fields.eventId,
          (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    goto LABEL_22;
  Instance = (DataManager_o *)v30;
  if ( !v30 )
    goto LABEL_45;
  IsSkillRelease = EventEntity__IsSkillRelease((EventEntity_o *)v30, 0, 0);
  v22 = 0;
  if ( IsSkillRelease )
  {
LABEL_22:
    if ( this->fields.condLv <= svtLv
      && this->fields.condLimitCount <= limitCount
      && this->fields.condFriendshipRank <= friendshipRank )
    {
      condQuestId = this->fields.condQuestId;
      if ( condQuestId < 1 )
        goto LABEL_39;
      condQuestPhase = this->fields.condQuestPhase;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestPhaseClear = CondType__IsQuestPhaseClear(userId, condQuestId, condQuestPhase, beforeClearQuestId, 0, 0);
      IsExchangeSvt = 0;
      if ( IsQuestPhaseClear )
      {
LABEL_39:
        if ( this->fields.commonReleaseId < 1 )
          goto LABEL_44;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_45;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
        if ( !Instance )
          goto LABEL_45;
        v29 = (CommonReleaseMaster_o *)Instance;
        IsExchangeSvt = 0;
        if ( !CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseId, 0, 0, 0) )
          goto LABEL_26;
        if ( CommonReleaseMaster__IsContainCondType(v29, this->fields.commonReleaseId, 192, 0) )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserExchangeSvtMaster___);
          if ( !Instance )
            goto LABEL_45;
          IsExchangeSvt = UserExchangeSvtMaster__IsExchangeSvt(
                            (UserExchangeSvtMaster_o *)Instance,
                            this->fields.svtId,
                            0);
        }
        else
        {
LABEL_44:
          IsExchangeSvt = 1;
        }
      }
    }
    else
    {
      IsExchangeSvt = 0;
    }
LABEL_26:
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_ServantPassiveSkillReleaseMaster___);
      if ( Instance )
        return ServantPassiveSkillReleaseMaster__isUse(
                 (ServantPassiveSkillReleaseMaster_o *)Instance,
                 this->fields.svtId,
                 this->fields.num,
                 this->fields.priority,
                 dispLimitCount,
                 beforeClearQuestId,
                 IsExchangeSvt,
                 v24);
    }
LABEL_45:
    sub_1C3E7C0(Instance, v20);
  }
  return v22;
}