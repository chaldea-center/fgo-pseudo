void __fastcall ServantTreasureDvcEntity___ctor(ServantTreasureDvcEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FCADB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FCADB = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantTreasureDvcEntity__CreatePK(
        int32_t svtId,
        int32_t num,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_40FCAD6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&num);
    byte_40FCAD6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           num,
           priority,
           (const MethodInfo_18C25C8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  TreasureDvcEntity_o *Entity; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  LocalizationManager_c *v33; // x0
  System_String_o *unknownNameText; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_40FCAD9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcMaster___, tdName);
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v18);
    sub_B16FFC(&LocalizationManager_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B16FFC(&StringLiteral_1/*""*/, v21);
    byte_40FCAD9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = (TreasureDvcEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    MasterData_WarQuestSelectionMaster,
                                    this->fields.treasureDeviceId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
  if ( !byte_40F87E5 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, v25);
    byte_40F87E5 = 1;
  }
  v33 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v33 = LocalizationManager_TypeInfo;
  }
  unknownNameText = v33->static_fields->unknownNameText;
  *tdName = unknownNameText;
  sub_B16F98(
    (BattleServantConfConponent_o *)tdName,
    (System_Int32_array **)unknownNameText,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  *tdExplanation = (System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98(
    (BattleServantConfConponent_o *)tdExplanation,
    (System_Int32_array **)StringLiteral_1/*""*/,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  *maxLv = 0;
  *tdGuageCount = 0;
  return 0;
}


int32_t __fastcall ServantTreasureDvcEntity__getLevelMax(ServantTreasureDvcEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0

  if ( (byte_40FCAD7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FCAD7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             this->fields.treasureDeviceId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
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
  __int64 v3; // x1
  BalanceConfig_c *v4; // x0

  if ( (byte_40FCADA & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v3);
    byte_40FCADA = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->static_fields->TreasureDevicesForcedOpenEffect,
           this->fields.treasureDeviceId,
           (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
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
  __int64 v14; // x1
  __int64 v15; // x1
  bool IsQuestPhaseClear; // w22
  WebViewManager_o *Instance; // x0
  ServantTreasureDeviceReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v19; // x7
  int condQuestId; // w23
  int32_t condQuestPhase; // w24

  if ( (byte_40FCAD8 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, userId);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_40FCAD8 = 1;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (ServantTreasureDeviceReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)Instance,
                                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantTreasureDeviceReleaseMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return ServantTreasureDeviceReleaseMaster__isUse(
           MasterData_WarQuestSelectionMaster,
           this->fields.svtId,
           this->fields.num,
           this->fields.priority,
           dispLimitCount,
           beforeClearQuestId,
           IsQuestPhaseClear,
           v19);
}