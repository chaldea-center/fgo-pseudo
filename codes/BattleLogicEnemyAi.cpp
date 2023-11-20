void __fastcall BattleLogicEnemyAi___ctor(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FCDB8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_BattleServantData__TypeInfo, v6);
    byte_40FCDB8 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_BattleServantData__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this->fields.actlist = (struct System_Collections_Generic_List_BattleServantData__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.actlist,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  BattleLogicServantAi___ctor((BattleLogicServantAi_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicEnemyAi__AddTempDeadSvt(
        BattleLogicEnemyAi_o *this,
        int32_t svtUniqueId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x0

  if ( (byte_40FCDAF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, *(_QWORD *)&svtUniqueId);
    byte_40FCDAF = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
    System_Collections_Generic_HashSet_int___Add(
      tempDeadSvtHash,
      svtUniqueId,
      (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
}


// local variable allocation has failed, the output may be wrong!
AiLogic_AiInfo_CheckedInfo_o *__fastcall BattleLogicEnemyAi__CheckAiActType(
        BattleLogicEnemyAi_o *this,
        bool skillFlg,
        BattleServantData_o *svtData,
        AiActEntity_o *aiActEnt,
        int32_t actType,
        const MethodInfo *method)
{
  int Type; // w19
  _BOOL4 v9; // w21
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  WeightRate_int__o *v19; // x22
  BattleLogicEnemyAi_o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  const MethodInfo *v24; // x4
  struct System_Int32_array *skillVals; // x8
  int32_t v26; // w21
  int32_t v27; // w22
  WebViewManager_o *Instance; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x0
  BattleSkillInfoData_o *SkillData; // x0
  BattleSkillInfoData_o *v31; // x20
  char v32; // w22
  int32_t Int; // w0
  BattleLogicEnemyAi_o *v34; // x0
  const MethodInfo *v35; // x4
  int32_t Next; // w0
  int32_t Data; // w0
  bool v38; // zf
  int v39; // w8
  _BOOL4 isUseSelfSkill; // w0
  AiLogic_AiInfo_CheckedInfo_o *v41; // x21

  Type = actType;
  v9 = skillFlg;
  if ( (byte_40FCDB4 & 1) == 0 )
  {
    sub_B16FFC(&AiLogic_AiInfo_CheckedInfo_TypeInfo, skillFlg);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&Method_WeightRate_int___ctor__, v13);
    sub_B16FFC(&Method_WeightRate_int__getCount__, v14);
    sub_B16FFC(&Method_WeightRate_int__getData__, v15);
    sub_B16FFC(&Method_WeightRate_int__getTotalWeight__, v16);
    sub_B16FFC(&Method_WeightRate_int__setWeight__, v17);
    sub_B16FFC(&WeightRate_int__TypeInfo, v18);
    byte_40FCDB4 = 1;
  }
  v19 = (WeightRate_int__o *)sub_B170CC(WeightRate_int__TypeInfo, skillFlg, svtData, aiActEnt, *(_QWORD *)&actType);
  WeightRate_int____ctor(v19, (const MethodInfo_2ADD274 *)Method_WeightRate_int___ctor__);
  if ( Type <= 13 )
  {
    switch ( Type )
    {
      case 10:
        if ( v9 )
          BattleLogicEnemyAi__SetSkillRandomWeightSameProbability(v20, v19, 10, svtData, v24);
        if ( !v19 )
          goto LABEL_46;
        if ( WeightRate_int___getCount(v19, (const MethodInfo_2ADC7DC *)Method_WeightRate_int__getCount__) < 1 )
          goto LABEL_26;
        goto LABEL_31;
      case 11:
        if ( !svtData )
          goto LABEL_46;
        v32 = !v9;
        v38 = !BattleServantData__isUseSelfSkill(svtData, 0, 0LL) || !v9;
        v39 = 11;
        goto LABEL_38;
      case 12:
        if ( !svtData )
          goto LABEL_46;
        v32 = !v9;
        v38 = !BattleServantData__isUseSelfSkill(svtData, 1, 0LL) || !v9;
        v39 = 12;
LABEL_38:
        v31 = 0LL;
        if ( v38 )
          Type = 2;
        else
          Type = v39;
        goto LABEL_45;
      case 13:
        if ( !svtData )
          goto LABEL_46;
        v32 = !v9;
        isUseSelfSkill = BattleServantData__isUseSelfSkill(svtData, 2, 0LL);
        v31 = 0LL;
        if ( isUseSelfSkill && v9 )
          Type = 13;
        else
          Type = 2;
        goto LABEL_45;
      default:
        if ( Type != 1 )
          goto LABEL_33;
        Int = AiAct__getInt(2, 0LL);
        if ( !v19 )
          goto LABEL_46;
        WeightRate_int___setWeight(v19, 10, Int, (const MethodInfo_2ADC43C *)Method_WeightRate_int__setWeight__);
        if ( v9 )
          BattleLogicEnemyAi__SetSkillRandomWeightSameProbability(v34, v19, 10, svtData, v35);
LABEL_31:
        Next = BattleRandom__getNext(v19->fields.totalweight, 0LL);
        Data = WeightRate_int___getData(v19, Next, (const MethodInfo_2ADC8C0 *)Method_WeightRate_int__getData__);
        Type = AiAct__getType(Data, 0LL);
        break;
    }
    goto LABEL_33;
  }
  if ( (Type & 0xFFFFFFFE) != 40 )
  {
    if ( Type != 80 )
    {
LABEL_33:
      v32 = 0;
      v31 = 0LL;
      goto LABEL_45;
    }
    if ( svtData )
    {
      if ( BattleServantData__isNobleAction(svtData, 0LL)
        && TreasureDeviceConditionUtil__IsSatisfyEachCondition(svtData, this->fields.data, 0LL) )
      {
        v32 = 0;
        v31 = 0LL;
        Type = 80;
        goto LABEL_45;
      }
      goto LABEL_26;
    }
LABEL_46:
    sub_B170D4();
  }
  if ( !aiActEnt )
    goto LABEL_46;
  skillVals = aiActEnt->fields.skillVals;
  if ( !skillVals )
    goto LABEL_46;
  if ( (int)skillVals->max_length < 2 )
  {
LABEL_32:
    Type = 0;
    goto LABEL_33;
  }
  if ( Type == 41 && !v9 )
  {
LABEL_26:
    v31 = 0LL;
    v32 = 1;
    Type = 2;
    goto LABEL_45;
  }
  v26 = skillVals->m_Items[1];
  v27 = skillVals->m_Items[2];
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_46;
  if ( !SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v26, v27, 0LL) )
    goto LABEL_32;
  SkillData = BattleSkillInfoData__MakeSkillData(20, 0LL);
  if ( !svtData )
    goto LABEL_46;
  v31 = BattleServantData__SetSkillInfo(svtData, SkillData, 20, 0, v26, v27, -1LL, -1, 0LL);
  v32 = 0;
LABEL_45:
  v41 = (AiLogic_AiInfo_CheckedInfo_o *)sub_B170CC(AiLogic_AiInfo_CheckedInfo_TypeInfo, v21, v22, v23, v24);
  AiLogic_AiInfo_CheckedInfo___ctor(v41, Type, v32 & 1, v31, 0LL);
  return v41;
}


bool __fastcall BattleLogicEnemyAi__CheckAiCanActionFromTargets(
        BattleLogicEnemyAi_o *this,
        AiLogic_AiInfo_o *aiInfo,
        AiBaseEntity_o *aiBaseEntity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  const MethodInfo *v14; // x5
  BattleServantData_o *v15; // x23
  bool canUseSkill; // w0
  AiLogic_AiInfo_CheckedInfo_o *v17; // x0
  const MethodInfo *v18; // x3
  AiLogic_AiInfo_CheckedInfo_o *v19; // x20
  __int64 v20; // x2
  bool v21; // w26
  __int64 v22; // x10
  AiEntity_o *v23; // x19
  __int64 v24; // x0
  BattleData_o *v25; // x0
  BattleLogicTarget_o *logictarget; // x27
  int32_t age; // w28
  int32_t uniqueId; // w22
  struct System_String_o *name; // x20
  System_Int32_array *FieldPlayerServantIDList; // x0
  AiActEntity_o *aiActEnt; // x24
  System_Int32_array *v32; // x25
  const MethodInfo *v33; // x2
  bool IsDeadToEnableUpHateEnemyAI; // w0
  __int64 TargetAiAct; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x0
  System_Int32_array *v39; // x25
  BattleData_o *v40; // x0
  BattleLogicTarget_o *v41; // x20
  int32_t v42; // w22
  int32_t v43; // w23
  struct System_String_o *v44; // x26
  System_Int32_array *FieldEnemyServantIDList; // x0
  AiLogic_o *aiLogic; // x20
  int32_t NoTargetNoActionType; // w0
  AiBaseEntity_o *aiBaseEntitya; // [xsp+18h] [xbp-78h]
  AiLogic_AiInfo_CheckedInfo_o *v50; // [xsp+20h] [xbp-70h]
  AiLogic_AiInfo_o *v51; // [xsp+28h] [xbp-68h]
  System_Int32_array *v52; // [xsp+30h] [xbp-60h]
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_40FCDB7 & 1) == 0 )
  {
    sub_B16FFC(&AiEntity_TypeInfo, aiInfo);
    sub_B16FFC(&Method_DataManager_GetMaster_AiActMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__, v9);
    sub_B16FFC(&int___TypeInfo, v10);
    byte_40FCDB7 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !aiBaseEntity || !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          aiBaseEntity->fields.aiActId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__) )
    return 1;
  if ( !entity )
    goto LABEL_42;
  if ( !AiActEntity__GetNoTargetNoActionType((AiActEntity_o *)entity, 0LL) )
    return 1;
  if ( !aiInfo )
    goto LABEL_42;
  data = this->fields.data;
  if ( !data )
    goto LABEL_42;
  ServantData = BattleData__getServantData(data, aiInfo->fields.uniqueId, 0LL);
  v15 = ServantData;
  if ( aiInfo->fields.procState == 1 )
  {
    if ( !ServantData )
      goto LABEL_42;
    canUseSkill = BattleServantData__canUseSkill(ServantData, -1, 0LL);
  }
  else
  {
    canUseSkill = 1;
  }
  if ( !entity )
    goto LABEL_42;
  v17 = BattleLogicEnemyAi__CheckAiActType(
          this,
          canUseSkill,
          v15,
          (AiActEntity_o *)entity,
          *(&entity->fields.id + 1),
          v14);
  if ( !v17 )
    goto LABEL_42;
  v19 = v17;
  v21 = BattleLogicEnemyAi__CheckHate(this, v17->fields.actType, v15, v18);
  v22 = *(&AiEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&aiBaseEntity->klass->_2.bitflags2 + 1) >= (unsigned int)v22 )
    v23 = (AiEntity_c *)aiBaseEntity->klass->_2.typeHierarchy[v22 - 1] == AiEntity_TypeInfo
        ? (AiEntity_o *)aiBaseEntity
        : 0LL;
  else
    v23 = 0LL;
  v24 = sub_B17014(int___TypeInfo, 1LL, v20);
  if ( !entity )
    goto LABEL_42;
  if ( !v15 )
    goto LABEL_42;
  aiBaseEntitya = aiBaseEntity;
  v50 = v19;
  v51 = aiInfo;
  v52 = (System_Int32_array *)v24;
  v25 = this->fields.data;
  if ( !v25 )
    goto LABEL_42;
  logictarget = this->fields.logictarget;
  age = (int32_t)entity->fields.age;
  uniqueId = v15->fields.uniqueId;
  name = entity->fields.name;
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v25, 0LL, 0LL);
  aiActEnt = (AiActEntity_o *)entity;
  v32 = FieldPlayerServantIDList;
  IsDeadToEnableUpHateEnemyAI = BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(this, v23, v33);
  if ( !logictarget )
    goto LABEL_42;
  TargetAiAct = BattleLogicTarget__getTargetAiAct(
                  logictarget,
                  age,
                  uniqueId,
                  (System_Int32_array *)name,
                  v32,
                  v21,
                  0,
                  0LL,
                  aiActEnt,
                  IsDeadToEnableUpHateEnemyAI,
                  0LL);
  if ( !v52 )
    goto LABEL_42;
  if ( !v52->max_length )
    goto LABEL_43;
  v52->m_Items[1] = TargetAiAct;
  v38 = sub_B17014(int___TypeInfo, 1LL, v37);
  if ( !entity )
    goto LABEL_42;
  v39 = (System_Int32_array *)v38;
  v40 = this->fields.data;
  if ( !v40
    || (v41 = this->fields.logictarget,
        v42 = (int32_t)entity->fields.age,
        v43 = v15->fields.uniqueId,
        v44 = entity->fields.name,
        FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(v40, 0, 0LL),
        !v41)
    || (TargetAiAct = BattleLogicTarget__getTargetAiAct(
                        v41,
                        v42,
                        v43,
                        (System_Int32_array *)v44,
                        FieldEnemyServantIDList,
                        0,
                        0,
                        0LL,
                        (AiActEntity_o *)entity,
                        1,
                        0LL),
        !v39) )
  {
LABEL_42:
    sub_B170D4();
  }
  if ( !v39->max_length )
  {
LABEL_43:
    sub_B17100(TargetAiAct, v36, v37);
    sub_B170A0();
  }
  v39->m_Items[1] = TargetAiAct;
  if ( !entity )
    goto LABEL_42;
  aiLogic = this->fields.aiLogic;
  NoTargetNoActionType = AiActEntity__GetNoTargetNoActionType((AiActEntity_o *)entity, 0LL);
  if ( !aiLogic )
    goto LABEL_42;
  if ( AiLogic__IsNoTargetNoActionTask(aiLogic, NoTargetNoActionType, v52, v39, 0LL) )
    return 0;
  AiLogic_AiInfo__SetCheckedResult(v51, aiBaseEntitya, v50, 0LL);
  return 1;
}


