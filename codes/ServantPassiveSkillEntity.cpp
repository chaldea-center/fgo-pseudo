void __fastcall ServantPassiveSkillEntity___ctor(ServantPassiveSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FCBA2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, method);
    byte_49FCBA2 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantPassiveSkillEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_49FCB9D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&num);
    byte_49FCB9D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_2E37AA0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  Il2CppObject *Entity; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  SkillEntity_o *v22; // x24
  int32_t v23; // w1
  int32_t EffectChargeTurn; // w0
  LocalizationManager_c *v25; // x0
  System_String_o *unknownNameText; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w1
  System_String_o *EffectTitle; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *EffectExplanation; // x0

  if ( (byte_49FCB9F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, charge);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v13);
    sub_1B640C8(&LocalizationManager_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B640C8(&StringLiteral_1/*""*/, v16);
    byte_49FCB9F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
      EffectChargeTurn = SkillEntity__getEffectChargeTurn((SkillEntity_o *)Entity, skillLv, 0LL);
      v23 = skillLv;
    }
    *charge = EffectChargeTurn;
    EffectTitle = SkillEntity__getEffectTitle(v22, v23, 0LL);
    *title = EffectTitle;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)title, (int32_t)EffectTitle, v31, v32);
    EffectExplanation = SkillEntity__getEffectExplanation(v22, skillLv, 0LL);
    v29 = (int)EffectExplanation;
    *explanation = EffectExplanation;
  }
  else
  {
    *charge = -1;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( !byte_49F7D6A )
    {
      sub_1B640C8(&LocalizationManager_TypeInfo, v19);
      byte_49F7D6A = 1;
    }
    v25 = LocalizationManager_TypeInfo;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager_TypeInfo;
    }
    unknownNameText = v25->static_fields->unknownNameText;
    *title = unknownNameText;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)title, (int32_t)unknownNameText, v20, v21);
    *explanation = (System_String_o *)StringLiteral_1/*""*/;
    v29 = (int)StringLiteral_1/*""*/;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)explanation, v29, v27, v28);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantPassiveSkillEntity__getFriendPointUpVal(
        ServantPassiveSkillEntity_o *this,
        int32_t skillLv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  SkillLvEntity_o *Entity; // x0

  if ( (byte_49FCBA1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&skillLv);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FCBA1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0
  __int64 v8; // x1
  LocalizationManager_c *v10; // x0

  if ( (byte_49FCBA0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FCBA0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.skillId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    return SkillEntity__getName((SkillEntity_o *)Entity, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_49F7D6A )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, v8);
    byte_49F7D6A = 1;
  }
  v10 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager_TypeInfo;
  }
  return v10->static_fields->unknownNameText;
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
  DataManager_o *Instance; // x0
  bool IsExchangeSvt; // w22
  int condQuestId; // w23
  int32_t condQuestPhase; // w24
  bool IsQuestPhaseClear; // w0
  CommonReleaseMaster_o *v33; // x23
  EventFilterEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  Time = nowTime;
  if ( (byte_49FCB9E & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, userId);
    sub_1B640C8(&Method_DataManager_GetMasterData_CommonReleaseMaster___, v19);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventFilterMaster___, v20);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantPassiveSkillReleaseMaster___, v21);
    sub_1B640C8(&Method_DataManager_GetMaster_UserExchangeSvtMaster___, v22);
    sub_1B640C8(&DataManager_TypeInfo, v23);
    sub_1B640C8(&NetworkManager_TypeInfo, v24);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    byte_49FCB9E = 1;
  }
  entity = 0LL;
  if ( nowTime <= 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
  }
  if ( Time < this->fields.startedAt || Time > this->fields.endedAt || !isMySvt && (this->fields.flag & 0x40) != 0 )
    return 0;
  if ( this->fields.eventId >= 1 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventFilterMaster___);
    if ( !Instance )
      goto LABEL_40;
    if ( EventFilterMaster__TryGetEntity_38812140(
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
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestPhaseClear = CondType__IsQuestPhaseClear(userId, condQuestId, condQuestPhase, beforeClearQuestId, 0, 0LL);
  IsExchangeSvt = 0;
  if ( IsQuestPhaseClear )
  {
LABEL_34:
    if ( this->fields.commonReleaseId < 1 )
      goto LABEL_39;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_40;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommonReleaseMaster___);
    if ( !Instance )
      goto LABEL_40;
    v33 = (CommonReleaseMaster_o *)Instance;
    IsExchangeSvt = 0;
    if ( !CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Instance, this->fields.commonReleaseId, 0LL, 0, 0LL) )
      goto LABEL_21;
    if ( !CommonReleaseMaster__IsContainCondType(v33, this->fields.commonReleaseId, 192, 0LL) )
    {
LABEL_39:
      IsExchangeSvt = 1;
      goto LABEL_21;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserExchangeSvtMaster___);
    if ( Instance )
    {
      IsExchangeSvt = UserExchangeSvtMaster__IsExchangeSvt((UserExchangeSvtMaster_o *)Instance, this->fields.svtId, 0LL);
      goto LABEL_21;
    }
LABEL_40:
    sub_1B64324(Instance);
  }
LABEL_21:
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantPassiveSkillReleaseMaster___);
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
           0LL);
}