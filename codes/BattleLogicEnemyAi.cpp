void __fastcall BattleLogicEnemyAi___ctor(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_418A762 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_BattleServantData__TypeInfo, v3);
    byte_418A762 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this->fields.actlist = (struct System_Collections_Generic_List_BattleServantData__o *)v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.actlist, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
  BattleLogicServantAi___ctor((BattleLogicServantAi_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicEnemyAi__AddTempDeadSvt(
        BattleLogicEnemyAi_o *this,
        int32_t svtUniqueId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x0

  if ( (byte_418A75A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, *(_QWORD *)&svtUniqueId);
    byte_418A75A = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
    System_Collections_Generic_HashSet_int___Add(
      tempDeadSvtHash,
      svtUniqueId,
      (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
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
  BattleLogicEnemyAi_o *Int; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x4
  struct System_Int32_array *skillVals; // x8
  int32_t v24; // w21
  int32_t v25; // w22
  BattleSkillInfoData_o *v26; // x20
  char v27; // w22
  BattleLogicEnemyAi_o *v28; // x0
  const MethodInfo *v29; // x4
  int32_t Next; // w0
  int32_t Data; // w0
  bool v32; // zf
  int32_t v33; // w8
  _BOOL4 isUseSelfSkill; // w0
  AiLogic_AiInfo_CheckedInfo_o *v35; // x21

  v9 = skillFlg;
  if ( (byte_418A75E & 1) == 0 )
  {
    sub_B2C35C(&AiLogic_AiInfo_CheckedInfo_TypeInfo, skillFlg);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&Method_WeightRate_int___ctor__, v13);
    sub_B2C35C(&Method_WeightRate_int__getCount__, v14);
    sub_B2C35C(&Method_WeightRate_int__getData__, v15);
    sub_B2C35C(&Method_WeightRate_int__getTotalWeight__, v16);
    sub_B2C35C(&Method_WeightRate_int__setWeight__, v17);
    sub_B2C35C(&WeightRate_int__TypeInfo, v18);
    byte_418A75E = 1;
  }
  v19 = (WeightRate_int__o *)sub_B2C42C(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v19, (const MethodInfo_29E4118 *)Method_WeightRate_int___ctor__);
  if ( actType <= 13 )
  {
    switch ( actType )
    {
      case 10:
        if ( v9 )
          BattleLogicEnemyAi__SetSkillRandomWeightSameProbability(Int, v19, 10, svtData, v22);
        if ( !v19 )
          goto LABEL_46;
        if ( WeightRate_int___getCount(v19, (const MethodInfo_29E3680 *)Method_WeightRate_int__getCount__) < 1 )
          goto LABEL_26;
        goto LABEL_31;
      case 11:
        if ( !svtData )
          goto LABEL_46;
        v27 = !v9;
        v32 = !BattleServantData__isUseSelfSkill(svtData, 0, 0LL) || !v9;
        v33 = 11;
        goto LABEL_38;
      case 12:
        if ( !svtData )
          goto LABEL_46;
        v27 = !v9;
        v32 = !BattleServantData__isUseSelfSkill(svtData, 1, 0LL) || !v9;
        v33 = 12;
LABEL_38:
        v26 = 0LL;
        if ( v32 )
          actType = 2;
        else
          actType = v33;
        goto LABEL_45;
      case 13:
        if ( !svtData )
          goto LABEL_46;
        v27 = !v9;
        isUseSelfSkill = BattleServantData__isUseSelfSkill(svtData, 2, 0LL);
        v26 = 0LL;
        if ( isUseSelfSkill && v9 )
          actType = 13;
        else
          actType = 2;
        goto LABEL_45;
      default:
        if ( actType != 1 )
          goto LABEL_33;
        Int = (BattleLogicEnemyAi_o *)AiAct__getInt(2, 0LL);
        if ( !v19 )
          goto LABEL_46;
        WeightRate_int___setWeight(
          v19,
          10,
          (int32_t)Int,
          (const MethodInfo_29E32E0 *)Method_WeightRate_int__setWeight__);
        if ( v9 )
          BattleLogicEnemyAi__SetSkillRandomWeightSameProbability(v28, v19, 10, svtData, v29);
LABEL_31:
        Next = BattleRandom__getNext(v19->fields.totalweight, 0LL);
        Data = WeightRate_int___getData(v19, Next, (const MethodInfo_29E3764 *)Method_WeightRate_int__getData__);
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
      v27 = 0;
      v26 = 0LL;
      goto LABEL_45;
    }
    if ( svtData )
    {
      if ( BattleServantData__isNobleAction(svtData, 0LL)
        && TreasureDeviceConditionUtil__IsSatisfyEachCondition(svtData, this->fields.data, 0LL) )
      {
        v27 = 0;
        v26 = 0LL;
        actType = 80;
        goto LABEL_45;
      }
      goto LABEL_26;
    }
LABEL_46:
    sub_B2C434(Int, v21);
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
    v26 = 0LL;
    v27 = 1;
    actType = 2;
    goto LABEL_45;
  }
  v24 = skillVals->m_Items[1];
  v25 = skillVals->m_Items[2];
  Int = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Int )
    goto LABEL_46;
  Int = (BattleLogicEnemyAi_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Int,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !Int )
    goto LABEL_46;
  if ( !SkillLvMaster__GetEntity((SkillLvMaster_o *)Int, v24, v25, 0LL) )
    goto LABEL_32;
  Int = (BattleLogicEnemyAi_o *)BattleSkillInfoData__MakeSkillData(20, 0LL);
  if ( !svtData )
    goto LABEL_46;
  v26 = BattleServantData__SetSkillInfo(svtData, (BattleSkillInfoData_o *)Int, 20, 0, v24, v25, -1LL, -1, 0LL);
  v27 = 0;
LABEL_45:
  v35 = (AiLogic_AiInfo_CheckedInfo_o *)sub_B2C42C(AiLogic_AiInfo_CheckedInfo_TypeInfo);
  AiLogic_AiInfo_CheckedInfo___ctor(v35, actType, v27 & 1, v26, 0LL);
  return v35;
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
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x5
  BattleServantData_o *v14; // x23
  const MethodInfo *v15; // x3
  AiLogic_AiInfo_CheckedInfo_o *v16; // x20
  bool v17; // w26
  __int64 v18; // x10
  AiEntity_o *v19; // x19
  BattleLogicTarget_o *logictarget; // x27
  int32_t age; // w28
  int32_t uniqueId; // w22
  struct System_String_o *name; // x20
  System_Int32_array *FieldPlayerServantIDList; // x0
  AiActEntity_o *aiActEnt; // x24
  System_Int32_array *v26; // x25
  const MethodInfo *v27; // x2
  System_Int32_array *v28; // x25
  BattleLogicTarget_o *v29; // x20
  int32_t v30; // w22
  int32_t v31; // w23
  struct System_String_o *v32; // x26
  AiLogic_o *aiLogic; // x20
  __int64 v35; // x0
  AiBaseEntity_o *aiBaseEntitya; // [xsp+18h] [xbp-78h]
  AiLogic_AiInfo_CheckedInfo_o *v37; // [xsp+20h] [xbp-70h]
  AiLogic_AiInfo_o *v38; // [xsp+28h] [xbp-68h]
  System_Int32_array *v39; // [xsp+30h] [xbp-60h]
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_418A761 & 1) == 0 )
  {
    sub_B2C35C(&AiEntity_TypeInfo, aiInfo);
    sub_B2C35C(&Method_DataManager_GetMaster_AiActMaster___, v7);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    sub_B2C35C(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__, v9);
    sub_B2C35C(&int___TypeInfo, v10);
    byte_418A761 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !aiBaseEntity || !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
          &entity,
          aiBaseEntity->fields.aiActId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__) )
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
  v14 = (BattleServantData_o *)Master_WarQuestSelectionMaster;
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
                                              v14,
                                              (AiActEntity_o *)entity,
                                              *(&entity->fields.id + 1),
                                              v13);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  v16 = (AiLogic_AiInfo_CheckedInfo_o *)Master_WarQuestSelectionMaster;
  v17 = BattleLogicEnemyAi__CheckHate(this, *(_DWORD *)(Master_WarQuestSelectionMaster + 16), v14, v15);
  v18 = *(&AiEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&aiBaseEntity->klass->_2.bitflags2 + 1) >= (unsigned int)v18 )
    v19 = (AiEntity_c *)aiBaseEntity->klass->_2.typeHierarchy[v18 - 1] == AiEntity_TypeInfo
        ? (AiEntity_o *)aiBaseEntity
        : 0LL;
  else
    v19 = 0LL;
  Master_WarQuestSelectionMaster = sub_B2C374(int___TypeInfo, 1LL);
  if ( !entity )
    goto LABEL_42;
  if ( !v14 )
    goto LABEL_42;
  aiBaseEntitya = aiBaseEntity;
  v37 = v16;
  v38 = aiInfo;
  v39 = (System_Int32_array *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (__int64)this->fields.data;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  logictarget = this->fields.logictarget;
  age = (int32_t)entity->fields.age;
  uniqueId = v14->fields.uniqueId;
  name = entity->fields.name;
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(
                               (BattleData_o *)Master_WarQuestSelectionMaster,
                               0LL,
                               0LL);
  aiActEnt = (AiActEntity_o *)entity;
  v26 = FieldPlayerServantIDList;
  Master_WarQuestSelectionMaster = BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(this, v19, v27);
  if ( !logictarget )
    goto LABEL_42;
  Master_WarQuestSelectionMaster = BattleLogicTarget__getTargetAiAct(
                                     logictarget,
                                     age,
                                     uniqueId,
                                     (System_Int32_array *)name,
                                     v26,
                                     v17,
                                     0,
                                     0LL,
                                     aiActEnt,
                                     Master_WarQuestSelectionMaster & 1,
                                     0LL);
  if ( !v39 )
    goto LABEL_42;
  if ( !v39->max_length )
    goto LABEL_43;
  v39->m_Items[1] = Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = sub_B2C374(int___TypeInfo, 1LL);
  if ( !entity )
    goto LABEL_42;
  v28 = (System_Int32_array *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (__int64)this->fields.data;
  if ( !Master_WarQuestSelectionMaster
    || (v29 = this->fields.logictarget,
        v30 = (int32_t)entity->fields.age,
        v31 = v14->fields.uniqueId,
        v32 = entity->fields.name,
        Master_WarQuestSelectionMaster = (__int64)BattleData__getFieldEnemyServantIDList(
                                                    (BattleData_o *)Master_WarQuestSelectionMaster,
                                                    0,
                                                    0LL),
        !v29)
    || (Master_WarQuestSelectionMaster = BattleLogicTarget__getTargetAiAct(
                                           v29,
                                           v30,
                                           v31,
                                           (System_Int32_array *)v32,
                                           (System_Int32_array *)Master_WarQuestSelectionMaster,
                                           0,
                                           0,
                                           0LL,
                                           (AiActEntity_o *)entity,
                                           1,
                                           0LL),
        !v28) )
  {
LABEL_42:
    sub_B2C434(Master_WarQuestSelectionMaster, v12);
  }
  if ( !v28->max_length )
  {
LABEL_43:
    v35 = sub_B2C460(Master_WarQuestSelectionMaster);
    sub_B2C400(v35, 0LL);
  }
  v28->m_Items[1] = Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (__int64)entity;
  if ( !entity )
    goto LABEL_42;
  aiLogic = this->fields.aiLogic;
  Master_WarQuestSelectionMaster = AiActEntity__GetNoTargetNoActionType((AiActEntity_o *)entity, 0LL);
  if ( !aiLogic )
    goto LABEL_42;
  if ( AiLogic__IsNoTargetNoActionTask(aiLogic, Master_WarQuestSelectionMaster, v39, v28, 0LL) )
    return 0;
  AiLogic_AiInfo__SetCheckedResult(v38, aiBaseEntitya, v37, 0LL);
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
    sub_B2C434(data, *(_QWORD *)&actUniqueId);
  return AiLogic__checkThinking(
           this->fields.aiLogic,
           (BattleServantData_o *)data,
           20,
           (BattleLogicBaseAi_o *)this,
           0,
           0LL);
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
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  SkillLvMaster_o *v11; // x21
  BattleSkillInfoData_o *SkillInfoDataByAiActType; // x0
  BattleSkillInfoData_o *v13; // x19
  SkillLvEntity_o *Entity; // x21
  bool v15; // w0
  struct BattleLogic_o *logic; // x20
  System_Int32_array *funcId; // x22
  DataVals_array *v18; // x2
  BattleLogic_o *v19; // x0
  System_Int32_array *lookup; // x1
  TreasureDvcLvMaster_o *MasterData_WarQuestSelectionMaster; // x23

  if ( (byte_418A760 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&actType);
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_418A760 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !svtData )
    goto LABEL_26;
  v11 = (SkillLvMaster_o *)Instance;
  SkillInfoDataByAiActType = BattleServantData__getSkillInfoDataByAiActType(svtData, actType, 0LL);
  v13 = SkillInfoDataByAiActType;
  if ( SkillInfoDataByAiActType )
  {
    Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))SkillInfoDataByAiActType->klass->vtable._5_get_skillId.method)(
                                  SkillInfoDataByAiActType,
                                  SkillInfoDataByAiActType->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !v11 )
      goto LABEL_26;
    Entity = SkillLvMaster__GetEntity(v11, (int32_t)Instance, v13->fields.skilllv, 0LL);
  }
  else
  {
    Entity = 0LL;
  }
  if ( AiAct__isSkillType(actType, 0LL) )
  {
    v15 = 1;
    if ( !Entity || !v13 )
    {
LABEL_21:
      if ( !Entity )
        return v15;
      goto LABEL_22;
    }
    logic = this->fields.logic;
    funcId = Entity->fields.funcId;
    Instance = (DataManager_o *)SkillLvEntity__getDataValsList(Entity, 0LL);
    if ( logic )
    {
      v18 = (DataVals_array *)Instance;
      v19 = logic;
      lookup = funcId;
LABEL_20:
      v15 = BattleLogic__checkEnemyTargetFunction(v19, lookup, v18, 0LL);
      goto LABEL_21;
    }
    goto LABEL_26;
  }
  if ( actType == 80 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    MasterData_WarQuestSelectionMaster = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    Instance,
                                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
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
        v19 = this->fields.logic;
        v18 = 0LL;
        goto LABEL_20;
      }