bool __fastcall BattleLogicEnemyAi__CheckEnemyShiftAfter(
        BattleLogicEnemyAi_o *this,
        int32_t actUniqueId,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0

  data = this->fields.data;
  if ( !data || (ServantData = BattleData__getServantData(data, actUniqueId, 0LL), !this->fields.aiLogic) )
    sub_B170D4();
  return AiLogic__checkThinking(this->fields.aiLogic, ServantData, 20, (BattleLogicBaseAi_o *)this, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicEnemyAi__CheckHate(
        BattleLogicEnemyAi_o *this,
        int32_t actType,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  SkillLvMaster_o *v11; // x21
  BattleSkillInfoData_o *SkillInfoDataByAiActType; // x0
  BattleSkillInfoData_o *v13; // x19
  int32_t v14; // w0
  SkillLvEntity_o *Entity; // x21
  bool v16; // w0
  struct BattleLogic_o *logic; // x20
  System_Int32_array *funcId; // x22
  DataVals_array *DataValsList; // x0
  DataVals_array *v20; // x2
  BattleLogic_o *v21; // x0
  System_Int32_array *v22; // x1
  WebViewManager_o *v23; // x0
  TreasureDvcLvMaster_o *v24; // x23
  int32_t TreasureDvcId; // w0
  TreasureDvcLvEntity_o *v26; // x0

  if ( (byte_40FCDB6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&actType);
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FCDB6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !svtData )
    goto LABEL_26;
  v11 = (SkillLvMaster_o *)MasterData_WarQuestSelectionMaster;
  SkillInfoDataByAiActType = BattleServantData__getSkillInfoDataByAiActType(svtData, actType, 0LL);
  v13 = SkillInfoDataByAiActType;
  if ( SkillInfoDataByAiActType )
  {
    v14 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))SkillInfoDataByAiActType->klass->vtable._5_get_skillId.method)(
            SkillInfoDataByAiActType,
            SkillInfoDataByAiActType->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !v11 )
      goto LABEL_26;
    Entity = SkillLvMaster__GetEntity(v11, v14, v13->fields.skilllv, 0LL);
  }
  else
  {
    Entity = 0LL;
  }
  if ( AiAct__isSkillType(actType, 0LL) )
  {
    v16 = 1;
    if ( !Entity || !v13 )
    {
LABEL_21:
      if ( !Entity )
        return v16;
      goto LABEL_22;
    }
    logic = this->fields.logic;
    funcId = Entity->fields.funcId;
    DataValsList = SkillLvEntity__getDataValsList(Entity, 0LL);
    if ( logic )
    {
      v20 = DataValsList;
      v21 = logic;
      v22 = funcId;
LABEL_20:
      v16 = BattleLogic__checkEnemyTargetFunction(v21, v22, v20, 0LL);
      goto LABEL_21;
    }
    goto LABEL_26;
  }
  if ( actType == 80 )
  {
    v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v23 )
      goto LABEL_26;
    v24 = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v23,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    TreasureDvcId = BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
    if ( !v24 )
      goto LABEL_26;
    v26 = TreasureDvcLvMaster__GetEntity(v24, TreasureDvcId, svtData->fields.treasuredvcLevel, 0LL);
    if ( v26 )
    {
      if ( this->fields.logic )
      {
        v22 = v26->fields.funcId;
        v21 = this->fields.logic;
        v20 = 0LL;
        goto LABEL_20;
      }
LABEL_26:
      sub_B170D4();
    }
  }
  v16 = 1;
  if ( !Entity )
    return v16;
LABEL_22:
  if ( v13 )
    return SkillLvEntity__IsEnableTarget(Entity, v16, 0LL);
  return v16;
}


bool __fastcall BattleLogicEnemyAi__CheckPlayerTurnEndAfter(
        BattleLogicEnemyAi_o *this,
        int32_t actUniqueId,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0

  data = this->fields.data;
  if ( !data || (ServantData = BattleData__getServantData(data, actUniqueId, 0LL), !this->fields.aiLogic) )
    sub_B170D4();
  return AiLogic__checkThinking(this->fields.aiLogic, ServantData, 14, (BattleLogicBaseAi_o *)this, 0, 0LL);
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
    sub_B170D4();
  if ( !BattleServantData__isUseSelfSkill(servantData, skillIndex, 0LL) )
    *actType = 2;
}


