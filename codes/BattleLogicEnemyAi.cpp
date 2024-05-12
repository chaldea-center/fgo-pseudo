void __fastcall BattleLogicEnemyAi___ctor(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438D329 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_438D329 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this->fields.actlist = (struct System_Collections_Generic_List_BattleServantData__o *)v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.actlist, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  BattleLogicServantAi___ctor((BattleLogicServantAi_o *)this, 0LL);
}


void __fastcall BattleLogicEnemyAi__AddActCount(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  if ( !svtData || (++svtData->fields.actionCount, (data = this->fields.data) == 0LL) )
    sub_B7769C(this, svtData);
  ++data->fields.countEnemyAttack;
}


void __fastcall BattleLogicEnemyAi__AddTempDeadSvt(
        BattleLogicEnemyAi_o *this,
        int32_t svtUniqueId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x0

  if ( (byte_438D321 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_438D321 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
    System_Collections_Generic_HashSet_int___Add(
      tempDeadSvtHash,
      svtUniqueId,
      (const MethodInfo_2EDCC60 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


AiLogic_AiInfo_CheckedInfo_o *__fastcall BattleLogicEnemyAi__CheckAiActType(
        BattleLogicEnemyAi_o *this,
        bool skillFlg,
        BattleServantData_o *svtData,
        AiActEntity_o *aiActEnt,
        int32_t actType,
        const MethodInfo *method)
{
  _BOOL4 v9; // w21
  WeightRate_int__o *v11; // x22
  BattleLogicEnemyAi_o *Int; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  struct System_Int32_array *skillVals; // x8
  int32_t v16; // w21
  int32_t v17; // w22
  BattleSkillInfoData_o *v18; // x20
  char v19; // w22
  BattleLogicEnemyAi_o *v20; // x0
  const MethodInfo *v21; // x4
  int32_t Next; // w0
  int32_t Data; // w0
  bool v24; // zf
  int32_t v25; // w8
  _BOOL4 isUseSelfSkill; // w0
  AiLogic_AiInfo_CheckedInfo_o *v27; // x21

  v9 = skillFlg;
  if ( (byte_438D325 & 1) == 0 )
  {
    sub_B775C4(&AiLogic_AiInfo_CheckedInfo_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_WeightRate_int___ctor__);
    sub_B775C4(&Method_WeightRate_int__getCount__);
    sub_B775C4(&Method_WeightRate_int__getData__);
    sub_B775C4(&Method_WeightRate_int__getTotalWeight__);
    sub_B775C4(&Method_WeightRate_int__setWeight__);
    sub_B775C4(&WeightRate_int__TypeInfo);
    byte_438D325 = 1;
  }
  v11 = (WeightRate_int__o *)sub_B77694(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v11, (const MethodInfo_2CE85DC *)Method_WeightRate_int___ctor__);
  if ( actType <= 13 )
  {
    switch ( actType )
    {
      case 10:
        if ( v9 )
          BattleLogicEnemyAi__SetSkillRandomWeightSameProbability(Int, v11, 10, svtData, v14);
        if ( !v11 )
          goto LABEL_46;
        if ( WeightRate_int___getCount(v11, (const MethodInfo_2CE7B44 *)Method_WeightRate_int__getCount__) < 1 )
          goto LABEL_26;
        goto LABEL_31;
      case 11:
        if ( !svtData )
          goto LABEL_46;
        v19 = !v9;
        v24 = !BattleServantData__isUseSelfSkill(svtData, 0, 0LL) || !v9;
        v25 = 11;
        goto LABEL_38;
      case 12:
        if ( !svtData )
          goto LABEL_46;
        v19 = !v9;
        v24 = !BattleServantData__isUseSelfSkill(svtData, 1, 0LL) || !v9;
        v25 = 12;
LABEL_38:
        v18 = 0LL;
        if ( v24 )
          actType = 2;
        else
          actType = v25;
        goto LABEL_45;
      case 13:
        if ( !svtData )
          goto LABEL_46;
        v19 = !v9;
        isUseSelfSkill = BattleServantData__isUseSelfSkill(svtData, 2, 0LL);
        v18 = 0LL;
        if ( isUseSelfSkill && v9 )
          actType = 13;
        else
          actType = 2;
        goto LABEL_45;
      default:
        if ( actType != 1 )
          goto LABEL_33;
        Int = (BattleLogicEnemyAi_o *)AiAct__getInt(2, 0LL);
        if ( !v11 )
          goto LABEL_46;
        WeightRate_int___setWeight(
          v11,
          10,
          (int32_t)Int,
          (const MethodInfo_2CE77A4 *)Method_WeightRate_int__setWeight__);
        if ( v9 )
          BattleLogicEnemyAi__SetSkillRandomWeightSameProbability(v20, v11, 10, svtData, v21);
LABEL_31:
        Next = BattleRandom__getNext(v11->fields.totalweight, 0LL);
        Data = WeightRate_int___getData(v11, Next, (const MethodInfo_2CE7C28 *)Method_WeightRate_int__getData__);
        actType = AiAct__getType(Data, 0LL);
        break;
    }
    goto LABEL_33;
  }
  if ( (actType & 0xFFFFFFFE) != 40 )
  {
    if ( actType != 80 )
    {
LABEL_33:
      v19 = 0;
      v18 = 0LL;
      goto LABEL_45;
    }
    if ( svtData )
    {
      if ( BattleServantData__isNobleAction(svtData, 0LL)
        && TreasureDeviceConditionUtil__IsSatisfyEachCondition(svtData, this->fields.data, 0LL) )
      {
        v19 = 0;
        v18 = 0LL;
        actType = 80;
        goto LABEL_45;
      }
      goto LABEL_26;
    }
LABEL_46:
    sub_B7769C(Int, v13);
  }
  if ( !aiActEnt )
    goto LABEL_46;
  skillVals = aiActEnt->fields.skillVals;
  if ( !skillVals )
    goto LABEL_46;
  if ( (int)skillVals->max_length < 2 )
  {
LABEL_32:
    actType = 0;
    goto LABEL_33;
  }
  if ( actType == 41 && !v9 )
  {
LABEL_26:
    v18 = 0LL;
    v19 = 1;
    actType = 2;
    goto LABEL_45;
  }
  v16 = skillVals->m_Items[1];
  v17 = skillVals->m_Items[2];
  Int = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Int )
    goto LABEL_46;
  Int = (BattleLogicEnemyAi_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Int,
                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !Int )
    goto LABEL_46;
  if ( !SkillLvMaster__GetEntity((SkillLvMaster_o *)Int, v16, v17, 0LL) )
    goto LABEL_32;
  Int = (BattleLogicEnemyAi_o *)BattleSkillInfoData__MakeSkillData(20, 0LL);
  if ( !svtData )
    goto LABEL_46;
  v18 = BattleServantData__SetSkillInfo(svtData, (BattleSkillInfoData_o *)Int, 20, 0, v16, v17, -1LL, -1, 0LL);
  v19 = 0;
LABEL_45:
  v27 = (AiLogic_AiInfo_CheckedInfo_o *)sub_B77694(AiLogic_AiInfo_CheckedInfo_TypeInfo);
  AiLogic_AiInfo_CheckedInfo___ctor(v27, actType, v19 & 1, v18, 0LL);
  return v27;
}


bool __fastcall BattleLogicEnemyAi__CheckAiCanActionFromTargets(
        BattleLogicEnemyAi_o *this,
        AiLogic_AiInfo_o *aiInfo,
        AiBaseEntity_o *aiBaseEntity,
        const MethodInfo *method)
{
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x5
  BattleServantData_o *v10; // x23
  const MethodInfo *v11; // x3
  AiLogic_AiInfo_CheckedInfo_o *v12; // x20
  bool v13; // w26
  __int64 v14; // x10
  AiEntity_o *v15; // x19
  BattleLogicTarget_o *logictarget; // x27
  int32_t age; // w28
  int32_t uniqueId; // w22
  struct System_String_o *name; // x20
  System_Int32_array *FieldPlayerServantIDList; // x0
  AiActEntity_o *aiActEnt; // x24
  System_Int32_array *v22; // x25
  const MethodInfo *v23; // x2
  System_Int32_array *v24; // x25
  BattleLogicTarget_o *v25; // x20
  int32_t v26; // w22
  int32_t v27; // w23
  struct System_String_o *v28; // x26
  AiLogic_o *aiLogic; // x20
  __int64 v31; // x0
  AiBaseEntity_o *aiBaseEntitya; // [xsp+18h] [xbp-78h]
  AiLogic_AiInfo_CheckedInfo_o *v33; // [xsp+20h] [xbp-70h]
  AiLogic_AiInfo_o *v34; // [xsp+28h] [xbp-68h]
  System_Int32_array *v35; // [xsp+30h] [xbp-60h]
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_438D328 & 1) == 0 )
  {
    sub_B775C4(&AiEntity_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_AiActMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
    sub_B775C4(&int___TypeInfo);
    byte_438D328 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !aiBaseEntity || !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
          &entity,
          aiBaseEntity->fields.aiActId,
          (const MethodInfo_21FB8F0 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__) )
    return 1;
  Master_WarQuestSelectionMaster = (__int64)entity;
  if ( !entity )
    goto LABEL_42;
  Master_WarQuestSelectionMaster = AiActEntity__GetNoTargetNoActionType((AiActEntity_o *)entity, 0LL);
  if ( !(_DWORD)Master_WarQuestSelectionMaster )
    return 1;
  if ( !aiInfo )
    goto LABEL_42;
  Master_WarQuestSelectionMaster = (__int64)this->fields.data;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  Master_WarQuestSelectionMaster = (__int64)BattleData__getServantData(
                                              (BattleData_o *)Master_WarQuestSelectionMaster,
                                              aiInfo->fields.uniqueId,
                                              0LL);
  v10 = (BattleServantData_o *)Master_WarQuestSelectionMaster;
  if ( aiInfo->fields.procState == 1 )
  {
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_42;
    Master_WarQuestSelectionMaster = BattleServantData__canUseSkill(
                                       (BattleServantData_o *)Master_WarQuestSelectionMaster,
                                       -1,
                                       0LL);
  }
  else
  {
    Master_WarQuestSelectionMaster = 1LL;
  }
  if ( !entity )
    goto LABEL_42;
  Master_WarQuestSelectionMaster = (__int64)BattleLogicEnemyAi__CheckAiActType(
                                              this,
                                              Master_WarQuestSelectionMaster & 1,
                                              v10,
                                              (AiActEntity_o *)entity,
                                              *(&entity->fields.id + 1),
                                              v9);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  v12 = (AiLogic_AiInfo_CheckedInfo_o *)Master_WarQuestSelectionMaster;
  v13 = BattleLogicEnemyAi__CheckHate(this, *(_DWORD *)(Master_WarQuestSelectionMaster + 16), v10, v11);
  v14 = *(&AiEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&aiBaseEntity->klass->_2.bitflags2 + 1) >= (unsigned int)v14 )
    v15 = (AiEntity_c *)aiBaseEntity->klass->_2.typeHierarchy[v14 - 1] == AiEntity_TypeInfo
        ? (AiEntity_o *)aiBaseEntity
        : 0LL;
  else
    v15 = 0LL;
  Master_WarQuestSelectionMaster = sub_B775DC(int___TypeInfo, 1LL);
  if ( !entity )
    goto LABEL_42;
  if ( !v10 )
    goto LABEL_42;
  aiBaseEntitya = aiBaseEntity;
  v33 = v12;
  v34 = aiInfo;
  v35 = (System_Int32_array *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (__int64)this->fields.data;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  logictarget = this->fields.logictarget;
  age = (int32_t)entity->fields.age;
  uniqueId = v10->fields.uniqueId;
  name = entity->fields.name;
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(
                               (BattleData_o *)Master_WarQuestSelectionMaster,
                               0LL,
                               0LL);
  aiActEnt = (AiActEntity_o *)entity;
  v22 = FieldPlayerServantIDList;
  Master_WarQuestSelectionMaster = BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(this, v15, v23);
  if ( !logictarget )
    goto LABEL_42;
  Master_WarQuestSelectionMaster = BattleLogicTarget__getTargetAiAct(
                                     logictarget,
                                     age,
                                     uniqueId,
                                     (System_Int32_array *)name,
                                     v22,
                                     v13,
                                     0,
                                     0LL,
                                     aiActEnt,
                                     Master_WarQuestSelectionMaster & 1,
                                     0LL);
  if ( !v35 )
    goto LABEL_42;
  if ( !v35->max_length )
    goto LABEL_43;
  v35->m_Items[1] = Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = sub_B775DC(int___TypeInfo, 1LL);
  if ( !entity )
    goto LABEL_42;
  v24 = (System_Int32_array *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (__int64)this->fields.data;
  if ( !Master_WarQuestSelectionMaster
    || (v25 = this->fields.logictarget,
        v26 = (int32_t)entity->fields.age,
        v27 = v10->fields.uniqueId,
        v28 = entity->fields.name,
        Master_WarQuestSelectionMaster = (__int64)BattleData__getFieldEnemyServantIDList(
                                                    (BattleData_o *)Master_WarQuestSelectionMaster,
                                                    0,
                                                    0LL),
        !v25)
    || (Master_WarQuestSelectionMaster = BattleLogicTarget__getTargetAiAct(
                                           v25,
                                           v26,
                                           v27,
                                           (System_Int32_array *)v28,
                                           (System_Int32_array *)Master_WarQuestSelectionMaster,
                                           0,
                                           0,
                                           0LL,
                                           (AiActEntity_o *)entity,
                                           1,
                                           0LL),
        !v24) )
  {
LABEL_42:
    sub_B7769C(Master_WarQuestSelectionMaster, v8);
  }
  if ( !v24->max_length )
  {
LABEL_43:
    v31 = sub_B776C8(Master_WarQuestSelectionMaster);
    sub_B77668(v31, 0LL);
  }
  v24->m_Items[1] = Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (__int64)entity;
  if ( !entity )
    goto LABEL_42;
  aiLogic = this->fields.aiLogic;
  Master_WarQuestSelectionMaster = AiActEntity__GetNoTargetNoActionType((AiActEntity_o *)entity, 0LL);
  if ( !aiLogic )
    goto LABEL_42;
  if ( AiLogic__IsNoTargetNoActionTask(aiLogic, Master_WarQuestSelectionMaster, v35, v24, 0LL) )
    return 0;
  AiLogic_AiInfo__SetCheckedResult(v34, aiBaseEntitya, v33, 0LL);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicEnemyAi__CheckEnemyShiftAfter(
        BattleLogicEnemyAi_o *this,
        int32_t actUniqueId,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data || (data = (BattleData_o *)BattleData__getServantData(data, actUniqueId, 0LL), !this->fields.aiLogic) )
    sub_B7769C(data, *(_QWORD *)&actUniqueId);
  return AiLogic__checkThinking(
           this->fields.aiLogic,
           (BattleServantData_o *)data,
           20,
           (BattleLogicBaseAi_o *)this,
           0,
           0LL);
}


bool __fastcall BattleLogicEnemyAi__CheckHate(
        BattleLogicEnemyAi_o *this,
        int32_t actType,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  SkillLvMaster_o *v9; // x21
  BattleSkillInfoData_o *SkillInfoDataByAiActType; // x0
  BattleSkillInfoData_o *v11; // x19
  SkillLvEntity_o *Entity; // x21
  bool v13; // w0
  struct BattleLogic_o *logic; // x20
  System_Int32_array *funcId; // x22
  DataVals_array *v16; // x2
  BattleLogic_o *v17; // x0
  System_Int32_array *lookup; // x1
  TreasureDvcLvMaster_o *MasterData_WarQuestSelectionMaster; // x23

  if ( (byte_438D327 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438D327 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !svtData )
    goto LABEL_26;
  v9 = (SkillLvMaster_o *)Instance;
  SkillInfoDataByAiActType = BattleServantData__getSkillInfoDataByAiActType(svtData, actType, 0LL);
  v11 = SkillInfoDataByAiActType;
  if ( SkillInfoDataByAiActType )
  {
    Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))SkillInfoDataByAiActType->klass->vtable._5_get_skillId.method)(
                                  SkillInfoDataByAiActType,
                                  SkillInfoDataByAiActType->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !v9 )
      goto LABEL_26;
    Entity = SkillLvMaster__GetEntity(v9, (int32_t)Instance, v11->fields.skilllv, 0LL);
  }
  else
  {
    Entity = 0LL;
  }
  if ( AiAct__isSkillType(actType, 0LL) )
  {
    v13 = 1;
    if ( !Entity || !v11 )
    {
LABEL_21:
      if ( !Entity )
        return v13;
      goto LABEL_22;
    }
    logic = this->fields.logic;
    funcId = Entity->fields.funcId;
    Instance = (DataManager_o *)SkillLvEntity__getDataValsList(Entity, 0LL);
    if ( logic )
    {
      v16 = (DataVals_array *)Instance;
      v17 = logic;
      lookup = funcId;
LABEL_20:
      v13 = BattleLogic__checkEnemyTargetFunction(v17, lookup, v16, 0LL);
      goto LABEL_21;
    }
    goto LABEL_26;
  }
  if ( actType == 80 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    MasterData_WarQuestSelectionMaster = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    Instance,
                                                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    Instance = (DataManager_o *)BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_26;
    Instance = (DataManager_o *)TreasureDvcLvMaster__GetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  (int32_t)Instance,
                                  svtData->fields.treasuredvcLevel,
                                  0LL);
    if ( Instance )
    {
      if ( this->fields.logic )
      {
        lookup = (System_Int32_array *)Instance->fields.lookup;
        v17 = this->fields.logic;
        v16 = 0LL;
        goto LABEL_20;
      }
LABEL_26:
      sub_B7769C(Instance, v8);
    }
  }
  v13 = 1;
  if ( !Entity )
    return v13;
LABEL_22:
  if ( v11 )
    return SkillLvEntity__IsEnableTarget(Entity, v13, 0LL);
  return v13;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicEnemyAi__CheckPlayerTurnEndAfter(
        BattleLogicEnemyAi_o *this,
        int32_t actUniqueId,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data || (data = (BattleData_o *)BattleData__getServantData(data, actUniqueId, 0LL), !this->fields.aiLogic) )
    sub_B7769C(data, *(_QWORD *)&actUniqueId);
  return AiLogic__checkThinking(
           this->fields.aiLogic,
           (BattleServantData_o *)data,
           14,
           (BattleLogicBaseAi_o *)this,
           0,
           0LL);
}


void __fastcall BattleLogicEnemyAi__CheckSkillAct(
        BattleLogicEnemyAi_o *this,
        bool skillFlg,
        BattleServantData_o *servantData,
        int32_t skillIndex,
        int32_t *actType,
        bool *isNoMessage,
        const MethodInfo *method)
{
  if ( !skillFlg )
  {
    *actType = 2;
    *isNoMessage = 1;
  }
  if ( !servantData )
    sub_B7769C(0LL, skillFlg);
  if ( !BattleServantData__isUseSelfSkill(servantData, skillIndex, 0LL) )
    *actType = 2;
}


void __fastcall BattleLogicEnemyAi__ClearTempDeadSvt(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x0

  if ( (byte_438D322 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__Clear__);
    byte_438D322 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
    System_Collections_Generic_HashSet_int___Clear(
      tempDeadSvtHash,
      (const MethodInfo_2EDC09C *)Method_System_Collections_Generic_HashSet_int__Clear__);
}


BattleLogicTask_array *__fastcall BattleLogicEnemyAi__CreateAIEnemyShiftAfterTask(
        BattleLogicEnemyAi_o *this,
        int32_t actUniqueId,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x1
  const MethodInfo *v6; // x3

  data = this->fields.data;
  if ( !data )
    sub_B7769C(0LL, actUniqueId);
  ServantData = BattleData__getServantData(data, actUniqueId, 0LL);
  return BattleLogicEnemyAi__CreateAILogicTask(this, ServantData, 20, v6);
}


BattleLogicTask_array *__fastcall BattleLogicEnemyAi__CreateAILogicTask(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        int32_t procState,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  struct AiActMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct BattleData_o *data; // x8
  AiLogic_AiInfo_o *info; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_438D31D & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438D31D = 1;
  }
  info = 0LL;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = (struct AiActMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 Instance,
                                                                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = MasterData_WarQuestSelectionMaster;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.aiActMst,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  Instance = (DataManager_o *)this->fields.aiLogic;
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)AiLogic__getAction(
                                (AiLogic_o *)Instance,
                                svtData,
                                procState,
                                data->fields.turnCount,
                                0,
                                (BattleLogicBaseAi_o *)this,
                                &info,
                                0,
                                0LL);
  if ( !Instance )
  {
    if ( v7 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                        (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_11:
    sub_B7769C(Instance, v9);
  }
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, DataManager_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._19_procAiAct.method)(
                                this,
                                svtData,
                                Instance,
                                0LL,
                                info,
                                0LL,
                                this->klass->vtable._20_ExistThinking.methodPtr);
  if ( !v7 )
    goto LABEL_11;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v7,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                    (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicEnemyAi__CreateAITurnPlayerEndAfterTask(
        BattleLogicEnemyAi_o *this,
        int32_t actUniqueId,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x1
  const MethodInfo *v6; // x3

  data = this->fields.data;
  if ( !data )
    sub_B7769C(0LL, actUniqueId);
  ServantData = BattleData__getServantData(data, actUniqueId, 0LL);
  return BattleLogicEnemyAi__CreateAILogicTask(this, ServantData, 14, v6);
}


BattleLogicTask_o *__fastcall BattleLogicEnemyAi__CreateCommandRandomTask(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        BattleLogicTask_o *derivedTask,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x5
  struct BattleCommandData_o *command; // x8

  if ( !derivedTask
    || (this = (BattleLogicEnemyAi_o *)this->fields.logictarget) == 0LL
    || (this = (BattleLogicEnemyAi_o *)BattleLogicTarget__getTargetBase(
                                         (BattleLogicTarget_o *)this,
                                         derivedTask->fields.targetIdlist,
                                         0,
                                         1,
                                         0LL),
        (command = derivedTask->fields.command) == 0LL) )
  {
    sub_B7769C(this, svtData);
  }
  return BattleLogicEnemyAi__createCommandRandomTask(
           this,
           svtData,
           (int32_t)this,
           command->fields.actionIndex,
           derivedTask,
           v6);
}


System_Collections_Generic_List_BattleLogicTask__o *__fastcall BattleLogicEnemyAi__CreateTaskAIAttack(
        BattleLogicEnemyAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  __int64 Instance; // x0
  System_Collections_Generic_IEnumerable_T__o *v8; // x1
  UnityEngine_Object_o *perf; // x21
  BattleData_o *v10; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v11; // x23
  struct BattleData_o *v12; // x8
  struct AiActMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct AiActMaster_o **p_aiActMst; // x24
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x1
  BattleServantData_o *v23; // x21
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  BattleLogicTask_o *v27; // x23
  TreasureDvcLvMaster_o *v28; // x25
  char v29; // w25
  struct BattleData_o *v30; // x8
  struct BattleData_o *v31; // x8
  struct BattleData_o *v32; // x8
  BattleLogicEnemyAi_c *klass; // x9
  struct AiEntity_o *noThinkAiEnt; // x2
  struct BattleData_o *v35; // x8
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct BattleLogicTarget_o *logictarget; // x8
  System_Int32_array **tempDeadSvtHash; // x1
  AiEntity_o *v44; // x26
  BattleLogicTarget_o *v45; // x24
  int32_t uniqueId; // w28
  System_Int32_array *FieldPlayerServantIDList; // x0
  AiActEntity_o *v48; // x27
  System_Int32_array *v49; // x22
  const MethodInfo *v50; // x2
  int32_t TargetAiAct; // w0
  BattleLogicTarget_o *v52; // x24
  int32_t v53; // w26
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  BattleCommandData_o *v60; // x22
  BattleComboData_o *v61; // x24
  struct BattleData_o *v62; // x8
  int32_t TreasureDvcId; // w0
  __int64 v64; // x22
  __int64 v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  const MethodInfo *v72; // x3
  __int64 v73; // x0
  __int64 v74; // x0
  struct System_String_o *name; // [xsp+18h] [xbp-78h]
  int32_t age; // [xsp+24h] [xbp-6Ch]
  AiLogic_AiInfo_o *v77; // [xsp+28h] [xbp-68h] BYREF
  WarEntity_o *entity; // [xsp+30h] [xbp-60h] BYREF
  AiLogic_AiInfo_o *info; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_438D315 & 1) == 0 )
  {
    sub_B775C4(&BattleComboData_TypeInfo);
    sub_B775C4(&BattleCommandData_TypeInfo);
    sub_B775C4(&Method_BattleLogicEnemyAi_IsNotTempDeadSvt__);
    sub_B775C4(&BattleLogicTask___TypeInfo);
    sub_B775C4(&BattleLogicTask_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_B775C4(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Func_BattleServantData__bool___ctor__);
    sub_B775C4(&System_Func_BattleServantData__bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleServantData__RemoveAt__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleServantData__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438D315 = 1;
  }
  entity = 0LL;
  info = 0LL;
  v77 = 0LL;
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !data )
    goto LABEL_67;
  perf = (UnityEngine_Object_o *)data->fields.perf;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(perf, 0LL, 0LL) )
  {
    Instance = (__int64)data->fields.perf;
    if ( !Instance )
      goto LABEL_67;
    BattlePerformance__setOffTarget((BattlePerformance_o *)Instance, 0LL);
  }
  v10 = this->fields.data;
  v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleLogicEnemyAi_IsNotTempDeadSvt__,
    (const MethodInfo_29E92C4 *)Method_System_Func_BattleServantData__bool___ctor__);
  if ( !v10 )
    goto LABEL_67;
  Instance = BattleData__CheckAlivePlayers(v10, (System_Func_BattleServantData__bool__o *)v11, 0LL);
  if ( (Instance & 1) == 0 )
    return (System_Collections_Generic_List_BattleLogicTask__o *)v6;
  v12 = this->fields.data;
  if ( !v12 )
    goto LABEL_67;
  if ( !v12->fields.leaderDown && !v12->fields.endbattleFlg )
  {
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_67;
    MasterData_WarQuestSelectionMaster = (struct AiActMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_AiActMaster___);
    this->fields.aiActMst = MasterData_WarQuestSelectionMaster;
    p_aiActMst = &this->fields.aiActMst;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.aiActMst,
      (System_Int32_array **)MasterData_WarQuestSelectionMaster,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    BattleLogicEnemyAi__updateActPriorityList(this, v22);
    Instance = (__int64)this->fields.actlist;
    if ( !Instance )
      goto LABEL_67;
    if ( *(int *)(Instance + 24) <= 0 )
    {
      v30 = this->fields.data;
      if ( v30 )
      {
        ++v30->fields.countEnemyAttack;
        return (System_Collections_Generic_List_BattleLogicTask__o *)v6;
      }
      goto LABEL_67;
    }
    v23 = *(BattleServantData_o **)(*(_QWORD *)(Instance + 16) + 32LL);
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)Instance,
      0,
      (const MethodInfo_3054F88 *)Method_System_Collections_Generic_List_BattleServantData__RemoveAt__);
    if ( !v23 )
      goto LABEL_67;
    if ( !BattleServantData__isAlive(v23, 0, 0LL)
      || !BattleLogicEnemyAi__IsNotTempDeadSvt(this, v23, v24)
      || !v23->fields.isEntry )
    {
      return (System_Collections_Generic_List_BattleLogicTask__o *)v6;
    }
    if ( !BattleServantData__isAction(v23, 0LL) )
    {
LABEL_66:
      BattleLogicEnemyAi__AddActCount(this, v23, v25);
      return (System_Collections_Generic_List_BattleLogicTask__o *)v6;
    }
    Instance = BattleServantData__isTDSeraled(v23, 0LL);
    if ( (Instance & 1) != 0
      || (Instance = BattleServantData__checkUseTDvc(v23, this->fields.data, 1, 0LL), (Instance & 1) == 0) )
    {
      v31 = this->fields.data;
      if ( v31 )
      {
        Instance = (__int64)this->fields.aiLogic;
        if ( Instance )
        {
          Instance = (__int64)AiLogic__getAction(
                                (AiLogic_o *)Instance,
                                v23,
                                1,
                                data->fields.turnCount,
                                v31->fields.countEnemyAttack,
                                (BattleLogicBaseAi_o *)this,
                                &info,
                                0,
                                0LL);
          v32 = this->fields.data;
          if ( Instance )
          {
            if ( !v32 )
              goto LABEL_67;
            klass = this->klass;
            noThinkAiEnt = (struct AiEntity_o *)Instance;
          }
          else
          {
            if ( !v32 )
              goto LABEL_67;
            klass = this->klass;
            noThinkAiEnt = this->fields.noThinkAiEnt;
          }
          Instance = ((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, struct AiEntity_o *, _QWORD, AiLogic_AiInfo_o *, __int64, Il2CppMethodPointer))klass->vtable._19_procAiAct.method)(
                       this,
                       v23,
                       noThinkAiEnt,
                       (unsigned int)v32->fields.countEnemyAttack,
                       info,
                       1LL,
                       klass->vtable._20_ExistThinking.methodPtr);
          if ( v6 )
          {
            v8 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
LABEL_65:
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v6,
              v8,
              (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
            goto LABEL_66;
          }
        }
      }
    }
    else
    {
      Instance = (__int64)BattleLogicEnemyAi__taskAIEnemyMaxNp(this, v23->fields.uniqueId, v26);
      if ( !Instance )
        goto LABEL_67;
      v8 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
      if ( *(_QWORD *)(Instance + 24) )
      {
LABEL_64:
        if ( v6 )
          goto LABEL_65;
        goto LABEL_67;
      }
      v27 = (BattleLogicTask_o *)sub_B77694(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v27, 0LL);
      if ( v27 )
      {
        BattleLogicTask__setActor(v27, 3, v23->fields.uniqueId, 0LL);
        Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v28 = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
          Instance = BattleServantData__getTreasureDvcId(v23, 1, 0LL);
          if ( v28 )
          {
            Instance = (__int64)TreasureDvcLvMaster__GetEntity(v28, Instance, v23->fields.treasuredvcLevel, 0LL);
            if ( Instance )
            {
              if ( !this->fields.logic )
                goto LABEL_67;
              Instance = BattleLogic__checkEnemyTargetFunction(
                           this->fields.logic,
                           *(System_Int32_array **)(Instance + 32),
                           0LL,
                           0LL);
              v29 = Instance;
            }
            else
            {
              v29 = 1;
            }
            v35 = this->fields.data;
            if ( v35 )
            {
              Instance = (__int64)this->fields.aiLogic;
              if ( Instance )
              {
                Instance = (__int64)AiLogic__getAction(
                                      (AiLogic_o *)Instance,
                                      v23,
                                      8,
                                      data->fields.turnCount,
                                      v35->fields.countEnemyAttack,
                                      (BattleLogicBaseAi_o *)this,
                                      &v77,
                                      0,
                                      0LL);
                entity = 0LL;
                logictarget = this->fields.logictarget;
                if ( logictarget )
                {
                  tempDeadSvtHash = (System_Int32_array **)this->fields.tempDeadSvtHash;
                  v44 = (AiEntity_o *)Instance;
                  logictarget->fields.tempDeadSvtHash = (struct System_Collections_Generic_HashSet_int__o *)tempDeadSvtHash;
                  sub_B77560(
                    (BattleServantConfConponent_o *)&logictarget->fields.tempDeadSvtHash,
                    tempDeadSvtHash,
                    v36,
                    v37,
                    v38,
                    v39,
                    v40,
                    v41);
                  if ( !v44 )
                    goto LABEL_55;
                  Instance = (__int64)*p_aiActMst;
                  if ( !*p_aiActMst )
                    goto LABEL_67;
                  Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                               &entity,
                               v44->fields.aiActId,
                               (const MethodInfo_21FB8F0 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
                  if ( (Instance & 1) != 0 )
                  {
                    if ( !entity )
                      goto LABEL_67;
                    v45 = this->fields.logictarget;
                    uniqueId = v23->fields.uniqueId;
                    age = (int32_t)entity->fields.age;
                    name = entity->fields.name;
                    FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
                    v48 = (AiActEntity_o *)entity;
                    v49 = FieldPlayerServantIDList;
                    Instance = BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(this, v44, v50);
                    if ( !v45 )
                      goto LABEL_67;
                    TargetAiAct = BattleLogicTarget__getTargetAiAct(
                                    v45,
                                    age,
                                    uniqueId,
                                    (System_Int32_array *)name,
                                    v49,
                                    v29 & 1,
                                    0,
                                    0LL,
                                    v48,
                                    Instance & 1,
                                    0LL);
                  }
                  else
                  {
LABEL_55:
                    v52 = this->fields.logictarget;
                    v53 = v23->fields.uniqueId;
                    Instance = (__int64)BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
                    if ( !v52 )
                      goto LABEL_67;
                    TargetAiAct = BattleLogicTarget__getTargetAiAct(
                                    v52,
                                    1,
                                    v53,
                                    0LL,
                                    (System_Int32_array *)Instance,
                                    v29 & 1,
                                    0,
                                    0LL,
                                    (AiActEntity_o *)entity,
                                    1,
                                    0LL);
                  }
                  BattleLogicTask__setTarget(v27, TargetAiAct, 0LL);
                  Instance = (__int64)this->fields.logictarget;
                  if ( !Instance )
                    goto LABEL_67;
                  *(_QWORD *)(Instance + 24) = 0LL;
                  sub_B77560((BattleServantConfConponent_o *)(Instance + 24), 0LL, v54, v55, v56, v57, v58, v59);
                  v60 = (BattleCommandData_o *)sub_B77694(BattleCommandData_TypeInfo);
                  BattleCommandData___ctor(v60, 0LL);
                  Instance = BattleServantData__getTreasureDvcCardId(v23, 0LL);
                  if ( !v60 )
                    goto LABEL_67;
                  v60->fields._type = Instance;
                  v60->fields.svtlimit = BattleServantData__getDispLimitCount(v23, 1, 0LL);
                  v60->fields.uniqueId = v23->fields.uniqueId;
                  v60->fields.svtId = BattleServantData__getSvtId(v23, 0LL);
                  v60->fields.treasureDvc = BattleServantData__getTreasureDvcId(v23, 1, 0LL);
                  v61 = (BattleComboData_o *)sub_B77694(BattleComboData_TypeInfo);
                  BattleComboData___ctor(v61, 0LL);
                  v62 = this->fields.data;
                  if ( !v62 )
                    goto LABEL_67;
                  BattleLogicTask__setActionCommand(v27, v61, v60, v62->fields.countEnemyAttack, 0LL);
                  TreasureDvcId = BattleServantData__getTreasureDvcId(v23, 1, 0LL);
                  BattleLogicTask__setActionTreasureDvc(v27, TreasureDvcId, 1, 0LL);
                  Instance = sub_B775DC(BattleLogicTask___TypeInfo, 1LL);
                  if ( !Instance )
                    goto LABEL_67;
                  v64 = Instance;
                  v65 = sub_B77684(v27, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
                  if ( !v65 )
                  {
                    v73 = sub_B776BC(0LL);
                    sub_B77668(v73, 0LL);
                  }
                  if ( !*(_DWORD *)(v64 + 24) )
                  {
                    v74 = sub_B776C8(v65);
                    sub_B77668(v74, 0LL);
                  }
                  *(_QWORD *)(v64 + 32) = v27;
                  sub_B77560(
                    (BattleServantConfConponent_o *)(v64 + 32),
                    (System_Int32_array **)v27,
                    v66,
                    v67,
                    v68,
                    v69,
                    v70,
                    v71);
                  Instance = (__int64)BattleLogicEnemyAi__ReplaceCommandTasksBySealStatus(
                                        this,
                                        v23,
                                        (BattleLogicTask_array *)v64,
                                        v72);
                  v8 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
                  goto LABEL_64;
                }
              }
            }
          }
        }
      }
    }
LABEL_67:
    sub_B7769C(Instance, v8);
  }
  return (System_Collections_Generic_List_BattleLogicTask__o *)v6;
}


