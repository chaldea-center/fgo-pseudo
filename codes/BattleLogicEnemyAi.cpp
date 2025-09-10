void BattleLogicEnemyAi___ctor(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4C2A31B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_4C2A31B = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this->fields.actlist = (struct System_Collections_Generic_List_BattleServantData__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.actlist, (int32_t)v3, v4, v5);
  BattleLogicBaseAi___ctor((BattleLogicBaseAi_o *)this, v6);
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
    sub_1C2D6EC(this, svtData);
  }
  ++data->fields.countEnemyAttack;
}


void BattleLogicEnemyAi__AddTempDeadSvt(BattleLogicEnemyAi_o *this, int32_t svtUniqueId, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x0

  if ( (byte_4C2A313 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4C2A313 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
    System_Collections_Generic_HashSet_int___Add(
      tempDeadSvtHash,
      svtUniqueId,
      (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
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

  if ( (byte_4C2A317 & 1) == 0 )
  {
    sub_1C2D490(&AiLogic_AiInfo_CheckedInfo_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_WeightRate_int___ctor__);
    sub_1C2D490(&Method_WeightRate_int__getCount__);
    sub_1C2D490(&Method_WeightRate_int__getData__);
    sub_1C2D490(&Method_WeightRate_int__getTotalWeight__);
    sub_1C2D490(&Method_WeightRate_int__setWeight__);
    sub_1C2D490(&WeightRate_int__TypeInfo);
    byte_4C2A317 = 1;
  }
  v11 = (WeightRate_int__o *)sub_1C2D6DC(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v11, (const MethodInfo_3B7B4CC *)Method_WeightRate_int___ctor__);
  if ( actType <= 13 )
  {
    switch ( actType )
    {
      case 10:
        if ( skillFlg )
          BattleLogicEnemyAi__SetSkillRandomWeightSameProbability(Int, v11, 10, svtData, v14);
        if ( !v11 )
          goto LABEL_46;
        if ( WeightRate_int___getCount(v11, (const MethodInfo_3B7ADA4 *)Method_WeightRate_int__getCount__) < 1 )
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
          (const MethodInfo_3B7A9E8 *)Method_WeightRate_int__setWeight__);
        if ( skillFlg )
          BattleLogicEnemyAi__SetSkillRandomWeightSameProbability(v20, v11, 10, svtData, v21);
LABEL_31:
        Next = BattleRandom__getNext(v11->fields.totalweight, 0);
        Data = WeightRate_int___getData(v11, Next, (const MethodInfo_3B7AE5C *)Method_WeightRate_int__getData__);
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
    sub_1C2D6EC(Int, v13);
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
  Int = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Int )
    goto LABEL_46;
  Int = (BattleLogicEnemyAi_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Int,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  v27 = (AiLogic_AiInfo_CheckedInfo_o *)sub_1C2D6DC(AiLogic_AiInfo_CheckedInfo_TypeInfo);
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
  const MethodInfo *v23; // x2
  __int64 v24; // x2
  __int64 v25; // x25
  BattleLogicTarget_o *v26; // x22
  int32_t v27; // w26
  int32_t v28; // w23
  Il2CppClass *v29; // x27
  AiLogic_o *aiLogic; // x20
  AiLogic_AiInfo_CheckedInfo_o *v32; // [xsp+20h] [xbp-80h]
  AiLogic_AiInfo_o *v33; // [xsp+28h] [xbp-78h]
  __int64 v34; // [xsp+30h] [xbp-70h]
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4C2A31A & 1) == 0 )
  {
    sub_1C2D490(&AiEntity_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_AiActMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
    sub_1C2D490(&int___TypeInfo);
    byte_4C2A31A = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !aiBaseEntity || !Master_object )
    goto LABEL_41;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          aiBaseEntity->fields.aiActId,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__) )
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
  Master_object = sub_1C2D538(int___TypeInfo, 1);
  if ( !entity )
    goto LABEL_41;
  if ( !v10 )
    goto LABEL_41;
  v33 = aiInfo;
  v34 = Master_object;
  Master_object = (__int64)this->fields.data;
  v32 = v12;
  if ( !Master_object )
    goto LABEL_41;
  logictarget = this->fields.logictarget;
  monitor = (int32_t)entity[1].monitor;
  uniqueId = v10->fields.uniqueId;
  klass = entity[2].klass;
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList((BattleData_o *)Master_object, 0, 0);
  aiActEnt = entity;
  v22 = FieldPlayerServantIDList;
  Master_object = BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(this, v15, v23);
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
  if ( !v34 )
    goto LABEL_41;
  if ( !*(_DWORD *)(v34 + 24) )
    goto LABEL_42;
  *(_DWORD *)(v34 + 32) = Master_object;
  Master_object = sub_1C2D538(int___TypeInfo, 1);
  if ( !entity )
    goto LABEL_41;
  v25 = Master_object;
  Master_object = (__int64)this->fields.data;
  if ( !Master_object
    || (v26 = this->fields.logictarget,
        v27 = (int32_t)entity[1].monitor,
        v28 = v10->fields.uniqueId,
        v29 = entity[2].klass,
        Master_object = (__int64)BattleData__getFieldEnemyServantIDList((BattleData_o *)Master_object, 0, 0),
        !v26)
    || (Master_object = BattleLogicTarget__getTargetAiAct(
                          v26,
                          v27,
                          v28,
                          (System_Int32_array *)v29,
                          (System_Int32_array *)Master_object,
                          0,
                          0,
                          0,
                          (AiActEntity_o *)entity,
                          1,
                          0),
        !v25) )
  {
LABEL_41:
    sub_1C2D6EC(Master_object, v8);
  }
  if ( !*(_DWORD *)(v25 + 24) )
LABEL_42:
    sub_1C2D6F4(Master_object, v8, v24);
  *(_DWORD *)(v25 + 32) = Master_object;
  Master_object = (__int64)entity;
  if ( !entity )
    goto LABEL_41;
  aiLogic = this->fields.aiLogic;
  Master_object = AiActEntity__GetNoTargetNoActionType((AiActEntity_o *)entity, 0);
  if ( !aiLogic )
    goto LABEL_41;
  if ( AiLogic__IsNoTargetNoActionTask(aiLogic, Master_object, (System_Int32_array *)v34, (System_Int32_array *)v25, 0) )
    return 0;
  AiLogic_AiInfo__SetCheckedResult(v33, aiBaseEntity, v32, 0);
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
    sub_1C2D6EC(data, *(_QWORD *)&actUniqueId);
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

  if ( (byte_4C2A319 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2A319 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
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
    sub_1C2D6EC(Instance, v8);
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
    sub_1C2D6EC(data, *(_QWORD *)&actUniqueId);
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
    sub_1C2D6EC(this, skillFlg);
  if ( !BattleServantData__isUseSelfSkill(servantData, skillIndex, 0) )
    *actType = 2;
}


void BattleLogicEnemyAi__ClearTempDeadSvt(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x0

  if ( (byte_4C2A314 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Clear__);
    byte_4C2A314 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
    System_Collections_Generic_HashSet_int___Clear(
      tempDeadSvtHash,
      (const MethodInfo_363AE14 *)Method_System_Collections_Generic_HashSet_int__Clear__);
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
    sub_1C2D6EC(0, actUniqueId);
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
  const MethodInfo *v12; // x3
  struct BattleData_o *data; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C2A30F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2A30F = 1;
  }
  info = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.aiActMst, (int32_t)MasterData_object, v11, v12);
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
                                        (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_11:
    sub_1C2D6EC(Instance, v9);
  }
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, DataManager_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, const MethodInfo *))this->klass->vtable._21_procAiAct.methodPtr)(
                                this,
                                svtData,
                                Instance,
                                0,
                                info,
                                0,
                                this->klass->vtable._21_procAiAct.method);
  if ( !v7 )
    goto LABEL_11;
  System_Collections_Generic_List_object___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1C2D6EC(0, actUniqueId);
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
    sub_1C2D6EC(this, svtData);
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
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1
  BattleServantData_o *v18; // x21
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  BattleCommandData_o *TreasureDvcCommand; // x0
  const MethodInfo *v22; // x2
  struct AiActMaster_o **p_aiActMst; // x26
  BattleLogicTask_o *v24; // x23
  Il2CppObject *v25; // x24
  char v26; // w24
  struct BattleData_o *v27; // x8
  struct BattleData_o *v28; // x8
  struct BattleData_o *v29; // x8
  BattleLogicEnemyAi_c *v30; // x9
  struct AiEntity_o *noThinkAiEnt; // x2
  struct BattleData_o *v32; // x8
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct BattleLogicTarget_o *logictarget; // x8
  struct System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x1
  AiEntity_o *v37; // x25
  BattleLogicTarget_o *v38; // x26
  int32_t uniqueId; // w28
  Il2CppClass *klass; // x29
  System_Int32_array *FieldPlayerServantIDList; // x0
  Il2CppObject *v42; // x27
  System_Int32_array *v43; // x22
  const MethodInfo *v44; // x2
  int32_t TargetAiAct; // w0
  BattleLogicTarget_o *v46; // x25
  int32_t v47; // w26
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  BattleCommandData_o *v50; // x22
  BattleComboData_o *v51; // x24
  struct BattleData_o *v52; // x8
  int32_t TreasureDvcId; // w0
  __int64 v54; // x22
  __int64 v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x3
  __int64 v60; // x0
  int32_t monitor; // [xsp+24h] [xbp-7Ch]
  AiLogic_AiInfo_o *v62; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+30h] [xbp-70h] BYREF
  AiLogic_AiInfo_o *info; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4C2A306 & 1) == 0 )
  {
    sub_1C2D490(&BattleComboData_TypeInfo);
    sub_1C2D490(&BattleCommandData_TypeInfo);
    sub_1C2D490(&Method_BattleLogicEnemyAi_IsNotTempDeadSvt__);
    sub_1C2D490(&BattleLogicTask___TypeInfo);
    sub_1C2D490(&BattleLogicTask_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C2D490(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
    sub_1C2D490(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleServantData__RemoveAt__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleServantData__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2A306 = 1;
  }
  entity = 0;
  info = 0;
  v62 = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  v11 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleServantData__bool__TypeInfo);
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
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_AiActMaster___);
      this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.aiActMst, (int32_t)MasterData_object, v15, v16);
      BattleLogicEnemyAi__updateActPriorityList(this, v17);
      Instance = (__int64)this->fields.actlist;
      if ( Instance )
      {
        if ( *(int *)(Instance + 24) <= 0 )
        {
          v27 = this->fields.data;
          if ( v27 )
          {
            ++v27->fields.countEnemyAttack;
            return (System_Collections_Generic_List_BattleLogicTask__o *)v6;
          }
        }
        else
        {
          Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                0,
                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
          if ( this->fields.actlist )
          {
            v18 = (BattleServantData_o *)Instance;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this->fields.actlist,
              0,
              (const MethodInfo_378B358 *)Method_System_Collections_Generic_List_BattleServantData__RemoveAt__);
            if ( v18 )
            {
              if ( !BattleServantData__isAlive(v18, 0, 0)
                || !BattleLogicEnemyAi__IsNotTempDeadSvt(this, v18, v19)
                || !v18->fields.isEntry )
              {
                return (System_Collections_Generic_List_BattleLogicTask__o *)v6;
              }
              if ( !BattleServantData__isAction(v18, 0) )
              {
LABEL_47:
                BattleLogicEnemyAi__AddActCount(this, v18, v20);
                return (System_Collections_Generic_List_BattleLogicTask__o *)v6;
              }
              Instance = BattleServantData__isTDSeraled(v18, 0);
              if ( (Instance & 1) == 0
                && (Instance = BattleServantData__checkUseTDvc(v18, this->fields.data, 1, 0), (Instance & 1) != 0)
                && (TreasureDvcCommand = BattleServantData__MakeTreasureDvcCommand(v18, 0),
                    Instance = BattleServantData__IsCardAction(v18, TreasureDvcCommand, 0),
                    (Instance & 1) != 0) )
              {
                Instance = (__int64)BattleLogicEnemyAi__taskAIEnemyMaxNp(this, v18->fields.uniqueId, v22);
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
                v24 = (BattleLogicTask_o *)sub_1C2D6DC(BattleLogicTask_TypeInfo);
                BattleLogicTask___ctor(v24, 0);
                if ( v24 )
                {
                  BattleLogicTask__setActor(v24, 3, v18->fields.uniqueId, 0);
                  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( Instance )
                  {
                    v25 = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                    Instance = BattleServantData__getTreasureDvcId(v18, 1, 0, 0);
                    if ( v25 )
                    {
                      Instance = (__int64)TreasureDvcLvMaster__GetEntity(
                                            (TreasureDvcLvMaster_o *)v25,
                                            Instance,
                                            v18->fields.treasuredvcLevel,
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
                        v26 = Instance;
                      }
                      else
                      {
                        v26 = 1;
                      }
                      v32 = this->fields.data;
                      if ( v32 )
                      {
                        Instance = (__int64)this->fields.aiLogic;
                        if ( Instance )
                        {
                          Instance = (__int64)AiLogic__getAction(
                                                (AiLogic_o *)Instance,
                                                v18,
                                                8,
                                                data->fields.turnCount,
                                                v32->fields.countEnemyAttack,
                                                (BattleLogicBaseAi_o *)this,
                                                &v62,
                                                0,
                                                0);
                          entity = 0;
                          logictarget = this->fields.logictarget;
                          if ( logictarget )
                          {
                            tempDeadSvtHash = this->fields.tempDeadSvtHash;
                            v37 = (AiEntity_o *)Instance;
                            logictarget->fields.tempDeadSvtHash = tempDeadSvtHash;
                            sub_1C2D434(
                              (CGThumbnailListItem_o *)&logictarget->fields.tempDeadSvtHash,
                              (int32_t)tempDeadSvtHash,
                              v33,
                              v34);
                            if ( !v37 )
                              goto LABEL_58;
                            Instance = (__int64)*p_aiActMst;
                            if ( !*p_aiActMst )
                              goto LABEL_68;
                            Instance = DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                         &entity,
                                         v37->fields.aiActId,
                                         (const MethodInfo_3387DE4 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
                            if ( (Instance & 1) != 0 )
                            {
                              if ( !entity )
                                goto LABEL_68;
                              v38 = this->fields.logictarget;
                              uniqueId = v18->fields.uniqueId;
                              klass = entity[2].klass;
                              monitor = (int32_t)entity[1].monitor;
                              FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0, 0);
                              v42 = entity;
                              v43 = FieldPlayerServantIDList;
                              Instance = BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(this, v37, v44);
                              if ( !v38 )
                                goto LABEL_68;
                              TargetAiAct = BattleLogicTarget__getTargetAiAct(
                                              v38,
                                              monitor,
                                              uniqueId,
                                              (System_Int32_array *)klass,
                                              v43,
                                              v26 & 1,
                                              0,
                                              0,
                                              (AiActEntity_o *)v42,
                                              Instance & 1,
                                              0);
                            }
                            else
                            {
LABEL_58:
                              v46 = this->fields.logictarget;
                              v47 = v18->fields.uniqueId;
                              Instance = (__int64)BattleData__getFieldPlayerServantIDList(data, 0, 0);
                              if ( !v46 )
                                goto LABEL_68;
                              TargetAiAct = BattleLogicTarget__getTargetAiAct(
                                              v46,
                                              1,
                                              v47,
                                              0,
                                              (System_Int32_array *)Instance,
                                              v26 & 1,
                                              0,
                                              0,
                                              (AiActEntity_o *)entity,
                                              1,
                                              0);
                            }
                            BattleLogicTask__setTarget(v24, TargetAiAct, 0);
                            Instance = (__int64)this->fields.logictarget;
                            if ( Instance )
                            {
                              *(_QWORD *)(Instance + 24) = 0;
                              sub_1C2D434((CGThumbnailListItem_o *)(Instance + 24), 0, v48, v49);
                              v50 = (BattleCommandData_o *)sub_1C2D6DC(BattleCommandData_TypeInfo);
                              BattleCommandData___ctor(v50, 0);
                              Instance = BattleServantData__getTreasureDvcCardId(v18, 0);
                              if ( v50 )
                              {
                                v50->fields._type = Instance;
                                v50->fields.svtlimit = BattleServantData__getDispLimitCount(v18, 1, 0);
                                v50->fields.uniqueId = v18->fields.uniqueId;
                                v50->fields.svtId = BattleServantData__getSvtId(v18, 0);
                                v50->fields.treasureDvc = BattleServantData__getTreasureDvcId(v18, 1, 0, 0);
                                v51 = (BattleComboData_o *)sub_1C2D6DC(BattleComboData_TypeInfo);
                                BattleComboData___ctor(v51, 0);
                                v52 = this->fields.data;
                                if ( v52 )
                                {
                                  BattleLogicTask__setActionCommand(v24, v51, v50, v52->fields.countEnemyAttack, 0);
                                  TreasureDvcId = BattleServantData__getTreasureDvcId(v18, 1, 0, 0);
                                  BattleLogicTask__setActionTreasureDvc(v24, TreasureDvcId, 1, 0);
                                  Instance = sub_1C2D538(BattleLogicTask___TypeInfo, 1);
                                  if ( Instance )
                                  {
                                    v54 = Instance;
                                    v55 = sub_1C2D5CC(v24, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
                                    if ( !v55 )
                                    {
                                      v60 = sub_1C2D710(0);
                                      sub_1C2D5B8(v60, 0);
                                    }
                                    if ( !*(_DWORD *)(v54 + 24) )
                                      sub_1C2D6F4(v55, v56, v57);
                                    *(_QWORD *)(v54 + 32) = v24;
                                    sub_1C2D434((CGThumbnailListItem_o *)(v54 + 32), (int32_t)v24, v57, v58);
                                    Instance = (__int64)BattleLogicEnemyAi__ReplaceCommandTasksBySealStatus(
                                                          this,
                                                          v18,
                                                          (BattleLogicTask_array *)v54,
                                                          v59);
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
                v28 = this->fields.data;
                if ( v28 )
                {
                  Instance = (__int64)this->fields.aiLogic;
                  if ( Instance )
                  {
                    Instance = (__int64)AiLogic__getAction(
                                          (AiLogic_o *)Instance,
                                          v18,
                                          1,
                                          data->fields.turnCount,
                                          v28->fields.countEnemyAttack,
                                          (BattleLogicBaseAi_o *)this,
                                          &info,
                                          0,
                                          0);
                    v29 = this->fields.data;
                    if ( Instance )
                    {
                      if ( !v29 )
                        goto LABEL_68;
                      v30 = this->klass;
                      noThinkAiEnt = (struct AiEntity_o *)Instance;
                    }
                    else
                    {
                      if ( !v29 )
                        goto LABEL_68;
                      v30 = this->klass;
                      noThinkAiEnt = this->fields.noThinkAiEnt;
                    }
                    Instance = ((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, struct AiEntity_o *, _QWORD, AiLogic_AiInfo_o *, __int64, const MethodInfo *))v30->vtable._21_procAiAct.methodPtr)(
                                 this,
                                 v18,
                                 noThinkAiEnt,
                                 (unsigned int)v29->fields.countEnemyAttack,
                                 info,
                                 1,
                                 v30->vtable._21_procAiAct.method);
                    if ( v6 )
                    {
                      v8 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
LABEL_46:
                      System_Collections_Generic_List_object___AddRange(
                        v6,
                        v8,
                        (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
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
    sub_1C2D6EC(Instance, v8);
  }
  return (System_Collections_Generic_List_BattleLogicTask__o *)v6;
}


void BattleLogicEnemyAi__ExcludeDeadFromTempDead(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x20
  Il2CppObject *data; // x19
  System_Predicate_int__o *v5; // x21

  if ( (byte_4C2A315 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleData_IsNotAliveTarget__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
    sub_1C2D490(&System_Predicate_int__TypeInfo);
    byte_4C2A315 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
  {
    data = (Il2CppObject *)this->fields.data;
    v5 = (System_Predicate_int__o *)sub_1C2D6DC(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(v5, data, Method_BattleData_IsNotAliveTarget__, 0);
    System_Collections_Generic_HashSet_int___RemoveWhere(
      tempDeadSvtHash,
      (System_Predicate_T__o *)v5,
      (const MethodInfo_363BEB8 *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
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
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  BattleLogicEnemyAi___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x19
  System_Func_object__int__o *_9__24_1; // x20
  Il2CppObject *v16; // x21
  struct BattleLogicEnemyAi___c_StaticFields *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v20; // x0
  BattleLogicEnemyAi___c_c *v21; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v22; // x19
  System_Func_object__int__o *_9__24_2; // x20
  Il2CppObject *v24; // x21
  struct BattleLogicEnemyAi___c_StaticFields *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v28; // x0
  BattleLogicEnemyAi___c_c *v29; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v30; // x19
  System_Func_object__int__o *_9__24_3; // x20
  Il2CppObject *v32; // x21
  struct BattleLogicEnemyAi___c_StaticFields *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0

  if ( (byte_4C2A309 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderByDescending_BattleServantData__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_BattleServantData___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C2D490(&System_Func_BattleServantData__int__TypeInfo);
    sub_1C2D490(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C2D490(&Method_BattleLogicEnemyAi___c__GetBaseActPriorityList_b__24_0__);
    sub_1C2D490(&Method_BattleLogicEnemyAi___c__GetBaseActPriorityList_b__24_1__);
    sub_1C2D490(&Method_BattleLogicEnemyAi___c__GetBaseActPriorityList_b__24_2__);
    sub_1C2D490(&Method_BattleLogicEnemyAi___c__GetBaseActPriorityList_b__24_3__);
    sub_1C2D490(&BattleLogicEnemyAi___c_TypeInfo);
    byte_4C2A309 = 1;
  }
  data = this->fields.data;
  if ( !data )
    sub_1C2D6EC(0, method);
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
    _9__24_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__24_0, v8, Method_BattleLogicEnemyAi___c__GetBaseActPriorityList_b__24_0__, 0);
    static_fields = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    static_fields->__9__24_0 = (struct System_Func_BattleServantData__bool__o *)_9__24_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__24_0, (int32_t)_9__24_0, v10, v11);
  }
  v12 = System_Linq_Enumerable__Where_object_(
          v6,
          (System_Func_TSource__bool__o *)_9__24_0,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v13 = BattleLogicEnemyAi___c_TypeInfo;
  v14 = v12;
  if ( !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
    v13 = BattleLogicEnemyAi___c_TypeInfo;
  }
  _9__24_1 = (System_Func_object__int__o *)v13->static_fields->__9__24_1;
  if ( !_9__24_1 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = BattleLogicEnemyAi___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__24_1 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__24_1, v16, Method_BattleLogicEnemyAi___c__GetBaseActPriorityList_b__24_1__, 0);
    v17 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    v17->__9__24_1 = (struct System_Func_BattleServantData__int__o *)_9__24_1;
    sub_1C2D434((CGThumbnailListItem_o *)&v17->__9__24_1, (int32_t)_9__24_1, v18, v19);
  }
  v20 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v14,
          (System_Func_TSource__TKey__o *)_9__24_1,
          (const MethodInfo_30FE624 *)Method_System_Linq_Enumerable_OrderByDescending_BattleServantData__int___);
  v21 = BattleLogicEnemyAi___c_TypeInfo;
  v22 = v20;
  if ( !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
    v21 = BattleLogicEnemyAi___c_TypeInfo;
  }
  _9__24_2 = (System_Func_object__int__o *)v21->static_fields->__9__24_2;
  if ( !_9__24_2 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = BattleLogicEnemyAi___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__24_2 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__24_2, v24, Method_BattleLogicEnemyAi___c__GetBaseActPriorityList_b__24_2__, 0);
    v25 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    v25->__9__24_2 = (struct System_Func_BattleServantData__int__o *)_9__24_2;
    sub_1C2D434((CGThumbnailListItem_o *)&v25->__9__24_2, (int32_t)_9__24_2, v26, v27);
  }
  v28 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v22,
          (System_Func_TSource__TKey__o *)_9__24_2,
          (const MethodInfo_310D87C *)Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
  v29 = BattleLogicEnemyAi___c_TypeInfo;
  v30 = v28;
  if ( !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
    v29 = BattleLogicEnemyAi___c_TypeInfo;
  }
  _9__24_3 = (System_Func_object__int__o *)v29->static_fields->__9__24_3;
  if ( !_9__24_3 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = BattleLogicEnemyAi___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v29->static_fields->__9;
    _9__24_3 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_BattleServantData__int__TypeInfo);
    System_Func_object__int____ctor(_9__24_3, v32, Method_BattleLogicEnemyAi___c__GetBaseActPriorityList_b__24_3__, 0);
    v33 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    v33->__9__24_3 = (struct System_Func_BattleServantData__int__o *)_9__24_3;
    sub_1C2D434((CGThumbnailListItem_o *)&v33->__9__24_3, (int32_t)_9__24_3, v34, v35);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__int_(
                                                               v30,
                                                               (System_Func_TSource__TKey__o *)_9__24_3,
                                                               (const MethodInfo_310D87C *)Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
  return (System_Collections_Generic_List_BattleServantData__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v36,
                                                                   (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_BattleServantData___);
}


System_Int32_array *BattleLogicEnemyAi__GetCommandArray(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *data; // x21
  BattleData_o *StageEntity; // x0
  __int64 v7; // x1

  if ( (byte_4C2A312 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A312 = 1;
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
    sub_1C2D6EC(StageEntity, v7);
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
  const MethodInfo *v7; // x3
  __int64 v8; // x1
  AiLogic_o *aiLogic; // x0
  AiEntity_o *v10; // x20
  struct AiEntity_o **p_noThinkAiEnt; // x19
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct AiEntity_o *v14; // x19

  if ( (byte_4C2A302 & 1) == 0 )
  {
    sub_1C2D490(&AiEntity_TypeInfo);
    sub_1C2D490(&AiLogic_TypeInfo);
    sub_1C2D490(&StringLiteral_9288/*"NOTHINK_AIACTID"*/);
    byte_4C2A302 = 1;
  }
  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, method);
  v5 = (AiLogic_o *)sub_1C2D6DC(AiLogic_TypeInfo);
  AiLogic___ctor(v5, 0);
  this->fields.aiLogic = v5;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.aiLogic, (int32_t)v5, v6, v7);
  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    goto LABEL_6;
  AiLogic__Initialize(aiLogic, data, 0);
  v10 = (AiEntity_o *)sub_1C2D6DC(AiEntity_TypeInfo);
  AiEntity___ctor(v10, 0);
  this->fields.noThinkAiEnt = v10;
  p_noThinkAiEnt = &this->fields.noThinkAiEnt;
  sub_1C2D434((CGThumbnailListItem_o *)p_noThinkAiEnt, (int32_t)v10, v12, v13);
  v14 = *p_noThinkAiEnt;
  aiLogic = (AiLogic_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_9288/*"NOTHINK_AIACTID"*/, 0);
  if ( !v14 )
LABEL_6:
    sub_1C2D6EC(aiLogic, v8);
  v14->fields.aiActId = (int)aiLogic;
}


bool BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(
        BattleLogicEnemyAi_o *this,
        AiEntity_o *aiEnt,
        const MethodInfo *method)
{
  BattleLogic_o *logic; // x0
  int32_t LogicType; // w0

  logic = this->fields.logic;
  if ( !logic )
    sub_1C2D6EC(0, aiEnt);
  LogicType = BattleLogic__GetLogicType(logic, 0);
  if ( aiEnt )
    return AiBaseEntity__IsDeadToEnableUpHate((AiBaseEntity_o *)aiEnt, LogicType == 42, 0);
  else
    return LogicType == 42;
}


bool BattleLogicEnemyAi__IsNotTempDeadSvt(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleLogicEnemyAi_o *v4; // x20

  v4 = this;
  if ( (byte_4C2A316 & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_1C2D490(&Method_BasicHelper_ContainsSelfNotNull_int___);
    byte_4C2A316 = 1;
  }
  if ( !svtData )
    sub_1C2D6EC(this, svtData);
  return !BasicHelper__ContainsSelfNotNull_int_(
            (System_Collections_Generic_HashSet_T__o *)v4->fields.tempDeadSvtHash,
            svtData->fields.uniqueId,
            (const MethodInfo_30B8270 *)Method_BasicHelper_ContainsSelfNotNull_int___);
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
      sub_1C2D6EC(IsSealedCommandTask, v8);
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
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Func_object__object__o *v14; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_4C2A311 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_BattleLogicTask__BattleLogicTask___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
    sub_1C2D490(&System_Func_BattleLogicTask__BattleLogicTask__TypeInfo);
    sub_1C2D490(&Method_BattleLogicEnemyAi___c__DisplayClass37_0__ReplaceCommandTasksBySealStatus_b__0__);
    sub_1C2D490(&BattleLogicEnemyAi___c__DisplayClass37_0_TypeInfo);
    byte_4C2A311 = 1;
  }
  v7 = sub_1C2D6DC(BattleLogicEnemyAi___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = svtData;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 24), (int32_t)svtData, v12, v13);
  v14 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_BattleLogicTask__BattleLogicTask__TypeInfo);
  System_Func_object__object____ctor(
    v14,
    (Il2CppObject *)v7,
    Method_BattleLogicEnemyAi___c__DisplayClass37_0__ReplaceCommandTasksBySealStatus_b__0__,
    0);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)derivedTasks,
                                                               (System_Func_TSource__TResult__o *)v14,
                                                               (const MethodInfo_310501C *)Method_System_Linq_Enumerable_Select_BattleLogicTask__BattleLogicTask___);
  return (BattleLogicTask_array *)System_Linq_Enumerable__ToArray_object_(
                                    v15,
                                    (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
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
  if ( (byte_4C2A318 & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_1C2D490(&Method_WeightRate_int__setWeight__);
    byte_4C2A318 = 1;
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
      (const MethodInfo_3B7A9E8 *)Method_WeightRate_int__setWeight__);
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
      (const MethodInfo_3B7A9E8 *)Method_WeightRate_int__setWeight__);
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
        (const MethodInfo_3B7A9E8 *)Method_WeightRate_int__setWeight__);
      return;
    }
LABEL_14:
    sub_1C2D6EC(this, weight);
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
  const MethodInfo *v6; // x3

  BattleLogicEnemyAi__ClearTempDeadSvt(this, *(const MethodInfo **)&ltype);
  this->fields.tempDeadSvtHash = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.tempDeadSvtHash, 0, v5, v6);
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
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4C2A304 & 1) == 0 )
  {
    sub_1C2D490(&BattleLogicTask_TypeInfo);
    sub_1C2D490(&CheckEnemyRelationInterruptProcess_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4C2A304 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v6 = sub_1C2D6DC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v6, 0);
  isClearTempDeadSvtPrevAct = this->fields.isClearTempDeadSvtPrevAct;
  v8 = (CheckEnemyRelationInterruptProcess_o *)sub_1C2D6DC(CheckEnemyRelationInterruptProcess_TypeInfo);
  CheckEnemyRelationInterruptProcess___ctor(v8, isClearTempDeadSvtPrevAct, 0);
  if ( !v6
    || (*(_QWORD *)(v6 + 296) = v8,
        sub_1C2D434((CGThumbnailListItem_o *)(v6 + 296), (int32_t)v8, v11, v12),
        *(_BYTE *)(v6 + 265) = 1,
        !v5)
    || (items = v5->fields._items,
        v16 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v5->fields._version,
        !items) )
  {
    sub_1C2D6EC(v9, v10);
  }
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v6,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v6;
    sub_1C2D434((CGThumbnailListItem_o *)(v18 + 4), v6, v13, v14);
  }
  this->fields.isClearTempDeadSvtPrevAct = 0;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *BattleLogicEnemyAi__TaskAIAttackStart(
        BattleLogicEnemyAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v5; // x20
  struct System_Collections_Generic_HashSet_int__o **p_tempDeadSvtHash; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C2A303 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4C2A303 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_363A780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.tempDeadSvtHash = v5;
  p_tempDeadSvtHash = &this->fields.tempDeadSvtHash;
  sub_1C2D434((CGThumbnailListItem_o *)p_tempDeadSvtHash, (int32_t)v5, v7, v8);
  *((_BYTE *)p_tempDeadSvtHash + 8) = 0;
  return 0;
}


void BattleLogicEnemyAi__addEnemyActPriorityList(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *inSvtData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *actlist; // x0

  if ( (byte_4C2A30A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleServantData__Insert__);
    byte_4C2A30A = 1;
  }
  actlist = (System_Collections_Generic_List_object__o *)this->fields.actlist;
  if ( !actlist )
    sub_1C2D6EC(0, inSvtData);
  System_Collections_Generic_List_object___Insert(
    actlist,
    0,
    (Il2CppObject *)inSvtData,
    (const MethodInfo_378A934 *)Method_System_Collections_Generic_List_BattleServantData__Insert__);
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
  __int64 v15; // x2
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v17; // x24
  unsigned __int64 v18; // x25
  int32_t Next; // w0
  int32_t Data; // w23
  int32_t SvtId; // w25
  int32_t DispLimitCount; // w26
  BattleCommandData_o *v23; // x23
  int32_t v24; // w1
  BattleComboData_o *v25; // x20

  if ( (byte_4C2A310 & 1) == 0 )
  {
    sub_1C2D490(&BattleComboData_TypeInfo);
    sub_1C2D490(&BattleCommandData_TypeInfo);
    sub_1C2D490(&BattleCommand_TypeInfo);
    sub_1C2D490(&BattleLogicTask_TypeInfo);
    sub_1C2D490(&Method_WeightRate_int___ctor__);
    sub_1C2D490(&Method_WeightRate_int__getData__);
    sub_1C2D490(&Method_WeightRate_int__getTotalWeight__);
    sub_1C2D490(&Method_WeightRate_int__setWeight__);
    sub_1C2D490(&WeightRate_int__TypeInfo);
    byte_4C2A310 = 1;
  }
  v10 = (BattleLogicTask_o *)sub_1C2D6DC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v10, 0);
  if ( !v10 )
    goto LABEL_23;
  BattleLogicTask__setTarget(v10, targetId, 0);
  if ( !svtData )
    goto LABEL_23;
  BattleLogicTask__setActor(v10, 3, svtData->fields.uniqueId, 0);
  if ( SvtType__IsEnemy_40233216(svtData->fields.svtType, 0) )
  {
    Type = 10;
    goto LABEL_17;
  }
  v14 = (WeightRate_int__o *)sub_1C2D6DC(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v14, (const MethodInfo_3B7B4CC *)Method_WeightRate_int___ctor__);
  CommandList = BattleServantData__getCommandList(svtData, 0);
  if ( !CommandList )
    goto LABEL_23;
  max_length = CommandList->max_length;
  v17 = CommandList;
  if ( (int)max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)max_length )
        sub_1C2D6F4(CommandList, v12, v15);
      if ( !v14 )
        break;
      WeightRate_int___setWeight(
        v14,
        10,
        v17->m_Items[v18],
        (const MethodInfo_3B7A9E8 *)Method_WeightRate_int__setWeight__);
      LODWORD(max_length) = v17->max_length;
      if ( (__int64)++v18 >= (int)max_length )
        goto LABEL_13;
    }
LABEL_23:
    sub_1C2D6EC(CommandList, v12);
  }
LABEL_13:
  if ( !v14 )
    goto LABEL_23;
  Next = BattleRandom__getNext(v14->fields.totalweight, 0);
  Data = WeightRate_int___getData(v14, Next, (const MethodInfo_3B7AE5C *)Method_WeightRate_int__getData__);
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  Type = BattleCommand__getType(Data, 0);
LABEL_17:
  SvtId = BattleServantData__getSvtId(svtData, 0);
  DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0);
  v23 = (BattleCommandData_o *)sub_1C2D6DC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_46333400(v23, Type, SvtId, DispLimitCount, 0, -1, 0);
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
  v10->fields.isNoCriticalOnAttack = baseTask->fields.isNoCriticalOnAttack;
  v25 = (BattleComboData_o *)sub_1C2D6DC(BattleComboData_TypeInfo);
  BattleComboData___ctor(v25, 0);
  BattleLogicTask__setActionCommand(v10, v25, v23, countAct, 0);
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
    sub_1C2D6EC(0, method);
  return BattleData__getFieldPlayerServantIDList(data, 0, 0);
}


System_Int32_array *BattleLogicEnemyAi__get_PartySvtIds(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1C2D6EC(0, method);
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
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x6
  BattleLogicTask_array *v19; // x20
  const MethodInfo *v20; // x3
  BattleLogicTask_array *v21; // x19
  System_Action_object__o *v22; // x21

  if ( (byte_4C2A30B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_BattleLogicTask__TypeInfo);
    sub_1C2D490(&Method_BasicHelper_ForEach_BattleLogicTask___);
    sub_1C2D490(&Method_BattleLogicEnemyAi___c__DisplayClass26_0__procAiAct_b__0__);
    sub_1C2D490(&BattleLogicEnemyAi___c__DisplayClass26_0_TypeInfo);
    byte_4C2A30B = 1;
  }
  v13 = sub_1C2D6DC(BattleLogicEnemyAi___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    sub_1C2D6EC(v14, v15);
  *(_QWORD *)(v13 + 16) = svtData;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 16), (int32_t)svtData, v16, v17);
  v19 = BattleLogicEnemyAi__procAiActLocal(
          this,
          *(BattleServantData_o **)(v13 + 16),
          aiEnt,
          countAct,
          aiInfo,
          procState,
          v18);
  v21 = BattleLogicEnemyAi__ReplaceCommandTasksBySealStatus(this, *(BattleServantData_o **)(v13 + 16), v19, v20);
  v22 = (System_Action_object__o *)sub_1C2D6DC(System_Action_BattleLogicTask__TypeInfo);
  System_Action_object____ctor(
    v22,
    (Il2CppObject *)v13,
    Method_BattleLogicEnemyAi___c__DisplayClass26_0__procAiAct_b__0__,
    0);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)v19,
    (System_Action_T__o *)v22,
    (const MethodInfo_30BA910 *)Method_BasicHelper_ForEach_BattleLogicTask___);
  return v21;
}


BattleLogicTask_array *BattleLogicEnemyAi__procAiActLocal(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        AiEntity_o *aiEnt,
        int32_t countAct,
        AiLogic_AiInfo_o *aiInfo,
        int32_t procState,
        const MethodInfo *method)
{
  BattleLogicEnemyAi_o *v12; // x22
  int32_t data_high; // w27
  AiActEntity_o *v14; // x24
  BattleLogicBaseAi_o *v15; // x0
  const MethodInfo *v16; // x4
  bool v18; // w28
  WeightRate_int__o *v19; // x21
  int32_t Int; // w0
  int32_t v21; // w0
  int32_t v22; // w0
  BattleServantData_o *v23; // x0
  int32_t v24; // w1
  int *skillVals; // x8
  int32_t v26; // w21
  int32_t v27; // w25
  int32_t Next; // w0
  int32_t Data; // w0
  System_Collections_Generic_List_object__o *v30; // x27
  __int64 v31; // x25
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_String_o *infoText; // x1
  bool v35; // w21
  __int64 v36; // x20
  const MethodInfo *v37; // x4
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x4
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  struct BattleLogic_o *v43; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x0
  Il2CppObject *MasterData_object; // x20
  BattleSkillInfoData_o *SkillInfoDataByAiActType; // x0
  SkillLvEntity_o *Entity; // x28
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  bool IsEnableTarget; // w29
  BattleLogic_o *logic; // x20
  struct BattleLogicTarget_o *funcId; // x21
  BattleLogicEnemyAi_o *v61; // x2
  BattleLogic_o *v62; // x0
  struct BattleLogicTarget_o *logictarget; // x1
  System_Collections_Generic_List_object__o *v64; // x0
  Il2CppObject *v65; // x20
  struct BattleLogic_o *tempDeadSvtHash; // x1
  BattleData_o *v67; // x8
  BattleLogicTarget_o *v68; // x20
  int32_t target; // w27
  int32_t uniqueId; // w26
  System_Int32_array *targetIndividuality; // x28
  System_Int32_array *FieldPlayerServantIDList; // x21
  const MethodInfo *v73; // x2
  __int64 v74; // x2
  BattleLogicTarget_o *v75; // x20
  int32_t v76; // w26
  int32_t v77; // w27
  System_Int32_array *v78; // x28
  BattleLogicEnemyAi_o *v79; // x29
  const MethodInfo *v80; // x3
  BattleSkillInfoData_o *v81; // x21
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  int32_t v84; // w27
  System_Collections_Generic_List_object__o *v85; // x28
  int32_t Type; // w23
  const MethodInfo *v87; // x5
  const MethodInfo *v88; // x3
  struct BattleLogic_o *v89; // x8
  BattleServantData_o *ServantData; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  struct System_Object_array *items; // x8
  _QWORD *v94; // x9
  __int64 size; // x10
  Il2CppClass **v96; // x0
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  BattleCommandData_o *v99; // x22
  BattleComboData_o *v100; // x20
  int32_t TreasureDvcId; // w0
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  BattleLogicTask_o *v104; // x19
  struct System_Object_array *v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  Il2CppClass **v108; // x0
  CGThumbnailListItem_o *v109; // x0
  int32_t v110; // w1
  __int64 v111; // x8
  System_Collections_Generic_List_object__o *v112; // x0
  Il2CppObject *v113; // x1
  WeightRate_int__o *v114; // x23
  const MethodInfo *v115; // x2
  struct BattleLogic_o *v116; // x8
  BattleLogicEnemyAi_o *v117; // x22
  unsigned __int64 v118; // x20
  int32_t v119; // w0
  int32_t v120; // w20
  struct System_Int32_array *FixCommandCardIds; // x0
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  int32_t SvtId; // w20
  int32_t DispLimitCount; // w21
  BattleCommandData_o *v126; // x22
  int32_t v127; // w1
  BattleComboData_o *v128; // x19
  struct System_Object_array *v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  __int64 v132; // x0
  int32_t v133; // [xsp+1Ch] [xbp-A4h]
  System_Collections_Generic_List_object__o *v134; // [xsp+20h] [xbp-A0h]
  int32_t v135; // [xsp+2Ch] [xbp-94h]
  BattleLogicEnemyAi_o *targetlist; // [xsp+30h] [xbp-90h]
  BattleSkillInfoData_o *v137; // [xsp+38h] [xbp-88h]
  int32_t lv[2]; // [xsp+40h] [xbp-80h] BYREF
  BattleBranchSkillInfoData_o *battleBranchSkillInfo; // [xsp+48h] [xbp-78h] BYREF
  int v140; // [xsp+54h] [xbp-6Ch] BYREF
  int32_t aiActType; // [xsp+58h] [xbp-68h] BYREF
  bool noMessage; // [xsp+5Ch] [xbp-64h] BYREF

  v12 = this;
  if ( (byte_4C2A30C & 1) == 0 )
  {
    sub_1C2D490(&BattleComboData_TypeInfo);
    sub_1C2D490(&BattleCommandData_TypeInfo);
    sub_1C2D490(&BattleCommand_TypeInfo);
    sub_1C2D490(&BattleLogicTask_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C2D490(&ServantAiActArgument_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_WeightRate_int___ctor__);
    sub_1C2D490(&Method_WeightRate_int__getCount__);
    sub_1C2D490(&Method_WeightRate_int__getData__);
    sub_1C2D490(&Method_WeightRate_int__getTotalWeight__);
    sub_1C2D490(&Method_WeightRate_int__setWeight__);
    sub_1C2D490(&WeightRate_int__TypeInfo);
    this = (BattleLogicEnemyAi_o *)sub_1C2D490(&StringLiteral_8733/*"MOTION_"*/);
    byte_4C2A30C = 1;
  }
  v140 = 0;
  *(_QWORD *)lv = 0;
  battleBranchSkillInfo = 0;
  noMessage = 0;
  if ( !aiEnt )
    goto LABEL_178;
  this = (BattleLogicEnemyAi_o *)BattleLogicBaseAi__GetAiActEntity(
                                   (BattleLogicBaseAi_o *)v12,
                                   aiEnt->fields.aiActId,
                                   (const MethodInfo *)aiEnt);
  if ( !this )
    goto LABEL_178;
  data_high = HIDWORD(this->fields.data);
  v14 = (AiActEntity_o *)this;
  aiActType = data_high;
  if ( !svtData )
    goto LABEL_178;
  v15 = (BattleLogicBaseAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))svtData->klass->vtable._18_getAiState.methodPtr)(
                                 svtData,
                                 svtData->klass->vtable._18_getAiState.method);
  if ( BattleLogicBaseAi__IsChangeThinkingOnly(v15, data_high, (AiBaseEntity_o *)aiEnt, (AiState_o *)v15, v16) )
    return v12->fields.emptyTask;
  v18 = procState != 1 || BattleServantData__canUseSkill(svtData, -1, 0);
  v19 = (WeightRate_int__o *)sub_1C2D6DC(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v19, (const MethodInfo_3B7B4CC *)Method_WeightRate_int___ctor__);
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
      if ( !v18 )
        goto LABEL_58;
      if ( !BattleServantData__isUseSelfSkill(svtData, 0, 0) )
        goto LABEL_19;
      this = (BattleLogicEnemyAi_o *)AiAct__getInt(11, 0);
      if ( !v19 )
        goto LABEL_178;
      WeightRate_int___setWeight(v19, 10, (int32_t)this, (const MethodInfo_3B7A9E8 *)Method_WeightRate_int__setWeight__);
LABEL_19:
      if ( !BattleServantData__isUseSelfSkill(svtData, 1, 0) )
        goto LABEL_22;
      this = (BattleLogicEnemyAi_o *)AiAct__getInt(12, 0);
      if ( !v19 )
        goto LABEL_178;
      WeightRate_int___setWeight(v19, 10, (int32_t)this, (const MethodInfo_3B7A9E8 *)Method_WeightRate_int__setWeight__);
LABEL_22:
      this = (BattleLogicEnemyAi_o *)BattleServantData__isUseSelfSkill(svtData, 2, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleLogicEnemyAi_o *)AiAct__getInt(13, 0);
        if ( !v19 )
          goto LABEL_178;
        WeightRate_int___setWeight(
          v19,
          10,
          (int32_t)this,
          (const MethodInfo_3B7A9E8 *)Method_WeightRate_int__setWeight__);
      }
      else
      {
LABEL_58:
        if ( !v19 )
          goto LABEL_178;
      }
      if ( WeightRate_int___getCount(v19, (const MethodInfo_3B7ADA4 *)Method_WeightRate_int__getCount__) >= 1 )
        goto LABEL_60;
      goto LABEL_61;
    case 11:
      if ( !v18 )
      {
        aiActType = 2;
        noMessage = 1;
      }
      v23 = svtData;
      v24 = 0;
      goto LABEL_41;
    case 12:
      if ( !v18 )
      {
        aiActType = 2;
        noMessage = 1;
      }
      v24 = 1;
      v23 = svtData;
LABEL_41:
      if ( !BattleServantData__isUseSelfSkill(v23, v24, 0) )
        aiActType = 2;
      goto LABEL_62;
    case 13:
      if ( !v18 )
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
          && TreasureDeviceConditionUtil__IsSatisfyEachCondition(svtData, v12->fields.data, 0) )
        {
          goto LABEL_62;
        }
        goto LABEL_61;
      }
      if ( data_high != 1 )
      {
        if ( (data_high & 0xFFFFFFFE) != 0x28 )
          goto LABEL_62;
        skillVals = (int *)v14->fields.skillVals;
        if ( !skillVals )
          goto LABEL_178;
        if ( skillVals[6] <= 1 )
        {
LABEL_144:
          aiActType = 0;
          goto LABEL_62;
        }
        if ( v18 || data_high != 41 )
        {
          v26 = skillVals[8];
          v27 = skillVals[9];
          this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_178;
          this = (BattleLogicEnemyAi_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillLvMaster___);
          if ( !this )
            goto LABEL_178;
          if ( SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v26, v27, 0) )
          {
            BattleServantData__addSkillInfo(svtData, 20, 0, v26, v27, -1, -1, 0, 0);
            goto LABEL_62;
          }
          goto LABEL_144;
        }
LABEL_61:
        aiActType = 2;
        noMessage = 1;
        goto LABEL_62;
      }
      this = (BattleLogicEnemyAi_o *)AiAct__getInt(2, 0);
      if ( !v19 )
        goto LABEL_178;
      WeightRate_int___setWeight(v19, 10, (int32_t)this, (const MethodInfo_3B7A9E8 *)Method_WeightRate_int__setWeight__);
      if ( v18 )
      {
        if ( BattleServantData__isUseSelfSkill(svtData, 0, 0) )
        {
          Int = AiAct__getInt(11, 0);
          WeightRate_int___setWeight(v19, 10, Int, (const MethodInfo_3B7A9E8 *)Method_WeightRate_int__setWeight__);
        }
        if ( BattleServantData__isUseSelfSkill(svtData, 1, 0) )
        {
          v21 = AiAct__getInt(12, 0);
          WeightRate_int___setWeight(v19, 10, v21, (const MethodInfo_3B7A9E8 *)Method_WeightRate_int__setWeight__);
        }
        if ( BattleServantData__isUseSelfSkill(svtData, 2, 0) )
        {
          v22 = AiAct__getInt(13, 0);
          WeightRate_int___setWeight(v19, 10, v22, (const MethodInfo_3B7A9E8 *)Method_WeightRate_int__setWeight__);
        }
      }
LABEL_60:
      Next = BattleRandom__getNext(v19->fields.totalweight, 0);
      Data = WeightRate_int___getData(v19, Next, (const MethodInfo_3B7AE5C *)Method_WeightRate_int__getData__);
      aiActType = AiAct__getType(Data, 0);
LABEL_62:
      v30 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v30,
        (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      v31 = sub_1C2D6DC(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor((BattleLogicTask_o *)v31, 0);
      if ( noMessage )
      {
        if ( !v31 )
          goto LABEL_178;
      }
      else
      {
        if ( !v31 )
          goto LABEL_178;
        infoText = aiEnt->fields.infoText;
        *(_QWORD *)(v31 + 176) = infoText;
        sub_1C2D434((CGThumbnailListItem_o *)(v31 + 176), (int32_t)infoText, v32, v33);
      }
      BattleLogicTask__setActor((BattleLogicTask_o *)v31, 3, svtData->fields.uniqueId, 0);
      if ( AiBaseEntity__IsForcedActionSpeedAnyTime((AiBaseEntity_o *)aiEnt, 0) )
        *(_BYTE *)(v31 + 184) = 1;
      *(_BYTE *)(v31 + 232) = AiActEntity__IsNoCriticalOnAttack(v14, 0);
      this = (BattleLogicEnemyAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))svtData->klass->vtable._18_getAiState.methodPtr)(
                                       svtData,
                                       svtData->klass->vtable._18_getAiState.method);
      if ( !this )
        goto LABEL_178;
      AiState__setBeforeAction((AiState_o *)this, aiActType, aiEnt->fields.aiActId, 0);
      v35 = noMessage;
      v36 = sub_1C2D6DC(ServantAiActArgument_TypeInfo);
      BaseAiActArgument___ctor((BaseAiActArgument_o *)v36, v14, (AiBaseEntity_o *)aiEnt, procState, v37);
      *(_QWORD *)(v36 + 40) = svtData;
      sub_1C2D434((CGThumbnailListItem_o *)(v36 + 40), (int32_t)svtData, v38, v39);
      *(_BYTE *)(v36 + 48) = v35;
      if ( aiActType != 71 )
      {
        this = (BattleLogicEnemyAi_o *)BattleLogicBaseAi__SetNoTargetAiActTask(
                                         (BattleLogicBaseAi_o *)v12,
                                         (System_Collections_Generic_List_BattleLogicTask__o *)v30,
                                         aiActType,
                                         (BaseAiActArgument_o *)v36,
                                         v40);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_79;
        this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_178;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillLvMaster___);
        SkillInfoDataByAiActType = BattleServantData__getSkillInfoDataByAiActType(svtData, aiActType, 0);
        Entity = (SkillLvEntity_o *)SkillInfoDataByAiActType;
        v137 = SkillInfoDataByAiActType;
        if ( SkillInfoDataByAiActType )
        {
          this = (BattleLogicEnemyAi_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, const MethodInfo *))SkillInfoDataByAiActType->klass->vtable._5_get_skillId.methodPtr)(
                                           SkillInfoDataByAiActType,
                                           SkillInfoDataByAiActType->klass->vtable._5_get_skillId.method);
          if ( !MasterData_object )
            goto LABEL_178;
          Entity = SkillLvMaster__GetEntity(
                     (SkillLvMaster_o *)MasterData_object,
                     (int32_t)this,
                     HIDWORD(Entity->fields.funcId),
                     0);
        }
        v133 = countAct;
        v134 = v30;
        v135 = procState;
        if ( AiAct__isSkillType(aiActType, 0) )
        {
          IsEnableTarget = 1;
          if ( !v137 || !Entity )
            goto LABEL_100;
          logic = v12->fields.logic;
          funcId = (struct BattleLogicTarget_o *)Entity->fields.funcId;
          this = (BattleLogicEnemyAi_o *)SkillLvEntity__getDataValsList(Entity, 0);
          if ( !logic )
            goto LABEL_178;
          v61 = this;
          v62 = logic;
          logictarget = funcId;
        }
        else
        {
          if ( aiActType != 80 )
            goto LABEL_99;
          this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_178;
          v65 = DataManager__GetMasterData_object_(
                  (DataManager_o *)this,
                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
          this = (BattleLogicEnemyAi_o *)BattleServantData__getTreasureDvcId(svtData, 1, 0, 0);
          if ( !v65 )
            goto LABEL_178;
          this = (BattleLogicEnemyAi_o *)TreasureDvcLvMaster__GetEntity(
                                           (TreasureDvcLvMaster_o *)v65,
                                           (int32_t)this,
                                           svtData->fields.treasuredvcLevel,
                                           0);
          if ( !this )
          {
LABEL_99:
            IsEnableTarget = 1;
            goto LABEL_100;
          }
          if ( !v12->fields.logic )
            goto LABEL_178;
          logictarget = this->fields.logictarget;
          v62 = v12->fields.logic;
          v61 = 0;
        }
        IsEnableTarget = BattleLogic__checkEnemyTargetFunction(
                           v62,
                           (System_Int32_array *)logictarget,
                           (DataVals_array *)v61,
                           0);
LABEL_100:
        this = (BattleLogicEnemyAi_o *)v12->fields.logictarget;
        if ( !this )
          goto LABEL_178;
        tempDeadSvtHash = (struct BattleLogic_o *)v12->fields.tempDeadSvtHash;
        this->fields.logic = tempDeadSvtHash;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.logic, (int32_t)tempDeadSvtHash, v56, v57);
        if ( v137 && Entity )
          IsEnableTarget = SkillLvEntity__IsEnableTarget(Entity, IsEnableTarget, 0);
        this = (BattleLogicEnemyAi_o *)sub_1C2D538(int___TypeInfo, 1);
        v67 = v12->fields.data;
        targetlist = this;
        if ( !v67 )
          goto LABEL_178;
        v68 = v12->fields.logictarget;
        target = v14->fields.target;
        uniqueId = svtData->fields.uniqueId;
        targetIndividuality = v14->fields.targetIndividuality;
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v67, 0, 0);
        this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(v12, aiEnt, v73);
        if ( !v68 )
          goto LABEL_178;
        this = (BattleLogicEnemyAi_o *)BattleLogicTarget__getTargetAiAct(
                                         v68,
                                         target,
                                         uniqueId,
                                         targetIndividuality,
                                         FieldPlayerServantIDList,
                                         IsEnableTarget,
                                         0,
                                         0,
                                         v14,
                                         (unsigned __int8)this & 1,
                                         0);
        if ( !targetlist )
          goto LABEL_178;
        if ( LODWORD(targetlist->fields.logic) )
        {
          LODWORD(targetlist->fields.logictarget) = (_DWORD)this;
          this = (BattleLogicEnemyAi_o *)sub_1C2D538(int___TypeInfo, 1);
          if ( !v12->fields.data )
            goto LABEL_178;
          v75 = v12->fields.logictarget;
          v76 = v14->fields.target;
          v77 = svtData->fields.uniqueId;
          v78 = v14->fields.targetIndividuality;
          v79 = this;
          this = (BattleLogicEnemyAi_o *)BattleData__getFieldEnemyServantIDList(v12->fields.data, 0, 0);
          if ( !v75 )
            goto LABEL_178;
          this = (BattleLogicEnemyAi_o *)BattleLogicTarget__getTargetAiAct(
                                           v75,
                                           v76,
                                           v77,
                                           v78,
                                           (System_Int32_array *)this,
                                           0,
                                           0,
                                           0,
                                           v14,
                                           1,
                                           0);
          if ( !v79 )
            goto LABEL_178;
          v81 = v137;
          if ( LODWORD(v79->fields.logic) )
          {
            LODWORD(v79->fields.logictarget) = (_DWORD)this;
            this = (BattleLogicEnemyAi_o *)v12->fields.logictarget;
            if ( !this )
              goto LABEL_178;
            this->fields.logic = 0;
            sub_1C2D434((CGThumbnailListItem_o *)&this->fields.logic, 0, v74, v80);
            this = (BattleLogicEnemyAi_o *)v12->fields.logic;
            if ( !this )
              goto LABEL_178;
            *(_BYTE *)(v31 + 192) = (v135 == 1) & (BattleLogic__GetLogicType((BattleLogic_o *)this, 0) == 42);
            if ( !AiAct__isAttackType(aiActType, 0) )
            {
              this = (BattleLogicEnemyAi_o *)AiAct__isSkillType(aiActType, 0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                this = (BattleLogicEnemyAi_o *)BattleServantData__get_BuffData(svtData, 0);
                if ( !this )
                  goto LABEL_178;
                BattleBuffData__UpdateSkillRelationBuff((BattleBuffData_o *)this, 0);
                if ( v137 )
                {
                  this = (BattleLogicEnemyAi_o *)BattleSkillInfoData__IsExistBranchSkillInfo(v137, 0);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    this = (BattleLogicEnemyAi_o *)BasicHelper__IsNullOrEmpty(
                                                     (System_Collections_ICollection_o *)v79,
                                                     0);
                    if ( ((unsigned __int8)this & 1) == 0 )
                    {
                      v89 = v12->fields.logic;
                      if ( !v89 )
                        goto LABEL_178;
                      if ( !LODWORD(v79->fields.logic) )
                        goto LABEL_179;
                      this = (BattleLogicEnemyAi_o *)v89->fields.data;
                      if ( !this )
                        goto LABEL_178;
                      ServantData = BattleData__getServantData(
                                      (BattleData_o *)this,
                                      (int32_t)v79->fields.logictarget,
                                      0);
                      this = (BattleLogicEnemyAi_o *)BattleSkillInfoData__TryGetSatisfyCondBranchSkillInfoData(
                                                       v137,
                                                       &battleBranchSkillInfo,
                                                       ServantData,
                                                       0);
                      if ( ((unsigned __int8)this & 1) != 0 )
                        v81 = (BattleSkillInfoData_o *)battleBranchSkillInfo;
                    }
                  }
                  BattleLogicBaseAi__SetSkillSelectAddIndex(
                    (BattleLogicBaseAi_o *)this,
                    v81,
                    (AiBaseEntity_o *)aiEnt,
                    v88);
                  BattleLogicTask__setActionSkill(
                    (BattleLogicTask_o *)v31,
                    v81,
                    (System_Int32_array *)targetlist,
                    (System_Int32_array *)v79,
                    0,
                    0,
                    0);
                  BattleLogicTask__setActor((BattleLogicTask_o *)v31, 3, svtData->fields.uniqueId, 0);
                  v85 = v134;
                  *(_BYTE *)(v31 + 193) = 1;
                  if ( !v134 )
                    goto LABEL_178;
                  items = v134->fields._items;
                  v94 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                  ++v134->fields._version;
                  if ( !items )
                    goto LABEL_178;
                  size = v134->fields._size;
                  if ( (unsigned int)size >= LODWORD(items->max_length) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v134,
                      (Il2CppObject *)v31,
                      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v96 = &items->obj.klass + size;
                    v134->fields._size = size + 1;
                    v96[4] = (Il2CppClass *)v31;
                    sub_1C2D434((CGThumbnailListItem_o *)(v96 + 4), v31, v91, v92);
                  }
                  v104 = (BattleLogicTask_o *)sub_1C2D6DC(BattleLogicTask_TypeInfo);
                  BattleLogicTask___ctor(v104, 0);
                  v105 = v134->fields._items;
                  v106 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                  ++v134->fields._version;
                  if ( !v105 )
                    goto LABEL_178;
                  v107 = v134->fields._size;
                  if ( (unsigned int)v107 < LODWORD(v105->max_length) )
                  {
                    v108 = &v105->obj.klass + v107;
                    v134->fields._size = v107 + 1;
                    v108[4] = (Il2CppClass *)v104;
                    v109 = (CGThumbnailListItem_o *)(v108 + 4);
                    v110 = (int)v104;
LABEL_173:
                    sub_1C2D434(v109, v110, v102, v103);
                    goto LABEL_176;
                  }
                  v111 = v106[4];
                  v112 = v134;
                  v113 = (Il2CppObject *)v104;
LABEL_175:
                  System_Collections_Generic_List_object___AddWithResize(
                    v112,
                    v113,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v111 + 192) + 112LL));
                  goto LABEL_176;
                }
              }
              else if ( aiActType == 80 )
              {
                if ( BattleLogicServantAi__TryGetOverwriteTreasureDevice(
                       (BattleLogicServantAi_o *)this,
                       svtData,
                       v14->fields.skillVals,
                       &lv[1],
                       lv,
                       v87) )
                {
                  BattleLogicTask__SetOverwriteTreasureDevice((BattleLogicTask_o *)v31, lv[1], lv[0], 0);
                  this = *(BattleLogicEnemyAi_o **)(v31 + 224);
                  if ( !this )
                    goto LABEL_178;
                  OverwriteTreasureDeviceData__Overwrite((OverwriteTreasureDeviceData_o *)this, svtData, 0);
                }
                BattleLogicTask__setActor((BattleLogicTask_o *)v31, 3, svtData->fields.uniqueId, 0);
                *(_QWORD *)(v31 + 32) = targetlist;
                sub_1C2D434((CGThumbnailListItem_o *)(v31 + 32), (int32_t)targetlist, v97, v98);
                v99 = (BattleCommandData_o *)sub_1C2D6DC(BattleCommandData_TypeInfo);
                BattleCommandData___ctor(v99, 0);
                this = (BattleLogicEnemyAi_o *)BattleServantData__getTreasureDvcCardId(svtData, 0);
                v85 = v134;
                if ( !v99 )
                  goto LABEL_178;
                v99->fields._type = (int)this;
                v99->fields.svtlimit = BattleServantData__getDispLimitCount(svtData, 1, 0);
                v99->fields.uniqueId = svtData->fields.uniqueId;
                v99->fields.svtId = BattleServantData__getSvtId(svtData, 0);
                v99->fields.treasureDvc = BattleServantData__getTreasureDvcId(svtData, 1, 0, 0);
                v100 = (BattleComboData_o *)sub_1C2D6DC(BattleComboData_TypeInfo);
                BattleComboData___ctor(v100, 0);
                BattleLogicTask__setActionCommand((BattleLogicTask_o *)v31, v100, v99, v133, 0);
                TreasureDvcId = BattleServantData__getTreasureDvcId(svtData, 1, 0, 0);
                BattleLogicTask__setActionTreasureDvc((BattleLogicTask_o *)v31, TreasureDvcId, 1, 0);
                if ( !v134 )
                  goto LABEL_178;
                goto LABEL_170;
              }
              v85 = v134;
              if ( !v134 )
                goto LABEL_178;
LABEL_176:
              v64 = v85;
              return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                                v64,
                                                (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
            }
            *(_QWORD *)(v31 + 32) = targetlist;
            sub_1C2D434((CGThumbnailListItem_o *)(v31 + 32), (int32_t)targetlist, v82, v83);
            if ( SvtType__IsEnemy_40233216(svtData->fields.svtType, 0) )
            {
              v84 = v133;
              v85 = v134;
              Type = 10;
              goto LABEL_162;
            }
            v84 = v133;
            v85 = v134;
            if ( AiAct__isAttackArts(aiActType, 0) )
            {
              Type = 1;
              goto LABEL_162;
            }
            if ( AiAct__isAttackBuster(aiActType, 0) )
            {
              Type = 2;
              goto LABEL_162;
            }
            if ( AiAct__isAttackQuick(aiActType, 0) )
            {
              Type = 3;
              goto LABEL_162;
            }
            v114 = (WeightRate_int__o *)sub_1C2D6DC(WeightRate_int__TypeInfo);
            WeightRate_int____ctor(v114, (const MethodInfo_3B7B4CC *)Method_WeightRate_int___ctor__);
            this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi__GetCommandArray(v12, svtData, v115);
            if ( !this )
              goto LABEL_178;
            v116 = this->fields.logic;
            v117 = this;
            if ( (int)v116 < 1 )
            {
LABEL_158:
              if ( !v114 )
                goto LABEL_178;
              v119 = BattleRandom__getNext(v114->fields.totalweight, 0);
              v120 = WeightRate_int___getData(v114, v119, (const MethodInfo_3B7AE5C *)Method_WeightRate_int__getData__);
              if ( !BattleCommand_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
              Type = BattleCommand__getType(v120, 0);
LABEL_162:
              FixCommandCardIds = AiActEntity__GetFixCommandCardIds(v14, Type, 0);
              svtData->fields.fixCommandCardIds = FixCommandCardIds;
              sub_1C2D434(
                (CGThumbnailListItem_o *)&svtData->fields.fixCommandCardIds,
                (int32_t)FixCommandCardIds,
                v122,
                v123);
              SvtId = BattleServantData__getSvtId(svtData, 0);
              DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0);
              v126 = (BattleCommandData_o *)sub_1C2D6DC(BattleCommandData_TypeInfo);
              BattleCommandData___ctor_46333400(v126, Type, SvtId, DispLimitCount, 0, -1, 0);
              if ( !v126 )
                goto LABEL_178;
              v126->fields.uniqueId = svtData->fields.uniqueId;
              if ( *(_BYTE *)(v31 + 232) )
              {
                v127 = 3;
              }
              else
              {
                if ( AiAct__isAttackCritical(aiActType, 0) )
                {
                  BattleCommandData__SetCriticalDecisionType(v126, 2, 0);
                  aiActType = 2;
                  goto LABEL_169;
                }
                v127 = 1;
              }
              BattleCommandData__SetCriticalDecisionType(v126, v127, 0);
LABEL_169:
              v128 = (BattleComboData_o *)sub_1C2D6DC(BattleComboData_TypeInfo);
              BattleComboData___ctor(v128, 0);
              BattleLogicTask__setActionCommand((BattleLogicTask_o *)v31, v128, v126, v84, 0);
              if ( !v85 )
                goto LABEL_178;
LABEL_170:
              v129 = v85->fields._items;
              v130 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
              ++v85->fields._version;
              if ( !v129 )
                goto LABEL_178;
              v131 = v85->fields._size;
              if ( (unsigned int)v131 < LODWORD(v129->max_length) )
              {
                v132 = (__int64)v129 + 8 * v131;
                v85->fields._size = v131 + 1;
                *(_QWORD *)(v132 + 32) = v31;
                v109 = (CGThumbnailListItem_o *)(v132 + 32);
                v110 = v31;
                goto LABEL_173;
              }
              v111 = v130[4];
              v112 = v85;
              v113 = (Il2CppObject *)v31;
              goto LABEL_175;
            }
            v118 = 0;
            while ( v118 < (unsigned int)v116 )
            {
              if ( !v114 )
                goto LABEL_178;
              WeightRate_int___setWeight(
                v114,
                10,
                *((_DWORD *)&v117->fields.logictarget + v118),
                (const MethodInfo_3B7A9E8 *)Method_WeightRate_int__setWeight__);
              LODWORD(v116) = v117->fields.logic;
              if ( (__int64)++v118 >= (int)v116 )
                goto LABEL_158;
            }
          }
        }