void __fastcall BattleLogicEnemyAi__ClearTempDeadSvt(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x0

  if ( (byte_40FCDB0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Clear__, method);
    byte_40FCDB0 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
    System_Collections_Generic_HashSet_int___Clear(
      tempDeadSvtHash,
      (const MethodInfo_21D8598 *)Method_System_Collections_Generic_HashSet_int__Clear__);
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
    sub_B170D4();
  ServantData = BattleData__getServantData(data, actUniqueId, 0LL);
  return BattleLogicEnemyAi__CreateAILogicTask(this, ServantData, 20, v6);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicEnemyAi__CreateAILogicTask(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        int32_t procState,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x22
  WebViewManager_o *Instance; // x0
  struct AiActMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct BattleData_o *data; // x8
  AiLogic_o *aiLogic; // x0
  AiEntity_o *Action; // x0
  System_Collections_Generic_IEnumerable_T__o *v25; // x0
  AiLogic_AiInfo_o *info; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40FCDAC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_AiActMaster___, svtData);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FCDAC = 1;
  }
  info = 0LL;
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  svtData,
                                                                                                  *(_QWORD *)&procState,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = (struct AiActMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = MasterData_WarQuestSelectionMaster;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.aiActMst,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    goto LABEL_11;
  Action = AiLogic__getAction(
             aiLogic,
             svtData,
             procState,
             data->fields.turnCount,
             0,
             (BattleLogicBaseAi_o *)this,
             &info,
             0,
             0LL);
  if ( !Action )
  {
    if ( v13 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_11:
    sub_B170D4();
  }
  v25 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, AiEntity_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._18_procAiAct.method)(
                                                         this,
                                                         svtData,
                                                         Action,
                                                         0LL,
                                                         info,
                                                         0LL,
                                                         this->klass->vtable._19_ExistThinking.methodPtr);
  if ( !v13 )
    goto LABEL_11;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v13,
    v25,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_B170D4();
  ServantData = BattleData__getServantData(data, actUniqueId, 0LL);
  return BattleLogicEnemyAi__CreateAILogicTask(this, ServantData, 14, v6);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_BattleLogicTask__o *__fastcall BattleLogicEnemyAi__CreateTaskAIAttack(
        BattleLogicEnemyAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  UnityEngine_Object_o *perf; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  BattlePerformance_o *v30; // x0
  BattleData_o *v31; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v32; // x23
  struct BattleData_o *v33; // x8
  WebViewManager_o *Instance; // x0
  struct AiActMaster_o *MasterData_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o **p_aiActMst; // x24
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  const MethodInfo *v43; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *actlist; // x0
  BattleServantData_o *v45; // x21
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x2
  BattleLogicTask_array *v48; // x0
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Collections_Generic_IEnumerable_T__o *v52; // x1
  struct BattleData_o *v53; // x8
  AiLogic_o *aiLogic; // x0
  AiEntity_o *Action; // x0
  struct BattleData_o *v56; // x8
  BattleLogicEnemyAi_c *klass; // x9
  struct AiEntity_o *noThinkAiEnt; // x2
  __int64 v59; // x0
  struct BattleData_o *v60; // x8
  BattleLogicTask_o *v62; // x23
  WebViewManager_o *v63; // x0
  TreasureDvcLvMaster_o *v64; // x25
  int32_t TreasureDvcId; // w0
  TreasureDvcLvEntity_o *v66; // x0
  bool v67; // w25
  struct BattleData_o *v68; // x8
  AiLogic_o *v69; // x0
  AiEntity_o *v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  struct BattleLogicTarget_o *logictarget; // x8
  System_Int32_array **tempDeadSvtHash; // x1
  AiEntity_o *v79; // x26
  BattleLogicTarget_o *v80; // x24
  int32_t uniqueId; // w28
  System_Int32_array *FieldPlayerServantIDList; // x0
  AiActEntity_o *v83; // x27
  System_Int32_array *v84; // x22
  const MethodInfo *v85; // x2
  bool IsDeadToEnableUpHateEnemyAI; // w0
  int32_t TargetAiAct; // w0
  BattleLogicTarget_o *v88; // x24
  int32_t v89; // w26
  System_Int32_array *v90; // x0
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  struct BattleLogicTarget_o *v97; // x0
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  BattleCommandData_o *v102; // x22
  int32_t TreasureDvcCardId; // w0
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  BattleComboData_o *v108; // x24
  struct BattleData_o *v109; // x8
  int32_t v110; // w0
  struct System_String_o *name; // [xsp+18h] [xbp-78h]
  int32_t age; // [xsp+24h] [xbp-6Ch]
  AiLogic_AiInfo_o *v113; // [xsp+28h] [xbp-68h] BYREF
  WarEntity_o *entity; // [xsp+30h] [xbp-60h] BYREF
  AiLogic_AiInfo_o *info; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_40FCDA5 & 1) == 0 )
  {
    sub_B16FFC(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_B16FFC(&BattleCommandData_TypeInfo, v7);
    sub_B16FFC(&Method_BattleLogicEnemyAi_IsNotTempDeadSvt__, v8);
    sub_B16FFC(&BattleLogicTask_TypeInfo, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_AiActMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__, v12);
    sub_B16FFC(&Method_System_Func_BattleServantData__bool___ctor__, v13);
    sub_B16FFC(&System_Func_BattleServantData__bool__TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__RemoveAt__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__get_Item__, v20);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v21);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    byte_40FCDA5 = 1;
  }
  entity = 0LL;
  info = 0LL;
  v113 = 0LL;
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&ltype,
                                                                                                  data,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !data )
    goto LABEL_66;
  perf = (UnityEngine_Object_o *)data->fields.perf;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(perf, 0LL, 0LL) )
  {
    v30 = data->fields.perf;
    if ( !v30 )
      goto LABEL_66;
    BattlePerformance__setOffTarget(v30, 0LL);
  }
  v31 = this->fields.data;
  v32 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_BattleServantData__bool__TypeInfo,
                                                                             v26,
                                                                             v27,
                                                                             v28,
                                                                             v29);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v32,
    (Il2CppObject *)this,
    Method_BattleLogicEnemyAi_IsNotTempDeadSvt__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_BattleServantData__bool___ctor__);
  if ( !v31 )
    goto LABEL_66;
  if ( !BattleData__CheckAlivePlayers(v31, (System_Func_BattleServantData__bool__o *)v32, 0LL) )
    return (System_Collections_Generic_List_BattleLogicTask__o *)v24;
  v33 = this->fields.data;
  if ( !v33 )
    goto LABEL_66;
  if ( v33->fields.leaderDown || v33->fields.endbattleFlg )
    return (System_Collections_Generic_List_BattleLogicTask__o *)v24;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_WarQuestSelectionMaster = (struct AiActMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = MasterData_WarQuestSelectionMaster;
  p_aiActMst = (DataMasterBase_WarMaster__WarEntity__int__o **)&this->fields.aiActMst;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.aiActMst,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  BattleLogicEnemyAi__updateActPriorityList(this, v43);
  actlist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.actlist;
  if ( !actlist )
    goto LABEL_66;
  if ( actlist->fields._size > 0 )
  {
    v45 = (BattleServantData_o *)actlist->fields._items->m_Items[0];
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      actlist,
      0,
      (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_BattleServantData__RemoveAt__);
    if ( !v45 )
      goto LABEL_66;
    if ( !BattleServantData__isAlive(v45, 0, 0LL)
      || !BattleLogicEnemyAi__IsNotTempDeadSvt(this, v45, v46)
      || !v45->fields.isEntry )
    {
      return (System_Collections_Generic_List_BattleLogicTask__o *)v24;
    }
    if ( !BattleServantData__isAction(v45, 0LL) )
      goto LABEL_39;
    if ( BattleServantData__isTDSeraled(v45, 0LL) || !BattleServantData__checkUseTDvc(v45, this->fields.data, 1, 0LL) )
    {
      v53 = this->fields.data;
      if ( v53 )
      {
        aiLogic = this->fields.aiLogic;
        if ( aiLogic )
        {
          Action = AiLogic__getAction(
                     aiLogic,
                     v45,
                     1,
                     data->fields.turnCount,
                     v53->fields.countEnemyAttack,
                     (BattleLogicBaseAi_o *)this,
                     &info,
                     0,
                     0LL);
          v56 = this->fields.data;
          if ( Action )
          {
            if ( !v56 )
              goto LABEL_66;
            klass = this->klass;
            noThinkAiEnt = Action;
          }
          else
          {
            if ( !v56 )
              goto LABEL_66;
            klass = this->klass;
            noThinkAiEnt = this->fields.noThinkAiEnt;
          }
          v59 = ((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, struct AiEntity_o *, _QWORD, AiLogic_AiInfo_o *, __int64, Il2CppMethodPointer))klass->vtable._18_procAiAct.method)(
                  this,
                  v45,
                  noThinkAiEnt,
                  (unsigned int)v56->fields.countEnemyAttack,
                  info,
                  1LL,
                  klass->vtable._19_ExistThinking.methodPtr);
          if ( v24 )
          {
            v52 = (System_Collections_Generic_IEnumerable_T__o *)v59;
LABEL_38:
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v24,
              v52,
              (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
LABEL_39:
            ++v45->fields.actionCount;
            goto LABEL_40;
          }
        }
      }
    }
    else
    {
      v48 = BattleLogicEnemyAi__taskAIEnemyMaxNp(this, v45->fields.uniqueId, v47);
      if ( !v48 )
        goto LABEL_66;
      v52 = (System_Collections_Generic_IEnumerable_T__o *)v48;
      if ( *(_QWORD *)&v48->max_length )
      {
        if ( !v24 )
          goto LABEL_66;
        goto LABEL_38;
      }
      v62 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, v48, v49, v50, v51);
      BattleLogicTask___ctor(v62, 0LL);
      if ( v62 )
      {
        BattleLogicTask__setActor(v62, 3, v45->fields.uniqueId, 0LL);
        v63 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( v63 )
        {
          v64 = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)v63,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
          TreasureDvcId = BattleServantData__getTreasureDvcId(v45, 1, 0LL);
          if ( v64 )
          {
            v66 = TreasureDvcLvMaster__GetEntity(v64, TreasureDvcId, v45->fields.treasuredvcLevel, 0LL);
            if ( v66 )
            {
              if ( !this->fields.logic )
                goto LABEL_66;
              v67 = BattleLogic__checkEnemyTargetFunction(this->fields.logic, v66->fields.funcId, 0LL, 0LL);
            }
            else
            {
              v67 = 1;
            }
            v68 = this->fields.data;
            if ( v68 )
            {
              v69 = this->fields.aiLogic;
              if ( v69 )
              {
                v70 = AiLogic__getAction(
                        v69,
                        v45,
                        8,
                        data->fields.turnCount,
                        v68->fields.countEnemyAttack,
                        (BattleLogicBaseAi_o *)this,
                        &v113,
                        0,
                        0LL);
                entity = 0LL;
                logictarget = this->fields.logictarget;
                if ( logictarget )
                {
                  tempDeadSvtHash = (System_Int32_array **)this->fields.tempDeadSvtHash;
                  v79 = v70;
                  logictarget->fields.tempDeadSvtHash = (struct System_Collections_Generic_HashSet_int__o *)tempDeadSvtHash;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)&logictarget->fields.tempDeadSvtHash,
                    tempDeadSvtHash,
                    v71,
                    v72,
                    v73,
                    v74,
                    v75,
                    v76);
                  if ( !v79 )
                    goto LABEL_59;
                  if ( !*p_aiActMst )
                    goto LABEL_66;
                  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                         *p_aiActMst,
                         &entity,
                         v79->fields.aiActId,
                         (const MethodInfo_266F3E4 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__) )
                  {
                    if ( !entity )
                      goto LABEL_66;
                    v80 = this->fields.logictarget;
                    uniqueId = v45->fields.uniqueId;
                    age = (int32_t)entity->fields.age;
                    name = entity->fields.name;
                    FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
                    v83 = (AiActEntity_o *)entity;
                    v84 = FieldPlayerServantIDList;
                    IsDeadToEnableUpHateEnemyAI = BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(this, v79, v85);
                    if ( !v80 )
                      goto LABEL_66;
                    TargetAiAct = BattleLogicTarget__getTargetAiAct(
                                    v80,
                                    age,
                                    uniqueId,
                                    (System_Int32_array *)name,
                                    v84,
                                    v67,
                                    0,
                                    0LL,
                                    v83,
                                    IsDeadToEnableUpHateEnemyAI,
                                    0LL);
                  }
                  else
                  {
LABEL_59:
                    v88 = this->fields.logictarget;
                    v89 = v45->fields.uniqueId;
                    v90 = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
                    if ( !v88 )
                      goto LABEL_66;
                    TargetAiAct = BattleLogicTarget__getTargetAiAct(
                                    v88,
                                    1,
                                    v89,
                                    0LL,
                                    v90,
                                    v67,
                                    0,
                                    0LL,
                                    (AiActEntity_o *)entity,
                                    1,
                                    0LL);
                  }
                  BattleLogicTask__setTarget(v62, TargetAiAct, 0LL);
                  v97 = this->fields.logictarget;
                  if ( v97 )
                  {
                    v97->fields.tempDeadSvtHash = 0LL;
                    sub_B16F98(
                      (BattleServantConfConponent_o *)&v97->fields.tempDeadSvtHash,
                      0LL,
                      v91,
                      v92,
                      v93,
                      v94,
                      v95,
                      v96);
                    v102 = (BattleCommandData_o *)sub_B170CC(BattleCommandData_TypeInfo, v98, v99, v100, v101);
                    BattleCommandData___ctor(v102, 0LL);
                    TreasureDvcCardId = BattleServantData__getTreasureDvcCardId(v45, 0LL);
                    if ( v102 )
                    {
                      v102->fields._type = TreasureDvcCardId;
                      v102->fields.svtlimit = BattleServantData__getDispLimitCount(v45, 1, 0LL);
                      v102->fields.uniqueId = v45->fields.uniqueId;
                      v102->fields.svtId = BattleServantData__getSvtId(v45, 0LL);
                      v102->fields.treasureDvc = BattleServantData__getTreasureDvcId(v45, 1, 0LL);
                      v108 = (BattleComboData_o *)sub_B170CC(BattleComboData_TypeInfo, v104, v105, v106, v107);
                      BattleComboData___ctor(v108, 0LL);
                      v109 = this->fields.data;
                      if ( v109 )
                      {
                        BattleLogicTask__setActionCommand(v62, v108, v102, v109->fields.countEnemyAttack, 0LL);
                        v110 = BattleServantData__getTreasureDvcId(v45, 1, 0LL);
                        BattleLogicTask__setActionTreasureDvc(v62, v110, 1, 0LL);
                        if ( v24 )
                        {
                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                            v24,
                            (EventMissionProgressRequest_Argument_ProgressData_o *)v62,
                            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                          goto LABEL_39;
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
    }
LABEL_66:
    sub_B170D4();
  }
LABEL_40:
  v60 = this->fields.data;
  if ( !v60 )
    goto LABEL_66;
  ++v60->fields.countEnemyAttack;
  return (System_Collections_Generic_List_BattleLogicTask__o *)v24;
}


void __fastcall BattleLogicEnemyAi__ExcludeDeadFromTempDead(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x20
  Il2CppObject *data; // x19
  System_Predicate_int__o *v11; // x21

  if ( (byte_40FCDB1 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleData_IsNotAliveTarget__, method);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__, v6);
    sub_B16FFC(&Method_System_Predicate_int___ctor__, v7);
    sub_B16FFC(&System_Predicate_int__TypeInfo, v8);
    byte_40FCDB1 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
  {
    data = (Il2CppObject *)this->fields.data;
    v11 = (System_Predicate_int__o *)sub_B170CC(System_Predicate_int__TypeInfo, method, v2, v3, v4);
    System_Predicate_int____ctor(
      v11,
      data,
      Method_BattleData_IsNotAliveTarget__,
      (const MethodInfo_2B09B40 *)Method_System_Predicate_int___ctor__);
    System_Collections_Generic_HashSet_int___RemoveWhere(
      tempDeadSvtHash,
      (System_Predicate_T__o *)v11,
      (const MethodInfo_21D96DC *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
  }
}


System_Int32_array *__fastcall BattleLogicEnemyAi__GetCommandArray(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *data; // x21
  BattleData_o *v6; // x0
  StageEntity_o *StageEntity; // x0
  int32_t AiActTypeAttackCommandCardType; // w0

  if ( (byte_40FCDAE & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, servantData);
    byte_40FCDAE = 1;
  }
  data = (UnityEngine_Object_o *)this->fields.data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(data, 0LL, 0LL) )
    goto LABEL_12;
  v6 = this->fields.data;
  if ( !v6 )
    goto LABEL_14;
  StageEntity = BattleData__getStageEntity(v6, 0LL);
  if ( !StageEntity )
  {
LABEL_12:
    if ( servantData )
      return BattleServantData__getCommandList(servantData, 0LL);
LABEL_14:
    sub_B170D4();
  }
  AiActTypeAttackCommandCardType = StageEntity__GetAiActTypeAttackCommandCardType(StageEntity, servantData, 0LL);
  if ( !servantData )
    goto LABEL_14;
  if ( AiActTypeAttackCommandCardType )
    return BattleServantData__getCommandArray(servantData, AiActTypeAttackCommandCardType, 0LL);
  return BattleServantData__getCommandList(servantData, 0LL);
}


BattleLogicTask_array *__fastcall BattleLogicEnemyAi__GetPlayerSkillAfterTask(
        BattleLogicEnemyAi_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleData_o *data; // x0
  BattleServantData_array *FieldEnemyServantList; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  AiEntity_o *Action; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x8
  unsigned __int64 v17; // x23
  struct BattleData_o *v18; // x8
  AiLogic_o *aiLogic; // x0
  BattleServantData_o *v20; // x22
  System_Collections_Generic_IEnumerable_T__o *v21; // x0
  AiLogic_AiInfo_o *info; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_40FCDB3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v4);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v5);
    byte_40FCDB3 = 1;
  }
  info = 0LL;
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  FieldEnemyServantList = BattleData__getFieldEnemyServantList(data, 0, 0LL);
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  v8,
                                                                                                  v9,
                                                                                                  v10,
                                                                                                  v11);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !FieldEnemyServantList )
    goto LABEL_16;
  v16 = *(_QWORD *)&FieldEnemyServantList->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v16 )
      {
        sub_B17100(Action, v14, v15);
        sub_B170A0();
      }
      v18 = this->fields.data;
      if ( !v18 )
        break;
      aiLogic = this->fields.aiLogic;
      if ( !aiLogic )
        break;
      v20 = FieldEnemyServantList->m_Items[v17];
      Action = AiLogic__getAction(
                 aiLogic,
                 v20,
                 19,
                 v18->fields.turnCount,
                 0,
                 (BattleLogicBaseAi_o *)this,
                 &info,
                 0,
                 0LL);
      if ( Action )
      {
        v21 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, AiEntity_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._18_procAiAct.method)(
                                                               this,
                                                               v20,
                                                               Action,
                                                               0LL,
                                                               info,
                                                               0LL,
                                                               this->klass->vtable._19_ExistThinking.methodPtr);
        if ( !v12 )
          break;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v12,
          v21,
          (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
      }
      LODWORD(v16) = FieldEnemyServantList->max_length;
      if ( (__int64)++v17 >= (int)v16 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_14:
  if ( !v12 )
    goto LABEL_16;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicEnemyAi__Initialize(
        BattleLogicEnemyAi_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  AiLogic_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  AiLogic_o *aiLogic; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  AiEntity_o *v23; // x20
  struct AiEntity_o **p_noThinkAiEnt; // x19
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct AiEntity_o *v31; // x19
  int32_t Value; // w0

  if ( (byte_40FCDA1 & 1) == 0 )
  {
    sub_B16FFC(&AiEntity_TypeInfo, data);
    sub_B16FFC(&AiLogic_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_9299, v6);
    byte_40FCDA1 = 1;
  }
  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, method);
  v11 = (AiLogic_o *)sub_B170CC(AiLogic_TypeInfo, v7, v8, v9, v10);
  AiLogic___ctor(v11, 0LL);
  this->fields.aiLogic = v11;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.aiLogic,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    goto LABEL_6;
  AiLogic__Initialize(aiLogic, data, 0LL);
  v23 = (AiEntity_o *)sub_B170CC(AiEntity_TypeInfo, v19, v20, v21, v22);
  AiEntity___ctor(v23, 0LL);
  this->fields.noThinkAiEnt = v23;
  p_noThinkAiEnt = &this->fields.noThinkAiEnt;
  sub_B16F98((BattleServantConfConponent_o *)p_noThinkAiEnt, (System_Int32_array **)v23, v25, v26, v27, v28, v29, v30);
  v31 = *p_noThinkAiEnt;
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_9299, 0LL);
  if ( !v31 )
LABEL_6:
    sub_B170D4();
  v31->fields.aiActId = Value;
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
    sub_B170D4();
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
  if ( (byte_40FCDB2 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_ContainsSelfNotNull_int___, svtData);
    byte_40FCDB2 = 1;
  }
  if ( !svtData )
    sub_B170D4();
  return !BasicHelper__ContainsSelfNotNull_int_(
            (System_Collections_Generic_HashSet_T__o *)this->fields.tempDeadSvtHash,
            svtData->fields.uniqueId,
            (const MethodInfo_18B61E4 *)Method_BasicHelper_ContainsSelfNotNull_int___);
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
  int32_t Int; // w0
  int32_t v9; // w0
  int32_t v10; // w0

  if ( (byte_40FCDB5 & 1) == 0 )
  {
    sub_B16FFC(&Method_WeightRate_int__setWeight__, weight);
    byte_40FCDB5 = 1;
  }
  if ( !servantData )
    goto LABEL_14;
  if ( BattleServantData__isUseSelfSkill(servantData, 0, 0LL) )
  {
    Int = AiAct__getInt(11, 0LL);
    if ( !weight )
      goto LABEL_14;
    WeightRate_int___setWeight(weight, weightRate, Int, (const MethodInfo_2ADC43C *)Method_WeightRate_int__setWeight__);
  }
  if ( BattleServantData__isUseSelfSkill(servantData, 1, 0LL) )
  {
    v9 = AiAct__getInt(12, 0LL);
    if ( !weight )
      goto LABEL_14;
    WeightRate_int___setWeight(weight, weightRate, v9, (const MethodInfo_2ADC43C *)Method_WeightRate_int__setWeight__);
  }
  if ( BattleServantData__isUseSelfSkill(servantData, 2, 0LL) )
  {
    v10 = AiAct__getInt(13, 0LL);
    if ( weight )
    {
      WeightRate_int___setWeight(
        weight,
        weightRate,
        v10,
        (const MethodInfo_2ADC43C *)Method_WeightRate_int__setWeight__);
      return;
    }
LABEL_14:
    sub_B170D4();
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.tempDeadSvtHash, 0LL, v5, v6, v7, v8, v9, v10);
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicEnemyAi__TaskAIAttackPrecheck(
        BattleLogicEnemyAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x21
  bool isClearTempDeadSvtPrevAct; // w23
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  CheckEnemyRelationInterruptProcess_o *v22; // x22
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_40FCDA3 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_B16FFC(&CheckEnemyRelationInterruptProcess_TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    byte_40FCDA3 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&ltype,
                                                                                                  data,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v16 = sub_B170CC(BattleLogicTask_TypeInfo, v12, v13, v14, v15);
  BattleLogicTask___ctor((BattleLogicTask_o *)v16, 0LL);
  isClearTempDeadSvtPrevAct = this->fields.isClearTempDeadSvtPrevAct;
  v22 = (CheckEnemyRelationInterruptProcess_o *)sub_B170CC(
                                                  CheckEnemyRelationInterruptProcess_TypeInfo,
                                                  v18,
                                                  v19,
                                                  v20,
                                                  v21);
  CheckEnemyRelationInterruptProcess___ctor(v22, isClearTempDeadSvtPrevAct, 0LL);
  if ( !v16
    || (*(_QWORD *)(v16 + 200) = v22,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v16 + 200),
          (System_Int32_array **)v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28),
        *(_BYTE *)(v16 + 181) = 1,
        !v11) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v11,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  this->fields.isClearTempDeadSvtPrevAct = 0;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicEnemyAi__TaskAIAttackStart(
        BattleLogicEnemyAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_HashSet_int__o *v7; // x20
  struct System_Collections_Generic_HashSet_int__o **p_tempDeadSvtHash; // x19
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FCDA2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, *(_QWORD *)&ltype);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v6);
    byte_40FCDA2 = 1;
  }
  v7 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                      System_Collections_Generic_HashSet_int__TypeInfo,
                                                      *(_QWORD *)&ltype,
                                                      data,
                                                      method,
                                                      v4);
  System_Collections_Generic_HashSet_int____ctor(
    v7,
    (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
  this->fields.tempDeadSvtHash = v7;
  p_tempDeadSvtHash = &this->fields.tempDeadSvtHash;
  sub_B16F98((BattleServantConfConponent_o *)p_tempDeadSvtHash, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
  *((_BYTE *)p_tempDeadSvtHash + 8) = 0;
  return 0LL;
}


void __fastcall BattleLogicEnemyAi__addEnemyActPriorityList(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *inSvtData,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleServantData__o *actlist; // x0

  if ( (byte_40FCDA8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__Insert__, inSvtData);
    byte_40FCDA8 = 1;
  }
  actlist = this->fields.actlist;
  if ( !actlist )
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Insert(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)actlist,
    0,
    (XWeaponTrail_Element_o *)inSvtData,
    (const MethodInfo_2F26EEC *)Method_System_Collections_Generic_List_BattleServantData__Insert__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_o *__fastcall BattleLogicEnemyAi__createCommandRandomTask(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        int32_t targetId,
        int32_t countAct,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  BattleLogicTask_o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  int32_t Type; // w23
  WeightRate_int__o *v21; // x22
  System_Int32_array *CommandList; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x8
  System_Int32_array *v26; // x23
  unsigned __int64 v27; // x24
  int32_t Next; // w0
  int32_t Data; // w0
  int32_t SvtId; // w24
  int32_t DispLimitCount; // w25
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  BattleCommandData_o *v36; // x22
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  BattleComboData_o *v41; // x20

  if ( (byte_40FCDAD & 1) == 0 )
  {
    sub_B16FFC(&BattleComboData_TypeInfo, svtData);
    sub_B16FFC(&BattleCommandData_TypeInfo, v8);
    sub_B16FFC(&BattleLogicTask_TypeInfo, v9);
    sub_B16FFC(&Method_WeightRate_int___ctor__, v10);
    sub_B16FFC(&Method_WeightRate_int__getData__, v11);
    sub_B16FFC(&Method_WeightRate_int__getTotalWeight__, v12);
    sub_B16FFC(&Method_WeightRate_int__setWeight__, v13);
    sub_B16FFC(&WeightRate_int__TypeInfo, v14);
    byte_40FCDAD = 1;
  }
  v15 = (BattleLogicTask_o *)sub_B170CC(
                               BattleLogicTask_TypeInfo,
                               svtData,
                               *(_QWORD *)&targetId,
                               *(_QWORD *)&countAct,
                               method);
  BattleLogicTask___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_17;
  BattleLogicTask__setTarget(v15, targetId, 0LL);
  if ( !svtData )
    goto LABEL_17;
  BattleLogicTask__setActor(v15, 3, svtData->fields.uniqueId, 0LL);
  if ( SvtType__IsEnemy_31552800(svtData->fields.svtType, 0LL) )
  {
    Type = 10;
    goto LABEL_15;
  }
  v21 = (WeightRate_int__o *)sub_B170CC(WeightRate_int__TypeInfo, v16, v17, v18, v19);
  WeightRate_int____ctor(v21, (const MethodInfo_2ADD274 *)Method_WeightRate_int___ctor__);
  CommandList = BattleServantData__getCommandList(svtData, 0LL);
  if ( !CommandList )
    goto LABEL_17;
  v25 = *(_QWORD *)&CommandList->max_length;
  v26 = CommandList;
  if ( (int)v25 >= 1 )
  {
    v27 = 0LL;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)v25 )
      {
        sub_B17100(CommandList, v23, v24);
        sub_B170A0();
      }
      if ( !v21 )
        break;
      WeightRate_int___setWeight(
        v21,
        10,
        v26->m_Items[v27 + 1],
        (const MethodInfo_2ADC43C *)Method_WeightRate_int__setWeight__);
      LODWORD(v25) = v26->max_length;
      if ( (__int64)++v27 >= (int)v25 )
        goto LABEL_13;
    }
LABEL_17:
    sub_B170D4();
  }
LABEL_13:
  if ( !v21 )
    goto LABEL_17;
  Next = BattleRandom__getNext(v21->fields.totalweight, 0LL);
  Data = WeightRate_int___getData(v21, Next, (const MethodInfo_2ADC8C0 *)Method_WeightRate_int__getData__);
  Type = BattleCommand__getType(Data, 0LL);
LABEL_15:
  SvtId = BattleServantData__getSvtId(svtData, 0LL);
  DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
  v36 = (BattleCommandData_o *)sub_B170CC(BattleCommandData_TypeInfo, v32, v33, v34, v35);
  BattleCommandData___ctor_18691260(v36, Type, SvtId, DispLimitCount, 0, 0LL);
  if ( !v36 )
    goto LABEL_17;
  v36->fields.uniqueId = svtData->fields.uniqueId;
  BattleCommandData__SetCriticalDecisionType(v36, 1, 0LL);
  v41 = (BattleComboData_o *)sub_B170CC(BattleComboData_TypeInfo, v37, v38, v39, v40);
  BattleComboData___ctor(v41, 0LL);
  BattleLogicTask__setActionCommand(v15, v41, v36, countAct, 0LL);
  return v15;
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
    sub_B170D4();
  return BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
}