LABEL_26:
      sub_B2C434(Instance, v10);
    }
  }
  v15 = 1;
  if ( !Entity )
    return v15;
LABEL_22:
  if ( v13 )
    return SkillLvEntity__IsEnableTarget(Entity, v15, 0LL);
  return v15;
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
    sub_B2C434(data, *(_QWORD *)&actUniqueId);
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
    sub_B2C434(0LL, skillFlg);
  if ( !BattleServantData__isUseSelfSkill(servantData, skillIndex, 0LL) )
    *actType = 2;
}


void __fastcall BattleLogicEnemyAi__ClearTempDeadSvt(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x0

  if ( (byte_418A75B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Clear__, method);
    byte_418A75B = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
    System_Collections_Generic_HashSet_int___Clear(
      tempDeadSvtHash,
      (const MethodInfo_2D85698 *)Method_System_Collections_Generic_HashSet_int__Clear__);
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
    sub_B2C434(0LL, actUniqueId);
  ServantData = BattleData__getServantData(data, actUniqueId, 0LL);
  return BattleLogicEnemyAi__CreateAILogicTask(this, ServantData, 20, v6);
}


BattleLogicTask_array *__fastcall BattleLogicEnemyAi__CreateAILogicTask(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        int32_t procState,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x22
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  struct AiActMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct BattleData_o *data; // x8
  AiLogic_AiInfo_o *info; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_418A757 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_AiActMaster___, svtData);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_418A757 = 1;
  }
  info = 0LL;
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = (struct AiActMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 Instance,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = MasterData_WarQuestSelectionMaster;
  sub_B2C2F8(
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
    if ( v12 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_11:
    sub_B2C434(Instance, v14);
  }
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, DataManager_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._19_procAiAct.method)(
                                this,
                                svtData,
                                Instance,
                                0LL,
                                info,
                                0LL,
                                this->klass->vtable._20_ExistThinking.methodPtr);
  if ( !v12 )
    goto LABEL_11;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v12,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_B2C434(0LL, actUniqueId);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  __int64 Instance; // x0
  System_Collections_Generic_IEnumerable_T__o *v25; // x1
  UnityEngine_Object_o *perf; // x21
  BattleData_o *v27; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v28; // x23
  struct BattleData_o *v29; // x8
  struct AiActMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct AiActMaster_o **p_aiActMst; // x24
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  const MethodInfo *v38; // x1
  BattleServantData_o *v39; // x21
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x2
  struct BattleData_o *v42; // x8
  struct BattleData_o *v43; // x8
  BattleLogicEnemyAi_c *klass; // x9
  struct AiEntity_o *noThinkAiEnt; // x2
  struct BattleData_o *v46; // x8
  BattleLogicTask_o *v48; // x23
  TreasureDvcLvMaster_o *v49; // x25
  char v50; // w25
  struct BattleData_o *v51; // x8
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  struct BattleLogicTarget_o *logictarget; // x8
  System_Int32_array **tempDeadSvtHash; // x1
  AiEntity_o *v60; // x26
  BattleLogicTarget_o *v61; // x24
  int32_t uniqueId; // w28
  System_Int32_array *FieldPlayerServantIDList; // x0
  AiActEntity_o *v64; // x27
  System_Int32_array *v65; // x22
  const MethodInfo *v66; // x2
  int32_t TargetAiAct; // w0
  BattleLogicTarget_o *v68; // x24
  int32_t v69; // w26
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  BattleCommandData_o *v76; // x22
  BattleComboData_o *v77; // x24
  struct BattleData_o *v78; // x8
  int32_t TreasureDvcId; // w0
  struct System_String_o *name; // [xsp+18h] [xbp-78h]
  int32_t age; // [xsp+24h] [xbp-6Ch]
  AiLogic_AiInfo_o *v82; // [xsp+28h] [xbp-68h] BYREF
  WarEntity_o *entity; // [xsp+30h] [xbp-60h] BYREF
  AiLogic_AiInfo_o *info; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_418A750 & 1) == 0 )
  {
    sub_B2C35C(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_B2C35C(&BattleCommandData_TypeInfo, v6);
    sub_B2C35C(&Method_BattleLogicEnemyAi_IsNotTempDeadSvt__, v7);
    sub_B2C35C(&BattleLogicTask_TypeInfo, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_AiActMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v10);
    sub_B2C35C(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__, v11);
    sub_B2C35C(&Method_System_Func_BattleServantData__bool___ctor__, v12);
    sub_B2C35C(&System_Func_BattleServantData__bool__TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData__RemoveAt__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData__get_Item__, v19);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v20);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_418A750 = 1;
  }
  entity = 0LL;
  info = 0LL;
  v82 = 0LL;
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
    Instance = (__int64)data->fields.perf;
    if ( !Instance )
      goto LABEL_66;
    BattlePerformance__setOffTarget((BattlePerformance_o *)Instance, 0LL);
  }
  v27 = this->fields.data;
  v28 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v28,
    (Il2CppObject *)this,
    Method_BattleLogicEnemyAi_IsNotTempDeadSvt__,
    (const MethodInfo_2711C04 *)Method_System_Func_BattleServantData__bool___ctor__);
  if ( !v27 )
    goto LABEL_66;
  Instance = BattleData__CheckAlivePlayers(v27, (System_Func_BattleServantData__bool__o *)v28, 0LL);
  if ( (Instance & 1) == 0 )
    return (System_Collections_Generic_List_BattleLogicTask__o *)v23;
  v29 = this->fields.data;
  if ( !v29 )
    goto LABEL_66;
  if ( v29->fields.leaderDown || v29->fields.endbattleFlg )
    return (System_Collections_Generic_List_BattleLogicTask__o *)v23;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_WarQuestSelectionMaster = (struct AiActMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = MasterData_WarQuestSelectionMaster;
  p_aiActMst = &this->fields.aiActMst;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.aiActMst,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  BattleLogicEnemyAi__updateActPriorityList(this, v38);
  Instance = (__int64)this->fields.actlist;
  if ( !Instance )
    goto LABEL_66;
  if ( *(int *)(Instance + 24) > 0 )
  {
    v39 = *(BattleServantData_o **)(*(_QWORD *)(Instance + 16) + 32LL);
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)Instance,
      0,
      (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_BattleServantData__RemoveAt__);
    if ( !v39 )
      goto LABEL_66;
    if ( !BattleServantData__isAlive(v39, 0, 0LL)
      || !BattleLogicEnemyAi__IsNotTempDeadSvt(this, v39, v40)
      || !v39->fields.isEntry )
    {
      return (System_Collections_Generic_List_BattleLogicTask__o *)v23;
    }
    Instance = BattleServantData__isAction(v39, 0LL);
    if ( (Instance & 1) == 0 )
      goto LABEL_39;
    Instance = BattleServantData__isTDSeraled(v39, 0LL);
    if ( (Instance & 1) != 0
      || (Instance = BattleServantData__checkUseTDvc(v39, this->fields.data, 1, 0LL), (Instance & 1) == 0) )
    {
      v42 = this->fields.data;
      if ( v42 )
      {
        Instance = (__int64)this->fields.aiLogic;
        if ( Instance )
        {
          Instance = (__int64)AiLogic__getAction(
                                (AiLogic_o *)Instance,
                                v39,
                                1,
                                data->fields.turnCount,
                                v42->fields.countEnemyAttack,
                                (BattleLogicBaseAi_o *)this,
                                &info,
                                0,
                                0LL);
          v43 = this->fields.data;
          if ( Instance )
          {
            if ( !v43 )
              goto LABEL_66;
            klass = this->klass;
            noThinkAiEnt = (struct AiEntity_o *)Instance;
          }
          else
          {
            if ( !v43 )
              goto LABEL_66;
            klass = this->klass;
            noThinkAiEnt = this->fields.noThinkAiEnt;
          }
          Instance = ((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, struct AiEntity_o *, _QWORD, AiLogic_AiInfo_o *, __int64, Il2CppMethodPointer))klass->vtable._19_procAiAct.method)(
                       this,
                       v39,
                       noThinkAiEnt,
                       (unsigned int)v43->fields.countEnemyAttack,
                       info,
                       1LL,
                       klass->vtable._20_ExistThinking.methodPtr);
          if ( v23 )
          {
            v25 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
LABEL_38:
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v23,
              v25,
              (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
LABEL_39:
            ++v39->fields.actionCount;
            goto LABEL_40;
          }
        }
      }
    }
    else
    {
      Instance = (__int64)BattleLogicEnemyAi__taskAIEnemyMaxNp(this, v39->fields.uniqueId, v41);
      if ( !Instance )
        goto LABEL_66;
      v25 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
      if ( *(_QWORD *)(Instance + 24) )
      {
        if ( !v23 )
          goto LABEL_66;
        goto LABEL_38;
      }
      v48 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v48, 0LL);
      if ( v48 )
      {
        BattleLogicTask__setActor(v48, 3, v39->fields.uniqueId, 0LL);
        Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v49 = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
          Instance = BattleServantData__getTreasureDvcId(v39, 1, 0LL);
          if ( v49 )
          {
            Instance = (__int64)TreasureDvcLvMaster__GetEntity(v49, Instance, v39->fields.treasuredvcLevel, 0LL);
            if ( Instance )
            {
              if ( !this->fields.logic )
                goto LABEL_66;
              Instance = BattleLogic__checkEnemyTargetFunction(
                           this->fields.logic,
                           *(System_Int32_array **)(Instance + 32),
                           0LL,
                           0LL);
              v50 = Instance;
            }
            else
            {
              v50 = 1;
            }
            v51 = this->fields.data;
            if ( v51 )
            {
              Instance = (__int64)this->fields.aiLogic;
              if ( Instance )
              {
                Instance = (__int64)AiLogic__getAction(
                                      (AiLogic_o *)Instance,
                                      v39,
                                      8,
                                      data->fields.turnCount,
                                      v51->fields.countEnemyAttack,
                                      (BattleLogicBaseAi_o *)this,
                                      &v82,
                                      0,
                                      0LL);
                entity = 0LL;
                logictarget = this->fields.logictarget;
                if ( logictarget )
                {
                  tempDeadSvtHash = (System_Int32_array **)this->fields.tempDeadSvtHash;
                  v60 = (AiEntity_o *)Instance;
                  logictarget->fields.tempDeadSvtHash = (struct System_Collections_Generic_HashSet_int__o *)tempDeadSvtHash;
                  sub_B2C2F8(
                    (BattleServantConfConponent_o *)&logictarget->fields.tempDeadSvtHash,
                    tempDeadSvtHash,
                    v52,
                    v53,
                    v54,
                    v55,
                    v56,
                    v57);
                  if ( !v60 )
                    goto LABEL_59;
                  Instance = (__int64)*p_aiActMst;
                  if ( !*p_aiActMst )
                    goto LABEL_66;
                  Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                               &entity,
                               v60->fields.aiActId,
                               (const MethodInfo_24E412C *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
                  if ( (Instance & 1) != 0 )
                  {
                    if ( !entity )
                      goto LABEL_66;
                    v61 = this->fields.logictarget;
                    uniqueId = v39->fields.uniqueId;
                    age = (int32_t)entity->fields.age;
                    name = entity->fields.name;
                    FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
                    v64 = (AiActEntity_o *)entity;
                    v65 = FieldPlayerServantIDList;
                    Instance = BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(this, v60, v66);
                    if ( !v61 )
                      goto LABEL_66;
                    TargetAiAct = BattleLogicTarget__getTargetAiAct(
                                    v61,
                                    age,
                                    uniqueId,
                                    (System_Int32_array *)name,
                                    v65,
                                    v50 & 1,
                                    0,
                                    0LL,
                                    v64,
                                    Instance & 1,
                                    0LL);
                  }
                  else
                  {
LABEL_59:
                    v68 = this->fields.logictarget;
                    v69 = v39->fields.uniqueId;
                    Instance = (__int64)BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
                    if ( !v68 )
                      goto LABEL_66;
                    TargetAiAct = BattleLogicTarget__getTargetAiAct(
                                    v68,
                                    1,
                                    v69,
                                    0LL,
                                    (System_Int32_array *)Instance,
                                    v50 & 1,
                                    0,
                                    0LL,
                                    (AiActEntity_o *)entity,
                                    1,
                                    0LL);
                  }
                  BattleLogicTask__setTarget(v48, TargetAiAct, 0LL);
                  Instance = (__int64)this->fields.logictarget;
                  if ( Instance )
                  {
                    *(_QWORD *)(Instance + 24) = 0LL;
                    sub_B2C2F8((BattleServantConfConponent_o *)(Instance + 24), 0LL, v70, v71, v72, v73, v74, v75);
                    v76 = (BattleCommandData_o *)sub_B2C42C(BattleCommandData_TypeInfo);
                    BattleCommandData___ctor(v76, 0LL);
                    Instance = BattleServantData__getTreasureDvcCardId(v39, 0LL);
                    if ( v76 )
                    {
                      v76->fields._type = Instance;
                      v76->fields.svtlimit = BattleServantData__getDispLimitCount(v39, 1, 0LL);
                      v76->fields.uniqueId = v39->fields.uniqueId;
                      v76->fields.svtId = BattleServantData__getSvtId(v39, 0LL);
                      v76->fields.treasureDvc = BattleServantData__getTreasureDvcId(v39, 1, 0LL);
                      v77 = (BattleComboData_o *)sub_B2C42C(BattleComboData_TypeInfo);
                      BattleComboData___ctor(v77, 0LL);
                      v78 = this->fields.data;
                      if ( v78 )
                      {
                        BattleLogicTask__setActionCommand(v48, v77, v76, v78->fields.countEnemyAttack, 0LL);
                        TreasureDvcId = BattleServantData__getTreasureDvcId(v39, 1, 0LL);
                        BattleLogicTask__setActionTreasureDvc(v48, TreasureDvcId, 1, 0LL);
                        if ( v23 )
                        {
                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                            v23,
                            (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
                            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
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
    sub_B2C434(Instance, v25);
  }
LABEL_40:
  v46 = this->fields.data;
  if ( !v46 )
    goto LABEL_66;
  ++v46->fields.countEnemyAttack;
  return (System_Collections_Generic_List_BattleLogicTask__o *)v23;
}


void __fastcall BattleLogicEnemyAi__ExcludeDeadFromTempDead(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x20
  Il2CppObject *data; // x19
  System_Predicate_int__o *v8; // x21

  if ( (byte_418A75C & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleData_IsNotAliveTarget__, method);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__, v3);
    sub_B2C35C(&Method_System_Predicate_int___ctor__, v4);
    sub_B2C35C(&System_Predicate_int__TypeInfo, v5);
    byte_418A75C = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
  {
    data = (Il2CppObject *)this->fields.data;
    v8 = (System_Predicate_int__o *)sub_B2C42C(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      v8,
      data,
      Method_BattleData_IsNotAliveTarget__,
      (const MethodInfo_2951520 *)Method_System_Predicate_int___ctor__);
    System_Collections_Generic_HashSet_int___RemoveWhere(
      tempDeadSvtHash,
      (System_Predicate_T__o *)v8,
      (const MethodInfo_2D867DC *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
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

  if ( (byte_418A759 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, servantData);
    byte_418A759 = 1;
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
    sub_B2C434(StageEntity, v7);
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
  __int64 v5; // x1
  __int64 v6; // x1
  AiLogic_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  AiLogic_o *aiLogic; // x0
  AiEntity_o *v16; // x20
  struct AiEntity_o **p_noThinkAiEnt; // x19
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct AiEntity_o *v24; // x19

  if ( (byte_418A74C & 1) == 0 )
  {
    sub_B2C35C(&AiEntity_TypeInfo, data);
    sub_B2C35C(&AiLogic_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_9329/*"NOTHINK_AIACTID"*/, v6);
    byte_418A74C = 1;
  }
  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, method);
  v7 = (AiLogic_o *)sub_B2C42C(AiLogic_TypeInfo);
  AiLogic___ctor(v7, 0LL);
  this->fields.aiLogic = v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.aiLogic,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    goto LABEL_6;
  AiLogic__Initialize(aiLogic, data, 0LL);
  v16 = (AiEntity_o *)sub_B2C42C(AiEntity_TypeInfo);
  AiEntity___ctor(v16, 0LL);
  this->fields.noThinkAiEnt = v16;
  p_noThinkAiEnt = &this->fields.noThinkAiEnt;
  sub_B2C2F8((BattleServantConfConponent_o *)p_noThinkAiEnt, (System_Int32_array **)v16, v18, v19, v20, v21, v22, v23);
  v24 = *p_noThinkAiEnt;
  aiLogic = (AiLogic_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_9329/*"NOTHINK_AIACTID"*/, 0LL);
  if ( !v24 )
LABEL_6:
    sub_B2C434(aiLogic, v14);
  v24->fields.aiActId = (int)aiLogic;
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
    sub_B2C434(0LL, aiEnt);
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
  if ( (byte_418A75D & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_B2C35C(&Method_BasicHelper_ContainsSelfNotNull_int___, svtData);
    byte_418A75D = 1;
  }
  if ( !svtData )
    sub_B2C434(this, svtData);
  return !BasicHelper__ContainsSelfNotNull_int_(
            (System_Collections_Generic_HashSet_T__o *)v4->fields.tempDeadSvtHash,
            svtData->fields.uniqueId,
            (const MethodInfo_17268C8 *)Method_BasicHelper_ContainsSelfNotNull_int___);
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
  if ( (byte_418A75F & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_B2C35C(&Method_WeightRate_int__setWeight__, weight);
    byte_418A75F = 1;
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
      (const MethodInfo_29E32E0 *)Method_WeightRate_int__setWeight__);
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
      (const MethodInfo_29E32E0 *)Method_WeightRate_int__setWeight__);
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
        (const MethodInfo_29E32E0 *)Method_WeightRate_int__setWeight__);
      return;
    }
LABEL_14:
    sub_B2C434(this, weight);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.tempDeadSvtHash, 0LL, v5, v6, v7, v8, v9, v10);
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicEnemyAi__TaskAIAttackPrecheck(
        BattleLogicEnemyAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  __int64 v11; // x21
  bool isClearTempDeadSvtPrevAct; // w23
  CheckEnemyRelationInterruptProcess_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_418A74E & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_B2C35C(&CheckEnemyRelationInterruptProcess_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    byte_418A74E = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v11 = sub_B2C42C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v11, 0LL);
  isClearTempDeadSvtPrevAct = this->fields.isClearTempDeadSvtPrevAct;
  v13 = (CheckEnemyRelationInterruptProcess_o *)sub_B2C42C(CheckEnemyRelationInterruptProcess_TypeInfo);
  CheckEnemyRelationInterruptProcess___ctor(v13, isClearTempDeadSvtPrevAct, 0LL);
  if ( !v11
    || (*(_QWORD *)(v11 + 216) = v13,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v11 + 216),
          (System_Int32_array **)v13,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        *(_BYTE *)(v11 + 193) = 1,
        !v10) )
  {
    sub_B2C434(v14, v15);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v10,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  this->fields.isClearTempDeadSvtPrevAct = 0;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicEnemyAi__TaskAIAttackStart(
        BattleLogicEnemyAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_HashSet_int__o *v6; // x20
  struct System_Collections_Generic_HashSet_int__o **p_tempDeadSvtHash; // x19
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_418A74D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, *(_QWORD *)&ltype);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v5);
    byte_418A74D = 1;
  }
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
  this->fields.tempDeadSvtHash = v6;
  p_tempDeadSvtHash = &this->fields.tempDeadSvtHash;
  sub_B2C2F8((BattleServantConfConponent_o *)p_tempDeadSvtHash, (System_Int32_array **)v6, v8, v9, v10, v11, v12, v13);
  *((_BYTE *)p_tempDeadSvtHash + 8) = 0;
  return 0LL;
}


void __fastcall BattleLogicEnemyAi__addEnemyActPriorityList(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *inSvtData,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleServantData__o *actlist; // x0

  if ( (byte_418A753 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData__Insert__, inSvtData);
    byte_418A753 = 1;
  }
  actlist = this->fields.actlist;
  if ( !actlist )
    sub_B2C434(0LL, inSvtData);
  System_Collections_Generic_List_XWeaponTrail_Element___Insert(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)actlist,
    0,
    (XWeaponTrail_Element_o *)inSvtData,
    (const MethodInfo_2EF5674 *)Method_System_Collections_Generic_List_BattleServantData__Insert__);
}


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
  System_Int32_array *CommandList; // x0
  __int64 v17; // x1
  int32_t Type; // w23
  WeightRate_int__o *v19; // x22
  __int64 v20; // x8
  System_Int32_array *v21; // x23
  unsigned __int64 v22; // x24
  int32_t Next; // w0
  int32_t Data; // w0
  int32_t SvtId; // w24
  int32_t DispLimitCount; // w25
  BattleCommandData_o *v27; // x22
  BattleComboData_o *v28; // x20
  __int64 v30; // x0

  if ( (byte_418A758 & 1) == 0 )
  {
    sub_B2C35C(&BattleComboData_TypeInfo, svtData);
    sub_B2C35C(&BattleCommandData_TypeInfo, v8);
    sub_B2C35C(&BattleLogicTask_TypeInfo, v9);
    sub_B2C35C(&Method_WeightRate_int___ctor__, v10);
    sub_B2C35C(&Method_WeightRate_int__getData__, v11);
    sub_B2C35C(&Method_WeightRate_int__getTotalWeight__, v12);
    sub_B2C35C(&Method_WeightRate_int__setWeight__, v13);
    sub_B2C35C(&WeightRate_int__TypeInfo, v14);
    byte_418A758 = 1;
  }
  v15 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_17;
  BattleLogicTask__setTarget(v15, targetId, 0LL);
  if ( !svtData )
    goto LABEL_17;
  BattleLogicTask__setActor(v15, 3, svtData->fields.uniqueId, 0LL);
  if ( SvtType__IsEnemy_31532108(svtData->fields.svtType, 0LL) )
  {
    Type = 10;
    goto LABEL_15;
  }
  v19 = (WeightRate_int__o *)sub_B2C42C(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v19, (const MethodInfo_29E4118 *)Method_WeightRate_int___ctor__);
  CommandList = BattleServantData__getCommandList(svtData, 0LL);
  if ( !CommandList )
    goto LABEL_17;
  v20 = *(_QWORD *)&CommandList->max_length;
  v21 = CommandList;
  if ( (int)v20 >= 1 )
  {
    v22 = 0LL;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v20 )
      {
        v30 = sub_B2C460(CommandList);
        sub_B2C400(v30, 0LL);
      }
      if ( !v19 )
        break;
      WeightRate_int___setWeight(
        v19,
        10,
        v21->m_Items[v22 + 1],
        (const MethodInfo_29E32E0 *)Method_WeightRate_int__setWeight__);
      LODWORD(v20) = v21->max_length;
      if ( (__int64)++v22 >= (int)v20 )
        goto LABEL_13;
    }
LABEL_17:
    sub_B2C434(CommandList, v17);
  }
LABEL_13:
  if ( !v19 )
    goto LABEL_17;
  Next = BattleRandom__getNext(v19->fields.totalweight, 0LL);
  Data = WeightRate_int___getData(v19, Next, (const MethodInfo_29E3764 *)Method_WeightRate_int__getData__);
  Type = BattleCommand__getType(Data, 0LL);
LABEL_15:
  SvtId = BattleServantData__getSvtId(svtData, 0LL);
  DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
  v27 = (BattleCommandData_o *)sub_B2C42C(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_18363144(v27, Type, SvtId, DispLimitCount, 0, 0LL);
  if ( !v27 )
    goto LABEL_17;
  v27->fields.uniqueId = svtData->fields.uniqueId;
  BattleCommandData__SetCriticalDecisionType(v27, 1, 0LL);
  v28 = (BattleComboData_o *)sub_B2C42C(BattleComboData_TypeInfo);
  BattleComboData___ctor(v28, 0LL);
  BattleLogicTask__setActionCommand(v15, v28, v27, countAct, 0LL);
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
    sub_B2C434(0LL, method);
  return BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
}


System_Int32_array *__fastcall BattleLogicEnemyAi__get_PartySvtIds(
        BattleLogicEnemyAi_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_B2C434(0LL, method);
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
  BattleLogicBaseAi_o *v12; // x28
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
  int32_t data_high; // w20
  AiActEntity_o *v32; // x25
  BattleLogicBaseAi_o *v33; // x0
  const MethodInfo *v34; // x4
  bool v36; // w27
  WeightRate_int__o *v37; // x24
  int32_t Int; // w0
  int32_t v39; // w0
  int32_t v40; // w0
  int32_t v41; // w1
  BattleServantData_o *v42; // x0
  int *skillVals; // x8
  int32_t v44; // w20
  int32_t v45; // w24
  int32_t Next; // w0
  int32_t Data; // w0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x24
  __int64 v49; // x26
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **infoText; // x1
  bool v57; // w21
  ServantAiActArgument_o *v58; // x20
  const MethodInfo *v59; // x4
  System_String_o *v60; // x0
  System_String_o *v61; // x0
  struct BattleLogic_o *v62; // x8
  System_Int32_array **ServantGameObject; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v70; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  BattleSkillInfoData_o *SkillInfoDataByAiActType; // x0
  BattleSkillInfoData_o *v73; // x27
  SkillLvEntity_o *Entity; // x28
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  bool v81; // w20
  struct BattleLogicTarget_o *funcId; // x21
  BattleLogic_o *logic; // x20
  BattleLogicEnemyAi_o *v84; // x2
  BattleLogic_o *v85; // x0
  struct BattleLogicTarget_o *logictarget; // x1
  TreasureDvcLvMaster_o *v87; // x20
  struct BattleLogic_o *v88; // x1
  BattleLogicTarget_o *v89; // x23
  int32_t target; // w27
  int32_t uniqueId; // w24
  System_Int32_array *targetIndividuality; // x28
  System_Int32_array *FieldPlayerServantIDList; // x21
  const MethodInfo *v94; // x2
  BattleLogicTarget_o *v95; // x23
  int32_t v96; // w24
  int32_t v97; // w27
  System_Int32_array *v98; // x28
  System_Int32_array *v99; // x20
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  int32_t Type; // w21
  const MethodInfo *v113; // x3
  BattleLogicTask_o *v114; // x19
  const MethodInfo_2EF4460 *v115; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v116; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v117; // x1
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  BattleCommandData_o *v124; // x20
  BattleComboData_o *v125; // x21
  int32_t TreasureDvcId; // w0
  WeightRate_int__o *v127; // x20
  const MethodInfo *v128; // x2
  struct BattleLogic_o *v129; // x8
  BattleLogicEnemyAi_o *v130; // x21
  unsigned __int64 v131; // x22
  int32_t v132; // w0
  int32_t v133; // w0
  int32_t SvtId; // w22
  int32_t DispLimitCount; // w23
  BattleCommandData_o *v136; // x20
  BattleComboData_o *v137; // x19
  __int64 v138; // x0
  BattleSkillInfoData_o *skillInfo; // [xsp+18h] [xbp-98h]
  bool IsEnableTarget; // [xsp+24h] [xbp-8Ch]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v141; // [xsp+28h] [xbp-88h]
  int32_t v142; // [xsp+34h] [xbp-7Ch]
  System_Int32_array *targetlist; // [xsp+38h] [xbp-78h]
  int32_t v144; // [xsp+44h] [xbp-6Ch]
  BattleLogicBaseAi_o *v145; // [xsp+48h] [xbp-68h]
  int v146; // [xsp+54h] [xbp-5Ch] BYREF
  int32_t aiActType; // [xsp+58h] [xbp-58h] BYREF
  bool noMessage; // [xsp+5Ch] [xbp-54h] BYREF

  v12 = (BattleLogicBaseAi_o *)this;
  if ( (byte_418A754 & 1) == 0 )
  {
    sub_B2C35C(&BattleComboData_TypeInfo, svtData);
    sub_B2C35C(&BattleCommandData_TypeInfo, v13);
    sub_B2C35C(&BattleLogicTask_TypeInfo, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_SkillLvMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v16);
    sub_B2C35C(&int___TypeInfo, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v20);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v21);
    sub_B2C35C(&ServantAiActArgument_TypeInfo, v22);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B2C35C(&Method_WeightRate_int___ctor__, v24);
    sub_B2C35C(&Method_WeightRate_int__getCount__, v25);
    sub_B2C35C(&Method_WeightRate_int__getData__, v26);
    sub_B2C35C(&Method_WeightRate_int__getTotalWeight__, v27);
    sub_B2C35C(&Method_WeightRate_int__setWeight__, v28);
    sub_B2C35C(&WeightRate_int__TypeInfo, v29);
    this = (BattleLogicEnemyAi_o *)sub_B2C35C(&StringLiteral_8787/*"MOTION_"*/, v30);
    byte_418A754 = 1;
  }
  v146 = 0;
  aiActType = 0;
  noMessage = 0;
  if ( !aiEnt )
    goto LABEL_150;
  this = (BattleLogicEnemyAi_o *)BattleLogicBaseAi__GetAiActEntity(
                                   v12,
                                   aiEnt->fields.aiActId,
                                   (const MethodInfo *)aiEnt);
  aiActType = 0;
  if ( !this )
    goto LABEL_150;
  data_high = HIDWORD(this->fields.data);
  v32 = (AiActEntity_o *)this;
  aiActType = data_high;
  if ( !svtData )
    goto LABEL_150;
  v33 = (BattleLogicBaseAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._18_getAiState.method)(
                                 svtData,
                                 svtData->klass->vtable._19_ExistAiThinking.methodPtr);
  if ( BattleLogicBaseAi__IsChangeThinkingOnly(v33, data_high, (AiBaseEntity_o *)aiEnt, (AiState_o *)v33, v34) )
    return v12->fields.emptyTask;
  v36 = procState != 1 || BattleServantData__canUseSkill(svtData, -1, 0LL);
  v37 = (WeightRate_int__o *)sub_B2C42C(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v37, (const MethodInfo_29E4118 *)Method_WeightRate_int___ctor__);
  if ( aiInfo )
  {
    this = (BattleLogicEnemyAi_o *)AiLogic_AiInfo__IsChecked(aiInfo, (AiBaseEntity_o *)aiEnt, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      AiLogic_AiInfo__GetCheckedResult(aiInfo, svtData, (AiBaseEntity_o *)aiEnt, &aiActType, &noMessage, 0LL);
      goto LABEL_62;
    }
  }
  switch ( data_high )
  {
    case 10:
      if ( !v36 )
        goto LABEL_58;
      if ( !BattleServantData__isUseSelfSkill(svtData, 0, 0LL) )
        goto LABEL_19;
      this = (BattleLogicEnemyAi_o *)AiAct__getInt(11, 0LL);
      if ( !v37 )
        goto LABEL_150;
      WeightRate_int___setWeight(v37, 10, (int32_t)this, (const MethodInfo_29E32E0 *)Method_WeightRate_int__setWeight__);
LABEL_19:
      if ( !BattleServantData__isUseSelfSkill(svtData, 1, 0LL) )
        goto LABEL_22;
      this = (BattleLogicEnemyAi_o *)AiAct__getInt(12, 0LL);
      if ( !v37 )
        goto LABEL_150;
      WeightRate_int___setWeight(v37, 10, (int32_t)this, (const MethodInfo_29E32E0 *)Method_WeightRate_int__setWeight__);
LABEL_22:
      this = (BattleLogicEnemyAi_o *)BattleServantData__isUseSelfSkill(svtData, 2, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleLogicEnemyAi_o *)AiAct__getInt(13, 0LL);
        if ( !v37 )
          goto LABEL_150;
        WeightRate_int___setWeight(
          v37,
          10,
          (int32_t)this,
          (const MethodInfo_29E32E0 *)Method_WeightRate_int__setWeight__);
      }
      else
      {
LABEL_58:
        if ( !v37 )
          goto LABEL_150;
      }
      if ( WeightRate_int___getCount(v37, (const MethodInfo_29E3680 *)Method_WeightRate_int__getCount__) >= 1 )
        goto LABEL_60;
      goto LABEL_61;
    case 11:
      if ( !v36 )
      {
        aiActType = 2;
        noMessage = 1;
      }
      v42 = svtData;
      v41 = 0;
      goto LABEL_56;
    case 12:
      if ( !v36 )
      {
        aiActType = 2;
        noMessage = 1;
      }
      v41 = 1;
      v42 = svtData;
LABEL_56:
      if ( !BattleServantData__isUseSelfSkill(v42, v41, 0LL) )
        aiActType = 2;
      goto LABEL_62;
    case 13:
      if ( !v36 )
      {
        aiActType = 2;
        noMessage = 1;
      }
      if ( !BattleServantData__isUseSelfSkill(svtData, 2, 0LL) )
        aiActType = 2;
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
        skillVals = (int *)v32->fields.skillVals;
        if ( !skillVals )
          goto LABEL_150;
        if ( skillVals[6] <= 1 )
        {
LABEL_130:
          aiActType = 0;
          goto LABEL_62;
        }
        if ( v36 || data_high != 41 )
        {
          v44 = skillVals[8];
          v45 = skillVals[9];
          this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_150;
          this = (BattleLogicEnemyAi_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
          if ( !this )
            goto LABEL_150;
          if ( SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v44, v45, 0LL) )
          {
            BattleServantData__addSkillInfo(svtData, 20, 0, v44, v45, -1LL, -1, 0LL, 0LL);
            goto LABEL_62;
          }
          goto LABEL_130;
        }
LABEL_61:
        aiActType = 2;
        noMessage = 1;
        goto LABEL_62;
      }
      this = (BattleLogicEnemyAi_o *)AiAct__getInt(2, 0LL);
      if ( !v37 )
        goto LABEL_150;
      WeightRate_int___setWeight(v37, 10, (int32_t)this, (const MethodInfo_29E32E0 *)Method_WeightRate_int__setWeight__);
      if ( v36 )
      {
        if ( BattleServantData__isUseSelfSkill(svtData, 0, 0LL) )
        {
          Int = AiAct__getInt(11, 0LL);
          WeightRate_int___setWeight(v37, 10, Int, (const MethodInfo_29E32E0 *)Method_WeightRate_int__setWeight__);
        }
        if ( BattleServantData__isUseSelfSkill(svtData, 1, 0LL) )
        {
          v39 = AiAct__getInt(12, 0LL);
          WeightRate_int___setWeight(v37, 10, v39, (const MethodInfo_29E32E0 *)Method_WeightRate_int__setWeight__);
        }
        if ( BattleServantData__isUseSelfSkill(svtData, 2, 0LL) )
        {
          v40 = AiAct__getInt(13, 0LL);
          WeightRate_int___setWeight(v37, 10, v40, (const MethodInfo_29E32E0 *)Method_WeightRate_int__setWeight__);
        }
      }
LABEL_60:
      Next = BattleRandom__getNext(v37->fields.totalweight, 0LL);
      Data = WeightRate_int___getData(v37, Next, (const MethodInfo_29E3764 *)Method_WeightRate_int__getData__);
      aiActType = AiAct__getType(Data, 0LL);
LABEL_62:
      v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v48,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      v49 = sub_B2C42C(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor((BattleLogicTask_o *)v49, 0LL);
      if ( noMessage )
      {
        if ( !v49 )
          goto LABEL_150;
      }
      else
      {
        if ( !v49 )
          goto LABEL_150;
        infoText = (System_Int32_array **)aiEnt->fields.infoText;
        *(_QWORD *)(v49 + 152) = infoText;
        sub_B2C2F8((BattleServantConfConponent_o *)(v49 + 152), infoText, v50, v51, v52, v53, v54, v55);
      }
      BattleLogicTask__setActor((BattleLogicTask_o *)v49, 3, svtData->fields.uniqueId, 0LL);
      if ( AiBaseEntity__IsForcedActionSpeedAnyTime((AiBaseEntity_o *)aiEnt, 0LL) )
        *(_BYTE *)(v49 + 160) = 1;
      v144 = procState;
      this = (BattleLogicEnemyAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._18_getAiState.method)(
                                       svtData,
                                       svtData->klass->vtable._19_ExistAiThinking.methodPtr);
      if ( !this )
        goto LABEL_150;
      AiState__setBeforeAction((AiState_o *)this, aiActType, aiEnt->fields.aiActId, 0LL);
      v57 = noMessage;
      v58 = (ServantAiActArgument_o *)sub_B2C42C(ServantAiActArgument_TypeInfo);
      ServantAiActArgument___ctor(v58, v32, (AiBaseEntity_o *)aiEnt, svtData, v57, 0LL);
      if ( aiActType != 71 )
      {
        this = (BattleLogicEnemyAi_o *)BattleLogicBaseAi__SetNoTargetAiActTask(
                                         v12,
                                         (System_Collections_Generic_List_BattleLogicTask__o *)v48,
                                         aiActType,
                                         (BaseAiActArgument_o *)v58,
                                         v59);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
LABEL_77:
          if ( !v48 )
            goto LABEL_150;
          goto LABEL_78;
        }
        this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_150;
        MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)this,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
        SkillInfoDataByAiActType = BattleServantData__getSkillInfoDataByAiActType(svtData, aiActType, 0LL);
        v73 = SkillInfoDataByAiActType;
        v145 = v12;
        v142 = countAct;
        if ( SkillInfoDataByAiActType )
        {
          this = (BattleLogicEnemyAi_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))SkillInfoDataByAiActType->klass->vtable._5_get_skillId.method)(
                                           SkillInfoDataByAiActType,
                                           SkillInfoDataByAiActType->klass->vtable._6_get_IndividualityArray.methodPtr);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_150;
          Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, (int32_t)this, v73->fields.skilllv, 0LL);
        }
        else
        {
          Entity = 0LL;
        }
        if ( AiAct__isSkillType(aiActType, 0LL) )
        {
          v81 = 1;
          if ( !Entity || !v73 )
            goto LABEL_97;
          funcId = (struct BattleLogicTarget_o *)Entity->fields.funcId;
          logic = v145->fields.logic;
          this = (BattleLogicEnemyAi_o *)SkillLvEntity__getDataValsList(Entity, 0LL);
          if ( !logic )
            goto LABEL_150;
          v84 = this;
          v85 = logic;
          logictarget = funcId;
        }
        else
        {
          if ( aiActType != 80 )
            goto LABEL_96;
          this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_150;
          v87 = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
          this = (BattleLogicEnemyAi_o *)BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
          if ( !v87 )
            goto LABEL_150;
          this = (BattleLogicEnemyAi_o *)TreasureDvcLvMaster__GetEntity(
                                           v87,
                                           (int32_t)this,
                                           svtData->fields.treasuredvcLevel,
                                           0LL);
          if ( !this )
          {
LABEL_96:
            v81 = 1;
            goto LABEL_97;
          }
          if ( !v145->fields.logic )
            goto LABEL_150;
          logictarget = this->fields.logictarget;
          v85 = v145->fields.logic;
          v84 = 0LL;
        }
        v81 = BattleLogic__checkEnemyTargetFunction(v85, (System_Int32_array *)logictarget, (DataVals_array *)v84, 0LL);
LABEL_97:
        this = (BattleLogicEnemyAi_o *)v145->fields.logictarget;
        if ( !this )
          goto LABEL_150;
        v88 = v145[1].fields.logic;
        this->fields.logic = v88;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.logic,
          (System_Int32_array **)v88,
          v75,
          v76,
          v77,
          v78,
          v79,
          v80);
        if ( Entity && v73 )
          IsEnableTarget = SkillLvEntity__IsEnableTarget(Entity, v81, 0LL);
        else
          IsEnableTarget = v81;
        skillInfo = v73;
        v141 = v48;
        this = (BattleLogicEnemyAi_o *)sub_B2C374(int___TypeInfo, 1LL);
        targetlist = (System_Int32_array *)this;
        if ( !v145->fields.data )
          goto LABEL_150;
        v89 = v145->fields.logictarget;
        target = v32->fields.target;
        uniqueId = svtData->fields.uniqueId;
        targetIndividuality = v32->fields.targetIndividuality;
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v145->fields.data, 0LL, 0LL);
        this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(
                                         (BattleLogicEnemyAi_o *)v145,
                                         aiEnt,
                                         v94);
        if ( !v89 )
          goto LABEL_150;
        this = (BattleLogicEnemyAi_o *)BattleLogicTarget__getTargetAiAct(
                                         v89,
                                         target,
                                         uniqueId,
                                         targetIndividuality,
                                         FieldPlayerServantIDList,
                                         IsEnableTarget,
                                         0,
                                         0LL,
                                         v32,
                                         (unsigned __int8)this & 1,
                                         0LL);
        if ( !targetlist )
          goto LABEL_150;
        if ( targetlist->max_length )
        {
          targetlist->m_Items[1] = (int)this;
          this = (BattleLogicEnemyAi_o *)sub_B2C374(int___TypeInfo, 1LL);
          if ( !v145->fields.data )
            goto LABEL_150;
          v95 = v145->fields.logictarget;
          v96 = v32->fields.target;
          v97 = svtData->fields.uniqueId;
          v98 = v32->fields.targetIndividuality;
          v99 = (System_Int32_array *)this;
          this = (BattleLogicEnemyAi_o *)BattleData__getFieldEnemyServantIDList(v145->fields.data, 0, 0LL);
          if ( !v95 )
            goto LABEL_150;
          this = (BattleLogicEnemyAi_o *)BattleLogicTarget__getTargetAiAct(
                                           v95,
                                           v96,
                                           v97,
                                           v98,
                                           (System_Int32_array *)this,
                                           0,
                                           0,
                                           0LL,
                                           v32,
                                           1,
                                           0LL);
          if ( !v99 )
            goto LABEL_150;
          if ( v99->max_length )
          {
            v99->m_Items[1] = (int)this;
            this = (BattleLogicEnemyAi_o *)v145->fields.logictarget;
            if ( !this )
              goto LABEL_150;
            this->fields.logic = 0LL;
            sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.logic, 0LL, v100, v101, v102, v103, v104, v105);
            this = (BattleLogicEnemyAi_o *)v145->fields.logic;
            if ( !this )
              goto LABEL_150;
            *(_BYTE *)(v49 + 168) = (v144 == 1) & (BattleLogic__GetLogicType((BattleLogic_o *)this, 0LL) == 42);
            if ( !AiAct__isAttackType(aiActType, 0LL) )
            {
              this = (BattleLogicEnemyAi_o *)AiAct__isSkillType(aiActType, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                this = (BattleLogicEnemyAi_o *)BattleServantData__get_BuffData(svtData, 0LL);
                if ( !this )
                  goto LABEL_150;
                BattleBuffData__UpdateSkillRelationBuff((BattleBuffData_o *)this, 0LL);
                if ( skillInfo )
                {
                  BattleLogicBaseAi__SetSkillSelectAddIndex(
                    (BattleLogicBaseAi_o *)this,
                    skillInfo,
                    (AiBaseEntity_o *)aiEnt,
                    v113);
                  BattleLogicTask__setActionSkill((BattleLogicTask_o *)v49, skillInfo, targetlist, v99, 0, 0, 0LL);
                  BattleLogicTask__setActor((BattleLogicTask_o *)v49, 3, svtData->fields.uniqueId, 0LL);
                  *(_BYTE *)(v49 + 169) = 1;
                  if ( !v141 )
                    goto LABEL_150;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v141,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v49,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                  v114 = (BattleLogicTask_o *)sub_B2C42C(BattleLogicTask_TypeInfo);
                  BattleLogicTask___ctor(v114, 0LL);
                  v115 = (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                  v116 = v141;
                  v117 = (EventMissionProgressRequest_Argument_ProgressData_o *)v114;
                  goto LABEL_147;
                }
              }
              else if ( aiActType == 80 )
              {
                BattleLogicTask__setActor((BattleLogicTask_o *)v49, 3, svtData->fields.uniqueId, 0LL);
                *(_QWORD *)(v49 + 32) = targetlist;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)(v49 + 32),
                  (System_Int32_array **)targetlist,
                  v118,
                  v119,
                  v120,
                  v121,
                  v122,
                  v123);
                v124 = (BattleCommandData_o *)sub_B2C42C(BattleCommandData_TypeInfo);
                BattleCommandData___ctor(v124, 0LL);
                this = (BattleLogicEnemyAi_o *)BattleServantData__getTreasureDvcCardId(svtData, 0LL);
                if ( v124 )
                {
                  v124->fields._type = (int)this;
                  v124->fields.svtlimit = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
                  v124->fields.uniqueId = svtData->fields.uniqueId;
                  v124->fields.svtId = BattleServantData__getSvtId(svtData, 0LL);
                  v124->fields.treasureDvc = BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
                  v125 = (BattleComboData_o *)sub_B2C42C(BattleComboData_TypeInfo);
                  BattleComboData___ctor(v125, 0LL);
                  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v49, v125, v124, v142, 0LL);
                  TreasureDvcId = BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
                  BattleLogicTask__setActionTreasureDvc((BattleLogicTask_o *)v49, TreasureDvcId, 1, 0LL);
                  if ( v141 )
                  {
LABEL_146:
                    v116 = v141;
                    v117 = (EventMissionProgressRequest_Argument_ProgressData_o *)v49;
                    v115 = (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__;
LABEL_147:
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                      v116,
                      v117,
                      v115);
                    goto LABEL_148;
                  }
                }
LABEL_150:
                sub_B2C434(this, svtData);
              }
              if ( !v141 )
                goto LABEL_150;
LABEL_148:
              v70 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v141;
              return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                v70,
                                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
            }
            *(_QWORD *)(v49 + 32) = targetlist;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)(v49 + 32),
              (System_Int32_array **)targetlist,
              v106,
              v107,
              v108,
              v109,
              v110,
              v111);
            if ( SvtType__IsEnemy_31532108(svtData->fields.svtType, 0LL) )
            {
              Type = 10;
              goto LABEL_141;
            }
            if ( AiAct__isAttackArts(aiActType, 0LL) )
            {
              Type = 1;
              goto LABEL_141;
            }
            if ( AiAct__isAttackBuster(aiActType, 0LL) )
            {
              Type = 2;
              goto LABEL_141;
            }
            if ( AiAct__isAttackQuick(aiActType, 0LL) )
            {
              Type = 3;
              goto LABEL_141;
            }
            v127 = (WeightRate_int__o *)sub_B2C42C(WeightRate_int__TypeInfo);
            WeightRate_int____ctor(v127, (const MethodInfo_29E4118 *)Method_WeightRate_int___ctor__);
            this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi__GetCommandArray(
                                             (BattleLogicEnemyAi_o *)v145,
                                             svtData,
                                             v128);
            if ( !this )
              goto LABEL_150;
            v129 = this->fields.logic;
            v130 = this;
            if ( (int)v129 < 1 )
            {
LABEL_139:
              if ( !v127 )
                goto LABEL_150;
              v132 = BattleRandom__getNext(v127->fields.totalweight, 0LL);
              v133 = WeightRate_int___getData(v127, v132, (const MethodInfo_29E3764 *)Method_WeightRate_int__getData__);
              Type = BattleCommand__getType(v133, 0LL);
LABEL_141:
              SvtId = BattleServantData__getSvtId(svtData, 0LL);
              DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
              v136 = (BattleCommandData_o *)sub_B2C42C(BattleCommandData_TypeInfo);
              BattleCommandData___ctor_18363144(v136, Type, SvtId, DispLimitCount, 0, 0LL);
              if ( v136 )
              {
                v136->fields.uniqueId = svtData->fields.uniqueId;
                if ( AiAct__isAttackCritical(aiActType, 0LL) )
                {
                  BattleCommandData__SetCriticalDecisionType(v136, 2, 0LL);
                  aiActType = 2;
                }
                else
                {
                  BattleCommandData__SetCriticalDecisionType(v136, 1, 0LL);
                }
                v137 = (BattleComboData_o *)sub_B2C42C(BattleComboData_TypeInfo);
                BattleComboData___ctor(v137, 0LL);
                BattleLogicTask__setActionCommand((BattleLogicTask_o *)v49, v137, v136, v142, 0LL);
                if ( v141 )
                  goto LABEL_146;
              }
              goto LABEL_150;
            }
            v131 = 0LL;
            while ( v131 < (unsigned int)v129 )
            {
              if ( !v127 )
                goto LABEL_150;
              WeightRate_int___setWeight(
                v127,
                10,
                *((_DWORD *)&v130->fields.logictarget + v131),
                (const MethodInfo_29E32E0 *)Method_WeightRate_int__setWeight__);
              LODWORD(v129) = v130->fields.logic;
              if ( (__int64)++v131 >= (int)v129 )
                goto LABEL_139;
            }
          }
        }
        v138 = sub_B2C460(this);
        sub_B2C400(v138, 0LL);
      }
      this = (BattleLogicEnemyAi_o *)AiBaseEntity__getActionValue((AiBaseEntity_o *)aiEnt, 0LL);
      v146 = (int)this;
      if ( (int)this < 1 )
        goto LABEL_77;
      v60 = System_Int32__ToString((int32_t)&v146, 0LL);
      v61 = System_String__Concat_44305532((System_String_o *)StringLiteral_8787/*"MOTION_"*/, v60, 0LL);
      BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v49, v61, 0LL);
      v62 = v12->fields.logic;
      if ( !v62 )
        goto LABEL_150;
      this = (BattleLogicEnemyAi_o *)v62->fields.perf;
      if ( !this )
        goto LABEL_150;
      ServantGameObject = (System_Int32_array **)BattlePerformance__getServantGameObject(
                                                   (BattlePerformance_o *)this,
                                                   svtData->fields.uniqueId,
                                                   0LL);
      *(_QWORD *)(v49 + 112) = ServantGameObject;
      sub_B2C2F8((BattleServantConfConponent_o *)(v49 + 112), ServantGameObject, v64, v65, v66, v67, v68, v69);
      BattleLogicTask__setActor((BattleLogicTask_o *)v49, 3, svtData->fields.uniqueId, 0LL);
      if ( !v48 )
        goto LABEL_150;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v48,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v49,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
