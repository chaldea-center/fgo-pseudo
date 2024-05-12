void __fastcall ServantTreasureDvcEntity___ctor(ServantTreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438DCF1 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438DCF1 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantTreasureDvcEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_438DCEC & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_438DCEC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_1D175E4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  TreasureDvcEntity_o *Entity; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  LocalizationManager_c *v28; // x0
  System_String_o *unknownNameText; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_438DCEF & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_B775C4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438DCEF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v19);
  }
  Entity = (TreasureDvcEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    this->fields.treasureDeviceId,
                                    (const MethodInfo_21FB894 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  *tdCardId = this->fields.cardId;
  *tdStrengthStatus = this->fields.strengthStatus;
  *treasureDeviceNum = this->fields.treasureDeviceNum;
  if ( Entity )
    return TreasureDvcEntity__getEffectExplanation(Entity, tdName, tdExplanation, maxLv, tdGuageCount, tdLv, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4388DC6 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    byte_4388DC6 = 1;
  }
  v28 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v28 = LocalizationManager_TypeInfo;
  }
  unknownNameText = v28->static_fields->unknownNameText;
  *tdName = unknownNameText;
  sub_B77560(
    (BattleServantConfConponent_o *)tdName,
    (System_Int32_array **)unknownNameText,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  *tdExplanation = (System_String_o *)StringLiteral_1/*""*/;
  sub_B77560(
    (BattleServantConfConponent_o *)tdExplanation,
    (System_Int32_array **)StringLiteral_1/*""*/,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  *maxLv = 0;
  *tdGuageCount = 0;
  return 0;
}


int32_t __fastcall ServantTreasureDvcEntity__getLevelMax(ServantTreasureDvcEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarEntity_o *Entity; // x0

  if ( (byte_438DCED & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_B775C4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438DCED = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v4);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             this->fields.treasureDeviceId,
             (const MethodInfo_21FB894 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
  if ( Entity )
    LODWORD(Entity) = Entity->fields.bannerId;
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
  BalanceConfig_c *v3; // x0

  if ( (byte_438DCF0 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Contains_int___);
    byte_438DCF0 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v3->static_fields->TreasureDevicesForcedOpenEffect,
           this->fields.treasureDeviceId,
           (const MethodInfo_1D2A620 *)Method_System_Linq_Enumerable_Contains_int___);
}


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
  bool IsQuestPhaseClear; // w22
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x7
  int condQuestId; // w23
  int32_t condQuestPhase; // w24

  if ( (byte_438DCEE & 1) == 0 )
  {
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438DCEE = 1;
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
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsQuestPhaseClear = CondType__IsQuestPhaseClear(userId, condQuestId, condQuestPhase, beforeClearQuestId, 0, 0LL);
    }
  }
  else
  {
    IsQuestPhaseClear = 0;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v16);
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