System_Int32_array *__fastcall BattleLogicEnemyAi__get_PartySvtIds(
        BattleLogicEnemyAi_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_B170D4();
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  AiActEntity_o *AiActEntity; // x0
  int32_t type; // w20
  AiActEntity_o *v33; // x25
  BattleLogicBaseAi_o *v34; // x0
  const MethodInfo *v35; // x4
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  bool v41; // w27
  WeightRate_int__o *v42; // x24
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  int32_t Int; // w0
  int32_t v48; // w0
  int32_t v49; // w0
  int32_t v50; // w0
  int32_t v51; // w0
  int32_t v52; // w0
  int32_t v53; // w0
  int32_t v54; // w1
  BattleServantData_o *v55; // x0
  int *skillVals; // x8
  int32_t v57; // w20
  int32_t v58; // w24
  WebViewManager_o *Instance; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t Next; // w0
  int32_t Data; // w0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v63; // x24
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  __int64 v68; // x26
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **infoText; // x1
  AiState_o *v76; // x0
  bool v77; // w21
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  ServantAiActArgument_o *v82; // x20
  const MethodInfo *v83; // x4
  System_String_o *v84; // x0
  System_String_o *v85; // x0
  struct BattleLogic_o *v86; // x8
  BattlePerformance_o *perf; // x0
  System_Int32_array **ServantGameObject; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v95; // x0
  WebViewManager_o *v96; // x0
  SkillLvMaster_o *v97; // x20
  BattleSkillInfoData_o *SkillInfoDataByAiActType; // x0
  BattleSkillInfoData_o *v99; // x27
  int32_t v100; // w0
  SkillLvEntity_o *Entity; // x28
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  bool v108; // w20
  System_Int32_array *funcId; // x21
  BattleLogic_o *logic; // x20
  DataVals_array *DataValsList; // x0
  DataVals_array *v112; // x2
  BattleLogic_o *v113; // x0
  System_Int32_array *v114; // x1
  WebViewManager_o *v115; // x0
  TreasureDvcLvMaster_o *v116; // x20
  int32_t TreasureDvcId; // w0
  TreasureDvcLvEntity_o *v118; // x0
  struct BattleLogicTarget_o *logictarget; // x0
  System_Int32_array **tempDeadSvtHash; // x1
  __int64 v121; // x2
  BattleLogicTarget_o *v122; // x23
  int32_t target; // w27
  int32_t uniqueId; // w24
  System_Int32_array *targetIndividuality; // x28
  System_Int32_array *FieldPlayerServantIDList; // x21
  const MethodInfo *v127; // x2
  bool IsDeadToEnableUpHateEnemyAI; // w0
  System_Int32_array *TargetAiAct; // x0
  __int64 v130; // x1
  System_String_array **v131; // x2
  __int64 v132; // x0
  BattleLogicTarget_o *v133; // x23
  int32_t v134; // w24
  int32_t v135; // w27
  System_Int32_array *v136; // x28
  System_Int32_array *v137; // x20
  System_Int32_array *FieldEnemyServantIDList; // x0
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  struct BattleLogicTarget_o *v144; // x0
  BattleLogic_o *v145; // x0
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  int32_t v152; // w21
  BattleBuffData_o *BuffData; // x0
  BattleLogicBaseAi_o *v154; // x0
  const MethodInfo *v155; // x3
  __int64 v156; // x1
  __int64 v157; // x2
  __int64 v158; // x3
  __int64 v159; // x4
  BattleLogicTask_o *v160; // x19
  const MethodInfo_2F25CD8 *v161; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v162; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v163; // x1
  System_String_array **v164; // x2
  System_String_array **v165; // x3
  System_Boolean_array **v166; // x4
  System_Int32_array **v167; // x5
  System_Int32_array *v168; // x6
  System_Int32_array *v169; // x7
  __int64 v170; // x1
  __int64 v171; // x2
  __int64 v172; // x3
  __int64 v173; // x4
  BattleCommandData_o *v174; // x20
  int32_t TreasureDvcCardId; // w0
  __int64 v176; // x1
  __int64 v177; // x2
  __int64 v178; // x3
  __int64 v179; // x4
  BattleComboData_o *v180; // x21
  int32_t v181; // w0
  __int64 v182; // x1
  __int64 v183; // x2
  __int64 v184; // x3
  __int64 v185; // x4
  WeightRate_int__o *v186; // x20
  const MethodInfo *v187; // x2
  __int64 v188; // x8
  System_Int32_array *v189; // x21
  unsigned __int64 v190; // x22
  int32_t v191; // w0
  int32_t v192; // w0
  int32_t SvtId; // w22
  int32_t DispLimitCount; // w23
  __int64 v195; // x1
  __int64 v196; // x2
  __int64 v197; // x3
  __int64 v198; // x4
  BattleCommandData_o *v199; // x20
  __int64 v200; // x1
  __int64 v201; // x2
  __int64 v202; // x3
  __int64 v203; // x4
  BattleComboData_o *v204; // x19
  BattleSkillInfoData_o *skillInfo; // [xsp+18h] [xbp-98h]
  bool IsEnableTarget; // [xsp+24h] [xbp-8Ch]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v207; // [xsp+28h] [xbp-88h]
  int32_t v208; // [xsp+34h] [xbp-7Ch]
  System_Int32_array *targetlist; // [xsp+38h] [xbp-78h]
  int32_t v210; // [xsp+44h] [xbp-6Ch]
  BattleLogicEnemyAi_o *v211; // [xsp+48h] [xbp-68h]
  int32_t ActionValue; // [xsp+54h] [xbp-5Ch] BYREF
  int32_t aiActType; // [xsp+58h] [xbp-58h] BYREF
  bool noMessage; // [xsp+5Ch] [xbp-54h] BYREF

  if ( (byte_40FCDA9 & 1) == 0 )
  {
    sub_B16FFC(&BattleComboData_TypeInfo, svtData);
    sub_B16FFC(&BattleCommandData_TypeInfo, v13);
    sub_B16FFC(&BattleLogicTask_TypeInfo, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_SkillLvMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v16);
    sub_B16FFC(&int___TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v20);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v21);
    sub_B16FFC(&ServantAiActArgument_TypeInfo, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B16FFC(&Method_WeightRate_int___ctor__, v24);
    sub_B16FFC(&Method_WeightRate_int__getCount__, v25);
    sub_B16FFC(&Method_WeightRate_int__getData__, v26);
    sub_B16FFC(&Method_WeightRate_int__getTotalWeight__, v27);
    sub_B16FFC(&Method_WeightRate_int__setWeight__, v28);
    sub_B16FFC(&WeightRate_int__TypeInfo, v29);
    sub_B16FFC(&StringLiteral_8758, v30);
    byte_40FCDA9 = 1;
  }
  ActionValue = 0;
  aiActType = 0;
  noMessage = 0;
  if ( !aiEnt )
    goto LABEL_150;
  AiActEntity = BattleLogicBaseAi__GetAiActEntity(
                  (BattleLogicBaseAi_o *)this,
                  aiEnt->fields.aiActId,
                  (const MethodInfo *)aiEnt);
  aiActType = 0;
  if ( !AiActEntity )
    goto LABEL_150;
  type = AiActEntity->fields.type;
  v33 = AiActEntity;
  aiActType = type;
  if ( !svtData )
    goto LABEL_150;
  v34 = (BattleLogicBaseAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._18_getAiState.method)(
                                 svtData,
                                 svtData->klass->vtable._19_ExistAiThinking.methodPtr);
  if ( BattleLogicBaseAi__IsChangeThinkingOnly(v34, type, (AiBaseEntity_o *)aiEnt, (AiState_o *)v34, v35) )
    return this->fields.emptyTask;
  v41 = procState != 1 || BattleServantData__canUseSkill(svtData, -1, 0LL);
  v42 = (WeightRate_int__o *)sub_B170CC(WeightRate_int__TypeInfo, v36, v37, v38, v39);
  WeightRate_int____ctor(v42, (const MethodInfo_2ADD274 *)Method_WeightRate_int___ctor__);
  if ( aiInfo && AiLogic_AiInfo__IsChecked(aiInfo, (AiBaseEntity_o *)aiEnt, 0LL) )
  {
    AiLogic_AiInfo__GetCheckedResult(aiInfo, svtData, (AiBaseEntity_o *)aiEnt, &aiActType, &noMessage, 0LL);
    goto LABEL_62;
  }
  switch ( type )
  {
    case 10:
      if ( !v41 )
        goto LABEL_58;
      if ( !BattleServantData__isUseSelfSkill(svtData, 0, 0LL) )
        goto LABEL_19;
      Int = AiAct__getInt(11, 0LL);
      if ( !v42 )
        goto LABEL_150;
      WeightRate_int___setWeight(v42, 10, Int, (const MethodInfo_2ADC43C *)Method_WeightRate_int__setWeight__);
LABEL_19:
      if ( !BattleServantData__isUseSelfSkill(svtData, 1, 0LL) )
        goto LABEL_22;
      v48 = AiAct__getInt(12, 0LL);
      if ( !v42 )
        goto LABEL_150;
      WeightRate_int___setWeight(v42, 10, v48, (const MethodInfo_2ADC43C *)Method_WeightRate_int__setWeight__);
LABEL_22:
      if ( BattleServantData__isUseSelfSkill(svtData, 2, 0LL) )
      {
        v49 = AiAct__getInt(13, 0LL);
        if ( !v42 )
          goto LABEL_150;
        WeightRate_int___setWeight(v42, 10, v49, (const MethodInfo_2ADC43C *)Method_WeightRate_int__setWeight__);
      }
      else
      {
LABEL_58:
        if ( !v42 )
          goto LABEL_150;
      }
      if ( WeightRate_int___getCount(v42, (const MethodInfo_2ADC7DC *)Method_WeightRate_int__getCount__) >= 1 )
        goto LABEL_60;
      goto LABEL_61;
    case 11:
      if ( !v41 )
      {
        aiActType = 2;
        noMessage = 1;
      }
      v55 = svtData;
      v54 = 0;
      goto LABEL_56;
    case 12:
      if ( !v41 )
      {
        aiActType = 2;
        noMessage = 1;
      }
      v54 = 1;
      v55 = svtData;
LABEL_56:
      if ( !BattleServantData__isUseSelfSkill(v55, v54, 0LL) )
        aiActType = 2;
      goto LABEL_62;
    case 13:
      if ( !v41 )
      {
        aiActType = 2;
        noMessage = 1;
      }
      if ( !BattleServantData__isUseSelfSkill(svtData, 2, 0LL) )
        aiActType = 2;
      goto LABEL_62;
    default:
      if ( type == 80 )
      {
        if ( BattleServantData__isNobleAction(svtData, 0LL)
          && TreasureDeviceConditionUtil__IsSatisfyEachCondition(svtData, this->fields.data, 0LL) )
        {
          goto LABEL_62;
        }
        goto LABEL_61;
      }
      if ( type != 1 )
      {
        if ( (type & 0xFFFFFFFE) != 40 )
          goto LABEL_62;
        skillVals = (int *)v33->fields.skillVals;
        if ( !skillVals )
          goto LABEL_150;
        if ( skillVals[6] <= 1 )
        {
LABEL_130:
          aiActType = 0;
          goto LABEL_62;
        }
        if ( v41 || type != 41 )
        {
          v57 = skillVals[8];
          v58 = skillVals[9];
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_150;
          MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_150;
          if ( SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, v57, v58, 0LL) )
          {
            BattleServantData__addSkillInfo(svtData, 20, 0, v57, v58, -1LL, -1, 0LL, 0LL);
            goto LABEL_62;
          }
          goto LABEL_130;
        }
LABEL_61:
        aiActType = 2;
        noMessage = 1;
        goto LABEL_62;
      }
      v50 = AiAct__getInt(2, 0LL);
      if ( !v42 )
        goto LABEL_150;
      WeightRate_int___setWeight(v42, 10, v50, (const MethodInfo_2ADC43C *)Method_WeightRate_int__setWeight__);
      if ( v41 )
      {
        if ( BattleServantData__isUseSelfSkill(svtData, 0, 0LL) )
        {
          v51 = AiAct__getInt(11, 0LL);
          WeightRate_int___setWeight(v42, 10, v51, (const MethodInfo_2ADC43C *)Method_WeightRate_int__setWeight__);
        }
        if ( BattleServantData__isUseSelfSkill(svtData, 1, 0LL) )
        {
          v52 = AiAct__getInt(12, 0LL);
          WeightRate_int___setWeight(v42, 10, v52, (const MethodInfo_2ADC43C *)Method_WeightRate_int__setWeight__);
        }
        if ( BattleServantData__isUseSelfSkill(svtData, 2, 0LL) )
        {
          v53 = AiAct__getInt(13, 0LL);
          WeightRate_int___setWeight(v42, 10, v53, (const MethodInfo_2ADC43C *)Method_WeightRate_int__setWeight__);
        }
      }
LABEL_60:
      Next = BattleRandom__getNext(v42->fields.totalweight, 0LL);
      Data = WeightRate_int___getData(v42, Next, (const MethodInfo_2ADC8C0 *)Method_WeightRate_int__getData__);
      aiActType = AiAct__getType(Data, 0LL);
LABEL_62:
      v63 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_BattleLogicTask__TypeInfo, v43, v44, v45, v46);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v63,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      v68 = sub_B170CC(BattleLogicTask_TypeInfo, v64, v65, v66, v67);
      BattleLogicTask___ctor((BattleLogicTask_o *)v68, 0LL);
      if ( noMessage )
      {
        if ( !v68 )
          goto LABEL_150;
      }
      else
      {
        if ( !v68 )
          goto LABEL_150;
        infoText = (System_Int32_array **)aiEnt->fields.infoText;
        *(_QWORD *)(v68 + 152) = infoText;
        sub_B16F98((BattleServantConfConponent_o *)(v68 + 152), infoText, v69, v70, v71, v72, v73, v74);
      }
      BattleLogicTask__setActor((BattleLogicTask_o *)v68, 3, svtData->fields.uniqueId, 0LL);
      if ( AiBaseEntity__IsForcedActionSpeedAnyTime((AiBaseEntity_o *)aiEnt, 0LL) )
        *(_BYTE *)(v68 + 160) = 1;
      v210 = procState;
      v76 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._18_getAiState.method)(
                           svtData,
                           svtData->klass->vtable._19_ExistAiThinking.methodPtr);
      if ( !v76 )
        goto LABEL_150;
      AiState__setBeforeAction(v76, aiActType, aiEnt->fields.aiActId, 0LL);
      v77 = noMessage;
      v82 = (ServantAiActArgument_o *)sub_B170CC(ServantAiActArgument_TypeInfo, v78, v79, v80, v81);
      ServantAiActArgument___ctor(v82, v33, (AiBaseEntity_o *)aiEnt, svtData, v77, 0LL);
      if ( aiActType != 71 )
      {
        if ( BattleLogicBaseAi__SetNoTargetAiActTask(
               (BattleLogicBaseAi_o *)this,
               (System_Collections_Generic_List_BattleLogicTask__o *)v63,
               aiActType,
               (BaseAiActArgument_o *)v82,
               v83) )
        {
LABEL_77:
          if ( !v63 )
            goto LABEL_150;
          goto LABEL_78;
        }
        v96 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v96 )
          goto LABEL_150;
        v97 = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v96,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SkillLvMaster___);
        SkillInfoDataByAiActType = BattleServantData__getSkillInfoDataByAiActType(svtData, aiActType, 0LL);
        v99 = SkillInfoDataByAiActType;
        v211 = this;
        v208 = countAct;
        if ( SkillInfoDataByAiActType )
        {
          v100 = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))SkillInfoDataByAiActType->klass->vtable._5_get_skillId.method)(
                   SkillInfoDataByAiActType,
                   SkillInfoDataByAiActType->klass->vtable._6_get_IndividualityArray.methodPtr);
          if ( !v97 )
            goto LABEL_150;
          Entity = SkillLvMaster__GetEntity(v97, v100, v99->fields.skilllv, 0LL);
        }
        else
        {
          Entity = 0LL;
        }
        if ( AiAct__isSkillType(aiActType, 0LL) )
        {
          v108 = 1;
          if ( !Entity || !v99 )
            goto LABEL_97;
          funcId = Entity->fields.funcId;
          logic = v211->fields.logic;
          DataValsList = SkillLvEntity__getDataValsList(Entity, 0LL);
          if ( !logic )
            goto LABEL_150;
          v112 = DataValsList;
          v113 = logic;
          v114 = funcId;
        }
        else
        {
          if ( aiActType != 80 )
            goto LABEL_96;
          v115 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !v115 )
            goto LABEL_150;
          v116 = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)v115,
                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
          TreasureDvcId = BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
          if ( !v116 )
            goto LABEL_150;
          v118 = TreasureDvcLvMaster__GetEntity(v116, TreasureDvcId, svtData->fields.treasuredvcLevel, 0LL);
          if ( !v118 )
          {
LABEL_96:
            v108 = 1;
            goto LABEL_97;
          }
          if ( !v211->fields.logic )
            goto LABEL_150;
          v114 = v118->fields.funcId;
          v113 = v211->fields.logic;
          v112 = 0LL;
        }
        v108 = BattleLogic__checkEnemyTargetFunction(v113, v114, v112, 0LL);
