void ServantTreasureDvcEntity___ctor(ServantTreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D32E & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2D32E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantTreasureDvcEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4D2D329 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4D2D329 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_319A74C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *ServantTreasureDvcEntity__CreatePrimaryKey(ServantTreasureDvcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantTreasureDvcEntity__CreatePK(this->fields.svtId, this->fields.num, this->fields.priority, v2);
}


bool ServantTreasureDvcEntity__HasFlag(ServantTreasureDvcEntity_o *this, int32_t typeFlag, const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}


bool ServantTreasureDvcEntity__getEffectExplanation(
        ServantTreasureDvcEntity_o *this,
        System_String_o **tdName,
        System_String_o **tdExplanation,
        int32_t *maxLv,
        int32_t *tdGuageCount,
        int32_t *tdCardId,
        int32_t *tdStrengthStatus,
        int32_t *treasureDeviceNum,
        int32_t tdLv,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  Il2CppObject *Entity; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  LocalizationManager_c *v28; // x0
  System_String_o *unknownNameText; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7

  if ( (byte_4D2D32C & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C94098(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2D32C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0 )
  {
    sub_1C942F0(Instance, v19);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.treasureDeviceId,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  *tdCardId = this->fields.cardId;
  *tdStrengthStatus = this->fields.strengthStatus;
  *treasureDeviceNum = this->fields.treasureDeviceNum;
  if ( Entity )
    return TreasureDvcEntity__getEffectExplanation(
             (TreasureDvcEntity_o *)Entity,
             tdName,
             tdExplanation,
             maxLv,
             tdGuageCount,
             tdLv,
             0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4D277C7 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    byte_4D277C7 = 1;
  }
  v28 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = LocalizationManager_TypeInfo;
  }
  unknownNameText = v28->static_fields->unknownNameText;
  *tdName = unknownNameText;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)tdName, (int32_t)unknownNameText, v21, v22, v23, v24, v25, v26);
  *tdExplanation = (System_String_o *)StringLiteral_1/*""*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)tdExplanation, StringLiteral_1/*""*/, v30, v31, v32, v33, v34, v35);
  *maxLv = 0;
  *tdGuageCount = 0;
  return 0;
}


int32_t ServantTreasureDvcEntity__getLevelMax(ServantTreasureDvcEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4D2D32A & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C94098(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D32A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0 )
  {
    sub_1C942F0(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.treasureDeviceId,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = Entity[3].klass;
  return (int)Entity;
}


int32_t ServantTreasureDvcEntity__getServantID(ServantTreasureDvcEntity_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


int32_t ServantTreasureDvcEntity__getServantIdx(ServantTreasureDvcEntity_o *this, const MethodInfo *method)
{
  return this->fields.num;
}


bool ServantTreasureDvcEntity__get_IsForcedOpenEffectWhenRankUp(
        ServantTreasureDvcEntity_o *this,
        const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0

  if ( (byte_4D2D32D & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4D2D32D = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v3->static_fields->TreasureDevicesForcedOpenEffect,
           this->fields.treasureDeviceId,
           (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___);
}


bool ServantTreasureDvcEntity__isUse(
        ServantTreasureDvcEntity_o *this,
        int64_t userId,
        int32_t svtLv,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t friendshipRank,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  bool IsQuestPhaseClear; // w22
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x7
  int condQuestId; // w23
  int32_t condQuestPhase; // w24

  if ( (byte_4D2D32B & 1) == 0 )
  {
    sub_1C94098(&CondType_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D32B = 1;
  }
  if ( this->fields.condLv <= svtLv && this->fields.condFriendshipRank <= friendshipRank )
  {
    condQuestId = this->fields.condQuestId;
    if ( condQuestId < 1 )
    {
      IsQuestPhaseClear = 1;
    }
    else
    {
      condQuestPhase = this->fields.condQuestPhase;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestPhaseClear = CondType__IsQuestPhaseClear(userId, condQuestId, condQuestPhase, beforeClearQuestId, 0, 0);
    }
  }
  else
  {
    IsQuestPhaseClear = 0;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___)) == 0 )
  {
    sub_1C942F0(Instance, v16);
  }
  return ServantTreasureDeviceReleaseMaster__isUse(
           (ServantTreasureDeviceReleaseMaster_o *)Instance,
           this->fields.svtId,
           this->fields.num,
           this->fields.priority,
           dispLimitCount,
           beforeClearQuestId,
           IsQuestPhaseClear,
           v17);
}