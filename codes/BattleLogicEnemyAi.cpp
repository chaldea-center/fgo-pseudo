void BattleLogicEnemyAi___ctor(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  const MethodInfo *v10; // x1

  if ( (byte_4CF1730 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_4CF1730 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this->fields.actlist = (struct System_Collections_Generic_List_BattleServantData__o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.actlist, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
    sub_1C7BD40(this, svtData);
  }
  ++data->fields.countEnemyAttack;
}


void BattleLogicEnemyAi__AddTempDeadSvt(BattleLogicEnemyAi_o *this, int32_t svtUniqueId, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x0

  if ( (byte_4CF1728 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4CF1728 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
    System_Collections_Generic_HashSet_int___Add(
      tempDeadSvtHash,
      svtUniqueId,
      (const MethodInfo_36EAB44 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


AiLogic_AiInfo_CheckedInfo_o *BattleLogicEnemyAi__CheckAiActType(
        BattleLogicEnemyAi_o *this,
        bool skillFlg,
        BattleServantData_o *svtData,
        AiActEntity_o *aiActEnt,
        int32_t actType,
        const MethodInfo *method)
{
  WeightRate_int__o *v11; // x22
  BattleLogicEnemyAi_o *Int; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  int *skillVals; // x8
  int32_t v16; // w21
  int32_t v17; // w22
  BattleSkillInfoData_o *v18; // x20
  bool v19; // w22
  BattleLogicEnemyAi_o *v20; // x0
  const MethodInfo *v21; // x4
  int32_t Next; // w0
  int32_t Data; // w0
  bool v24; // zf
  int32_t v25; // w8
  bool isUseSelfSkill; // w0
  AiLogic_AiInfo_CheckedInfo_o *v27; // x21

  if ( (byte_4CF172C & 1) == 0 )
  {
    sub_1C7BAE8(&AiLogic_AiInfo_CheckedInfo_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_WeightRate_int___ctor__);
    sub_1C7BAE8(&Method_WeightRate_int__getCount__);
    sub_1C7BAE8(&Method_WeightRate_int__getData__);
    sub_1C7BAE8(&Method_WeightRate_int__getTotalWeight__);
    sub_1C7BAE8(&Method_WeightRate_int__setWeight__);
    sub_1C7BAE8(&WeightRate_int__TypeInfo);
    byte_4CF172C = 1;
  }
  v11 = (WeightRate_int__o *)sub_1C7BD34(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v11, (const MethodInfo_3C54A68 *)Method_WeightRate_int___ctor__);
  if ( actType <= 13 )
  {
    switch ( actType )
    {
      case 10:
        if ( skillFlg )
          BattleLogicEnemyAi__SetSkillRandomWeightSameProbability(Int, v11, 10, svtData, v14);
        if ( !v11 )
          goto LABEL_46;
        if ( WeightRate_int___getCount(v11, (const MethodInfo_3C54340 *)Method_WeightRate_int__getCount__) < 1 )
          goto LABEL_26;
        goto LABEL_31;
      case 11:
        if ( !svtData )
          goto LABEL_46;
        v19 = !skillFlg;
        v24 = !BattleServantData__isUseSelfSkill(svtData, 0, 0) || !skillFlg;
        v25 = 11;
        goto LABEL_38;
      case 12:
        if ( !svtData )
          goto LABEL_46;
        v19 = !skillFlg;
        v24 = !BattleServantData__isUseSelfSkill(svtData, 1, 0) || !skillFlg;
        v25 = 12;
LABEL_38:
        v18 = 0;
        if ( v24 )
          actType = 2;
        else
          actType = v25;
        goto LABEL_45;
      case 13:
        if ( !svtData )
          goto LABEL_46;
        v19 = !skillFlg;
        isUseSelfSkill = BattleServantData__isUseSelfSkill(svtData, 2, 0);
        v18 = 0;
        if ( isUseSelfSkill && skillFlg )
          actType = 13;
        else
          actType = 2;
        goto LABEL_45;
      default:
        if ( actType != 1 )
          goto LABEL_33;
        Int = (BattleLogicEnemyAi_o *)AiAct__getInt(2, 0);
        if ( !v11 )
          goto LABEL_46;
        WeightRate_int___setWeight(
          v11,
          10,
          (int32_t)Int,
          (const MethodInfo_3C53F84 *)Method_WeightRate_int__setWeight__);
        if ( skillFlg )
          BattleLogicEnemyAi__SetSkillRandomWeightSameProbability(v20, v11, 10, svtData, v21);
LABEL_31:
        Next = BattleRandom__getNext(v11->fields.totalweight, 0);
        Data = WeightRate_int___getData(v11, Next, (const MethodInfo_3C543F8 *)Method_WeightRate_int__getData__);
        actType = AiAct__getType(Data, 0);
        break;
    }
    goto LABEL_33;
  }
  if ( (actType & 0xFFFFFFFE) != 0x28 )
  {
    if ( actType != 80 )
    {
LABEL_33:
      v19 = 0;
      v18 = 0;
      goto LABEL_45;
    }
    if ( svtData )
    {
      if ( BattleServantData__isNobleAction(svtData, 0)
        && TreasureDeviceConditionUtil__IsSatisfyEachCondition(svtData, this->fields.data, 0) )
      {
        v19 = 0;
        v18 = 0;
        actType = 80;
        goto LABEL_45;
      }
      goto LABEL_26;
    }
LABEL_46:
    sub_1C7BD40(Int, v13);
  }
  if ( !aiActEnt )
    goto LABEL_46;
  skillVals = (int *)aiActEnt->fields.skillVals;
  if ( !skillVals )
    goto LABEL_46;
  if ( skillVals[6] < 2 )
  {
LABEL_32:
    actType = 0;
    goto LABEL_33;
  }
  if ( actType == 41 && !skillFlg )
  {
LABEL_26:
    v18 = 0;
    v19 = 1;
    actType = 2;
    goto LABEL_45;
  }
  v16 = skillVals[8];
  v17 = skillVals[9];
  Int = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Int )
    goto LABEL_46;
  Int = (BattleLogicEnemyAi_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Int,
                                  (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !Int )
    goto LABEL_46;
  if ( !SkillLvMaster__GetEntity((SkillLvMaster_o *)Int, v16, v17, 0) )
    goto LABEL_32;
  Int = (BattleLogicEnemyAi_o *)BattleSkillInfoData__MakeSkillData(20, 0);
  if ( !svtData )
    goto LABEL_46;
  v18 = BattleServantData__SetSkillInfo(svtData, (BattleSkillInfoData_o *)Int, 20, 0, v16, v17, -1, -1, 0);
  v19 = 0;
LABEL_45:
  v27 = (AiLogic_AiInfo_CheckedInfo_o *)sub_1C7BD34(AiLogic_AiInfo_CheckedInfo_TypeInfo);
  AiLogic_AiInfo_CheckedInfo___ctor(v27, actType, v19, v18, 0);
  return v27;
}


bool BattleLogicEnemyAi__CheckAiCanActionFromTargets(
        BattleLogicEnemyAi_o *this,
        AiLogic_AiInfo_o *aiInfo,
        AiBaseEntity_o *aiBaseEntity,
        const MethodInfo *method)
{
  __int64 Master_object; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x5
  BattleServantData_o *v10; // x23
  const MethodInfo *v11; // x3
  AiLogic_AiInfo_CheckedInfo_o *v12; // x20
  bool v13; // w24
  __int64 naturalAligment; // x10
  AiEntity_o *v15; // x26
  BattleLogicTarget_o *logictarget; // x27
  int32_t monitor; // w28
  int32_t uniqueId; // w29
  Il2CppClass *klass; // x22
  System_Int32_array *FieldPlayerServantIDList; // x0
  Il2CppObject *aiActEnt; // x25
  System_Int32_array *v22; // x20
  const MethodInfo *v23; // x3
  __int64 v24; // x25
  BattleLogicTarget_o *v25; // x22
  int32_t v26; // w26
  int32_t v27; // w23
  Il2CppClass *v28; // x27
  AiLogic_o *aiLogic; // x20
  AiLogic_AiInfo_CheckedInfo_o *v31; // [xsp+20h] [xbp-80h]
  AiLogic_AiInfo_o *v32; // [xsp+28h] [xbp-78h]
  __int64 v33; // [xsp+30h] [xbp-70h]
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4CF172F & 1) == 0 )
  {
    sub_1C7BAE8(&AiEntity_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_AiActMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
    sub_1C7BAE8(&int___TypeInfo);
    byte_4CF172F = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !aiBaseEntity || !Master_object )
    goto LABEL_41;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          aiBaseEntity->fields.aiActId,
          (const MethodInfo_342E348 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__) )
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
  v10 = (BattleServantData_o *)Master_object;
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
                             v10,
                             (AiActEntity_o *)entity,
                             HIDWORD(entity[1].klass),
                             v9);
  if ( !Master_object )
    goto LABEL_41;
  v12 = (AiLogic_AiInfo_CheckedInfo_o *)Master_object;
  v13 = BattleLogicEnemyAi__CheckHate(this, *(_DWORD *)(Master_object + 16), v10, v11);
  naturalAligment = AiEntity_TypeInfo->_2.naturalAligment;
  if ( aiBaseEntity->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    v15 = (AiEntity_c *)aiBaseEntity->klass->_2.typeHierarchy[naturalAligment - 1] == AiEntity_TypeInfo
        ? (AiEntity_o *)aiBaseEntity
        : 0LL;
  else
    v15 = 0;
  Master_object = sub_1C7BB90(int___TypeInfo, 1);
  if ( !entity )
    goto LABEL_41;
  if ( !v10 )
    goto LABEL_41;
  v32 = aiInfo;
  v33 = Master_object;
  Master_object = (__int64)this->fields.data;
  v31 = v12;
  if ( !Master_object )
    goto LABEL_41;
  logictarget = this->fields.logictarget;
  monitor = (int32_t)entity[1].monitor;
  uniqueId = v10->fields.uniqueId;
  klass = entity[2].klass;
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList((BattleData_o *)Master_object, 0, 0);
  aiActEnt = entity;
  v22 = FieldPlayerServantIDList;
  Master_object = BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(this, v15, 0, v23);
  if ( !logictarget )
    goto LABEL_41;
  Master_object = BattleLogicTarget__getTargetAiAct(
                    logictarget,
                    monitor,
                    uniqueId,
                    (System_Int32_array *)klass,
                    v22,
                    v13,
                    0,
                    0,
                    (AiActEntity_o *)aiActEnt,
                    Master_object & 1,
                    0);
  if ( !v33 )
    goto LABEL_41;
  if ( !*(_DWORD *)(v33 + 24) )
    goto LABEL_42;
  *(_DWORD *)(v33 + 32) = Master_object;
  Master_object = sub_1C7BB90(int___TypeInfo, 1);
  if ( !entity )
    goto LABEL_41;
  v24 = Master_object;
  Master_object = (__int64)this->fields.data;
  if ( !Master_object
    || (v25 = this->fields.logictarget,
        v26 = (int32_t)entity[1].monitor,
        v27 = v10->fields.uniqueId,
        v28 = entity[2].klass,
        Master_object = (__int64)BattleData__getFieldEnemyServantIDList((BattleData_o *)Master_object, 0, 0),
        !v25)
    || (Master_object = BattleLogicTarget__getTargetAiAct(
                          v25,
                          v26,
                          v27,
                          (System_Int32_array *)v28,
                          (System_Int32_array *)Master_object,
                          0,
                          0,
                          0,
                          (AiActEntity_o *)entity,
                          1,
                          0),
        !v24) )
  {
LABEL_41:
    sub_1C7BD40(Master_object, v8);
  }
  if ( !*(_DWORD *)(v24 + 24) )
LABEL_42:
    sub_1C7BD48(Master_object);
  *(_DWORD *)(v24 + 32) = Master_object;
  Master_object = (__int64)entity;
  if ( !entity )
    goto LABEL_41;
  aiLogic = this->fields.aiLogic;
  Master_object = AiActEntity__GetNoTargetNoActionType((AiActEntity_o *)entity, 0);
  if ( !aiLogic )
    goto LABEL_41;
  if ( AiLogic__IsNoTargetNoActionTask(aiLogic, Master_object, (System_Int32_array *)v33, (System_Int32_array *)v24, 0) )
    return 0;
  AiLogic_AiInfo__SetCheckedResult(v32, aiBaseEntity, v31, 0);
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
    sub_1C7BD40(data, *(_QWORD *)&actUniqueId);
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
  SkillLvMaster_o *v9; // x21
  BattleSkillInfoData_o *SkillInfoDataByAiActType; // x0
  BattleSkillInfoData_o *v11; // x19
  SkillLvEntity_o *Entity; // x21
  bool v13; // w0
  struct BattleLogic_o *v14; // x20
  System_Int32_array *funcId; // x22
  DataVals_array *v16; // x2
  BattleLogic_o *logic; // x0
  System_Int32_array *v18; // x1
  Il2CppObject *MasterData_object; // x23

  if ( (byte_4CF172E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF172E = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !svtData )
    goto LABEL_27;
  v9 = (SkillLvMaster_o *)Instance;
  SkillInfoDataByAiActType = BattleServantData__getSkillInfoDataByAiActType(svtData, actType, 0);
  v11 = SkillInfoDataByAiActType;
  if ( SkillInfoDataByAiActType )
  {
    Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))SkillInfoDataByAiActType->klass->vtable._5_get_skillId.methodPtr)(
                 SkillInfoDataByAiActType,
                 SkillInfoDataByAiActType->klass->vtable._5_get_skillId.method);
    if ( !v9 )
      goto LABEL_27;
    Entity = SkillLvMaster__GetEntity(v9, Instance, v11->fields.skilllv, 0);
  }
  else
  {
    Entity = 0;
  }
  if ( !AiAct__isSkillType(actType, 0) )
  {
    if ( actType != 80 )
      goto LABEL_23;
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    Instance = BattleServantData__getTreasureDvcId(svtData, 1, 0, 0);
    if ( !MasterData_object )
      goto LABEL_27;
    Instance = (__int64)TreasureDvcLvMaster__GetEntity(
                          (TreasureDvcLvMaster_o *)MasterData_object,
                          Instance,
                          svtData->fields.treasuredvcLevel,
                          0);
    if ( !Instance )
    {
LABEL_23:
      v13 = 1;
      if ( !v11 )
        return v13;
      goto LABEL_24;
    }
    if ( this->fields.logic )
    {
      v18 = *(System_Int32_array **)(Instance + 32);
      logic = this->fields.logic;
      v16 = 0;
      goto LABEL_20;
    }
LABEL_27:
    sub_1C7BD40(Instance, v8);
  }
  v13 = 1;
  if ( v11 && Entity )
  {
    v14 = this->fields.logic;
    funcId = Entity->fields.funcId;
    Instance = (__int64)SkillLvEntity__getDataValsList(Entity, 0);
    if ( v14 )
    {
      v16 = (DataVals_array *)Instance;
      logic = v14;
      v18 = funcId;
LABEL_20:
      v13 = BattleLogic__checkEnemyTargetFunction(logic, v18, v16, 0);
      goto LABEL_21;
    }
    goto LABEL_27;
  }
LABEL_21:
  if ( !v11 )
    return v13;
LABEL_24:
  if ( Entity )
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
    sub_1C7BD40(data, *(_QWORD *)&actUniqueId);
  return AiLogic__checkThinking(
           this->fields.aiLogic,
           (BattleServantData_o *)data,
           14,
           (BattleLogicBaseAi_o *)this,
           0,
           0);
}


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
    sub_1C7BD40(this, skillFlg);
  if ( !BattleServantData__isUseSelfSkill(servantData, skillIndex, 0) )
    *actType = 2;
}


void BattleLogicEnemyAi__ClearTempDeadSvt(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x0

  if ( (byte_4CF1729 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_int__Clear__);
    byte_4CF1729 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
    System_Collections_Generic_HashSet_int___Clear(
      tempDeadSvtHash,
      (const MethodInfo_36E9FD4 *)Method_System_Collections_Generic_HashSet_int__Clear__);
}


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
    sub_1C7BD40(0, actUniqueId);
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct BattleData_o *data; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CF1724 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF1724 = 1;
  }
  info = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.aiActMst,
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
                                        (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_11:
    sub_1C7BD40(Instance, v9);
  }
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, DataManager_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, const MethodInfo *))this->klass->vtable._30_procAiAct.methodPtr)(
                                this,
                                svtData,
                                Instance,
                                0,
                                info,
                                0,
                                this->klass->vtable._30_procAiAct.method);
  if ( !v7 )
    goto LABEL_11;
  System_Collections_Generic_List_object___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


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
    sub_1C7BD40(0, actUniqueId);
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
    sub_1C7BD40(this, svtData);
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
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  const MethodInfo *v21; // x1
  BattleServantData_o *v22; // x21
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  BattleCommandData_o *TreasureDvcCommand; // x0
  const MethodInfo *v26; // x2
  struct AiActMaster_o **p_aiActMst; // x26
  BattleLogicTask_o *v28; // x23
  Il2CppObject *v29; // x24
  char v30; // w24
  struct BattleData_o *v31; // x8
  struct BattleData_o *v32; // x8
  struct BattleData_o *v33; // x8
  BattleLogicEnemyAi_c *v34; // x9
  struct AiEntity_o *noThinkAiEnt; // x2
  struct BattleData_o *v36; // x8
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct BattleLogicTarget_o *logictarget; // x8
  struct System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x1
  AiEntity_o *v45; // x25
  BattleLogicTarget_o *v46; // x26
  int32_t uniqueId; // w28
  Il2CppClass *klass; // x29
  System_Int32_array *FieldPlayerServantIDList; // x0
  Il2CppObject *v50; // x27
  System_Int32_array *v51; // x22
  const MethodInfo *v52; // x3
  int32_t TargetAiAct; // w0
  BattleLogicTarget_o *v54; // x25
  int32_t v55; // w26
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  BattleCommandData_o *v62; // x22
  BattleComboData_o *v63; // x24
  struct BattleData_o *v64; // x8
  int32_t TreasureDvcId; // w0
  __int64 v66; // x22
  __int64 v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  const MethodInfo *v74; // x3
  __int64 v75; // x0
  int32_t monitor; // [xsp+24h] [xbp-7Ch]
  AiLogic_AiInfo_o *v77; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+30h] [xbp-70h] BYREF
  AiLogic_AiInfo_o *info; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4CF171A & 1) == 0 )
  {
    sub_1C7BAE8(&BattleComboData_TypeInfo);
    sub_1C7BAE8(&BattleCommandData_TypeInfo);
    sub_1C7BAE8(&Method_BattleLogicEnemyAi_IsNotTempDeadSvt__);
    sub_1C7BAE8(&BattleLogicTask___TypeInfo);
    sub_1C7BAE8(&BattleLogicTask_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
    sub_1C7BAE8(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleServantData__RemoveAt__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleServantData__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF171A = 1;
  }
  entity = 0;
  info = 0;
  v77 = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !data )
    goto LABEL_68;
  perf = (UnityEngine_Object_o *)data->fields.perf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(perf, 0, 0) )
  {
    Instance = (__int64)data->fields.perf;
    if ( !Instance )
      goto LABEL_68;
    BattlePerformance__setOffTarget((BattlePerformance_o *)Instance, 0);
  }
  v10 = this->fields.data;
  v11 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(v11, (Il2CppObject *)this, Method_BattleLogicEnemyAi_IsNotTempDeadSvt__, 0);
  if ( !v10 )
    goto LABEL_68;
  Instance = BattleData__CheckAlivePlayers(v10, (System_Func_BattleServantData__bool__o *)v11, 0);
  if ( (Instance & 1) == 0 )
    return (System_Collections_Generic_List_BattleLogicTask__o *)v6;
  v12 = this->fields.data;
  if ( !v12 )
    goto LABEL_68;
  if ( !v12->fields.leaderDown && !v12->fields.endbattleFlg )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_AiActMaster___);
      this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&this->fields.aiActMst,
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
                                (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
          if ( this->fields.actlist )
          {
            v22 = (BattleServantData_o *)Instance;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this->fields.actlist,
              0,
              (const MethodInfo_38405D0 *)Method_System_Collections_Generic_List_BattleServantData__RemoveAt__);
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
                  goto LABEL_68;
                v8 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
                if ( *(_QWORD *)(Instance + 24) )
                {
LABEL_67:
                  if ( !v6 )
                    goto LABEL_68;
                  goto LABEL_46;
                }
                p_aiActMst = &this->fields.aiActMst;
                v28 = (BattleLogicTask_o *)sub_1C7BD34(BattleLogicTask_TypeInfo);
                BattleLogicTask___ctor(v28, 0);
                if ( v28 )
                {
                  BattleLogicTask__setActor(v28, 3, v22->fields.uniqueId, 0);
                  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( Instance )
                  {
                    v29 = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
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
                          goto LABEL_68;
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
                          Instance = (__int64)AiLogic__getAction(
                                                (AiLogic_o *)Instance,
                                                v22,
                                                8,
                                                data->fields.turnCount,
                                                v36->fields.countEnemyAttack,
                                                (BattleLogicBaseAi_o *)this,
                                                &v77,
                                                0,
                                                0);
                          entity = 0;
                          logictarget = this->fields.logictarget;
                          if ( logictarget )
                          {
                            tempDeadSvtHash = this->fields.tempDeadSvtHash;
                            v45 = (AiEntity_o *)Instance;
                            logictarget->fields.tempDeadSvtHash = tempDeadSvtHash;
                            sub_1C7BA8C(
                              (GrandQuestFolderBoardItem_o *)&logictarget->fields.tempDeadSvtHash,
                              (int32_t)tempDeadSvtHash,
                              v37,
                              v38,
                              v39,
                              v40,
                              v41,
                              v42);
                            if ( !v45 )
                              goto LABEL_58;
                            Instance = (__int64)*p_aiActMst;
                            if ( !*p_aiActMst )
                              goto LABEL_68;
                            Instance = DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                         &entity,
                                         v45->fields.aiActId,
                                         (const MethodInfo_342E348 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
                            if ( (Instance & 1) != 0 )
                            {
                              if ( !entity )
                                goto LABEL_68;
                              v46 = this->fields.logictarget;
                              uniqueId = v22->fields.uniqueId;
                              klass = entity[2].klass;
                              monitor = (int32_t)entity[1].monitor;
                              FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0, 0);
                              v50 = entity;
                              v51 = FieldPlayerServantIDList;
                              Instance = BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(this, v45, 0, v52);
                              if ( !v46 )
                                goto LABEL_68;
                              TargetAiAct = BattleLogicTarget__getTargetAiAct(
                                              v46,
                                              monitor,
                                              uniqueId,
                                              (System_Int32_array *)klass,
                                              v51,
                                              v30 & 1,
                                              0,
                                              0,
                                              (AiActEntity_o *)v50,
                                              Instance & 1,
                                              0);
                            }
                            else
                            {
LABEL_58:
                              v54 = this->fields.logictarget;
                              v55 = v22->fields.uniqueId;
                              Instance = (__int64)BattleData__getFieldPlayerServantIDList(data, 0, 0);
                              if ( !v54 )
                                goto LABEL_68;
                              TargetAiAct = BattleLogicTarget__getTargetAiAct(
                                              v54,
                                              1,
                                              v55,
                                              0,
                                              (System_Int32_array *)Instance,
                                              v30 & 1,
                                              0,
                                              0,
                                              (AiActEntity_o *)entity,
                                              1,
                                              0);
                            }
                            BattleLogicTask__setTarget(v28, TargetAiAct, 0);
                            Instance = (__int64)this->fields.logictarget;
                            if ( Instance )
                            {
                              *(_QWORD *)(Instance + 24) = 0;
                              sub_1C7BA8C(
                                (GrandQuestFolderBoardItem_o *)(Instance + 24),
                                0,
                                v56,
                                v57,
                                v58,
                                v59,
                                v60,
                                v61);
                              v62 = (BattleCommandData_o *)sub_1C7BD34(BattleCommandData_TypeInfo);
                              BattleCommandData___ctor(v62, 0);
                              Instance = BattleServantData__getTreasureDvcCardId(v22, 0);
                              if ( v62 )
                              {
                                v62->fields._type = Instance;
                                v62->fields.svtlimit = BattleServantData__getDispLimitCount(v22, 1, 0);
                                v62->fields.uniqueId = v22->fields.uniqueId;
                                v62->fields.svtId = BattleServantData__getSvtId(v22, 0);
                                v62->fields.treasureDvc = BattleServantData__getTreasureDvcId(v22, 1, 0, 0);
                                v63 = (BattleComboData_o *)sub_1C7BD34(BattleComboData_TypeInfo);
                                BattleComboData___ctor(v63, 0);
                                v64 = this->fields.data;
                                if ( v64 )
                                {
                                  BattleLogicTask__setActionCommand(v28, v63, v62, v64->fields.countEnemyAttack, 0);
                                  TreasureDvcId = BattleServantData__getTreasureDvcId(v22, 1, 0, 0);
                                  BattleLogicTask__setActionTreasureDvc(v28, TreasureDvcId, 1, 0);
                                  Instance = sub_1C7BB90(BattleLogicTask___TypeInfo, 1);
                                  if ( Instance )
                                  {
                                    v66 = Instance;
                                    v67 = sub_1C7BC24(v28, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
                                    if ( !v67 )
                                    {
                                      v75 = sub_1C7BD64(0);
                                      sub_1C7BC10(v75, 0);
                                    }
                                    if ( !*(_DWORD *)(v66 + 24) )
                                      sub_1C7BD48(v67);
                                    *(_QWORD *)(v66 + 32) = v28;
                                    sub_1C7BA8C(
                                      (GrandQuestFolderBoardItem_o *)(v66 + 32),
                                      (int32_t)v28,
                                      v68,
                                      v69,
                                      v70,
                                      v71,
                                      v72,
                                      v73);
                                    Instance = (__int64)BattleLogicEnemyAi__ReplaceCommandTasksBySealStatus(
                                                          this,
                                                          v22,
                                                          (BattleLogicTask_array *)v66,
                                                          v74);
                                    v8 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
                                    goto LABEL_67;
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
                        goto LABEL_68;
                      v34 = this->klass;
                      noThinkAiEnt = (struct AiEntity_o *)Instance;
                    }
                    else
                    {
                      if ( !v33 )
                        goto LABEL_68;
                      v34 = this->klass;
                      noThinkAiEnt = this->fields.noThinkAiEnt;
                    }
                    Instance = ((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, struct AiEntity_o *, _QWORD, AiLogic_AiInfo_o *, __int64, const MethodInfo *))v34->vtable._30_procAiAct.methodPtr)(
                                 this,
                                 v22,
                                 noThinkAiEnt,
                                 (unsigned int)v33->fields.countEnemyAttack,
                                 info,
                                 1,
                                 v34->vtable._30_procAiAct.method);
                    if ( v6 )
                    {
                      v8 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
LABEL_46:
                      System_Collections_Generic_List_object___AddRange(
                        v6,
                        v8,
                        (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
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
LABEL_68:
    sub_1C7BD40(Instance, v8);
  }
  return (System_Collections_Generic_List_BattleLogicTask__o *)v6;
}


void BattleLogicEnemyAi__ExcludeDeadFromTempDead(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x20
  Il2CppObject *data; // x19
  System_Predicate_int__o *v5; // x21

  if ( (byte_4CF172A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BattleData_IsNotAliveTarget__);
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
    sub_1C7BAE8(&System_Predicate_int__TypeInfo);
    byte_4CF172A = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
  {
    data = (Il2CppObject *)this->fields.data;
    v5 = (System_Predicate_int__o *)sub_1C7BD34(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(v5, data, Method_BattleData_IsNotAliveTarget__, 0);
    System_Collections_Generic_HashSet_int___RemoveWhere(
      tempDeadSvtHash,
      (System_Predicate_T__o *)v5,
      (const MethodInfo_36EB078 *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
  }
}


System_Collections_Generic_List_BattleServantData__o *BattleLogicEnemyAi__GetBaseActPriorityList(
        BattleLogicEnemyAi_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_array *FieldEnemyServantList; // x0
  BattleLogicEnemyAi___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x19
  System_Func_object__bool__o *_9__24_0; // x20
  Il2CppObject *v8; // x21
  struct BattleLogicEnemyAi___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  BattleLogicEnemyAi___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  System_Func_object__int__o *_9__24_1; // x20
  Il2CppObject *v20; // x21
  struct BattleLogicEnemyAi___c_StaticFields *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v28; // x0
  BattleLogicEnemyAi___c_c *v29; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v30; // x19
  System_Func_object__int__o *_9__24_2; // x20
  Il2CppObject *v32; // x21
  struct BattleLogicEnemyAi___c_StaticFields *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v40; // x0
  BattleLogicEnemyAi___c_c *v41; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v42; // x19
  System_Func_object__int__o *_9__24_3; // x20
  Il2CppObject *v44; // x21
  struct BattleLogicEnemyAi___c_StaticFields *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0

  if ( (byte_4CF171D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OrderByDescending_BattleServantData__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_BattleServantData___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C7BAE8(&System_Func_BattleServantData__int__TypeInfo);
    sub_1C7BAE8(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C7BAE8(&Method_BattleLogicEnemyAi___c__GetBaseActPriorityList_b__24_0__);
    sub_1C7BAE8(&Method_BattleLogicEnemyAi___c__GetBaseActPriorityList_b__24_1__);
    sub_1C7BAE8(&Method_BattleLogicEnemyAi___c__GetBaseActPriorityList_b__24_2__);
    sub_1C7BAE8(&Method_BattleLogicEnemyAi___c__GetBaseActPriorityList_b__24_3__);
    sub_1C7BAE8(&BattleLogicEnemyAi___c_TypeInfo);
    byte_4CF171D = 1;
  }
  data = this->fields.data;
  if ( !data )
    sub_1C7BD40(0, method);
  FieldEnemyServantList = BattleData__getFieldEnemyServantList(data, 1, 0);
  v5 = BattleLogicEnemyAi___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)FieldEnemyServantList;
  if ( !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
    v5 = BattleLogicEnemyAi___c_TypeInfo;
  }
  _9__24_0 = (System_Func_object__bool__o *)v5->static_fields->__9__24_0;
  if ( !_9__24_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BattleLogicEnemyAi___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__24_0 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__24_0, v8, Method_BattleLogicEnemyAi___c__GetBaseActPriorityList_b__24_0__, 0);
    static_fields = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    static_fields->__9__24_0 = (struct System_Func_BattleServantData__bool__o *)_9__24_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__24_0,
      (int32_t)_9__24_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          v6,
          (System_Func_TSource__bool__o *)_9__24_0,
          (const MethodInfo_31B6300 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v17 = BattleLogicEnemyAi___c_TypeInfo;
  v18 = v16;
  if ( !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
    v17 = BattleLogicEnemyAi___c_TypeInfo;
  }
  _9__24_1 = (System_Func_object__int__o *)v17->static_fields->__9__24_1;
  if ( !_9__24_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = BattleLogicEnemyAi___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__24_1 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__24_1, v20, Method_BattleLogicEnemyAi___c__GetBaseActPriorityList_b__24_1__, 0);
    v21 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    v21->__9__24_1 = (struct System_Func_BattleServantData__int__o *)_9__24_1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v21->__9__24_1, (int32_t)_9__24_1, v22, v23, v24, v25, v26, v27);
  }
  v28 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v18,
          (System_Func_TSource__TKey__o *)_9__24_1,
          (const MethodInfo_319F4D8 *)Method_System_Linq_Enumerable_OrderByDescending_BattleServantData__int___);
  v29 = BattleLogicEnemyAi___c_TypeInfo;
  v30 = v28;
  if ( !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
    v29 = BattleLogicEnemyAi___c_TypeInfo;
  }
  _9__24_2 = (System_Func_object__int__o *)v29->static_fields->__9__24_2;
  if ( !_9__24_2 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = BattleLogicEnemyAi___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v29->static_fields->__9;
    _9__24_2 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__24_2, v32, Method_BattleLogicEnemyAi___c__GetBaseActPriorityList_b__24_2__, 0);
    v33 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    v33->__9__24_2 = (struct System_Func_BattleServantData__int__o *)_9__24_2;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v33->__9__24_2, (int32_t)_9__24_2, v34, v35, v36, v37, v38, v39);
  }
  v40 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v30,
          (System_Func_TSource__TKey__o *)_9__24_2,
          (const MethodInfo_31AEA74 *)Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
  v41 = BattleLogicEnemyAi___c_TypeInfo;
  v42 = v40;
  if ( !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
    v41 = BattleLogicEnemyAi___c_TypeInfo;
  }
  _9__24_3 = (System_Func_object__int__o *)v41->static_fields->__9__24_3;
  if ( !_9__24_3 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = BattleLogicEnemyAi___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v41->static_fields->__9;
    _9__24_3 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__24_3, v44, Method_BattleLogicEnemyAi___c__GetBaseActPriorityList_b__24_3__, 0);
    v45 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    v45->__9__24_3 = (struct System_Func_BattleServantData__int__o *)_9__24_3;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v45->__9__24_3, (int32_t)_9__24_3, v46, v47, v48, v49, v50, v51);
  }
  v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__int_(
                                                               v42,
                                                               (System_Func_TSource__TKey__o *)_9__24_3,
                                                               (const MethodInfo_31AEA74 *)Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
  return (System_Collections_Generic_List_BattleServantData__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v52,
                                                                   (const MethodInfo_31B3E80 *)Method_System_Linq_Enumerable_ToList_BattleServantData___);
}


System_Int32_array *BattleLogicEnemyAi__GetCommandArray(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *data; // x21
  BattleData_o *StageEntity; // x0
  __int64 v7; // x1

  if ( (byte_4CF1727 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1727 = 1;
  }
  data = (UnityEngine_Object_o *)this->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  StageEntity = (BattleData_o *)UnityEngine_Object__op_Inequality(data, 0, 0);
  if ( ((unsigned __int8)StageEntity & 1) == 0 )
    goto LABEL_11;
  StageEntity = this->fields.data;
  if ( !StageEntity )
    goto LABEL_13;
  StageEntity = (BattleData_o *)BattleData__getStageEntity(StageEntity, 0);
  if ( !StageEntity )
  {
LABEL_11:
    if ( servantData )
      return BattleServantData__getCommandList(servantData, 0);
LABEL_13:
    sub_1C7BD40(StageEntity, v7);
  }
  StageEntity = (BattleData_o *)StageEntity__GetAiActTypeAttackCommandCardType(
                                  (StageEntity_o *)StageEntity,
                                  servantData,
                                  0);
  if ( !servantData )
    goto LABEL_13;
  if ( (_DWORD)StageEntity )
    return BattleServantData__getCommandArray(servantData, (int32_t)StageEntity, 0);
  return BattleServantData__getCommandList(servantData, 0);
}


void BattleLogicEnemyAi__Initialize(BattleLogicEnemyAi_o *this, BattleData_o *data, const MethodInfo *method)
{
  AiLogic_o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x1
  AiLogic_o *aiLogic; // x0
  AiEntity_o *v14; // x20
  struct AiEntity_o **p_noThinkAiEnt; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct AiEntity_o *v22; // x19

  if ( (byte_4CF1716 & 1) == 0 )
  {
    sub_1C7BAE8(&AiEntity_TypeInfo);
    sub_1C7BAE8(&AiLogic_TypeInfo);
    sub_1C7BAE8(&StringLiteral_9321/*"NOTHINK_AIACTID"*/);
    byte_4CF1716 = 1;
  }
  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, method);
  v5 = (AiLogic_o *)sub_1C7BD34(AiLogic_TypeInfo);
  AiLogic___ctor(v5, 0);
  this->fields.aiLogic = v5;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.aiLogic, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    goto LABEL_6;
  AiLogic__Initialize(aiLogic, data, 0);
  v14 = (AiEntity_o *)sub_1C7BD34(AiEntity_TypeInfo);
  AiEntity___ctor(v14, 0);
  this->fields.noThinkAiEnt = v14;
  p_noThinkAiEnt = &this->fields.noThinkAiEnt;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_noThinkAiEnt, (int32_t)v14, v16, v17, v18, v19, v20, v21);
  v22 = *p_noThinkAiEnt;
  aiLogic = (AiLogic_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_9321/*"NOTHINK_AIACTID"*/, 0);
  if ( !v22 )
LABEL_6:
    sub_1C7BD40(aiLogic, v12);
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
      sub_1C7BD40(0, aiEnt);
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
  if ( (byte_4CF172B & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_1C7BAE8(&Method_BasicHelper_ContainsSelfNotNull_int___);
    byte_4CF172B = 1;
  }
  if ( !svtData )
    sub_1C7BD40(this, svtData);
  return !BasicHelper__ContainsSelfNotNull_int_(
            (System_Collections_Generic_HashSet_T__o *)v4->fields.tempDeadSvtHash,
            svtData->fields.uniqueId,
            (const MethodInfo_3159CA8 *)Method_BasicHelper_ContainsSelfNotNull_int___);
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
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x7
  System_Collections_Generic_HashSet_int__o *v23; // x26
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  BattleLogicTask_array *v30; // x19
  const MethodInfo *v31; // x3
  BattleLogicTask_array *v32; // x20
  System_Action_object__o *v33; // x21

  if ( (byte_4CF171F & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_BattleLogicTask__TypeInfo);
    sub_1C7BAE8(&Method_BasicHelper_ForEach_BattleLogicTask___);
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C7BAE8(&Method_BattleLogicEnemyAi___c__DisplayClass26_0__ProcAiActBattleScript_b__0__);
    sub_1C7BAE8(&BattleLogicEnemyAi___c__DisplayClass26_0_TypeInfo);
    byte_4CF171F = 1;
  }
  v13 = sub_1C7BD34(BattleLogicEnemyAi___c__DisplayClass26_0_TypeInfo);
  BattleLogicEnemyAi___c__DisplayClass26_0___ctor((BattleLogicEnemyAi___c__DisplayClass26_0_o *)v13, 0);
  if ( !v13 )
    sub_1C7BD40(v14, v15);
  *(_QWORD *)(v13 + 16) = svtData;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v13 + 16), (int32_t)svtData, v16, v17, v18, v19, v20, v21);
  if ( !this->fields.tempDeadSvtHash )
  {
    v23 = (System_Collections_Generic_HashSet_int__o *)sub_1C7BD34(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v23,
      (const MethodInfo_36E9940 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    this->fields.tempDeadSvtHash = v23;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.tempDeadSvtHash,
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
  v33 = (System_Action_object__o *)sub_1C7BD34(System_Action_BattleLogicTask__TypeInfo);
  System_Action_object____ctor(
    v33,
    (Il2CppObject *)v13,
    Method_BattleLogicEnemyAi___c__DisplayClass26_0__ProcAiActBattleScript_b__0__,
    0);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)v30,
    (System_Action_T__o *)v33,
    (const MethodInfo_315C348 *)Method_BasicHelper_ForEach_BattleLogicTask___);
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
      sub_1C7BD40(IsSealedCommandTask, v8);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Func_object__object__o *v22; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_4CF1726 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Select_BattleLogicTask__BattleLogicTask___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
    sub_1C7BAE8(&System_Func_BattleLogicTask__BattleLogicTask__TypeInfo);
    sub_1C7BAE8(&Method_BattleLogicEnemyAi___c__DisplayClass38_0__ReplaceCommandTasksBySealStatus_b__0__);
    sub_1C7BAE8(&BattleLogicEnemyAi___c__DisplayClass38_0_TypeInfo);
    byte_4CF1726 = 1;
  }
  v7 = sub_1C7BD34(BattleLogicEnemyAi___c__DisplayClass38_0_TypeInfo);
  BattleLogicEnemyAi___c__DisplayClass38_0___ctor((BattleLogicEnemyAi___c__DisplayClass38_0_o *)v7, 0);
  if ( !v7 )
    sub_1C7BD40(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = svtData;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)svtData, v16, v17, v18, v19, v20, v21);
  v22 = (System_Func_object__object__o *)sub_1C7BD34(System_Func_BattleLogicTask__BattleLogicTask__TypeInfo);
  System_Func_object__object____ctor(
    v22,
    (Il2CppObject *)v7,
    Method_BattleLogicEnemyAi___c__DisplayClass38_0__ReplaceCommandTasksBySealStatus_b__0__,
    0);
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)derivedTasks,
                                                               (System_Func_TSource__TResult__o *)v22,
                                                               (const MethodInfo_31A5F40 *)Method_System_Linq_Enumerable_Select_BattleLogicTask__BattleLogicTask___);
  return (BattleLogicTask_array *)System_Linq_Enumerable__ToArray_object_(
                                    v23,
                                    (const MethodInfo_31AF1E4 *)Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
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
  if ( (byte_4CF172D & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_1C7BAE8(&Method_WeightRate_int__setWeight__);
    byte_4CF172D = 1;
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
      (const MethodInfo_3C53F84 *)Method_WeightRate_int__setWeight__);
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
      (const MethodInfo_3C53F84 *)Method_WeightRate_int__setWeight__);
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
        (const MethodInfo_3C53F84 *)Method_WeightRate_int__setWeight__);
      return;
    }
LABEL_14:
    sub_1C7BD40(this, weight);
  }
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *BattleLogicEnemyAi__TaskAIAttackEnd(
        BattleLogicEnemyAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  BattleLogicEnemyAi__ClearTempDeadSvt(this, *(const MethodInfo **)&ltype);
  this->fields.tempDeadSvtHash = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.tempDeadSvtHash, 0, v5, v6, v7, v8, v9, v10);
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4CF1718 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleLogicTask_TypeInfo);
    sub_1C7BAE8(&CheckEnemyRelationInterruptProcess_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4CF1718 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v6 = sub_1C7BD34(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v6, 0);
  isClearTempDeadSvtPrevAct = this->fields.isClearTempDeadSvtPrevAct;
  v8 = (CheckEnemyRelationInterruptProcess_o *)sub_1C7BD34(CheckEnemyRelationInterruptProcess_TypeInfo);
  CheckEnemyRelationInterruptProcess___ctor(v8, isClearTempDeadSvtPrevAct, 0);
  if ( !v6
    || (*(_QWORD *)(v6 + 296) = v8,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v6 + 296), (int32_t)v8, v11, v12, v13, v14, v15, v16),
        *(_BYTE *)(v6 + 265) = 1,
        !v5)
    || (items = v5->fields._items,
        v24 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v5->fields._version,
        !items) )
  {
    sub_1C7BD40(v9, v10);
  }
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v6,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v6;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v26 + 4), v6, v17, v18, v19, v20, v21, v22);
  }
  this->fields.isClearTempDeadSvtPrevAct = 0;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicEnemyAi__TaskAIAttackStart(
        BattleLogicEnemyAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CF1717 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4CF1717 = 1;
  }
  if ( !this->fields.tempDeadSvtHash )
  {
    v5 = (System_Collections_Generic_HashSet_int__o *)sub_1C7BD34(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v5,
      (const MethodInfo_36E9940 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    this->fields.tempDeadSvtHash = v5;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.tempDeadSvtHash, (int32_t)v5, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_4CF171E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleServantData__Insert__);
    byte_4CF171E = 1;
  }
  actlist = (System_Collections_Generic_List_object__o *)this->fields.actlist;
  if ( !actlist )
    sub_1C7BD40(0, inSvtData);
  System_Collections_Generic_List_object___Insert(
    actlist,
    0,
    (Il2CppObject *)inSvtData,
    (const MethodInfo_383FBAC *)Method_System_Collections_Generic_List_BattleServantData__Insert__);
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
  int32_t Data; // w23
  int32_t SvtId; // w25
  int32_t DispLimitCount; // w26
  BattleCommandData_o *v22; // x23
  int32_t v23; // w1
  BattleComboData_o *v24; // x20

  if ( (byte_4CF1725 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleComboData_TypeInfo);
    sub_1C7BAE8(&BattleCommandData_TypeInfo);
    sub_1C7BAE8(&BattleCommand_TypeInfo);
    sub_1C7BAE8(&BattleLogicTask_TypeInfo);
    sub_1C7BAE8(&Method_WeightRate_int___ctor__);
    sub_1C7BAE8(&Method_WeightRate_int__getData__);
    sub_1C7BAE8(&Method_WeightRate_int__getTotalWeight__);
    sub_1C7BAE8(&Method_WeightRate_int__setWeight__);
    sub_1C7BAE8(&WeightRate_int__TypeInfo);
    byte_4CF1725 = 1;
  }
  v10 = (BattleLogicTask_o *)sub_1C7BD34(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v10, 0);
  if ( !v10 )
    goto LABEL_23;
  BattleLogicTask__setTarget(v10, targetId, 0);
  if ( !svtData )
    goto LABEL_23;
  BattleLogicTask__setActor(v10, 3, svtData->fields.uniqueId, 0);
  if ( SvtType__IsEnemy_41016004(svtData->fields.svtType, 0) )
  {
    Type = 10;
    goto LABEL_17;
  }
  v14 = (WeightRate_int__o *)sub_1C7BD34(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v14, (const MethodInfo_3C54A68 *)Method_WeightRate_int___ctor__);
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
        sub_1C7BD48(CommandList);
      if ( !v14 )
        break;
      WeightRate_int___setWeight(
        v14,
        10,
        v16->m_Items[v17],
        (const MethodInfo_3C53F84 *)Method_WeightRate_int__setWeight__);
      LODWORD(max_length) = v16->max_length;
      if ( (__int64)++v17 >= (int)max_length )
        goto LABEL_13;
    }