LABEL_97:
        logictarget = v211->fields.logictarget;
        if ( !logictarget )
          goto LABEL_150;
        tempDeadSvtHash = (System_Int32_array **)v211->fields.tempDeadSvtHash;
        logictarget->fields.tempDeadSvtHash = (struct System_Collections_Generic_HashSet_int__o *)tempDeadSvtHash;
        sub_B16F98(
          (BattleServantConfConponent_o *)&logictarget->fields.tempDeadSvtHash,
          tempDeadSvtHash,
          v102,
          v103,
          v104,
          v105,
          v106,
          v107);
        if ( Entity && v99 )
          IsEnableTarget = SkillLvEntity__IsEnableTarget(Entity, v108, 0LL);
        else
          IsEnableTarget = v108;
        skillInfo = v99;
        v207 = v63;
        targetlist = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v121);
        if ( !v211->fields.data )
          goto LABEL_150;
        v122 = v211->fields.logictarget;
        target = v33->fields.target;
        uniqueId = svtData->fields.uniqueId;
        targetIndividuality = v33->fields.targetIndividuality;
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v211->fields.data, 0LL, 0LL);
        IsDeadToEnableUpHateEnemyAI = BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(v211, aiEnt, v127);
        if ( !v122 )
          goto LABEL_150;
        TargetAiAct = (System_Int32_array *)BattleLogicTarget__getTargetAiAct(
                                              v122,
                                              target,
                                              uniqueId,
                                              targetIndividuality,
                                              FieldPlayerServantIDList,
                                              IsEnableTarget,
                                              0,
                                              0LL,
                                              v33,
                                              IsDeadToEnableUpHateEnemyAI,
                                              0LL);
        if ( !targetlist )
          goto LABEL_150;
        if ( targetlist->max_length )
        {
          targetlist->m_Items[1] = (int)TargetAiAct;
          v132 = sub_B17014(int___TypeInfo, 1LL, v131);
          if ( !v211->fields.data )
            goto LABEL_150;
          v133 = v211->fields.logictarget;
          v134 = v33->fields.target;
          v135 = svtData->fields.uniqueId;
          v136 = v33->fields.targetIndividuality;
          v137 = (System_Int32_array *)v132;
          FieldEnemyServantIDList = BattleData__getFieldEnemyServantIDList(v211->fields.data, 0, 0LL);
          if ( !v133 )
            goto LABEL_150;
          TargetAiAct = (System_Int32_array *)BattleLogicTarget__getTargetAiAct(
                                                v133,
                                                v134,
                                                v135,
                                                v136,
                                                FieldEnemyServantIDList,
                                                0,
                                                0,
                                                0LL,
                                                v33,
                                                1,
                                                0LL);
          if ( !v137 )
            goto LABEL_150;
          if ( v137->max_length )
          {
            v137->m_Items[1] = (int)TargetAiAct;
            v144 = v211->fields.logictarget;
            if ( !v144 )
              goto LABEL_150;
            v144->fields.tempDeadSvtHash = 0LL;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v144->fields.tempDeadSvtHash,
              0LL,
              v131,
              v139,
              v140,
              v141,
              v142,
              v143);
            v145 = v211->fields.logic;
            if ( !v145 )
              goto LABEL_150;
            *(_BYTE *)(v68 + 168) = (v210 == 1) & (BattleLogic__GetLogicType(v145, 0LL) == 42);
            if ( !AiAct__isAttackType(aiActType, 0LL) )
            {
              if ( AiAct__isSkillType(aiActType, 0LL) )
              {
                BuffData = BattleServantData__get_BuffData(svtData, 0LL);
                if ( !BuffData )
                  goto LABEL_150;
                BattleBuffData__UpdateSkillRelationBuff(BuffData, 0LL);
                if ( skillInfo )
                {
                  BattleLogicBaseAi__SetSkillSelectAddIndex(v154, skillInfo, (AiBaseEntity_o *)aiEnt, v155);
                  BattleLogicTask__setActionSkill((BattleLogicTask_o *)v68, skillInfo, targetlist, v137, 0, 0, 0LL);
                  BattleLogicTask__setActor((BattleLogicTask_o *)v68, 3, svtData->fields.uniqueId, 0LL);
                  if ( !v207 )
                    goto LABEL_150;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v207,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v68,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                  v160 = (BattleLogicTask_o *)sub_B170CC(BattleLogicTask_TypeInfo, v156, v157, v158, v159);
                  BattleLogicTask___ctor(v160, 0LL);
                  v161 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                  v162 = v207;
                  v163 = (EventMissionProgressRequest_Argument_ProgressData_o *)v160;
                  goto LABEL_147;
                }
              }
              else if ( aiActType == 80 )
              {
                BattleLogicTask__setActor((BattleLogicTask_o *)v68, 3, svtData->fields.uniqueId, 0LL);
                *(_QWORD *)(v68 + 32) = targetlist;
                sub_B16F98(
                  (BattleServantConfConponent_o *)(v68 + 32),
                  (System_Int32_array **)targetlist,
                  v164,
                  v165,
                  v166,
                  v167,
                  v168,
                  v169);
                v174 = (BattleCommandData_o *)sub_B170CC(BattleCommandData_TypeInfo, v170, v171, v172, v173);
                BattleCommandData___ctor(v174, 0LL);
                TreasureDvcCardId = BattleServantData__getTreasureDvcCardId(svtData, 0LL);
                if ( v174 )
                {
                  v174->fields._type = TreasureDvcCardId;
                  v174->fields.svtlimit = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
                  v174->fields.uniqueId = svtData->fields.uniqueId;
                  v174->fields.svtId = BattleServantData__getSvtId(svtData, 0LL);
                  v174->fields.treasureDvc = BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
                  v180 = (BattleComboData_o *)sub_B170CC(BattleComboData_TypeInfo, v176, v177, v178, v179);
                  BattleComboData___ctor(v180, 0LL);
                  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v68, v180, v174, v208, 0LL);
                  v181 = BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
                  BattleLogicTask__setActionTreasureDvc((BattleLogicTask_o *)v68, v181, 1, 0LL);
                  if ( v207 )
                  {
LABEL_146:
                    v162 = v207;
                    v163 = (EventMissionProgressRequest_Argument_ProgressData_o *)v68;
                    v161 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__;
LABEL_147:
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v162,
                      v163,
                      v161);
                    goto LABEL_148;
                  }
                }
LABEL_150:
                sub_B170D4();
              }
              if ( !v207 )
                goto LABEL_150;
