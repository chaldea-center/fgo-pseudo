void __fastcall ServantPassiveSkillEntity___ctor(ServantPassiveSkillEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16A9F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16A9F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantPassiveSkillEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4B16A9A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&num, *(_QWORD *)&priority);
    byte_4B16A9A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_2F11344 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  Il2CppObject *Entity; // x0
  __int64 v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  SkillEntity_o *v31; // x24
  int32_t v32; // w1
  int32_t EffectChargeTurn; // w0
  LocalizationManager_c *v34; // x0
  System_String_o *unknownNameText; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_String_o *EffectExplanation; // x1
  System_String_o *EffectTitle; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7

  if ( (byte_4B16A9C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, charge, title);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v19, v20);
    byte_4B16A9C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v22);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
  {
    v31 = (SkillEntity_o *)Entity;
    if ( isEquip )
    {
      v32 = 0;
      EffectChargeTurn = -1;
    }
    else
    {
      EffectChargeTurn = SkillEntity__getEffectChargeTurn((SkillEntity_o *)Entity, skillLv, 0LL);
      v32 = skillLv;
    }
    *charge = EffectChargeTurn;
    EffectTitle = SkillEntity__getEffectTitle(v31, v32, 0LL);
    *title = EffectTitle;
    sub_1BCA784((PartyOrganizationUtility_o *)title, (int64_t)EffectTitle, v44, v45, v46, v47, v48, v49);
    EffectExplanation = SkillEntity__getEffectExplanation(v31, skillLv, 0LL);
    *explanation = EffectExplanation;
  }
  else
  {
    *charge = -1;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
    if ( !byte_4B1194D )
    {
      sub_1BCA7E0(&LocalizationManager_TypeInfo, v24, v25);
      byte_4B1194D = 1;
    }
    v34 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
      v34 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v34->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_1BCA784((PartyOrganizationUtility_o *)title, (int64_t)unknownNameText, v25, v26, v27, v28, v29, v30);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    EffectExplanation = (System_String_o *)StringLiteral_1/*""*/;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)explanation, (int64_t)EffectExplanation, v36, v37, v38, v39, v40, v41);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantPassiveSkillEntity__getFriendPointUpVal(
        ServantPassiveSkillEntity_o *this,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  SkillLvEntity_o *Entity; // x0

  if ( (byte_4B16A9E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&skillLv, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6);
    byte_4B16A9E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v8);
  }
  Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, this->fields.skillId, skillLv, 0LL);
  if ( Entity )
    LODWORD(Entity) = SkillLvEntity__getFriendPointUpVal(Entity, 0LL);
  return (int)Entity;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *Entity; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  LocalizationManager_c *v16; // x0

  if ( (byte_4B16A9D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B16A9D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v11);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getName((SkillEntity_o *)Entity, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
  if ( !byte_4B1194D )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    byte_4B1194D = 1;
  }
  v16 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
    v16 = LocalizationManager_TypeInfo;
  }
  return v16->static_fields->unknownNameText;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  DataManager_o *Instance; // x0
  bool IsExchangeSvt; // w22
  const MethodInfo *v35; // x7
  int condQuestId; // w23
  int32_t condQuestPhase; // w24
  bool IsQuestPhaseClear; // w0
  CommonReleaseMaster_o *v41; // x23
  __int64 v42; // x1
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  Time = nowTime;
  if ( (byte_4B16A9B & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, userId, *(_QWORD *)&svtLv);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventFilterMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantPassiveSkillReleaseMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserExchangeSvtMaster___, v25, v26);
    sub_1BCA7E0(&DataManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31, v32);
    byte_4B16A9B = 1;
  }
  entity = 0LL;
  if ( nowTime <= 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, userId);
    Time = NetworkManager__getTime(0LL);
  }
  if ( Time < this->fields.startedAt || Time > this->fields.endedAt || !isMySvt && (this->fields.flag & 0x40) != 0 )
    return 0;
  if ( this->fields.eventId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventFilterMaster___);
    if ( !Instance )
      goto LABEL_40;
    if ( EventFilterMaster__TryGetEntity_39853044(
           (EventFilterMaster_o *)Instance,
           &entity,
           this->fields.eventId,
           0,
           0LL) )
    {
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_40;
      if ( !EventFilterEntity__IsOpen(entity, 0LL) )
        return 0;
    }
  }
  if ( this->fields.condLv > svtLv
    || this->fields.condLimitCount > limitCount
    || this->fields.condFriendshipRank > friendshipRank )
  {
    IsExchangeSvt = 0;
    goto LABEL_21;
  }
  condQuestId = this->fields.condQuestId;
  if ( condQuestId < 1 )
    goto LABEL_34;
  condQuestPhase = this->fields.condQuestPhase;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, userId);
  IsQuestPhaseClear = CondType__IsQuestPhaseClear(userId, condQuestId, condQuestPhase, beforeClearQuestId, 0, 0LL);
  IsExchangeSvt = 0;
  if ( IsQuestPhaseClear )
  {
LABEL_34:
    if ( this->fields.commonReleaseId < 1 )
      goto LABEL_39;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
    if ( !Instance )
      goto LABEL_40;
    v41 = (CommonReleaseMaster_o *)Instance;
    IsExchangeSvt = 0;
    if ( !CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseId, 0LL, 0, 0LL) )
      goto LABEL_21;
    if ( !CommonReleaseMaster__IsContainCondType(v41, this->fields.commonReleaseId, 192, 0LL) )
    {
LABEL_39:
      IsExchangeSvt = 1;
      goto LABEL_21;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v42);
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserExchangeSvtMaster___);
    if ( Instance )
    {
      IsExchangeSvt = UserExchangeSvtMaster__IsExchangeSvt((UserExchangeSvtMaster_o *)Instance, this->fields.svtId, 0LL);
      goto LABEL_21;
    }
LABEL_40:
    sub_1BCAA3C(Instance, userId);
  }
LABEL_21:
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantPassiveSkillReleaseMaster___);
  if ( !Instance )
    goto LABEL_40;
  return ServantPassiveSkillReleaseMaster__isUse(
           (ServantPassiveSkillReleaseMaster_o *)Instance,
           this->fields.svtId,
           this->fields.num,
           this->fields.priority,
           dispLimitCount,
           beforeClearQuestId,
           IsExchangeSvt,
           v35);
}