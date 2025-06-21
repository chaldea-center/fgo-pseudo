void __fastcall ServantPassiveSkillEntity___ctor(ServantPassiveSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CEB0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_string___ctor__, method);
    byte_4B1CEB0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32C5994 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantPassiveSkillEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4B1CEAC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&num);
    byte_4B1CEAC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_30190BC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantPassiveSkillEntity__CreatePrimaryKey(
        ServantPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantPassiveSkillEntity__CreatePK(this->fields.svtId, this->fields.num, this->fields.priority, v2);
}


bool __fastcall ServantPassiveSkillEntity__HasFlag(
        ServantPassiveSkillEntity_o *this,
        int32_t typeFlag,
        const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}


void __fastcall ServantPassiveSkillEntity__getEffectExplanation(
        ServantPassiveSkillEntity_o *this,
        int32_t *charge,
        System_String_o **title,
        System_String_o **explanation,
        int32_t skillLv,
        bool isEquip,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *Entity; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  SkillEntity_o *v23; // x24
  int32_t v24; // w1
  int32_t EffectChargeTurn; // w0
  LocalizationManager_c *v26; // x0
  System_String_o *unknownNameText; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w1
  System_String_o *EffectTitle; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_String_o *EffectExplanation; // x0

  if ( (byte_4B1CEAE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SkillMaster___, charge);
    sub_1BCAFF8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v14);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v16);
    byte_4B1CEAE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v18);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v23 = (SkillEntity_o *)Entity;
    if ( isEquip )
    {
      v24 = 0;
      EffectChargeTurn = -1;
    }
    else
    {
      EffectChargeTurn = SkillEntity__getEffectChargeTurn((SkillEntity_o *)Entity, skillLv, 0LL);
      v24 = skillLv;
    }
    *charge = EffectChargeTurn;
    EffectTitle = SkillEntity__getEffectTitle(v23, v24, 0LL);
    *title = EffectTitle;
    sub_1BCAF9C((CGThumbnailListItem_o *)title, (int32_t)EffectTitle, v32, v33);
    EffectExplanation = SkillEntity__getEffectExplanation(v23, skillLv, 0LL);
    v30 = (int)EffectExplanation;
    *explanation = EffectExplanation;
  }
  else
  {
    *charge = -1;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4B1794E )
    {
      sub_1BCAFF8(&LocalizationManager_TypeInfo, v20);
      byte_4B1794E = 1;
    }
    v26 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v26->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_1BCAF9C((CGThumbnailListItem_o *)title, (int32_t)unknownNameText, v21, v22);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    v30 = (int)StringLiteral_1/*""*/;
  }
  sub_1BCAF9C((CGThumbnailListItem_o *)explanation, v30, v28, v29);
}


int32_t __fastcall ServantPassiveSkillEntity__getServantID(ServantPassiveSkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


int32_t __fastcall ServantPassiveSkillEntity__getServantIdx(
        ServantPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.num;
}


int32_t __fastcall ServantPassiveSkillEntity__getSkillId(ServantPassiveSkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.skillId;
}


System_String_o *__fastcall ServantPassiveSkillEntity__getSkillName(
        ServantPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *Entity; // x0
  __int64 v9; // x1
  LocalizationManager_c *v11; // x0

  if ( (byte_4B1CEAF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B1CEAF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1BCB254(Instance, v7);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getName((SkillEntity_o *)Entity, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4B1794E )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v9);
    byte_4B1794E = 1;
  }
  v11 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager_TypeInfo;
  }
  return v11->static_fields->unknownNameText;
}


bool __fastcall ServantPassiveSkillEntity__isUse(
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  bool IsSkillRelease; // w8
  bool v31; // w0
  bool IsExchangeSvt; // w22
  const MethodInfo *v33; // x7
  int condQuestId; // w23
  int32_t condQuestPhase; // w24
  bool IsQuestPhaseClear; // w0
  CommonReleaseMaster_o *v38; // x23
  Il2CppObject *v39; // [xsp+8h] [xbp-68h] BYREF
  EventFilterEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  Time = nowTime;
  if ( (byte_4B1CEAD & 1) == 0 )
  {
    sub_1BCAFF8(&CondType_TypeInfo, userId);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v19);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventFilterMaster___, v20);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMaster___, v21);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantPassiveSkillReleaseMaster___, v22);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserExchangeSvtMaster___, v23);
    sub_1BCAFF8(&DataManager_TypeInfo, v24);
    sub_1BCAFF8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v25);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v26);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    byte_4B1CEAD = 1;
  }
  entity = 0LL;
  v39 = 0LL;
  if ( nowTime <= 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
  }
  if ( Time < this->fields.startedAt || Time > this->fields.endedAt || !isMySvt && (this->fields.flag & 0x40) != 0 )
    return 0;
  if ( this->fields.eventId < 1 )
    goto LABEL_22;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventFilterMaster___);
  if ( !Instance )
    goto LABEL_45;
  if ( EventFilterMaster__TryGetEntity_41150180((EventFilterMaster_o *)Instance, &entity, this->fields.eventId, 0, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_45;
    if ( !EventFilterEntity__IsOpen(entity, 0LL) )
      return 0;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_45;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v39,
          this->fields.eventId,
          (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    goto LABEL_22;
  Instance = (DataManager_o *)v39;
  if ( !v39 )
    goto LABEL_45;
  IsSkillRelease = EventEntity__IsSkillRelease((EventEntity_o *)v39, 0, 0LL);
  v31 = 0;
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
      IsQuestPhaseClear = CondType__IsQuestPhaseClear(userId, condQuestId, condQuestPhase, beforeClearQuestId, 0, 0LL);
      IsExchangeSvt = 0;
      if ( IsQuestPhaseClear )
      {
        if ( this->fields.commonReleaseId < 1 )
          goto LABEL_44;
LABEL_39:
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_45;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
        if ( !Instance )
          goto LABEL_45;
        v38 = (CommonReleaseMaster_o *)Instance;
        IsExchangeSvt = 0;
        if ( !CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseId, 0LL, 0, 0LL) )
          goto LABEL_26;
        if ( CommonReleaseMaster__IsContainCondType(v38, this->fields.commonReleaseId, 192, 0LL) )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserExchangeSvtMaster___);
          if ( !Instance )
            goto LABEL_45;
          IsExchangeSvt = UserExchangeSvtMaster__IsExchangeSvt(
                            (UserExchangeSvtMaster_o *)Instance,
                            this->fields.svtId,
                            0LL);
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantPassiveSkillReleaseMaster___);
      if ( Instance )
        return ServantPassiveSkillReleaseMaster__isUse(
                 (ServantPassiveSkillReleaseMaster_o *)Instance,
                 this->fields.svtId,
                 this->fields.num,
                 this->fields.priority,
                 dispLimitCount,
                 beforeClearQuestId,
                 IsExchangeSvt,
                 v33);
    }
LABEL_45:
    sub_1BCB254(Instance, v29);
  }
  return v31;
}