LABEL_148:
              v95 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v207;
              return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                v95,
                                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
            }
            *(_QWORD *)(v68 + 32) = targetlist;
            sub_B16F98(
              (BattleServantConfConponent_o *)(v68 + 32),
              (System_Int32_array **)targetlist,
              v146,
              v147,
              v148,
              v149,
              v150,
              v151);
            if ( SvtType__IsEnemy_31552800(svtData->fields.svtType, 0LL) )
            {
              v152 = 10;
              goto LABEL_141;
            }
            if ( AiAct__isAttackArts(aiActType, 0LL) )
            {
              v152 = 1;
              goto LABEL_141;
            }
            if ( AiAct__isAttackBuster(aiActType, 0LL) )
            {
              v152 = 2;
              goto LABEL_141;
            }
            if ( AiAct__isAttackQuick(aiActType, 0LL) )
            {
              v152 = 3;
              goto LABEL_141;
            }
            v186 = (WeightRate_int__o *)sub_B170CC(WeightRate_int__TypeInfo, v182, v183, v184, v185);
            WeightRate_int____ctor(v186, (const MethodInfo_2ADD274 *)Method_WeightRate_int___ctor__);
            TargetAiAct = BattleLogicEnemyAi__GetCommandArray(v211, svtData, v187);
            if ( !TargetAiAct )
              goto LABEL_150;
            v188 = *(_QWORD *)&TargetAiAct->max_length;
            v189 = TargetAiAct;
            if ( (int)v188 < 1 )
            {
LABEL_139:
              if ( !v186 )
                goto LABEL_150;
              v191 = BattleRandom__getNext(v186->fields.totalweight, 0LL);
              v192 = WeightRate_int___getData(v186, v191, (const MethodInfo_2ADC8C0 *)Method_WeightRate_int__getData__);
              v152 = BattleCommand__getType(v192, 0LL);
LABEL_141:
              SvtId = BattleServantData__getSvtId(svtData, 0LL);
              DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
              v199 = (BattleCommandData_o *)sub_B170CC(BattleCommandData_TypeInfo, v195, v196, v197, v198);
              BattleCommandData___ctor_18691260(v199, v152, SvtId, DispLimitCount, 0, 0LL);
              if ( v199 )
              {
                v199->fields.uniqueId = svtData->fields.uniqueId;
                if ( AiAct__isAttackCritical(aiActType, 0LL) )
                {
                  BattleCommandData__SetCriticalDecisionType(v199, 2, 0LL);
                  aiActType = 2;
                }
                else
                {
                  BattleCommandData__SetCriticalDecisionType(v199, 1, 0LL);
                }
                v204 = (BattleComboData_o *)sub_B170CC(BattleComboData_TypeInfo, v200, v201, v202, v203);
                BattleComboData___ctor(v204, 0LL);
                BattleLogicTask__setActionCommand((BattleLogicTask_o *)v68, v204, v199, v208, 0LL);
                if ( v207 )
                  goto LABEL_146;
              }
              goto LABEL_150;
            }
            v190 = 0LL;
            while ( v190 < (unsigned int)v188 )
            {
              if ( !v186 )
                goto LABEL_150;
              WeightRate_int___setWeight(
                v186,
                10,
                v189->m_Items[v190 + 1],
                (const MethodInfo_2ADC43C *)Method_WeightRate_int__setWeight__);
              LODWORD(v188) = v189->max_length;
              if ( (__int64)++v190 >= (int)v188 )
                goto LABEL_139;
            }
          }
        }
        sub_B17100(TargetAiAct, v130, v131);
        sub_B170A0();
      }
      ActionValue = AiBaseEntity__getActionValue((AiBaseEntity_o *)aiEnt, 0LL);
      if ( ActionValue < 1 )
        goto LABEL_77;
      v84 = System_Int32__ToString((int32_t)&ActionValue, 0LL);
      v85 = System_String__Concat_43743732((System_String_o *)StringLiteral_8758, v84, 0LL);
      BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v68, v85, 0LL);
      v86 = this->fields.logic;
      if ( !v86 )
        goto LABEL_150;
      perf = v86->fields.perf;
      if ( !perf )
        goto LABEL_150;
      ServantGameObject = (System_Int32_array **)BattlePerformance__getServantGameObject(
                                                   perf,
                                                   svtData->fields.uniqueId,
                                                   0LL);
      *(_QWORD *)(v68 + 112) = ServantGameObject;
      sub_B16F98((BattleServantConfConponent_o *)(v68 + 112), ServantGameObject, v89, v90, v91, v92, v93, v94);
      BattleLogicTask__setActor((BattleLogicTask_o *)v68, 3, svtData->fields.uniqueId, 0LL);
      if ( !v63 )
        goto LABEL_150;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v63,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v68,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