LABEL_179:
        sub_1C2D6F4(this, svtData, v74);
      }
      this = (BattleLogicEnemyAi_o *)AiBaseEntity__getActionValue((AiBaseEntity_o *)aiEnt, 0);
      v140 = (int)this;
      if ( (int)this >= 1 )
      {
        v41 = System_Int32__ToString((int32_t)&v140, 0);
        v42 = System_String__Concat_63457864((System_String_o *)StringLiteral_8733/*"MOTION_"*/, v41, 0);
        BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v31, v42, 0);
        v43 = v12->fields.logic;
        if ( v43 )
        {
          this = (BattleLogicEnemyAi_o *)v43->fields.perf;
          if ( this )
          {
            ServantGameObject = BattlePerformance__getServantGameObject(
                                  (BattlePerformance_o *)this,
                                  svtData->fields.uniqueId,
                                  0);
            *(_QWORD *)(v31 + 128) = ServantGameObject;
            sub_1C2D434((CGThumbnailListItem_o *)(v31 + 128), (int32_t)ServantGameObject, v45, v46);
            BattleLogicTask__setActor((BattleLogicTask_o *)v31, 3, svtData->fields.uniqueId, 0);
            if ( v30 )
            {
              v49 = v30->fields._items;
              v50 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
              ++v30->fields._version;
              if ( v49 )
              {
                v51 = v30->fields._size;
                if ( (unsigned int)v51 >= LODWORD(v49->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v30,
                    (Il2CppObject *)v31,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
                }
                else
                {
                  v52 = &v49->obj.klass + v51;
                  v30->fields._size = v51 + 1;
                  v52[4] = (Il2CppClass *)v31;
                  sub_1C2D434((CGThumbnailListItem_o *)(v52 + 4), v31, v47, v48);
                }
                goto LABEL_91;
              }
            }
          }
        }
LABEL_178:
        sub_1C2D6EC(this, svtData);
      }
