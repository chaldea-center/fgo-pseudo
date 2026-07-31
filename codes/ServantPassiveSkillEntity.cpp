void ServantPassiveSkillEntity___ctor(ServantPassiveSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59390CE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59390CE = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantPassiveSkillEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_59390C7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_59390C7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  if ( (byte_59390CA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18979/*"condIndividuality"*/);
    byte_59390CA = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_18979/*"condIndividuality"*/, 0, 0);
}


int32_t ServantPassiveSkillEntity__GetOtherValidEventId(ServantPassiveSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59390CB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23590/*"otherValidEventId"*/);
    byte_59390CB = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23590/*"otherValidEventId"*/, 0, 0);
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
  return eventId <= 0 && (int)OtherValidEventId < 1
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
  __int64 v11; // x1
  void *Master_object; // x0
  __int64 v14; // x1
  _DWORD *v15; // x23
  __int64 v16; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Individuality; // x20
  int32_t svtId; // w24
  Il2CppObject *v19; // x0
  int32_t v20; // w22
  ServantTransformMaster_o *v21; // x25
  const MethodInfo *v22; // x3
  ServantTransformEntity_o *v23; // x0
  __int64 v24; // x1
  UserServantGrandEntity_o *EntityFromSvtId; // x0
  int32_t grandGraphId; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0

  if ( (byte_59390CC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantTransformMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Union_int___);
    sub_21FFC50(&Individuality_TypeInfo);
    byte_59390CC = 1;
  }
  CondIndividuality = (System_Collections_ICollection_o *)ServantPassiveSkillEntity__GetCondIndividuality(
                                                            this,
                                                            (const MethodInfo *)userId);
  if ( BasicHelper__IsNullOrEmpty(CondIndividuality, 0) )
    return 1;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_27;
  Master_object = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    this->fields.svtId,
                    (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_27;
  v15 = Master_object;
  Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)ServantEntity__getIndividuality(
                                                                         (ServantEntity_o *)Master_object,
                                                                         limitCount,
                                                                         dispLimitCount,
                                                                         0);
  if ( isGrand )
  {
    svtId = this->fields.svtId;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16);
    v19 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantTransformMaster___);
    v20 = this->fields.svtId;
    v21 = (ServantTransformMaster_o *)v19;
    Master_object = (void *)LimitCountUtility__ConvertLimitCountStageIndexZeroToOne(dispLimitCount, 0);
    if ( !v21 )
      goto LABEL_27;
    v23 = ServantTransformMaster__GetBeforeTransformEntity(v21, v20, (int32_t)Master_object, v22);
    if ( v23 )
      svtId = v23->fields.befSvtId;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    if ( !Master_object )
      goto LABEL_27;
    EntityFromSvtId = UserServantGrandMaster__GetEntityFromSvtId((UserServantGrandMaster_o *)Master_object, svtId, 0);
    if ( EntityFromSvtId )
    {
      grandGraphId = EntityFromSvtId->fields.grandGraphId;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
      if ( Master_object )
      {
        Master_object = GrandGraphDetailMaster__GetEntity(
                          (GrandGraphDetailMaster_o *)Master_object,
                          grandGraphId,
                          v15[20],
                          0);
        if ( Master_object )
        {
          v27 = System_Linq_Enumerable__Union_int_(
                  Individuality,
                  *((System_Collections_Generic_IEnumerable_TSource__o **)Master_object + 5),
                  (const MethodInfo_386DE7C *)Method_System_Linq_Enumerable_Union_int___);
          Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                                 v27,
                                                                                 (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
          goto LABEL_24;
        }
      }
LABEL_27:
      sub_21FFECC(Master_object, v14);
    }
  }