LABEL_78:
      v70 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v48;
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        v70,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_418A751 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData__Clear__, method);
    byte_418A751 = 1;
  }
  actlist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.actlist;
  if ( !actlist )
    goto LABEL_13;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    actlist,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_BattleServantData__Clear__);
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
        v8 = sub_B2C460(actlist);
        sub_B2C400(v8, 0LL);
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
    sub_B2C434(actlist, method);
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

  if ( (byte_418A74F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, *(_QWORD *)&ltype);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v6);
    byte_418A74F = 1;
  }
  BattleLogicEnemyAi__ExcludeDeadFromTempDead(this, *(const MethodInfo **)&ltype);
  TaskAIAttack = BattleLogicEnemyAi__CreateTaskAIAttack(this, v7, data, v8);
  if ( !TaskAIAttack )
    sub_B2C434(0LL, v10);
  v11 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)TaskAIAttack;
  if ( TaskAIAttack->fields._size >= 1 )
    BattleLogicEnemyAi__ClearTempDeadSvt(this, v10);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    v11,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicEnemyAi__taskAIDead(
        BattleLogicEnemyAi_o *this,
        int32_t actUniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  __int64 v11; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v13; // x21
  struct AiActMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct BattleData_o *v21; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418A755 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_AiActMaster___, *(_QWORD *)&actUniqueId);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418A755 = 1;
  }
  info = 0LL;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__getServantData(data, actUniqueId, 0LL);
  if ( !data )
    goto LABEL_16;
  v13 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
    goto LABEL_14;
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__checkAlivePlayers(data, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_14;
  data = (BattleData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (struct AiActMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)data,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = MasterData_WarQuestSelectionMaster;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.aiActMst,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = this->fields.data;
  if ( !v21 )
    goto LABEL_16;
  data = (BattleData_o *)this->fields.aiLogic;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)AiLogic__getAction(
                           (AiLogic_o *)data,
                           v13,
                           2,
                           v21->fields.turnCount,
                           0,
                           (BattleLogicBaseAi_o *)this,
                           &info,
                           0,
                           0LL);
  if ( !data )
  {
LABEL_14:
    if ( v10 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_16:
    sub_B2C434(data, v11);
  }
  data = (BattleData_o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, BattleData_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._19_procAiAct.method)(
                           this,
                           v13,
                           data,
                           0LL,
                           info,
                           0LL,
                           this->klass->vtable._20_ExistThinking.methodPtr);
  if ( !v10 )
    goto LABEL_16;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v10,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicEnemyAi__taskAIEnemyMaxNp(
        BattleLogicEnemyAi_o *this,
        int32_t actUniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  __int64 v11; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v13; // x21
  struct AiActMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct BattleData_o *v21; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418A756 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_AiActMaster___, *(_QWORD *)&actUniqueId);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418A756 = 1;
  }
  info = 0LL;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__getServantData(data, actUniqueId, 0LL);
  if ( !data )
    goto LABEL_16;
  v13 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_14;
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__checkAlivePlayers(data, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_14;
  data = (BattleData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (struct AiActMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)data,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = MasterData_WarQuestSelectionMaster;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.aiActMst,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = this->fields.data;
  if ( !v21 )
    goto LABEL_16;
  data = (BattleData_o *)this->fields.aiLogic;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)AiLogic__getAction(
                           (AiLogic_o *)data,
                           v13,
                           7,
                           v21->fields.turnCount,
                           0,
                           (BattleLogicBaseAi_o *)this,
                           &info,
                           0,
                           0LL);
  if ( !data )
  {
LABEL_14:
    if ( v10 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_16:
    sub_B2C434(data, v11);
  }
  data = (BattleData_o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, BattleData_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._19_procAiAct.method)(
                           this,
                           v13,
                           data,
                           0LL,
                           info,
                           0LL,
                           this->klass->vtable._20_ExistThinking.methodPtr);
  if ( !v10 )
    goto LABEL_16;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v10,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicEnemyAi__updateActPriorityList(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  BattleLogicEnemyAi_o *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
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
  struct System_Collections_Generic_List_BattleServantData__o *actlist; // x8
  BattleServantConfConponent_o *p_actlist; // x19
  System_Collections_Generic_IEnumerable_TSource__o *FieldEnemyServantList; // x21
  BattleLogicEnemyAi___c_c *v23; // x8
  struct BattleLogicEnemyAi___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__22_0; // x22
  Il2CppObject *v26; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  BattleLogicEnemyAi___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x21
  struct BattleLogicEnemyAi___c_StaticFields *v37; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__22_1; // x22
  Il2CppObject *v39; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v47; // x0
  BattleLogicEnemyAi___c_c *v48; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v49; // x21
  struct BattleLogicEnemyAi___c_StaticFields *v50; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__22_2; // x22
  Il2CppObject *v52; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v60; // x0
  BattleLogicEnemyAi___c_c *v61; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v62; // x21
  struct BattleLogicEnemyAi___c_StaticFields *v63; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__22_3; // x22
  Il2CppObject *v65; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x0
  System_Int32_array **v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  struct BattleData_o *data; // x8
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *klass; // x20
  void *dicAiActFunc; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v84; // x21
  Il2CppObject *v85; // x22
  struct BattleLogicEnemyAi___c_StaticFields *v86; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Int32_array **All; // x0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7

  v2 = this;
  if ( (byte_418A752 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderByDescending_BattleServantData__int___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_BattleServantData___, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BattleServantData___, v5);
    sub_B2C35C(&Method_System_Func_BattleServantData__bool___ctor__, v6);
    sub_B2C35C(&Method_System_Func_BattleServantData__int___ctor__, v7);
    sub_B2C35C(&System_Func_BattleServantData__bool__TypeInfo, v8);
    sub_B2C35C(&System_Func_BattleServantData__int__TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData__FindAll__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v11);
    sub_B2C35C(&Method_System_Predicate_BattleServantData___ctor__, v12);
    sub_B2C35C(&System_Predicate_BattleServantData__TypeInfo, v13);
    sub_B2C35C(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__22_0__, v14);
    sub_B2C35C(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__22_1__, v15);
    sub_B2C35C(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__22_2__, v16);
    sub_B2C35C(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__22_3__, v17);
    sub_B2C35C(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__22_4__, v18);
    this = (BattleLogicEnemyAi_o *)sub_B2C35C(&BattleLogicEnemyAi___c_TypeInfo, v19);
    byte_418A752 = 1;
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
    v23 = BattleLogicEnemyAi___c_TypeInfo;
    if ( (BYTE3(BattleLogicEnemyAi___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v23 = BattleLogicEnemyAi___c_TypeInfo;
    }
    static_fields = v23->static_fields;
    _9__22_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__22_0;
    if ( !_9__22_0 )
    {
      if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        static_fields = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      }
      v26 = (Il2CppObject *)static_fields->__9;
      _9__22_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__22_0,
        v26,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__22_0__,
        (const MethodInfo_2711C04 *)Method_System_Func_BattleServantData__bool___ctor__);
      v27 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v27->__9__22_0 = (struct System_Func_BattleServantData__bool__o *)_9__22_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v27->__9__22_0,
        (System_Int32_array **)_9__22_0,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    v34 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            FieldEnemyServantList,
            (System_Func_TSource__bool__o *)_9__22_0,
            (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
    v35 = BattleLogicEnemyAi___c_TypeInfo;
    v36 = v34;
    if ( (BYTE3(BattleLogicEnemyAi___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v35 = BattleLogicEnemyAi___c_TypeInfo;
    }
    v37 = v35->static_fields;
    _9__22_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v37->__9__22_1;
    if ( !_9__22_1 )
    {
      if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        v37 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      }
      v39 = (Il2CppObject *)v37->__9;
      _9__22_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_BattleServantData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__22_1,
        v39,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__22_1__,
        (const MethodInfo_27127B0 *)Method_System_Func_BattleServantData__int___ctor__);
      v40 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v40->__9__22_1 = (struct System_Func_BattleServantData__int__o *)_9__22_1;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v40->__9__22_1,
        (System_Int32_array **)_9__22_1,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
    }
    v47 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
            v36,
            (System_Func_TSource__TKey__o *)_9__22_1,
            (const MethodInfo_1A93A04 *)Method_System_Linq_Enumerable_OrderByDescending_BattleServantData__int___);
    v48 = BattleLogicEnemyAi___c_TypeInfo;
    v49 = v47;
    if ( (BYTE3(BattleLogicEnemyAi___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v48 = BattleLogicEnemyAi___c_TypeInfo;
    }
    v50 = v48->static_fields;
    _9__22_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v50->__9__22_2;
    if ( !_9__22_2 )
    {
      if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v48);
        v50 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      }
      v52 = (Il2CppObject *)v50->__9;
      _9__22_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_BattleServantData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__22_2,
        v52,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__22_2__,
        (const MethodInfo_27127B0 *)Method_System_Func_BattleServantData__int___ctor__);
      v53 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v53->__9__22_2 = (struct System_Func_BattleServantData__int__o *)_9__22_2;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v53->__9__22_2,
        (System_Int32_array **)_9__22_2,
        v54,
        v55,
        v56,
        v57,
        v58,
        v59);
    }
    v60 = System_Linq_Enumerable__ThenByDescending_WarBoardManager_TaskList__int_(
            v49,
            (System_Func_TSource__TKey__o *)_9__22_2,
            (const MethodInfo_1A9AAC0 *)Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
    v61 = BattleLogicEnemyAi___c_TypeInfo;
    v62 = v60;
    if ( (BYTE3(BattleLogicEnemyAi___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v61 = BattleLogicEnemyAi___c_TypeInfo;
    }
    v63 = v61->static_fields;
    _9__22_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v63->__9__22_3;
    if ( !_9__22_3 )
    {
      if ( (BYTE3(v61->vtable._0_Equals.methodPtr) & 4) != 0 && !v61->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v61);
        v63 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      }
      v65 = (Il2CppObject *)v63->__9;
      _9__22_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_BattleServantData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__22_3,
        v65,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__22_3__,
        (const MethodInfo_27127B0 *)Method_System_Func_BattleServantData__int___ctor__);
      v66 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v66->__9__22_3 = (struct System_Func_BattleServantData__int__o *)_9__22_3;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v66->__9__22_3,
        (System_Int32_array **)_9__22_3,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72);
    }
    v73 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_WarBoardManager_TaskList__int_(
                                                                 v62,
                                                                 (System_Func_TSource__TKey__o *)_9__22_3,
                                                                 (const MethodInfo_1A9AAC0 *)Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
    v74 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                   v73,
                                   (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_BattleServantData___);
    p_actlist->klass = (BattleServantConfConponent_c *)v74;
    sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.actlist, v74, v75, v76, v77, v78, v79, v80);
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
  v84 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)*((_QWORD *)dicAiActFunc + 5);
  if ( !v84 )
  {
    if ( (BYTE3(this[2].fields.dicAiActFunc) & 4) != 0 && !LODWORD(this[1].fields.tempDeadSvtHash) )
    {
      j_il2cpp_runtime_class_init_0(this);
      dicAiActFunc = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    }
    v85 = *(Il2CppObject **)dicAiActFunc;
    v84 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v84,
      v85,
      Method_BattleLogicEnemyAi___c__updateActPriorityList_b__22_4__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_BattleServantData___ctor__);
    v86 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    v86->__9__22_4 = (struct System_Predicate_BattleServantData__o *)v84;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v86->__9__22_4,
      (System_Int32_array **)v84,
      v87,
      v88,
      v89,
      v90,
      v91,
      v92);
  }
  if ( !klass )
LABEL_51:
    sub_B2C434(this, method);
  All = (System_Int32_array **)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                 klass,
                                 (System_Predicate_T__o *)v84,
                                 (const MethodInfo_2EF4DE8 *)Method_System_Collections_Generic_List_BattleServantData__FindAll__);
  p_actlist->klass = (BattleServantConfConponent_c *)All;
  sub_B2C2F8(p_actlist, All, v94, v95, v96, v97, v98, v99);
}


void __fastcall BattleLogicEnemyAi___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_418717C & 1) == 0 )
  {
    sub_B2C35C(&BattleLogicEnemyAi___c_TypeInfo, v1);
    byte_418717C = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleLogicEnemyAi___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleLogicEnemyAi___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return BattleServantData__GetOriginalRemainingNeedActCount(x, 0LL);
}


int32_t __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__22_2(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.actPriority;
}


int32_t __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__22_3(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return BattleServantData__getDeckIndex(x, 0LL);
}


bool __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__22_4(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return BattleServantData__GetRemainingNeedActCount(x, 0LL) > 0;
}