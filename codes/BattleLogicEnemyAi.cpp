void __fastcall BattleLogicEnemyAi___ctor(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4217000 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_BattleServantData__TypeInfo, v4);
    byte_4217000 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_BattleServantData__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this->fields.actlist = (struct System_Collections_Generic_List_BattleServantData__o *)v5;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.actlist, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  BattleLogicServantAi___ctor((BattleLogicServantAi_o *)this, 0LL);
}


void __fastcall BattleLogicEnemyAi__AddActCount(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  if ( !svtData || (++svtData->fields.actionCount, (data = this->fields.data) == 0LL) )
    sub_B0D97C(this);
  ++data->fields.countEnemyAttack;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicEnemyAi__AddTempDeadSvt(
        BattleLogicEnemyAi_o *this,
        int32_t svtUniqueId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x0

  if ( (byte_4216FF8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, *(_QWORD *)&svtUniqueId);
    byte_4216FF8 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
    System_Collections_Generic_HashSet_int___Add(
      tempDeadSvtHash,
      svtUniqueId,
      (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
  __int64 v22; // x2
  const MethodInfo *v23; // x4
  struct System_Int32_array *skillVals; // x8
  int32_t v25; // w21
  int32_t v26; // w22
  BattleSkillInfoData_o *v27; // x20
  char v28; // w22
  BattleLogicEnemyAi_o *v29; // x0
  const MethodInfo *v30; // x4
  int32_t Next; // w0
  int32_t Data; // w0
  bool v33; // zf
  int32_t v34; // w8
  _BOOL4 isUseSelfSkill; // w0
  AiLogic_AiInfo_CheckedInfo_o *v36; // x21

  v9 = skillFlg;
  if ( (byte_4216FFC & 1) == 0 )
  {
    sub_B0D8A4(&AiLogic_AiInfo_CheckedInfo_TypeInfo, skillFlg);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B0D8A4(&Method_WeightRate_int___ctor__, v13);
    sub_B0D8A4(&Method_WeightRate_int__getCount__, v14);
    sub_B0D8A4(&Method_WeightRate_int__getData__, v15);
    sub_B0D8A4(&Method_WeightRate_int__getTotalWeight__, v16);
    sub_B0D8A4(&Method_WeightRate_int__setWeight__, v17);
    sub_B0D8A4(&WeightRate_int__TypeInfo, v18);
    byte_4216FFC = 1;
  }
  v19 = (WeightRate_int__o *)sub_B0D974(WeightRate_int__TypeInfo, skillFlg, svtData);
  WeightRate_int____ctor(v19, (const MethodInfo_2ADF078 *)Method_WeightRate_int___ctor__);
  if ( actType <= 13 )
  {
    switch ( actType )
    {
      case 10:
        if ( v9 )
          BattleLogicEnemyAi__SetSkillRandomWeightSameProbability(Int, v19, 10, svtData, v23);
        if ( !v19 )
          goto LABEL_46;
        if ( WeightRate_int___getCount(v19, (const MethodInfo_2ADE5E0 *)Method_WeightRate_int__getCount__) < 1 )
          goto LABEL_26;
        goto LABEL_31;
      case 11:
        if ( !svtData )
          goto LABEL_46;
        v28 = !v9;
        v33 = !BattleServantData__isUseSelfSkill(svtData, 0, 0LL) || !v9;
        v34 = 11;
        goto LABEL_38;
      case 12:
        if ( !svtData )
          goto LABEL_46;
        v28 = !v9;
        v33 = !BattleServantData__isUseSelfSkill(svtData, 1, 0LL) || !v9;
        v34 = 12;
LABEL_38:
        v27 = 0LL;
        if ( v33 )
          actType = 2;
        else
          actType = v34;
        goto LABEL_45;
      case 13:
        if ( !svtData )
          goto LABEL_46;
        v28 = !v9;
        isUseSelfSkill = BattleServantData__isUseSelfSkill(svtData, 2, 0LL);
        v27 = 0LL;
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
          (const MethodInfo_2ADE240 *)Method_WeightRate_int__setWeight__);
        if ( v9 )
          BattleLogicEnemyAi__SetSkillRandomWeightSameProbability(v29, v19, 10, svtData, v30);
LABEL_31:
        Next = BattleRandom__getNext(v19->fields.totalweight, 0LL);
        Data = WeightRate_int___getData(v19, Next, (const MethodInfo_2ADE6C4 *)Method_WeightRate_int__getData__);
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
      v28 = 0;
      v27 = 0LL;
      goto LABEL_45;
    }
    if ( svtData )
    {
      if ( BattleServantData__isNobleAction(svtData, 0LL)
        && TreasureDeviceConditionUtil__IsSatisfyEachCondition(svtData, this->fields.data, 0LL) )
      {
        v28 = 0;
        v27 = 0LL;
        actType = 80;
        goto LABEL_45;
      }
      goto LABEL_26;
    }
LABEL_46:
    sub_B0D97C(Int);
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
    v27 = 0LL;
    v28 = 1;
    actType = 2;
    goto LABEL_45;
  }
  v25 = skillVals->m_Items[1];
  v26 = skillVals->m_Items[2];
  Int = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Int )
    goto LABEL_46;
  Int = (BattleLogicEnemyAi_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Int,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !Int )
    goto LABEL_46;
  if ( !SkillLvMaster__GetEntity((SkillLvMaster_o *)Int, v25, v26, 0LL) )
    goto LABEL_32;
  Int = (BattleLogicEnemyAi_o *)BattleSkillInfoData__MakeSkillData(20, 0LL);
  if ( !svtData )
    goto LABEL_46;
  v27 = BattleServantData__SetSkillInfo(svtData, (BattleSkillInfoData_o *)Int, 20, 0, v25, v26, -1LL, -1, 0LL);
  v28 = 0;
LABEL_45:
  v36 = (AiLogic_AiInfo_CheckedInfo_o *)sub_B0D974(AiLogic_AiInfo_CheckedInfo_TypeInfo, v21, v22);
  AiLogic_AiInfo_CheckedInfo___ctor(v36, actType, v28 & 1, v27, 0LL);
  return v36;
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
  const MethodInfo *v12; // x5
  BattleServantData_o *v13; // x23
  const MethodInfo *v14; // x3
  AiLogic_AiInfo_CheckedInfo_o *v15; // x20
  bool v16; // w26
  __int64 v17; // x10
  AiEntity_o *v18; // x19
  BattleLogicTarget_o *logictarget; // x27
  int32_t age; // w28
  int32_t uniqueId; // w22
  struct System_String_o *name; // x20
  System_Int32_array *FieldPlayerServantIDList; // x0
  AiActEntity_o *aiActEnt; // x24
  System_Int32_array *v25; // x25
  const MethodInfo *v26; // x2
  System_Int32_array *v27; // x25
  BattleLogicTarget_o *v28; // x20
  int32_t v29; // w22
  int32_t v30; // w23
  struct System_String_o *v31; // x26
  AiLogic_o *aiLogic; // x20
  __int64 v34; // x0
  AiBaseEntity_o *aiBaseEntitya; // [xsp+18h] [xbp-78h]
  AiLogic_AiInfo_CheckedInfo_o *v36; // [xsp+20h] [xbp-70h]
  AiLogic_AiInfo_o *v37; // [xsp+28h] [xbp-68h]
  System_Int32_array *v38; // [xsp+30h] [xbp-60h]
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4216FFF & 1) == 0 )
  {
    sub_B0D8A4(&AiEntity_TypeInfo, aiInfo);
    sub_B0D8A4(&Method_DataManager_GetMaster_AiActMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__, v9);
    sub_B0D8A4(&int___TypeInfo, v10);
    byte_4216FFF = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !aiBaseEntity || !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
          &entity,
          aiBaseEntity->fields.aiActId,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__) )
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
  v13 = (BattleServantData_o *)Master_WarQuestSelectionMaster;
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
                                              v13,
                                              (AiActEntity_o *)entity,
                                              *(&entity->fields.id + 1),
                                              v12);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  v15 = (AiLogic_AiInfo_CheckedInfo_o *)Master_WarQuestSelectionMaster;
  v16 = BattleLogicEnemyAi__CheckHate(this, *(_DWORD *)(Master_WarQuestSelectionMaster + 16), v13, v14);
  v17 = *(&AiEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&aiBaseEntity->klass->_2.bitflags2 + 1) >= (unsigned int)v17 )
    v18 = (AiEntity_c *)aiBaseEntity->klass->_2.typeHierarchy[v17 - 1] == AiEntity_TypeInfo
        ? (AiEntity_o *)aiBaseEntity
        : 0LL;
  else
    v18 = 0LL;
  Master_WarQuestSelectionMaster = sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !entity )
    goto LABEL_42;
  if ( !v13 )
    goto LABEL_42;
  aiBaseEntitya = aiBaseEntity;
  v36 = v15;
  v37 = aiInfo;
  v38 = (System_Int32_array *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (__int64)this->fields.data;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  logictarget = this->fields.logictarget;
  age = (int32_t)entity->fields.age;
  uniqueId = v13->fields.uniqueId;
  name = entity->fields.name;
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(
                               (BattleData_o *)Master_WarQuestSelectionMaster,
                               0LL,
                               0LL);
  aiActEnt = (AiActEntity_o *)entity;
  v25 = FieldPlayerServantIDList;
  Master_WarQuestSelectionMaster = BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(this, v18, v26);
  if ( !logictarget )
    goto LABEL_42;
  Master_WarQuestSelectionMaster = BattleLogicTarget__getTargetAiAct(
                                     logictarget,
                                     age,
                                     uniqueId,
                                     (System_Int32_array *)name,
                                     v25,
                                     v16,
                                     0,
                                     0LL,
                                     aiActEnt,
                                     Master_WarQuestSelectionMaster & 1,
                                     0LL);
  if ( !v38 )
    goto LABEL_42;
  if ( !v38->max_length )
    goto LABEL_43;
  v38->m_Items[1] = Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !entity )
    goto LABEL_42;
  v27 = (System_Int32_array *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (__int64)this->fields.data;
  if ( !Master_WarQuestSelectionMaster
    || (v28 = this->fields.logictarget,
        v29 = (int32_t)entity->fields.age,
        v30 = v13->fields.uniqueId,
        v31 = entity->fields.name,
        Master_WarQuestSelectionMaster = (__int64)BattleData__getFieldEnemyServantIDList(
                                                    (BattleData_o *)Master_WarQuestSelectionMaster,
                                                    0,
                                                    0LL),
        !v28)
    || (Master_WarQuestSelectionMaster = BattleLogicTarget__getTargetAiAct(
                                           v28,
                                           v29,
                                           v30,
                                           (System_Int32_array *)v31,
                                           (System_Int32_array *)Master_WarQuestSelectionMaster,
                                           0,
                                           0,
                                           0LL,
                                           (AiActEntity_o *)entity,
                                           1,
                                           0LL),
        !v27) )
  {
LABEL_42:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  if ( !v27->max_length )
  {
LABEL_43:
    v34 = sub_B0D9A8(Master_WarQuestSelectionMaster);
    sub_B0D948(v34, 0LL);
  }
  v27->m_Items[1] = Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (__int64)entity;
  if ( !entity )
    goto LABEL_42;
  aiLogic = this->fields.aiLogic;
  Master_WarQuestSelectionMaster = AiActEntity__GetNoTargetNoActionType((AiActEntity_o *)entity, 0LL);
  if ( !aiLogic )
    goto LABEL_42;
  if ( AiLogic__IsNoTargetNoActionTask(aiLogic, Master_WarQuestSelectionMaster, v38, v27, 0LL) )
    return 0;
  AiLogic_AiInfo__SetCheckedResult(v37, aiBaseEntitya, v36, 0LL);
  return 1;
}


bool __fastcall BattleLogicEnemyAi__CheckEnemyShiftAfter(
        BattleLogicEnemyAi_o *this,
        int32_t actUniqueId,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data || (data = (BattleData_o *)BattleData__getServantData(data, actUniqueId, 0LL), !this->fields.aiLogic) )
    sub_B0D97C(data);
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
  SkillLvMaster_o *v10; // x21
  BattleSkillInfoData_o *SkillInfoDataByAiActType; // x0
  BattleSkillInfoData_o *v12; // x19
  SkillLvEntity_o *Entity; // x21
  bool v14; // w0
  struct BattleLogic_o *logic; // x20
  System_Int32_array *funcId; // x22
  DataVals_array *v17; // x2
  BattleLogic_o *v18; // x0
  System_Int32_array *lookup; // x1
  TreasureDvcLvMaster_o *MasterData_WarQuestSelectionMaster; // x23

  if ( (byte_4216FFE & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&actType);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4216FFE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !svtData )
    goto LABEL_26;
  v10 = (SkillLvMaster_o *)Instance;
  SkillInfoDataByAiActType = BattleServantData__getSkillInfoDataByAiActType(svtData, actType, 0LL);
  v12 = SkillInfoDataByAiActType;
  if ( SkillInfoDataByAiActType )
  {
    Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))SkillInfoDataByAiActType->klass->vtable._5_get_skillId.method)(
                                  SkillInfoDataByAiActType,
                                  SkillInfoDataByAiActType->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !v10 )
      goto LABEL_26;
    Entity = SkillLvMaster__GetEntity(v10, (int32_t)Instance, v12->fields.skilllv, 0LL);
  }
  else
  {
    Entity = 0LL;
  }
  if ( AiAct__isSkillType(actType, 0LL) )
  {
    v14 = 1;
    if ( !Entity || !v12 )
    {
LABEL_21:
      if ( !Entity )
        return v14;
      goto LABEL_22;
    }
    logic = this->fields.logic;
    funcId = Entity->fields.funcId;
    Instance = (DataManager_o *)SkillLvEntity__getDataValsList(Entity, 0LL);
    if ( logic )
    {
      v17 = (DataVals_array *)Instance;
      v18 = logic;
      lookup = funcId;
LABEL_20:
      v14 = BattleLogic__checkEnemyTargetFunction(v18, lookup, v17, 0LL);
      goto LABEL_21;
    }
    goto LABEL_26;
  }
  if ( actType == 80 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    MasterData_WarQuestSelectionMaster = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    Instance,
                                                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
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
        v18 = this->fields.logic;
        v17 = 0LL;
        goto LABEL_20;
      }