LABEL_78:
      v95 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v63;
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        v95,
                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
  }
}


void __fastcall BattleLogicEnemyAi__resetAct(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleServantData__o *actlist; // x0
  struct BattleData_o *data; // x8
  BattleData_o *v5; // x0
  BattleServantData_array *FieldEnemyServantList; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int max_length; // w8
  BattleServantData_array *v10; // x19
  unsigned int v11; // w20
  BattleServantData_o *v12; // x0

  if ( (byte_40FCDA6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__Clear__, method);
    byte_40FCDA6 = 1;
  }
  actlist = this->fields.actlist;
  if ( !actlist )
    goto LABEL_13;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)actlist,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_BattleServantData__Clear__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  data->fields.countEnemyAttack = 0;
  v5 = this->fields.data;
  if ( !v5 )
    goto LABEL_13;
  FieldEnemyServantList = BattleData__getFieldEnemyServantList(v5, 0, 0LL);
  if ( !FieldEnemyServantList )
    goto LABEL_13;
  max_length = FieldEnemyServantList->max_length;
  v10 = FieldEnemyServantList;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
      {
        sub_B17100(FieldEnemyServantList, v7, v8);
        sub_B170A0();
      }
      v12 = v10->m_Items[v11];
      if ( !v12 )
        break;
      BattleServantData__resetActionCount(v12, 0LL);
      max_length = v10->max_length;
      if ( (int)++v11 >= max_length )
        return;
    }