LABEL_23:
    sub_1C7BD40(CommandList, v12);
  }
LABEL_13:
  if ( !v14 )
    goto LABEL_23;
  Next = BattleRandom__getNext(v14->fields.totalweight, 0);
  Data = WeightRate_int___getData(v14, Next, (const MethodInfo_3C543F8 *)Method_WeightRate_int__getData__);
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  Type = BattleCommand__getType(Data, 0);
LABEL_17:
  SvtId = BattleServantData__getSvtId(svtData, 0);
  DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0);
  v22 = (BattleCommandData_o *)sub_1C7BD34(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_47177600(v22, Type, SvtId, DispLimitCount, 0, -1, 0);
  if ( !v22 )
    goto LABEL_23;
  v22->fields.uniqueId = svtData->fields.uniqueId;
  if ( !baseTask )
    goto LABEL_23;
  if ( baseTask->fields.isNoCriticalOnAttack )
    v23 = 3;
  else
    v23 = 1;
  BattleCommandData__SetCriticalDecisionType(v22, v23, 0);
  v10->fields.isNoCriticalOnAttack = baseTask->fields.isNoCriticalOnAttack;
  v24 = (BattleComboData_o *)sub_1C7BD34(BattleComboData_TypeInfo);
  BattleComboData___ctor(v24, 0);
  BattleLogicTask__setActionCommand(v10, v24, v22, countAct, 0);
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
    sub_1C7BD40(0, method);
  return BattleData__getFieldPlayerServantIDList(data, 0, 0);
}


