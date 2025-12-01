void ServantPassiveSkillEntity___ctor(ServantPassiveSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7DDE & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC7DDE = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantPassiveSkillEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4CC7DD6 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CC7DD6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_3149724 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *ServantPassiveSkillEntity__CreatePrimaryKey(
        ServantPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantPassiveSkillEntity__CreatePK(this->fields.svtId, this->fields.num, this->fields.priority, v2);
}


System_Int32_array *ServantPassiveSkillEntity__GetCondIndividuality(
        ServantPassiveSkillEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CC7DDA & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_18238/*"condIndividuality"*/);
    byte_4CC7DDA = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_18238/*"condIndividuality"*/, 0, 0);
}


int32_t ServantPassiveSkillEntity__GetOtherValidEventId(ServantPassiveSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7DDB & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22605/*"otherValidEventId"*/);
    byte_4CC7DDB = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22605/*"otherValidEventId"*/, 0, 0);
}


bool ServantPassiveSkillEntity__HasAnySkillReleaseEventId(ServantPassiveSkillEntity_o *this, const MethodInfo *method)
{
  ServantPassiveSkillEntity_o *OtherValidEventId; // x0
  const MethodInfo *v4; // x2
  int eventId; // w1
  int32_t v6; // w19
  _BOOL8 IsSkillReleaseEventIdValid; // x0
  const MethodInfo *v8; // x2

  OtherValidEventId = (ServantPassiveSkillEntity_o *)ServantPassiveSkillEntity__GetOtherValidEventId(this, method);
  eventId = this->fields.eventId;
  v6 = (int)OtherValidEventId;
  return (int)OtherValidEventId <= 0 && eventId < 1
      || (IsSkillReleaseEventIdValid = ServantPassiveSkillEntity__IsSkillReleaseEventIdValid(
                                         OtherValidEventId,
                                         eventId,
                                         v4))
      || ServantPassiveSkillEntity__IsSkillReleaseEventIdValid(
           (ServantPassiveSkillEntity_o *)IsSkillReleaseEventIdValid,
           v6,
           v8);
}


bool ServantPassiveSkillEntity__HasFlag(ServantPassiveSkillEntity_o *this, int32_t typeFlag, const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}


bool ServantPassiveSkillEntity__IsEnableCondIndividuality(
        ServantPassiveSkillEntity_o *this,
        int64_t userId,
        int32_t limitCount,
        int32_t dispLimitCount,
        bool isGrand,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *CondIndividuality; // x19
  void *Master_object; // x0
  __int64 v13; // x1
  _DWORD *v14; // x23
  System_Collections_Generic_IEnumerable_TSource__o *Individuality; // x20
  int32_t svtId; // w24
  Il2CppObject *v17; // x0
  int32_t v18; // w22
  ServantTransformMaster_o *v19; // x25
  const MethodInfo *v20; // x3
  ServantTransformEntity_o *v21; // x0
  UserServantGrandEntity_o *EntityFromSvtId; // x0
  int32_t grandGraphId; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4CC7DDC & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Union_int___);
    sub_1C713B0(&Individuality_TypeInfo);
    byte_4CC7DDC = 1;
  }
  CondIndividuality = (System_Collections_ICollection_o *)ServantPassiveSkillEntity__GetCondIndividuality(
                                                            this,
                                                            (const MethodInfo *)userId);
  if ( BasicHelper__IsNullOrEmpty(CondIndividuality, 0) )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_27;
  Master_object = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    this->fields.svtId,
                    (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_27;
  v14 = Master_object;
  Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                         (ServantEntity_o *)Master_object,
                                                                         limitCount,
                                                                         dispLimitCount,
                                                                         0);
  if ( isGrand )
  {
    svtId = this->fields.svtId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v17 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantTransformMaster___);
    v18 = this->fields.svtId;
    v19 = (ServantTransformMaster_o *)v17;
    Master_object = (void *)LimitCountUtility__ConvertLimitCountStageIndexZeroToOne(dispLimitCount, 0);
    if ( !v19 )
      goto LABEL_27;
    v21 = ServantTransformMaster__GetBeforeTransformEntity(v19, v18, (int32_t)Master_object, v20);
    if ( v21 )
      svtId = v21->fields.befSvtId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    if ( !Master_object )
      goto LABEL_27;
    EntityFromSvtId = UserServantGrandMaster__GetEntityFromSvtId((UserServantGrandMaster_o *)Master_object, svtId, 0);
    if ( EntityFromSvtId )
    {
      grandGraphId = EntityFromSvtId->fields.grandGraphId;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
      if ( Master_object )
      {
        Master_object = GrandGraphDetailMaster__GetEntity(
                          (GrandGraphDetailMaster_o *)Master_object,
                          grandGraphId,
                          v14[20],
                          0);
        if ( Master_object )
        {
          v24 = System_Linq_Enumerable__Union_int_(
                  Individuality,
                  *((System_Collections_Generic_IEnumerable_TSource__o **)Master_object + 5),
                  (const MethodInfo_31901C0 *)Method_System_Linq_Enumerable_Union_int___);
          Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                                 v24,
                                                                                 (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
          goto LABEL_24;
        }
      }
LABEL_27:
      sub_1C71608(Master_object, v13);
    }
  }