LABEL_13:
    sub_B170D4();
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
  __int64 v6; // x1
  int32_t v7; // w1
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_BattleLogicTask__o *TaskAIAttack; // x0
  const MethodInfo *v10; // x1
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v11; // x20

  if ( (byte_40FCDA4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, *(_QWORD *)&ltype);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v6);
    byte_40FCDA4 = 1;
  }
  BattleLogicEnemyAi__ExcludeDeadFromTempDead(this, *(const MethodInfo **)&ltype);
  TaskAIAttack = BattleLogicEnemyAi__CreateTaskAIAttack(this, v7, data, v8);
  if ( !TaskAIAttack )
    sub_B170D4();
  v11 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)TaskAIAttack;
  if ( TaskAIAttack->fields._size >= 1 )
    BattleLogicEnemyAi__ClearTempDeadSvt(this, v10);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    v11,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicEnemyAi__taskAIDead(
        BattleLogicEnemyAi_o *this,
        int32_t actUniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v15; // x21
  BattleData_o *v16; // x0
  WebViewManager_o *Instance; // x0
  struct AiActMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct BattleData_o *v25; // x8
  AiLogic_o *aiLogic; // x0
  AiEntity_o *Action; // x0
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FCDAA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_AiActMaster___, *(_QWORD *)&actUniqueId);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40FCDAA = 1;
  }
  info = 0LL;
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&actUniqueId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  ServantData = BattleData__getServantData(data, actUniqueId, 0LL);
  if ( !ServantData )
    goto LABEL_16;
  v15 = ServantData;
  if ( BattleServantData__isAlive(ServantData, 0, 0LL) )
    goto LABEL_14;
  v16 = this->fields.data;
  if ( !v16 )
    goto LABEL_16;
  if ( !BattleData__checkAlivePlayers(v16, 0LL) )
    goto LABEL_14;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (struct AiActMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = MasterData_WarQuestSelectionMaster;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.aiActMst,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = this->fields.data;
  if ( !v25 )
    goto LABEL_16;
  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    goto LABEL_16;
  Action = AiLogic__getAction(aiLogic, v15, 2, v25->fields.turnCount, 0, (BattleLogicBaseAi_o *)this, &info, 0, 0LL);
  if ( !Action )
  {
LABEL_14:
    if ( v12 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_16:
    sub_B170D4();
  }
  v28 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, AiEntity_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._18_procAiAct.method)(
                                                         this,
                                                         v15,
                                                         Action,
                                                         0LL,
                                                         info,
                                                         0LL,
                                                         this->klass->vtable._19_ExistThinking.methodPtr);
  if ( !v12 )
    goto LABEL_16;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v12,
    v28,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicEnemyAi__taskAIEnemyMaxNp(
        BattleLogicEnemyAi_o *this,
        int32_t actUniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v15; // x21
  BattleData_o *v16; // x0
  WebViewManager_o *Instance; // x0
  struct AiActMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct BattleData_o *v25; // x8
  AiLogic_o *aiLogic; // x0
  AiEntity_o *Action; // x0
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FCDAB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_AiActMaster___, *(_QWORD *)&actUniqueId);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40FCDAB = 1;
  }
  info = 0LL;
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&actUniqueId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  ServantData = BattleData__getServantData(data, actUniqueId, 0LL);
  if ( !ServantData )
    goto LABEL_16;
  v15 = ServantData;
  if ( !BattleServantData__isAlive(ServantData, 0, 0LL) )
    goto LABEL_14;
  v16 = this->fields.data;
  if ( !v16 )
    goto LABEL_16;
  if ( !BattleData__checkAlivePlayers(v16, 0LL) )
    goto LABEL_14;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (struct AiActMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = MasterData_WarQuestSelectionMaster;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.aiActMst,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = this->fields.data;
  if ( !v25 )
    goto LABEL_16;
  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    goto LABEL_16;
  Action = AiLogic__getAction(aiLogic, v15, 7, v25->fields.turnCount, 0, (BattleLogicBaseAi_o *)this, &info, 0, 0LL);
  if ( !Action )
  {
LABEL_14:
    if ( v12 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_16:
    sub_B170D4();
  }
  v28 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, AiEntity_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._18_procAiAct.method)(
                                                         this,
                                                         v15,
                                                         Action,
                                                         0LL,
                                                         info,
                                                         0LL,
                                                         this->klass->vtable._19_ExistThinking.methodPtr);
  if ( !v12 )
    goto LABEL_16;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v12,
    v28,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicEnemyAi__updateActPriorityList(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  struct System_Collections_Generic_List_BattleServantData__o *actlist; // x8
  BattleServantConfConponent_o *p_actlist; // x19
  BattleData_o *data; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Collections_Generic_IEnumerable_TSource__o *FieldEnemyServantList; // x21
  BattleLogicEnemyAi___c_c *v31; // x8
  struct BattleLogicEnemyAi___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__22_0; // x22
  Il2CppObject *v34; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  BattleLogicEnemyAi___c_c *v47; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x21
  struct BattleLogicEnemyAi___c_StaticFields *v49; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__22_1; // x22
  Il2CppObject *v51; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  BattleLogicEnemyAi___c_c *v64; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v65; // x21
  struct BattleLogicEnemyAi___c_StaticFields *v66; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__22_2; // x22
  Il2CppObject *v68; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v76; // x0
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  BattleLogicEnemyAi___c_c *v81; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v82; // x21
  struct BattleLogicEnemyAi___c_StaticFields *v83; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__22_3; // x22
  Il2CppObject *v85; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v86; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v93; // x0
  System_Int32_array **v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  struct BattleData_o *v101; // x8
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *klass; // x20
  BattleLogicEnemyAi___c_c *v103; // x0
  struct BattleLogicEnemyAi___c_StaticFields *v104; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__22_4; // x21
  Il2CppObject *v106; // x22
  struct BattleLogicEnemyAi___c_StaticFields *v107; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_Int32_array **All; // x0
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7

  if ( (byte_40FCDA7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderByDescending_BattleServantData__int___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_BattleServantData___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleServantData___, v8);
    sub_B16FFC(&Method_System_Func_BattleServantData__bool___ctor__, v9);
    sub_B16FFC(&Method_System_Func_BattleServantData__int___ctor__, v10);
    sub_B16FFC(&System_Func_BattleServantData__bool__TypeInfo, v11);
    sub_B16FFC(&System_Func_BattleServantData__int__TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__FindAll__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v14);
    sub_B16FFC(&Method_System_Predicate_BattleServantData___ctor__, v15);
    sub_B16FFC(&System_Predicate_BattleServantData__TypeInfo, v16);
    sub_B16FFC(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__22_0__, v17);
    sub_B16FFC(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__22_1__, v18);
    sub_B16FFC(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__22_2__, v19);
    sub_B16FFC(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__22_3__, v20);
    sub_B16FFC(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__22_4__, v21);
    sub_B16FFC(&BattleLogicEnemyAi___c_TypeInfo, v22);
    byte_40FCDA7 = 1;
  }
  p_actlist = (BattleServantConfConponent_o *)&this->fields.actlist;
  actlist = this->fields.actlist;
  if ( !actlist )
    goto LABEL_51;
  if ( actlist->fields._size <= 0 )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_51;
    FieldEnemyServantList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldEnemyServantList(
                                                                                   data,
                                                                                   1,
                                                                                   0LL);
    v31 = BattleLogicEnemyAi___c_TypeInfo;
    if ( (BYTE3(BattleLogicEnemyAi___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v31 = BattleLogicEnemyAi___c_TypeInfo;
    }
    static_fields = v31->static_fields;
    _9__22_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__22_0;
    if ( !_9__22_0 )
    {
      if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        static_fields = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      }
      v34 = (Il2CppObject *)static_fields->__9;
      _9__22_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                      System_Func_BattleServantData__bool__TypeInfo,
                                                                                      v26,
                                                                                      v27,
                                                                                      v28,
                                                                                      v29);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__22_0,
        v34,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__22_0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_BattleServantData__bool___ctor__);
      v35 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v35->__9__22_0 = (struct System_Func_BattleServantData__bool__o *)_9__22_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v35->__9__22_0,
        (System_Int32_array **)_9__22_0,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    v42 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            FieldEnemyServantList,
            (System_Func_TSource__bool__o *)_9__22_0,
            (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
    v47 = BattleLogicEnemyAi___c_TypeInfo;
    v48 = v42;
    if ( (BYTE3(BattleLogicEnemyAi___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v47 = BattleLogicEnemyAi___c_TypeInfo;
    }
    v49 = v47->static_fields;
    _9__22_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v49->__9__22_1;
    if ( !_9__22_1 )
    {
      if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v47);
        v49 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      }
      v51 = (Il2CppObject *)v49->__9;
      _9__22_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                   System_Func_BattleServantData__int__TypeInfo,
                                                                                   v43,
                                                                                   v44,
                                                                                   v45,
                                                                                   v46);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__22_1,
        v51,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__22_1__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_BattleServantData__int___ctor__);
      v52 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v52->__9__22_1 = (struct System_Func_BattleServantData__int__o *)_9__22_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v52->__9__22_1,
        (System_Int32_array **)_9__22_1,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
    }
    v59 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
            v48,
            (System_Func_TSource__TKey__o *)_9__22_1,
            (const MethodInfo_19BDA8C *)Method_System_Linq_Enumerable_OrderByDescending_BattleServantData__int___);
    v64 = BattleLogicEnemyAi___c_TypeInfo;
    v65 = v59;
    if ( (BYTE3(BattleLogicEnemyAi___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v64 = BattleLogicEnemyAi___c_TypeInfo;
    }
    v66 = v64->static_fields;
    _9__22_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v66->__9__22_2;
    if ( !_9__22_2 )
    {
      if ( (BYTE3(v64->vtable._0_Equals.methodPtr) & 4) != 0 && !v64->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v64);
        v66 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      }
      v68 = (Il2CppObject *)v66->__9;
      _9__22_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                   System_Func_BattleServantData__int__TypeInfo,
                                                                                   v60,
                                                                                   v61,
                                                                                   v62,
                                                                                   v63);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__22_2,
        v68,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__22_2__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_BattleServantData__int___ctor__);
      v69 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v69->__9__22_2 = (struct System_Func_BattleServantData__int__o *)_9__22_2;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v69->__9__22_2,
        (System_Int32_array **)_9__22_2,
        v70,
        v71,
        v72,
        v73,
        v74,
        v75);
    }
    v76 = System_Linq_Enumerable__ThenByDescending_WarBoardManager_TaskList__int_(
            v65,
            (System_Func_TSource__TKey__o *)_9__22_2,
            (const MethodInfo_19C46C4 *)Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
    v81 = BattleLogicEnemyAi___c_TypeInfo;
    v82 = v76;
    if ( (BYTE3(BattleLogicEnemyAi___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v81 = BattleLogicEnemyAi___c_TypeInfo;
    }
    v83 = v81->static_fields;
    _9__22_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v83->__9__22_3;
    if ( !_9__22_3 )
    {
      if ( (BYTE3(v81->vtable._0_Equals.methodPtr) & 4) != 0 && !v81->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v81);
        v83 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      }
      v85 = (Il2CppObject *)v83->__9;
      _9__22_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                   System_Func_BattleServantData__int__TypeInfo,
                                                                                   v77,
                                                                                   v78,
                                                                                   v79,
                                                                                   v80);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__22_3,
        v85,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__22_3__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_BattleServantData__int___ctor__);
      v86 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v86->__9__22_3 = (struct System_Func_BattleServantData__int__o *)_9__22_3;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v86->__9__22_3,
        (System_Int32_array **)_9__22_3,
        v87,
        v88,
        v89,
        v90,
        v91,
        v92);
    }
    v93 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_WarBoardManager_TaskList__int_(
                                                                 v82,
                                                                 (System_Func_TSource__TKey__o *)_9__22_3,
                                                                 (const MethodInfo_19C46C4 *)Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
    v94 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                   v93,
                                   (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_BattleServantData___);
    p_actlist->klass = (BattleServantConfConponent_c *)v94;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.actlist, v94, v95, v96, v97, v98, v99, v100);
  }
  v101 = this->fields.data;
  if ( !v101 )
    goto LABEL_51;
  if ( v101->fields.enemyActCount > v101->fields.countEnemyAttack )
    return;
  klass = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)p_actlist->klass;
  v103 = BattleLogicEnemyAi___c_TypeInfo;
  if ( (BYTE3(BattleLogicEnemyAi___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
    v103 = BattleLogicEnemyAi___c_TypeInfo;
  }
  v104 = v103->static_fields;
  _9__22_4 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)v104->__9__22_4;
  if ( !_9__22_4 )
  {
    if ( (BYTE3(v103->vtable._0_Equals.methodPtr) & 4) != 0 && !v103->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v103);
      v104 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    }
    v106 = (Il2CppObject *)v104->__9;
    _9__22_4 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_BattleServantData__TypeInfo,
                                                                          method,
                                                                          v2,
                                                                          v3,
                                                                          v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__22_4,
      v106,
      Method_BattleLogicEnemyAi___c__updateActPriorityList_b__22_4__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_BattleServantData___ctor__);
    v107 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    v107->__9__22_4 = (struct System_Predicate_BattleServantData__o *)_9__22_4;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v107->__9__22_4,
      (System_Int32_array **)_9__22_4,
      v108,
      v109,
      v110,
      v111,
      v112,
      v113);
  }
  if ( !klass )
LABEL_51:
    sub_B170D4();
  All = (System_Int32_array **)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                 klass,
                                 (System_Predicate_T__o *)_9__22_4,
                                 (const MethodInfo_2F26660 *)Method_System_Collections_Generic_List_BattleServantData__FindAll__);
  p_actlist->klass = (BattleServantConfConponent_c *)All;
  sub_B16F98(p_actlist, All, v115, v116, v117, v118, v119, v120);
}


void __fastcall BattleLogicEnemyAi___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleLogicEnemyAi___c_StaticFields *static_fields; // x0

  if ( (byte_40F854B & 1) == 0 )
  {
    sub_B16FFC(&BattleLogicEnemyAi___c_TypeInfo, v1);
    byte_40F854B = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleLogicEnemyAi___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleLogicEnemyAi___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleLogicEnemyAi___c_o *)v5;
  sub_B16F98(static_fields, v5);
}


void __fastcall BattleLogicEnemyAi___c___ctor(BattleLogicEnemyAi___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__22_0(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  bool isAlive; // w8
  bool result; // w0

  if ( !x )
    sub_B170D4();
  isAlive = BattleServantData__isAlive(x, 0, 0LL);
  result = 0;
  if ( isAlive )
    return BattleServantData__GetRemainActionCount(x, 0LL) > 0;
  return result;
}


int32_t __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__22_1(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return BattleServantData__GetOriginalRemainingNeedActCount(x, 0LL);
}


int32_t __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__22_2(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.actPriority;
}


int32_t __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__22_3(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return BattleServantData__getDeckIndex(x, 0LL);
}


bool __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__22_4(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return BattleServantData__GetRemainingNeedActCount(x, 0LL) > 0;
}