System_Int32_array *BattleLogicEnemyAi__get_PartySvtIds(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1C7BD40(0, method);
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
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x7
  BattleLogicTask_array *v23; // x20
  const MethodInfo *v24; // x3
  BattleLogicTask_array *v25; // x19
  System_Action_object__o *v26; // x21

  if ( (byte_4CF1720 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_BattleLogicTask__TypeInfo);
    sub_1C7BAE8(&Method_BasicHelper_ForEach_BattleLogicTask___);
    sub_1C7BAE8(&Method_BattleLogicEnemyAi___c__DisplayClass27_0__procAiAct_b__0__);
    sub_1C7BAE8(&BattleLogicEnemyAi___c__DisplayClass27_0_TypeInfo);
    byte_4CF1720 = 1;
  }
  v13 = sub_1C7BD34(BattleLogicEnemyAi___c__DisplayClass27_0_TypeInfo);
  BattleLogicEnemyAi___c__DisplayClass27_0___ctor((BattleLogicEnemyAi___c__DisplayClass27_0_o *)v13, 0);
  if ( !v13 )
    sub_1C7BD40(v14, v15);
  *(_QWORD *)(v13 + 16) = svtData;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v13 + 16), (int32_t)svtData, v16, v17, v18, v19, v20, v21);
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
  v26 = (System_Action_object__o *)sub_1C7BD34(System_Action_BattleLogicTask__TypeInfo);
  System_Action_object____ctor(
    v26,
    (Il2CppObject *)v13,
    Method_BattleLogicEnemyAi___c__DisplayClass27_0__procAiAct_b__0__,
    0);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)v23,
    (System_Action_T__o *)v26,
    (const MethodInfo_315C348 *)Method_BasicHelper_ForEach_BattleLogicTask___);
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
  int32_t data_high; // w25
  AiActEntity_o *v16; // x24
  BattleLogicBaseAi_o *v17; // x0
  const MethodInfo *v18; // x4
  bool v20; // w28
  WeightRate_int__o *v21; // x22
  int32_t Int; // w0
  int32_t v23; // w0
  int32_t v24; // w0
  BattleServantData_o *v25; // x0
  int32_t v26; // w1
  int *skillVals; // x8
  int32_t v28; // w20
  int32_t v29; // w22
  int32_t Next; // w0
  int32_t Data; // w0
  System_Collections_Generic_List_object__o *v32; // x27
  __int64 v33; // x25
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct System_String_o *infoText; // x1
  BattleData_o *v41; // x20
  bool v42; // w22
  __int64 v43; // x20
  const MethodInfo *v44; // x4
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  const MethodInfo *v51; // x4
  System_String_o *v52; // x0
  System_String_o *v53; // x0
  struct BattleLogic_o *v54; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  Il2CppClass **v71; // x0
  Il2CppObject *MasterData_object; // x20
  BattleSkillInfoData_o *SkillInfoDataByAiActType; // x0
  BattleSkillInfoData_o *v74; // x28
  SkillLvEntity_o *Entity; // x20
  System_Collections_Generic_List_object__o *v76; // x0
  _BOOL8 isSkillType; // x0
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  const MethodInfo *v81; // x5
  int64_t v82; // x6
  System_String_o *v83; // x7
  bool v84; // w27
  BattleLogic_o *logic; // x22
  struct BattleLogicTarget_o *funcId; // x26
  BattleLogicEnemyAi_o *v87; // x2
  BattleLogic_o *v88; // x0
  struct BattleLogicTarget_o *logictarget; // x1
  Il2CppObject *v90; // x22
  struct BattleLogic_o *tempDeadSvtHash; // x1
  bool IsEnableTarget; // w27
  BattleData_o *v93; // x8
  BattleLogicTarget_o *v94; // x20
  int32_t target; // w28
  int32_t uniqueId; // w26
  System_Int32_array *targetIndividuality; // x29
  System_Int32_array *FieldPlayerServantIDList; // x22
  const MethodInfo *v99; // x3
  BattleLogicTarget_o *v100; // x22
  int32_t v101; // w26
  int32_t v102; // w27
  System_Int32_array *v103; // x28
  BattleLogicEnemyAi_o *v104; // x20
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7
  BattleSkillInfoData_o *v111; // x28
  char v112; // w8
  int32_t v113; // w2
  int32_t v114; // w3
  System_String_o *v115; // x4
  int32_t v116; // w5
  int64_t v117; // x6
  System_String_o *v118; // x7
  int32_t Type; // w21
  const MethodInfo *v120; // x3
  System_Collections_Generic_List_object__o *v121; // x21
  int32_t v122; // w2
  int32_t v123; // w3
  System_String_o *v124; // x4
  int32_t v125; // w5
  int64_t v126; // x6
  System_String_o *v127; // x7
  struct System_Object_array *items; // x8
  _QWORD *v129; // x9
  __int64 size; // x10
  Il2CppClass **v131; // x0
  int32_t v132; // w2
  int32_t v133; // w3
  System_String_o *v134; // x4
  int32_t v135; // w5
  int64_t v136; // x6
  System_String_o *v137; // x7
  BattleCommandData_o *v138; // x20
  BattleComboData_o *v139; // x21
  int32_t TreasureDvcId; // w0
  int32_t v141; // w2
  int32_t v142; // w3
  System_String_o *v143; // x4
  int32_t v144; // w5
  int64_t v145; // x6
  System_String_o *v146; // x7
  BattleLogicTask_o *v147; // x19
  struct System_Object_array *v148; // x8
  _QWORD *v149; // x9
  __int64 v150; // x10
  Il2CppClass **v151; // x0
  GrandQuestFolderBoardItem_o *v152; // x0
  int32_t v153; // w1
  __int64 v154; // x8
  System_Collections_Generic_List_object__o *v155; // x0
  Il2CppObject *v156; // x1
  struct BattleLogic_o *v157; // x8
  BattleServantData_o *ServantData; // x0
  WeightRate_int__o *v159; // x20
  const MethodInfo *v160; // x2
  struct BattleLogic_o *v161; // x8
  BattleLogicEnemyAi_o *v162; // x21
  unsigned __int64 v163; // x22
  int32_t v164; // w0
  int32_t v165; // w20
  struct System_Int32_array *FixCommandCardIds; // x0
  int32_t v167; // w2
  int32_t v168; // w3
  System_String_o *v169; // x4
  int32_t v170; // w5
  int64_t v171; // x6
  System_String_o *v172; // x7
  int32_t SvtId; // w22
  int32_t DispLimitCount; // w23
  BattleCommandData_o *v175; // x20
  int32_t v176; // w1
  BattleComboData_o *v177; // x19
  struct System_Object_array *v178; // x8
  _QWORD *v179; // x9
  __int64 v180; // x10
  Il2CppClass **v181; // x0
  System_Collections_Generic_List_object__o *v182; // [xsp+18h] [xbp-A8h]
  BattleSkillInfoData_o *v183; // [xsp+20h] [xbp-A0h]
  int32_t v184; // [xsp+28h] [xbp-98h]
  int32_t v185; // [xsp+2Ch] [xbp-94h]
  BattleLogicEnemyAi_o *targetlist; // [xsp+30h] [xbp-90h]
  bool v187; // [xsp+3Ch] [xbp-84h]
  BattleBranchSkillInfoData_o *battleBranchSkillInfo; // [xsp+40h] [xbp-80h] BYREF
  int32_t lv; // [xsp+4Ch] [xbp-74h] BYREF
  int32_t id[2]; // [xsp+50h] [xbp-70h] BYREF
  int32_t aiActType; // [xsp+58h] [xbp-68h] BYREF
  bool noMessage; // [xsp+5Ch] [xbp-64h] BYREF

  v14 = this;
  if ( (byte_4CF1721 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleComboData_TypeInfo);
    sub_1C7BAE8(&BattleCommandData_TypeInfo);
    sub_1C7BAE8(&BattleCommand_TypeInfo);
    sub_1C7BAE8(&BattleLogicTask_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C7BAE8(&ServantAiActArgument_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&Method_WeightRate_int___ctor__);
    sub_1C7BAE8(&Method_WeightRate_int__getCount__);
    sub_1C7BAE8(&Method_WeightRate_int__getData__);
    sub_1C7BAE8(&Method_WeightRate_int__getTotalWeight__);
    sub_1C7BAE8(&Method_WeightRate_int__setWeight__);
    sub_1C7BAE8(&WeightRate_int__TypeInfo);
    this = (BattleLogicEnemyAi_o *)sub_1C7BAE8(&StringLiteral_8764/*"MOTION_"*/);
    byte_4CF1721 = 1;
  }
  *(_QWORD *)id = 0;
  lv = 0;
  battleBranchSkillInfo = 0;
  noMessage = 0;
  if ( !aiEnt )
    goto LABEL_187;
  this = (BattleLogicEnemyAi_o *)BattleLogicBaseAi__GetAiActEntity(
                                   (BattleLogicBaseAi_o *)v14,
                                   aiEnt->fields.aiActId,
                                   (const MethodInfo *)aiEnt);
  if ( !this )
    goto LABEL_187;
  data_high = HIDWORD(this->fields.data);
  v16 = (AiActEntity_o *)this;
  aiActType = data_high;
  if ( !svtData )
    goto LABEL_187;
  v17 = (BattleLogicBaseAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))svtData->klass->vtable._18_getAiState.methodPtr)(
                                 svtData,
                                 svtData->klass->vtable._18_getAiState.method);
  if ( BattleLogicBaseAi__IsChangeThinkingOnly(v17, data_high, (AiBaseEntity_o *)aiEnt, (AiState_o *)v17, v18) )
    return v14->fields.emptyTask;
  v20 = procState != 1 || BattleServantData__canUseSkill(svtData, -1, 0);
  v21 = (WeightRate_int__o *)sub_1C7BD34(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v21, (const MethodInfo_3C54A68 *)Method_WeightRate_int___ctor__);
  v187 = isBattleScript;
  if ( aiInfo )
  {
    this = (BattleLogicEnemyAi_o *)AiLogic_AiInfo__IsChecked(aiInfo, (AiBaseEntity_o *)aiEnt, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      AiLogic_AiInfo__GetCheckedResult(aiInfo, svtData, (AiBaseEntity_o *)aiEnt, &aiActType, &noMessage, 0);
      goto LABEL_62;
    }
  }
  switch ( data_high )
  {
    case 10:
      if ( !v20 )
        goto LABEL_58;
      if ( !BattleServantData__isUseSelfSkill(svtData, 0, 0) )
        goto LABEL_19;
      this = (BattleLogicEnemyAi_o *)AiAct__getInt(11, 0);
      if ( !v21 )
        goto LABEL_187;
      WeightRate_int___setWeight(v21, 10, (int32_t)this, (const MethodInfo_3C53F84 *)Method_WeightRate_int__setWeight__);
LABEL_19:
      if ( !BattleServantData__isUseSelfSkill(svtData, 1, 0) )
        goto LABEL_22;
      this = (BattleLogicEnemyAi_o *)AiAct__getInt(12, 0);
      if ( !v21 )
        goto LABEL_187;
      WeightRate_int___setWeight(v21, 10, (int32_t)this, (const MethodInfo_3C53F84 *)Method_WeightRate_int__setWeight__);
LABEL_22:
      this = (BattleLogicEnemyAi_o *)BattleServantData__isUseSelfSkill(svtData, 2, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleLogicEnemyAi_o *)AiAct__getInt(13, 0);
        if ( !v21 )
          goto LABEL_187;
        WeightRate_int___setWeight(
          v21,
          10,
          (int32_t)this,
          (const MethodInfo_3C53F84 *)Method_WeightRate_int__setWeight__);
      }
      else
      {
LABEL_58:
        if ( !v21 )
          goto LABEL_187;
      }
      if ( WeightRate_int___getCount(v21, (const MethodInfo_3C54340 *)Method_WeightRate_int__getCount__) >= 1 )
        goto LABEL_60;
      goto LABEL_61;
    case 11:
      if ( !v20 )
      {
        aiActType = 2;
        noMessage = 1;
      }
      v25 = svtData;
      v26 = 0;
      goto LABEL_41;
    case 12:
      if ( !v20 )
      {
        aiActType = 2;
        noMessage = 1;
      }
      v26 = 1;
      v25 = svtData;
