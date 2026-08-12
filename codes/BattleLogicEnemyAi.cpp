void BattleLogicEnemyAi___ctor(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  const MethodInfo *v10; // x1

  if ( (byte_5973ACA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_5973ACA = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this->fields.actlist = (struct System_Collections_Generic_List_BattleServantData__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.actlist, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  BattleLogicBaseAi___ctor((BattleLogicBaseAi_o *)this, v10);
}


void BattleLogicEnemyAi__AddActCount(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  if ( !svtData
    || (BattleServantData__IncrementActionCount(svtData, this->fields.data, 0), (data = this->fields.data) == 0) )
  {
    sub_2213CDC(this, svtData);
  }
  ++data->fields.countEnemyAttack;
}


void BattleLogicEnemyAi__AddTempDeadSvt(BattleLogicEnemyAi_o *this, int32_t svtUniqueId, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x0

  if ( (byte_5973AC2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_5973AC2 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
    System_Collections_Generic_HashSet_int___Add(
      tempDeadSvtHash,
      svtUniqueId,
      (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


AiLogic_AiInfo_CheckedInfo_o *BattleLogicEnemyAi__CheckAiActType(
        BattleLogicEnemyAi_o *this,
        bool skillFlg,
        BattleServantData_o *svtData,
        AiActEntity_o *aiActEnt,
        int32_t actType,
        const MethodInfo *method)
{
  WeightRate_int__o *v11; // x23
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  int *skillVals; // x8
  int32_t v16; // w21
  int32_t v17; // w22
  BattleSkillInfoData_o *v18; // x22
  bool v19; // w24
  bool v20; // zf
  int32_t v21; // w9
  BattleLogicEnemyAi_o *v22; // x0
  const MethodInfo *v23; // x4
  int32_t Next; // w0
  int32_t Data; // w0
  AiLogic_AiInfo_CheckedInfo_o *v26; // x20

  if ( (byte_5973AC6 & 1) == 0 )
  {
    sub_2213A60(&AiLogic_AiInfo_CheckedInfo_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_WeightRate_int___ctor__);
    sub_2213A60(&Method_WeightRate_int__getCount__);
    sub_2213A60(&Method_WeightRate_int__getData__);
    sub_2213A60(&Method_WeightRate_int__getTotalWeight__);
    sub_2213A60(&Method_WeightRate_int__setWeight__);
    sub_2213A60(&WeightRate_int__TypeInfo);
    byte_5973AC6 = 1;
  }
  v11 = (WeightRate_int__o *)sub_2213CCC(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v11, (const MethodInfo_3DA1D84 *)Method_WeightRate_int___ctor__);
  if ( actType > 13 )
  {
    if ( (actType & 0x7FFFFFFE) == 0x28 )
    {
      if ( !aiActEnt )
        goto LABEL_48;
      skillVals = (int *)aiActEnt->fields.skillVals;
      if ( !skillVals )
        goto LABEL_48;
      if ( skillVals[6] < 2 )
      {
LABEL_34:
        actType = 0;
        goto LABEL_46;
      }
      if ( actType != 41 || skillFlg )
      {
        v16 = skillVals[8];
        v17 = skillVals[9];
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_48;
        Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
        if ( !Instance )
          goto LABEL_48;
        if ( SkillLvMaster__GetEntity((SkillLvMaster_o *)Instance, v16, v17, 0) )
        {
          Instance = (DataManager_o *)BattleSkillInfoData__MakeSkillData(20, 0);
          if ( svtData )
          {
            v18 = BattleServantData__SetSkillInfo(
                    svtData,
                    (BattleSkillInfoData_o *)Instance,
                    20,
                    0,
                    v16,
                    v17,
                    -1,
                    -1,
                    0);
            v19 = 0;
            goto LABEL_47;
          }
LABEL_48:
          sub_2213CDC(Instance, v13);
        }
        goto LABEL_34;
      }
    }
    else
    {
      if ( actType != 80 )
      {
LABEL_46:
        v19 = 0;
        v18 = 0;
        goto LABEL_47;
      }
      if ( !svtData )
        goto LABEL_48;
      if ( BattleServantData__isNobleAction(svtData, 0)
        && TreasureDeviceConditionUtil__IsSatisfyEachCondition(svtData, this->fields.data, 0) )
      {
        v19 = 0;
        v18 = 0;
        actType = 80;
        goto LABEL_47;
      }
    }
LABEL_33:
    v18 = 0;
    v19 = 1;
    actType = 2;
    goto LABEL_47;
  }
  v18 = 0;
  v19 = 0;
  if ( actType <= 10 )
  {
    if ( actType == 1 )
    {
      Instance = (DataManager_o *)AiAct__getInt(2, 0);
      if ( !v11 )
        goto LABEL_48;
      WeightRate_int___setWeight(
        v11,
        10,
        (int32_t)Instance,
        (const MethodInfo_3DA11F8 *)Method_WeightRate_int__setWeight__);
      if ( skillFlg )
        BattleLogicEnemyAi__SetSkillRandomWeightSameProbability(v22, v11, 10, svtData, v23);
    }
    else
    {
      if ( actType != 10 )
        goto LABEL_47;
      if ( skillFlg )
        BattleLogicEnemyAi__SetSkillRandomWeightSameProbability((BattleLogicEnemyAi_o *)Instance, v11, 10, svtData, v14);
      if ( !v11 )
        goto LABEL_48;
      if ( WeightRate_int___getCount(v11, (const MethodInfo_3DA15D4 *)Method_WeightRate_int__getCount__) < 1 )
        goto LABEL_33;
    }
    Next = BattleRandom__getNext(v11->fields.totalweight, 0);
    Data = WeightRate_int___getData(v11, Next, (const MethodInfo_3DA1690 *)Method_WeightRate_int__getData__);
    actType = AiAct__getType(Data, 0);
    goto LABEL_46;
  }
  if ( actType == 11 )
  {
    if ( !svtData )
      goto LABEL_48;
    v19 = !skillFlg;
    v18 = 0;
    v20 = !BattleServantData__isUseSelfSkill(svtData, 0, 0) || !skillFlg;
    v21 = 11;
LABEL_39:
    if ( v20 )
      actType = 2;
    else
      actType = v21;
    goto LABEL_47;
  }
  if ( actType == 12 )
  {
    if ( !svtData )
      goto LABEL_48;
    v19 = !skillFlg;
    v18 = 0;
    v20 = !BattleServantData__isUseSelfSkill(svtData, 1, 0) || !skillFlg;
    v21 = 12;
    goto LABEL_39;
  }
  if ( !svtData )
    goto LABEL_48;
  v19 = !skillFlg;
  v18 = 0;
  if ( BattleServantData__isUseSelfSkill(svtData, 2, 0) && skillFlg )
    actType = 13;
  else
    actType = 2;
LABEL_47:
  v26 = (AiLogic_AiInfo_CheckedInfo_o *)sub_2213CCC(AiLogic_AiInfo_CheckedInfo_TypeInfo);
  AiLogic_AiInfo_CheckedInfo___ctor(v26, actType, v19, v18, 0);
  return v26;
}


bool BattleLogicEnemyAi__CheckAiCanActionFromTargets(
        BattleLogicEnemyAi_o *this,
        AiLogic_AiInfo_o *aiInfo,
        AiBaseEntity_o *aiBaseEntity,
        const MethodInfo *method)
{
  int v7; // w8
  __int64 Master_object; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x5
  BattleServantData_o *v11; // x23
  const MethodInfo *v12; // x3
  AiLogic_AiInfo_CheckedInfo_o *v13; // x20
  bool v14; // w24
  __int64 naturalAligment; // x10
  AiEntity_o *v16; // x22
  BattleLogicTarget_o *logictarget; // x26
  int32_t monitor; // w27
  int32_t uniqueId; // w28
  Il2CppClass *klass; // x29
  System_Int32_array *FieldPlayerServantIDList; // x0
  Il2CppObject *aiActEnt; // x25
  System_Int32_array *v23; // x20
  const MethodInfo *v24; // x3
  Il2CppClass *v25; // x8
  __int64 v26; // x25
  BattleLogicTarget_o *v27; // x20
  int32_t v28; // w22
  int32_t v29; // w23
  Il2CppClass *v30; // x26
  Il2CppObject *v31; // x8
  AiLogic_o *aiLogic; // x20
  AiLogic_AiInfo_CheckedInfo_o *v34; // [xsp+20h] [xbp-80h]
  AiLogic_AiInfo_o *v35; // [xsp+28h] [xbp-78h]
  __int64 v36; // [xsp+30h] [xbp-70h]
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_5973AC9 & 1) == 0 )
  {
    sub_2213A60(&AiEntity_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_AiActMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
    sub_2213A60(&int___TypeInfo);
    byte_5973AC9 = 1;
  }
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, aiInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !aiBaseEntity || !Master_object )
    goto LABEL_41;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          aiBaseEntity->fields.aiActId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__) )
    return 1;
  Master_object = (__int64)entity;
  if ( !entity )
    goto LABEL_41;
  Master_object = AiActEntity__GetNoTargetNoActionType((AiActEntity_o *)entity, 0);
  if ( !(_DWORD)Master_object )
    return 1;
  if ( !aiInfo )
    goto LABEL_41;
  Master_object = (__int64)this->fields.data;
  if ( !Master_object )
    goto LABEL_41;
  Master_object = (__int64)BattleData__getServantData((BattleData_o *)Master_object, aiInfo->fields.uniqueId, 0);
  v11 = (BattleServantData_o *)Master_object;
  if ( aiInfo->fields.procState == 1 )
  {
    if ( !Master_object )
      goto LABEL_41;
    Master_object = BattleServantData__canUseSkill((BattleServantData_o *)Master_object, -1, 0);
  }
  else
  {
    Master_object = 1;
  }
  if ( !entity )
    goto LABEL_41;
  Master_object = (__int64)BattleLogicEnemyAi__CheckAiActType(
                             this,
                             Master_object & 1,
                             v11,
                             (AiActEntity_o *)entity,
                             HIDWORD(entity[1].klass),
                             v10);
  if ( !Master_object )
    goto LABEL_41;
  v13 = (AiLogic_AiInfo_CheckedInfo_o *)Master_object;
  v14 = BattleLogicEnemyAi__CheckHate(this, *(_DWORD *)(Master_object + 16), v11, v12);
  naturalAligment = AiEntity_TypeInfo->_2.naturalAligment;
  if ( aiBaseEntity->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    v16 = (AiEntity_c *)aiBaseEntity->klass->_2.typeHierarchy[naturalAligment - 1] == AiEntity_TypeInfo
        ? (AiEntity_o *)aiBaseEntity
        : 0LL;
  else
    v16 = 0;
  Master_object = sub_2213B20(int___TypeInfo, 1);
  if ( !entity )
    goto LABEL_41;
  if ( !v11 )
    goto LABEL_41;
  v35 = aiInfo;
  v36 = Master_object;
  Master_object = (__int64)this->fields.data;
  v34 = v13;
  if ( !Master_object )
    goto LABEL_41;
  logictarget = this->fields.logictarget;
  monitor = (int32_t)entity[1].monitor;
  uniqueId = v11->fields.uniqueId;
  klass = entity[2].klass;
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList((BattleData_o *)Master_object, 0, 0);
  aiActEnt = entity;
  v23 = FieldPlayerServantIDList;
  Master_object = BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(this, v16, 0, v24);
  if ( !logictarget )
    goto LABEL_41;
  Master_object = BattleLogicTarget__getTargetAiAct(
                    logictarget,
                    monitor,
                    uniqueId,
                    (System_Int32_array *)klass,
                    v23,
                    v14,
                    0,
                    0,
                    (AiActEntity_o *)aiActEnt,
                    Master_object & 1,
                    0,
                    0);
  if ( !v36 )
    goto LABEL_41;
  if ( !*(_DWORD *)(v36 + 24) )
    goto LABEL_42;
  v25 = int___TypeInfo;
  *(_DWORD *)(v36 + 32) = Master_object;
  Master_object = sub_2213B20(v25, 1);
  if ( !entity )
    goto LABEL_41;
  v26 = Master_object;
  Master_object = (__int64)this->fields.data;
  if ( !Master_object
    || (v27 = this->fields.logictarget,
        v28 = (int32_t)entity[1].monitor,
        v29 = v11->fields.uniqueId,
        v30 = entity[2].klass,
        Master_object = (__int64)BattleData__getFieldEnemyServantIDList((BattleData_o *)Master_object, 0, 0),
        !v27)
    || (Master_object = BattleLogicTarget__getTargetAiAct(
                          v27,
                          v28,
                          v29,
                          (System_Int32_array *)v30,
                          (System_Int32_array *)Master_object,
                          0,
                          0,
                          0,
                          (AiActEntity_o *)entity,
                          1,
                          0,
                          0),
        !v26) )
  {
LABEL_41:
    sub_2213CDC(Master_object, v9);
  }
  if ( !*(_DWORD *)(v26 + 24) )
LABEL_42:
    sub_2213CE4(Master_object);
  v31 = entity;
  *(_DWORD *)(v26 + 32) = Master_object;
  if ( !v31 )
    goto LABEL_41;
  aiLogic = this->fields.aiLogic;
  Master_object = AiActEntity__GetNoTargetNoActionType((AiActEntity_o *)v31, 0);
  if ( !aiLogic )
    goto LABEL_41;
  if ( AiLogic__IsNoTargetNoActionTask(aiLogic, Master_object, (System_Int32_array *)v36, (System_Int32_array *)v26, 0) )
    return 0;
  AiLogic_AiInfo__SetCheckedResult(v35, aiBaseEntity, v34, 0);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool BattleLogicEnemyAi__CheckEnemyShiftAfter(
        BattleLogicEnemyAi_o *this,
        int32_t actUniqueId,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data || (data = (BattleData_o *)BattleData__getServantData(data, actUniqueId, 0), !this->fields.aiLogic) )
    sub_2213CDC(data, *(_QWORD *)&actUniqueId);
  return AiLogic__checkThinking(
           this->fields.aiLogic,
           (BattleServantData_o *)data,
           20,
           (BattleLogicBaseAi_o *)this,
           0,
           0);
}


bool BattleLogicEnemyAi__CheckHate(
        BattleLogicEnemyAi_o *this,
        int32_t actType,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v8; // x1
  SkillLvMaster_o *v9; // x20
  BattleSkillInfoData_o *SkillInfoDataByAiActType; // x0
  BattleSkillInfoData_o *v11; // x22
  SkillLvEntity_o *Entity; // x20
  bool v13; // w0
  BattleLogic_o *logic; // x19
  System_Int32_array *funcId; // x21
  Il2CppObject *MasterData_object; // x23

  if ( (byte_5973AC8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973AC8 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !svtData )
    goto LABEL_25;
  v9 = (SkillLvMaster_o *)Instance;
  SkillInfoDataByAiActType = BattleServantData__getSkillInfoDataByAiActType(svtData, actType, 0);
  v11 = SkillInfoDataByAiActType;
  if ( SkillInfoDataByAiActType )
  {
    Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))SkillInfoDataByAiActType->klass->vtable._5_get_skillId.methodPtr)(
                 SkillInfoDataByAiActType,
                 SkillInfoDataByAiActType->klass->vtable._5_get_skillId.method);
    if ( !v9 )
      goto LABEL_25;
    Entity = SkillLvMaster__GetEntity(v9, Instance, v11->fields.skilllv, 0);
  }
  else
  {
    Entity = 0;
  }
  if ( AiAct__isSkillType(actType, 0) )
  {
    v13 = 1;
    if ( v11 && Entity )
    {
      logic = this->fields.logic;
      funcId = Entity->fields.funcId;
      Instance = (__int64)SkillLvEntity__getDataValsList(Entity, 0);
      if ( logic )
      {
        v13 = BattleLogic__checkEnemyTargetFunction(logic, funcId, (DataVals_array *)Instance, 0);
        return SkillLvEntity__IsEnableTarget(Entity, v13, 0);
      }
LABEL_25:
      sub_2213CDC(Instance, v8);
    }
  }
  else
  {
    if ( actType != 80 )
      goto LABEL_20;
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_25;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    Instance = BattleServantData__getTreasureDvcId(svtData, 1, 0, 0);
    if ( !MasterData_object )
      goto LABEL_25;
    Instance = (__int64)TreasureDvcLvMaster__GetEntity(
                          (TreasureDvcLvMaster_o *)MasterData_object,
                          Instance,
                          svtData->fields.treasuredvcLevel,
                          0);
    if ( Instance )
    {
      if ( !this->fields.logic )
        goto LABEL_25;
      v13 = BattleLogic__checkEnemyTargetFunction(this->fields.logic, *(System_Int32_array **)(Instance + 32), 0, 0);
    }
    else
    {
LABEL_20:
      v13 = 1;
    }
  }
  if ( v11 && Entity )
    return SkillLvEntity__IsEnableTarget(Entity, v13, 0);
  return v13;
}


// local variable allocation has failed, the output may be wrong!
bool BattleLogicEnemyAi__CheckPlayerTurnEndAfter(
        BattleLogicEnemyAi_o *this,
        int32_t actUniqueId,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data || (data = (BattleData_o *)BattleData__getServantData(data, actUniqueId, 0), !this->fields.aiLogic) )
    sub_2213CDC(data, *(_QWORD *)&actUniqueId);
  return AiLogic__checkThinking(
           this->fields.aiLogic,
           (BattleServantData_o *)data,
           14,
           (BattleLogicBaseAi_o *)this,
           0,
           0);
}


// local variable allocation has failed, the output may be wrong!
void BattleLogicEnemyAi__CheckSkillAct(
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
    sub_2213CDC(this, skillFlg);
  if ( !BattleServantData__isUseSelfSkill(servantData, skillIndex, 0) )
    *actType = 2;
}


void BattleLogicEnemyAi__ClearTempDeadSvt(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x0

  if ( (byte_5973AC3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Clear__);
    byte_5973AC3 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
    System_Collections_Generic_HashSet_int___Clear(
      tempDeadSvtHash,
      (const MethodInfo_42B4494 *)Method_System_Collections_Generic_HashSet_int__Clear__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *BattleLogicEnemyAi__CreateAIEnemyShiftAfterTask(
        BattleLogicEnemyAi_o *this,
        int32_t actUniqueId,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x1
  const MethodInfo *v6; // x3

  data = this->fields.data;
  if ( !data )
    sub_2213CDC(0, *(_QWORD *)&actUniqueId);
  ServantData = BattleData__getServantData(data, actUniqueId, 0);
  return BattleLogicEnemyAi__CreateAILogicTask(this, ServantData, 20, v6);
}


BattleLogicTask_array *BattleLogicEnemyAi__CreateAILogicTask(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        int32_t procState,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct BattleData_o *data; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5973ABE & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973ABE = 1;
  }
  info = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.aiActMst,
    (int32_t)MasterData_object,
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
                                0);
  if ( !Instance )
  {
    if ( v7 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v7,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_11:
    sub_2213CDC(Instance, v9);
  }
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, DataManager_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, const MethodInfo *))this->klass->vtable._32_procAiAct.methodPtr)(
                                this,
                                svtData,
                                Instance,
                                0,
                                info,
                                0,
                                this->klass->vtable._32_procAiAct.method);
  if ( !v7 )
    goto LABEL_11;
  System_Collections_Generic_List_object___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *BattleLogicEnemyAi__CreateAITurnPlayerEndAfterTask(
        BattleLogicEnemyAi_o *this,
        int32_t actUniqueId,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x1
  const MethodInfo *v6; // x3

  data = this->fields.data;
  if ( !data )
    sub_2213CDC(0, *(_QWORD *)&actUniqueId);
  ServantData = BattleData__getServantData(data, actUniqueId, 0);
  return BattleLogicEnemyAi__CreateAILogicTask(this, ServantData, 14, v6);
}


BattleLogicTask_o *BattleLogicEnemyAi__CreateCommandRandomTask(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        BattleLogicTask_o *derivedTask,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x5
  struct BattleCommandData_o *command; // x8

  if ( !derivedTask
    || (this = (BattleLogicEnemyAi_o *)this->fields.logictarget) == 0
    || (this = (BattleLogicEnemyAi_o *)BattleLogicTarget__getTargetBase(
                                         (BattleLogicTarget_o *)this,
                                         derivedTask->fields.targetIdlist,
                                         0,
                                         1,
                                         0),
        (command = derivedTask->fields.command) == 0) )
  {
    sub_2213CDC(this, svtData);
  }
  return BattleLogicEnemyAi__createCommandRandomTask(
           this,
           svtData,
           (int32_t)this,
           command->fields.actionIndex,
           derivedTask,
           v6);
}


System_Collections_Generic_List_BattleLogicTask__o *BattleLogicEnemyAi__CreateTaskAIAttack(
        BattleLogicEnemyAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x20
  __int64 Instance; // x0
  System_Collections_Generic_IEnumerable_T__o *v8; // x1
  UnityEngine_Object_o *perf; // x21
  BattleData_o *v10; // x21
  System_Func_object__bool__o *v11; // x23
  struct BattleData_o *v12; // x8
  Il2CppObject *MasterData_object; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  const MethodInfo *v21; // x1
  BattleServantData_o *v22; // x21
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  BattleCommandData_o *TreasureDvcCommand; // x0
  const MethodInfo *v26; // x2
  struct AiActMaster_o **p_aiActMst; // x26
  BattleLogicTask_o *execTask; // x23
  Il2CppObject *v29; // x24
  char v30; // w24
  struct BattleData_o *v31; // x8
  struct BattleData_o *v32; // x8
  struct BattleData_o *v33; // x8
  BattleLogicEnemyAi_c *v34; // x9
  struct AiEntity_o *noThinkAiEnt; // x2
  struct BattleData_o *v36; // x8
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  AiEntity_o *Action; // x25
  struct System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x1
  BattleLogicTarget_o *logictarget; // x26
  int32_t uniqueId; // w28
  Il2CppClass *klass; // x29
  System_Int32_array *FieldPlayerServantIDList; // x0
  Il2CppObject *v49; // x27
  System_Int32_array *v50; // x22
  const MethodInfo *v51; // x3
  int32_t TargetAiAct; // w0
  BattleLogicTarget_o *v53; // x26
  int32_t v54; // w25
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  BattleCommandData_o *v61; // x22
  int32_t DispLimitCount; // w0
  int32_t v63; // w8
  BattleComboData_o *v64; // x24
  struct BattleData_o *v65; // x8
  int32_t TreasureDvcId; // w0
  bool IsTargetTypeEnemy; // w0
  BattleLogicTask_array *v68; // x22
  const MethodInfo *v69; // x3
  int32_t monitor; // [xsp+24h] [xbp-7Ch]
  AiLogic_AiInfo_o *v71; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+30h] [xbp-70h] BYREF
  AiLogic_AiInfo_o *info; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_5973AB4 & 1) == 0 )
  {
    sub_2213A60(&BattleComboData_TypeInfo);
    sub_2213A60(&BattleCommandData_TypeInfo);
    sub_2213A60(&Method_BattleLogicEnemyAi_IsNotTempDeadSvt__);
    sub_2213A60(&BattleLogicTask___TypeInfo);
    sub_2213A60(&BattleLogicTask_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_2213A60(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
    sub_2213A60(&System_Func_BattleServantData__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973AB4 = 1;
  }
  entity = 0;
  info = 0;
  v71 = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !data )
    goto LABEL_66;
  perf = (UnityEngine_Object_o *)data->fields.perf;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(perf, 0, 0) )
  {
    Instance = (__int64)data->fields.perf;
    if ( !Instance )
      goto LABEL_66;
    BattlePerformance__setOffTarget((BattlePerformance_o *)Instance, 1, 0);
  }
  v10 = this->fields.data;
  v11 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(v11, (Il2CppObject *)this, Method_BattleLogicEnemyAi_IsNotTempDeadSvt__, 0);
  if ( !v10 )
    goto LABEL_66;
  Instance = BattleData__CheckAlivePlayers(v10, (System_Func_BattleServantData__bool__o *)v11, 0);
  if ( (Instance & 1) == 0 )
    return (System_Collections_Generic_List_BattleLogicTask__o *)v6;
  v12 = this->fields.data;
  if ( !v12 )
    goto LABEL_66;
  if ( !v12->fields.leaderDown && !v12->fields.endbattleFlg )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_AiActMaster___);
      this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.aiActMst,
        (int32_t)MasterData_object,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      BattleLogicEnemyAi__updateActPriorityList(this, v21);
      Instance = (__int64)this->fields.actlist;
      if ( Instance )
      {
        if ( *(int *)(Instance + 24) <= 0 )
        {
          v31 = this->fields.data;
          if ( v31 )
          {
            ++v31->fields.countEnemyAttack;
            return (System_Collections_Generic_List_BattleLogicTask__o *)v6;
          }
        }
        else
        {
          Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                0,
                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
          if ( this->fields.actlist )
          {
            v22 = (BattleServantData_o *)Instance;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this->fields.actlist,
              0,
              (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_BattleServantData__RemoveAt__);
            if ( v22 )
            {
              if ( !BattleServantData__isAlive(v22, 0, 0)
                || !BattleLogicEnemyAi__IsNotTempDeadSvt(this, v22, v23)
                || !v22->fields.isEntry )
              {
                return (System_Collections_Generic_List_BattleLogicTask__o *)v6;
              }
              if ( !BattleServantData__isAction(v22, 0) )
              {
LABEL_47:
                BattleLogicEnemyAi__AddActCount(this, v22, v24);
                return (System_Collections_Generic_List_BattleLogicTask__o *)v6;
              }
              Instance = BattleServantData__isTDSeraled(v22, 0);
              if ( (Instance & 1) == 0
                && (Instance = BattleServantData__checkUseTDvc(v22, this->fields.data, 1, 0, 0), (Instance & 1) != 0)
                && (TreasureDvcCommand = BattleServantData__MakeTreasureDvcCommand(v22, 0),
                    Instance = BattleServantData__IsCardAction(v22, TreasureDvcCommand, 0),
                    (Instance & 1) != 0) )
              {
                Instance = (__int64)BattleLogicEnemyAi__taskAIEnemyMaxNp(this, v22->fields.uniqueId, v26);
                if ( !Instance )
                  goto LABEL_66;
                v8 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
                if ( *(_QWORD *)(Instance + 24) )
                {
LABEL_65:
                  if ( !v6 )
                    goto LABEL_66;
                  goto LABEL_46;
                }
                p_aiActMst = &this->fields.aiActMst;
                execTask = (BattleLogicTask_o *)sub_2213CCC(BattleLogicTask_TypeInfo);
                BattleLogicTask___ctor(execTask, 0);
                if ( execTask )
                {
                  BattleLogicTask__setActor(execTask, 3, v22->fields.uniqueId, 0);
                  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( Instance )
                  {
                    v29 = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                    Instance = BattleServantData__getTreasureDvcId(v22, 1, 0, 0);
                    if ( v29 )
                    {
                      Instance = (__int64)TreasureDvcLvMaster__GetEntity(
                                            (TreasureDvcLvMaster_o *)v29,
                                            Instance,
                                            v22->fields.treasuredvcLevel,
                                            0);
                      if ( Instance )
                      {
                        if ( !this->fields.logic )
                          goto LABEL_66;
                        Instance = BattleLogic__checkEnemyTargetFunction(
                                     this->fields.logic,
                                     *(System_Int32_array **)(Instance + 32),
                                     0,
                                     0);
                        v30 = Instance;
                      }
                      else
                      {
                        v30 = 1;
                      }
                      v36 = this->fields.data;
                      if ( v36 )
                      {
                        Instance = (__int64)this->fields.aiLogic;
                        if ( Instance )
                        {
                          Action = AiLogic__getAction(
                                     (AiLogic_o *)Instance,
                                     v22,
                                     8,
                                     data->fields.turnCount,
                                     v36->fields.countEnemyAttack,
                                     (BattleLogicBaseAi_o *)this,
                                     &v71,
                                     0,
                                     0);
                          Instance = (__int64)this->fields.logictarget;
                          entity = 0;
                          if ( Instance )
                          {
                            tempDeadSvtHash = this->fields.tempDeadSvtHash;
                            *(_QWORD *)(Instance + 24) = tempDeadSvtHash;
                            sub_2213A04(
                              (MissionNaviTransitionBoardItem_o *)(Instance + 24),
                              (int32_t)tempDeadSvtHash,
                              v37,
                              v38,
                              v39,
                              v40,
                              v41,
                              v42);
                            if ( !Action )
                              goto LABEL_58;
                            Instance = (__int64)*p_aiActMst;
                            if ( !*p_aiActMst )
                              goto LABEL_66;
                            Instance = DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                         &entity,
                                         Action->fields.aiActId,
                                         (const MethodInfo_3F10B80 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
                            if ( (Instance & 1) != 0 )
                            {
                              if ( !entity )
                                goto LABEL_66;
                              logictarget = this->fields.logictarget;
                              uniqueId = v22->fields.uniqueId;
                              klass = entity[2].klass;
                              monitor = (int32_t)entity[1].monitor;
                              FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0, 0);
                              v49 = entity;
                              v50 = FieldPlayerServantIDList;
                              Instance = BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(this, Action, 0, v51);
                              if ( !logictarget )
                                goto LABEL_66;
                              TargetAiAct = BattleLogicTarget__getTargetAiAct(
                                              logictarget,
                                              monitor,
                                              uniqueId,
                                              (System_Int32_array *)klass,
                                              v50,
                                              v30 & 1,
                                              0,
                                              0,
                                              (AiActEntity_o *)v49,
                                              Instance & 1,
                                              execTask,
                                              0);
                            }
                            else
                            {
LABEL_58:
                              v53 = this->fields.logictarget;
                              v54 = v22->fields.uniqueId;
                              Instance = (__int64)BattleData__getFieldPlayerServantIDList(data, 0, 0);
                              if ( !v53 )
                                goto LABEL_66;
                              TargetAiAct = BattleLogicTarget__getTargetAiAct(
                                              v53,
                                              1,
                                              v54,
                                              0,
                                              (System_Int32_array *)Instance,
                                              v30 & 1,
                                              0,
                                              0,
                                              (AiActEntity_o *)entity,
                                              1,
                                              execTask,
                                              0);
                            }
                            BattleLogicTask__setTarget(execTask, TargetAiAct, 0);
                            Instance = (__int64)this->fields.logictarget;
                            if ( Instance )
                            {
                              *(_QWORD *)(Instance + 24) = 0;
                              sub_2213A04(
                                (MissionNaviTransitionBoardItem_o *)(Instance + 24),
                                0,
                                v55,
                                v56,
                                v57,
                                v58,
                                v59,
                                v60);
                              v61 = (BattleCommandData_o *)sub_2213CCC(BattleCommandData_TypeInfo);
                              BattleCommandData___ctor(v61, 0);
                              Instance = BattleServantData__getTreasureDvcCardId(v22, 0);
                              if ( v61 )
                              {
                                v61->fields._type = Instance;
                                DispLimitCount = BattleServantData__getDispLimitCount(v22, 1, 0);
                                v63 = v22->fields.uniqueId;
                                v61->fields.svtlimit = DispLimitCount;
                                v61->fields.uniqueId = v63;
                                v61->fields.svtId = BattleServantData__getSvtId(v22, 0);
                                v61->fields.treasureDvc = BattleServantData__getTreasureDvcId(v22, 1, 0, 0);
                                v64 = (BattleComboData_o *)sub_2213CCC(BattleComboData_TypeInfo);
                                BattleComboData___ctor(v64, 0);
                                v65 = this->fields.data;
                                if ( v65 )
                                {
                                  BattleLogicTask__setActionCommand(execTask, v64, v61, v65->fields.countEnemyAttack, 0);
                                  TreasureDvcId = BattleServantData__getTreasureDvcId(v22, 1, 0, 0);
                                  BattleLogicTask__setActionTreasureDvc(execTask, TreasureDvcId, 1, 0);
                                  IsTargetTypeEnemy = BattleLogicTask__IsTargetTypeEnemy(execTask, 0);
                                  BattleLogicTask__RevertUnusedNoNeedUpHateBuff(execTask, IsTargetTypeEnemy, 0);
                                  Instance = sub_2213B20(BattleLogicTask___TypeInfo, 1);
                                  if ( Instance )
                                  {
                                    v68 = (BattleLogicTask_array *)Instance;
                                    sub_1FFE8F8(Instance, execTask);
                                    sub_1FFE2C4(v68, 0, execTask);
                                    Instance = (__int64)BattleLogicEnemyAi__ReplaceCommandTasksBySealStatus(
                                                          this,
                                                          v22,
                                                          v68,
                                                          v69);
                                    v8 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
                                    goto LABEL_65;
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
              else
              {
                v32 = this->fields.data;
                if ( v32 )
                {
                  Instance = (__int64)this->fields.aiLogic;
                  if ( Instance )
                  {
                    Instance = (__int64)AiLogic__getAction(
                                          (AiLogic_o *)Instance,
                                          v22,
                                          1,
                                          data->fields.turnCount,
                                          v32->fields.countEnemyAttack,
                                          (BattleLogicBaseAi_o *)this,
                                          &info,
                                          0,
                                          0);
                    v33 = this->fields.data;
                    if ( Instance )
                    {
                      if ( !v33 )
                        goto LABEL_66;
                      v34 = this->klass;
                      noThinkAiEnt = (struct AiEntity_o *)Instance;
                    }
                    else
                    {
                      if ( !v33 )
                        goto LABEL_66;
                      v34 = this->klass;
                      noThinkAiEnt = this->fields.noThinkAiEnt;
                    }
                    Instance = ((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, struct AiEntity_o *, _QWORD, AiLogic_AiInfo_o *, __int64, const MethodInfo *))v34->vtable._32_procAiAct.methodPtr)(
                                 this,
                                 v22,
                                 noThinkAiEnt,
                                 (unsigned int)v33->fields.countEnemyAttack,
                                 info,
                                 1,
                                 v34->vtable._32_procAiAct.method);
                    if ( v6 )
                    {
                      v8 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
LABEL_46:
                      System_Collections_Generic_List_object___AddRange(
                        v6,
                        v8,
                        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
                      goto LABEL_47;
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
    sub_2213CDC(Instance, v8);
  }
  return (System_Collections_Generic_List_BattleLogicTask__o *)v6;
}


void BattleLogicEnemyAi__ExcludeDeadFromTempDead(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x20
  Il2CppObject *data; // x19
  System_Predicate_int__o *v5; // x21

  if ( (byte_5973AC4 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleData_IsNotAliveTarget__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
    sub_2213A60(&System_Predicate_int__TypeInfo);
    byte_5973AC4 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
  {
    data = (Il2CppObject *)this->fields.data;
    v5 = (System_Predicate_int__o *)sub_2213CCC(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(v5, data, Method_BattleData_IsNotAliveTarget__, 0);
    System_Collections_Generic_HashSet_int___RemoveWhere(
      tempDeadSvtHash,
      (System_Predicate_T__o *)v5,
      (const MethodInfo_42B5534 *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
  }
}


System_Collections_Generic_List_BattleServantData__o *BattleLogicEnemyAi__GetBaseActPriorityList(
        BattleLogicEnemyAi_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_array *FieldEnemyServantList; // x0
  __int64 v5; // x1
  BattleLogicEnemyAi___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  struct BattleLogicEnemyAi___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__24_0; // x20
  Il2CppObject *v10; // x21
  struct BattleLogicEnemyAi___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  __int64 v19; // x1
  BattleLogicEnemyAi___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  struct BattleLogicEnemyAi___c_StaticFields *v22; // x9
  System_Func_object__int__o *_9__24_1; // x20
  Il2CppObject *v24; // x21
  struct BattleLogicEnemyAi___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v32; // x0
  __int64 v33; // x1
  BattleLogicEnemyAi___c_c *v34; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v35; // x19
  struct BattleLogicEnemyAi___c_StaticFields *v36; // x9
  System_Func_object__int__o *_9__24_2; // x20
  Il2CppObject *v38; // x21
  struct BattleLogicEnemyAi___c_StaticFields *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v46; // x0
  __int64 v47; // x1
  BattleLogicEnemyAi___c_c *v48; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v49; // x19
  struct BattleLogicEnemyAi___c_StaticFields *v50; // x9
  System_Func_object__int__o *_9__24_3; // x20
  Il2CppObject *v52; // x21
  struct BattleLogicEnemyAi___c_StaticFields *v53; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0

  if ( (byte_5973AB7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_BattleServantData__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_BattleServantData___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_2213A60(&System_Func_BattleServantData__int__TypeInfo);
    sub_2213A60(&System_Func_BattleServantData__bool__TypeInfo);
    sub_2213A60(&Method_BattleLogicEnemyAi___c__GetBaseActPriorityList_b__24_0__);
    sub_2213A60(&Method_BattleLogicEnemyAi___c__GetBaseActPriorityList_b__24_1__);
    sub_2213A60(&Method_BattleLogicEnemyAi___c__GetBaseActPriorityList_b__24_2__);
    sub_2213A60(&Method_BattleLogicEnemyAi___c__GetBaseActPriorityList_b__24_3__);
    sub_2213A60(&BattleLogicEnemyAi___c_TypeInfo);
    byte_5973AB7 = 1;
  }
  data = this->fields.data;
  if ( !data )
    sub_2213CDC(0, method);
  FieldEnemyServantList = BattleData__getFieldEnemyServantList(data, 1, 0);
  v6 = BattleLogicEnemyAi___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)FieldEnemyServantList;
  if ( !*(&BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo, v5);
    v6 = BattleLogicEnemyAi___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__24_0 = (System_Func_object__bool__o *)static_fields->__9__24_0;
  if ( !_9__24_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v5);
      static_fields = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__24_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__24_0, v10, Method_BattleLogicEnemyAi___c__GetBaseActPriorityList_b__24_0__, 0);
    v11 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    v11->__9__24_0 = (struct System_Func_BattleServantData__bool__o *)_9__24_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__24_0, (int32_t)_9__24_0, v12, v13, v14, v15, v16, v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          v7,
          (System_Func_TSource__bool__o *)_9__24_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v20 = BattleLogicEnemyAi___c_TypeInfo;
  v21 = v18;
  if ( !*(&BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo, v19);
    v20 = BattleLogicEnemyAi___c_TypeInfo;
  }
  v22 = v20->static_fields;
  _9__24_1 = (System_Func_object__int__o *)v22->__9__24_1;
  if ( !_9__24_1 )
  {
    if ( !*(&v20->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v20, v19);
      v22 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)v22->__9;
    _9__24_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__24_1, v24, Method_BattleLogicEnemyAi___c__GetBaseActPriorityList_b__24_1__, 0);
    v25 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    v25->__9__24_1 = (struct System_Func_BattleServantData__int__o *)_9__24_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->__9__24_1, (int32_t)_9__24_1, v26, v27, v28, v29, v30, v31);
  }
  v32 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v21,
          (System_Func_TSource__TKey__o *)_9__24_1,
          (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_BattleServantData__int___);
  v34 = BattleLogicEnemyAi___c_TypeInfo;
  v35 = v32;
  if ( !*(&BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo, v33);
    v34 = BattleLogicEnemyAi___c_TypeInfo;
  }
  v36 = v34->static_fields;
  _9__24_2 = (System_Func_object__int__o *)v36->__9__24_2;
  if ( !_9__24_2 )
  {
    if ( !*(&v34->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v34, v33);
      v36 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)v36->__9;
    _9__24_2 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__24_2, v38, Method_BattleLogicEnemyAi___c__GetBaseActPriorityList_b__24_2__, 0);
    v39 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    v39->__9__24_2 = (struct System_Func_BattleServantData__int__o *)_9__24_2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v39->__9__24_2, (int32_t)_9__24_2, v40, v41, v42, v43, v44, v45);
  }
  v46 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v35,
          (System_Func_TSource__TKey__o *)_9__24_2,
          (const MethodInfo_389B3BC *)Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
  v48 = BattleLogicEnemyAi___c_TypeInfo;
  v49 = v46;
  if ( !*(&BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo, v47);
    v48 = BattleLogicEnemyAi___c_TypeInfo;
  }
  v50 = v48->static_fields;
  _9__24_3 = (System_Func_object__int__o *)v50->__9__24_3;
  if ( !_9__24_3 )
  {
    if ( !*(&v48->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v48, v47);
      v50 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    }
    v52 = (Il2CppObject *)v50->__9;
    _9__24_3 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__24_3, v52, Method_BattleLogicEnemyAi___c__GetBaseActPriorityList_b__24_3__, 0);
    v53 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    v53->__9__24_3 = (struct System_Func_BattleServantData__int__o *)_9__24_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v53->__9__24_3, (int32_t)_9__24_3, v54, v55, v56, v57, v58, v59);
  }
  v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__int_(
                                                               v49,
                                                               (System_Func_TSource__TKey__o *)_9__24_3,
                                                               (const MethodInfo_389B3BC *)Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
  return (System_Collections_Generic_List_BattleServantData__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v60,
                                                                   (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_BattleServantData___);
}


System_Int32_array *BattleLogicEnemyAi__GetCommandArray(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *data; // x21
  BattleData_o *StageEntity; // x0
  __int64 v7; // x1

  if ( (byte_5973AC1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973AC1 = 1;
  }
  data = (UnityEngine_Object_o *)this->fields.data;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, servantData);
  StageEntity = (BattleData_o *)UnityEngine_Object__op_Inequality(data, 0, 0);
  if ( ((unsigned __int8)StageEntity & 1) != 0 )
  {
    StageEntity = this->fields.data;
    if ( !StageEntity )
      goto LABEL_13;
    StageEntity = (BattleData_o *)BattleData__getStageEntity(StageEntity, 0);
    if ( StageEntity )
    {
      StageEntity = (BattleData_o *)StageEntity__GetAiActTypeAttackCommandCardType(
                                      (StageEntity_o *)StageEntity,
                                      servantData,
                                      0);
      if ( (_DWORD)StageEntity )
      {
        if ( servantData )
          return BattleServantData__getCommandArray(servantData, (int32_t)StageEntity, 0);
LABEL_13:
        sub_2213CDC(StageEntity, v7);
      }
    }
  }
  if ( !servantData )
    goto LABEL_13;
  return BattleServantData__getCommandList(servantData, 0);
}


void BattleLogicEnemyAi__Initialize(BattleLogicEnemyAi_o *this, BattleData_o *data, const MethodInfo *method)
{
  AiLogic_o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  AiLogic_o *aiLogic; // x0
  AiEntity_o *v14; // x20
  struct AiEntity_o **p_noThinkAiEnt; // x19
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct AiEntity_o *v22; // x19

  if ( (byte_5973AB0 & 1) == 0 )
  {
    sub_2213A60(&AiEntity_TypeInfo);
    sub_2213A60(&AiLogic_TypeInfo);
    sub_2213A60(&StringLiteral_9680/*"NOTHINK_AIACTID"*/);
    byte_5973AB0 = 1;
  }
  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, method);
  v5 = (AiLogic_o *)sub_2213CCC(AiLogic_TypeInfo);
  AiLogic___ctor(v5, 0);
  this->fields.aiLogic = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.aiLogic, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    goto LABEL_6;
  AiLogic__Initialize(aiLogic, data, 0);
  v14 = (AiEntity_o *)sub_2213CCC(AiEntity_TypeInfo);
  AiEntity___ctor(v14, 0);
  this->fields.noThinkAiEnt = v14;
  p_noThinkAiEnt = &this->fields.noThinkAiEnt;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_noThinkAiEnt, (int32_t)v14, v16, v17, v18, v19, v20, v21);
  v22 = *p_noThinkAiEnt;
  aiLogic = (AiLogic_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_9680/*"NOTHINK_AIACTID"*/, 0);
  if ( !v22 )
LABEL_6:
    sub_2213CDC(aiLogic, v12);
  v22->fields.aiActId = (int)aiLogic;
}


bool BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(
        BattleLogicEnemyAi_o *this,
        AiEntity_o *aiEnt,
        bool isBattleScript,
        const MethodInfo *method)
{
  char v5; // w1
  BattleLogic_o *logic; // x0

  if ( isBattleScript )
  {
    v5 = 1;
    if ( aiEnt )
      return AiBaseEntity__IsDeadToEnableUpHate((AiBaseEntity_o *)aiEnt, v5, 0);
  }
  else
  {
    logic = this->fields.logic;
    if ( !logic )
      sub_2213CDC(0, aiEnt);
    v5 = BattleLogic__GetLogicType(logic, 0) == 42;
    if ( aiEnt )
      return AiBaseEntity__IsDeadToEnableUpHate((AiBaseEntity_o *)aiEnt, v5, 0);
  }
  return v5;
}


bool BattleLogicEnemyAi__IsNotTempDeadSvt(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleLogicEnemyAi_o *v4; // x20

  v4 = this;
  if ( (byte_5973AC5 & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_2213A60(&Method_BasicHelper_ContainsSelfNotNull_int___);
    byte_5973AC5 = 1;
  }
  if ( !svtData )
    sub_2213CDC(this, svtData);
  return !BasicHelper__ContainsSelfNotNull_int_(
            (System_Collections_Generic_HashSet_T__o *)v4->fields.tempDeadSvtHash,
            svtData->fields.uniqueId,
            (const MethodInfo_3810380 *)Method_BasicHelper_ContainsSelfNotNull_int___);
}


BattleLogicTask_array *BattleLogicEnemyAi__ProcAiActBattleScript(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        AiEntity_o *aiEnt,
        int32_t countAct,
        AiLogic_AiInfo_o *aiInfo,
        int32_t procState,
        const MethodInfo *method)
{
  __int64 v13; // x24
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x7
  System_Collections_Generic_HashSet_int__o *v23; // x26
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  BattleLogicTask_array *v30; // x19
  const MethodInfo *v31; // x3
  BattleLogicTask_array *v32; // x20
  System_Action_object__o *v33; // x21

  if ( (byte_5973AB9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleLogicTask__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_BattleLogicTask___);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&Method_BattleLogicEnemyAi___c__DisplayClass26_0__ProcAiActBattleScript_b__0__);
    sub_2213A60(&BattleLogicEnemyAi___c__DisplayClass26_0_TypeInfo);
    byte_5973AB9 = 1;
  }
  v13 = sub_2213CCC(BattleLogicEnemyAi___c__DisplayClass26_0_TypeInfo);
  BattleLogicEnemyAi___c__DisplayClass26_0___ctor((BattleLogicEnemyAi___c__DisplayClass26_0_o *)v13, 0);
  if ( !v13 )
    sub_2213CDC(v14, v15);
  *(_QWORD *)(v13 + 16) = svtData;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)svtData, v16, v17, v18, v19, v20, v21);
  if ( !this->fields.tempDeadSvtHash )
  {
    v23 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v23,
      (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    this->fields.tempDeadSvtHash = v23;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.tempDeadSvtHash,
      (int32_t)v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = BattleLogicEnemyAi__procAiActLocal(
          this,
          *(BattleServantData_o **)(v13 + 16),
          aiEnt,
          countAct,
          aiInfo,
          procState,
          1,
          v22);
  v32 = BattleLogicEnemyAi__ReplaceCommandTasksBySealStatus(this, *(BattleServantData_o **)(v13 + 16), v30, v31);
  v33 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleLogicTask__TypeInfo);
  System_Action_object____ctor(
    v33,
    (Il2CppObject *)v13,
    Method_BattleLogicEnemyAi___c__DisplayClass26_0__ProcAiActBattleScript_b__0__,
    0);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)v30,
    (System_Action_T__o *)v33,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BattleLogicTask___);
  return v32;
}


BattleLogicTask_o *BattleLogicEnemyAi__ReplaceCommandTaskBySealStatus(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        BattleLogicTask_o *derivedTask,
        const MethodInfo *method)
{
  BattleLogicTask_o *CommandRandomTask; // x19
  _BOOL8 IsSealedCommandTask; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  CommandRandomTask = derivedTask;
  IsSealedCommandTask = BattleLogicServantAi__IsSealedCommandTask(svtData, derivedTask, (const MethodInfo *)derivedTask);
  if ( IsSealedCommandTask )
  {
    if ( !CommandRandomTask )
      goto LABEL_8;
    if ( !BattleLogicTask__isTreasureDvc(CommandRandomTask, 0) )
    {
LABEL_6:
      BattleLogicTask__SetDoNotAct(CommandRandomTask, 0);
      return CommandRandomTask;
    }
    CommandRandomTask = BattleLogicEnemyAi__CreateCommandRandomTask(this, svtData, CommandRandomTask, v9);
    IsSealedCommandTask = BattleLogicServantAi__IsSealedCommandTask(svtData, CommandRandomTask, v10);
    if ( IsSealedCommandTask )
    {
      if ( CommandRandomTask )
        goto LABEL_6;
LABEL_8:
      sub_2213CDC(IsSealedCommandTask, v8);
    }
  }
  return CommandRandomTask;
}


BattleLogicTask_array *BattleLogicEnemyAi__ReplaceCommandTasksBySealStatus(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        BattleLogicTask_array *derivedTasks,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Func_object__object__o *v22; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_5973AC0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_BattleLogicTask__BattleLogicTask___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
    sub_2213A60(&System_Func_BattleLogicTask__BattleLogicTask__TypeInfo);
    sub_2213A60(&Method_BattleLogicEnemyAi___c__DisplayClass38_0__ReplaceCommandTasksBySealStatus_b__0__);
    sub_2213A60(&BattleLogicEnemyAi___c__DisplayClass38_0_TypeInfo);
    byte_5973AC0 = 1;
  }
  v7 = sub_2213CCC(BattleLogicEnemyAi___c__DisplayClass38_0_TypeInfo);
  BattleLogicEnemyAi___c__DisplayClass38_0___ctor((BattleLogicEnemyAi___c__DisplayClass38_0_o *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = svtData;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)svtData, v16, v17, v18, v19, v20, v21);
  v22 = (System_Func_object__object__o *)sub_2213CCC(System_Func_BattleLogicTask__BattleLogicTask__TypeInfo);
  System_Func_object__object____ctor(
    v22,
    (Il2CppObject *)v7,
    Method_BattleLogicEnemyAi___c__DisplayClass38_0__ReplaceCommandTasksBySealStatus_b__0__,
    0);
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)derivedTasks,
                                                               (System_Func_TSource__TResult__o *)v22,
                                                               (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_BattleLogicTask__BattleLogicTask___);
  return (BattleLogicTask_array *)System_Linq_Enumerable__ToArray_object_(
                                    v23,
                                    (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
}


void BattleLogicEnemyAi__SetNextActIncludeTempDeadSvt(
        BattleLogicEnemyAi_o *this,
        bool isIncludeTempDeadSvt,
        const MethodInfo *method)
{
  if ( this->fields.tempDeadSvtHash )
    this->fields.isClearTempDeadSvtPrevAct = isIncludeTempDeadSvt;
}


void BattleLogicEnemyAi__SetSkillRandomWeightSameProbability(
        BattleLogicEnemyAi_o *this,
        WeightRate_int__o *weight,
        int32_t weightRate,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  if ( (byte_5973AC7 & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_2213A60(&Method_WeightRate_int__setWeight__);
    byte_5973AC7 = 1;
  }
  if ( !servantData )
    goto LABEL_14;
  if ( BattleServantData__isUseSelfSkill(servantData, 0, 0) )
  {
    this = (BattleLogicEnemyAi_o *)AiAct__getInt(11, 0);
    if ( !weight )
      goto LABEL_14;
    WeightRate_int___setWeight(
      weight,
      weightRate,
      (int32_t)this,
      (const MethodInfo_3DA11F8 *)Method_WeightRate_int__setWeight__);
  }
  if ( BattleServantData__isUseSelfSkill(servantData, 1, 0) )
  {
    this = (BattleLogicEnemyAi_o *)AiAct__getInt(12, 0);
    if ( !weight )
      goto LABEL_14;
    WeightRate_int___setWeight(
      weight,
      weightRate,
      (int32_t)this,
      (const MethodInfo_3DA11F8 *)Method_WeightRate_int__setWeight__);
  }
  if ( BattleServantData__isUseSelfSkill(servantData, 2, 0) )
  {
    this = (BattleLogicEnemyAi_o *)AiAct__getInt(13, 0);
    if ( weight )
    {
      WeightRate_int___setWeight(
        weight,
        weightRate,
        (int32_t)this,
        (const MethodInfo_3DA11F8 *)Method_WeightRate_int__setWeight__);
      return;
    }
LABEL_14:
    sub_2213CDC(this, weight);
  }
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *BattleLogicEnemyAi__TaskAIAttackEnd(
        BattleLogicEnemyAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  BattleLogicEnemyAi__ClearTempDeadSvt(this, *(const MethodInfo **)&ltype);
  this->fields.tempDeadSvtHash = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.tempDeadSvtHash, 0, v5, v6, v7, v8, v9, v10);
  return 0;
}


BattleLogicTask_array *BattleLogicEnemyAi__TaskAIAttackPrecheck(
        BattleLogicEnemyAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x21
  bool isClearTempDeadSvtPrevAct; // w23
  CheckEnemyRelationInterruptProcess_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  const MethodInfo_4485784 *v27; // x1

  if ( (byte_5973AB2 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicTask_TypeInfo);
    sub_2213A60(&CheckEnemyRelationInterruptProcess_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_5973AB2 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v6 = sub_2213CCC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v6, 0);
  isClearTempDeadSvtPrevAct = this->fields.isClearTempDeadSvtPrevAct;
  v8 = (CheckEnemyRelationInterruptProcess_o *)sub_2213CCC(CheckEnemyRelationInterruptProcess_TypeInfo);
  CheckEnemyRelationInterruptProcess___ctor(v8, isClearTempDeadSvtPrevAct, 0);
  if ( !v6
    || (*(_QWORD *)(v6 + 296) = v8,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 296), (int32_t)v8, v11, v12, v13, v14, v15, v16),
        *(_BYTE *)(v6 + 266) = 1,
        !v5)
    || (items = v5->fields._items,
        v24 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v5->fields._version,
        !items) )
  {
    sub_2213CDC(v9, v10);
  }
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v6,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v6;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), v6, v17, v18, v19, v20, v21, v22);
  }
  v27 = (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__;
  this->fields.isClearTempDeadSvtPrevAct = 0;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(v5, v27);
}


BattleLogicTask_array *BattleLogicEnemyAi__TaskAIAttackStart(
        BattleLogicEnemyAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5973AB1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_5973AB1 = 1;
  }
  if ( !this->fields.tempDeadSvtHash )
  {
    v5 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v5,
      (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    this->fields.tempDeadSvtHash = v5;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.tempDeadSvtHash,
      (int32_t)v5,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  this->fields.isClearTempDeadSvtPrevAct = 0;
  return 0;
}


void BattleLogicEnemyAi__addEnemyActPriorityList(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *inSvtData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *actlist; // x0

  if ( (byte_5973AB8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__Insert__);
    byte_5973AB8 = 1;
  }
  actlist = (System_Collections_Generic_List_object__o *)this->fields.actlist;
  if ( !actlist )
    sub_2213CDC(0, inSvtData);
  System_Collections_Generic_List_object___Insert(
    actlist,
    0,
    (Il2CppObject *)inSvtData,
    (const MethodInfo_4484A00 *)Method_System_Collections_Generic_List_BattleServantData__Insert__);
}


BattleLogicTask_o *BattleLogicEnemyAi__createCommandRandomTask(
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
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v16; // x24
  unsigned __int64 v17; // x25
  int32_t Next; // w0
  __int64 v19; // x1
  int32_t Data; // w23
  int32_t SvtId; // w25
  int32_t DispLimitCount; // w26
  BattleCommandData_o *v23; // x23
  int32_t v24; // w1
  BattleComboData_c *v25; // x0
  BattleComboData_o *v26; // x20

  if ( (byte_5973ABF & 1) == 0 )
  {
    sub_2213A60(&BattleComboData_TypeInfo);
    sub_2213A60(&BattleCommandData_TypeInfo);
    sub_2213A60(&BattleCommand_TypeInfo);
    sub_2213A60(&BattleLogicTask_TypeInfo);
    sub_2213A60(&Method_WeightRate_int___ctor__);
    sub_2213A60(&Method_WeightRate_int__getData__);
    sub_2213A60(&Method_WeightRate_int__getTotalWeight__);
    sub_2213A60(&Method_WeightRate_int__setWeight__);
    sub_2213A60(&WeightRate_int__TypeInfo);
    byte_5973ABF = 1;
  }
  v10 = (BattleLogicTask_o *)sub_2213CCC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v10, 0);
  if ( !v10 )
    goto LABEL_23;
  BattleLogicTask__setTarget(v10, targetId, 0);
  if ( !svtData )
    goto LABEL_23;
  BattleLogicTask__setActor(v10, 3, svtData->fields.uniqueId, 0);
  if ( SvtType__IsEnemy_47416048(svtData->fields.svtType, 0) )
  {
    Type = 10;
    goto LABEL_17;
  }
  v14 = (WeightRate_int__o *)sub_2213CCC(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v14, (const MethodInfo_3DA1D84 *)Method_WeightRate_int___ctor__);
  CommandList = BattleServantData__getCommandList(svtData, 0);
  if ( !CommandList )
    goto LABEL_23;
  max_length = CommandList->max_length;
  v16 = CommandList;
  if ( (int)max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)max_length )
        sub_2213CE4(CommandList);
      if ( !v14 )
        break;
      WeightRate_int___setWeight(
        v14,
        10,
        v16->m_Items[v17],
        (const MethodInfo_3DA11F8 *)Method_WeightRate_int__setWeight__);
      LODWORD(max_length) = v16->max_length;
      if ( (__int64)++v17 >= (int)max_length )
        goto LABEL_13;
    }
LABEL_23:
    sub_2213CDC(CommandList, v12);
  }
LABEL_13:
  if ( !v14 )
    goto LABEL_23;
  Next = BattleRandom__getNext(v14->fields.totalweight, 0);
  Data = WeightRate_int___getData(v14, Next, (const MethodInfo_3DA1690 *)Method_WeightRate_int__getData__);
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v19);
  Type = BattleCommand__getType(Data, 0);
LABEL_17:
  SvtId = BattleServantData__getSvtId(svtData, 0);
  DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0);
  v23 = (BattleCommandData_o *)sub_2213CCC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_53637188(v23, Type, SvtId, DispLimitCount, 0, -1, 0);
  if ( !v23 )
    goto LABEL_23;
  v23->fields.uniqueId = svtData->fields.uniqueId;
  if ( !baseTask )
    goto LABEL_23;
  if ( baseTask->fields.isNoCriticalOnAttack )
    v24 = 3;
  else
    v24 = 1;
  BattleCommandData__SetCriticalDecisionType(v23, v24, 0);
  v25 = BattleComboData_TypeInfo;
  v10->fields.isNoCriticalOnAttack = baseTask->fields.isNoCriticalOnAttack;
  v26 = (BattleComboData_o *)sub_2213CCC(v25);
  BattleComboData___ctor(v26, 0);
  BattleLogicTask__setActionCommand(v10, v26, v23, countAct, 0);
  return v10;
}


int32_t BattleLogicEnemyAi__get_ActorType(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  return 3;
}


bool BattleLogicEnemyAi__get_IsInNormalAiAct(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  return this->fields.tempDeadSvtHash != 0;
}


System_Int32_array *BattleLogicEnemyAi__get_OpponentSvtIds(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_2213CDC(0, method);
  return BattleData__getFieldPlayerServantIDList(data, 0, 0);
}


System_Int32_array *BattleLogicEnemyAi__get_PartySvtIds(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_2213CDC(0, method);
  return BattleData__getFieldEnemyServantIDList(data, 0, 0);
}


BattleLogicTask_array *BattleLogicEnemyAi__procAiAct(
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x7
  BattleLogicTask_array *v23; // x19
  const MethodInfo *v24; // x3
  BattleLogicTask_array *v25; // x20
  System_Action_object__o *v26; // x21

  if ( (byte_5973ABA & 1) == 0 )
  {
    sub_2213A60(&System_Action_BattleLogicTask__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_BattleLogicTask___);
    sub_2213A60(&Method_BattleLogicEnemyAi___c__DisplayClass27_0__procAiAct_b__0__);
    sub_2213A60(&BattleLogicEnemyAi___c__DisplayClass27_0_TypeInfo);
    byte_5973ABA = 1;
  }
  v13 = sub_2213CCC(BattleLogicEnemyAi___c__DisplayClass27_0_TypeInfo);
  BattleLogicEnemyAi___c__DisplayClass27_0___ctor((BattleLogicEnemyAi___c__DisplayClass27_0_o *)v13, 0);
  if ( !v13 )
    sub_2213CDC(v14, v15);
  *(_QWORD *)(v13 + 16) = svtData;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)svtData, v16, v17, v18, v19, v20, v21);
  v23 = BattleLogicEnemyAi__procAiActLocal(
          this,
          *(BattleServantData_o **)(v13 + 16),
          aiEnt,
          countAct,
          aiInfo,
          procState,
          0,
          v22);
  v25 = BattleLogicEnemyAi__ReplaceCommandTasksBySealStatus(this, *(BattleServantData_o **)(v13 + 16), v23, v24);
  v26 = (System_Action_object__o *)sub_2213CCC(System_Action_BattleLogicTask__TypeInfo);
  System_Action_object____ctor(
    v26,
    (Il2CppObject *)v13,
    Method_BattleLogicEnemyAi___c__DisplayClass27_0__procAiAct_b__0__,
    0);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)v23,
    (System_Action_T__o *)v26,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_BattleLogicTask___);
  return v25;
}


BattleLogicTask_array *BattleLogicEnemyAi__procAiActLocal(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        AiEntity_o *aiEnt,
        int32_t countAct,
        AiLogic_AiInfo_o *aiInfo,
        int32_t procState,
        bool isBattleScript,
        const MethodInfo *method)
{
  BattleLogicEnemyAi_o *v14; // x21
  int32_t data_high; // w26
  AiActEntity_o *v16; // x23
  BattleLogicBaseAi_o *v17; // x0
  const MethodInfo *v18; // x4
  bool v20; // w28
  WeightRate_int__o *v21; // x24
  BattleServantData_o *v22; // x0
  int32_t v23; // w1
  int32_t Int; // w0
  int32_t v25; // w0
  int32_t v26; // w0
  int *skillVals; // x8
  int32_t v28; // w20
  int32_t v29; // w24
  int32_t Next; // w0
  int32_t Data; // w0
  System_Collections_Generic_List_object__o *v32; // x28
  __int64 v33; // x26
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct System_String_o *infoText; // x1
  BattleData_o *v41; // x20
  bool v42; // w24
  __int64 v43; // x20
  const MethodInfo *v44; // x4
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  const MethodInfo *v51; // x4
  int32_t v52; // w2
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  struct BattleLogic_o *v55; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  Il2CppObject *MasterData_object; // x20
  BattleSkillInfoData_o *SkillInfoDataByAiActType; // x0
  int32_t v71; // w24
  bool v72; // w27
  BattleSkillInfoData_o *v73; // x29
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v75; // x20
  _BOOL8 isSkillType; // x0
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  const MethodInfo *v80; // x5
  bool v81; // w6
  bool v82; // w7
  bool v83; // w25
  BattleLogic_o *logic; // x24
  struct BattleLogicTarget_o *funcId; // x25
  BattleLogicEnemyAi_o *v86; // x2
  BattleLogic_o *v87; // x0
  struct BattleLogicTarget_o *logictarget; // x1
  Il2CppObject *v89; // x24
  struct BattleLogic_o *tempDeadSvtHash; // x1
  bool IsEnableTarget; // w0
  bool v92; // w27
  BattleData_o *v93; // x8
  BattleLogicTarget_o *v94; // x20
  int32_t target; // w28
  System_Int32_array *targetIndividuality; // x26
  System_Int32_array *FieldPlayerServantIDList; // x24
  const MethodInfo *v98; // x3
  BattleData_o *v99; // x8
  BattleLogicEnemyAi_o *v100; // x20
  BattleLogicTarget_o *v101; // x24
  int32_t v102; // w25
  int32_t uniqueId; // w27
  System_Int32_array *v104; // x28
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  struct BattleLogicTarget_o *v111; // x8
  bool v112; // w8
  int32_t LogicType; // w0
  int32_t v115; // w0
  System_String_o *v116; // x2
  System_String_o *v117; // x3
  int32_t v118; // w4
  int32_t v119; // w5
  bool v120; // w6
  bool v121; // w7
  int32_t Type; // w21
  const MethodInfo *v123; // x3
  BattleSkillInfoData_o *v124; // x21
  System_String_o *v125; // x2
  System_String_o *v126; // x3
  int32_t v127; // w4
  int32_t v128; // w5
  bool v129; // w6
  bool v130; // w7
  BattleCommandData_o *v131; // x20
  int32_t v132; // w0
  int32_t v133; // w8
  BattleComboData_o *v134; // x21
  int32_t TreasureDvcId; // w0
  bool IsTargetTypeEnemy; // w0
  System_Collections_Generic_List_object__o *v137; // x0
  BattleLogicTask_o *v138; // x1
  void *v139; // x2
  struct BattleLogic_o *v140; // x8
  BattleServantData_o *ServantData; // x0
  bool IsNeedUpHate; // w0
  BattleLogicTask_o *v143; // x19
  WeightRate_int__o *v144; // x20
  const MethodInfo *v145; // x2
  struct BattleLogic_o *v146; // x8
  BattleLogicEnemyAi_o *v147; // x21
  unsigned __int64 v148; // x22
  int32_t v149; // w0
  __int64 v150; // x1
  int32_t v151; // w20
  struct System_Int32_array *FixCommandCardIds; // x0
  System_String_o *v153; // x2
  System_String_o *v154; // x3
  int32_t v155; // w4
  int32_t v156; // w5
  bool v157; // w6
  bool v158; // w7
  int32_t SvtId; // w22
  int32_t DispLimitCount; // w23
  BattleCommandData_o *v161; // x20
  _BOOL4 isNoCriticalOnAttack; // w9
  BattleCommandData_o *v163; // x0
  int32_t v164; // w1
  BattleComboData_o *v165; // x19
  struct System_Object_array *items; // x8
  _QWORD *v167; // x9
  __int64 size; // x10
  Il2CppClass **v169; // x0
  System_Collections_Generic_List_object__o *v170; // [xsp+20h] [xbp-B0h]
  int32_t v171; // [xsp+2Ch] [xbp-A4h]
  int32_t v172; // [xsp+30h] [xbp-A0h]
  int32_t actId; // [xsp+34h] [xbp-9Ch]
  BattleSkillInfoData_o *v174; // [xsp+38h] [xbp-98h]
  BattleLogicEnemyAi_o *targetlist; // [xsp+40h] [xbp-90h]
  BattleLogicTask_o *execTask; // [xsp+48h] [xbp-88h]
  BattleBranchSkillInfoData_o *battleBranchSkillInfo; // [xsp+50h] [xbp-80h] BYREF
  int32_t lv; // [xsp+5Ch] [xbp-74h] BYREF
  int32_t id[2]; // [xsp+60h] [xbp-70h] BYREF
  int32_t aiActType; // [xsp+68h] [xbp-68h] BYREF
  bool noMessage; // [xsp+6Ch] [xbp-64h] BYREF

  v14 = this;
  if ( (byte_5973ABB & 1) == 0 )
  {
    sub_2213A60(&BattleComboData_TypeInfo);
    sub_2213A60(&BattleCommandData_TypeInfo);
    sub_2213A60(&BattleCommand_TypeInfo);
    sub_2213A60(&BattleLogicTask_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_2213A60(&ServantAiActArgument_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_WeightRate_int___ctor__);
    sub_2213A60(&Method_WeightRate_int__getCount__);
    sub_2213A60(&Method_WeightRate_int__getData__);
    sub_2213A60(&Method_WeightRate_int__getTotalWeight__);
    sub_2213A60(&Method_WeightRate_int__setWeight__);
    sub_2213A60(&WeightRate_int__TypeInfo);
    this = (BattleLogicEnemyAi_o *)sub_2213A60(&StringLiteral_9103/*"MOTION_"*/);
    byte_5973ABB = 1;
  }
  noMessage = 0;
  aiActType = 0;
  *(_QWORD *)id = 0;
  lv = 0;
  battleBranchSkillInfo = 0;
  if ( !aiEnt )
    goto LABEL_183;
  this = (BattleLogicEnemyAi_o *)BattleLogicBaseAi__GetAiActEntity(
                                   (BattleLogicBaseAi_o *)v14,
                                   aiEnt->fields.aiActId,
                                   (const MethodInfo *)aiEnt);
  aiActType = 0;
  if ( !this )
    goto LABEL_183;
  data_high = HIDWORD(this->fields.data);
  v16 = (AiActEntity_o *)this;
  aiActType = data_high;
  if ( !svtData )
    goto LABEL_183;
  v17 = (BattleLogicBaseAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))svtData->klass->vtable._18_getAiState.methodPtr)(
                                 svtData,
                                 svtData->klass->vtable._18_getAiState.method);
  if ( BattleLogicBaseAi__IsChangeThinkingOnly(v17, data_high, (AiBaseEntity_o *)aiEnt, (AiState_o *)v17, v18) )
    return v14->fields.emptyTask;
  v20 = procState != 1 || BattleServantData__canUseSkill(svtData, -1, 0);
  v21 = (WeightRate_int__o *)sub_2213CCC(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v21, (const MethodInfo_3DA1D84 *)Method_WeightRate_int___ctor__);
  if ( aiInfo )
  {
    this = (BattleLogicEnemyAi_o *)AiLogic_AiInfo__IsChecked(aiInfo, (AiBaseEntity_o *)aiEnt, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      AiLogic_AiInfo__GetCheckedResult(aiInfo, svtData, (AiBaseEntity_o *)aiEnt, &aiActType, &noMessage, 0);
      goto LABEL_66;
    }
  }
  if ( data_high <= 11 )
  {
    switch ( data_high )
    {
      case 1:
        this = (BattleLogicEnemyAi_o *)AiAct__getInt(2, 0);
        if ( !v21 )
          goto LABEL_183;
        WeightRate_int___setWeight(
          v21,
          10,
          (int32_t)this,
          (const MethodInfo_3DA11F8 *)Method_WeightRate_int__setWeight__);
        if ( v20 )
        {
          if ( BattleServantData__isUseSelfSkill(svtData, 0, 0) )
          {
            Int = AiAct__getInt(11, 0);
            WeightRate_int___setWeight(v21, 10, Int, (const MethodInfo_3DA11F8 *)Method_WeightRate_int__setWeight__);
          }
          if ( BattleServantData__isUseSelfSkill(svtData, 1, 0) )
          {
            v25 = AiAct__getInt(12, 0);
            WeightRate_int___setWeight(v21, 10, v25, (const MethodInfo_3DA11F8 *)Method_WeightRate_int__setWeight__);
          }
          if ( BattleServantData__isUseSelfSkill(svtData, 2, 0) )
          {
            v26 = AiAct__getInt(13, 0);
            WeightRate_int___setWeight(v21, 10, v26, (const MethodInfo_3DA11F8 *)Method_WeightRate_int__setWeight__);
          }
        }
        break;
      case 10:
        if ( !v20 )
          goto LABEL_62;
        if ( BattleServantData__isUseSelfSkill(svtData, 0, 0) )
        {
          this = (BattleLogicEnemyAi_o *)AiAct__getInt(11, 0);
          if ( !v21 )
            goto LABEL_183;
          WeightRate_int___setWeight(
            v21,
            10,
            (int32_t)this,
            (const MethodInfo_3DA11F8 *)Method_WeightRate_int__setWeight__);
        }
        if ( BattleServantData__isUseSelfSkill(svtData, 1, 0) )
        {
          this = (BattleLogicEnemyAi_o *)AiAct__getInt(12, 0);
          if ( !v21 )
            goto LABEL_183;
          WeightRate_int___setWeight(
            v21,
            10,
            (int32_t)this,
            (const MethodInfo_3DA11F8 *)Method_WeightRate_int__setWeight__);
        }
        this = (BattleLogicEnemyAi_o *)BattleServantData__isUseSelfSkill(svtData, 2, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (BattleLogicEnemyAi_o *)AiAct__getInt(13, 0);
          if ( !v21 )
            goto LABEL_183;
          WeightRate_int___setWeight(
            v21,
            10,
            (int32_t)this,
            (const MethodInfo_3DA11F8 *)Method_WeightRate_int__setWeight__);
        }
        else
        {
LABEL_62:
          if ( !v21 )
            goto LABEL_183;
        }
        if ( WeightRate_int___getCount(v21, (const MethodInfo_3DA15D4 *)Method_WeightRate_int__getCount__) < 1 )
          goto LABEL_65;
        break;
      case 11:
        if ( !v20 )
        {
          aiActType = 2;
          noMessage = 1;
        }
        v22 = svtData;
        v23 = 0;
LABEL_38:
        if ( !BattleServantData__isUseSelfSkill(v22, v23, 0) )
          aiActType = 2;
        goto LABEL_66;
      default:
        goto LABEL_40;
    }
    Next = BattleRandom__getNext(v21->fields.totalweight, 0);
    Data = WeightRate_int___getData(v21, Next, (const MethodInfo_3DA1690 *)Method_WeightRate_int__getData__);
    aiActType = AiAct__getType(Data, 0);
    goto LABEL_66;
  }
  if ( data_high == 12 )
  {
    if ( !v20 )
    {
      aiActType = 2;
      noMessage = 1;
    }
    v22 = svtData;
    v23 = 1;
    goto LABEL_38;
  }
  if ( data_high != 13 )
  {
    if ( data_high == 80 )
    {
      if ( BattleServantData__isNobleAction(svtData, 0)
        && TreasureDeviceConditionUtil__IsSatisfyEachCondition(svtData, v14->fields.data, 0) )
      {
        goto LABEL_66;
      }
      goto LABEL_65;
    }
LABEL_40:
    if ( (data_high & 0xFFFFFFFE) != 0x28 )
      goto LABEL_66;
    skillVals = (int *)v16->fields.skillVals;
    if ( !skillVals )
      goto LABEL_183;
    if ( skillVals[6] <= 1 )
    {
LABEL_147:
      aiActType = 0;
      goto LABEL_66;
    }
    if ( v20 || data_high != 41 )
    {
      v28 = skillVals[8];
      v29 = skillVals[9];
      this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_183;
      this = (BattleLogicEnemyAi_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
      if ( !this )
        goto LABEL_183;
      if ( SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v28, v29, 0) )
      {
        BattleServantData__addSkillInfo(svtData, 20, 0, v28, v29, -1, -1, 0, 0);
        goto LABEL_66;
      }
      goto LABEL_147;
    }
LABEL_65:
    aiActType = 2;
    noMessage = 1;
    goto LABEL_66;
  }
  if ( !v20 )
  {
    aiActType = 2;
    noMessage = 1;
  }
  if ( !BattleServantData__isUseSelfSkill(svtData, 2, 0) )
    aiActType = 2;
LABEL_66:
  v32 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v33 = sub_2213CCC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v33, 0);
  if ( noMessage )
  {
    if ( !v33 )
      goto LABEL_183;
  }
  else
  {
    if ( !v33 )
      goto LABEL_183;
    infoText = aiEnt->fields.infoText;
    *(_QWORD *)(v33 + 176) = infoText;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v33 + 176), (int32_t)infoText, v34, v35, v36, v37, v38, v39);
  }
  BattleLogicTask__setActor((BattleLogicTask_o *)v33, 3, svtData->fields.uniqueId, 0);
  if ( AiBaseEntity__IsForcedActionSpeedAnyTime((AiBaseEntity_o *)aiEnt, 0) )
  {
    *(_BYTE *)(v33 + 184) = 1;
  }
  else if ( (((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, AiEntity_o *, const MethodInfo *))v14->klass->vtable._29_IsNotPlayedActionFirstTime.methodPtr)(
               v14,
               aiEnt,
               v14->klass->vtable._29_IsNotPlayedActionFirstTime.method)
           & 1) != 0 )
  {
    v41 = v14->fields.data;
    *(_BYTE *)(v33 + 184) = 1;
    this = (BattleLogicEnemyAi_o *)((__int64 (__fastcall *)(AiEntity_o *, const MethodInfo *))aiEnt->klass->vtable._7_get_FirstTimeSaveKey.methodPtr)(
                                     aiEnt,
                                     aiEnt->klass->vtable._7_get_FirstTimeSaveKey.method);
    if ( !v41 )
      goto LABEL_183;
    BattleData__AddPlayedFirstTimeNormalSpeedAiList(v41, (System_String_o *)this, 0);
  }
  *(_BYTE *)(v33 + 232) = AiActEntity__IsNoCriticalOnAttack(v16, 0);
  this = (BattleLogicEnemyAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))svtData->klass->vtable._18_getAiState.methodPtr)(
                                   svtData,
                                   svtData->klass->vtable._18_getAiState.method);
  if ( !this )
    goto LABEL_183;
  AiState__setBeforeAction((AiState_o *)this, aiActType, aiEnt->fields.aiActId, 0);
  v42 = noMessage;
  v43 = sub_2213CCC(ServantAiActArgument_TypeInfo);
  BaseAiActArgument___ctor((BaseAiActArgument_o *)v43, v16, (AiBaseEntity_o *)aiEnt, procState, v44);
  *(_QWORD *)(v43 + 40) = svtData;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 40), (int32_t)svtData, v45, v46, v47, v48, v49, v50);
  v52 = aiActType;
  *(_BYTE *)(v43 + 48) = v42;
  if ( v52 != 71 )
  {
    this = (BattleLogicEnemyAi_o *)BattleLogicBaseAi__SetNoTargetAiActTask(
                                     (BattleLogicBaseAi_o *)v14,
                                     (System_Collections_Generic_List_BattleLogicTask__o *)v32,
                                     v52,
                                     (BaseAiActArgument_o *)v43,
                                     v51);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_84;
    this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_183;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)this,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillLvMaster___);
    SkillInfoDataByAiActType = BattleServantData__getSkillInfoDataByAiActType(svtData, aiActType, 0);
    v174 = SkillInfoDataByAiActType;
    if ( SkillInfoDataByAiActType )
    {
      v71 = countAct;
      v72 = isBattleScript;
      v73 = SkillInfoDataByAiActType;
      this = (BattleLogicEnemyAi_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))SkillInfoDataByAiActType->klass->vtable._5_get_skillId.methodPtr)(
                                       SkillInfoDataByAiActType,
                                       SkillInfoDataByAiActType->klass->vtable._5_get_skillId.method);
      if ( !MasterData_object )
        goto LABEL_183;
      Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, (int32_t)this, v73->fields.skilllv, 0);
      isBattleScript = v72;
      countAct = v71;
      v75 = Entity;
    }
    else
    {
      v75 = 0;
    }
    isSkillType = AiAct__isSkillType(aiActType, 0);
    v172 = procState;
    if ( isSkillType )
    {
      v83 = 1;
      if ( v174 && v75 )
      {
        logic = v14->fields.logic;
        funcId = (struct BattleLogicTarget_o *)v75->fields.funcId;
        this = (BattleLogicEnemyAi_o *)SkillLvEntity__getDataValsList(v75, 0);
        if ( !logic )
          goto LABEL_183;
        v86 = this;
        v87 = logic;
        logictarget = funcId;
LABEL_105:
        v83 = BattleLogic__checkEnemyTargetFunction(v87, (System_Int32_array *)logictarget, (DataVals_array *)v86, 0);
      }
    }
    else
    {
      if ( aiActType == 80 )
      {
        if ( BattleLogicServantAi__TryGetOverwriteTreasureDevice(
               (BattleLogicServantAi_o *)isSkillType,
               svtData,
               v16->fields.skillVals,
               id,
               &lv,
               v80) )
        {
          BattleLogicTask__SetOverwriteTreasureDevice((BattleLogicTask_o *)v33, id[0], lv, 0);
          this = *(BattleLogicEnemyAi_o **)(v33 + 224);
          if ( !this )
            goto LABEL_183;
          OverwriteTreasureDeviceData__Overwrite((OverwriteTreasureDeviceData_o *)this, svtData, 0);
        }
        this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_183;
        v89 = DataManager__GetMasterData_object_(
                (DataManager_o *)this,
                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
        this = (BattleLogicEnemyAi_o *)BattleServantData__getTreasureDvcId(svtData, 1, 0, 0);
        if ( !v89 )
          goto LABEL_183;
        this = (BattleLogicEnemyAi_o *)TreasureDvcLvMaster__GetEntity(
                                         (TreasureDvcLvMaster_o *)v89,
                                         (int32_t)this,
                                         svtData->fields.treasuredvcLevel,
                                         0);
        if ( this )
        {
          if ( !v14->fields.logic )
            goto LABEL_183;
          logictarget = this->fields.logictarget;
          v87 = v14->fields.logic;
          v86 = 0;
          goto LABEL_105;
        }
      }
      v83 = 1;
    }
    this = (BattleLogicEnemyAi_o *)v14->fields.logictarget;
    v171 = countAct;
    if ( this )
    {
      tempDeadSvtHash = (struct BattleLogic_o *)v14->fields.tempDeadSvtHash;
      this->fields.logic = tempDeadSvtHash;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.logic,
        (int32_t)tempDeadSvtHash,
        v77,
        v78,
        v79,
        (int32_t)v80,
        v81,
        v82);
      IsEnableTarget = AiActEntity__IsEnableTarget(v16, v83, 0);
      v92 = IsEnableTarget;
      if ( v174 && v75 )
        v92 = SkillLvEntity__IsEnableTarget(v75, IsEnableTarget, 0);
      execTask = (BattleLogicTask_o *)v33;
      v170 = v32;
      this = (BattleLogicEnemyAi_o *)sub_2213B20(int___TypeInfo, 1);
      v93 = v14->fields.data;
      targetlist = this;
      if ( v93 )
      {
        v94 = v14->fields.logictarget;
        target = v16->fields.target;
        targetIndividuality = v16->fields.targetIndividuality;
        actId = svtData->fields.uniqueId;
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v93, 0, 0);
        this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(v14, aiEnt, isBattleScript, v98);
        if ( v94 )
        {
          this = (BattleLogicEnemyAi_o *)BattleLogicTarget__getTargetAiAct(
                                           v94,
                                           target,
                                           actId,
                                           targetIndividuality,
                                           FieldPlayerServantIDList,
                                           v92,
                                           0,
                                           0,
                                           v16,
                                           (unsigned __int8)this & 1,
                                           execTask,
                                           0);
          if ( targetlist )
          {
            if ( !LODWORD(targetlist->fields.logic) )
              goto LABEL_184;
            LODWORD(targetlist->fields.logictarget) = (_DWORD)this;
            this = (BattleLogicEnemyAi_o *)sub_2213B20(int___TypeInfo, 1);
            v99 = v14->fields.data;
            v33 = (__int64)execTask;
            if ( v99 )
            {
              v100 = this;
              v101 = v14->fields.logictarget;
              v102 = v16->fields.target;
              uniqueId = svtData->fields.uniqueId;
              v104 = v16->fields.targetIndividuality;
              this = (BattleLogicEnemyAi_o *)BattleData__getFieldEnemyServantIDList(v99, 0, 0);
              if ( v101 )
              {
                this = (BattleLogicEnemyAi_o *)BattleLogicTarget__getTargetAiAct(
                                                 v101,
                                                 v102,
                                                 uniqueId,
                                                 v104,
                                                 (System_Int32_array *)this,
                                                 0,
                                                 0,
                                                 0,
                                                 v16,
                                                 1,
                                                 0,
                                                 0);
                if ( v100 )
                {
                  v32 = v170;
                  if ( !LODWORD(v100->fields.logic) )
                    goto LABEL_184;
                  v111 = v14->fields.logictarget;
                  LODWORD(v100->fields.logictarget) = (_DWORD)this;
                  if ( !v111 )
                    goto LABEL_183;
                  v111->fields.tempDeadSvtHash = 0;
                  sub_2213A04(
                    (MissionNaviTransitionBoardItem_o *)&v111->fields.tempDeadSvtHash,
                    0,
                    v105,
                    v106,
                    v107,
                    v108,
                    v109,
                    v110);
                  if ( isBattleScript && AiAct__isAttackType(aiActType, 0) )
                  {
                    v112 = 1;
                  }
                  else
                  {
                    this = (BattleLogicEnemyAi_o *)v14->fields.logic;
                    if ( !this )
                      goto LABEL_183;
                    LogicType = BattleLogic__GetLogicType((BattleLogic_o *)this, 0);
                    v112 = v172 == 1 && LogicType == 42;
                  }
                  v115 = aiActType;
                  execTask->fields.isCanCounterTask = v112;
                  if ( AiAct__isAttackType(v115, 0) )
                  {
                    execTask->fields.targetIdlist = (struct System_Int32_array *)targetlist;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)&execTask->fields.targetIdlist,
                      (int32_t)targetlist,
                      v116,
                      v117,
                      v118,
                      v119,
                      v120,
                      v121);
                    if ( SvtType__IsEnemy_47416048(svtData->fields.svtType, 0) )
                    {
                      Type = 10;
                      goto LABEL_170;
                    }
                    if ( AiAct__isAttackArts(aiActType, 0) )
                    {
                      Type = 1;
                      goto LABEL_170;
                    }
                    if ( AiAct__isAttackBuster(aiActType, 0) )
                    {
                      Type = 2;
                      goto LABEL_170;
                    }
                    if ( AiAct__isAttackQuick(aiActType, 0) )
                    {
                      Type = 3;
                      goto LABEL_170;
                    }
                    v144 = (WeightRate_int__o *)sub_2213CCC(WeightRate_int__TypeInfo);
                    WeightRate_int____ctor(v144, (const MethodInfo_3DA1D84 *)Method_WeightRate_int___ctor__);
                    this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi__GetCommandArray(v14, svtData, v145);
                    if ( !this )
                      goto LABEL_183;
                    v146 = this->fields.logic;
                    v147 = this;
                    if ( (int)v146 < 1 )
                    {
LABEL_166:
                      if ( !v144 )
                        goto LABEL_183;
                      v149 = BattleRandom__getNext(v144->fields.totalweight, 0);
                      v151 = WeightRate_int___getData(
                               v144,
                               v149,
                               (const MethodInfo_3DA1690 *)Method_WeightRate_int__getData__);
                      if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, v150);
                      Type = BattleCommand__getType(v151, 0);
LABEL_170:
                      FixCommandCardIds = AiActEntity__GetFixCommandCardIds(v16, Type, 0);
                      svtData->fields.fixCommandCardIds = FixCommandCardIds;
                      sub_2213A04(
                        (MissionNaviTransitionBoardItem_o *)&svtData->fields.fixCommandCardIds,
                        (int32_t)FixCommandCardIds,
                        v153,
                        v154,
                        v155,
                        v156,
                        v157,
                        v158);
                      SvtId = BattleServantData__getSvtId(svtData, 0);
                      DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0);
                      v161 = (BattleCommandData_o *)sub_2213CCC(BattleCommandData_TypeInfo);
                      BattleCommandData___ctor_53637188(v161, Type, SvtId, DispLimitCount, 0, -1, 0);
                      if ( !v161 )
                        goto LABEL_183;
                      isNoCriticalOnAttack = execTask->fields.isNoCriticalOnAttack;
                      v161->fields.uniqueId = svtData->fields.uniqueId;
                      if ( isNoCriticalOnAttack )
                      {
                        v163 = v161;
                        v164 = 3;
                      }
                      else
                      {
                        if ( AiAct__isAttackCritical(aiActType, 0) )
                        {
                          BattleCommandData__SetCriticalDecisionType(v161, 2, 0);
                          aiActType = 2;
                          goto LABEL_177;
                        }
                        v163 = v161;
                        v164 = 1;
                      }
                      BattleCommandData__SetCriticalDecisionType(v163, v164, 0);
LABEL_177:
                      v165 = (BattleComboData_o *)sub_2213CCC(BattleComboData_TypeInfo);
                      BattleComboData___ctor(v165, 0);
                      BattleLogicTask__setActionCommand(execTask, v165, v161, v171, 0);
                      if ( !v170 )
                        goto LABEL_183;
LABEL_178:
                      items = v32->fields._items;
                      v167 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                      ++v32->fields._version;
                      if ( !items )
                        goto LABEL_183;
                      size = v32->fields._size;
                      if ( (unsigned int)size >= LODWORD(items->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v32,
                          (Il2CppObject *)v33,
                          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v167[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v169 = &items->obj.klass + size;
                        v32->fields._size = size + 1;
                        v169[4] = (Il2CppClass *)v33;
                        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v169 + 4), v33, v63, v64, v65, v66, v67, v68);
                      }
                      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                                        v32,
                                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
                    }
                    v148 = 0;
                    while ( v148 < (unsigned int)v146 )
                    {
                      if ( !v144 )
                        goto LABEL_183;
                      WeightRate_int___setWeight(
                        v144,
                        10,
                        *((_DWORD *)&v147->fields.logictarget + v148),
                        (const MethodInfo_3DA11F8 *)Method_WeightRate_int__setWeight__);
                      LODWORD(v146) = v147->fields.logic;
                      if ( (__int64)++v148 >= (int)v146 )
                        goto LABEL_166;
                    }
LABEL_184:
                    sub_2213CE4(this);
                  }
                  this = (BattleLogicEnemyAi_o *)AiAct__isSkillType(aiActType, 0);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    this = (BattleLogicEnemyAi_o *)BattleServantData__get_BuffData(svtData, 0);
                    if ( !this )
                      goto LABEL_183;
                    BattleBuffData__UpdateSkillRelationBuff((BattleBuffData_o *)this, 0);
                    this = (BattleLogicEnemyAi_o *)v174;
                    if ( !v174 )
                      goto LABEL_84;
                    this = (BattleLogicEnemyAi_o *)BattleSkillInfoData__IsExistBranchSkillInfo(v174, 0);
                    if ( ((unsigned __int8)this & 1) != 0
                      && (this = (BattleLogicEnemyAi_o *)BasicHelper__IsNullOrEmpty(
                                                           (System_Collections_ICollection_o *)v100,
                                                           0),
                          ((unsigned __int8)this & 1) == 0) )
                    {
                      v140 = v14->fields.logic;
                      if ( !v140 )
                        goto LABEL_183;
                      if ( !LODWORD(v100->fields.logic) )
                        goto LABEL_184;
                      this = (BattleLogicEnemyAi_o *)v140->fields.data;
                      if ( !this )
                        goto LABEL_183;
                      ServantData = BattleData__getServantData(
                                      (BattleData_o *)this,
                                      (int32_t)v100->fields.logictarget,
                                      0);
                      this = (BattleLogicEnemyAi_o *)BattleSkillInfoData__TryGetSatisfyCondBranchSkillInfoData(
                                                       v174,
                                                       &battleBranchSkillInfo,
                                                       ServantData,
                                                       0);
                      if ( ((unsigned __int8)this & 1) != 0 )
                        v124 = (BattleSkillInfoData_o *)battleBranchSkillInfo;
                      else
                        v124 = v174;
                    }
                    else
                    {
                      v124 = v174;
                    }
                    BattleLogicBaseAi__SetSkillSelectAddIndex(
                      (BattleLogicBaseAi_o *)this,
                      v124,
                      (AiBaseEntity_o *)aiEnt,
                      v123);
                    BattleLogicTask__setActionSkill(
                      execTask,
                      v124,
                      (System_Int32_array *)targetlist,
                      (System_Int32_array *)v100,
                      0,
                      0,
                      0);
                    BattleLogicTask__setActor(execTask, 3, svtData->fields.uniqueId, 0);
                    execTask->fields.isSideEffectTriggerSkill = 1;
                    if ( v124 )
                    {
                      IsNeedUpHate = BattleSkillInfoData__IsNeedUpHate(v124, 0);
                      BattleLogicTask__RevertUnusedNoNeedUpHateBuff(execTask, IsNeedUpHate, 0);
                      if ( v170 )
                      {
                        sub_1FFEDA8(v170, execTask, Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                        v143 = (BattleLogicTask_o *)sub_2213CCC(BattleLogicTask_TypeInfo);
                        BattleLogicTask___ctor(v143, 0);
                        v139 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                        v137 = v170;
                        v138 = v143;
                        goto LABEL_159;
                      }
                    }
                  }
                  else
                  {
                    if ( aiActType != 80 )
                      goto LABEL_84;
                    BattleLogicTask__setActor(execTask, 3, svtData->fields.uniqueId, 0);
                    execTask->fields.targetIdlist = (struct System_Int32_array *)targetlist;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)&execTask->fields.targetIdlist,
                      (int32_t)targetlist,
                      v125,
                      v126,
                      v127,
                      v128,
                      v129,
                      v130);
                    v131 = (BattleCommandData_o *)sub_2213CCC(BattleCommandData_TypeInfo);
                    BattleCommandData___ctor(v131, 0);
                    this = (BattleLogicEnemyAi_o *)BattleServantData__getTreasureDvcCardId(svtData, 0);
                    if ( v131 )
                    {
                      v131->fields._type = (int)this;
                      v132 = BattleServantData__getDispLimitCount(svtData, 1, 0);
                      v133 = svtData->fields.uniqueId;
                      v131->fields.svtlimit = v132;
                      v131->fields.uniqueId = v133;
                      v131->fields.svtId = BattleServantData__getSvtId(svtData, 0);
                      v131->fields.treasureDvc = BattleServantData__getTreasureDvcId(svtData, 1, 0, 0);
                      v134 = (BattleComboData_o *)sub_2213CCC(BattleComboData_TypeInfo);
                      BattleComboData___ctor(v134, 0);
                      BattleLogicTask__setActionCommand(execTask, v134, v131, v171, 0);
                      TreasureDvcId = BattleServantData__getTreasureDvcId(svtData, 1, 0, 0);
                      BattleLogicTask__setActionTreasureDvc(execTask, TreasureDvcId, 1, 0);
                      IsTargetTypeEnemy = BattleLogicTask__IsTargetTypeEnemy(execTask, 0);
                      BattleLogicTask__RevertUnusedNoNeedUpHateBuff(execTask, IsTargetTypeEnemy, 0);
                      if ( v170 )
                      {
                        v137 = v170;
                        v138 = execTask;
                        v139 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
LABEL_159:
                        sub_1FFEDA8(v137, v138, v139);
                        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                                          v32,
                                                          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
LABEL_183:
    sub_2213CDC(this, svtData);
  }
  this = (BattleLogicEnemyAi_o *)AiBaseEntity__getActionValue((AiBaseEntity_o *)aiEnt, 0);
  id[1] = (int)this;
  if ( (int)this >= 1 )
  {
    v53 = System_Int32__ToString((int32_t)&id[1], 0);
    v54 = System_String__Concat_75651716((System_String_o *)StringLiteral_9103/*"MOTION_"*/, v53, 0);
    BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v33, v54, 0);
    v55 = v14->fields.logic;
    if ( !v55 )
      goto LABEL_183;
    this = (BattleLogicEnemyAi_o *)v55->fields.perf;
    if ( !this )
      goto LABEL_183;
    ServantGameObject = BattlePerformance__getServantGameObject(
                          (BattlePerformance_o *)this,
                          svtData->fields.uniqueId,
                          0);
    *(_QWORD *)(v33 + 128) = ServantGameObject;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)(v33 + 128),
      (int32_t)ServantGameObject,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
    BattleLogicTask__setActor((BattleLogicTask_o *)v33, 3, svtData->fields.uniqueId, 0);
    if ( !v32 )
      goto LABEL_183;
    goto LABEL_178;
  }