void __fastcall BattleLogicEnemyAi__ExcludeDeadFromTempDead(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x20
  Il2CppObject *data; // x19
  System_Predicate_int__o *v5; // x21

  if ( (byte_438D323 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleData_IsNotAliveTarget__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
    sub_B775C4(&Method_System_Predicate_int___ctor__);
    sub_B775C4(&System_Predicate_int__TypeInfo);
    byte_438D323 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
  {
    data = (Il2CppObject *)this->fields.data;
    v5 = (System_Predicate_int__o *)sub_B77694(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      v5,
      data,
      Method_BattleData_IsNotAliveTarget__,
      (const MethodInfo_2C30DC8 *)Method_System_Predicate_int___ctor__);
    System_Collections_Generic_HashSet_int___RemoveWhere(
      tempDeadSvtHash,
      (System_Predicate_T__o *)v5,
      (const MethodInfo_2EDD1E0 *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
  }
}


System_Int32_array *__fastcall BattleLogicEnemyAi__GetCommandArray(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *data; // x21
  BattleData_o *StageEntity; // x0
  __int64 v7; // x1

  if ( (byte_438D320 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D320 = 1;
  }
  data = (UnityEngine_Object_o *)this->fields.data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  StageEntity = (BattleData_o *)UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
  if ( ((unsigned __int8)StageEntity & 1) == 0 )
    goto LABEL_12;
  StageEntity = this->fields.data;
  if ( !StageEntity )
    goto LABEL_14;
  StageEntity = (BattleData_o *)BattleData__getStageEntity(StageEntity, 0LL);
  if ( !StageEntity )
  {
LABEL_12:
    if ( servantData )
      return BattleServantData__getCommandList(servantData, 0LL);
LABEL_14:
    sub_B7769C(StageEntity, v7);
  }
  StageEntity = (BattleData_o *)StageEntity__GetAiActTypeAttackCommandCardType(
                                  (StageEntity_o *)StageEntity,
                                  servantData,
                                  0LL);
  if ( !servantData )
    goto LABEL_14;
  if ( (_DWORD)StageEntity )
    return BattleServantData__getCommandArray(servantData, (int32_t)StageEntity, 0LL);
  return BattleServantData__getCommandList(servantData, 0LL);
}


void __fastcall BattleLogicEnemyAi__Initialize(
        BattleLogicEnemyAi_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  AiLogic_o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x1
  AiLogic_o *aiLogic; // x0
  AiEntity_o *v14; // x20
  struct AiEntity_o **p_noThinkAiEnt; // x19
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct AiEntity_o *v22; // x19

  if ( (byte_438D311 & 1) == 0 )
  {
    sub_B775C4(&AiEntity_TypeInfo);
    sub_B775C4(&AiLogic_TypeInfo);
    sub_B775C4(&StringLiteral_9497/*"NOTHINK_AIACTID"*/);
    byte_438D311 = 1;
  }
  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, method);
  v5 = (AiLogic_o *)sub_B77694(AiLogic_TypeInfo);
  AiLogic___ctor(v5, 0LL);
  this->fields.aiLogic = v5;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.aiLogic, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    goto LABEL_6;
  AiLogic__Initialize(aiLogic, data, 0LL);
  v14 = (AiEntity_o *)sub_B77694(AiEntity_TypeInfo);
  AiEntity___ctor(v14, 0LL);
  this->fields.noThinkAiEnt = v14;
  p_noThinkAiEnt = &this->fields.noThinkAiEnt;
  sub_B77560((BattleServantConfConponent_o *)p_noThinkAiEnt, (System_Int32_array **)v14, v16, v17, v18, v19, v20, v21);
  v22 = *p_noThinkAiEnt;
  aiLogic = (AiLogic_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_9497/*"NOTHINK_AIACTID"*/, 0LL);
  if ( !v22 )
LABEL_6:
    sub_B7769C(aiLogic, v12);
  v22->fields.aiActId = (int)aiLogic;
}


bool __fastcall BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(
        BattleLogicEnemyAi_o *this,
        AiEntity_o *aiEnt,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  int32_t LogicType; // w0

  logic = this->fields.logic;
  if ( !logic )
    sub_B7769C(0LL, aiEnt);
  LogicType = BattleLogic__GetLogicType(logic, 0LL);
  if ( aiEnt )
    return AiBaseEntity__IsDeadToEnableUpHate((AiBaseEntity_o *)aiEnt, LogicType == 42, 0LL);
  else
    return LogicType == 42;
}


bool __fastcall BattleLogicEnemyAi__IsNotTempDeadSvt(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleLogicEnemyAi_o *v4; // x20

  v4 = this;
  if ( (byte_438D324 & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_B775C4(&Method_BasicHelper_ContainsSelfNotNull_int___);
    byte_438D324 = 1;
  }
  if ( !svtData )
    sub_B7769C(this, svtData);
  return !BasicHelper__ContainsSelfNotNull_int_(
            (System_Collections_Generic_HashSet_T__o *)v4->fields.tempDeadSvtHash,
            svtData->fields.uniqueId,
            (const MethodInfo_1C66360 *)Method_BasicHelper_ContainsSelfNotNull_int___);
}


BattleLogicTask_o *__fastcall BattleLogicEnemyAi__ReplaceCommandTaskBySealStatus(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        BattleLogicTask_o *derivedTask,
        const MethodInfo *method)
{
  BattleLogicTask_o *CommandRandomTask; // x19
  _BOOL8 IsSealedCommandTask; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  CommandRandomTask = derivedTask;
  IsSealedCommandTask = BattleLogicServantAi__IsSealedCommandTask(svtData, derivedTask, 0LL);
  if ( IsSealedCommandTask )
  {
    if ( !CommandRandomTask )
      goto LABEL_8;
    if ( !BattleLogicTask__isTreasureDvc(CommandRandomTask, 0LL) )
    {
LABEL_6:
      BattleLogicTask__SetDoNotAct(CommandRandomTask, 0LL);
      return CommandRandomTask;
    }
    CommandRandomTask = BattleLogicEnemyAi__CreateCommandRandomTask(this, svtData, CommandRandomTask, v9);
    IsSealedCommandTask = BattleLogicServantAi__IsSealedCommandTask(svtData, CommandRandomTask, 0LL);
    if ( IsSealedCommandTask )
    {
      if ( CommandRandomTask )
        goto LABEL_6;
LABEL_8:
      sub_B7769C(IsSealedCommandTask, v8);
    }
  }
  return CommandRandomTask;
}


BattleLogicTask_array *__fastcall BattleLogicEnemyAi__ReplaceCommandTasksBySealStatus(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        BattleLogicTask_array *derivedTasks,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v22; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_438D31F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Select_BattleLogicTask__BattleLogicTask___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
    sub_B775C4(&Method_System_Func_BattleLogicTask__BattleLogicTask___ctor__);
    sub_B775C4(&System_Func_BattleLogicTask__BattleLogicTask__TypeInfo);
    sub_B775C4(&Method_BattleLogicEnemyAi___c__DisplayClass36_0__ReplaceCommandTasksBySealStatus_b__0__);
    sub_B775C4(&BattleLogicEnemyAi___c__DisplayClass36_0_TypeInfo);
    byte_438D31F = 1;
  }
  v7 = sub_B77694(BattleLogicEnemyAi___c__DisplayClass36_0_TypeInfo);
  BattleLogicEnemyAi___c__DisplayClass36_0___ctor((BattleLogicEnemyAi___c__DisplayClass36_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B7769C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = svtData;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)svtData, v16, v17, v18, v19, v20, v21);
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_BattleLogicTask__BattleLogicTask__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v22,
    (Il2CppObject *)v7,
    Method_BattleLogicEnemyAi___c__DisplayClass36_0__ReplaceCommandTasksBySealStatus_b__0__,
    (const MethodInfo_29EAA10 *)Method_System_Func_BattleLogicTask__BattleLogicTask___ctor__);
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)derivedTasks,
                                                               (System_Func_TSource__TResult__o *)v22,
                                                               (const MethodInfo_1D39068 *)Method_System_Linq_Enumerable_Select_BattleLogicTask__BattleLogicTask___);
  return (BattleLogicTask_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v23,
                                    (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
}


void __fastcall BattleLogicEnemyAi__SetNextActIncludeTempDeadSvt(
        BattleLogicEnemyAi_o *this,
        bool isIncludeTempDeadSvt,
        const MethodInfo *method)
{
  if ( this->fields.tempDeadSvtHash )
    this->fields.isClearTempDeadSvtPrevAct = isIncludeTempDeadSvt;
}


void __fastcall BattleLogicEnemyAi__SetSkillRandomWeightSameProbability(
        BattleLogicEnemyAi_o *this,
        WeightRate_int__o *weight,
        int32_t weightRate,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  if ( (byte_438D326 & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_B775C4(&Method_WeightRate_int__setWeight__);
    byte_438D326 = 1;
  }
  if ( !servantData )
    goto LABEL_14;
  if ( BattleServantData__isUseSelfSkill(servantData, 0, 0LL) )
  {
    this = (BattleLogicEnemyAi_o *)AiAct__getInt(11, 0LL);
    if ( !weight )
      goto LABEL_14;
    WeightRate_int___setWeight(
      weight,
      weightRate,
      (int32_t)this,
      (const MethodInfo_2CE77A4 *)Method_WeightRate_int__setWeight__);
  }
  if ( BattleServantData__isUseSelfSkill(servantData, 1, 0LL) )
  {
    this = (BattleLogicEnemyAi_o *)AiAct__getInt(12, 0LL);
    if ( !weight )
      goto LABEL_14;
    WeightRate_int___setWeight(
      weight,
      weightRate,
      (int32_t)this,
      (const MethodInfo_2CE77A4 *)Method_WeightRate_int__setWeight__);
  }
  if ( BattleServantData__isUseSelfSkill(servantData, 2, 0LL) )
  {
    this = (BattleLogicEnemyAi_o *)AiAct__getInt(13, 0LL);
    if ( weight )
    {
      WeightRate_int___setWeight(
        weight,
        weightRate,
        (int32_t)this,
        (const MethodInfo_2CE77A4 *)Method_WeightRate_int__setWeight__);
      return;
    }
LABEL_14:
    sub_B7769C(this, weight);
  }
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicEnemyAi__TaskAIAttackEnd(
        BattleLogicEnemyAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  BattleLogicEnemyAi__ClearTempDeadSvt(this, *(const MethodInfo **)&ltype);
  this->fields.tempDeadSvtHash = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.tempDeadSvtHash, 0LL, v5, v6, v7, v8, v9, v10);
  return 0LL;
}


BattleLogicTask_array *__fastcall BattleLogicEnemyAi__TaskAIAttackPrecheck(
        BattleLogicEnemyAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  __int64 v6; // x21
  bool isClearTempDeadSvtPrevAct; // w23
  CheckEnemyRelationInterruptProcess_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438D313 & 1) == 0 )
  {
    sub_B775C4(&BattleLogicTask_TypeInfo);
    sub_B775C4(&CheckEnemyRelationInterruptProcess_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_438D313 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v6 = sub_B77694(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v6, 0LL);
  isClearTempDeadSvtPrevAct = this->fields.isClearTempDeadSvtPrevAct;
  v8 = (CheckEnemyRelationInterruptProcess_o *)sub_B77694(CheckEnemyRelationInterruptProcess_TypeInfo);
  CheckEnemyRelationInterruptProcess___ctor(v8, isClearTempDeadSvtPrevAct, 0LL);
  if ( !v6
    || (*(_QWORD *)(v6 + 232) = v8,
        sub_B77560((BattleServantConfConponent_o *)(v6 + 232), (System_Int32_array **)v8, v11, v12, v13, v14, v15, v16),
        *(_BYTE *)(v6 + 209) = 1,
        !v5) )
  {
    sub_B7769C(v9, v10);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v5,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v6,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  this->fields.isClearTempDeadSvtPrevAct = 0;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                    (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicEnemyAi__TaskAIAttackStart(
        BattleLogicEnemyAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v5; // x20
  struct System_Collections_Generic_HashSet_int__o **p_tempDeadSvtHash; // x19
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_438D312 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int___ctor___69373296);
    sub_B775C4(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_438D312 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_B77694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_2EDBA84 *)Method_System_Collections_Generic_HashSet_int___ctor___69373296);
  this->fields.tempDeadSvtHash = v5;
  p_tempDeadSvtHash = &this->fields.tempDeadSvtHash;
  sub_B77560((BattleServantConfConponent_o *)p_tempDeadSvtHash, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
  *((_BYTE *)p_tempDeadSvtHash + 8) = 0;
  return 0LL;
}


void __fastcall BattleLogicEnemyAi__addEnemyActPriorityList(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *inSvtData,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleServantData__o *actlist; // x0

  if ( (byte_438D318 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_BattleServantData__Insert__);
    byte_438D318 = 1;
  }
  actlist = this->fields.actlist;
  if ( !actlist )
    sub_B7769C(0LL, inSvtData);
  System_Collections_Generic_List_XWeaponTrail_Element___Insert(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)actlist,
    0,
    (XWeaponTrail_Element_o *)inSvtData,
    (const MethodInfo_30544AC *)Method_System_Collections_Generic_List_BattleServantData__Insert__);
}


BattleLogicTask_o *__fastcall BattleLogicEnemyAi__createCommandRandomTask(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        int32_t targetId,
        int32_t countAct,
        BattleLogicTask_o *baseTask,
        const MethodInfo *method)
{
  BattleLogicTask_o *v10; // x22
  System_Int32_array *CommandList; // x0
  __int64 v12; // x1
  int32_t Type; // w24
  WeightRate_int__o *v14; // x23
  __int64 v15; // x8
  System_Int32_array *v16; // x24
  unsigned __int64 v17; // x25
  int32_t Next; // w0
  int32_t Data; // w0
  int32_t SvtId; // w25
  int32_t DispLimitCount; // w26
  BattleCommandData_o *v22; // x23
  int32_t v23; // w1
  BattleComboData_o *v24; // x20
  __int64 v26; // x0

  if ( (byte_438D31E & 1) == 0 )
  {
    sub_B775C4(&BattleComboData_TypeInfo);
    sub_B775C4(&BattleCommandData_TypeInfo);
    sub_B775C4(&BattleLogicTask_TypeInfo);
    sub_B775C4(&Method_WeightRate_int___ctor__);
    sub_B775C4(&Method_WeightRate_int__getData__);
    sub_B775C4(&Method_WeightRate_int__getTotalWeight__);
    sub_B775C4(&Method_WeightRate_int__setWeight__);
    sub_B775C4(&WeightRate_int__TypeInfo);
    byte_438D31E = 1;
  }
  v10 = (BattleLogicTask_o *)sub_B77694(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_21;
  BattleLogicTask__setTarget(v10, targetId, 0LL);
  if ( !svtData )
    goto LABEL_21;
  BattleLogicTask__setActor(v10, 3, svtData->fields.uniqueId, 0LL);
  if ( SvtType__IsEnemy_19798592(svtData->fields.svtType, 0LL) )
  {
    Type = 10;
    goto LABEL_15;
  }
  v14 = (WeightRate_int__o *)sub_B77694(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v14, (const MethodInfo_2CE85DC *)Method_WeightRate_int___ctor__);
  CommandList = BattleServantData__getCommandList(svtData, 0LL);
  if ( !CommandList )
    goto LABEL_21;
  v15 = *(_QWORD *)&CommandList->max_length;
  v16 = CommandList;
  if ( (int)v15 >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v15 )
      {
        v26 = sub_B776C8(CommandList);
        sub_B77668(v26, 0LL);
      }
      if ( !v14 )
        break;
      WeightRate_int___setWeight(
        v14,
        10,
        v16->m_Items[v17 + 1],
        (const MethodInfo_2CE77A4 *)Method_WeightRate_int__setWeight__);
      LODWORD(v15) = v16->max_length;
      if ( (__int64)++v17 >= (int)v15 )
        goto LABEL_13;
    }
LABEL_21:
    sub_B7769C(CommandList, v12);
  }
LABEL_13:
  if ( !v14 )
    goto LABEL_21;
  Next = BattleRandom__getNext(v14->fields.totalweight, 0LL);
  Data = WeightRate_int___getData(v14, Next, (const MethodInfo_2CE7C28 *)Method_WeightRate_int__getData__);
  Type = BattleCommand__getType(Data, 0LL);
LABEL_15:
  SvtId = BattleServantData__getSvtId(svtData, 0LL);
  DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
  v22 = (BattleCommandData_o *)sub_B77694(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_19072172(v22, Type, SvtId, DispLimitCount, 0, 0LL);
  if ( !v22 )
    goto LABEL_21;
  v22->fields.uniqueId = svtData->fields.uniqueId;
  if ( !baseTask )
    goto LABEL_21;
  if ( baseTask->fields.isNoCriticalOnAttack )
    v23 = 3;
  else
    v23 = 1;
  BattleCommandData__SetCriticalDecisionType(v22, v23, 0LL);
  v10->fields.isNoCriticalOnAttack = baseTask->fields.isNoCriticalOnAttack;
  v24 = (BattleComboData_o *)sub_B77694(BattleComboData_TypeInfo);
  BattleComboData___ctor(v24, 0LL);
  BattleLogicTask__setActionCommand(v10, v24, v22, countAct, 0LL);
  return v10;
}


int32_t __fastcall BattleLogicEnemyAi__get_ActorType(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  return 3;
}


bool __fastcall BattleLogicEnemyAi__get_IsInNormalAiAct(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  return this->fields.tempDeadSvtHash != 0LL;
}


System_Int32_array *__fastcall BattleLogicEnemyAi__get_OpponentSvtIds(
        BattleLogicEnemyAi_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_B7769C(0LL, method);
  return BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
}


System_Int32_array *__fastcall BattleLogicEnemyAi__get_PartySvtIds(
        BattleLogicEnemyAi_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_B7769C(0LL, method);
  return BattleData__getFieldEnemyServantIDList(data, 0, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicEnemyAi__procAiAct(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        AiEntity_o *aiEnt,
        int32_t countAct,
        AiLogic_AiInfo_o *aiInfo,
        int32_t procState,
        const MethodInfo *method)
{
  __int64 v13; // x25
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x6
  BattleLogicTask_array *v23; // x19
  const MethodInfo *v24; // x3
  BattleLogicTask_array *v25; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v26; // x21

  if ( (byte_438D319 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_BattleLogicTask___ctor__);
    sub_B775C4(&System_Action_BattleLogicTask__TypeInfo);
    sub_B775C4(&Method_BasicHelper_ForEach_BattleLogicTask___);
    sub_B775C4(&Method_BattleLogicEnemyAi___c__DisplayClass25_0__procAiAct_b__0__);
    sub_B775C4(&BattleLogicEnemyAi___c__DisplayClass25_0_TypeInfo);
    byte_438D319 = 1;
  }
  v13 = sub_B77694(BattleLogicEnemyAi___c__DisplayClass25_0_TypeInfo);
  BattleLogicEnemyAi___c__DisplayClass25_0___ctor((BattleLogicEnemyAi___c__DisplayClass25_0_o *)v13, 0LL);
  if ( !v13 )
    sub_B7769C(v14, v15);
  *(_QWORD *)(v13 + 16) = svtData;
  sub_B77560((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)svtData, v16, v17, v18, v19, v20, v21);
  v23 = BattleLogicEnemyAi__procAiActLocal(
          this,
          *(BattleServantData_o **)(v13 + 16),
          aiEnt,
          countAct,
          aiInfo,
          procState,
          v22);
  v25 = BattleLogicEnemyAi__ReplaceCommandTasksBySealStatus(this, *(BattleServantData_o **)(v13 + 16), v23, v24);
  v26 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_BattleLogicTask__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v26,
    (Il2CppObject *)v13,
    Method_BattleLogicEnemyAi___c__DisplayClass25_0__procAiAct_b__0__,
    (const MethodInfo_26A0868 *)Method_System_Action_BattleLogicTask___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)v23,
    (System_Action_T__o *)v26,
    (const MethodInfo_1C676E8 *)Method_BasicHelper_ForEach_BattleLogicTask___);
  return v25;
}


BattleLogicTask_array *__fastcall BattleLogicEnemyAi__procAiActLocal(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        AiEntity_o *aiEnt,
        int32_t countAct,
        AiLogic_AiInfo_o *aiInfo,
        int32_t procState,
        const MethodInfo *method)
{
  BattleLogicBaseAi_o *v12; // x28
  int32_t data_high; // w20
  AiActEntity_o *v14; // x25
  BattleLogicBaseAi_o *v15; // x0
  const MethodInfo *v16; // x4
  bool v18; // w27
  WeightRate_int__o *v19; // x24
  int32_t Int; // w0
  int32_t v21; // w0
  int32_t v22; // w0
  int32_t v23; // w1
  BattleServantData_o *v24; // x0
  int *skillVals; // x8
  int32_t v26; // w20
  int32_t v27; // w24
  int32_t Next; // w0
  int32_t Data; // w0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x24
  __int64 v31; // x26
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **infoText; // x1
  bool v39; // w21
  ServantAiActArgument_o *v40; // x20
  const MethodInfo *v41; // x4
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  struct BattleLogic_o *v44; // x8
  System_Int32_array **ServantGameObject; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v52; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  BattleSkillInfoData_o *SkillInfoDataByAiActType; // x0
  BattleSkillInfoData_o *v55; // x27
  SkillLvEntity_o *Entity; // x28
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  bool v63; // w20
  struct BattleLogicTarget_o *funcId; // x21
  BattleLogic_o *logic; // x20
  BattleLogicEnemyAi_o *v66; // x2
  BattleLogic_o *v67; // x0
  struct BattleLogicTarget_o *logictarget; // x1
  TreasureDvcLvMaster_o *v69; // x20
  struct BattleLogic_o *v70; // x1
  BattleLogicTarget_o *v71; // x23
  int32_t target; // w27
  int32_t uniqueId; // w24
  System_Int32_array *targetIndividuality; // x28
  System_Int32_array *FieldPlayerServantIDList; // x21
  const MethodInfo *v76; // x2
  BattleLogicTarget_o *v77; // x23
  int32_t v78; // w24
  int32_t v79; // w27
  System_Int32_array *v80; // x28
  System_Int32_array *v81; // x20
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  int32_t Type; // w21
  const MethodInfo *v95; // x3
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v96; // x21
  BattleLogicTask_o *v97; // x19
  const MethodInfo_3053298 *v98; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v99; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v100; // x1
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  BattleCommandData_o *v107; // x20
  BattleComboData_o *v108; // x21
  int32_t TreasureDvcId; // w0
  WeightRate_int__o *v110; // x20
  const MethodInfo *v111; // x2
  struct BattleLogic_o *v112; // x8
  BattleLogicEnemyAi_o *v113; // x21
  unsigned __int64 v114; // x22
  int32_t v115; // w0
  int32_t v116; // w0
  int32_t SvtId; // w22
  int32_t DispLimitCount; // w23
  BattleCommandData_o *v119; // x20
  int32_t v120; // w1
  BattleComboData_o *v121; // x19
  __int64 v122; // x0
  BattleSkillInfoData_o *skillInfo; // [xsp+20h] [xbp-A0h]
  bool IsEnableTarget; // [xsp+2Ch] [xbp-94h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v125; // [xsp+30h] [xbp-90h]
  int32_t v126; // [xsp+3Ch] [xbp-84h]
  BattleLogicEnemyAi_o *targetlist; // [xsp+40h] [xbp-80h]
  int32_t v128; // [xsp+4Ch] [xbp-74h]
  BattleLogicBaseAi_o *v129; // [xsp+50h] [xbp-70h]
  int32_t lv; // [xsp+5Ch] [xbp-64h] BYREF
  int32_t id; // [xsp+60h] [xbp-60h] BYREF
  int32_t aiActType[2]; // [xsp+64h] [xbp-5Ch] BYREF
  bool noMessage; // [xsp+6Ch] [xbp-54h] BYREF

  v12 = (BattleLogicBaseAi_o *)this;
  if ( (byte_438D31A & 1) == 0 )
  {
    sub_B775C4(&BattleComboData_TypeInfo);
    sub_B775C4(&BattleCommandData_TypeInfo);
    sub_B775C4(&BattleLogicTask_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_B775C4(&ServantAiActArgument_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_WeightRate_int___ctor__);
    sub_B775C4(&Method_WeightRate_int__getCount__);
    sub_B775C4(&Method_WeightRate_int__getData__);
    sub_B775C4(&Method_WeightRate_int__getTotalWeight__);
    sub_B775C4(&Method_WeightRate_int__setWeight__);
    sub_B775C4(&WeightRate_int__TypeInfo);
    this = (BattleLogicEnemyAi_o *)sub_B775C4(&StringLiteral_8948/*"MOTION_"*/);
    byte_438D31A = 1;
  }
  *(_QWORD *)aiActType = 0LL;
  lv = 0;
  id = 0;
  noMessage = 0;
  if ( !aiEnt )
    goto LABEL_156;
  this = (BattleLogicEnemyAi_o *)BattleLogicBaseAi__GetAiActEntity(
                                   v12,
                                   aiEnt->fields.aiActId,
                                   (const MethodInfo *)aiEnt);
  aiActType[1] = 0;
  if ( !this )
    goto LABEL_156;
  data_high = HIDWORD(this->fields.data);
  v14 = (AiActEntity_o *)this;
  aiActType[1] = data_high;
  if ( !svtData )
    goto LABEL_156;
  v15 = (BattleLogicBaseAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._18_getAiState.method)(
                                 svtData,
                                 svtData->klass->vtable._19_ExistAiThinking.methodPtr);
  if ( BattleLogicBaseAi__IsChangeThinkingOnly(v15, data_high, (AiBaseEntity_o *)aiEnt, (AiState_o *)v15, v16) )
    return v12->fields.emptyTask;
  v18 = procState != 1 || BattleServantData__canUseSkill(svtData, -1, 0LL);
  v19 = (WeightRate_int__o *)sub_B77694(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v19, (const MethodInfo_2CE85DC *)Method_WeightRate_int___ctor__);
  if ( aiInfo )
  {
    this = (BattleLogicEnemyAi_o *)AiLogic_AiInfo__IsChecked(aiInfo, (AiBaseEntity_o *)aiEnt, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      AiLogic_AiInfo__GetCheckedResult(aiInfo, svtData, (AiBaseEntity_o *)aiEnt, &aiActType[1], &noMessage, 0LL);
      goto LABEL_62;
    }
  }
  switch ( data_high )
  {
    case 10:
      if ( !v18 )
        goto LABEL_58;
      if ( !BattleServantData__isUseSelfSkill(svtData, 0, 0LL) )
        goto LABEL_19;
      this = (BattleLogicEnemyAi_o *)AiAct__getInt(11, 0LL);
      if ( !v19 )
        goto LABEL_156;
      WeightRate_int___setWeight(v19, 10, (int32_t)this, (const MethodInfo_2CE77A4 *)Method_WeightRate_int__setWeight__);
LABEL_19:
      if ( !BattleServantData__isUseSelfSkill(svtData, 1, 0LL) )
        goto LABEL_22;
      this = (BattleLogicEnemyAi_o *)AiAct__getInt(12, 0LL);
      if ( !v19 )
        goto LABEL_156;
      WeightRate_int___setWeight(v19, 10, (int32_t)this, (const MethodInfo_2CE77A4 *)Method_WeightRate_int__setWeight__);
LABEL_22:
      this = (BattleLogicEnemyAi_o *)BattleServantData__isUseSelfSkill(svtData, 2, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleLogicEnemyAi_o *)AiAct__getInt(13, 0LL);
        if ( !v19 )
          goto LABEL_156;
        WeightRate_int___setWeight(
          v19,
          10,
          (int32_t)this,
          (const MethodInfo_2CE77A4 *)Method_WeightRate_int__setWeight__);
      }
      else
      {
LABEL_58:
        if ( !v19 )
          goto LABEL_156;
      }
      if ( WeightRate_int___getCount(v19, (const MethodInfo_2CE7B44 *)Method_WeightRate_int__getCount__) >= 1 )
        goto LABEL_60;
      goto LABEL_61;
    case 11:
      if ( !v18 )
      {
        aiActType[1] = 2;
        noMessage = 1;
      }
      v24 = svtData;
      v23 = 0;
      goto LABEL_56;
    case 12:
      if ( !v18 )
      {
        aiActType[1] = 2;
        noMessage = 1;
      }
      v23 = 1;
      v24 = svtData;
LABEL_56:
      if ( !BattleServantData__isUseSelfSkill(v24, v23, 0LL) )
        aiActType[1] = 2;
      goto LABEL_62;
    case 13:
      if ( !v18 )
      {
        aiActType[1] = 2;
        noMessage = 1;
      }
      if ( !BattleServantData__isUseSelfSkill(svtData, 2, 0LL) )
        aiActType[1] = 2;
      goto LABEL_62;
    default:
      if ( data_high == 80 )
      {
        if ( BattleServantData__isNobleAction(svtData, 0LL)
          && TreasureDeviceConditionUtil__IsSatisfyEachCondition(svtData, v12->fields.data, 0LL) )
        {
          goto LABEL_62;
        }
        goto LABEL_61;
      }
      if ( data_high != 1 )
      {
        if ( (data_high & 0xFFFFFFFE) != 40 )
          goto LABEL_62;
        skillVals = (int *)v14->fields.skillVals;
        if ( !skillVals )
          goto LABEL_156;
        if ( skillVals[6] <= 1 )
        {
LABEL_132:
          aiActType[1] = 0;
          goto LABEL_62;
        }
        if ( v18 || data_high != 41 )
        {
          v26 = skillVals[8];
          v27 = skillVals[9];
          this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_156;
          this = (BattleLogicEnemyAi_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
          if ( !this )
            goto LABEL_156;
          if ( SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v26, v27, 0LL) )
          {
            BattleServantData__addSkillInfo(svtData, 20, 0, v26, v27, -1LL, -1, 0LL, 0LL);
            goto LABEL_62;
          }
          goto LABEL_132;
        }
LABEL_61:
        aiActType[1] = 2;
        noMessage = 1;
        goto LABEL_62;
      }
      this = (BattleLogicEnemyAi_o *)AiAct__getInt(2, 0LL);
      if ( !v19 )
        goto LABEL_156;
      WeightRate_int___setWeight(v19, 10, (int32_t)this, (const MethodInfo_2CE77A4 *)Method_WeightRate_int__setWeight__);
      if ( v18 )
      {
        if ( BattleServantData__isUseSelfSkill(svtData, 0, 0LL) )
        {
          Int = AiAct__getInt(11, 0LL);
          WeightRate_int___setWeight(v19, 10, Int, (const MethodInfo_2CE77A4 *)Method_WeightRate_int__setWeight__);
        }
        if ( BattleServantData__isUseSelfSkill(svtData, 1, 0LL) )
        {
          v21 = AiAct__getInt(12, 0LL);
          WeightRate_int___setWeight(v19, 10, v21, (const MethodInfo_2CE77A4 *)Method_WeightRate_int__setWeight__);
        }
        if ( BattleServantData__isUseSelfSkill(svtData, 2, 0LL) )
        {
          v22 = AiAct__getInt(13, 0LL);
          WeightRate_int___setWeight(v19, 10, v22, (const MethodInfo_2CE77A4 *)Method_WeightRate_int__setWeight__);
        }
      }
LABEL_60:
      Next = BattleRandom__getNext(v19->fields.totalweight, 0LL);
      Data = WeightRate_int___getData(v19, Next, (const MethodInfo_2CE7C28 *)Method_WeightRate_int__getData__);
      aiActType[1] = AiAct__getType(Data, 0LL);
LABEL_62:
      v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v30,
        (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      v31 = sub_B77694(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor((BattleLogicTask_o *)v31, 0LL);
      if ( noMessage )
      {
        if ( !v31 )
          goto LABEL_156;
      }
      else
      {
        if ( !v31 )
          goto LABEL_156;
        infoText = (System_Int32_array **)aiEnt->fields.infoText;
        *(_QWORD *)(v31 + 152) = infoText;
        sub_B77560((BattleServantConfConponent_o *)(v31 + 152), infoText, v32, v33, v34, v35, v36, v37);
      }
      BattleLogicTask__setActor((BattleLogicTask_o *)v31, 3, svtData->fields.uniqueId, 0LL);
      if ( AiBaseEntity__IsForcedActionSpeedAnyTime((AiBaseEntity_o *)aiEnt, 0LL) )
        *(_BYTE *)(v31 + 160) = 1;
      v128 = procState;
      *(_BYTE *)(v31 + 208) = AiActEntity__IsNoCriticalOnAttack(v14, 0LL);
      this = (BattleLogicEnemyAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._18_getAiState.method)(
                                       svtData,
                                       svtData->klass->vtable._19_ExistAiThinking.methodPtr);
      if ( !this )
        goto LABEL_156;
      AiState__setBeforeAction((AiState_o *)this, aiActType[1], aiEnt->fields.aiActId, 0LL);
      v39 = noMessage;
      v40 = (ServantAiActArgument_o *)sub_B77694(ServantAiActArgument_TypeInfo);
      ServantAiActArgument___ctor(v40, v14, (AiBaseEntity_o *)aiEnt, svtData, v39, 0LL);
      if ( aiActType[1] != 71 )
      {
        this = (BattleLogicEnemyAi_o *)BattleLogicBaseAi__SetNoTargetAiActTask(
                                         v12,
                                         (System_Collections_Generic_List_BattleLogicTask__o *)v30,
                                         aiActType[1],
                                         (BaseAiActArgument_o *)v40,
                                         v41);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
LABEL_77:
          if ( !v30 )
            goto LABEL_156;
          goto LABEL_78;
        }
        this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_156;
        MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)this,
                                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
        SkillInfoDataByAiActType = BattleServantData__getSkillInfoDataByAiActType(svtData, aiActType[1], 0LL);
        v55 = SkillInfoDataByAiActType;
        v129 = v12;
        v126 = countAct;
        if ( SkillInfoDataByAiActType )
        {
          this = (BattleLogicEnemyAi_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))SkillInfoDataByAiActType->klass->vtable._5_get_skillId.method)(
                                           SkillInfoDataByAiActType,
                                           SkillInfoDataByAiActType->klass->vtable._6_get_IndividualityArray.methodPtr);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_156;
          Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, (int32_t)this, v55->fields.skilllv, 0LL);
        }
        else
        {
          Entity = 0LL;
        }
        if ( AiAct__isSkillType(aiActType[1], 0LL) )
        {
          v63 = 1;
          if ( !Entity || !v55 )
            goto LABEL_97;
          funcId = (struct BattleLogicTarget_o *)Entity->fields.funcId;
          logic = v129->fields.logic;
          this = (BattleLogicEnemyAi_o *)SkillLvEntity__getDataValsList(Entity, 0LL);
          if ( !logic )
            goto LABEL_156;
          v66 = this;
          v67 = logic;
          logictarget = funcId;
        }
        else
        {
          if ( aiActType[1] != 80 )
            goto LABEL_96;
          this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_156;
          v69 = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
          this = (BattleLogicEnemyAi_o *)BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
          if ( !v69 )
            goto LABEL_156;
          this = (BattleLogicEnemyAi_o *)TreasureDvcLvMaster__GetEntity(
                                           v69,
                                           (int32_t)this,
                                           svtData->fields.treasuredvcLevel,
                                           0LL);
          if ( !this )
          {
LABEL_96:
            v63 = 1;
            goto LABEL_97;
          }
          if ( !v129->fields.logic )
            goto LABEL_156;
          logictarget = this->fields.logictarget;
          v67 = v129->fields.logic;
          v66 = 0LL;
        }
        v63 = BattleLogic__checkEnemyTargetFunction(v67, (System_Int32_array *)logictarget, (DataVals_array *)v66, 0LL);
LABEL_97:
        this = (BattleLogicEnemyAi_o *)v129->fields.logictarget;
        if ( this )
        {
          v70 = v129[1].fields.logic;
          this->fields.logic = v70;
          sub_B77560(
            (BattleServantConfConponent_o *)&this->fields.logic,
            (System_Int32_array **)v70,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62);
          if ( Entity && v55 )
            IsEnableTarget = SkillLvEntity__IsEnableTarget(Entity, v63, 0LL);
          else
            IsEnableTarget = v63;
          skillInfo = v55;
          v125 = v30;
          this = (BattleLogicEnemyAi_o *)sub_B775DC(int___TypeInfo, 1LL);
          targetlist = this;
          if ( v129->fields.data )
          {
            v71 = v129->fields.logictarget;
            target = v14->fields.target;
            uniqueId = svtData->fields.uniqueId;
            targetIndividuality = v14->fields.targetIndividuality;
            FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v129->fields.data, 0LL, 0LL);
            this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(
                                             (BattleLogicEnemyAi_o *)v129,
                                             aiEnt,
                                             v76);
            if ( v71 )
            {
              this = (BattleLogicEnemyAi_o *)BattleLogicTarget__getTargetAiAct(
                                               v71,
                                               target,
                                               uniqueId,
                                               targetIndividuality,
                                               FieldPlayerServantIDList,
                                               IsEnableTarget,
                                               0,
                                               0LL,
                                               v14,
                                               (unsigned __int8)this & 1,
                                               0LL);
              if ( targetlist )
              {
                if ( !LODWORD(targetlist->fields.logic) )
                  goto LABEL_157;
                LODWORD(targetlist->fields.logictarget) = (_DWORD)this;
                this = (BattleLogicEnemyAi_o *)sub_B775DC(int___TypeInfo, 1LL);
                if ( v129->fields.data )
                {
                  v77 = v129->fields.logictarget;
                  v78 = v14->fields.target;
                  v79 = svtData->fields.uniqueId;
                  v80 = v14->fields.targetIndividuality;
                  v81 = (System_Int32_array *)this;
                  this = (BattleLogicEnemyAi_o *)BattleData__getFieldEnemyServantIDList(v129->fields.data, 0, 0LL);
                  if ( v77 )
                  {
                    this = (BattleLogicEnemyAi_o *)BattleLogicTarget__getTargetAiAct(
                                                     v77,
                                                     v78,
                                                     v79,
                                                     v80,
                                                     (System_Int32_array *)this,
                                                     0,
                                                     0,
                                                     0LL,
                                                     v14,
                                                     1,
                                                     0LL);
                    if ( v81 )
                    {
                      if ( !v81->max_length )
                        goto LABEL_157;
                      v81->m_Items[1] = (int)this;
                      this = (BattleLogicEnemyAi_o *)v129->fields.logictarget;
                      if ( this )
                      {
                        this->fields.logic = 0LL;
                        sub_B77560(
                          (BattleServantConfConponent_o *)&this->fields.logic,
                          0LL,
                          v82,
                          v83,
                          v84,
                          v85,
                          v86,
                          v87);
                        this = (BattleLogicEnemyAi_o *)v129->fields.logic;
                        if ( this )
                        {
                          *(_BYTE *)(v31 + 168) = (v128 == 1) & (BattleLogic__GetLogicType((BattleLogic_o *)this, 0LL) == 42);
                          if ( AiAct__isAttackType(aiActType[1], 0LL) )
                          {
                            *(_QWORD *)(v31 + 32) = targetlist;
                            sub_B77560(
                              (BattleServantConfConponent_o *)(v31 + 32),
                              (System_Int32_array **)targetlist,
                              v88,
                              v89,
                              v90,
                              v91,
                              v92,
                              v93);
                            if ( SvtType__IsEnemy_19798592(svtData->fields.svtType, 0LL) )
                            {
                              Type = 10;
                              goto LABEL_143;
                            }
                            if ( AiAct__isAttackArts(aiActType[1], 0LL) )
                            {
                              Type = 1;
                              goto LABEL_143;
                            }
                            if ( AiAct__isAttackBuster(aiActType[1], 0LL) )
                            {
                              Type = 2;
                              goto LABEL_143;
                            }
                            if ( AiAct__isAttackQuick(aiActType[1], 0LL) )
                            {
                              Type = 3;
                              goto LABEL_143;
                            }
                            v110 = (WeightRate_int__o *)sub_B77694(WeightRate_int__TypeInfo);
                            WeightRate_int____ctor(v110, (const MethodInfo_2CE85DC *)Method_WeightRate_int___ctor__);
                            this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi__GetCommandArray(
                                                             (BattleLogicEnemyAi_o *)v129,
                                                             svtData,
                                                             v111);
                            if ( !this )
                              goto LABEL_156;
                            v112 = this->fields.logic;
                            v113 = this;
                            if ( (int)v112 < 1 )
                            {
LABEL_141:
                              if ( !v110 )
                                goto LABEL_156;
                              v115 = BattleRandom__getNext(v110->fields.totalweight, 0LL);
                              v116 = WeightRate_int___getData(
                                       v110,
                                       v115,
                                       (const MethodInfo_2CE7C28 *)Method_WeightRate_int__getData__);
                              Type = BattleCommand__getType(v116, 0LL);
LABEL_143:
                              SvtId = BattleServantData__getSvtId(svtData, 0LL);
                              DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
                              v119 = (BattleCommandData_o *)sub_B77694(BattleCommandData_TypeInfo);
                              BattleCommandData___ctor_19072172(v119, Type, SvtId, DispLimitCount, 0, 0LL);
                              if ( !v119 )
                                goto LABEL_156;
                              v119->fields.uniqueId = svtData->fields.uniqueId;
                              if ( *(_BYTE *)(v31 + 208) )
                              {
                                v120 = 3;
                              }
                              else
                              {
                                if ( AiAct__isAttackCritical(aiActType[1], 0LL) )
                                {
                                  BattleCommandData__SetCriticalDecisionType(v119, 2, 0LL);
                                  aiActType[1] = 2;
LABEL_150:
                                  v121 = (BattleComboData_o *)sub_B77694(BattleComboData_TypeInfo);
                                  BattleComboData___ctor(v121, 0LL);
                                  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v31, v121, v119, v126, 0LL);
                                  goto LABEL_151;
                                }
                                v120 = 1;
                              }
                              BattleCommandData__SetCriticalDecisionType(v119, v120, 0LL);
                              goto LABEL_150;
                            }
                            v114 = 0LL;
                            while ( v114 < (unsigned int)v112 )
                            {
                              if ( !v110 )
                                goto LABEL_156;
                              WeightRate_int___setWeight(
                                v110,
                                10,
                                *((_DWORD *)&v113->fields.logictarget + v114),
                                (const MethodInfo_2CE77A4 *)Method_WeightRate_int__setWeight__);
                              LODWORD(v112) = v113->fields.logic;
                              if ( (__int64)++v114 >= (int)v112 )
                                goto LABEL_141;
                            }
LABEL_157:
                            v122 = sub_B776C8(this);
                            sub_B77668(v122, 0LL);
                          }
                          this = (BattleLogicEnemyAi_o *)AiAct__isSkillType(aiActType[1], 0LL);
                          if ( ((unsigned __int8)this & 1) != 0 )
                          {
                            this = (BattleLogicEnemyAi_o *)BattleServantData__get_BuffData(svtData, 0LL);
                            if ( !this )
                              goto LABEL_156;
                            BattleBuffData__UpdateSkillRelationBuff((BattleBuffData_o *)this, 0LL);
                            if ( skillInfo )
                            {
                              BattleLogicBaseAi__SetSkillSelectAddIndex(
                                (BattleLogicBaseAi_o *)this,
                                skillInfo,
                                (AiBaseEntity_o *)aiEnt,
                                v95);
                              BattleLogicTask__setActionSkill(
                                (BattleLogicTask_o *)v31,
                                skillInfo,
                                (System_Int32_array *)targetlist,
                                v81,
                                0,
                                0,
                                0LL);
                              BattleLogicTask__setActor((BattleLogicTask_o *)v31, 3, svtData->fields.uniqueId, 0LL);
                              v96 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v125;
                              *(_BYTE *)(v31 + 169) = 1;
                              if ( !v125 )
                                goto LABEL_156;
                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                v125,
                                (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
                                (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                              v97 = (BattleLogicTask_o *)sub_B77694(BattleLogicTask_TypeInfo);
                              BattleLogicTask___ctor(v97, 0LL);
                              v98 = (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                              v99 = v125;
                              v100 = (EventMissionProgressRequest_Argument_ProgressData_o *)v97;
LABEL_153:
                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                v99,
                                v100,
                                v98);
                              goto LABEL_154;
                            }
LABEL_128:
                            v96 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v125;
                            if ( !v125 )
                              goto LABEL_156;
LABEL_154:
                            v52 = v96;
                            return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                              v52,
                                                              (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
                          }
                          if ( aiActType[1] != 80 )
                            goto LABEL_128;
                          if ( BattleLogicServantAi__TryGetOverwriteTreasureDevice(
                                 (BattleLogicServantAi_o *)v129,
                                 svtData,
                                 v14->fields.skillVals,
                                 &id,
                                 &lv,
                                 0LL) )
                          {
                            BattleLogicTask__SetOverwriteTreasureDevice((BattleLogicTask_o *)v31, id, lv, 0LL);
                            this = *(BattleLogicEnemyAi_o **)(v31 + 200);
                            if ( !this )
                              goto LABEL_156;
                            OverwriteTreasureDeviceData__Overwrite((OverwriteTreasureDeviceData_o *)this, svtData, 0LL);
                          }
                          BattleLogicTask__setActor((BattleLogicTask_o *)v31, 3, svtData->fields.uniqueId, 0LL);
                          *(_QWORD *)(v31 + 32) = targetlist;
                          sub_B77560(
                            (BattleServantConfConponent_o *)(v31 + 32),
                            (System_Int32_array **)targetlist,
                            v101,
                            v102,
                            v103,
                            v104,
                            v105,
                            v106);
                          v107 = (BattleCommandData_o *)sub_B77694(BattleCommandData_TypeInfo);
                          BattleCommandData___ctor(v107, 0LL);
                          this = (BattleLogicEnemyAi_o *)BattleServantData__getTreasureDvcCardId(svtData, 0LL);
                          if ( v107 )
                          {
                            v107->fields._type = (int)this;
                            v107->fields.svtlimit = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
                            v107->fields.uniqueId = svtData->fields.uniqueId;
                            v107->fields.svtId = BattleServantData__getSvtId(svtData, 0LL);
                            v107->fields.treasureDvc = BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
                            v108 = (BattleComboData_o *)sub_B77694(BattleComboData_TypeInfo);
                            BattleComboData___ctor(v108, 0LL);
                            BattleLogicTask__setActionCommand((BattleLogicTask_o *)v31, v108, v107, v126, 0LL);
                            TreasureDvcId = BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
                            BattleLogicTask__setActionTreasureDvc((BattleLogicTask_o *)v31, TreasureDvcId, 1, 0LL);
LABEL_151:
                            v96 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v125;
                            if ( !v125 )
                              goto LABEL_156;
                            v99 = v125;
                            v100 = (EventMissionProgressRequest_Argument_ProgressData_o *)v31;
                            v98 = (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                            goto LABEL_153;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_156:
        sub_B7769C(this, svtData);
      }
      this = (BattleLogicEnemyAi_o *)AiBaseEntity__getActionValue((AiBaseEntity_o *)aiEnt, 0LL);
      aiActType[0] = (int)this;
      if ( (int)this < 1 )
        goto LABEL_77;
      v42 = System_Int32__ToString((int32_t)aiActType, 0LL);
      v43 = System_String__Concat_44901936((System_String_o *)StringLiteral_8948/*"MOTION_"*/, v42, 0LL);
      BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v31, v43, 0LL);
      v44 = v12->fields.logic;
      if ( !v44 )
        goto LABEL_156;
      this = (BattleLogicEnemyAi_o *)v44->fields.perf;
      if ( !this )
        goto LABEL_156;
      ServantGameObject = (System_Int32_array **)BattlePerformance__getServantGameObject(
                                                   (BattlePerformance_o *)this,
                                                   svtData->fields.uniqueId,
                                                   0LL);
      *(_QWORD *)(v31 + 112) = ServantGameObject;
      sub_B77560((BattleServantConfConponent_o *)(v31 + 112), ServantGameObject, v46, v47, v48, v49, v50, v51);
      BattleLogicTask__setActor((BattleLogicTask_o *)v31, 3, svtData->fields.uniqueId, 0LL);
      if ( !v30 )
        goto LABEL_156;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v30,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
LABEL_78:
      v52 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v30;
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        v52,
                                        (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
  }
}


void __fastcall BattleLogicEnemyAi__resetAct(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_XWeaponTrail_Element__o *actlist; // x0
  struct BattleData_o *data; // x8
  int size; // w8
  System_Collections_Generic_List_XWeaponTrail_Element__o *v6; // x19
  unsigned int v7; // w20
  __int64 v8; // x0

  if ( (byte_438D316 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_BattleServantData__Clear__);
    byte_438D316 = 1;
  }
  actlist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.actlist;
  if ( !actlist )
    goto LABEL_13;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    actlist,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_BattleServantData__Clear__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  data->fields.countEnemyAttack = 0;
  actlist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.data;
  if ( !actlist )
    goto LABEL_13;
  actlist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)BattleData__getFieldEnemyServantList(
                                                                         (BattleData_o *)actlist,
                                                                         0,
                                                                         0LL);
  if ( !actlist )
    goto LABEL_13;
  size = actlist->fields._size;
  v6 = actlist;
  if ( size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= size )
      {
        v8 = sub_B776C8(actlist);
        sub_B77668(v8, 0LL);
      }
      actlist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*((_QWORD *)&v6->fields._syncRoot + (int)v7);
      if ( !actlist )
        break;
      BattleServantData__resetActionCount((BattleServantData_o *)actlist, 0LL);
      size = v6->fields._size;
      if ( (int)++v7 >= size )
        return;
    }
LABEL_13:
    sub_B7769C(actlist, method);
  }
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicEnemyAi__resetEnemyActList(
        BattleLogicEnemyAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleLogicEnemyAi__resetAct(this, *(const MethodInfo **)&ltype);
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicEnemyAi__taskAIAttack(
        BattleLogicEnemyAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t v6; // w1
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_BattleLogicTask__o *TaskAIAttack; // x0
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v10; // x20

  if ( (byte_438D314 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__);
    byte_438D314 = 1;
  }
  BattleLogicEnemyAi__ExcludeDeadFromTempDead(this, *(const MethodInfo **)&ltype);
  TaskAIAttack = BattleLogicEnemyAi__CreateTaskAIAttack(this, v6, data, v7);
  if ( !TaskAIAttack )
    sub_B7769C(0LL, v9);
  v10 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)TaskAIAttack;
  if ( TaskAIAttack->fields._size >= 1 )
    BattleLogicEnemyAi__ClearTempDeadSvt(this, v9);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    v10,
                                    (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicEnemyAi__taskAIDead(
        BattleLogicEnemyAi_o *this,
        int32_t actUniqueId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  __int64 v6; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v8; // x21
  struct AiActMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct BattleData_o *v16; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438D31B & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438D31B = 1;
  }
  info = 0LL;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__getServantData(data, actUniqueId, 0LL);
  if ( !data )
    goto LABEL_16;
  v8 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
    goto LABEL_14;
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__checkAlivePlayers(data, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_14;
  data = (BattleData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (struct AiActMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)data,
                                                                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = MasterData_WarQuestSelectionMaster;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.aiActMst,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = this->fields.data;
  if ( !v16 )
    goto LABEL_16;
  data = (BattleData_o *)this->fields.aiLogic;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)AiLogic__getAction(
                           (AiLogic_o *)data,
                           v8,
                           2,
                           v16->fields.turnCount,
                           0,
                           (BattleLogicBaseAi_o *)this,
                           &info,
                           0,
                           0LL);
  if ( !data )
  {
LABEL_14:
    if ( v5 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                        (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_16:
    sub_B7769C(data, v6);
  }
  data = (BattleData_o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, BattleData_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._19_procAiAct.method)(
                           this,
                           v8,
                           data,
                           0LL,
                           info,
                           0LL,
                           this->klass->vtable._20_ExistThinking.methodPtr);
  if ( !v5 )
    goto LABEL_16;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v5,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                    (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicEnemyAi__taskAIEnemyMaxNp(
        BattleLogicEnemyAi_o *this,
        int32_t actUniqueId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  __int64 v6; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v8; // x21
  struct AiActMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct BattleData_o *v16; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438D31C & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438D31C = 1;
  }
  info = 0LL;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__getServantData(data, actUniqueId, 0LL);
  if ( !data )
    goto LABEL_16;
  v8 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_14;
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__checkAlivePlayers(data, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_14;
  data = (BattleData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (struct AiActMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)data,
                                                                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = MasterData_WarQuestSelectionMaster;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.aiActMst,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = this->fields.data;
  if ( !v16 )
    goto LABEL_16;
  data = (BattleData_o *)this->fields.aiLogic;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)AiLogic__getAction(
                           (AiLogic_o *)data,
                           v8,
                           7,
                           v16->fields.turnCount,
                           0,
                           (BattleLogicBaseAi_o *)this,
                           &info,
                           0,
                           0LL);
  if ( !data )
  {
LABEL_14:
    if ( v5 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                        (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_16:
    sub_B7769C(data, v6);
  }
  data = (BattleData_o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, BattleData_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._19_procAiAct.method)(
                           this,
                           v8,
                           data,
                           0LL,
                           info,
                           0LL,
                           this->klass->vtable._20_ExistThinking.methodPtr);
  if ( !v5 )
    goto LABEL_16;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v5,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                    (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicEnemyAi__updateActPriorityList(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  BattleLogicEnemyAi_o *v2; // x20
  struct System_Collections_Generic_List_BattleServantData__o *actlist; // x8
  BattleServantConfConponent_o *p_actlist; // x19
  System_Collections_Generic_IEnumerable_TSource__o *FieldEnemyServantList; // x21
  BattleLogicEnemyAi___c_c *v6; // x8
  struct BattleLogicEnemyAi___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__23_0; // x22
  Il2CppObject *v9; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  BattleLogicEnemyAi___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x21
  struct BattleLogicEnemyAi___c_StaticFields *v20; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__23_1; // x22
  Il2CppObject *v22; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v30; // x0
  BattleLogicEnemyAi___c_c *v31; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v32; // x21
  struct BattleLogicEnemyAi___c_StaticFields *v33; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__23_2; // x22
  Il2CppObject *v35; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v43; // x0
  BattleLogicEnemyAi___c_c *v44; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v45; // x21
  struct BattleLogicEnemyAi___c_StaticFields *v46; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__23_3; // x22
  Il2CppObject *v48; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  System_Int32_array **v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  struct BattleData_o *data; // x8
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *klass; // x20
  void *dicAiActFunc; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v67; // x21
  Il2CppObject *v68; // x22
  struct BattleLogicEnemyAi___c_StaticFields *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **All; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7

  v2 = this;
  if ( (byte_438D317 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_OrderByDescending_BattleServantData__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_BattleServantData___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_B775C4(&Method_System_Func_BattleServantData__bool___ctor__);
    sub_B775C4(&Method_System_Func_BattleServantData__int___ctor__);
    sub_B775C4(&System_Func_BattleServantData__bool__TypeInfo);
    sub_B775C4(&System_Func_BattleServantData__int__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleServantData__FindAll__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_B775C4(&Method_System_Predicate_BattleServantData___ctor__);
    sub_B775C4(&System_Predicate_BattleServantData__TypeInfo);
    sub_B775C4(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_0__);
    sub_B775C4(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_1__);
    sub_B775C4(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_2__);
    sub_B775C4(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_3__);
    sub_B775C4(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_4__);
    this = (BattleLogicEnemyAi_o *)sub_B775C4(&BattleLogicEnemyAi___c_TypeInfo);
    byte_438D317 = 1;
  }
  p_actlist = (BattleServantConfConponent_o *)&v2->fields.actlist;
  actlist = v2->fields.actlist;
  if ( !actlist )
    goto LABEL_51;
  if ( actlist->fields._size <= 0 )
  {
    this = (BattleLogicEnemyAi_o *)v2->fields.data;
    if ( !this )
      goto LABEL_51;
    FieldEnemyServantList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldEnemyServantList(
                                                                                   (BattleData_o *)this,
                                                                                   1,
                                                                                   0LL);
    v6 = BattleLogicEnemyAi___c_TypeInfo;
    if ( (BYTE3(BattleLogicEnemyAi___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v6 = BattleLogicEnemyAi___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    _9__23_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__23_0;
    if ( !_9__23_0 )
    {
      if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        static_fields = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__23_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__23_0,
        v9,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_0__,
        (const MethodInfo_29E92C4 *)Method_System_Func_BattleServantData__bool___ctor__);
      v10 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v10->__9__23_0 = (struct System_Func_BattleServantData__bool__o *)_9__23_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v10->__9__23_0,
        (System_Int32_array **)_9__23_0,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    v17 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            FieldEnemyServantList,
            (System_Func_TSource__bool__o *)_9__23_0,
            (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
    v18 = BattleLogicEnemyAi___c_TypeInfo;
    v19 = v17;
    if ( (BYTE3(BattleLogicEnemyAi___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v18 = BattleLogicEnemyAi___c_TypeInfo;
    }
    v20 = v18->static_fields;
    _9__23_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v20->__9__23_1;
    if ( !_9__23_1 )
    {
      if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v20 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)v20->__9;
      _9__23_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_BattleServantData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__23_1,
        v22,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_1__,
        (const MethodInfo_29E9E70 *)Method_System_Func_BattleServantData__int___ctor__);
      v23 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v23->__9__23_1 = (struct System_Func_BattleServantData__int__o *)_9__23_1;
      sub_B77560(
        (BattleServantConfConponent_o *)&v23->__9__23_1,
        (System_Int32_array **)_9__23_1,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
    }
    v30 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
            v19,
            (System_Func_TSource__TKey__o *)_9__23_1,
            (const MethodInfo_1D34DBC *)Method_System_Linq_Enumerable_OrderByDescending_BattleServantData__int___);
    v31 = BattleLogicEnemyAi___c_TypeInfo;
    v32 = v30;
    if ( (BYTE3(BattleLogicEnemyAi___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v31 = BattleLogicEnemyAi___c_TypeInfo;
    }
    v33 = v31->static_fields;
    _9__23_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v33->__9__23_2;
    if ( !_9__23_2 )
    {
      if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        v33 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      }
      v35 = (Il2CppObject *)v33->__9;
      _9__23_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_BattleServantData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__23_2,
        v35,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_2__,
        (const MethodInfo_29E9E70 *)Method_System_Func_BattleServantData__int___ctor__);
      v36 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v36->__9__23_2 = (struct System_Func_BattleServantData__int__o *)_9__23_2;
      sub_B77560(
        (BattleServantConfConponent_o *)&v36->__9__23_2,
        (System_Int32_array **)_9__23_2,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
    }
    v43 = System_Linq_Enumerable__ThenByDescending_WarBoardManager_TaskList__int_(
            v32,
            (System_Func_TSource__TKey__o *)_9__23_2,
            (const MethodInfo_1D3D050 *)Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
    v44 = BattleLogicEnemyAi___c_TypeInfo;
    v45 = v43;
    if ( (BYTE3(BattleLogicEnemyAi___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v44 = BattleLogicEnemyAi___c_TypeInfo;
    }
    v46 = v44->static_fields;
    _9__23_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v46->__9__23_3;
    if ( !_9__23_3 )
    {
      if ( (BYTE3(v44->vtable._0_Equals.methodPtr) & 4) != 0 && !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44);
        v46 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      }
      v48 = (Il2CppObject *)v46->__9;
      _9__23_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_BattleServantData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__23_3,
        v48,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_3__,
        (const MethodInfo_29E9E70 *)Method_System_Func_BattleServantData__int___ctor__);
      v49 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v49->__9__23_3 = (struct System_Func_BattleServantData__int__o *)_9__23_3;
      sub_B77560(
        (BattleServantConfConponent_o *)&v49->__9__23_3,
        (System_Int32_array **)_9__23_3,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
    }
    v56 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_WarBoardManager_TaskList__int_(
                                                                 v45,
                                                                 (System_Func_TSource__TKey__o *)_9__23_3,
                                                                 (const MethodInfo_1D3D050 *)Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
    v57 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                   v56,
                                   (const MethodInfo_1D404B8 *)Method_System_Linq_Enumerable_ToList_BattleServantData___);
    p_actlist->klass = (BattleServantConfConponent_c *)v57;
    sub_B77560((BattleServantConfConponent_o *)&v2->fields.actlist, v57, v58, v59, v60, v61, v62, v63);
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_51;
  if ( data->fields.enemyActCount > data->fields.countEnemyAttack )
    return;
  klass = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)p_actlist->klass;
  this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi___c_TypeInfo;
  if ( (BYTE3(BattleLogicEnemyAi___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
    this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi___c_TypeInfo;
  }
  dicAiActFunc = this[1].fields.dicAiActFunc;
  v67 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)*((_QWORD *)dicAiActFunc + 5);
  if ( !v67 )
  {
    if ( (BYTE3(this[2].fields.dicAiActFunc) & 4) != 0 && !LODWORD(this[1].fields.tempDeadSvtHash) )
    {
      j_il2cpp_runtime_class_init_0(this);
      dicAiActFunc = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    }
    v68 = *(Il2CppObject **)dicAiActFunc;
    v67 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v67,
      v68,
      Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_4__,
      (const MethodInfo_2C3248C *)Method_System_Predicate_BattleServantData___ctor__);
    v69 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    v69->__9__23_4 = (struct System_Predicate_BattleServantData__o *)v67;
    sub_B77560(
      (BattleServantConfConponent_o *)&v69->__9__23_4,
      (System_Int32_array **)v67,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
  }
  if ( !klass )
LABEL_51:
    sub_B7769C(this, method);
  All = (System_Int32_array **)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                 klass,
                                 (System_Predicate_T__o *)v67,
                                 (const MethodInfo_3053C20 *)Method_System_Collections_Generic_List_BattleServantData__FindAll__);
  p_actlist->klass = (BattleServantConfConponent_c *)All;
  sub_B77560(p_actlist, All, v77, v78, v79, v80, v81, v82);
}


void __fastcall BattleLogicEnemyAi___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438A802 & 1) == 0 )
  {
    sub_B775C4(&BattleLogicEnemyAi___c_TypeInfo);
    byte_438A802 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(BattleLogicEnemyAi___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleLogicEnemyAi___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall BattleLogicEnemyAi___c___ctor(BattleLogicEnemyAi___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__23_0(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  bool isAlive; // w8
  bool result; // w0

  if ( !x )
    sub_B7769C(this, 0LL);
  isAlive = BattleServantData__isAlive(x, 0, 0LL);
  result = 0;
  if ( isAlive )
    return BattleServantData__GetRemainActionCount(x, 0LL) > 0;
  return result;
}


int32_t __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__23_1(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return BattleServantData__GetOriginalRemainingNeedActCount(x, 0LL);
}


int32_t __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__23_2(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.actPriority;
}


int32_t __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__23_3(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return BattleServantData__getDeckIndex(x, 0LL);
}


bool __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__23_4(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return BattleServantData__GetRemainingNeedActCount(x, 0LL) > 0;
}


void __fastcall BattleLogicEnemyAi___c__DisplayClass25_0___ctor(
        BattleLogicEnemyAi___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicEnemyAi___c__DisplayClass25_0___procAiAct_b__0(
        BattleLogicEnemyAi___c__DisplayClass25_0_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  OverwriteTreasureDeviceData_o *OverwriteTdData_k__BackingField; // x8

  if ( !x )
    sub_B7769C(this, 0LL);
  OverwriteTdData_k__BackingField = x->fields._OverwriteTdData_k__BackingField;
  if ( OverwriteTdData_k__BackingField )
    OverwriteTreasureDeviceData__Reset(OverwriteTdData_k__BackingField, this->fields.svtData, 0LL);
}


void __fastcall BattleLogicEnemyAi___c__DisplayClass36_0___ctor(
        BattleLogicEnemyAi___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleLogicTask_o *__fastcall BattleLogicEnemyAi___c__DisplayClass36_0___ReplaceCommandTasksBySealStatus_b__0(
        BattleLogicEnemyAi___c__DisplayClass36_0_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  BattleLogicEnemyAi_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7769C(0LL, x);
  return BattleLogicEnemyAi__ReplaceCommandTaskBySealStatus(_4__this, this->fields.svtData, x, 0LL);
}