LABEL_26:
      sub_B0D97C(Instance);
    }
  }
  v14 = 1;
  if ( !Entity )
    return v14;
LABEL_22:
  if ( v12 )
    return SkillLvEntity__IsEnableTarget(Entity, v14, 0LL);
  return v14;
}


bool __fastcall BattleLogicEnemyAi__CheckPlayerTurnEndAfter(
        BattleLogicEnemyAi_o *this,
        int32_t actUniqueId,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data || (data = (BattleData_o *)BattleData__getServantData(data, actUniqueId, 0LL), !this->fields.aiLogic) )
    sub_B0D97C(data);
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
    sub_B0D97C(0LL);
  if ( !BattleServantData__isUseSelfSkill(servantData, skillIndex, 0LL) )
    *actType = 2;
}


void __fastcall BattleLogicEnemyAi__ClearTempDeadSvt(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x0

  if ( (byte_4216FF9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Clear__, method);
    byte_4216FF9 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
    System_Collections_Generic_HashSet_int___Clear(
      tempDeadSvtHash,
      (const MethodInfo_2C75614 *)Method_System_Collections_Generic_HashSet_int__Clear__);
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
    sub_B0D97C(0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x22
  DataManager_o *Instance; // x0
  struct AiActMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct BattleData_o *data; // x8
  AiLogic_AiInfo_o *info; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4216FF4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_AiActMaster___, svtData);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4216FF4 = 1;
  }
  info = 0LL;
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  svtData,
                                                                                                  *(_QWORD *)&procState);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = (struct AiActMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 Instance,
                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = MasterData_WarQuestSelectionMaster;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.aiActMst,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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
                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_11:
    sub_B0D97C(Instance);
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
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_B0D97C(0LL);
  ServantData = BattleData__getServantData(data, actUniqueId, 0LL);
  return BattleLogicEnemyAi__CreateAILogicTask(this, ServantData, 14, v6);
}


