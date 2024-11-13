void __fastcall ServantTreasureDvcEntity___ctor(ServantTreasureDvcEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16B41 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16B41 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantTreasureDvcEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4B16B3C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&num, *(_QWORD *)&priority);
    byte_4B16B3C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_2F11344 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall ServantTreasureDvcEntity__CreatePrimaryKey(
        ServantTreasureDvcEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return ServantTreasureDvcEntity__CreatePK(this->fields.svtId, this->fields.num, this->fields.priority, v2);
}


bool __fastcall ServantTreasureDvcEntity__HasFlag(
        ServantTreasureDvcEntity_o *this,
        int32_t typeFlag,
        const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}


bool __fastcall ServantTreasureDvcEntity__getEffectExplanation(
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *Instance; // x0
  __int64 v27; // x1
  Il2CppObject *Entity; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  LocalizationManager_c *v37; // x0
  System_String_o *unknownNameText; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  if ( (byte_4B16B3F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcMaster___, tdName, tdExplanation);
    sub_1BCA7E0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v18, v19);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v24, v25);
    byte_4B16B3F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v27);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.treasureDeviceId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
             0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
  if ( !byte_4B1194D )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v29, v30);
    byte_4B1194D = 1;
  }
  v37 = LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
    v37 = LocalizationManager_TypeInfo;
  }
  unknownNameText = v37->static_fields->unknownNameText;
  *tdName = unknownNameText;
  sub_1BCA784((PartyOrganizationUtility_o *)tdName, (int64_t)unknownNameText, v30, v31, v32, v33, v34, v35);
  *tdExplanation = (System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)tdExplanation, (int64_t)StringLiteral_1/*""*/, v39, v40, v41, v42, v43, v44);
  *maxLv = 0;
  *tdGuageCount = 0;
  return 0;
}


int32_t __fastcall ServantTreasureDvcEntity__getLevelMax(ServantTreasureDvcEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *Entity; // x0

  if ( (byte_4B16B3D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TreasureDvcMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B16B3D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.treasureDeviceId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = Entity[3].klass;
  return (int)Entity;
}


int32_t __fastcall ServantTreasureDvcEntity__getServantID(ServantTreasureDvcEntity_o *this, const MethodInfo *method)
{
  return this->fields.svtId;
}


int32_t __fastcall ServantTreasureDvcEntity__getServantIdx(ServantTreasureDvcEntity_o *this, const MethodInfo *method)
{
  return this->fields.num;
}


bool __fastcall ServantTreasureDvcEntity__get_IsForcedOpenEffectWhenRankUp(
        ServantTreasureDvcEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BalanceConfig_c *v6; // x0

  if ( (byte_4B16B40 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v4, v5);
    byte_4B16B40 = 1;
  }
  v6 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v6 = BalanceConfig_TypeInfo;
  }
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v6->static_fields->TreasureDevicesForcedOpenEffect,
           this->fields.treasureDeviceId,
           (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantTreasureDvcEntity__isUse(
        ServantTreasureDvcEntity_o *this,
        int64_t userId,
        int32_t svtLv,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t friendshipRank,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  bool IsQuestPhaseClear; // w22
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x7
  int condQuestId; // w23
  int32_t condQuestPhase; // w24

  if ( (byte_4B16B3E & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, userId, *(_QWORD *)&svtLv);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    byte_4B16B3E = 1;
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
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, userId);
      IsQuestPhaseClear = CondType__IsQuestPhaseClear(userId, condQuestId, condQuestPhase, beforeClearQuestId, 0, 0LL);
    }
  }
  else
  {
    IsQuestPhaseClear = 0;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v20);
  }
  return ServantTreasureDeviceReleaseMaster__isUse(
           (ServantTreasureDeviceReleaseMaster_o *)Instance,
           this->fields.svtId,
           this->fields.num,
           this->fields.priority,
           dispLimitCount,
           beforeClearQuestId,
           IsQuestPhaseClear,
           v21);
}