LABEL_84:
  if ( !v32 )
    goto LABEL_183;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v32,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void BattleLogicEnemyAi__resetAct(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  BattleLogicEnemyAi_o *v2; // x19
  struct System_Collections_Generic_List_BattleServantData__o *actlist; // x8
  int32_t size; // w2
  int v5; // w9
  int logic; // w8
  BattleLogicEnemyAi_o *v7; // x19
  __int64 v8; // x20

  v2 = this;
  if ( (byte_5973AB5 & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__Clear__);
    byte_5973AB5 = 1;
  }
  actlist = v2->fields.actlist;
  if ( !actlist )
    goto LABEL_14;
  size = actlist->fields._size;
  v5 = actlist->fields._version + 1;
  actlist->fields._size = 0;
  actlist->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)actlist->fields._items, 0, size, 0);
  this = (BattleLogicEnemyAi_o *)v2->fields.data;
  if ( !this )
    goto LABEL_14;
  *((_DWORD *)this + 84) = 0;
  this = (BattleLogicEnemyAi_o *)BattleData__getFieldEnemyServantList((BattleData_o *)this, 0, 0);
  if ( !this )
    goto LABEL_14;
  logic = (int)this->fields.logic;
  v7 = this;
  if ( logic >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= logic )
        sub_2213CE4(this);
      this = (BattleLogicEnemyAi_o *)*((_QWORD *)&v7->fields.logictarget + v8);
      if ( !this )
        break;
      BattleServantData__resetActionCount((BattleServantData_o *)this, 0);
      logic = (int)v7->fields.logic;
      if ( (int)++v8 >= logic )
        return;
    }