BattleLogicTask_o *__fastcall BattleLogicEnemyAi__CreateCommandRandomTask(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        BattleLogicTask_o *derivedTask,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x4
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
    sub_B0D97C(this);
  }
  return BattleLogicEnemyAi__createCommandRandomTask(this, svtData, (int32_t)this, command->fields.actionIndex, v6);
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
  UnityEngine_Object_o *perf; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  BattleData_o *v28; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v29; // x23
  struct BattleData_o *v30; // x8
  struct AiActMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct AiActMaster_o **p_aiActMst; // x24
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x1
  BattleServantData_o *v41; // x21
  const MethodInfo *v42; // x2
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x2
  __int64 v45; // x2
  System_Collections_Generic_IEnumerable_T__o *v46; // x1
  BattleLogicTask_o *v47; // x23
  TreasureDvcLvMaster_o *v48; // x25
  char v49; // w25
  struct BattleData_o *v50; // x8
  struct BattleData_o *v51; // x8
  struct BattleData_o *v52; // x8
  BattleLogicEnemyAi_c *klass; // x9
  struct AiEntity_o *noThinkAiEnt; // x2
  struct BattleData_o *v55; // x8
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct BattleLogicTarget_o *logictarget; // x8
  System_Int32_array **tempDeadSvtHash; // x1
  AiEntity_o *v64; // x26
  BattleLogicTarget_o *v65; // x24
  int32_t uniqueId; // w28
  System_Int32_array *FieldPlayerServantIDList; // x0
  AiActEntity_o *v68; // x27
  System_Int32_array *v69; // x22
  const MethodInfo *v70; // x2
  int32_t TargetAiAct; // w0
  BattleLogicTarget_o *v72; // x24
  int32_t v73; // w26
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  __int64 v80; // x1
  __int64 v81; // x2
  BattleCommandData_o *v82; // x22
  __int64 v83; // x1
  __int64 v84; // x2
  BattleComboData_o *v85; // x24
  struct BattleData_o *v86; // x8
  int32_t TreasureDvcId; // w0
  __int64 v88; // x22
  __int64 v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  const MethodInfo *v96; // x3
  __int64 v97; // x0
  __int64 v98; // x0
  struct System_String_o *name; // [xsp+18h] [xbp-78h]
  int32_t age; // [xsp+24h] [xbp-6Ch]
  AiLogic_AiInfo_o *v101; // [xsp+28h] [xbp-68h] BYREF
  WarEntity_o *entity; // [xsp+30h] [xbp-60h] BYREF
  AiLogic_AiInfo_o *info; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4216FEC & 1) == 0 )
  {
    sub_B0D8A4(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_B0D8A4(&BattleCommandData_TypeInfo, v6);
    sub_B0D8A4(&Method_BattleLogicEnemyAi_IsNotTempDeadSvt__, v7);
    sub_B0D8A4(&BattleLogicTask___TypeInfo, v8);
    sub_B0D8A4(&BattleLogicTask_TypeInfo, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_AiActMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v11);
    sub_B0D8A4(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__, v12);
    sub_B0D8A4(&Method_System_Func_BattleServantData__bool___ctor__, v13);
    sub_B0D8A4(&System_Func_BattleServantData__bool__TypeInfo, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__RemoveAt__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__get_Item__, v19);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v20);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    byte_4216FEC = 1;
  }
  entity = 0LL;
  info = 0LL;
  v101 = 0LL;
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&ltype,
                                                                                                  data);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  v28 = this->fields.data;
  v29 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_BattleServantData__bool__TypeInfo,
                                                                             v26,
                                                                             v27);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v29,
    (Il2CppObject *)this,
    Method_BattleLogicEnemyAi_IsNotTempDeadSvt__,
    (const MethodInfo_26189B8 *)Method_System_Func_BattleServantData__bool___ctor__);
  if ( !v28 )
    goto LABEL_67;
  Instance = BattleData__CheckAlivePlayers(v28, (System_Func_BattleServantData__bool__o *)v29, 0LL);
  if ( (Instance & 1) == 0 )
    return (System_Collections_Generic_List_BattleLogicTask__o *)v23;
  v30 = this->fields.data;
  if ( !v30 )
    goto LABEL_67;
  if ( !v30->fields.leaderDown && !v30->fields.endbattleFlg )
  {
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_67;
    MasterData_WarQuestSelectionMaster = (struct AiActMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_AiActMaster___);
    this->fields.aiActMst = MasterData_WarQuestSelectionMaster;
    p_aiActMst = &this->fields.aiActMst;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.aiActMst,
      (System_Int32_array **)MasterData_WarQuestSelectionMaster,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    BattleLogicEnemyAi__updateActPriorityList(this, v40);
    Instance = (__int64)this->fields.actlist;
    if ( !Instance )
      goto LABEL_67;
    if ( *(int *)(Instance + 24) <= 0 )
    {
      v50 = this->fields.data;
      if ( v50 )
      {
        ++v50->fields.countEnemyAttack;
        return (System_Collections_Generic_List_BattleLogicTask__o *)v23;
      }
      goto LABEL_67;
    }
    v41 = *(BattleServantData_o **)(*(_QWORD *)(Instance + 16) + 32LL);
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)Instance,
      0,
      (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_BattleServantData__RemoveAt__);
    if ( !v41 )
      goto LABEL_67;
    if ( !BattleServantData__isAlive(v41, 0, 0LL)
      || !BattleLogicEnemyAi__IsNotTempDeadSvt(this, v41, v42)
      || !v41->fields.isEntry )
    {
      return (System_Collections_Generic_List_BattleLogicTask__o *)v23;
    }
    if ( !BattleServantData__isAction(v41, 0LL) )
    {
LABEL_66:
      BattleLogicEnemyAi__AddActCount(this, v41, v43);
      return (System_Collections_Generic_List_BattleLogicTask__o *)v23;
    }
    Instance = BattleServantData__isTDSeraled(v41, 0LL);
    if ( (Instance & 1) != 0
      || (Instance = BattleServantData__checkUseTDvc(v41, this->fields.data, 1, 0LL), (Instance & 1) == 0) )
    {
      v51 = this->fields.data;
      if ( v51 )
      {
        Instance = (__int64)this->fields.aiLogic;
        if ( Instance )
        {
          Instance = (__int64)AiLogic__getAction(
                                (AiLogic_o *)Instance,
                                v41,
                                1,
                                data->fields.turnCount,
                                v51->fields.countEnemyAttack,
                                (BattleLogicBaseAi_o *)this,
                                &info,
                                0,
                                0LL);
          v52 = this->fields.data;
          if ( Instance )
          {
            if ( !v52 )
              goto LABEL_67;
            klass = this->klass;
            noThinkAiEnt = (struct AiEntity_o *)Instance;
          }
          else
          {
            if ( !v52 )
              goto LABEL_67;
            klass = this->klass;
            noThinkAiEnt = this->fields.noThinkAiEnt;
          }
          Instance = ((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, struct AiEntity_o *, _QWORD, AiLogic_AiInfo_o *, __int64, Il2CppMethodPointer))klass->vtable._19_procAiAct.method)(
                       this,
                       v41,
                       noThinkAiEnt,
                       (unsigned int)v52->fields.countEnemyAttack,
                       info,
                       1LL,
                       klass->vtable._20_ExistThinking.methodPtr);
          if ( v23 )
          {
            v46 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
LABEL_65:
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v23,
              v46,
              (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
            goto LABEL_66;
          }
        }
      }
    }
    else
    {
      Instance = (__int64)BattleLogicEnemyAi__taskAIEnemyMaxNp(this, v41->fields.uniqueId, v44);
      if ( !Instance )
        goto LABEL_67;
      v46 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
      if ( *(_QWORD *)(Instance + 24) )
      {
LABEL_64:
        if ( v23 )
          goto LABEL_65;
        goto LABEL_67;
      }
      v47 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, Instance, v45);
      BattleLogicTask___ctor(v47, 0LL);
      if ( v47 )
      {
        BattleLogicTask__setActor(v47, 3, v41->fields.uniqueId, 0LL);
        Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v48 = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
          Instance = BattleServantData__getTreasureDvcId(v41, 1, 0LL);
          if ( v48 )
          {
            Instance = (__int64)TreasureDvcLvMaster__GetEntity(v48, Instance, v41->fields.treasuredvcLevel, 0LL);
            if ( Instance )
            {
              if ( !this->fields.logic )
                goto LABEL_67;
              Instance = BattleLogic__checkEnemyTargetFunction(
                           this->fields.logic,
                           *(System_Int32_array **)(Instance + 32),
                           0LL,
                           0LL);
              v49 = Instance;
            }
            else
            {
              v49 = 1;
            }
            v55 = this->fields.data;
            if ( v55 )
            {
              Instance = (__int64)this->fields.aiLogic;
              if ( Instance )
              {
                Instance = (__int64)AiLogic__getAction(
                                      (AiLogic_o *)Instance,
                                      v41,
                                      8,
                                      data->fields.turnCount,
                                      v55->fields.countEnemyAttack,
                                      (BattleLogicBaseAi_o *)this,
                                      &v101,
                                      0,
                                      0LL);
                entity = 0LL;
                logictarget = this->fields.logictarget;
                if ( logictarget )
                {
                  tempDeadSvtHash = (System_Int32_array **)this->fields.tempDeadSvtHash;
                  v64 = (AiEntity_o *)Instance;
                  logictarget->fields.tempDeadSvtHash = (struct System_Collections_Generic_HashSet_int__o *)tempDeadSvtHash;
                  sub_B0D840(
                    (BattleServantConfConponent_o *)&logictarget->fields.tempDeadSvtHash,
                    tempDeadSvtHash,
                    v56,
                    v57,
                    v58,
                    v59,
                    v60,
                    v61);
                  if ( !v64 )
                    goto LABEL_55;
                  Instance = (__int64)*p_aiActMst;
                  if ( !*p_aiActMst )
                    goto LABEL_67;
                  Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                               &entity,
                               v64->fields.aiActId,
                               (const MethodInfo_2669C30 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
                  if ( (Instance & 1) != 0 )
                  {
                    if ( !entity )
                      goto LABEL_67;
                    v65 = this->fields.logictarget;
                    uniqueId = v41->fields.uniqueId;
                    age = (int32_t)entity->fields.age;
                    name = entity->fields.name;
                    FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
                    v68 = (AiActEntity_o *)entity;
                    v69 = FieldPlayerServantIDList;
                    Instance = BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(this, v64, v70);
                    if ( !v65 )
                      goto LABEL_67;
                    TargetAiAct = BattleLogicTarget__getTargetAiAct(
                                    v65,
                                    age,
                                    uniqueId,
                                    (System_Int32_array *)name,
                                    v69,
                                    v49 & 1,
                                    0,
                                    0LL,
                                    v68,
                                    Instance & 1,
                                    0LL);
                  }
                  else
                  {
LABEL_55:
                    v72 = this->fields.logictarget;
                    v73 = v41->fields.uniqueId;
                    Instance = (__int64)BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
                    if ( !v72 )
                      goto LABEL_67;
                    TargetAiAct = BattleLogicTarget__getTargetAiAct(
                                    v72,
                                    1,
                                    v73,
                                    0LL,
                                    (System_Int32_array *)Instance,
                                    v49 & 1,
                                    0,
                                    0LL,
                                    (AiActEntity_o *)entity,
                                    1,
                                    0LL);
                  }
                  BattleLogicTask__setTarget(v47, TargetAiAct, 0LL);
                  Instance = (__int64)this->fields.logictarget;
                  if ( !Instance )
                    goto LABEL_67;
                  *(_QWORD *)(Instance + 24) = 0LL;
                  sub_B0D840((BattleServantConfConponent_o *)(Instance + 24), 0LL, v74, v75, v76, v77, v78, v79);
                  v82 = (BattleCommandData_o *)sub_B0D974(BattleCommandData_TypeInfo, v80, v81);
                  BattleCommandData___ctor(v82, 0LL);
                  Instance = BattleServantData__getTreasureDvcCardId(v41, 0LL);
                  if ( !v82 )
                    goto LABEL_67;
                  v82->fields._type = Instance;
                  v82->fields.svtlimit = BattleServantData__getDispLimitCount(v41, 1, 0LL);
                  v82->fields.uniqueId = v41->fields.uniqueId;
                  v82->fields.svtId = BattleServantData__getSvtId(v41, 0LL);
                  v82->fields.treasureDvc = BattleServantData__getTreasureDvcId(v41, 1, 0LL);
                  v85 = (BattleComboData_o *)sub_B0D974(BattleComboData_TypeInfo, v83, v84);
                  BattleComboData___ctor(v85, 0LL);
                  v86 = this->fields.data;
                  if ( !v86 )
                    goto LABEL_67;
                  BattleLogicTask__setActionCommand(v47, v85, v82, v86->fields.countEnemyAttack, 0LL);
                  TreasureDvcId = BattleServantData__getTreasureDvcId(v41, 1, 0LL);
                  BattleLogicTask__setActionTreasureDvc(v47, TreasureDvcId, 1, 0LL);
                  Instance = sub_B0D8BC(BattleLogicTask___TypeInfo, 1LL);
                  if ( !Instance )
                    goto LABEL_67;
                  v88 = Instance;
                  v89 = sub_B0D964(v47, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
                  if ( !v89 )
                  {
                    v97 = sub_B0D99C(0LL);
                    sub_B0D948(v97, 0LL);
                  }
                  if ( !*(_DWORD *)(v88 + 24) )
                  {
                    v98 = sub_B0D9A8(v89);
                    sub_B0D948(v98, 0LL);
                  }
                  *(_QWORD *)(v88 + 32) = v47;
                  sub_B0D840(
                    (BattleServantConfConponent_o *)(v88 + 32),
                    (System_Int32_array **)v47,
                    v90,
                    v91,
                    v92,
                    v93,
                    v94,
                    v95);
                  Instance = (__int64)BattleLogicEnemyAi__ReplaceCommandTasksBySealStatus(
                                        this,
                                        v41,
                                        (BattleLogicTask_array *)v88,
                                        v96);
                  v46 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
                  goto LABEL_64;
                }
              }
            }
          }
        }
      }
    }
LABEL_67:
    sub_B0D97C(Instance);
  }
  return (System_Collections_Generic_List_BattleLogicTask__o *)v23;
}