LABEL_79:
      if ( !v30 )
        goto LABEL_178;
LABEL_91:
      v64 = v30;
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v64,
                                        (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
  }
}


void BattleLogicEnemyAi__resetAct(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  BattleLogicEnemyAi_o *v2; // x19
  struct System_Collections_Generic_List_BattleServantData__o *actlist; // x8
  int32_t size; // w2
  int v5; // w9
  __int64 v6; // x2
  int logic; // w8
  BattleLogicEnemyAi_o *v8; // x19
  unsigned int v9; // w20

  v2 = this;
  if ( (byte_4C2A307 & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_1C2D490(&Method_System_Collections_Generic_List_BattleServantData__Clear__);
    byte_4C2A307 = 1;
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
  LODWORD(this[2].fields.noThinkAiEnt) = 0;
  this = (BattleLogicEnemyAi_o *)BattleData__getFieldEnemyServantList((BattleData_o *)this, 0, 0);
  if ( !this )
    goto LABEL_14;
  logic = (int)this->fields.logic;
  v8 = this;
  if ( logic >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= logic )
        sub_1C2D6F4(this, method, v6);
      this = (BattleLogicEnemyAi_o *)*((_QWORD *)&v8->fields.logictarget + (int)v9);
      if ( !this )
        break;
      BattleServantData__resetActionCount((BattleServantData_o *)this, 0);
      logic = (int)v8->fields.logic;
      if ( (int)++v9 >= logic )
        return;
    }
LABEL_14:
    sub_1C2D6EC(this, method);
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

  if ( (byte_4C2A305 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__);
    byte_4C2A305 = 1;
  }
  BattleLogicEnemyAi__ExcludeDeadFromTempDead(this, *(const MethodInfo **)&ltype);
  TaskAIAttack = BattleLogicEnemyAi__CreateTaskAIAttack(this, v6, data, v7);
  if ( !TaskAIAttack )
    sub_1C2D6EC(0, v9);
  v10 = (System_Collections_Generic_List_object__o *)TaskAIAttack;
  if ( TaskAIAttack->fields._size >= 1 )
    BattleLogicEnemyAi__ClearTempDeadSvt(this, v9);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  const MethodInfo *v11; // x3
  struct BattleData_o *v12; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2A30D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2A30D = 1;
  }
  info = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  data = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.aiActMst, (int32_t)MasterData_object, v10, v11);
  v12 = this->fields.data;
  if ( !v12 )
    goto LABEL_16;
  data = (BattleData_o *)this->fields.aiLogic;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)AiLogic__getAction(
                           (AiLogic_o *)data,
                           v8,
                           2,
                           v12->fields.turnCount,
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
                                        (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_16:
    sub_1C2D6EC(data, v6);
  }
  data = (BattleData_o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, BattleData_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, const MethodInfo *))this->klass->vtable._21_procAiAct.methodPtr)(
                           this,
                           v8,
                           data,
                           0,
                           info,
                           0,
                           this->klass->vtable._21_procAiAct.method);
  if ( !v5 )
    goto LABEL_16;
  System_Collections_Generic_List_object___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  const MethodInfo *v11; // x3
  struct BattleData_o *v12; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2A30E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2A30E = 1;
  }
  info = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  data = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.aiActMst, (int32_t)MasterData_object, v10, v11);
  v12 = this->fields.data;
  if ( !v12 )
    goto LABEL_16;
  data = (BattleData_o *)this->fields.aiLogic;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)AiLogic__getAction(
                           (AiLogic_o *)data,
                           v8,
                           7,
                           v12->fields.turnCount,
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
                                        (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_16:
    sub_1C2D6EC(data, v6);
  }
  data = (BattleData_o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, BattleData_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, const MethodInfo *))this->klass->vtable._21_procAiAct.methodPtr)(
                           this,
                           v8,
                           data,
                           0,
                           info,
                           0,
                           this->klass->vtable._21_procAiAct.method);
  if ( !v5 )
    goto LABEL_16;
  System_Collections_Generic_List_object___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void BattleLogicEnemyAi__updateActPriorityList(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  BattleLogicEnemyAi_o *v2; // x20
  struct System_Collections_Generic_List_BattleServantData__o *actlist; // x8
  CGThumbnailListItem_o *p_actlist; // x19
  System_Collections_Generic_List_BattleServantData__o *BaseActPriorityList; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_object__o *klass; // x21
  BattleLogicEnemyAi___c_c *v9; // x0
  System_Predicate_object__o *_9__23_0; // x22
  Il2CppObject *v11; // x23
  struct BattleLogicEnemyAi___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_T__o *All; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  BattleLogicEnemyAi___c_c *v18; // x8
  BattleLogicEnemyAi_o *v19; // x20
  System_Predicate_object__o *_9__23_1; // x21
  Il2CppObject *v21; // x22
  struct BattleLogicEnemyAi___c_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_List_T__o *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  v2 = this;
  if ( (byte_4C2A308 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleServantData__FindAll__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1C2D490(&System_Predicate_BattleServantData__TypeInfo);
    sub_1C2D490(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_0__);
    sub_1C2D490(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_1__);
    this = (BattleLogicEnemyAi_o *)sub_1C2D490(&BattleLogicEnemyAi___c_TypeInfo);
    byte_4C2A308 = 1;
  }
  p_actlist = (CGThumbnailListItem_o *)&v2->fields.actlist;
  actlist = v2->fields.actlist;
  if ( !actlist )
    goto LABEL_27;
  if ( actlist->fields._size <= 0 )
  {
    BaseActPriorityList = BattleLogicEnemyAi__GetBaseActPriorityList(v2, method);
    v2->fields.actlist = BaseActPriorityList;
    sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.actlist, (int32_t)BaseActPriorityList, v6, v7);
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
  v9 = BattleLogicEnemyAi___c_TypeInfo;
  if ( !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
    v9 = BattleLogicEnemyAi___c_TypeInfo;
  }
  _9__23_0 = (System_Predicate_object__o *)v9->static_fields->__9__23_0;
  if ( !_9__23_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = BattleLogicEnemyAi___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__23_0 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_object____ctor(_9__23_0, v11, Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_0__, 0);
    static_fields = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    static_fields->__9__23_0 = (struct System_Predicate_BattleServantData__o *)_9__23_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__23_0, (int32_t)_9__23_0, v13, v14);
  }
  All = System_Collections_Generic_List_object___FindAll(
          klass,
          (System_Predicate_T__o *)_9__23_0,
          (const MethodInfo_378A294 *)Method_System_Collections_Generic_List_BattleServantData__FindAll__);
  p_actlist->klass = (CGThumbnailListItem_c *)All;
  sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.actlist, (int32_t)All, v16, v17);
  if ( !p_actlist->klass )