LABEL_41:
      if ( !BattleServantData__isUseSelfSkill(v25, v26, 0) )
        aiActType = 2;
      goto LABEL_62;
    case 13:
      if ( !v20 )
      {
        aiActType = 2;
        noMessage = 1;
      }
      if ( !BattleServantData__isUseSelfSkill(svtData, 2, 0) )
        aiActType = 2;
      goto LABEL_62;
    default:
      if ( data_high == 80 )
      {
        if ( BattleServantData__isNobleAction(svtData, 0)
          && TreasureDeviceConditionUtil__IsSatisfyEachCondition(svtData, v14->fields.data, 0) )
        {
          goto LABEL_62;
        }
        goto LABEL_61;
      }
      if ( data_high != 1 )
      {
        if ( (data_high & 0xFFFFFFFE) != 0x28 )
          goto LABEL_62;
        skillVals = (int *)v16->fields.skillVals;
        if ( !skillVals )
          goto LABEL_187;
        if ( skillVals[6] <= 1 )
        {
LABEL_147:
          aiActType = 0;
          goto LABEL_62;
        }
        if ( v20 || data_high != 41 )
        {
          v28 = skillVals[8];
          v29 = skillVals[9];
          this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_187;
          this = (BattleLogicEnemyAi_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
          if ( !this )
            goto LABEL_187;
          if ( SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v28, v29, 0) )
          {
            BattleServantData__addSkillInfo(svtData, 20, 0, v28, v29, -1, -1, 0, 0);
            goto LABEL_62;
          }
          goto LABEL_147;
        }
LABEL_61:
        aiActType = 2;
        noMessage = 1;
        goto LABEL_62;
      }
      this = (BattleLogicEnemyAi_o *)AiAct__getInt(2, 0);
      if ( !v21 )
        goto LABEL_187;
      WeightRate_int___setWeight(v21, 10, (int32_t)this, (const MethodInfo_3C53F84 *)Method_WeightRate_int__setWeight__);
      if ( v20 )
      {
        if ( BattleServantData__isUseSelfSkill(svtData, 0, 0) )
        {
          Int = AiAct__getInt(11, 0);
          WeightRate_int___setWeight(v21, 10, Int, (const MethodInfo_3C53F84 *)Method_WeightRate_int__setWeight__);
        }
        if ( BattleServantData__isUseSelfSkill(svtData, 1, 0) )
        {
          v23 = AiAct__getInt(12, 0);
          WeightRate_int___setWeight(v21, 10, v23, (const MethodInfo_3C53F84 *)Method_WeightRate_int__setWeight__);
        }
        if ( BattleServantData__isUseSelfSkill(svtData, 2, 0) )
        {
          v24 = AiAct__getInt(13, 0);
          WeightRate_int___setWeight(v21, 10, v24, (const MethodInfo_3C53F84 *)Method_WeightRate_int__setWeight__);
        }
      }