void __fastcall BattleLogicEnemyAi__ExcludeDeadFromTempDead(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x20
  Il2CppObject *data; // x19
  System_Predicate_int__o *v9; // x21

  if ( (byte_4216FFA & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleData_IsNotAliveTarget__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__, v4);
    sub_B0D8A4(&Method_System_Predicate_int___ctor__, v5);
    sub_B0D8A4(&System_Predicate_int__TypeInfo, v6);
    byte_4216FFA = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
  {
    data = (Il2CppObject *)this->fields.data;
    v9 = (System_Predicate_int__o *)sub_B0D974(System_Predicate_int__TypeInfo, method, v2);
    System_Predicate_int____ctor(
      v9,
      data,
      Method_BattleData_IsNotAliveTarget__,
      (const MethodInfo_2AF676C *)Method_System_Predicate_int___ctor__);
    System_Collections_Generic_HashSet_int___RemoveWhere(
      tempDeadSvtHash,
      (System_Predicate_T__o *)v9,
      (const MethodInfo_2C76758 *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
  }
}


System_Int32_array *__fastcall BattleLogicEnemyAi__GetCommandArray(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *data; // x21
  BattleData_o *StageEntity; // x0

  if ( (byte_4216FF7 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, servantData);
    byte_4216FF7 = 1;
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
    sub_B0D97C(StageEntity);
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
  __int64 v7; // x1
  __int64 v8; // x2
  AiLogic_o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  AiLogic_o *aiLogic; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  AiEntity_o *v19; // x20
  struct AiEntity_o **p_noThinkAiEnt; // x19
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct AiEntity_o *v27; // x19

  if ( (byte_4216FE8 & 1) == 0 )
  {
    sub_B0D8A4(&AiEntity_TypeInfo, data);
    sub_B0D8A4(&AiLogic_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_9352/*"NOTHINK_AIACTID"*/, v6);
    byte_4216FE8 = 1;
  }
  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, method);
  v9 = (AiLogic_o *)sub_B0D974(AiLogic_TypeInfo, v7, v8);
  AiLogic___ctor(v9, 0LL);
  this->fields.aiLogic = v9;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.aiLogic,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    goto LABEL_6;
  AiLogic__Initialize(aiLogic, data, 0LL);
  v19 = (AiEntity_o *)sub_B0D974(AiEntity_TypeInfo, v17, v18);
  AiEntity___ctor(v19, 0LL);
  this->fields.noThinkAiEnt = v19;
  p_noThinkAiEnt = &this->fields.noThinkAiEnt;
  sub_B0D840((BattleServantConfConponent_o *)p_noThinkAiEnt, (System_Int32_array **)v19, v21, v22, v23, v24, v25, v26);
  v27 = *p_noThinkAiEnt;
  aiLogic = (AiLogic_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_9352/*"NOTHINK_AIACTID"*/, 0LL);
  if ( !v27 )
LABEL_6:
    sub_B0D97C(aiLogic);
  v27->fields.aiActId = (int)aiLogic;
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
    sub_B0D97C(0LL);
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
  if ( (byte_4216FFB & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_B0D8A4(&Method_BasicHelper_ContainsSelfNotNull_int___, svtData);
    byte_4216FFB = 1;
  }
  if ( !svtData )
    sub_B0D97C(this);
  return !BasicHelper__ContainsSelfNotNull_int_(
            (System_Collections_Generic_HashSet_T__o *)v4->fields.tempDeadSvtHash,
            svtData->fields.uniqueId,
            (const MethodInfo_1707354 *)Method_BasicHelper_ContainsSelfNotNull_int___);
}


BattleLogicTask_o *__fastcall BattleLogicEnemyAi__ReplaceCommandTaskBySealStatus(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        BattleLogicTask_o *derivedTask,
        const MethodInfo *method)
{
  BattleLogicTask_o *CommandRandomTask; // x19
  _BOOL8 IsSealedCommandTask; // x0
  const MethodInfo *v8; // x3

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
    CommandRandomTask = BattleLogicEnemyAi__CreateCommandRandomTask(this, svtData, CommandRandomTask, v8);
    IsSealedCommandTask = BattleLogicServantAi__IsSealedCommandTask(svtData, CommandRandomTask, 0LL);
    if ( IsSealedCommandTask )
    {
      if ( CommandRandomTask )
        goto LABEL_6;
LABEL_8:
      sub_B0D97C(IsSealedCommandTask);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x22
  __int64 v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v28; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_4216FF6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_BattleLogicTask__BattleLogicTask___, svtData);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BattleLogicTask___, v7);
    sub_B0D8A4(&Method_System_Func_BattleLogicTask__BattleLogicTask___ctor__, v8);
    sub_B0D8A4(&System_Func_BattleLogicTask__BattleLogicTask__TypeInfo, v9);
    sub_B0D8A4(&Method_BattleLogicEnemyAi___c__DisplayClass36_0__ReplaceCommandTasksBySealStatus_b__0__, v10);
    sub_B0D8A4(&BattleLogicEnemyAi___c__DisplayClass36_0_TypeInfo, v11);
    byte_4216FF6 = 1;
  }
  v12 = sub_B0D974(BattleLogicEnemyAi___c__DisplayClass36_0_TypeInfo, svtData, derivedTasks);
  BattleLogicEnemyAi___c__DisplayClass36_0___ctor((BattleLogicEnemyAi___c__DisplayClass36_0_o *)v12, 0LL);
  if ( !v12 )
    sub_B0D97C(v13);
  *(_QWORD *)(v12 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v12 + 24) = svtData;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)svtData, v20, v21, v22, v23, v24, v25);
  v28 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                          System_Func_BattleLogicTask__BattleLogicTask__TypeInfo,
                                                                                          v26,
                                                                                          v27);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v28,
    (Il2CppObject *)v12,
    Method_BattleLogicEnemyAi___c__DisplayClass36_0__ReplaceCommandTasksBySealStatus_b__0__,
    (const MethodInfo_261A104 *)Method_System_Func_BattleLogicTask__BattleLogicTask___ctor__);
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)derivedTasks,
                                                               (System_Func_TSource__TResult__o *)v28,
                                                               (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_BattleLogicTask__BattleLogicTask___);
  return (BattleLogicTask_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v29,
                                    (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
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
  if ( (byte_4216FFD & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_B0D8A4(&Method_WeightRate_int__setWeight__, weight);
    byte_4216FFD = 1;
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
      (const MethodInfo_2ADE240 *)Method_WeightRate_int__setWeight__);
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
      (const MethodInfo_2ADE240 *)Method_WeightRate_int__setWeight__);
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
        (const MethodInfo_2ADE240 *)Method_WeightRate_int__setWeight__);
      return;
    }
LABEL_14:
    sub_B0D97C(this);
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.tempDeadSvtHash, 0LL, v5, v6, v7, v8, v9, v10);
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x21
  bool isClearTempDeadSvtPrevAct; // w23
  __int64 v15; // x1
  __int64 v16; // x2
  CheckEnemyRelationInterruptProcess_o *v17; // x22
  __int64 v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_4216FEA & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_B0D8A4(&CheckEnemyRelationInterruptProcess_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    byte_4216FEA = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&ltype,
                                                                                                  data);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v13 = sub_B0D974(BattleLogicTask_TypeInfo, v11, v12);
  BattleLogicTask___ctor((BattleLogicTask_o *)v13, 0LL);
  isClearTempDeadSvtPrevAct = this->fields.isClearTempDeadSvtPrevAct;
  v17 = (CheckEnemyRelationInterruptProcess_o *)sub_B0D974(CheckEnemyRelationInterruptProcess_TypeInfo, v15, v16);
  CheckEnemyRelationInterruptProcess___ctor(v17, isClearTempDeadSvtPrevAct, 0LL);
  if ( !v13
    || (*(_QWORD *)(v13 + 232) = v17,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v13 + 232),
          (System_Int32_array **)v17,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24),
        *(_BYTE *)(v13 + 208) = 1,
        !v10) )
  {
    sub_B0D97C(v18);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v10,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  this->fields.isClearTempDeadSvtPrevAct = 0;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4216FE9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, *(_QWORD *)&ltype);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v5);
    byte_4216FE9 = 1;
  }
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                      System_Collections_Generic_HashSet_int__TypeInfo,
                                                      *(_QWORD *)&ltype,
                                                      data);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
  this->fields.tempDeadSvtHash = v6;
  p_tempDeadSvtHash = &this->fields.tempDeadSvtHash;
  sub_B0D840((BattleServantConfConponent_o *)p_tempDeadSvtHash, (System_Int32_array **)v6, v8, v9, v10, v11, v12, v13);
  *((_BYTE *)p_tempDeadSvtHash + 8) = 0;
  return 0LL;
}


void __fastcall BattleLogicEnemyAi__addEnemyActPriorityList(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *inSvtData,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleServantData__o *actlist; // x0

  if ( (byte_4216FEF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__Insert__, inSvtData);
    byte_4216FEF = 1;
  }
  actlist = this->fields.actlist;
  if ( !actlist )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_XWeaponTrail_Element___Insert(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)actlist,
    0,
    (XWeaponTrail_Element_o *)inSvtData,
    (const MethodInfo_2FC68FC *)Method_System_Collections_Generic_List_BattleServantData__Insert__);
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
  System_Int32_array *CommandList; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t Type; // w23
  WeightRate_int__o *v20; // x22
  __int64 v21; // x8
  System_Int32_array *v22; // x23
  unsigned __int64 v23; // x24
  int32_t Next; // w0
  int32_t Data; // w0
  int32_t SvtId; // w24
  int32_t DispLimitCount; // w25
  __int64 v28; // x1
  __int64 v29; // x2
  BattleCommandData_o *v30; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  BattleComboData_o *v33; // x20
  __int64 v35; // x0

  if ( (byte_4216FF5 & 1) == 0 )
  {
    sub_B0D8A4(&BattleComboData_TypeInfo, svtData);
    sub_B0D8A4(&BattleCommandData_TypeInfo, v8);
    sub_B0D8A4(&BattleLogicTask_TypeInfo, v9);
    sub_B0D8A4(&Method_WeightRate_int___ctor__, v10);
    sub_B0D8A4(&Method_WeightRate_int__getData__, v11);
    sub_B0D8A4(&Method_WeightRate_int__getTotalWeight__, v12);
    sub_B0D8A4(&Method_WeightRate_int__setWeight__, v13);
    sub_B0D8A4(&WeightRate_int__TypeInfo, v14);
    byte_4216FF5 = 1;
  }
  v15 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, svtData, *(_QWORD *)&targetId);
  BattleLogicTask___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_17;
  BattleLogicTask__setTarget(v15, targetId, 0LL);
  if ( !svtData )
    goto LABEL_17;
  BattleLogicTask__setActor(v15, 3, svtData->fields.uniqueId, 0LL);
  if ( SvtType__IsEnemy_19018608(svtData->fields.svtType, 0LL) )
  {
    Type = 10;
    goto LABEL_15;
  }
  v20 = (WeightRate_int__o *)sub_B0D974(WeightRate_int__TypeInfo, v17, v18);
  WeightRate_int____ctor(v20, (const MethodInfo_2ADF078 *)Method_WeightRate_int___ctor__);
  CommandList = BattleServantData__getCommandList(svtData, 0LL);
  if ( !CommandList )
    goto LABEL_17;
  v21 = *(_QWORD *)&CommandList->max_length;
  v22 = CommandList;
  if ( (int)v21 >= 1 )
  {
    v23 = 0LL;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)v21 )
      {
        v35 = sub_B0D9A8(CommandList);
        sub_B0D948(v35, 0LL);
      }
      if ( !v20 )
        break;
      WeightRate_int___setWeight(
        v20,
        10,
        v22->m_Items[v23 + 1],
        (const MethodInfo_2ADE240 *)Method_WeightRate_int__setWeight__);
      LODWORD(v21) = v22->max_length;
      if ( (__int64)++v23 >= (int)v21 )
        goto LABEL_13;
    }
LABEL_17:
    sub_B0D97C(CommandList);
  }
LABEL_13:
  if ( !v20 )
    goto LABEL_17;
  Next = BattleRandom__getNext(v20->fields.totalweight, 0LL);
  Data = WeightRate_int___getData(v20, Next, (const MethodInfo_2ADE6C4 *)Method_WeightRate_int__getData__);
  Type = BattleCommand__getType(Data, 0LL);
