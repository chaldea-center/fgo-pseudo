void ServantPassiveSkillEntity___ctor(ServantPassiveSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C3839D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C3839D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantPassiveSkillEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4C38399 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C38399 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_30DBA08 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  Il2CppObject *Entity; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  SkillEntity_o *v17; // x24
  int32_t v18; // w1
  int32_t EffectChargeTurn; // w0
  LocalizationManager_c *v20; // x0
  System_String_o *unknownNameText; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  System_String_o *EffectTitle; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_String_o *EffectExplanation; // x0

  if ( (byte_4C3839B & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C32C20(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3839B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_3396838 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v17 = (SkillEntity_o *)Entity;
    if ( isEquip )
    {
      v18 = 0;
      EffectChargeTurn = -1;
    }
    else
    {
      EffectChargeTurn = SkillEntity__getEffectChargeTurn((SkillEntity_o *)Entity, skillLv, 0);
      v18 = skillLv;
    }
    *charge = EffectChargeTurn;
    EffectTitle = SkillEntity__getEffectTitle(v17, v18, 0);
    *title = EffectTitle;
    sub_1C32BC4((CGThumbnailListItem_o *)title, (int32_t)EffectTitle, v26, v27);
    EffectExplanation = SkillEntity__getEffectExplanation(v17, skillLv, 0);
    v24 = (int)EffectExplanation;
    *explanation = EffectExplanation;
  }
  else
  {
    *charge = -1;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4C32D4C )
    {
      sub_1C32C20(&LocalizationManager_TypeInfo);
      byte_4C32D4C = 1;
    }
    v20 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v20 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v20->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_1C32BC4((CGThumbnailListItem_o *)title, (int32_t)unknownNameText, v15, v16);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    v24 = StringLiteral_1/*""*/;
  }
  sub_1C32BC4((CGThumbnailListItem_o *)explanation, v24, v22, v23);
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
  Il2CppObject *Entity; // x0
  LocalizationManager_c *v6; // x0

  if ( (byte_4C3839C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C32C20(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3839C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_3396838 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getName((SkillEntity_o *)Entity, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4C32D4C )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    byte_4C32D4C = 1;
  }
  v6 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager_TypeInfo;
  }
  return v6->static_fields->unknownNameText;
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
  bool IsSkillRelease; // w8
  bool v21; // w0
  bool IsExchangeSvt; // w22
  const MethodInfo *v23; // x7
  int condQuestId; // w23
  int32_t condQuestPhase; // w24
  bool IsQuestPhaseClear; // w0
  CommonReleaseMaster_o *v28; // x23
  Il2CppObject *v29; // [xsp+8h] [xbp-68h] BYREF
  EventFilterEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  Time = nowTime;
  if ( (byte_4C3839A & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventFilterMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantPassiveSkillReleaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserExchangeSvtMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3839A = 1;
  }
  entity = 0;
  v29 = 0;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventFilterMaster___);
  if ( !Instance )
    goto LABEL_45;
  if ( EventFilterMaster__TryGetEntity_41887420((EventFilterMaster_o *)Instance, &entity, this->fields.eventId, 0, 0) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_45;
    if ( !EventFilterEntity__IsOpen(entity, 0) )
      return 0;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_45;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v29,
          this->fields.eventId,
          (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    goto LABEL_22;
  Instance = (DataManager_o *)v29;
  if ( !v29 )
    goto LABEL_45;
  IsSkillRelease = EventEntity__IsSkillRelease((EventEntity_o *)v29, 0, 0);
  v21 = 0;
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
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_45;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
        if ( !Instance )
          goto LABEL_45;
        v28 = (CommonReleaseMaster_o *)Instance;
        IsExchangeSvt = 0;
        if ( !CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseId, 0, 0, 0) )
          goto LABEL_26;
        if ( CommonReleaseMaster__IsContainCondType(v28, this->fields.commonReleaseId, 192, 0) )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserExchangeSvtMaster___);
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantPassiveSkillReleaseMaster___);
      if ( Instance )
        return ServantPassiveSkillReleaseMaster__isUse(
                 (ServantPassiveSkillReleaseMaster_o *)Instance,
                 this->fields.svtId,
                 this->fields.num,
                 this->fields.priority,
                 dispLimitCount,
                 beforeClearQuestId,
                 IsExchangeSvt,
                 v23);
    }
LABEL_45:
    sub_1C32E7C(Instance);
  }
  return v21;
}