LABEL_24:
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  return Individuality__ContainsAllIndividualities(
           (System_Int32_array *)Individuality,
           (System_Int32_array *)CondIndividuality,
           0);
}


bool ServantPassiveSkillEntity__IsSkillReleaseEventIdValid(
        ServantPassiveSkillEntity_o *this,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  void *v6; // x0
  Il2CppObject *v7; // x0
  bool IsSkillRelease; // w8
  bool result; // w0
  EventEntity_o *v10; // [xsp+0h] [xbp-30h] BYREF
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC7DDD & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_EventFilterMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_4CC7DDD = 1;
  }
  v10 = 0;
  entity = 0;
  if ( id < 1 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventFilterMaster___);
  if ( Master_object )
  {
    if ( EventFilterMaster__TryGetEntity_42272088((EventFilterMaster_o *)Master_object, &entity, id, 0, 0) )
    {
      v6 = entity;
      if ( !entity )
        goto LABEL_19;
      if ( !EventFilterEntity__IsOpen(entity, 0) )
        return 0;
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v7 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !v7
    || !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v7,
          (Il2CppObject **)&v10,
          id,
          (const MethodInfo_3408ECC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
  {
    return 1;
  }
  v6 = v10;
  if ( !v10 )
LABEL_19:
    sub_1C71608(v6, v5);
  IsSkillRelease = EventEntity__IsSkillRelease(v10, 0, 0);
  result = 0;
  if ( IsSkillRelease )
    return 1;
  return result;
}


bool ServantPassiveSkillEntity__TryGetOtherValidEventId(
        ServantPassiveSkillEntity_o *this,
        int32_t *otherValidEventId,
        const MethodInfo *method)
{
  int32_t v4; // w0
  int32_t v5; // w9

  v4 = ServantPassiveSkillEntity__GetOtherValidEventId(this, (const MethodInfo *)otherValidEventId);
  if ( v4 < 1 )
    v5 = -1;
  else
    v5 = v4;
  *otherValidEventId = v5;
  return v4 > 0;
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  SkillEntity_o *v22; // x24
  int32_t v23; // w1
  int32_t EffectChargeTurn; // w0
  LocalizationManager_c *v25; // x0
  System_String_o *unknownNameText; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w1
  System_String_o *EffectTitle; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  System_String_o *EffectExplanation; // x0

  if ( (byte_4CC7DD8 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C713B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC7DD8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_SkillMaster___)) == 0 )
  {
    sub_1C71608(Instance, v14);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v22 = (SkillEntity_o *)Entity;
    if ( isEquip )
    {
      v23 = 0;
      EffectChargeTurn = -1;
    }
    else
    {
      EffectChargeTurn = SkillEntity__getEffectChargeTurn((SkillEntity_o *)Entity, skillLv, 0);
      v23 = skillLv;
    }
    *charge = EffectChargeTurn;
    EffectTitle = SkillEntity__getEffectTitle(v22, v23, 0);
    *title = EffectTitle;
    sub_1C71354((GrandQuestFolderBoardItem_o *)title, (int32_t)EffectTitle, v35, v36, v37, v38, v39, v40);
    EffectExplanation = SkillEntity__getEffectExplanation(v22, skillLv, 0);
    v33 = (int)EffectExplanation;
    *explanation = EffectExplanation;
  }
  else
  {
    *charge = -1;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_4CC26AA )
    {
      sub_1C713B0(&LocalizationManager_TypeInfo);
      byte_4CC26AA = 1;
    }
    v25 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v25->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_1C71354((GrandQuestFolderBoardItem_o *)title, (int32_t)unknownNameText, v16, v17, v18, v19, v20, v21);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    v33 = StringLiteral_1/*""*/;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)explanation, v33, v27, v28, v29, v30, v31, v32);
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

  if ( (byte_4CC7DD9 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C713B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC7DD9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_SkillMaster___)) == 0 )
  {
    sub_1C71608(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getName((SkillEntity_o *)Entity, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4CC26AA )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    byte_4CC26AA = 1;
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
        bool isGrand,
        const MethodInfo *method)
{
  int64_t Time; // x27
  int64_t v20; // x1
  const MethodInfo *v21; // x5
  bool IsExchangeSvt; // w22
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x7
  int condQuestId; // w23
  int32_t condQuestPhase; // w24
  bool IsQuestPhaseClear; // w0
  CommonReleaseMaster_o *v30; // x23

  Time = nowTime;
  if ( (byte_4CC7DD7 & 1) == 0 )
  {
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantPassiveSkillReleaseMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserExchangeSvtMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC7DD7 = 1;
  }
  if ( nowTime <= 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
  }
  if ( Time >= this->fields.startedAt
    && Time <= this->fields.endedAt
    && (isMySvt || (this->fields.flag & 0x40) == 0)
    && ServantPassiveSkillEntity__HasAnySkillReleaseEventId(this, (const MethodInfo *)userId)
    && ServantPassiveSkillEntity__IsEnableCondIndividuality(this, v20, limitCount, dispLimitCount, isGrand, v21) )
  {
    if ( this->fields.condLv <= svtLv
      && this->fields.condLimitCount <= limitCount
      && this->fields.condFriendshipRank <= friendshipRank )
    {
      condQuestId = this->fields.condQuestId;
      if ( condQuestId < 1 )
        goto LABEL_29;
      condQuestPhase = this->fields.condQuestPhase;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestPhaseClear = CondType__IsQuestPhaseClear(userId, condQuestId, condQuestPhase, beforeClearQuestId, 0, 0);
      IsExchangeSvt = 0;
      if ( IsQuestPhaseClear )
      {
LABEL_29:
        if ( this->fields.commonReleaseId < 1 )
          goto LABEL_34;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_35;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
        if ( !Instance )
          goto LABEL_35;
        v30 = (CommonReleaseMaster_o *)Instance;
        IsExchangeSvt = 0;
        if ( !CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseId, 0, 0, 0) )
          goto LABEL_17;
        if ( CommonReleaseMaster__IsContainCondType(v30, this->fields.commonReleaseId, 192, 0) )
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Instance = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserExchangeSvtMaster___);
          if ( !Instance )
            goto LABEL_35;
          IsExchangeSvt = UserExchangeSvtMaster__IsExchangeSvt(
                            (UserExchangeSvtMaster_o *)Instance,
                            this->fields.svtId,
                            0);
        }
        else
        {
LABEL_34:
          IsExchangeSvt = 1;
        }
      }
    }
    else
    {
      IsExchangeSvt = 0;
    }
LABEL_17:
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantPassiveSkillReleaseMaster___);
      if ( Instance )
        return ServantPassiveSkillReleaseMaster__isUse(
                 (ServantPassiveSkillReleaseMaster_o *)Instance,
                 this->fields.svtId,
                 this->fields.num,
                 this->fields.priority,
                 dispLimitCount,
                 beforeClearQuestId,
                 IsExchangeSvt,
                 v25);
    }
LABEL_35:
    sub_1C71608(Instance, v24);
  }
  return 0;
}