LABEL_15:
  SvtId = BattleServantData__getSvtId(svtData, 0LL);
  DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
  v30 = (BattleCommandData_o *)sub_B0D974(BattleCommandData_TypeInfo, v28, v29);
  BattleCommandData___ctor_18472988(v30, Type, SvtId, DispLimitCount, 0, 0LL);
  if ( !v30 )
    goto LABEL_17;
  v30->fields.uniqueId = svtData->fields.uniqueId;
  BattleCommandData__SetCriticalDecisionType(v30, 1, 0LL);
  v33 = (BattleComboData_o *)sub_B0D974(BattleComboData_TypeInfo, v31, v32);
  BattleComboData___ctor(v33, 0LL);
  BattleLogicTask__setActionCommand(v15, v33, v30, countAct, 0LL);
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
    sub_B0D97C(0LL);
  return BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
}


System_Int32_array *__fastcall BattleLogicEnemyAi__get_PartySvtIds(
        BattleLogicEnemyAi_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_B0D97C(0LL);
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
  __int64 v17; // x25
  __int64 v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x6
  BattleLogicTask_array *v26; // x19
  const MethodInfo *v27; // x3
  BattleLogicTask_array *v28; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v31; // x21

  if ( (byte_4216FF0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleLogicTask___ctor__, svtData);
    sub_B0D8A4(&System_Action_BattleLogicTask__TypeInfo, v13);
    sub_B0D8A4(&Method_BasicHelper_ForEach_BattleLogicTask___, v14);
    sub_B0D8A4(&Method_BattleLogicEnemyAi___c__DisplayClass25_0__procAiAct_b__0__, v15);
    sub_B0D8A4(&BattleLogicEnemyAi___c__DisplayClass25_0_TypeInfo, v16);
    byte_4216FF0 = 1;
  }
  v17 = sub_B0D974(BattleLogicEnemyAi___c__DisplayClass25_0_TypeInfo, svtData, aiEnt);
  BattleLogicEnemyAi___c__DisplayClass25_0___ctor((BattleLogicEnemyAi___c__DisplayClass25_0_o *)v17, 0LL);
  if ( !v17 )
    sub_B0D97C(v18);
  *(_QWORD *)(v17 + 16) = svtData;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)svtData, v19, v20, v21, v22, v23, v24);
  v26 = BattleLogicEnemyAi__procAiActLocal(
          this,
          *(BattleServantData_o **)(v17 + 16),
          aiEnt,
          countAct,
          aiInfo,
          procState,
          v25);
  v28 = BattleLogicEnemyAi__ReplaceCommandTasksBySealStatus(this, *(BattleServantData_o **)(v17 + 16), v26, v27);
  v31 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_BattleLogicTask__TypeInfo,
                                                                               v29,
                                                                               v30);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v31,
    (Il2CppObject *)v17,
    Method_BattleLogicEnemyAi___c__DisplayClass25_0__procAiAct_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_BattleLogicTask___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)v26,
    (System_Action_T__o *)v31,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleLogicTask___);
  return v28;
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
  AiActEntity_o *v32; // x24
  BattleLogicBaseAi_o *v33; // x0
  const MethodInfo *v34; // x4
  __int64 v35; // x1
  __int64 v36; // x2
  bool v38; // w27
  WeightRate_int__o *v39; // x25
  __int64 v40; // x1
  __int64 v41; // x2
  int32_t Int; // w0
  int32_t v43; // w0
  int32_t v44; // w0
  int32_t v45; // w1
  BattleServantData_o *v46; // x0
  int *skillVals; // x8
  int32_t v48; // w20
  int32_t v49; // w25
  int32_t Next; // w0
  int32_t Data; // w0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x25
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x26
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **infoText; // x1
  bool v63; // w21
  __int64 v64; // x1
  __int64 v65; // x2
  ServantAiActArgument_o *v66; // x20
  const MethodInfo *v67; // x4
  System_String_o *v68; // x0
  System_String_o *v69; // x0
  struct BattleLogic_o *v70; // x8
  System_Int32_array **ServantGameObject; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v78; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  BattleSkillInfoData_o *SkillInfoDataByAiActType; // x0
  BattleSkillInfoData_o *v81; // x27
  SkillLvEntity_o *Entity; // x28
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  bool v89; // w20
  struct BattleLogicTarget_o *funcId; // x21
  BattleLogic_o *logic; // x20
  BattleLogicEnemyAi_o *v92; // x2
  BattleLogic_o *v93; // x0
  struct BattleLogicTarget_o *logictarget; // x1
  TreasureDvcLvMaster_o *v95; // x20
  struct BattleLogic_o *v96; // x1
  BattleLogicTarget_o *v97; // x23
  int32_t target; // w27
  int32_t uniqueId; // w25
  System_Int32_array *targetIndividuality; // x28
  System_Int32_array *FieldPlayerServantIDList; // x21
  const MethodInfo *v102; // x2
  BattleLogicTarget_o *v103; // x23
  int32_t v104; // w25
  int32_t v105; // w27
  System_Int32_array *v106; // x28
  System_Int32_array *v107; // x20
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  int32_t Type; // w21
  const MethodInfo *v121; // x3
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v122; // x21
  __int64 v123; // x1
  __int64 v124; // x2
  BattleLogicTask_o *v125; // x19
  const MethodInfo_2FC56E8 *v126; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v127; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v128; // x1
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  __int64 v135; // x1
  __int64 v136; // x2
  BattleCommandData_o *v137; // x20
  __int64 v138; // x1
  __int64 v139; // x2
  BattleComboData_o *v140; // x21
  int32_t TreasureDvcId; // w0
  __int64 v142; // x1
  __int64 v143; // x2
  WeightRate_int__o *v144; // x20
  const MethodInfo *v145; // x2
  struct BattleLogic_o *v146; // x8
  BattleLogicEnemyAi_o *v147; // x21
  unsigned __int64 v148; // x22
  int32_t v149; // w0
  int32_t v150; // w0
  int32_t SvtId; // w22
  int32_t DispLimitCount; // w23
  __int64 v153; // x1
  __int64 v154; // x2
  BattleCommandData_o *v155; // x20
  __int64 v156; // x1
  __int64 v157; // x2
  BattleComboData_o *v158; // x19
  __int64 v159; // x0
  BattleSkillInfoData_o *skillInfo; // [xsp+20h] [xbp-A0h]
  bool IsEnableTarget; // [xsp+2Ch] [xbp-94h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v162; // [xsp+30h] [xbp-90h]
  int32_t v163; // [xsp+3Ch] [xbp-84h]
  BattleLogicEnemyAi_o *targetlist; // [xsp+40h] [xbp-80h]
  int32_t v165; // [xsp+4Ch] [xbp-74h]
  BattleLogicBaseAi_o *v166; // [xsp+50h] [xbp-70h]
  int32_t lv; // [xsp+5Ch] [xbp-64h] BYREF
  int32_t id; // [xsp+60h] [xbp-60h] BYREF
  int32_t aiActType[2]; // [xsp+64h] [xbp-5Ch] BYREF
  bool noMessage; // [xsp+6Ch] [xbp-54h] BYREF

  v12 = (BattleLogicBaseAi_o *)this;
  if ( (byte_4216FF1 & 1) == 0 )
  {
    sub_B0D8A4(&BattleComboData_TypeInfo, svtData);
    sub_B0D8A4(&BattleCommandData_TypeInfo, v13);
    sub_B0D8A4(&BattleLogicTask_TypeInfo, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillLvMaster___, v15);
    sub_B0D8A4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v16);
    sub_B0D8A4(&int___TypeInfo, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v20);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v21);
    sub_B0D8A4(&ServantAiActArgument_TypeInfo, v22);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B0D8A4(&Method_WeightRate_int___ctor__, v24);
    sub_B0D8A4(&Method_WeightRate_int__getCount__, v25);
    sub_B0D8A4(&Method_WeightRate_int__getData__, v26);
    sub_B0D8A4(&Method_WeightRate_int__getTotalWeight__, v27);
    sub_B0D8A4(&Method_WeightRate_int__setWeight__, v28);
    sub_B0D8A4(&WeightRate_int__TypeInfo, v29);
    this = (BattleLogicEnemyAi_o *)sub_B0D8A4(&StringLiteral_8809/*"MOTION_"*/, v30);
    byte_4216FF1 = 1;
  }
  *(_QWORD *)aiActType = 0LL;
  lv = 0;
  id = 0;
  noMessage = 0;
  if ( !aiEnt )
    goto LABEL_153;
  this = (BattleLogicEnemyAi_o *)BattleLogicBaseAi__GetAiActEntity(
                                   v12,
                                   aiEnt->fields.aiActId,
                                   (const MethodInfo *)aiEnt);
  aiActType[1] = 0;
  if ( !this )
    goto LABEL_153;
  data_high = HIDWORD(this->fields.data);
  v32 = (AiActEntity_o *)this;
  aiActType[1] = data_high;
  if ( !svtData )
    goto LABEL_153;
  v33 = (BattleLogicBaseAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._18_getAiState.method)(
                                 svtData,
                                 svtData->klass->vtable._19_ExistAiThinking.methodPtr);
  if ( BattleLogicBaseAi__IsChangeThinkingOnly(v33, data_high, (AiBaseEntity_o *)aiEnt, (AiState_o *)v33, v34) )
    return v12->fields.emptyTask;
  v38 = procState != 1 || BattleServantData__canUseSkill(svtData, -1, 0LL);
  v39 = (WeightRate_int__o *)sub_B0D974(WeightRate_int__TypeInfo, v35, v36);
  WeightRate_int____ctor(v39, (const MethodInfo_2ADF078 *)Method_WeightRate_int___ctor__);
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
      if ( !v38 )
        goto LABEL_58;
      if ( !BattleServantData__isUseSelfSkill(svtData, 0, 0LL) )
        goto LABEL_19;
      this = (BattleLogicEnemyAi_o *)AiAct__getInt(11, 0LL);
      if ( !v39 )
        goto LABEL_153;
      WeightRate_int___setWeight(v39, 10, (int32_t)this, (const MethodInfo_2ADE240 *)Method_WeightRate_int__setWeight__);
LABEL_19:
      if ( !BattleServantData__isUseSelfSkill(svtData, 1, 0LL) )
        goto LABEL_22;
      this = (BattleLogicEnemyAi_o *)AiAct__getInt(12, 0LL);
      if ( !v39 )
        goto LABEL_153;
      WeightRate_int___setWeight(v39, 10, (int32_t)this, (const MethodInfo_2ADE240 *)Method_WeightRate_int__setWeight__);