LABEL_24:
  if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v16);
  return Individuality__ContainsAllIndividualities(
           (System_Int32_array *)Individuality,
           (System_Int32_array *)CondIndividuality,
           0);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_59390CD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventFilterMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    byte_59390CD = 1;
  }
  v10 = 0;
  entity = 0;
  if ( id < 1 )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&id);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventFilterMaster___);
  if ( Master_object )
  {
    if ( EventFilterMaster__TryGetEntity_48934996((EventFilterMaster_o *)Master_object, &entity, id, 0, 0) )
    {
      v6 = entity;
      if ( !entity )
        goto LABEL_19;
      if ( !EventFilterEntity__IsOpen(entity, 0) )
        return 0;
    }
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
  v7 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !v7
    || !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v7,
          (Il2CppObject **)&v10,
          id,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
  {
    return 1;
  }
  v6 = v10;
  if ( !v10 )
LABEL_19:
    sub_21FFECC(v6, v5);
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
  bool result; // w0

  v4 = ServantPassiveSkillEntity__GetOtherValidEventId(this, (const MethodInfo *)otherValidEventId);
  if ( v4 <= 0 )
    v5 = -1;
  else
    v5 = v4;
  result = v4 > 0;
  *otherValidEventId = v5;
  return result;
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
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  SkillEntity_o *v23; // x24
  int32_t v24; // w1
  int32_t EffectChargeTurn; // w0
  LocalizationManager_c *v26; // x0
  System_String_o *unknownNameText; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *EffectExplanation; // x1
  System_String_o *EffectTitle; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7

  if ( (byte_59390C9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59390C9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v14);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
      EffectChargeTurn = SkillEntity__getEffectChargeTurn((SkillEntity_o *)Entity, skillLv, 0);
      v24 = skillLv;
    }
    *charge = EffectChargeTurn;
    EffectTitle = SkillEntity__getEffectTitle(v23, v24, 0);
    *title = EffectTitle;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)title, (int32_t)EffectTitle, v36, v37, v38, v39, v40, v41);
    EffectExplanation = SkillEntity__getEffectExplanation(v23, skillLv, 0);
  }
  else
  {
    *charge = -1;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
    if ( !byte_593385D )
    {
      sub_21FFC50(&LocalizationManager_TypeInfo);
      byte_593385D = 1;
    }
    v26 = LocalizationManager_TypeInfo;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
      v26 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v26->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)title, (int32_t)unknownNameText, v17, v18, v19, v20, v21, v22);
    EffectExplanation = (System_String_o *)StringLiteral_1/*""*/;
  }
  *explanation = EffectExplanation;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)explanation, (int32_t)EffectExplanation, v28, v29, v30, v31, v32, v33);
}


int32_t ServantPassiveSkillEntity__getSkillId(ServantPassiveSkillEntity_o *this, const MethodInfo *method)
{
  return this->fields.skillId;
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
  __int64 v22; // x1
  bool IsExchangeSvt; // w22
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x7
  int condQuestId; // w23
  int32_t condQuestPhase; // w24
  bool IsQuestPhaseClear; // w0
  CommonReleaseMaster_o *v31; // x23
  __int64 v32; // x1

  Time = nowTime;
  if ( (byte_59390C8 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_CommonReleaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantPassiveSkillReleaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserExchangeSvtMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59390C8 = 1;
  }
  if ( nowTime <= 0 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, userId);
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
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v22);
      IsQuestPhaseClear = CondType__IsQuestPhaseClear(userId, condQuestId, condQuestPhase, beforeClearQuestId, 0, 0);
      IsExchangeSvt = 0;
      if ( IsQuestPhaseClear )
      {
LABEL_29:
        if ( this->fields.commonReleaseId < 1 )
          goto LABEL_34;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_35;
        Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
        if ( !Instance )
          goto LABEL_35;
        v31 = (CommonReleaseMaster_o *)Instance;
        IsExchangeSvt = 0;
        if ( !CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseId, 0, 0, 0) )
          goto LABEL_17;
        if ( CommonReleaseMaster__IsContainCondType(v31, this->fields.commonReleaseId, 192, 0) )
        {
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v32);
          Instance = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserExchangeSvtMaster___);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantPassiveSkillReleaseMaster___);
      if ( Instance )
        return ServantPassiveSkillReleaseMaster__isUse(
                 (ServantPassiveSkillReleaseMaster_o *)Instance,
                 this->fields.svtId,
                 this->fields.num,
                 this->fields.priority,
                 dispLimitCount,
                 beforeClearQuestId,
                 IsExchangeSvt,
                 v26);
    }
LABEL_35:
    sub_21FFECC(Instance, v25);
  }
  return 0;
}