LABEL_60:
      Next = BattleRandom__getNext(v21->fields.totalweight, 0);
      Data = WeightRate_int___getData(v21, Next, (const MethodInfo_3C543F8 *)Method_WeightRate_int__getData__);
      aiActType = AiAct__getType(Data, 0);
LABEL_62:
      v32 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v32,
        (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      v33 = sub_1C7BD34(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor((BattleLogicTask_o *)v33, 0);
      if ( noMessage )
      {
        if ( !v33 )
          goto LABEL_187;
      }
      else
      {
        if ( !v33 )
          goto LABEL_187;
        infoText = aiEnt->fields.infoText;
        *(_QWORD *)(v33 + 176) = infoText;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v33 + 176), (int32_t)infoText, v34, v35, v36, v37, v38, v39);
      }
      BattleLogicTask__setActor((BattleLogicTask_o *)v33, 3, svtData->fields.uniqueId, 0);
      if ( AiBaseEntity__IsForcedActionSpeedAnyTime((AiBaseEntity_o *)aiEnt, 0) )
      {
        *(_BYTE *)(v33 + 184) = 1;
      }
      else if ( (((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, AiEntity_o *, const MethodInfo *))v14->klass->vtable._27_IsNotPlayedActionFirstTime.methodPtr)(
                   v14,
                   aiEnt,
                   v14->klass->vtable._27_IsNotPlayedActionFirstTime.method)
               & 1) != 0 )
      {
        *(_BYTE *)(v33 + 184) = 1;
        v41 = v14->fields.data;
        this = (BattleLogicEnemyAi_o *)((__int64 (__fastcall *)(AiEntity_o *, const MethodInfo *))aiEnt->klass->vtable._7_get_FirstTimeSaveKey.methodPtr)(
                                         aiEnt,
                                         aiEnt->klass->vtable._7_get_FirstTimeSaveKey.method);
        if ( !v41 )
          goto LABEL_187;
        BattleData__AddPlayedFirstTimeNormalSpeedAiList(v41, (System_String_o *)this, 0);
      }
      *(_BYTE *)(v33 + 232) = AiActEntity__IsNoCriticalOnAttack(v16, 0);
      this = (BattleLogicEnemyAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))svtData->klass->vtable._18_getAiState.methodPtr)(
                                       svtData,
                                       svtData->klass->vtable._18_getAiState.method);
      if ( !this )
        goto LABEL_187;
      AiState__setBeforeAction((AiState_o *)this, aiActType, aiEnt->fields.aiActId, 0);
      v42 = noMessage;
      v43 = sub_1C7BD34(ServantAiActArgument_TypeInfo);
      BaseAiActArgument___ctor((BaseAiActArgument_o *)v43, v16, (AiBaseEntity_o *)aiEnt, procState, v44);
      *(_QWORD *)(v43 + 40) = svtData;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v43 + 40), (int32_t)svtData, v45, v46, v47, v48, v49, v50);
      *(_BYTE *)(v43 + 48) = v42;
      if ( aiActType != 71 )
      {
        this = (BattleLogicEnemyAi_o *)BattleLogicBaseAi__SetNoTargetAiActTask(
                                         (BattleLogicBaseAi_o *)v14,
                                         (System_Collections_Generic_List_BattleLogicTask__o *)v32,
                                         aiActType,
                                         (BaseAiActArgument_o *)v43,
                                         v51);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_82;
        this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_187;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
        SkillInfoDataByAiActType = BattleServantData__getSkillInfoDataByAiActType(svtData, aiActType, 0);
        v74 = SkillInfoDataByAiActType;
        if ( SkillInfoDataByAiActType )
        {
          this = (BattleLogicEnemyAi_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))SkillInfoDataByAiActType->klass->vtable._5_get_skillId.methodPtr)(
                                           SkillInfoDataByAiActType,
                                           SkillInfoDataByAiActType->klass->vtable._5_get_skillId.method);
          if ( !MasterData_object )
            goto LABEL_187;
          Entity = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, (int32_t)this, v74->fields.skilllv, 0);
        }
        else
        {
          Entity = 0;
        }
        isSkillType = AiAct__isSkillType(aiActType, 0);
        v184 = countAct;
        v182 = v32;
        if ( isSkillType )
        {
          v84 = 1;
          if ( !v74 || !Entity )
            goto LABEL_107;
          logic = v14->fields.logic;
          funcId = (struct BattleLogicTarget_o *)Entity->fields.funcId;
          this = (BattleLogicEnemyAi_o *)SkillLvEntity__getDataValsList(Entity, 0);
          if ( !logic )
            goto LABEL_187;
          v87 = this;
          v88 = logic;
          logictarget = funcId;
        }
        else
        {
          if ( aiActType != 80 )
            goto LABEL_106;
          if ( BattleLogicServantAi__TryGetOverwriteTreasureDevice(
                 (BattleLogicServantAi_o *)isSkillType,
                 svtData,
                 v16->fields.skillVals,
                 id,
                 &lv,
                 v81) )
          {
            BattleLogicTask__SetOverwriteTreasureDevice((BattleLogicTask_o *)v33, id[0], lv, 0);
            this = *(BattleLogicEnemyAi_o **)(v33 + 224);
            if ( !this )
              goto LABEL_187;
            OverwriteTreasureDeviceData__Overwrite((OverwriteTreasureDeviceData_o *)this, svtData, 0);
          }
          this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_187;
          v90 = DataManager__GetMasterData_object_(
                  (DataManager_o *)this,
                  (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
          this = (BattleLogicEnemyAi_o *)BattleServantData__getTreasureDvcId(svtData, 1, 0, 0);
          if ( !v90 )
            goto LABEL_187;
          this = (BattleLogicEnemyAi_o *)TreasureDvcLvMaster__GetEntity(
                                           (TreasureDvcLvMaster_o *)v90,
                                           (int32_t)this,
                                           svtData->fields.treasuredvcLevel,
                                           0);
          if ( !this )
          {
LABEL_106:
            v84 = 1;
            goto LABEL_107;
          }
          if ( !v14->fields.logic )
            goto LABEL_187;
          logictarget = this->fields.logictarget;
          v88 = v14->fields.logic;
          v87 = 0;
        }
        v84 = BattleLogic__checkEnemyTargetFunction(v88, (System_Int32_array *)logictarget, (DataVals_array *)v87, 0);
LABEL_107:
        this = (BattleLogicEnemyAi_o *)v14->fields.logictarget;
        if ( !this )
          goto LABEL_187;
        tempDeadSvtHash = (struct BattleLogic_o *)v14->fields.tempDeadSvtHash;
        this->fields.logic = tempDeadSvtHash;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&this->fields.logic,
          (int32_t)tempDeadSvtHash,
          v78,
          v79,
          v80,
          (int32_t)v81,
          v82,
          v83);
        IsEnableTarget = AiActEntity__IsEnableTarget(v16, v84, 0);
        if ( v74 && Entity )
          IsEnableTarget = SkillLvEntity__IsEnableTarget(Entity, IsEnableTarget, 0);
        v183 = v74;
        v185 = procState;
        this = (BattleLogicEnemyAi_o *)sub_1C7BB90(int___TypeInfo, 1);
        v93 = v14->fields.data;
        targetlist = this;
        if ( !v93 )
          goto LABEL_187;
        v94 = v14->fields.logictarget;
        target = v16->fields.target;
        uniqueId = svtData->fields.uniqueId;
        targetIndividuality = v16->fields.targetIndividuality;
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v93, 0, 0);
        this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(v14, aiEnt, v187, v99);
        if ( !v94 )
          goto LABEL_187;
        this = (BattleLogicEnemyAi_o *)BattleLogicTarget__getTargetAiAct(
                                         v94,
                                         target,
                                         uniqueId,
                                         targetIndividuality,
                                         FieldPlayerServantIDList,
                                         IsEnableTarget,
                                         0,
                                         0,
                                         v16,
                                         (unsigned __int8)this & 1,
                                         0);
        if ( !targetlist )
          goto LABEL_187;
        if ( LODWORD(targetlist->fields.logic) )
        {
          LODWORD(targetlist->fields.logictarget) = (_DWORD)this;
          this = (BattleLogicEnemyAi_o *)sub_1C7BB90(int___TypeInfo, 1);
          if ( !v14->fields.data )
            goto LABEL_187;
          v100 = v14->fields.logictarget;
          v101 = v16->fields.target;
          v102 = svtData->fields.uniqueId;
          v103 = v16->fields.targetIndividuality;
          v104 = this;
          this = (BattleLogicEnemyAi_o *)BattleData__getFieldEnemyServantIDList(v14->fields.data, 0, 0);
          if ( !v100 )
            goto LABEL_187;
          this = (BattleLogicEnemyAi_o *)BattleLogicTarget__getTargetAiAct(
                                           v100,
                                           v101,
                                           v102,
                                           v103,
                                           (System_Int32_array *)this,
                                           0,
                                           0,
                                           0,
                                           v16,
                                           1,
                                           0);
          if ( !v104 )
            goto LABEL_187;
          v111 = v183;
          if ( LODWORD(v104->fields.logic) )
          {
            LODWORD(v104->fields.logictarget) = (_DWORD)this;
            this = (BattleLogicEnemyAi_o *)v14->fields.logictarget;
            if ( !this )
              goto LABEL_187;
            this->fields.logic = 0;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.logic, 0, v105, v106, v107, v108, v109, v110);
            if ( v187 && AiAct__isAttackType(aiActType, 0) )
            {
              v112 = 1;
            }
            else
            {
              this = (BattleLogicEnemyAi_o *)v14->fields.logic;
              if ( !this )
                goto LABEL_187;
              v112 = (v185 == 1) & (BattleLogic__GetLogicType((BattleLogic_o *)this, 0) == 42);
            }
            *(_BYTE *)(v33 + 192) = v112;
            if ( !AiAct__isAttackType(aiActType, 0) )
            {
              this = (BattleLogicEnemyAi_o *)AiAct__isSkillType(aiActType, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                this = (BattleLogicEnemyAi_o *)BattleServantData__get_BuffData(svtData, 0);
                if ( !this )
                  goto LABEL_187;
                BattleBuffData__UpdateSkillRelationBuff((BattleBuffData_o *)this, 0);
                if ( v183 )
                {
                  this = (BattleLogicEnemyAi_o *)BattleSkillInfoData__IsExistBranchSkillInfo(v183, 0);
                  if ( ((unsigned __int8)this & 1) != 0
                    && (this = (BattleLogicEnemyAi_o *)BasicHelper__IsNullOrEmpty(
                                                         (System_Collections_ICollection_o *)v104,
                                                         0),
                        ((unsigned __int8)this & 1) == 0) )
                  {
                    v157 = v14->fields.logic;
                    v121 = v182;
                    if ( !v157 )
                      goto LABEL_187;
                    if ( !LODWORD(v104->fields.logic) )
                      goto LABEL_188;
                    this = (BattleLogicEnemyAi_o *)v157->fields.data;
                    if ( !this )
                      goto LABEL_187;
                    ServantData = BattleData__getServantData((BattleData_o *)this, (int32_t)v104->fields.logictarget, 0);
                    this = (BattleLogicEnemyAi_o *)BattleSkillInfoData__TryGetSatisfyCondBranchSkillInfoData(
                                                     v183,
                                                     &battleBranchSkillInfo,
                                                     ServantData,
                                                     0);
                    if ( ((unsigned __int8)this & 1) != 0 )
                      v111 = (BattleSkillInfoData_o *)battleBranchSkillInfo;
                  }
                  else
                  {
                    v121 = v182;
                  }
                  BattleLogicBaseAi__SetSkillSelectAddIndex(
                    (BattleLogicBaseAi_o *)this,
                    v111,
                    (AiBaseEntity_o *)aiEnt,
                    v120);
                  BattleLogicTask__setActionSkill(
                    (BattleLogicTask_o *)v33,
                    v111,
                    (System_Int32_array *)targetlist,
                    (System_Int32_array *)v104,
                    0,
                    0,
                    0);
                  BattleLogicTask__setActor((BattleLogicTask_o *)v33, 3, svtData->fields.uniqueId, 0);
                  *(_BYTE *)(v33 + 193) = 1;
                  if ( !v121 )
                    goto LABEL_187;
                  items = v121->fields._items;
                  v129 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                  ++v121->fields._version;
                  if ( !items )
                    goto LABEL_187;
                  size = v121->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v121,
                      (Il2CppObject *)v33,
                      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v131 = &items->obj.klass + size;
                    v121->fields._size = size + 1;
                    v131[4] = (Il2CppClass *)v33;
                    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v131 + 4), v33, v122, v123, v124, v125, v126, v127);
                  }
                  v147 = (BattleLogicTask_o *)sub_1C7BD34(BattleLogicTask_TypeInfo);
                  BattleLogicTask___ctor(v147, 0);
                  v148 = v121->fields._items;
                  v149 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                  ++v121->fields._version;
                  if ( !v148 )
                    goto LABEL_187;
                  v150 = v121->fields._size;
                  if ( (unsigned int)v150 < LODWORD(v148->max_length) )
                  {
                    v151 = &v148->obj.klass + v150;
                    v121->fields._size = v150 + 1;
                    v151[4] = (Il2CppClass *)v147;
                    v152 = (GrandQuestFolderBoardItem_o *)(v151 + 4);
                    v153 = (int)v147;
LABEL_182:
                    sub_1C7BA8C(v152, v153, v141, v142, v143, v144, v145, v146);
                    goto LABEL_185;
                  }
                  v154 = v149[4];
                  v155 = v121;
                  v156 = (Il2CppObject *)v147;
LABEL_184:
                  System_Collections_Generic_List_object___AddWithResize(
                    v155,
                    v156,
                    *(const MethodInfo_383EDFC **)(*(_QWORD *)(v154 + 192) + 112LL));
                  goto LABEL_185;
                }
              }
              else if ( aiActType == 80 )
              {
                BattleLogicTask__setActor((BattleLogicTask_o *)v33, 3, svtData->fields.uniqueId, 0);
                *(_QWORD *)(v33 + 32) = targetlist;
                sub_1C7BA8C(
                  (GrandQuestFolderBoardItem_o *)(v33 + 32),
                  (int32_t)targetlist,
                  v132,
                  v133,
                  v134,
                  v135,
                  v136,
                  v137);
                v138 = (BattleCommandData_o *)sub_1C7BD34(BattleCommandData_TypeInfo);
                BattleCommandData___ctor(v138, 0);
                this = (BattleLogicEnemyAi_o *)BattleServantData__getTreasureDvcCardId(svtData, 0);
                if ( !v138 )
                  goto LABEL_187;
                v138->fields._type = (int)this;
                v138->fields.svtlimit = BattleServantData__getDispLimitCount(svtData, 1, 0);
                v138->fields.uniqueId = svtData->fields.uniqueId;
                v138->fields.svtId = BattleServantData__getSvtId(svtData, 0);
                v138->fields.treasureDvc = BattleServantData__getTreasureDvcId(svtData, 1, 0, 0);
                v139 = (BattleComboData_o *)sub_1C7BD34(BattleComboData_TypeInfo);
                BattleComboData___ctor(v139, 0);
                BattleLogicTask__setActionCommand((BattleLogicTask_o *)v33, v139, v138, v184, 0);
                TreasureDvcId = BattleServantData__getTreasureDvcId(svtData, 1, 0, 0);
                BattleLogicTask__setActionTreasureDvc((BattleLogicTask_o *)v33, TreasureDvcId, 1, 0);
                goto LABEL_178;
              }
              v121 = v182;
              if ( !v182 )
                goto LABEL_187;