LABEL_22:
      this = (BattleLogicEnemyAi_o *)BattleServantData__isUseSelfSkill(svtData, 2, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleLogicEnemyAi_o *)AiAct__getInt(13, 0LL);
        if ( !v39 )
          goto LABEL_153;
        WeightRate_int___setWeight(
          v39,
          10,
          (int32_t)this,
          (const MethodInfo_2ADE240 *)Method_WeightRate_int__setWeight__);
      }
      else
      {
LABEL_58:
        if ( !v39 )
          goto LABEL_153;
      }
      if ( WeightRate_int___getCount(v39, (const MethodInfo_2ADE5E0 *)Method_WeightRate_int__getCount__) >= 1 )
        goto LABEL_60;
      goto LABEL_61;
    case 11:
      if ( !v38 )
      {
        aiActType[1] = 2;
        noMessage = 1;
      }
      v46 = svtData;
      v45 = 0;
      goto LABEL_56;
    case 12:
      if ( !v38 )
      {
        aiActType[1] = 2;
        noMessage = 1;
      }
      v45 = 1;
      v46 = svtData;
LABEL_56:
      if ( !BattleServantData__isUseSelfSkill(v46, v45, 0LL) )
        aiActType[1] = 2;
      goto LABEL_62;
    case 13:
      if ( !v38 )
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
        skillVals = (int *)v32->fields.skillVals;
        if ( !skillVals )
          goto LABEL_153;
        if ( skillVals[6] <= 1 )
        {
LABEL_132:
          aiActType[1] = 0;
          goto LABEL_62;
        }
        if ( v38 || data_high != 41 )
        {
          v48 = skillVals[8];
          v49 = skillVals[9];
          this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_153;
          this = (BattleLogicEnemyAi_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
          if ( !this )
            goto LABEL_153;
          if ( SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v48, v49, 0LL) )
          {
            BattleServantData__addSkillInfo(svtData, 20, 0, v48, v49, -1LL, -1, 0LL, 0LL);
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
      if ( !v39 )
        goto LABEL_153;
      WeightRate_int___setWeight(v39, 10, (int32_t)this, (const MethodInfo_2ADE240 *)Method_WeightRate_int__setWeight__);
      if ( v38 )
      {
        if ( BattleServantData__isUseSelfSkill(svtData, 0, 0LL) )
        {
          Int = AiAct__getInt(11, 0LL);
          WeightRate_int___setWeight(v39, 10, Int, (const MethodInfo_2ADE240 *)Method_WeightRate_int__setWeight__);
        }
        if ( BattleServantData__isUseSelfSkill(svtData, 1, 0LL) )
        {
          v43 = AiAct__getInt(12, 0LL);
          WeightRate_int___setWeight(v39, 10, v43, (const MethodInfo_2ADE240 *)Method_WeightRate_int__setWeight__);
        }
        if ( BattleServantData__isUseSelfSkill(svtData, 2, 0LL) )
        {
          v44 = AiAct__getInt(13, 0LL);
          WeightRate_int___setWeight(v39, 10, v44, (const MethodInfo_2ADE240 *)Method_WeightRate_int__setWeight__);
        }
      }
LABEL_60:
      Next = BattleRandom__getNext(v39->fields.totalweight, 0LL);
      Data = WeightRate_int___getData(v39, Next, (const MethodInfo_2ADE6C4 *)Method_WeightRate_int__getData__);
      aiActType[1] = AiAct__getType(Data, 0LL);
LABEL_62:
      v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_BattleLogicTask__TypeInfo, v40, v41);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v52,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      v55 = sub_B0D974(BattleLogicTask_TypeInfo, v53, v54);
      BattleLogicTask___ctor((BattleLogicTask_o *)v55, 0LL);
      if ( noMessage )
      {
        if ( !v55 )
          goto LABEL_153;
      }
      else
      {
        if ( !v55 )
          goto LABEL_153;
        infoText = (System_Int32_array **)aiEnt->fields.infoText;
        *(_QWORD *)(v55 + 152) = infoText;
        sub_B0D840((BattleServantConfConponent_o *)(v55 + 152), infoText, v56, v57, v58, v59, v60, v61);
      }
      BattleLogicTask__setActor((BattleLogicTask_o *)v55, 3, svtData->fields.uniqueId, 0LL);
      if ( AiBaseEntity__IsForcedActionSpeedAnyTime((AiBaseEntity_o *)aiEnt, 0LL) )
        *(_BYTE *)(v55 + 160) = 1;
      v165 = procState;
      this = (BattleLogicEnemyAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._18_getAiState.method)(
                                       svtData,
                                       svtData->klass->vtable._19_ExistAiThinking.methodPtr);
      if ( !this )
        goto LABEL_153;
      AiState__setBeforeAction((AiState_o *)this, aiActType[1], aiEnt->fields.aiActId, 0LL);
      v63 = noMessage;
      v66 = (ServantAiActArgument_o *)sub_B0D974(ServantAiActArgument_TypeInfo, v64, v65);
      ServantAiActArgument___ctor(v66, v32, (AiBaseEntity_o *)aiEnt, svtData, v63, 0LL);
      if ( aiActType[1] != 71 )
      {
        this = (BattleLogicEnemyAi_o *)BattleLogicBaseAi__SetNoTargetAiActTask(
                                         v12,
                                         (System_Collections_Generic_List_BattleLogicTask__o *)v52,
                                         aiActType[1],
                                         (BaseAiActArgument_o *)v66,
                                         v67);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
LABEL_77:
          if ( !v52 )
            goto LABEL_153;
          goto LABEL_78;
        }
        this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_153;
        MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)this,
                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
        SkillInfoDataByAiActType = BattleServantData__getSkillInfoDataByAiActType(svtData, aiActType[1], 0LL);
        v81 = SkillInfoDataByAiActType;
        v166 = v12;
        v163 = countAct;
        if ( SkillInfoDataByAiActType )
        {
          this = (BattleLogicEnemyAi_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))SkillInfoDataByAiActType->klass->vtable._5_get_skillId.method)(
                                           SkillInfoDataByAiActType,
                                           SkillInfoDataByAiActType->klass->vtable._6_get_IndividualityArray.methodPtr);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_153;
          Entity = SkillLvMaster__GetEntity(MasterData_WarQuestSelectionMaster, (int32_t)this, v81->fields.skilllv, 0LL);
        }
        else
        {
          Entity = 0LL;
        }
        if ( AiAct__isSkillType(aiActType[1], 0LL) )
        {
          v89 = 1;
          if ( !Entity || !v81 )
            goto LABEL_97;
          funcId = (struct BattleLogicTarget_o *)Entity->fields.funcId;
          logic = v166->fields.logic;
          this = (BattleLogicEnemyAi_o *)SkillLvEntity__getDataValsList(Entity, 0LL);
          if ( !logic )
            goto LABEL_153;
          v92 = this;
          v93 = logic;
          logictarget = funcId;
        }
        else
        {
          if ( aiActType[1] != 80 )
            goto LABEL_96;
          this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_153;
          v95 = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
          this = (BattleLogicEnemyAi_o *)BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
          if ( !v95 )
            goto LABEL_153;
          this = (BattleLogicEnemyAi_o *)TreasureDvcLvMaster__GetEntity(
                                           v95,
                                           (int32_t)this,
                                           svtData->fields.treasuredvcLevel,
                                           0LL);
          if ( !this )
          {
LABEL_96:
            v89 = 1;
            goto LABEL_97;
          }
          if ( !v166->fields.logic )
            goto LABEL_153;
          logictarget = this->fields.logictarget;
          v93 = v166->fields.logic;
          v92 = 0LL;
        }
        v89 = BattleLogic__checkEnemyTargetFunction(v93, (System_Int32_array *)logictarget, (DataVals_array *)v92, 0LL);