LABEL_14:
    sub_2213CDC(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *BattleLogicEnemyAi__resetEnemyActList(
        BattleLogicEnemyAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  BattleLogicEnemyAi__resetAct(this, *(const MethodInfo **)&ltype);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *BattleLogicEnemyAi__taskAIAttack(
        BattleLogicEnemyAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t v6; // w1
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_BattleLogicTask__o *TaskAIAttack; // x0
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_object__o *v10; // x20

  if ( (byte_5973AB3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__);
    byte_5973AB3 = 1;
  }
  BattleLogicEnemyAi__ExcludeDeadFromTempDead(this, *(const MethodInfo **)&ltype);
  TaskAIAttack = BattleLogicEnemyAi__CreateTaskAIAttack(this, v6, data, v7);
  if ( !TaskAIAttack )
    sub_2213CDC(0, v9);
  v10 = (System_Collections_Generic_List_object__o *)TaskAIAttack;
  if ( TaskAIAttack->fields._size >= 1 )
    BattleLogicEnemyAi__ClearTempDeadSvt(this, v9);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicEnemyAi__taskAIDead(
        BattleLogicEnemyAi_o *this,
        int32_t actUniqueId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v8; // x21
  Il2CppObject *MasterData_object; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct BattleData_o *v16; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5973ABC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973ABC = 1;
  }
  info = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_18;
  data = (BattleData_o *)BattleData__getServantData(data, actUniqueId, 0);
  if ( !data )
    goto LABEL_18;
  v8 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
    goto LABEL_14;
  data = this->fields.data;
  if ( !data )
    goto LABEL_18;
  data = (BattleData_o *)BattleData__checkAlivePlayers(data, 0);
  if ( ((unsigned __int8)data & 1) == 0 )
  {
LABEL_14:
    if ( v5 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    goto LABEL_18;
  }
  data = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.aiActMst,
    (int32_t)MasterData_object,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = this->fields.data;
  if ( !v16 )
    goto LABEL_18;
  data = (BattleData_o *)this->fields.aiLogic;
  if ( !data )
    goto LABEL_18;
  data = (BattleData_o *)AiLogic__getAction(
                           (AiLogic_o *)data,
                           v8,
                           2,
                           v16->fields.turnCount,
                           0,
                           (BattleLogicBaseAi_o *)this,
                           &info,
                           0,
                           0);
  if ( !data )
  {
    if ( v5 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_2213CDC(data, v6);
  }
  data = (BattleData_o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, BattleData_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, const MethodInfo *))this->klass->vtable._32_procAiAct.methodPtr)(
                           this,
                           v8,
                           data,
                           0,
                           info,
                           0,
                           this->klass->vtable._32_procAiAct.method);
  if ( !v5 )
    goto LABEL_18;
  System_Collections_Generic_List_object___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicEnemyAi__taskAIEnemyMaxNp(
        BattleLogicEnemyAi_o *this,
        int32_t actUniqueId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v8; // x21
  Il2CppObject *MasterData_object; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct BattleData_o *v16; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5973ABD & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973ABD = 1;
  }
  info = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_18;
  data = (BattleData_o *)BattleData__getServantData(data, actUniqueId, 0);
  if ( !data )
    goto LABEL_18;
  v8 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_14;
  data = this->fields.data;
  if ( !data )
    goto LABEL_18;
  data = (BattleData_o *)BattleData__checkAlivePlayers(data, 0);
  if ( ((unsigned __int8)data & 1) == 0 )
  {
LABEL_14:
    if ( v5 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    goto LABEL_18;
  }
  data = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_18;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.aiActMst,
    (int32_t)MasterData_object,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = this->fields.data;
  if ( !v16 )
    goto LABEL_18;
  data = (BattleData_o *)this->fields.aiLogic;
  if ( !data )
    goto LABEL_18;
  data = (BattleData_o *)AiLogic__getAction(
                           (AiLogic_o *)data,
                           v8,
                           7,
                           v16->fields.turnCount,
                           0,
                           (BattleLogicBaseAi_o *)this,
                           &info,
                           0,
                           0);
  if ( !data )
  {
    if ( v5 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_18:
    sub_2213CDC(data, v6);
  }
  data = (BattleData_o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, BattleData_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, const MethodInfo *))this->klass->vtable._32_procAiAct.methodPtr)(
                           this,
                           v8,
                           data,
                           0,
                           info,
                           0,
                           this->klass->vtable._32_procAiAct.method);
  if ( !v5 )
    goto LABEL_18;
  System_Collections_Generic_List_object___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void BattleLogicEnemyAi__updateActPriorityList(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  BattleLogicEnemyAi_o *v2; // x20
  struct System_Collections_Generic_List_BattleServantData__o *actlist; // x8
  MissionNaviTransitionBoardItem_o *p_actlist; // x19
  System_Collections_Generic_List_BattleServantData__o *BaseActPriorityList; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_List_object__o *klass; // x21
  BattleLogicEnemyAi___c_c *v13; // x0
  struct BattleLogicEnemyAi___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__23_0; // x22
  Il2CppObject *v16; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_List_T__o *All; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  BattleLogicEnemyAi___c_c *v31; // x8
  BattleLogicEnemyAi_o *v32; // x20
  struct BattleLogicEnemyAi___c_StaticFields *v33; // x9
  System_Predicate_object__o *_9__23_1; // x21
  Il2CppObject *v35; // x22
  struct BattleLogicEnemyAi___c_StaticFields *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_Collections_Generic_List_T__o *v43; // x1
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7

  v2 = this;
  if ( (byte_5973AB6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__FindAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_2213A60(&System_Predicate_BattleServantData__TypeInfo);
    sub_2213A60(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_0__);
    sub_2213A60(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_1__);
    this = (BattleLogicEnemyAi_o *)sub_2213A60(&BattleLogicEnemyAi___c_TypeInfo);
    byte_5973AB6 = 1;
  }
  p_actlist = (MissionNaviTransitionBoardItem_o *)&v2->fields.actlist;
  actlist = v2->fields.actlist;
  if ( !actlist )
    goto LABEL_27;
  if ( actlist->fields._size <= 0 )
  {
    BaseActPriorityList = BattleLogicEnemyAi__GetBaseActPriorityList(v2, method);
    v2->fields.actlist = BaseActPriorityList;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v2->fields.actlist,
      (int32_t)BaseActPriorityList,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  this = (BattleLogicEnemyAi_o *)v2->fields.data;
  if ( !this )
    goto LABEL_27;
  this = (BattleLogicEnemyAi_o *)BattleData__get_IsTotalEnemyMaxActCntLessThan((BattleData_o *)this, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return;
  klass = (System_Collections_Generic_List_object__o *)p_actlist->klass;
  if ( !p_actlist->klass )
    goto LABEL_27;
  if ( klass->fields._size < 1 )
    return;
  v13 = BattleLogicEnemyAi___c_TypeInfo;
  if ( !*(&BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo, method);
    v13 = BattleLogicEnemyAi___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__23_0 = (System_Predicate_object__o *)static_fields->__9__23_0;
  if ( !_9__23_0 )
  {
    if ( !*(&v13->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      static_fields = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__23_0 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_object____ctor(_9__23_0, v16, Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_0__, 0);
    v17 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    v17->__9__23_0 = (struct System_Predicate_BattleServantData__o *)_9__23_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->__9__23_0, (int32_t)_9__23_0, v18, v19, v20, v21, v22, v23);
  }
  All = System_Collections_Generic_List_object___FindAll(
          klass,
          (System_Predicate_T__o *)_9__23_0,
          (const MethodInfo_448436C *)Method_System_Collections_Generic_List_BattleServantData__FindAll__);
  p_actlist->klass = (MissionNaviTransitionBoardItem_c *)All;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.actlist, (int32_t)All, v25, v26, v27, v28, v29, v30);
  if ( !p_actlist->klass )
LABEL_27:
    sub_2213CDC(this, method);
  if ( SLODWORD(p_actlist->klass->_1.namespaze) <= 0 )
  {
    this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi__GetBaseActPriorityList(v2, method);
    v31 = BattleLogicEnemyAi___c_TypeInfo;
    v32 = this;
    if ( !*(&BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo, method);
      v31 = BattleLogicEnemyAi___c_TypeInfo;
    }
    v33 = v31->static_fields;
    _9__23_1 = (System_Predicate_object__o *)v33->__9__23_1;
    if ( !_9__23_1 )
    {
      if ( !*(&v31->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v31, method);
        v33 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      }
      v35 = (Il2CppObject *)v33->__9;
      _9__23_1 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_BattleServantData__TypeInfo);
      System_Predicate_object____ctor(_9__23_1, v35, Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_1__, 0);
      v36 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v36->__9__23_1 = (struct System_Predicate_BattleServantData__o *)_9__23_1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36->__9__23_1, (int32_t)_9__23_1, v37, v38, v39, v40, v41, v42);
    }
    if ( v32 )
    {
      v43 = System_Collections_Generic_List_object___FindAll(
              (System_Collections_Generic_List_object__o *)v32,
              (System_Predicate_T__o *)_9__23_1,
              (const MethodInfo_448436C *)Method_System_Collections_Generic_List_BattleServantData__FindAll__);
      p_actlist->klass = (MissionNaviTransitionBoardItem_c *)v43;
      sub_2213A04(p_actlist, (int32_t)v43, v44, v45, v46, v47, v48, v49);
      return;
    }
    goto LABEL_27;
  }
}


void BattleLogicEnemyAi___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5973BF8 & 1) == 0 )
  {
    sub_2213A60(&BattleLogicEnemyAi___c_TypeInfo);
    byte_5973BF8 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleLogicEnemyAi___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicEnemyAi___c_TypeInfo->static_fields->__9 = (struct BattleLogicEnemyAi___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleLogicEnemyAi___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleLogicEnemyAi___c___ctor(BattleLogicEnemyAi___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleLogicEnemyAi___c___GetBaseActPriorityList_b__24_0(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  bool isAlive; // w8
  bool result; // w0

  if ( !x )
    sub_2213CDC(this, 0);
  isAlive = BattleServantData__isAlive(x, 0, 0);
  result = 0;
  if ( isAlive )
    return BattleServantData__GetRemainActionCount(x, 1, 0) > 0;
  return result;
}


int32_t BattleLogicEnemyAi___c___GetBaseActPriorityList_b__24_1(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return BattleServantData__GetOriginalRemainingNeedActCount(x, 0);
}


int32_t BattleLogicEnemyAi___c___GetBaseActPriorityList_b__24_2(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.actPriority;
}


int32_t BattleLogicEnemyAi___c___GetBaseActPriorityList_b__24_3(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return BattleServantData__getDeckIndex(x, 0);
}


bool BattleLogicEnemyAi___c___updateActPriorityList_b__23_0(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return BattleServantData__GetRemainingNeedActCount(x, 1, 0) > 0;
}


bool BattleLogicEnemyAi___c___updateActPriorityList_b__23_1(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return BattleServantData__GetRemainingNeedActCount(x, 1, 0) > 0;
}


void BattleLogicEnemyAi___c__DisplayClass26_0___ctor(
        BattleLogicEnemyAi___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicEnemyAi___c__DisplayClass26_0___ProcAiActBattleScript_b__0(
        BattleLogicEnemyAi___c__DisplayClass26_0_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  OverwriteTreasureDeviceData_o *OverwriteTdData_k__BackingField; // x8

  if ( !x )
    sub_2213CDC(this, 0);
  OverwriteTdData_k__BackingField = x->fields._OverwriteTdData_k__BackingField;
  if ( OverwriteTdData_k__BackingField )
    OverwriteTreasureDeviceData__Reset(OverwriteTdData_k__BackingField, this->fields.svtData, 0);
}


void BattleLogicEnemyAi___c__DisplayClass27_0___ctor(
        BattleLogicEnemyAi___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicEnemyAi___c__DisplayClass27_0___procAiAct_b__0(
        BattleLogicEnemyAi___c__DisplayClass27_0_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  OverwriteTreasureDeviceData_o *OverwriteTdData_k__BackingField; // x8

  if ( !x )
    sub_2213CDC(this, 0);
  OverwriteTdData_k__BackingField = x->fields._OverwriteTdData_k__BackingField;
  if ( OverwriteTdData_k__BackingField )
    OverwriteTreasureDeviceData__Reset(OverwriteTdData_k__BackingField, this->fields.svtData, 0);
}


void BattleLogicEnemyAi___c__DisplayClass38_0___ctor(
        BattleLogicEnemyAi___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleLogicTask_o *BattleLogicEnemyAi___c__DisplayClass38_0___ReplaceCommandTasksBySealStatus_b__0(
        BattleLogicEnemyAi___c__DisplayClass38_0_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  BattleLogicEnemyAi_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, x);
  return BattleLogicEnemyAi__ReplaceCommandTaskBySealStatus(_4__this, this->fields.svtData, x, 0);
}