LABEL_185:
              v76 = v121;
              return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                                v76,
                                                (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
            }
            *(_QWORD *)(v33 + 32) = targetlist;
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)(v33 + 32),
              (int32_t)targetlist,
              v113,
              v114,
              v115,
              v116,
              v117,
              v118);
            if ( SvtType__IsEnemy_41016004(svtData->fields.svtType, 0) )
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
            v159 = (WeightRate_int__o *)sub_1C7BD34(WeightRate_int__TypeInfo);
            WeightRate_int____ctor(v159, (const MethodInfo_3C54A68 *)Method_WeightRate_int___ctor__);
            this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi__GetCommandArray(v14, svtData, v160);
            if ( !this )
              goto LABEL_187;
            v161 = this->fields.logic;
            v162 = this;
            if ( (int)v161 < 1 )
            {
LABEL_166:
              if ( !v159 )
                goto LABEL_187;
              v164 = BattleRandom__getNext(v159->fields.totalweight, 0);
              v165 = WeightRate_int___getData(v159, v164, (const MethodInfo_3C543F8 *)Method_WeightRate_int__getData__);
              if ( !BattleCommand_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
              Type = BattleCommand__getType(v165, 0);
LABEL_170:
              FixCommandCardIds = AiActEntity__GetFixCommandCardIds(v16, Type, 0);
              svtData->fields.fixCommandCardIds = FixCommandCardIds;
              sub_1C7BA8C(
                (GrandQuestFolderBoardItem_o *)&svtData->fields.fixCommandCardIds,
                (int32_t)FixCommandCardIds,
                v167,
                v168,
                v169,
                v170,
                v171,
                v172);
              SvtId = BattleServantData__getSvtId(svtData, 0);
              DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0);
              v175 = (BattleCommandData_o *)sub_1C7BD34(BattleCommandData_TypeInfo);
              BattleCommandData___ctor_47177600(v175, Type, SvtId, DispLimitCount, 0, -1, 0);
              if ( !v175 )
                goto LABEL_187;
              v175->fields.uniqueId = svtData->fields.uniqueId;
              if ( *(_BYTE *)(v33 + 232) )
              {
                v176 = 3;
              }
              else
              {
                if ( AiAct__isAttackCritical(aiActType, 0) )
                {
                  BattleCommandData__SetCriticalDecisionType(v175, 2, 0);
                  aiActType = 2;
LABEL_177:
                  v177 = (BattleComboData_o *)sub_1C7BD34(BattleComboData_TypeInfo);
                  BattleComboData___ctor(v177, 0);
                  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v33, v177, v175, v184, 0);
LABEL_178:
                  v121 = v182;
                  if ( !v182 )
                    goto LABEL_187;
                  v178 = v182->fields._items;
                  v179 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                  ++v182->fields._version;
                  if ( !v178 )
                    goto LABEL_187;
                  v180 = v182->fields._size;
                  if ( (unsigned int)v180 < LODWORD(v178->max_length) )
                  {
                    v181 = &v178->obj.klass + v180;
                    v182->fields._size = v180 + 1;
                    v181[4] = (Il2CppClass *)v33;
                    v152 = (GrandQuestFolderBoardItem_o *)(v181 + 4);
                    v153 = v33;
                    goto LABEL_182;
                  }
                  v154 = v179[4];
                  v155 = v182;
                  v156 = (Il2CppObject *)v33;
                  goto LABEL_184;
                }
                v176 = 1;
              }
              BattleCommandData__SetCriticalDecisionType(v175, v176, 0);
              goto LABEL_177;
            }
            v163 = 0;
            while ( v163 < (unsigned int)v161 )
            {
              if ( !v159 )
                goto LABEL_187;
              WeightRate_int___setWeight(
                v159,
                10,
                *((_DWORD *)&v162->fields.logictarget + v163),
                (const MethodInfo_3C53F84 *)Method_WeightRate_int__setWeight__);
              LODWORD(v161) = v162->fields.logic;
              if ( (__int64)++v163 >= (int)v161 )
                goto LABEL_166;
            }
          }
        }