LABEL_27:
    sub_1C2D6EC(this, method);
  if ( SLODWORD(p_actlist->klass->_1.namespaze) <= 0 )
  {
    this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi__GetBaseActPriorityList(v2, method);
    v18 = BattleLogicEnemyAi___c_TypeInfo;
    v19 = this;
    if ( !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v18 = BattleLogicEnemyAi___c_TypeInfo;
    }
    _9__23_1 = (System_Predicate_object__o *)v18->static_fields->__9__23_1;
    if ( !_9__23_1 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = BattleLogicEnemyAi___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v18->static_fields->__9;
      _9__23_1 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_BattleServantData__TypeInfo);
      System_Predicate_object____ctor(_9__23_1, v21, Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_1__, 0);
      v22 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v22->__9__23_1 = (struct System_Predicate_BattleServantData__o *)_9__23_1;
      sub_1C2D434((CGThumbnailListItem_o *)&v22->__9__23_1, (int32_t)_9__23_1, v23, v24);
    }
    if ( v19 )
    {
      v25 = System_Collections_Generic_List_object___FindAll(
              (System_Collections_Generic_List_object__o *)v19,
              (System_Predicate_T__o *)_9__23_1,
              (const MethodInfo_378A294 *)Method_System_Collections_Generic_List_BattleServantData__FindAll__);
      p_actlist->klass = (CGThumbnailListItem_c *)v25;
      sub_1C2D434(p_actlist, (int32_t)v25, v26, v27);
      return;
    }
    goto LABEL_27;
  }
}