LABEL_97:
        this = (BattleLogicEnemyAi_o *)v166->fields.logictarget;
        if ( this )
        {
          v96 = v166[1].fields.logic;
          this->fields.logic = v96;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.logic,
            (System_Int32_array **)v96,
            v83,
            v84,
            v85,
            v86,
            v87,
            v88);
          if ( Entity && v81 )
            IsEnableTarget = SkillLvEntity__IsEnableTarget(Entity, v89, 0LL);
          else
            IsEnableTarget = v89;
          skillInfo = v81;
          v162 = v52;
          this = (BattleLogicEnemyAi_o *)sub_B0D8BC(int___TypeInfo, 1LL);
          targetlist = this;
          if ( v166->fields.data )
          {
            v97 = v166->fields.logictarget;
            target = v32->fields.target;
            uniqueId = svtData->fields.uniqueId;
            targetIndividuality = v32->fields.targetIndividuality;
            FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v166->fields.data, 0LL, 0LL);
            this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(
                                             (BattleLogicEnemyAi_o *)v166,
                                             aiEnt,
                                             v102);
            if ( v97 )
            {
              this = (BattleLogicEnemyAi_o *)BattleLogicTarget__getTargetAiAct(
                                               v97,
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
              if ( targetlist )
              {
                if ( !LODWORD(targetlist->fields.logic) )
                  goto LABEL_154;
                LODWORD(targetlist->fields.logictarget) = (_DWORD)this;
                this = (BattleLogicEnemyAi_o *)sub_B0D8BC(int___TypeInfo, 1LL);
                if ( v166->fields.data )
                {
                  v103 = v166->fields.logictarget;
                  v104 = v32->fields.target;
                  v105 = svtData->fields.uniqueId;
                  v106 = v32->fields.targetIndividuality;
                  v107 = (System_Int32_array *)this;
                  this = (BattleLogicEnemyAi_o *)BattleData__getFieldEnemyServantIDList(v166->fields.data, 0, 0LL);
                  if ( v103 )
                  {
                    this = (BattleLogicEnemyAi_o *)BattleLogicTarget__getTargetAiAct(
                                                     v103,
                                                     v104,
                                                     v105,
                                                     v106,
                                                     (System_Int32_array *)this,
                                                     0,
                                                     0,
                                                     0LL,
                                                     v32,
                                                     1,
                                                     0LL);
                    if ( v107 )
                    {
                      if ( !v107->max_length )
                        goto LABEL_154;
                      v107->m_Items[1] = (int)this;
                      this = (BattleLogicEnemyAi_o *)v166->fields.logictarget;
                      if ( this )
                      {
                        this->fields.logic = 0LL;
                        sub_B0D840(
                          (BattleServantConfConponent_o *)&this->fields.logic,
                          0LL,
                          v108,
                          v109,
                          v110,
                          v111,
                          v112,
                          v113);
                        this = (BattleLogicEnemyAi_o *)v166->fields.logic;
                        if ( this )
                        {
                          *(_BYTE *)(v55 + 168) = (v165 == 1) & (BattleLogic__GetLogicType((BattleLogic_o *)this, 0LL) == 42);
                          if ( AiAct__isAttackType(aiActType[1], 0LL) )
                          {
                            *(_QWORD *)(v55 + 32) = targetlist;
                            sub_B0D840(
                              (BattleServantConfConponent_o *)(v55 + 32),
                              (System_Int32_array **)targetlist,
                              v114,
                              v115,
                              v116,
                              v117,
                              v118,
                              v119);
                            if ( SvtType__IsEnemy_19018608(svtData->fields.svtType, 0LL) )
                            {
                              Type = 10;
LABEL_143:
                              SvtId = BattleServantData__getSvtId(svtData, 0LL);
                              DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
                              v155 = (BattleCommandData_o *)sub_B0D974(BattleCommandData_TypeInfo, v153, v154);
                              BattleCommandData___ctor_18472988(v155, Type, SvtId, DispLimitCount, 0, 0LL);
                              if ( !v155 )
                                goto LABEL_153;
                              v155->fields.uniqueId = svtData->fields.uniqueId;
                              if ( AiAct__isAttackCritical(aiActType[1], 0LL) )
                              {
                                BattleCommandData__SetCriticalDecisionType(v155, 2, 0LL);
                                aiActType[1] = 2;
                              }
                              else
                              {
                                BattleCommandData__SetCriticalDecisionType(v155, 1, 0LL);
                              }
                              v158 = (BattleComboData_o *)sub_B0D974(BattleComboData_TypeInfo, v156, v157);
                              BattleComboData___ctor(v158, 0LL);
                              BattleLogicTask__setActionCommand((BattleLogicTask_o *)v55, v158, v155, v163, 0LL);
                              goto LABEL_148;
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
                            v144 = (WeightRate_int__o *)sub_B0D974(WeightRate_int__TypeInfo, v142, v143);
                            WeightRate_int____ctor(v144, (const MethodInfo_2ADF078 *)Method_WeightRate_int___ctor__);
                            this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi__GetCommandArray(
                                                             (BattleLogicEnemyAi_o *)v166,
                                                             svtData,
                                                             v145);
                            if ( !this )
                              goto LABEL_153;
                            v146 = this->fields.logic;
                            v147 = this;
                            if ( (int)v146 < 1 )
                            {
LABEL_141:
                              if ( !v144 )
                                goto LABEL_153;
                              v149 = BattleRandom__getNext(v144->fields.totalweight, 0LL);
                              v150 = WeightRate_int___getData(
                                       v144,
                                       v149,
                                       (const MethodInfo_2ADE6C4 *)Method_WeightRate_int__getData__);
                              Type = BattleCommand__getType(v150, 0LL);
                              goto LABEL_143;
                            }
                            v148 = 0LL;
                            while ( v148 < (unsigned int)v146 )
                            {
                              if ( !v144 )
                                goto LABEL_153;
                              WeightRate_int___setWeight(
                                v144,
                                10,
                                *((_DWORD *)&v147->fields.logictarget + v148),
                                (const MethodInfo_2ADE240 *)Method_WeightRate_int__setWeight__);
                              LODWORD(v146) = v147->fields.logic;
                              if ( (__int64)++v148 >= (int)v146 )
                                goto LABEL_141;
                            }
LABEL_154:
                            v159 = sub_B0D9A8(this);
                            sub_B0D948(v159, 0LL);
                          }
                          this = (BattleLogicEnemyAi_o *)AiAct__isSkillType(aiActType[1], 0LL);
                          if ( ((unsigned __int8)this & 1) != 0 )
                          {
                            this = (BattleLogicEnemyAi_o *)BattleServantData__get_BuffData(svtData, 0LL);
                            if ( !this )
                              goto LABEL_153;
                            BattleBuffData__UpdateSkillRelationBuff((BattleBuffData_o *)this, 0LL);
                            if ( skillInfo )
                            {
                              BattleLogicBaseAi__SetSkillSelectAddIndex(
                                (BattleLogicBaseAi_o *)this,
                                skillInfo,
                                (AiBaseEntity_o *)aiEnt,
                                v121);
                              BattleLogicTask__setActionSkill(
                                (BattleLogicTask_o *)v55,
                                skillInfo,
                                (System_Int32_array *)targetlist,
                                v107,
                                0,
                                0,
                                0LL);
                              BattleLogicTask__setActor((BattleLogicTask_o *)v55, 3, svtData->fields.uniqueId, 0LL);
                              v122 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v162;
                              *(_BYTE *)(v55 + 169) = 1;
                              if ( !v162 )
                                goto LABEL_153;
                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                v162,
                                (EventMissionProgressRequest_Argument_ProgressData_o *)v55,
                                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                              v125 = (BattleLogicTask_o *)sub_B0D974(BattleLogicTask_TypeInfo, v123, v124);
                              BattleLogicTask___ctor(v125, 0LL);
                              v126 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                              v127 = v162;
                              v128 = (EventMissionProgressRequest_Argument_ProgressData_o *)v125;
LABEL_150:
                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                v127,
                                v128,
                                v126);
                              goto LABEL_151;
                            }
LABEL_128:
                            v122 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v162;
                            if ( !v162 )
                              goto LABEL_153;
LABEL_151:
                            v78 = v122;
                            return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                              v78,
                                                              (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
                          }
                          if ( aiActType[1] != 80 )
                            goto LABEL_128;
                          if ( BattleLogicServantAi__TryGetOverwriteTreasureDevice(
                                 (BattleLogicServantAi_o *)v166,
                                 svtData,
                                 v32->fields.skillVals,
                                 &id,
                                 &lv,
                                 0LL) )
                          {
                            BattleLogicTask__SetOverwriteTreasureDevice((BattleLogicTask_o *)v55, id, lv, 0LL);
                            this = *(BattleLogicEnemyAi_o **)(v55 + 200);
                            if ( !this )
                              goto LABEL_153;
                            OverwriteTreasureDeviceData__Overwrite((OverwriteTreasureDeviceData_o *)this, svtData, 0LL);
                          }
                          BattleLogicTask__setActor((BattleLogicTask_o *)v55, 3, svtData->fields.uniqueId, 0LL);
                          *(_QWORD *)(v55 + 32) = targetlist;
                          sub_B0D840(
                            (BattleServantConfConponent_o *)(v55 + 32),
                            (System_Int32_array **)targetlist,
                            v129,
                            v130,
                            v131,
                            v132,
                            v133,
                            v134);
                          v137 = (BattleCommandData_o *)sub_B0D974(BattleCommandData_TypeInfo, v135, v136);
                          BattleCommandData___ctor(v137, 0LL);
                          this = (BattleLogicEnemyAi_o *)BattleServantData__getTreasureDvcCardId(svtData, 0LL);
                          if ( v137 )
                          {
                            v137->fields._type = (int)this;
                            v137->fields.svtlimit = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
                            v137->fields.uniqueId = svtData->fields.uniqueId;
                            v137->fields.svtId = BattleServantData__getSvtId(svtData, 0LL);
                            v137->fields.treasureDvc = BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
                            v140 = (BattleComboData_o *)sub_B0D974(BattleComboData_TypeInfo, v138, v139);
                            BattleComboData___ctor(v140, 0LL);
                            BattleLogicTask__setActionCommand((BattleLogicTask_o *)v55, v140, v137, v163, 0LL);
                            TreasureDvcId = BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
                            BattleLogicTask__setActionTreasureDvc((BattleLogicTask_o *)v55, TreasureDvcId, 1, 0LL);
LABEL_148:
                            v122 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v162;
                            if ( !v162 )
                              goto LABEL_153;
                            v127 = v162;
                            v128 = (EventMissionProgressRequest_Argument_ProgressData_o *)v55;
                            v126 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                            goto LABEL_150;
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
LABEL_153:
        sub_B0D97C(this);
      }
      this = (BattleLogicEnemyAi_o *)AiBaseEntity__getActionValue((AiBaseEntity_o *)aiEnt, 0LL);
      aiActType[0] = (int)this;
      if ( (int)this < 1 )
        goto LABEL_77;
      v68 = System_Int32__ToString((int32_t)aiActType, 0LL);
      v69 = System_String__Concat_43849904((System_String_o *)StringLiteral_8809/*"MOTION_"*/, v68, 0LL);
      BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v55, v69, 0LL);
      v70 = v12->fields.logic;
      if ( !v70 )
        goto LABEL_153;
      this = (BattleLogicEnemyAi_o *)v70->fields.perf;
      if ( !this )
        goto LABEL_153;
      ServantGameObject = (System_Int32_array **)BattlePerformance__getServantGameObject(
                                                   (BattlePerformance_o *)this,
                                                   svtData->fields.uniqueId,
                                                   0LL);
      *(_QWORD *)(v55 + 112) = ServantGameObject;
      sub_B0D840((BattleServantConfConponent_o *)(v55 + 112), ServantGameObject, v72, v73, v74, v75, v76, v77);
      BattleLogicTask__setActor((BattleLogicTask_o *)v55, 3, svtData->fields.uniqueId, 0LL);
      if ( !v52 )
        goto LABEL_153;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v52,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v55,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
LABEL_78:
      v78 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v52;
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        v78,
                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_4216FED & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__Clear__, method);
    byte_4216FED = 1;
  }
  actlist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.actlist;
  if ( !actlist )
    goto LABEL_13;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    actlist,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_BattleServantData__Clear__);
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
        v8 = sub_B0D9A8(actlist);
        sub_B0D948(v8, 0LL);
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
    sub_B0D97C(actlist);
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

  if ( (byte_4216FEB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, *(_QWORD *)&ltype);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v6);
    byte_4216FEB = 1;
  }
  BattleLogicEnemyAi__ExcludeDeadFromTempDead(this, *(const MethodInfo **)&ltype);
  TaskAIAttack = BattleLogicEnemyAi__CreateTaskAIAttack(this, v7, data, v8);
  if ( !TaskAIAttack )
    sub_B0D97C(0LL);
  v11 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)TaskAIAttack;
  if ( TaskAIAttack->fields._size >= 1 )
    BattleLogicEnemyAi__ClearTempDeadSvt(this, v10);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    v11,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  BattleData_o *data; // x0
  BattleServantData_o *v12; // x21
  struct AiActMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct BattleData_o *v20; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4216FF2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_AiActMaster___, *(_QWORD *)&actUniqueId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4216FF2 = 1;
  }
  info = 0LL;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&actUniqueId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__getServantData(data, actUniqueId, 0LL);
  if ( !data )
    goto LABEL_16;
  v12 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
    goto LABEL_14;
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__checkAlivePlayers(data, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_14;
  data = (BattleData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (struct AiActMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)data,
                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = MasterData_WarQuestSelectionMaster;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.aiActMst,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = this->fields.data;
  if ( !v20 )
    goto LABEL_16;
  data = (BattleData_o *)this->fields.aiLogic;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)AiLogic__getAction(
                           (AiLogic_o *)data,
                           v12,
                           2,
                           v20->fields.turnCount,
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
                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_16:
    sub_B0D97C(data);
  }
  data = (BattleData_o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, BattleData_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._19_procAiAct.method)(
                           this,
                           v12,
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
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  BattleData_o *data; // x0
  BattleServantData_o *v12; // x21
  struct AiActMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct BattleData_o *v20; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4216FF3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_AiActMaster___, *(_QWORD *)&actUniqueId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4216FF3 = 1;
  }
  info = 0LL;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                                                                  *(_QWORD *)&actUniqueId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__getServantData(data, actUniqueId, 0LL);
  if ( !data )
    goto LABEL_16;
  v12 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_14;
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__checkAlivePlayers(data, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_14;
  data = (BattleData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (struct AiActMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)data,
                                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = MasterData_WarQuestSelectionMaster;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.aiActMst,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = this->fields.data;
  if ( !v20 )
    goto LABEL_16;
  data = (BattleData_o *)this->fields.aiLogic;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)AiLogic__getAction(
                           (AiLogic_o *)data,
                           v12,
                           7,
                           v20->fields.turnCount,
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
                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_16:
    sub_B0D97C(data);
  }
  data = (BattleData_o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, BattleData_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._19_procAiAct.method)(
                           this,
                           v12,
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
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicEnemyAi__updateActPriorityList(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleLogicEnemyAi_o *v3; // x20
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
  __int64 v20; // x1
  struct System_Collections_Generic_List_BattleServantData__o *actlist; // x8
  BattleServantConfConponent_o *p_actlist; // x19
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_IEnumerable_TSource__o *FieldEnemyServantList; // x21
  BattleLogicEnemyAi___c_c *v26; // x8
  struct BattleLogicEnemyAi___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__23_0; // x22
  Il2CppObject *v29; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  BattleLogicEnemyAi___c_c *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x21
  struct BattleLogicEnemyAi___c_StaticFields *v42; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__23_1; // x22
  Il2CppObject *v44; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  BattleLogicEnemyAi___c_c *v55; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v56; // x21
  struct BattleLogicEnemyAi___c_StaticFields *v57; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__23_2; // x22
  Il2CppObject *v59; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v67; // x0
  __int64 v68; // x1
  __int64 v69; // x2
  BattleLogicEnemyAi___c_c *v70; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v71; // x21
  struct BattleLogicEnemyAi___c_StaticFields *v72; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__23_3; // x22
  Il2CppObject *v74; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v82; // x0
  System_Int32_array **v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  struct BattleData_o *data; // x8
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *klass; // x20
  void *dicAiActFunc; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v93; // x21
  Il2CppObject *v94; // x22
  struct BattleLogicEnemyAi___c_StaticFields *v95; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Int32_array **All; // x0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7

  v3 = this;
  if ( (byte_4216FEE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderByDescending_BattleServantData__int___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_BattleServantData___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v6);
    sub_B0D8A4(&Method_System_Func_BattleServantData__bool___ctor__, v7);
    sub_B0D8A4(&Method_System_Func_BattleServantData__int___ctor__, v8);
    sub_B0D8A4(&System_Func_BattleServantData__bool__TypeInfo, v9);
    sub_B0D8A4(&System_Func_BattleServantData__int__TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__FindAll__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v12);
    sub_B0D8A4(&Method_System_Predicate_BattleServantData___ctor__, v13);
    sub_B0D8A4(&System_Predicate_BattleServantData__TypeInfo, v14);
    sub_B0D8A4(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_0__, v15);
    sub_B0D8A4(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_1__, v16);
    sub_B0D8A4(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_2__, v17);
    sub_B0D8A4(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_3__, v18);
    sub_B0D8A4(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_4__, v19);
    this = (BattleLogicEnemyAi_o *)sub_B0D8A4(&BattleLogicEnemyAi___c_TypeInfo, v20);
    byte_4216FEE = 1;
  }
  p_actlist = (BattleServantConfConponent_o *)&v3->fields.actlist;
  actlist = v3->fields.actlist;
  if ( !actlist )
    goto LABEL_51;
  if ( actlist->fields._size <= 0 )
  {
    this = (BattleLogicEnemyAi_o *)v3->fields.data;
    if ( !this )
      goto LABEL_51;
    FieldEnemyServantList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldEnemyServantList(
                                                                                   (BattleData_o *)this,
                                                                                   1,
                                                                                   0LL);
    v26 = BattleLogicEnemyAi___c_TypeInfo;
    if ( (BYTE3(BattleLogicEnemyAi___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v26 = BattleLogicEnemyAi___c_TypeInfo;
    }
    static_fields = v26->static_fields;
    _9__23_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__23_0;
    if ( !_9__23_0 )
    {
      if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        static_fields = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      }
      v29 = (Il2CppObject *)static_fields->__9;
      _9__23_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                      System_Func_BattleServantData__bool__TypeInfo,
                                                                                      v23,
                                                                                      v24);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__23_0,
        v29,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_0__,
        (const MethodInfo_26189B8 *)Method_System_Func_BattleServantData__bool___ctor__);
      v30 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v30->__9__23_0 = (struct System_Func_BattleServantData__bool__o *)_9__23_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v30->__9__23_0,
        (System_Int32_array **)_9__23_0,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
    }
    v37 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            FieldEnemyServantList,
            (System_Func_TSource__bool__o *)_9__23_0,
            (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
    v40 = BattleLogicEnemyAi___c_TypeInfo;
    v41 = v37;
    if ( (BYTE3(BattleLogicEnemyAi___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v40 = BattleLogicEnemyAi___c_TypeInfo;
    }
    v42 = v40->static_fields;
    _9__23_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v42->__9__23_1;
    if ( !_9__23_1 )
    {
      if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v40);
        v42 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      }
      v44 = (Il2CppObject *)v42->__9;
      _9__23_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                   System_Func_BattleServantData__int__TypeInfo,
                                                                                   v38,
                                                                                   v39);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__23_1,
        v44,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_1__,
        (const MethodInfo_2619564 *)Method_System_Func_BattleServantData__int___ctor__);
      v45 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v45->__9__23_1 = (struct System_Func_BattleServantData__int__o *)_9__23_1;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v45->__9__23_1,
        (System_Int32_array **)_9__23_1,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
    }
    v52 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
            v41,
            (System_Func_TSource__TKey__o *)_9__23_1,
            (const MethodInfo_1B4ECD0 *)Method_System_Linq_Enumerable_OrderByDescending_BattleServantData__int___);
    v55 = BattleLogicEnemyAi___c_TypeInfo;
    v56 = v52;
    if ( (BYTE3(BattleLogicEnemyAi___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v55 = BattleLogicEnemyAi___c_TypeInfo;
    }
    v57 = v55->static_fields;
    _9__23_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v57->__9__23_2;
    if ( !_9__23_2 )
    {
      if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v55);
        v57 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      }
      v59 = (Il2CppObject *)v57->__9;
      _9__23_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                   System_Func_BattleServantData__int__TypeInfo,
                                                                                   v53,
                                                                                   v54);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__23_2,
        v59,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_2__,
        (const MethodInfo_2619564 *)Method_System_Func_BattleServantData__int___ctor__);
      v60 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v60->__9__23_2 = (struct System_Func_BattleServantData__int__o *)_9__23_2;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v60->__9__23_2,
        (System_Int32_array **)_9__23_2,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
    }
    v67 = System_Linq_Enumerable__ThenByDescending_WarBoardManager_TaskList__int_(
            v56,
            (System_Func_TSource__TKey__o *)_9__23_2,
            (const MethodInfo_1B55D8C *)Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
    v70 = BattleLogicEnemyAi___c_TypeInfo;
    v71 = v67;
    if ( (BYTE3(BattleLogicEnemyAi___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v70 = BattleLogicEnemyAi___c_TypeInfo;
    }
    v72 = v70->static_fields;
    _9__23_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v72->__9__23_3;
    if ( !_9__23_3 )
    {
      if ( (BYTE3(v70->vtable._0_Equals.methodPtr) & 4) != 0 && !v70->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v70);
        v72 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      }
      v74 = (Il2CppObject *)v72->__9;
      _9__23_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                   System_Func_BattleServantData__int__TypeInfo,
                                                                                   v68,
                                                                                   v69);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__23_3,
        v74,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_3__,
        (const MethodInfo_2619564 *)Method_System_Func_BattleServantData__int___ctor__);
      v75 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v75->__9__23_3 = (struct System_Func_BattleServantData__int__o *)_9__23_3;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v75->__9__23_3,
        (System_Int32_array **)_9__23_3,
        v76,
        v77,
        v78,
        v79,
        v80,
        v81);
    }
    v82 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_WarBoardManager_TaskList__int_(
                                                                 v71,
                                                                 (System_Func_TSource__TKey__o *)_9__23_3,
                                                                 (const MethodInfo_1B55D8C *)Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
    v83 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                   v82,
                                   (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_BattleServantData___);
    p_actlist->klass = (BattleServantConfConponent_c *)v83;
    sub_B0D840((BattleServantConfConponent_o *)&v3->fields.actlist, v83, v84, v85, v86, v87, v88, v89);
  }
  data = v3->fields.data;
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
  v93 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)*((_QWORD *)dicAiActFunc + 5);
  if ( !v93 )
  {
    if ( (BYTE3(this[2].fields.dicAiActFunc) & 4) != 0 && !LODWORD(this[1].fields.tempDeadSvtHash) )
    {
      j_il2cpp_runtime_class_init_0(this);
      dicAiActFunc = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    }
    v94 = *(Il2CppObject **)dicAiActFunc;
    v93 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                     System_Predicate_BattleServantData__TypeInfo,
                                                                     method,
                                                                     v2);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v93,
      v94,
      Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_4__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_BattleServantData___ctor__);
    v95 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    v95->__9__23_4 = (struct System_Predicate_BattleServantData__o *)v93;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v95->__9__23_4,
      (System_Int32_array **)v93,
      v96,
      v97,
      v98,
      v99,
      v100,
      v101);
  }
  if ( !klass )
LABEL_51:
    sub_B0D97C(this);
  All = (System_Int32_array **)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                 klass,
                                 (System_Predicate_T__o *)v93,
                                 (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_BattleServantData__FindAll__);
  p_actlist->klass = (BattleServantConfConponent_c *)All;
  sub_B0D840(p_actlist, All, v103, v104, v105, v106, v107, v108);
}


void __fastcall BattleLogicEnemyAi___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4213B93 & 1) == 0 )
  {
    sub_B0D8A4(&BattleLogicEnemyAi___c_TypeInfo, v1);
    byte_4213B93 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleLogicEnemyAi___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleLogicEnemyAi___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return BattleServantData__GetOriginalRemainingNeedActCount(x, 0LL);
}


int32_t __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__23_2(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.actPriority;
}


int32_t __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__23_3(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return BattleServantData__getDeckIndex(x, 0LL);
}


bool __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__23_4(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(0LL);
  return BattleLogicEnemyAi__ReplaceCommandTaskBySealStatus(_4__this, this->fields.svtData, x, 0LL);
}