LABEL_188:
        sub_1C7BD48(this);
      }
      this = (BattleLogicEnemyAi_o *)AiBaseEntity__getActionValue((AiBaseEntity_o *)aiEnt, 0);
      id[1] = (int)this;
      if ( (int)this >= 1 )
      {
        v52 = System_Int32__ToString((int32_t)&id[1], 0);
        v53 = System_String__Concat_64176912((System_String_o *)StringLiteral_8764/*"MOTION_"*/, v52, 0);
        BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v33, v53, 0);
        v54 = v14->fields.logic;
        if ( v54 )
        {
          this = (BattleLogicEnemyAi_o *)v54->fields.perf;
          if ( this )
          {
            ServantGameObject = BattlePerformance__getServantGameObject(
                                  (BattlePerformance_o *)this,
                                  svtData->fields.uniqueId,
                                  0);
            *(_QWORD *)(v33 + 128) = ServantGameObject;
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)(v33 + 128),
              (int32_t)ServantGameObject,
              v56,
              v57,
              v58,
              v59,
              v60,
              v61);
            BattleLogicTask__setActor((BattleLogicTask_o *)v33, 3, svtData->fields.uniqueId, 0);
            if ( v32 )
            {
              v68 = v32->fields._items;
              v69 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
              ++v32->fields._version;
              if ( v68 )
              {
                v70 = v32->fields._size;
                if ( (unsigned int)v70 >= LODWORD(v68->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v32,
                    (Il2CppObject *)v33,
                    *(const MethodInfo_383EDFC **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
                }
                else
                {
                  v71 = &v68->obj.klass + v70;
                  v32->fields._size = v70 + 1;
                  v71[4] = (Il2CppClass *)v33;
                  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v71 + 4), v33, v62, v63, v64, v65, v66, v67);
                }
                goto LABEL_89;
              }
            }
          }
        }