void BattleLogicEnemyAi___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2A31C & 1) == 0 )
  {
    sub_1C2D490(&BattleLogicEnemyAi___c_TypeInfo);
    byte_4C2A31C = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(BattleLogicEnemyAi___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleLogicEnemyAi___c_TypeInfo->static_fields->__9 = (struct BattleLogicEnemyAi___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)BattleLogicEnemyAi___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
  return BattleServantData__GetOriginalRemainingNeedActCount(x, 0);
}


int32_t BattleLogicEnemyAi___c___GetBaseActPriorityList_b__24_2(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.actPriority;
}


int32_t BattleLogicEnemyAi___c___GetBaseActPriorityList_b__24_3(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return BattleServantData__getDeckIndex(x, 0);
}


bool BattleLogicEnemyAi___c___updateActPriorityList_b__23_0(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return BattleServantData__GetRemainingNeedActCount(x, 1, 0) > 0;
}


bool BattleLogicEnemyAi___c___updateActPriorityList_b__23_1(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return BattleServantData__GetRemainingNeedActCount(x, 1, 0) > 0;
}


void BattleLogicEnemyAi___c__DisplayClass26_0___ctor(
        BattleLogicEnemyAi___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleLogicEnemyAi___c__DisplayClass26_0___procAiAct_b__0(
        BattleLogicEnemyAi___c__DisplayClass26_0_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  OverwriteTreasureDeviceData_o *OverwriteTdData_k__BackingField; // x8

  if ( !x )
    sub_1C2D6EC(this, 0);
  OverwriteTdData_k__BackingField = x->fields._OverwriteTdData_k__BackingField;
  if ( OverwriteTdData_k__BackingField )
    OverwriteTreasureDeviceData__Reset(OverwriteTdData_k__BackingField, this->fields.svtData, 0);
}


void BattleLogicEnemyAi___c__DisplayClass37_0___ctor(
        BattleLogicEnemyAi___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleLogicTask_o *BattleLogicEnemyAi___c__DisplayClass37_0___ReplaceCommandTasksBySealStatus_b__0(
        BattleLogicEnemyAi___c__DisplayClass37_0_o *this,
        BattleLogicTask_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1C2D6EC(this, x);
  return BattleLogicEnemyAi__ReplaceCommandTaskBySealStatus(this->fields.__4__this, this->fields.svtData, x, v3);
}