LABEL_187:
        sub_1C7BD40(this, svtData);
      }
LABEL_82:
      if ( !v32 )
        goto LABEL_187;
LABEL_89:
      v76 = v32;
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v76,
                                        (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
  }
}


void BattleLogicEnemyAi__resetAct(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  BattleLogicEnemyAi_o *v2; // x19
  struct System_Collections_Generic_List_BattleServantData__o *actlist; // x8
  int32_t size; // w2
  int v5; // w9
  int logic; // w8
  BattleLogicEnemyAi_o *v7; // x19
  unsigned int v8; // w20

  v2 = this;
  if ( (byte_4CF171B & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleServantData__Clear__);
    byte_4CF171B = 1;
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
  LODWORD(this[2].fields.actlist) = 0;
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
      if ( v8 >= logic )
        sub_1C7BD48(this);
      this = (BattleLogicEnemyAi_o *)*((_QWORD *)&v7->fields.logictarget + (int)v8);
      if ( !this )
        break;
      BattleServantData__resetActionCount((BattleServantData_o *)this, 0);
      logic = (int)v7->fields.logic;
      if ( (int)++v8 >= logic )
        return;
    }
LABEL_14:
    sub_1C7BD40(this, method);
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

  if ( (byte_4CF1719 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__);
    byte_4CF1719 = 1;
  }
  BattleLogicEnemyAi__ExcludeDeadFromTempDead(this, *(const MethodInfo **)&ltype);
  TaskAIAttack = BattleLogicEnemyAi__CreateTaskAIAttack(this, v6, data, v7);
  if ( !TaskAIAttack )
    sub_1C7BD40(0, v9);
  v10 = (System_Collections_Generic_List_object__o *)TaskAIAttack;
  if ( TaskAIAttack->fields._size >= 1 )
    BattleLogicEnemyAi__ClearTempDeadSvt(this, v9);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct BattleData_o *v16; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CF1722 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF1722 = 1;
  }
  info = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__getServantData(data, actUniqueId, 0);
  if ( !data )
    goto LABEL_16;
  v8 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0);
  if ( ((unsigned __int8)data & 1) != 0 )
    goto LABEL_14;
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__checkAlivePlayers(data, 0);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_14;
  data = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.aiActMst,
    (int32_t)MasterData_object,
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
                           0);
  if ( !data )
  {
LABEL_14:
    if ( v5 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_16:
    sub_1C7BD40(data, v6);
  }
  data = (BattleData_o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, BattleData_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, const MethodInfo *))this->klass->vtable._30_procAiAct.methodPtr)(
                           this,
                           v8,
                           data,
                           0,
                           info,
                           0,
                           this->klass->vtable._30_procAiAct.method);
  if ( !v5 )
    goto LABEL_16;
  System_Collections_Generic_List_object___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct BattleData_o *v16; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CF1723 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF1723 = 1;
  }
  info = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__getServantData(data, actUniqueId, 0);
  if ( !data )
    goto LABEL_16;
  v8 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_14;
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__checkAlivePlayers(data, 0);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_14;
  data = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.aiActMst,
    (int32_t)MasterData_object,
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
                           0);
  if ( !data )
  {
LABEL_14:
    if ( v5 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_16:
    sub_1C7BD40(data, v6);
  }
  data = (BattleData_o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, BattleData_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, const MethodInfo *))this->klass->vtable._30_procAiAct.methodPtr)(
                           this,
                           v8,
                           data,
                           0,
                           info,
                           0,
                           this->klass->vtable._30_procAiAct.method);
  if ( !v5 )
    goto LABEL_16;
  System_Collections_Generic_List_object___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void BattleLogicEnemyAi__updateActPriorityList(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  BattleLogicEnemyAi_o *v2; // x20
  struct System_Collections_Generic_List_BattleServantData__o *actlist; // x8
  GrandQuestFolderBoardItem_o *p_actlist; // x19
  System_Collections_Generic_List_BattleServantData__o *BaseActPriorityList; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Collections_Generic_List_object__o *klass; // x21
  BattleLogicEnemyAi___c_c *v13; // x0
  System_Predicate_object__o *_9__23_0; // x22
  Il2CppObject *v15; // x23
  struct BattleLogicEnemyAi___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Collections_Generic_List_T__o *All; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  BattleLogicEnemyAi___c_c *v30; // x8
  BattleLogicEnemyAi_o *v31; // x20
  System_Predicate_object__o *_9__23_1; // x21
  Il2CppObject *v33; // x22
  struct BattleLogicEnemyAi___c_StaticFields *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  System_Collections_Generic_List_T__o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7

  v2 = this;
  if ( (byte_4CF171C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleServantData__FindAll__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1C7BAE8(&System_Predicate_BattleServantData__TypeInfo);
    sub_1C7BAE8(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_0__);
    sub_1C7BAE8(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_1__);
    this = (BattleLogicEnemyAi_o *)sub_1C7BAE8(&BattleLogicEnemyAi___c_TypeInfo);
    byte_4CF171C = 1;
  }
  p_actlist = (GrandQuestFolderBoardItem_o *)&v2->fields.actlist;
  actlist = v2->fields.actlist;
  if ( !actlist )
    goto LABEL_27;
  if ( actlist->fields._size <= 0 )
  {
    BaseActPriorityList = BattleLogicEnemyAi__GetBaseActPriorityList(v2, method);
    v2->fields.actlist = BaseActPriorityList;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&v2->fields.actlist,
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
  if ( !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
    v13 = BattleLogicEnemyAi___c_TypeInfo;
  }
  _9__23_0 = (System_Predicate_object__o *)v13->static_fields->__9__23_0;
  if ( !_9__23_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = BattleLogicEnemyAi___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__23_0 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_object____ctor(_9__23_0, v15, Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_0__, 0);
    static_fields = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    static_fields->__9__23_0 = (struct System_Predicate_BattleServantData__o *)_9__23_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__23_0,
      (int32_t)_9__23_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  All = System_Collections_Generic_List_object___FindAll(
          klass,
          (System_Predicate_T__o *)_9__23_0,
          (const MethodInfo_383F50C *)Method_System_Collections_Generic_List_BattleServantData__FindAll__);
  p_actlist->klass = (GrandQuestFolderBoardItem_c *)All;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields.actlist, (int32_t)All, v24, v25, v26, v27, v28, v29);
  if ( !p_actlist->klass )
LABEL_27:
    sub_1C7BD40(this, method);
  if ( SLODWORD(p_actlist->klass->_1.namespaze) <= 0 )
  {
    this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi__GetBaseActPriorityList(v2, method);
    v30 = BattleLogicEnemyAi___c_TypeInfo;
    v31 = this;
    if ( !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v30 = BattleLogicEnemyAi___c_TypeInfo;
    }
    _9__23_1 = (System_Predicate_object__o *)v30->static_fields->__9__23_1;
    if ( !_9__23_1 )
    {
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v30 = BattleLogicEnemyAi___c_TypeInfo;
      }
      v33 = (Il2CppObject *)v30->static_fields->__9;
      _9__23_1 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_BattleServantData__TypeInfo);
      System_Predicate_object____ctor(_9__23_1, v33, Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_1__, 0);
      v34 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v34->__9__23_1 = (struct System_Predicate_BattleServantData__o *)_9__23_1;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v34->__9__23_1, (int32_t)_9__23_1, v35, v36, v37, v38, v39, v40);
    }
    if ( v31 )
    {
      v41 = System_Collections_Generic_List_object___FindAll(
              (System_Collections_Generic_List_object__o *)v31,
              (System_Predicate_T__o *)_9__23_1,
              (const MethodInfo_383F50C *)Method_System_Collections_Generic_List_BattleServantData__FindAll__);
      p_actlist->klass = (GrandQuestFolderBoardItem_c *)v41;
      sub_1C7BA8C(p_actlist, (int32_t)v41, v42, v43, v44, v45, v46, v47);
      return;
    }
    goto LABEL_27;
  }
}


void BattleLogicEnemyAi___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CF1853 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleLogicEnemyAi___c_TypeInfo);
    byte_4CF1853 = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(BattleLogicEnemyAi___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicEnemyAi___c_TypeInfo->static_fields->__9 = (struct BattleLogicEnemyAi___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)BattleLogicEnemyAi___c_TypeInfo->static_fields,
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
    sub_1C7BD40(this, 0);
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
    sub_1C7BD40(this, 0);
  return BattleServantData__GetOriginalRemainingNeedActCount(x, 0);
}


int32_t BattleLogicEnemyAi___c___GetBaseActPriorityList_b__24_2(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return x->fields.actPriority;
}


int32_t BattleLogicEnemyAi___c___GetBaseActPriorityList_b__24_3(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return BattleServantData__getDeckIndex(x, 0);
}


bool BattleLogicEnemyAi___c___updateActPriorityList_b__23_0(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return BattleServantData__GetRemainingNeedActCount(x, 1, 0) > 0;
}


bool BattleLogicEnemyAi___c___updateActPriorityList_b__23_1(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
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
    sub_1C7BD40(this, 0);
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
    sub_1C7BD40(this, 0);
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
    sub_1C7BD40(0, x);
  return BattleLogicEnemyAi__ReplaceCommandTaskBySealStatus(_4__this, this->fields.svtData, x, 0);
}