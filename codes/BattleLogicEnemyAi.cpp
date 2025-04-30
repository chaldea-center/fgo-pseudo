void __fastcall BattleLogicEnemyAi___ctor(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1

  if ( (byte_4A5130A & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleServantData___ctor__, method);
    sub_1B863B8(&System_Collections_Generic_List_BattleServantData__TypeInfo, v3);
    byte_4A5130A = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this->fields.actlist = (struct System_Collections_Generic_List_BattleServantData__o *)v4;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.actlist, (int32_t)v4, v5, v6);
  BattleLogicBaseAi___ctor((BattleLogicBaseAi_o *)this, v7);
}


void __fastcall BattleLogicEnemyAi__AddActCount(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  if ( !svtData || (++svtData->fields.actionCount, (data = this->fields.data) == 0LL) )
    sub_1B86614(this, svtData);
  ++data->fields.countEnemyAttack;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicEnemyAi__AddTempDeadSvt(
        BattleLogicEnemyAi_o *this,
        int32_t svtUniqueId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x0

  if ( (byte_4A51302 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_int__Add__, *(_QWORD *)&svtUniqueId);
    byte_4A51302 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
    System_Collections_Generic_HashSet_int___Add(
      tempDeadSvtHash,
      svtUniqueId,
      (const MethodInfo_34B8A14 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
  if ( (byte_4A51306 & 1) == 0 )
  {
    sub_1B863B8(&AiLogic_AiInfo_CheckedInfo_TypeInfo, skillFlg);
    sub_1B863B8(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B863B8(&Method_WeightRate_int___ctor__, v13);
    sub_1B863B8(&Method_WeightRate_int__getCount__, v14);
    sub_1B863B8(&Method_WeightRate_int__getData__, v15);
    sub_1B863B8(&Method_WeightRate_int__getTotalWeight__, v16);
    sub_1B863B8(&Method_WeightRate_int__setWeight__, v17);
    sub_1B863B8(&WeightRate_int__TypeInfo, v18);
    byte_4A51306 = 1;
  }
  v19 = (WeightRate_int__o *)sub_1B86604(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v19, (const MethodInfo_39D8F68 *)Method_WeightRate_int___ctor__);
  if ( actType <= 13 )
  {
    switch ( actType )
    {
      case 10:
        if ( v9 )
          BattleLogicEnemyAi__SetSkillRandomWeightSameProbability(Int, v19, 10, svtData, v22);
        if ( !v19 )
          goto LABEL_46;
        if ( WeightRate_int___getCount(v19, (const MethodInfo_39D8840 *)Method_WeightRate_int__getCount__) < 1 )
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
          (const MethodInfo_39D8484 *)Method_WeightRate_int__setWeight__);
        if ( v9 )
          BattleLogicEnemyAi__SetSkillRandomWeightSameProbability(v28, v19, 10, svtData, v29);
LABEL_31:
        Next = BattleRandom__getNext(v19->fields.totalweight, 0LL);
        Data = WeightRate_int___getData(v19, Next, (const MethodInfo_39D88F8 *)Method_WeightRate_int__getData__);
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
    sub_1B86614(Int, v21);
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
  Int = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Int )
    goto LABEL_46;
  Int = (BattleLogicEnemyAi_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Int,
                                  (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  v35 = (AiLogic_AiInfo_CheckedInfo_o *)sub_1B86604(AiLogic_AiInfo_CheckedInfo_TypeInfo);
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
  __int64 Master_object; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x5
  BattleServantData_o *v14; // x23
  const MethodInfo *v15; // x3
  AiLogic_AiInfo_CheckedInfo_o *v16; // x20
  bool v17; // w24
  __int64 methodPtr_low; // x10
  AiEntity_o *v19; // x26
  BattleLogicTarget_o *logictarget; // x27
  int32_t monitor; // w28
  int32_t uniqueId; // w29
  Il2CppClass *klass; // x22
  System_Int32_array *FieldPlayerServantIDList; // x0
  Il2CppObject *aiActEnt; // x25
  System_Int32_array *v26; // x20
  const MethodInfo *v27; // x2
  System_Int32_array *v28; // x25
  BattleLogicTarget_o *v29; // x22
  int32_t v30; // w26
  int32_t v31; // w23
  Il2CppClass *v32; // x27
  AiLogic_o *aiLogic; // x20
  AiLogic_AiInfo_CheckedInfo_o *v35; // [xsp+20h] [xbp-80h]
  AiLogic_AiInfo_o *v36; // [xsp+28h] [xbp-78h]
  System_Int32_array *v37; // [xsp+30h] [xbp-70h]
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4A51309 & 1) == 0 )
  {
    sub_1B863B8(&AiEntity_TypeInfo, aiInfo);
    sub_1B863B8(&Method_DataManager_GetMaster_AiActMaster___, v7);
    sub_1B863B8(&DataManager_TypeInfo, v8);
    sub_1B863B8(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__, v9);
    sub_1B863B8(&int___TypeInfo, v10);
    byte_4A51309 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !aiBaseEntity || !Master_object )
    goto LABEL_41;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          aiBaseEntity->fields.aiActId,
          (const MethodInfo_32142CC *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__) )
    return 1;
  Master_object = (__int64)entity;
  if ( !entity )
    goto LABEL_41;
  Master_object = AiActEntity__GetNoTargetNoActionType((AiActEntity_o *)entity, 0LL);
  if ( !(_DWORD)Master_object )
    return 1;
  if ( !aiInfo )
    goto LABEL_41;
  Master_object = (__int64)this->fields.data;
  if ( !Master_object )
    goto LABEL_41;
  Master_object = (__int64)BattleData__getServantData((BattleData_o *)Master_object, aiInfo->fields.uniqueId, 0LL);
  v14 = (BattleServantData_o *)Master_object;
  if ( aiInfo->fields.procState == 1 )
  {
    if ( !Master_object )
      goto LABEL_41;
    Master_object = BattleServantData__canUseSkill((BattleServantData_o *)Master_object, -1, 0LL);
  }
  else
  {
    Master_object = 1LL;
  }
  if ( !entity )
    goto LABEL_41;
  Master_object = (__int64)BattleLogicEnemyAi__CheckAiActType(
                             this,
                             Master_object & 1,
                             v14,
                             (AiActEntity_o *)entity,
                             HIDWORD(entity[1].klass),
                             v13);
  if ( !Master_object )
    goto LABEL_41;
  v16 = (AiLogic_AiInfo_CheckedInfo_o *)Master_object;
  v17 = BattleLogicEnemyAi__CheckHate(this, *(_DWORD *)(Master_object + 16), v14, v15);
  methodPtr_low = LOBYTE(AiEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(aiBaseEntity->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    v19 = (AiEntity_c *)aiBaseEntity->klass->_2.typeHierarchy[methodPtr_low - 1] == AiEntity_TypeInfo
        ? (AiEntity_o *)aiBaseEntity
        : 0LL;
  else
    v19 = 0LL;
  Master_object = sub_1B86460(int___TypeInfo, 1LL);
  if ( !entity )
    goto LABEL_41;
  if ( !v14 )
    goto LABEL_41;
  v36 = aiInfo;
  v37 = (System_Int32_array *)Master_object;
  Master_object = (__int64)this->fields.data;
  v35 = v16;
  if ( !Master_object )
    goto LABEL_41;
  logictarget = this->fields.logictarget;
  monitor = (int32_t)entity[1].monitor;
  uniqueId = v14->fields.uniqueId;
  klass = entity[2].klass;
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList((BattleData_o *)Master_object, 0LL, 0LL);
  aiActEnt = entity;
  v26 = FieldPlayerServantIDList;
  Master_object = BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(this, v19, v27);
  if ( !logictarget )
    goto LABEL_41;
  Master_object = BattleLogicTarget__getTargetAiAct(
                    logictarget,
                    monitor,
                    uniqueId,
                    (System_Int32_array *)klass,
                    v26,
                    v17,
                    0,
                    0LL,
                    (AiActEntity_o *)aiActEnt,
                    Master_object & 1,
                    0LL);
  if ( !v37 )
    goto LABEL_41;
  if ( !v37->max_length )
    goto LABEL_42;
  v37->m_Items[1] = Master_object;
  Master_object = sub_1B86460(int___TypeInfo, 1LL);
  if ( !entity )
    goto LABEL_41;
  v28 = (System_Int32_array *)Master_object;
  Master_object = (__int64)this->fields.data;
  if ( !Master_object
    || (v29 = this->fields.logictarget,
        v30 = (int32_t)entity[1].monitor,
        v31 = v14->fields.uniqueId,
        v32 = entity[2].klass,
        Master_object = (__int64)BattleData__getFieldEnemyServantIDList((BattleData_o *)Master_object, 0, 0LL),
        !v29)
    || (Master_object = BattleLogicTarget__getTargetAiAct(
                          v29,
                          v30,
                          v31,
                          (System_Int32_array *)v32,
                          (System_Int32_array *)Master_object,
                          0,
                          0,
                          0LL,
                          (AiActEntity_o *)entity,
                          1,
                          0LL),
        !v28) )
  {
LABEL_41:
    sub_1B86614(Master_object, v12);
  }
  if ( !v28->max_length )
LABEL_42:
    sub_1B8661C(Master_object, v12);
  v28->m_Items[1] = Master_object;
  Master_object = (__int64)entity;
  if ( !entity )
    goto LABEL_41;
  aiLogic = this->fields.aiLogic;
  Master_object = AiActEntity__GetNoTargetNoActionType((AiActEntity_o *)entity, 0LL);
  if ( !aiLogic )
    goto LABEL_41;
  if ( AiLogic__IsNoTargetNoActionTask(aiLogic, Master_object, v37, v28, 0LL) )
    return 0;
  AiLogic_AiInfo__SetCheckedResult(v36, aiBaseEntity, v35, 0LL);
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
    sub_1B86614(data, *(_QWORD *)&actUniqueId);
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
  __int64 Instance; // x0
  __int64 v10; // x1
  SkillLvMaster_o *v11; // x21
  BattleSkillInfoData_o *SkillInfoDataByAiActType; // x0
  BattleSkillInfoData_o *v13; // x19
  SkillLvEntity_o *Entity; // x21
  bool v15; // w0
  struct BattleLogic_o *v16; // x20
  System_Int32_array *funcId; // x22
  DataVals_array *v18; // x2
  BattleLogic_o *logic; // x0
  System_Int32_array *v20; // x1
  Il2CppObject *MasterData_object; // x23

  if ( (byte_4A51308 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&actType);
    sub_1B863B8(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v7);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A51308 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !svtData )
    goto LABEL_27;
  v11 = (SkillLvMaster_o *)Instance;
  SkillInfoDataByAiActType = BattleServantData__getSkillInfoDataByAiActType(svtData, actType, 0LL);
  v13 = SkillInfoDataByAiActType;
  if ( SkillInfoDataByAiActType )
  {
    Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))SkillInfoDataByAiActType->klass->vtable._5_get_skillId.method)(
                 SkillInfoDataByAiActType,
                 SkillInfoDataByAiActType->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !v11 )
      goto LABEL_27;
    Entity = SkillLvMaster__GetEntity(v11, Instance, v13->fields.skilllv, 0LL);
  }
  else
  {
    Entity = 0LL;
  }
  if ( !AiAct__isSkillType(actType, 0LL) )
  {
    if ( actType != 80 )
      goto LABEL_23;
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    Instance = BattleServantData__getTreasureDvcId(svtData, 1, 0LL, 0LL);
    if ( !MasterData_object )
      goto LABEL_27;
    Instance = (__int64)TreasureDvcLvMaster__GetEntity(
                          (TreasureDvcLvMaster_o *)MasterData_object,
                          Instance,
                          svtData->fields.treasuredvcLevel,
                          0LL);
    if ( !Instance )
    {
LABEL_23:
      v15 = 1;
      if ( !v13 )
        return v15;
      goto LABEL_24;
    }
    if ( this->fields.logic )
    {
      v20 = *(System_Int32_array **)(Instance + 32);
      logic = this->fields.logic;
      v18 = 0LL;
      goto LABEL_20;
    }
LABEL_27:
    sub_1B86614(Instance, v10);
  }
  v15 = 1;
  if ( v13 && Entity )
  {
    v16 = this->fields.logic;
    funcId = Entity->fields.funcId;
    Instance = (__int64)SkillLvEntity__getDataValsList(Entity, 0LL);
    if ( v16 )
    {
      v18 = (DataVals_array *)Instance;
      logic = v16;
      v20 = funcId;
LABEL_20:
      v15 = BattleLogic__checkEnemyTargetFunction(logic, v20, v18, 0LL);
      goto LABEL_21;
    }
    goto LABEL_27;
  }
LABEL_21:
  if ( !v13 )
    return v15;
LABEL_24:
  if ( Entity )
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
    sub_1B86614(data, *(_QWORD *)&actUniqueId);
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
    sub_1B86614(this, skillFlg);
  if ( !BattleServantData__isUseSelfSkill(servantData, skillIndex, 0LL) )
    *actType = 2;
}


void __fastcall BattleLogicEnemyAi__ClearTempDeadSvt(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x0

  if ( (byte_4A51303 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_int__Clear__, method);
    byte_4A51303 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
    System_Collections_Generic_HashSet_int___Clear(
      tempDeadSvtHash,
      (const MethodInfo_34B7EA4 *)Method_System_Collections_Generic_HashSet_int__Clear__);
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
    sub_1B86614(0LL, actUniqueId);
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
  System_Collections_Generic_List_object__o *v12; // x22
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct BattleData_o *data; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A512FE & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_AiActMaster___, svtData);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_1B863B8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4A512FE = 1;
  }
  info = 0LL;
  v12 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.aiActMst, (int32_t)MasterData_object, v16, v17);
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
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v12,
                                        (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_11:
    sub_1B86614(Instance, v14);
  }
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, DataManager_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._21_procAiAct.method)(
                                this,
                                svtData,
                                Instance,
                                0LL,
                                info,
                                0LL,
                                this->klass->vtable._22_ExistThinking.methodPtr);
  if ( !v12 )
    goto LABEL_11;
  System_Collections_Generic_List_object___AddRange(
    v12,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1B86614(0LL, actUniqueId);
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
    sub_1B86614(this, svtData);
  }
  return BattleLogicEnemyAi__createCommandRandomTask(
           this,
           svtData,
           (int32_t)this,
           command->fields.actionIndex,
           derivedTask,
           v6);
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
  System_Collections_Generic_List_object__o *v22; // x20
  __int64 Instance; // x0
  System_Collections_Generic_IEnumerable_T__o *v24; // x1
  UnityEngine_Object_o *perf; // x21
  BattleData_o *v26; // x21
  System_Func_object__bool__o *v27; // x23
  struct BattleData_o *v28; // x8
  Il2CppObject *MasterData_object; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x1
  BattleServantData_o *v34; // x21
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x2
  BattleCommandData_o *TreasureDvcCommand; // x0
  const MethodInfo *v38; // x2
  struct AiActMaster_o **p_aiActMst; // x26
  BattleLogicTask_o *v40; // x23
  Il2CppObject *v41; // x24
  char v42; // w24
  struct BattleData_o *v43; // x8
  struct BattleData_o *v44; // x8
  struct BattleData_o *v45; // x8
  BattleLogicEnemyAi_c *v46; // x9
  struct AiEntity_o *noThinkAiEnt; // x2
  struct BattleData_o *v48; // x8
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct BattleLogicTarget_o *logictarget; // x8
  struct System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x1
  AiEntity_o *v53; // x25
  BattleLogicTarget_o *v54; // x26
  int32_t uniqueId; // w28
  Il2CppClass *klass; // x29
  System_Int32_array *FieldPlayerServantIDList; // x0
  Il2CppObject *v58; // x27
  System_Int32_array *v59; // x22
  const MethodInfo *v60; // x2
  int32_t TargetAiAct; // w0
  BattleLogicTarget_o *v62; // x25
  int32_t v63; // w26
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  BattleCommandData_o *v66; // x22
  BattleComboData_o *v67; // x24
  struct BattleData_o *v68; // x8
  int32_t TreasureDvcId; // w0
  __int64 v70; // x22
  __int64 v71; // x0
  __int64 v72; // x1
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  const MethodInfo *v75; // x3
  __int64 v76; // x0
  int32_t monitor; // [xsp+24h] [xbp-7Ch]
  AiLogic_AiInfo_o *v78; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+30h] [xbp-70h] BYREF
  AiLogic_AiInfo_o *info; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4A512F6 & 1) == 0 )
  {
    sub_1B863B8(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_1B863B8(&BattleCommandData_TypeInfo, v6);
    sub_1B863B8(&Method_BattleLogicEnemyAi_IsNotTempDeadSvt__, v7);
    sub_1B863B8(&BattleLogicTask___TypeInfo, v8);
    sub_1B863B8(&BattleLogicTask_TypeInfo, v9);
    sub_1B863B8(&Method_DataManager_GetMasterData_AiActMaster___, v10);
    sub_1B863B8(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v11);
    sub_1B863B8(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__, v12);
    sub_1B863B8(&System_Func_BattleServantData__bool__TypeInfo, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleServantData__RemoveAt__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v17);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleServantData__get_Item__, v18);
    sub_1B863B8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v19);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v20);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_4A512F6 = 1;
  }
  entity = 0LL;
  info = 0LL;
  v78 = 0LL;
  v22 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  if ( !data )
    goto LABEL_68;
  perf = (UnityEngine_Object_o *)data->fields.perf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(perf, 0LL, 0LL) )
  {
    Instance = (__int64)data->fields.perf;
    if ( !Instance )
      goto LABEL_68;
    BattlePerformance__setOffTarget((BattlePerformance_o *)Instance, 0LL);
  }
  v26 = this->fields.data;
  v27 = (System_Func_object__bool__o *)sub_1B86604(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(v27, (Il2CppObject *)this, Method_BattleLogicEnemyAi_IsNotTempDeadSvt__, 0LL);
  if ( !v26 )
    goto LABEL_68;
  Instance = BattleData__CheckAlivePlayers(v26, (System_Func_BattleServantData__bool__o *)v27, 0LL);
  if ( (Instance & 1) == 0 )
    return (System_Collections_Generic_List_BattleLogicTask__o *)v22;
  v28 = this->fields.data;
  if ( !v28 )
    goto LABEL_68;
  if ( !v28->fields.leaderDown && !v28->fields.endbattleFlg )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_AiActMaster___);
      this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.aiActMst, (int32_t)MasterData_object, v31, v32);
      BattleLogicEnemyAi__updateActPriorityList(this, v33);
      Instance = (__int64)this->fields.actlist;
      if ( Instance )
      {
        if ( *(int *)(Instance + 24) <= 0 )
        {
          v43 = this->fields.data;
          if ( v43 )
          {
            ++v43->fields.countEnemyAttack;
            return (System_Collections_Generic_List_BattleLogicTask__o *)v22;
          }
        }
        else
        {
          Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                0,
                                (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
          if ( this->fields.actlist )
          {
            v34 = (BattleServantData_o *)Instance;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this->fields.actlist,
              0,
              (const MethodInfo_35FE12C *)Method_System_Collections_Generic_List_BattleServantData__RemoveAt__);
            if ( v34 )
            {
              if ( !BattleServantData__isAlive(v34, 0, 0LL)
                || !BattleLogicEnemyAi__IsNotTempDeadSvt(this, v34, v35)
                || !v34->fields.isEntry )
              {
                return (System_Collections_Generic_List_BattleLogicTask__o *)v22;
              }
              if ( !BattleServantData__isAction(v34, 0LL) )
              {
LABEL_47:
                BattleLogicEnemyAi__AddActCount(this, v34, v36);
                return (System_Collections_Generic_List_BattleLogicTask__o *)v22;
              }
              Instance = BattleServantData__isTDSeraled(v34, 0LL);
              if ( (Instance & 1) == 0
                && (Instance = BattleServantData__checkUseTDvc(v34, this->fields.data, 1, 0LL), (Instance & 1) != 0)
                && (TreasureDvcCommand = BattleServantData__MakeTreasureDvcCommand(v34, 0LL),
                    Instance = BattleServantData__IsCardAction(v34, TreasureDvcCommand, 0LL),
                    (Instance & 1) != 0) )
              {
                Instance = (__int64)BattleLogicEnemyAi__taskAIEnemyMaxNp(this, v34->fields.uniqueId, v38);
                if ( !Instance )
                  goto LABEL_68;
                v24 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
                if ( *(_QWORD *)(Instance + 24) )
                {
LABEL_67:
                  if ( !v22 )
                    goto LABEL_68;
                  goto LABEL_46;
                }
                p_aiActMst = &this->fields.aiActMst;
                v40 = (BattleLogicTask_o *)sub_1B86604(BattleLogicTask_TypeInfo);
                BattleLogicTask___ctor(v40, 0LL);
                if ( v40 )
                {
                  BattleLogicTask__setActor(v40, 3, v34->fields.uniqueId, 0LL);
                  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( Instance )
                  {
                    v41 = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                    Instance = BattleServantData__getTreasureDvcId(v34, 1, 0LL, 0LL);
                    if ( v41 )
                    {
                      Instance = (__int64)TreasureDvcLvMaster__GetEntity(
                                            (TreasureDvcLvMaster_o *)v41,
                                            Instance,
                                            v34->fields.treasuredvcLevel,
                                            0LL);
                      if ( Instance )
                      {
                        if ( !this->fields.logic )
                          goto LABEL_68;
                        Instance = BattleLogic__checkEnemyTargetFunction(
                                     this->fields.logic,
                                     *(System_Int32_array **)(Instance + 32),
                                     0LL,
                                     0LL);
                        v42 = Instance;
                      }
                      else
                      {
                        v42 = 1;
                      }
                      v48 = this->fields.data;
                      if ( v48 )
                      {
                        Instance = (__int64)this->fields.aiLogic;
                        if ( Instance )
                        {
                          Instance = (__int64)AiLogic__getAction(
                                                (AiLogic_o *)Instance,
                                                v34,
                                                8,
                                                data->fields.turnCount,
                                                v48->fields.countEnemyAttack,
                                                (BattleLogicBaseAi_o *)this,
                                                &v78,
                                                0,
                                                0LL);
                          entity = 0LL;
                          logictarget = this->fields.logictarget;
                          if ( logictarget )
                          {
                            tempDeadSvtHash = this->fields.tempDeadSvtHash;
                            v53 = (AiEntity_o *)Instance;
                            logictarget->fields.tempDeadSvtHash = tempDeadSvtHash;
                            sub_1B8635C(
                              (CGThumbnailListItem_o *)&logictarget->fields.tempDeadSvtHash,
                              (int32_t)tempDeadSvtHash,
                              v49,
                              v50);
                            if ( !v53 )
                              goto LABEL_58;
                            Instance = (__int64)*p_aiActMst;
                            if ( !*p_aiActMst )
                              goto LABEL_68;
                            Instance = DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                         &entity,
                                         v53->fields.aiActId,
                                         (const MethodInfo_32142CC *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
                            if ( (Instance & 1) != 0 )
                            {
                              if ( !entity )
                                goto LABEL_68;
                              v54 = this->fields.logictarget;
                              uniqueId = v34->fields.uniqueId;
                              klass = entity[2].klass;
                              monitor = (int32_t)entity[1].monitor;
                              FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
                              v58 = entity;
                              v59 = FieldPlayerServantIDList;
                              Instance = BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(this, v53, v60);
                              if ( !v54 )
                                goto LABEL_68;
                              TargetAiAct = BattleLogicTarget__getTargetAiAct(
                                              v54,
                                              monitor,
                                              uniqueId,
                                              (System_Int32_array *)klass,
                                              v59,
                                              v42 & 1,
                                              0,
                                              0LL,
                                              (AiActEntity_o *)v58,
                                              Instance & 1,
                                              0LL);
                            }
                            else
                            {
LABEL_58:
                              v62 = this->fields.logictarget;
                              v63 = v34->fields.uniqueId;
                              Instance = (__int64)BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
                              if ( !v62 )
                                goto LABEL_68;
                              TargetAiAct = BattleLogicTarget__getTargetAiAct(
                                              v62,
                                              1,
                                              v63,
                                              0LL,
                                              (System_Int32_array *)Instance,
                                              v42 & 1,
                                              0,
                                              0LL,
                                              (AiActEntity_o *)entity,
                                              1,
                                              0LL);
                            }
                            BattleLogicTask__setTarget(v40, TargetAiAct, 0LL);
                            Instance = (__int64)this->fields.logictarget;
                            if ( Instance )
                            {
                              *(_QWORD *)(Instance + 24) = 0LL;
                              sub_1B8635C((CGThumbnailListItem_o *)(Instance + 24), 0, v64, v65);
                              v66 = (BattleCommandData_o *)sub_1B86604(BattleCommandData_TypeInfo);
                              BattleCommandData___ctor(v66, 0LL);
                              Instance = BattleServantData__getTreasureDvcCardId(v34, 0LL);
                              if ( v66 )
                              {
                                v66->fields._type = Instance;
                                v66->fields.svtlimit = BattleServantData__getDispLimitCount(v34, 1, 0LL);
                                v66->fields.uniqueId = v34->fields.uniqueId;
                                v66->fields.svtId = BattleServantData__getSvtId(v34, 0LL);
                                v66->fields.treasureDvc = BattleServantData__getTreasureDvcId(v34, 1, 0LL, 0LL);
                                v67 = (BattleComboData_o *)sub_1B86604(BattleComboData_TypeInfo);
                                BattleComboData___ctor(v67, 0LL);
                                v68 = this->fields.data;
                                if ( v68 )
                                {
                                  BattleLogicTask__setActionCommand(v40, v67, v66, v68->fields.countEnemyAttack, 0LL);
                                  TreasureDvcId = BattleServantData__getTreasureDvcId(v34, 1, 0LL, 0LL);
                                  BattleLogicTask__setActionTreasureDvc(v40, TreasureDvcId, 1, 0LL);
                                  Instance = sub_1B86460(BattleLogicTask___TypeInfo, 1LL);
                                  if ( Instance )
                                  {
                                    v70 = Instance;
                                    v71 = sub_1B864F4(v40, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
                                    if ( !v71 )
                                    {
                                      v76 = sub_1B86638(0LL);
                                      sub_1B864E0(v76, 0LL);
                                    }
                                    if ( !*(_DWORD *)(v70 + 24) )
                                      sub_1B8661C(v71, v72);
                                    *(_QWORD *)(v70 + 32) = v40;
                                    sub_1B8635C((CGThumbnailListItem_o *)(v70 + 32), (int32_t)v40, v73, v74);
                                    Instance = (__int64)BattleLogicEnemyAi__ReplaceCommandTasksBySealStatus(
                                                          this,
                                                          v34,
                                                          (BattleLogicTask_array *)v70,
                                                          v75);
                                    v24 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
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
                v44 = this->fields.data;
                if ( v44 )
                {
                  Instance = (__int64)this->fields.aiLogic;
                  if ( Instance )
                  {
                    Instance = (__int64)AiLogic__getAction(
                                          (AiLogic_o *)Instance,
                                          v34,
                                          1,
                                          data->fields.turnCount,
                                          v44->fields.countEnemyAttack,
                                          (BattleLogicBaseAi_o *)this,
                                          &info,
                                          0,
                                          0LL);
                    v45 = this->fields.data;
                    if ( Instance )
                    {
                      if ( !v45 )
                        goto LABEL_68;
                      v46 = this->klass;
                      noThinkAiEnt = (struct AiEntity_o *)Instance;
                    }
                    else
                    {
                      if ( !v45 )
                        goto LABEL_68;
                      v46 = this->klass;
                      noThinkAiEnt = this->fields.noThinkAiEnt;
                    }
                    Instance = ((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, struct AiEntity_o *, _QWORD, AiLogic_AiInfo_o *, __int64, Il2CppMethodPointer))v46->vtable._21_procAiAct.method)(
                                 this,
                                 v34,
                                 noThinkAiEnt,
                                 (unsigned int)v45->fields.countEnemyAttack,
                                 info,
                                 1LL,
                                 v46->vtable._22_ExistThinking.methodPtr);
                    if ( v22 )
                    {
                      v24 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
LABEL_46:
                      System_Collections_Generic_List_object___AddRange(
                        v22,
                        v24,
                        (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
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
    sub_1B86614(Instance, v24);
  }
  return (System_Collections_Generic_List_BattleLogicTask__o *)v22;
}


void __fastcall BattleLogicEnemyAi__ExcludeDeadFromTempDead(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x20
  Il2CppObject *data; // x19
  System_Predicate_int__o *v7; // x21

  if ( (byte_4A51304 & 1) == 0 )
  {
    sub_1B863B8(&Method_BattleData_IsNotAliveTarget__, method);
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__, v3);
    sub_1B863B8(&System_Predicate_int__TypeInfo, v4);
    byte_4A51304 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
  {
    data = (Il2CppObject *)this->fields.data;
    v7 = (System_Predicate_int__o *)sub_1B86604(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(v7, data, Method_BattleData_IsNotAliveTarget__, 0LL);
    System_Collections_Generic_HashSet_int___RemoveWhere(
      tempDeadSvtHash,
      (System_Predicate_T__o *)v7,
      (const MethodInfo_34B8F48 *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
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

  if ( (byte_4A51301 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, servantData);
    byte_4A51301 = 1;
  }
  data = (UnityEngine_Object_o *)this->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  StageEntity = (BattleData_o *)UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
  if ( ((unsigned __int8)StageEntity & 1) == 0 )
    goto LABEL_11;
  StageEntity = this->fields.data;
  if ( !StageEntity )
    goto LABEL_13;
  StageEntity = (BattleData_o *)BattleData__getStageEntity(StageEntity, 0LL);
  if ( !StageEntity )
  {
LABEL_11:
    if ( servantData )
      return BattleServantData__getCommandList(servantData, 0LL);
LABEL_13:
    sub_1B86614(StageEntity, v7);
  }
  StageEntity = (BattleData_o *)StageEntity__GetAiActTypeAttackCommandCardType(
                                  (StageEntity_o *)StageEntity,
                                  servantData,
                                  0LL);
  if ( !servantData )
    goto LABEL_13;
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x1
  AiLogic_o *aiLogic; // x0
  AiEntity_o *v12; // x20
  struct AiEntity_o **p_noThinkAiEnt; // x19
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct AiEntity_o *v16; // x19

  if ( (byte_4A512F2 & 1) == 0 )
  {
    sub_1B863B8(&AiEntity_TypeInfo, data);
    sub_1B863B8(&AiLogic_TypeInfo, v5);
    sub_1B863B8(&StringLiteral_9147/*"NOTHINK_AIACTID"*/, v6);
    byte_4A512F2 = 1;
  }
  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, method);
  v7 = (AiLogic_o *)sub_1B86604(AiLogic_TypeInfo);
  AiLogic___ctor(v7, 0LL);
  this->fields.aiLogic = v7;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.aiLogic, (int32_t)v7, v8, v9);
  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    goto LABEL_6;
  AiLogic__Initialize(aiLogic, data, 0LL);
  v12 = (AiEntity_o *)sub_1B86604(AiEntity_TypeInfo);
  AiEntity___ctor(v12, 0LL);
  this->fields.noThinkAiEnt = v12;
  p_noThinkAiEnt = &this->fields.noThinkAiEnt;
  sub_1B8635C((CGThumbnailListItem_o *)p_noThinkAiEnt, (int32_t)v12, v14, v15);
  v16 = *p_noThinkAiEnt;
  aiLogic = (AiLogic_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_9147/*"NOTHINK_AIACTID"*/, 0LL);
  if ( !v16 )
LABEL_6:
    sub_1B86614(aiLogic, v10);
  v16->fields.aiActId = (int)aiLogic;
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
    sub_1B86614(0LL, aiEnt);
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
  if ( (byte_4A51305 & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_1B863B8(&Method_BasicHelper_ContainsSelfNotNull_int___, svtData);
    byte_4A51305 = 1;
  }
  if ( !svtData )
    sub_1B86614(this, svtData);
  return !BasicHelper__ContainsSelfNotNull_int_(
            (System_Collections_Generic_HashSet_T__o *)v4->fields.tempDeadSvtHash,
            svtData->fields.uniqueId,
            (const MethodInfo_2F58234 *)Method_BasicHelper_ContainsSelfNotNull_int___);
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
  const MethodInfo *v10; // x2

  CommandRandomTask = derivedTask;
  IsSealedCommandTask = BattleLogicServantAi__IsSealedCommandTask(svtData, derivedTask, (const MethodInfo *)derivedTask);
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
    IsSealedCommandTask = BattleLogicServantAi__IsSealedCommandTask(svtData, CommandRandomTask, v10);
    if ( IsSealedCommandTask )
    {
      if ( CommandRandomTask )
        goto LABEL_6;
LABEL_8:
      sub_1B86614(IsSealedCommandTask, v8);
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
  __int64 v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Func_object__object__o *v18; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_4A51300 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Select_BattleLogicTask__BattleLogicTask___, svtData);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_BattleLogicTask___, v7);
    sub_1B863B8(&System_Func_BattleLogicTask__BattleLogicTask__TypeInfo, v8);
    sub_1B863B8(&Method_BattleLogicEnemyAi___c__DisplayClass36_0__ReplaceCommandTasksBySealStatus_b__0__, v9);
    sub_1B863B8(&BattleLogicEnemyAi___c__DisplayClass36_0_TypeInfo, v10);
    byte_4A51300 = 1;
  }
  v11 = sub_1B86604(BattleLogicEnemyAi___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B86614(v12, v13);
  *(_QWORD *)(v11 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = svtData;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)svtData, v16, v17);
  v18 = (System_Func_object__object__o *)sub_1B86604(System_Func_BattleLogicTask__BattleLogicTask__TypeInfo);
  System_Func_object__object____ctor(
    v18,
    (Il2CppObject *)v11,
    Method_BattleLogicEnemyAi___c__DisplayClass36_0__ReplaceCommandTasksBySealStatus_b__0__,
    0LL);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)derivedTasks,
                                                               (System_Func_TSource__TResult__o *)v18,
                                                               (const MethodInfo_2FA1274 *)Method_System_Linq_Enumerable_Select_BattleLogicTask__BattleLogicTask___);
  return (BattleLogicTask_array *)System_Linq_Enumerable__ToArray_object_(
                                    v19,
                                    (const MethodInfo_2FA98D8 *)Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
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
  if ( (byte_4A51307 & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_1B863B8(&Method_WeightRate_int__setWeight__, weight);
    byte_4A51307 = 1;
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
      (const MethodInfo_39D8484 *)Method_WeightRate_int__setWeight__);
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
      (const MethodInfo_39D8484 *)Method_WeightRate_int__setWeight__);
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
        (const MethodInfo_39D8484 *)Method_WeightRate_int__setWeight__);
      return;
    }
LABEL_14:
    sub_1B86614(this, weight);
  }
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicEnemyAi__TaskAIAttackEnd(
        BattleLogicEnemyAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  BattleLogicEnemyAi__ClearTempDeadSvt(this, *(const MethodInfo **)&ltype);
  this->fields.tempDeadSvtHash = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.tempDeadSvtHash, 0, v5, v6);
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
  System_Collections_Generic_List_object__o *v10; // x20
  __int64 v11; // x21
  bool isClearTempDeadSvtPrevAct; // w23
  CheckEnemyRelationInterruptProcess_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4A512F4 & 1) == 0 )
  {
    sub_1B863B8(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_1B863B8(&CheckEnemyRelationInterruptProcess_TypeInfo, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    sub_1B863B8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    byte_4A512F4 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v11 = sub_1B86604(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v11, 0LL);
  isClearTempDeadSvtPrevAct = this->fields.isClearTempDeadSvtPrevAct;
  v13 = (CheckEnemyRelationInterruptProcess_o *)sub_1B86604(CheckEnemyRelationInterruptProcess_TypeInfo);
  CheckEnemyRelationInterruptProcess___ctor(v13, isClearTempDeadSvtPrevAct, 0LL);
  if ( !v11
    || (*(_QWORD *)(v11 + 296) = v13,
        sub_1B8635C((CGThumbnailListItem_o *)(v11 + 296), (int32_t)v13, v16, v17),
        *(_BYTE *)(v11 + 265) = 1,
        !v10)
    || (items = v10->fields._items,
        v21 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v10->fields._version,
        !items) )
  {
    sub_1B86614(v14, v15);
  }
  size = v10->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v11,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    v10->fields._size = size + 1;
    v23[4] = (Il2CppClass *)v11;
    sub_1B8635C((CGThumbnailListItem_o *)(v23 + 4), v11, v18, v19);
  }
  this->fields.isClearTempDeadSvtPrevAct = 0;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4A512F3 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_int___ctor__, *(_QWORD *)&ltype);
    sub_1B863B8(&System_Collections_Generic_HashSet_int__TypeInfo, v5);
    byte_4A512F3 = 1;
  }
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_1B86604(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_34B7810 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.tempDeadSvtHash = v6;
  p_tempDeadSvtHash = &this->fields.tempDeadSvtHash;
  sub_1B8635C((CGThumbnailListItem_o *)p_tempDeadSvtHash, (int32_t)v6, v8, v9);
  *((_BYTE *)p_tempDeadSvtHash + 8) = 0;
  return 0LL;
}


void __fastcall BattleLogicEnemyAi__addEnemyActPriorityList(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *inSvtData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *actlist; // x0

  if ( (byte_4A512F9 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleServantData__Insert__, inSvtData);
    byte_4A512F9 = 1;
  }
  actlist = (System_Collections_Generic_List_object__o *)this->fields.actlist;
  if ( !actlist )
    sub_1B86614(0LL, inSvtData);
  System_Collections_Generic_List_object___Insert(
    actlist,
    0,
    (Il2CppObject *)inSvtData,
    (const MethodInfo_35FD708 *)Method_System_Collections_Generic_List_BattleServantData__Insert__);
}


BattleLogicTask_o *__fastcall BattleLogicEnemyAi__createCommandRandomTask(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        int32_t targetId,
        int32_t countAct,
        BattleLogicTask_o *baseTask,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  BattleLogicTask_o *v18; // x22
  System_Int32_array *CommandList; // x0
  __int64 v20; // x1
  int32_t Type; // w24
  WeightRate_int__o *v22; // x23
  __int64 v23; // x8
  System_Int32_array *v24; // x24
  unsigned __int64 v25; // x25
  int32_t Next; // w0
  int32_t Data; // w23
  int32_t SvtId; // w25
  int32_t DispLimitCount; // w26
  BattleCommandData_o *v30; // x23
  int32_t v31; // w1
  BattleComboData_o *v32; // x20

  if ( (byte_4A512FF & 1) == 0 )
  {
    sub_1B863B8(&BattleComboData_TypeInfo, svtData);
    sub_1B863B8(&BattleCommandData_TypeInfo, v10);
    sub_1B863B8(&BattleCommand_TypeInfo, v11);
    sub_1B863B8(&BattleLogicTask_TypeInfo, v12);
    sub_1B863B8(&Method_WeightRate_int___ctor__, v13);
    sub_1B863B8(&Method_WeightRate_int__getData__, v14);
    sub_1B863B8(&Method_WeightRate_int__getTotalWeight__, v15);
    sub_1B863B8(&Method_WeightRate_int__setWeight__, v16);
    sub_1B863B8(&WeightRate_int__TypeInfo, v17);
    byte_4A512FF = 1;
  }
  v18 = (BattleLogicTask_o *)sub_1B86604(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v18, 0LL);
  if ( !v18 )
    goto LABEL_23;
  BattleLogicTask__setTarget(v18, targetId, 0LL);
  if ( !svtData )
    goto LABEL_23;
  BattleLogicTask__setActor(v18, 3, svtData->fields.uniqueId, 0LL);
  if ( SvtType__IsEnemy_38667196(svtData->fields.svtType, 0LL) )
  {
    Type = 10;
    goto LABEL_17;
  }
  v22 = (WeightRate_int__o *)sub_1B86604(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v22, (const MethodInfo_39D8F68 *)Method_WeightRate_int___ctor__);
  CommandList = BattleServantData__getCommandList(svtData, 0LL);
  if ( !CommandList )
    goto LABEL_23;
  v23 = *(_QWORD *)&CommandList->max_length;
  v24 = CommandList;
  if ( (int)v23 >= 1 )
  {
    v25 = 0LL;
    while ( 1 )
    {
      if ( v25 >= (unsigned int)v23 )
        sub_1B8661C(CommandList, v20);
      if ( !v22 )
        break;
      WeightRate_int___setWeight(
        v22,
        10,
        v24->m_Items[v25 + 1],
        (const MethodInfo_39D8484 *)Method_WeightRate_int__setWeight__);
      LODWORD(v23) = v24->max_length;
      if ( (__int64)++v25 >= (int)v23 )
        goto LABEL_13;
    }
LABEL_23:
    sub_1B86614(CommandList, v20);
  }
LABEL_13:
  if ( !v22 )
    goto LABEL_23;
  Next = BattleRandom__getNext(v22->fields.totalweight, 0LL);
  Data = WeightRate_int___getData(v22, Next, (const MethodInfo_39D88F8 *)Method_WeightRate_int__getData__);
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  Type = BattleCommand__getType(Data, 0LL);
LABEL_17:
  SvtId = BattleServantData__getSvtId(svtData, 0LL);
  DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
  v30 = (BattleCommandData_o *)sub_1B86604(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_44503096(v30, Type, SvtId, DispLimitCount, 0, -1, 0LL);
  if ( !v30 )
    goto LABEL_23;
  v30->fields.uniqueId = svtData->fields.uniqueId;
  if ( !baseTask )
    goto LABEL_23;
  if ( baseTask->fields.isNoCriticalOnAttack )
    v31 = 3;
  else
    v31 = 1;
  BattleCommandData__SetCriticalDecisionType(v30, v31, 0LL);
  v18->fields.isNoCriticalOnAttack = baseTask->fields.isNoCriticalOnAttack;
  v32 = (BattleComboData_o *)sub_1B86604(BattleComboData_TypeInfo);
  BattleComboData___ctor(v32, 0LL);
  BattleLogicTask__setActionCommand(v18, v32, v30, countAct, 0LL);
  return v18;
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
    sub_1B86614(0LL, method);
  return BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
}


System_Int32_array *__fastcall BattleLogicEnemyAi__get_PartySvtIds(
        BattleLogicEnemyAi_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1B86614(0LL, method);
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
  __int64 v16; // x25
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x6
  BattleLogicTask_array *v22; // x20
  const MethodInfo *v23; // x3
  BattleLogicTask_array *v24; // x19
  System_Action_object__o *v25; // x21

  if ( (byte_4A512FA & 1) == 0 )
  {
    sub_1B863B8(&System_Action_BattleLogicTask__TypeInfo, svtData);
    sub_1B863B8(&Method_BasicHelper_ForEach_BattleLogicTask___, v13);
    sub_1B863B8(&Method_BattleLogicEnemyAi___c__DisplayClass25_0__procAiAct_b__0__, v14);
    sub_1B863B8(&BattleLogicEnemyAi___c__DisplayClass25_0_TypeInfo, v15);
    byte_4A512FA = 1;
  }
  v16 = sub_1B86604(BattleLogicEnemyAi___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    sub_1B86614(v17, v18);
  *(_QWORD *)(v16 + 16) = svtData;
  sub_1B8635C((CGThumbnailListItem_o *)(v16 + 16), (int32_t)svtData, v19, v20);
  v22 = BattleLogicEnemyAi__procAiActLocal(
          this,
          *(BattleServantData_o **)(v16 + 16),
          aiEnt,
          countAct,
          aiInfo,
          procState,
          v21);
  v24 = BattleLogicEnemyAi__ReplaceCommandTasksBySealStatus(this, *(BattleServantData_o **)(v16 + 16), v22, v23);
  v25 = (System_Action_object__o *)sub_1B86604(System_Action_BattleLogicTask__TypeInfo);
  System_Action_object____ctor(
    v25,
    (Il2CppObject *)v16,
    Method_BattleLogicEnemyAi___c__DisplayClass25_0__procAiAct_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)v22,
    (System_Action_T__o *)v25,
    (const MethodInfo_2F59FB0 *)Method_BasicHelper_ForEach_BattleLogicTask___);
  return v24;
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
  BattleLogicEnemyAi_o *v12; // x22
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
  __int64 v31; // x1
  int32_t data_high; // w27
  AiActEntity_o *v33; // x23
  BattleLogicBaseAi_o *v34; // x0
  const MethodInfo *v35; // x4
  bool v37; // w28
  WeightRate_int__o *v38; // x21
  int32_t Int; // w0
  int32_t v40; // w0
  int32_t v41; // w0
  BattleServantData_o *v42; // x0
  int32_t v43; // w1
  int *skillVals; // x8
  int32_t v45; // w21
  int32_t v46; // w26
  int32_t Next; // w0
  int32_t Data; // w0
  System_Collections_Generic_List_object__o *v49; // x27
  __int64 v50; // x26
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct System_String_o *infoText; // x1
  bool v54; // w21
  __int64 v55; // x20
  const MethodInfo *v56; // x4
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x4
  System_String_o *v60; // x0
  System_String_o *v61; // x0
  struct BattleLogic_o *v62; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  Il2CppClass **v71; // x0
  Il2CppObject *MasterData_object; // x20
  BattleSkillInfoData_o *SkillInfoDataByAiActType; // x0
  SkillLvEntity_o *Entity; // x28
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  bool IsEnableTarget; // w29
  BattleLogic_o *logic; // x20
  struct BattleLogicTarget_o *funcId; // x21
  BattleLogicEnemyAi_o *v80; // x2
  BattleLogic_o *v81; // x0
  struct BattleLogicTarget_o *logictarget; // x1
  System_Collections_Generic_List_object__o *v83; // x0
  Il2CppObject *v84; // x20
  struct BattleLogic_o *tempDeadSvtHash; // x1
  BattleData_o *v86; // x8
  BattleLogicTarget_o *v87; // x20
  int32_t target; // w25
  int32_t uniqueId; // w27
  System_Int32_array *targetIndividuality; // x28
  System_Int32_array *FieldPlayerServantIDList; // x21
  const MethodInfo *v92; // x2
  BattleLogicTarget_o *v93; // x20
  int32_t v94; // w25
  int32_t v95; // w27
  System_Int32_array *v96; // x28
  System_Int32_array *v97; // x29
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  int32_t v102; // w27
  System_Collections_Generic_List_object__o *v103; // x28
  int32_t Type; // w24
  const MethodInfo *v105; // x5
  const MethodInfo *v106; // x3
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  struct System_Object_array *items; // x8
  _QWORD *v110; // x9
  __int64 size; // x10
  Il2CppClass **v112; // x0
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  BattleCommandData_o *v115; // x22
  BattleComboData_o *v116; // x20
  int32_t TreasureDvcId; // w0
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  BattleLogicTask_o *v120; // x19
  struct System_Object_array *v121; // x8
  _QWORD *v122; // x9
  __int64 v123; // x10
  Il2CppClass **v124; // x0
  CGThumbnailListItem_o *v125; // x0
  int32_t v126; // w1
  __int64 v127; // x8
  System_Collections_Generic_List_object__o *v128; // x0
  Il2CppObject *v129; // x1
  WeightRate_int__o *v130; // x24
  const MethodInfo *v131; // x2
  struct BattleLogic_o *v132; // x8
  BattleLogicEnemyAi_o *v133; // x22
  unsigned __int64 v134; // x20
  int32_t v135; // w0
  int32_t v136; // w20
  struct System_Int32_array *FixCommandCardIds; // x0
  int32_t v138; // w2
  const MethodInfo *v139; // x3
  int32_t SvtId; // w20
  int32_t DispLimitCount; // w21
  BattleCommandData_o *v142; // x22
  int32_t v143; // w1
  BattleComboData_o *v144; // x19
  struct System_Object_array *v145; // x8
  _QWORD *v146; // x9
  __int64 v147; // x10
  __int64 v148; // x0
  int32_t v149; // [xsp+24h] [xbp-9Ch]
  System_Collections_Generic_List_object__o *v150; // [xsp+28h] [xbp-98h]
  int32_t v151; // [xsp+34h] [xbp-8Ch]
  System_Int32_array *targetlist; // [xsp+38h] [xbp-88h]
  BattleSkillInfoData_o *v153; // [xsp+40h] [xbp-80h]
  int32_t lv; // [xsp+4Ch] [xbp-74h] BYREF
  int32_t id[2]; // [xsp+50h] [xbp-70h] BYREF
  int32_t aiActType; // [xsp+58h] [xbp-68h] BYREF
  bool noMessage; // [xsp+5Ch] [xbp-64h] BYREF

  v12 = this;
  if ( (byte_4A512FB & 1) == 0 )
  {
    sub_1B863B8(&BattleComboData_TypeInfo, svtData);
    sub_1B863B8(&BattleCommandData_TypeInfo, v13);
    sub_1B863B8(&BattleCommand_TypeInfo, v14);
    sub_1B863B8(&BattleLogicTask_TypeInfo, v15);
    sub_1B863B8(&Method_DataManager_GetMasterData_SkillLvMaster___, v16);
    sub_1B863B8(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v17);
    sub_1B863B8(&int___TypeInfo, v18);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v19);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v20);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v21);
    sub_1B863B8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v22);
    sub_1B863B8(&ServantAiActArgument_TypeInfo, v23);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1B863B8(&Method_WeightRate_int___ctor__, v25);
    sub_1B863B8(&Method_WeightRate_int__getCount__, v26);
    sub_1B863B8(&Method_WeightRate_int__getData__, v27);
    sub_1B863B8(&Method_WeightRate_int__getTotalWeight__, v28);
    sub_1B863B8(&Method_WeightRate_int__setWeight__, v29);
    sub_1B863B8(&WeightRate_int__TypeInfo, v30);
    this = (BattleLogicEnemyAi_o *)sub_1B863B8(&StringLiteral_8587/*"MOTION_"*/, v31);
    byte_4A512FB = 1;
  }
  *(_QWORD *)id = 0LL;
  lv = 0;
  noMessage = 0;
  if ( !aiEnt )
    goto LABEL_171;
  this = (BattleLogicEnemyAi_o *)BattleLogicBaseAi__GetAiActEntity(
                                   (BattleLogicBaseAi_o *)v12,
                                   aiEnt->fields.aiActId,
                                   (const MethodInfo *)aiEnt);
  if ( !this )
    goto LABEL_171;
  data_high = HIDWORD(this->fields.data);
  v33 = (AiActEntity_o *)this;
  aiActType = data_high;
  if ( !svtData )
    goto LABEL_171;
  v34 = (BattleLogicBaseAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._18_getAiState.method)(
                                 svtData,
                                 svtData->klass->vtable._19_ExistAiThinking.methodPtr);
  if ( BattleLogicBaseAi__IsChangeThinkingOnly(v34, data_high, (AiBaseEntity_o *)aiEnt, (AiState_o *)v34, v35) )
    return v12->fields.emptyTask;
  v37 = procState != 1 || BattleServantData__canUseSkill(svtData, -1, 0LL);
  v38 = (WeightRate_int__o *)sub_1B86604(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v38, (const MethodInfo_39D8F68 *)Method_WeightRate_int___ctor__);
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
      if ( !v37 )
        goto LABEL_58;
      if ( !BattleServantData__isUseSelfSkill(svtData, 0, 0LL) )
        goto LABEL_19;
      this = (BattleLogicEnemyAi_o *)AiAct__getInt(11, 0LL);
      if ( !v38 )
        goto LABEL_171;
      WeightRate_int___setWeight(v38, 10, (int32_t)this, (const MethodInfo_39D8484 *)Method_WeightRate_int__setWeight__);
LABEL_19:
      if ( !BattleServantData__isUseSelfSkill(svtData, 1, 0LL) )
        goto LABEL_22;
      this = (BattleLogicEnemyAi_o *)AiAct__getInt(12, 0LL);
      if ( !v38 )
        goto LABEL_171;
      WeightRate_int___setWeight(v38, 10, (int32_t)this, (const MethodInfo_39D8484 *)Method_WeightRate_int__setWeight__);
LABEL_22:
      this = (BattleLogicEnemyAi_o *)BattleServantData__isUseSelfSkill(svtData, 2, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleLogicEnemyAi_o *)AiAct__getInt(13, 0LL);
        if ( !v38 )
          goto LABEL_171;
        WeightRate_int___setWeight(
          v38,
          10,
          (int32_t)this,
          (const MethodInfo_39D8484 *)Method_WeightRate_int__setWeight__);
      }
      else
      {
LABEL_58:
        if ( !v38 )
          goto LABEL_171;
      }
      if ( WeightRate_int___getCount(v38, (const MethodInfo_39D8840 *)Method_WeightRate_int__getCount__) >= 1 )
        goto LABEL_60;
      goto LABEL_61;
    case 11:
      if ( !v37 )
      {
        aiActType = 2;
        noMessage = 1;
      }
      v42 = svtData;
      v43 = 0;
      goto LABEL_41;
    case 12:
      if ( !v37 )
      {
        aiActType = 2;
        noMessage = 1;
      }
      v43 = 1;
      v42 = svtData;
LABEL_41:
      if ( !BattleServantData__isUseSelfSkill(v42, v43, 0LL) )
        aiActType = 2;
      goto LABEL_62;
    case 13:
      if ( !v37 )
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
        skillVals = (int *)v33->fields.skillVals;
        if ( !skillVals )
          goto LABEL_171;
        if ( skillVals[6] <= 1 )
        {
LABEL_137:
          aiActType = 0;
          goto LABEL_62;
        }
        if ( v37 || data_high != 41 )
        {
          v45 = skillVals[8];
          v46 = skillVals[9];
          this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_171;
          this = (BattleLogicEnemyAi_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
          if ( !this )
            goto LABEL_171;
          if ( SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v45, v46, 0LL) )
          {
            BattleServantData__addSkillInfo(svtData, 20, 0, v45, v46, -1LL, -1, 0LL, 0LL);
            goto LABEL_62;
          }
          goto LABEL_137;
        }
LABEL_61:
        aiActType = 2;
        noMessage = 1;
        goto LABEL_62;
      }
      this = (BattleLogicEnemyAi_o *)AiAct__getInt(2, 0LL);
      if ( !v38 )
        goto LABEL_171;
      WeightRate_int___setWeight(v38, 10, (int32_t)this, (const MethodInfo_39D8484 *)Method_WeightRate_int__setWeight__);
      if ( v37 )
      {
        if ( BattleServantData__isUseSelfSkill(svtData, 0, 0LL) )
        {
          Int = AiAct__getInt(11, 0LL);
          WeightRate_int___setWeight(v38, 10, Int, (const MethodInfo_39D8484 *)Method_WeightRate_int__setWeight__);
        }
        if ( BattleServantData__isUseSelfSkill(svtData, 1, 0LL) )
        {
          v40 = AiAct__getInt(12, 0LL);
          WeightRate_int___setWeight(v38, 10, v40, (const MethodInfo_39D8484 *)Method_WeightRate_int__setWeight__);
        }
        if ( BattleServantData__isUseSelfSkill(svtData, 2, 0LL) )
        {
          v41 = AiAct__getInt(13, 0LL);
          WeightRate_int___setWeight(v38, 10, v41, (const MethodInfo_39D8484 *)Method_WeightRate_int__setWeight__);
        }
      }
LABEL_60:
      Next = BattleRandom__getNext(v38->fields.totalweight, 0LL);
      Data = WeightRate_int___getData(v38, Next, (const MethodInfo_39D88F8 *)Method_WeightRate_int__getData__);
      aiActType = AiAct__getType(Data, 0LL);
LABEL_62:
      v49 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v49,
        (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      v50 = sub_1B86604(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor((BattleLogicTask_o *)v50, 0LL);
      if ( noMessage )
      {
        if ( !v50 )
          goto LABEL_171;
      }
      else
      {
        if ( !v50 )
          goto LABEL_171;
        infoText = aiEnt->fields.infoText;
        *(_QWORD *)(v50 + 176) = infoText;
        sub_1B8635C((CGThumbnailListItem_o *)(v50 + 176), (int32_t)infoText, v51, v52);
      }
      BattleLogicTask__setActor((BattleLogicTask_o *)v50, 3, svtData->fields.uniqueId, 0LL);
      if ( AiBaseEntity__IsForcedActionSpeedAnyTime((AiBaseEntity_o *)aiEnt, 0LL) )
        *(_BYTE *)(v50 + 184) = 1;
      *(_BYTE *)(v50 + 232) = AiActEntity__IsNoCriticalOnAttack(v33, 0LL);
      this = (BattleLogicEnemyAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._18_getAiState.method)(
                                       svtData,
                                       svtData->klass->vtable._19_ExistAiThinking.methodPtr);
      if ( !this )
        goto LABEL_171;
      AiState__setBeforeAction((AiState_o *)this, aiActType, aiEnt->fields.aiActId, 0LL);
      v54 = noMessage;
      v55 = sub_1B86604(ServantAiActArgument_TypeInfo);
      BaseAiActArgument___ctor((BaseAiActArgument_o *)v55, v33, (AiBaseEntity_o *)aiEnt, procState, v56);
      *(_QWORD *)(v55 + 40) = svtData;
      sub_1B8635C((CGThumbnailListItem_o *)(v55 + 40), (int32_t)svtData, v57, v58);
      *(_BYTE *)(v55 + 48) = v54;
      if ( aiActType != 71 )
      {
        this = (BattleLogicEnemyAi_o *)BattleLogicBaseAi__SetNoTargetAiActTask(
                                         (BattleLogicBaseAi_o *)v12,
                                         (System_Collections_Generic_List_BattleLogicTask__o *)v49,
                                         aiActType,
                                         (BaseAiActArgument_o *)v55,
                                         v59);
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_79;
        this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_171;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
        SkillInfoDataByAiActType = BattleServantData__getSkillInfoDataByAiActType(svtData, aiActType, 0LL);
        Entity = (SkillLvEntity_o *)SkillInfoDataByAiActType;
        v153 = SkillInfoDataByAiActType;
        if ( SkillInfoDataByAiActType )
        {
          this = (BattleLogicEnemyAi_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))SkillInfoDataByAiActType->klass->vtable._5_get_skillId.method)(
                                           SkillInfoDataByAiActType,
                                           SkillInfoDataByAiActType->klass->vtable._6_get_IndividualityArray.methodPtr);
          if ( !MasterData_object )
            goto LABEL_171;
          Entity = SkillLvMaster__GetEntity(
                     (SkillLvMaster_o *)MasterData_object,
                     (int32_t)this,
                     HIDWORD(Entity->fields.funcId),
                     0LL);
        }
        v149 = countAct;
        v150 = v49;
        v151 = procState;
        if ( AiAct__isSkillType(aiActType, 0LL) )
        {
          IsEnableTarget = 1;
          if ( !v153 || !Entity )
            goto LABEL_100;
          logic = v12->fields.logic;
          funcId = (struct BattleLogicTarget_o *)Entity->fields.funcId;
          this = (BattleLogicEnemyAi_o *)SkillLvEntity__getDataValsList(Entity, 0LL);
          if ( !logic )
            goto LABEL_171;
          v80 = this;
          v81 = logic;
          logictarget = funcId;
        }
        else
        {
          if ( aiActType != 80 )
            goto LABEL_99;
          this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_171;
          v84 = DataManager__GetMasterData_object_(
                  (DataManager_o *)this,
                  (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
          this = (BattleLogicEnemyAi_o *)BattleServantData__getTreasureDvcId(svtData, 1, 0LL, 0LL);
          if ( !v84 )
            goto LABEL_171;
          this = (BattleLogicEnemyAi_o *)TreasureDvcLvMaster__GetEntity(
                                           (TreasureDvcLvMaster_o *)v84,
                                           (int32_t)this,
                                           svtData->fields.treasuredvcLevel,
                                           0LL);
          if ( !this )
          {
LABEL_99:
            IsEnableTarget = 1;
            goto LABEL_100;
          }
          if ( !v12->fields.logic )
            goto LABEL_171;
          logictarget = this->fields.logictarget;
          v81 = v12->fields.logic;
          v80 = 0LL;
        }
        IsEnableTarget = BattleLogic__checkEnemyTargetFunction(
                           v81,
                           (System_Int32_array *)logictarget,
                           (DataVals_array *)v80,
                           0LL);
LABEL_100:
        this = (BattleLogicEnemyAi_o *)v12->fields.logictarget;
        if ( !this )
          goto LABEL_171;
        tempDeadSvtHash = (struct BattleLogic_o *)v12->fields.tempDeadSvtHash;
        this->fields.logic = tempDeadSvtHash;
        sub_1B8635C((CGThumbnailListItem_o *)&this->fields.logic, (int32_t)tempDeadSvtHash, v75, v76);
        if ( v153 && Entity )
          IsEnableTarget = SkillLvEntity__IsEnableTarget(Entity, IsEnableTarget, 0LL);
        this = (BattleLogicEnemyAi_o *)sub_1B86460(int___TypeInfo, 1LL);
        v86 = v12->fields.data;
        targetlist = (System_Int32_array *)this;
        if ( !v86 )
          goto LABEL_171;
        v87 = v12->fields.logictarget;
        target = v33->fields.target;
        uniqueId = svtData->fields.uniqueId;
        targetIndividuality = v33->fields.targetIndividuality;
        FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v86, 0LL, 0LL);
        this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(v12, aiEnt, v92);
        if ( !v87 )
          goto LABEL_171;
        this = (BattleLogicEnemyAi_o *)BattleLogicTarget__getTargetAiAct(
                                         v87,
                                         target,
                                         uniqueId,
                                         targetIndividuality,
                                         FieldPlayerServantIDList,
                                         IsEnableTarget,
                                         0,
                                         0LL,
                                         v33,
                                         (unsigned __int8)this & 1,
                                         0LL);
        if ( !targetlist )
          goto LABEL_171;
        if ( targetlist->max_length )
        {
          targetlist->m_Items[1] = (int)this;
          this = (BattleLogicEnemyAi_o *)sub_1B86460(int___TypeInfo, 1LL);
          if ( !v12->fields.data )
            goto LABEL_171;
          v93 = v12->fields.logictarget;
          v94 = v33->fields.target;
          v95 = svtData->fields.uniqueId;
          v96 = v33->fields.targetIndividuality;
          v97 = (System_Int32_array *)this;
          this = (BattleLogicEnemyAi_o *)BattleData__getFieldEnemyServantIDList(v12->fields.data, 0, 0LL);
          if ( !v93 )
            goto LABEL_171;
          this = (BattleLogicEnemyAi_o *)BattleLogicTarget__getTargetAiAct(
                                           v93,
                                           v94,
                                           v95,
                                           v96,
                                           (System_Int32_array *)this,
                                           0,
                                           0,
                                           0LL,
                                           v33,
                                           1,
                                           0LL);
          if ( !v97 )
            goto LABEL_171;
          if ( v97->max_length )
          {
            v97->m_Items[1] = (int)this;
            this = (BattleLogicEnemyAi_o *)v12->fields.logictarget;
            if ( !this )
              goto LABEL_171;
            this->fields.logic = 0LL;
            sub_1B8635C((CGThumbnailListItem_o *)&this->fields.logic, 0, v98, v99);
            this = (BattleLogicEnemyAi_o *)v12->fields.logic;
            if ( !this )
              goto LABEL_171;
            *(_BYTE *)(v50 + 192) = (v151 == 1) & (BattleLogic__GetLogicType((BattleLogic_o *)this, 0LL) == 42);
            if ( !AiAct__isAttackType(aiActType, 0LL) )
            {
              this = (BattleLogicEnemyAi_o *)AiAct__isSkillType(aiActType, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                this = (BattleLogicEnemyAi_o *)BattleServantData__get_BuffData(svtData, 0LL);
                if ( !this )
                  goto LABEL_171;
                BattleBuffData__UpdateSkillRelationBuff((BattleBuffData_o *)this, 0LL);
                if ( v153 )
                {
                  BattleLogicBaseAi__SetSkillSelectAddIndex(
                    (BattleLogicBaseAi_o *)this,
                    v153,
                    (AiBaseEntity_o *)aiEnt,
                    v106);
                  BattleLogicTask__setActionSkill((BattleLogicTask_o *)v50, v153, targetlist, v97, 0, 0, 0LL);
                  BattleLogicTask__setActor((BattleLogicTask_o *)v50, 3, svtData->fields.uniqueId, 0LL);
                  v103 = v150;
                  *(_BYTE *)(v50 + 193) = 1;
                  if ( !v150 )
                    goto LABEL_171;
                  items = v150->fields._items;
                  v110 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                  ++v150->fields._version;
                  if ( !items )
                    goto LABEL_171;
                  size = v150->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v150,
                      (Il2CppObject *)v50,
                      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v112 = &items->obj.klass + size;
                    v150->fields._size = size + 1;
                    v112[4] = (Il2CppClass *)v50;
                    sub_1B8635C((CGThumbnailListItem_o *)(v112 + 4), v50, v107, v108);
                  }
                  v120 = (BattleLogicTask_o *)sub_1B86604(BattleLogicTask_TypeInfo);
                  BattleLogicTask___ctor(v120, 0LL);
                  v121 = v150->fields._items;
                  v122 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                  ++v150->fields._version;
                  if ( !v121 )
                    goto LABEL_171;
                  v123 = v150->fields._size;
                  if ( (unsigned int)v123 < v121->max_length )
                  {
                    v124 = &v121->obj.klass + v123;
                    v150->fields._size = v123 + 1;
                    v124[4] = (Il2CppClass *)v120;
                    v125 = (CGThumbnailListItem_o *)(v124 + 4);
                    v126 = (int)v120;
LABEL_166:
                    sub_1B8635C(v125, v126, v118, v119);
                    goto LABEL_169;
                  }
                  v127 = v122[4];
                  v128 = v150;
                  v129 = (Il2CppObject *)v120;
LABEL_168:
                  System_Collections_Generic_List_object___AddWithResize(
                    v128,
                    v129,
                    *(const MethodInfo_35FC958 **)(*(_QWORD *)(v127 + 192) + 112LL));
                  goto LABEL_169;
                }
              }
              else if ( aiActType == 80 )
              {
                v103 = v150;
                if ( BattleLogicServantAi__TryGetOverwriteTreasureDevice(
                       (BattleLogicServantAi_o *)this,
                       svtData,
                       v33->fields.skillVals,
                       id,
                       &lv,
                       v105) )
                {
                  BattleLogicTask__SetOverwriteTreasureDevice((BattleLogicTask_o *)v50, id[0], lv, 0LL);
                  this = *(BattleLogicEnemyAi_o **)(v50 + 224);
                  if ( !this )
                    goto LABEL_171;
                  OverwriteTreasureDeviceData__Overwrite((OverwriteTreasureDeviceData_o *)this, svtData, 0LL);
                }
                BattleLogicTask__setActor((BattleLogicTask_o *)v50, 3, svtData->fields.uniqueId, 0LL);
                *(_QWORD *)(v50 + 32) = targetlist;
                sub_1B8635C((CGThumbnailListItem_o *)(v50 + 32), (int32_t)targetlist, v113, v114);
                v115 = (BattleCommandData_o *)sub_1B86604(BattleCommandData_TypeInfo);
                BattleCommandData___ctor(v115, 0LL);
                this = (BattleLogicEnemyAi_o *)BattleServantData__getTreasureDvcCardId(svtData, 0LL);
                if ( !v115 )
                  goto LABEL_171;
                v115->fields._type = (int)this;
                v115->fields.svtlimit = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
                v115->fields.uniqueId = svtData->fields.uniqueId;
                v115->fields.svtId = BattleServantData__getSvtId(svtData, 0LL);
                v115->fields.treasureDvc = BattleServantData__getTreasureDvcId(svtData, 1, 0LL, 0LL);
                v116 = (BattleComboData_o *)sub_1B86604(BattleComboData_TypeInfo);
                BattleComboData___ctor(v116, 0LL);
                BattleLogicTask__setActionCommand((BattleLogicTask_o *)v50, v116, v115, v149, 0LL);
                TreasureDvcId = BattleServantData__getTreasureDvcId(svtData, 1, 0LL, 0LL);
                BattleLogicTask__setActionTreasureDvc((BattleLogicTask_o *)v50, TreasureDvcId, 1, 0LL);
                if ( !v150 )
                  goto LABEL_171;
                goto LABEL_163;
              }
              v103 = v150;
              if ( !v150 )
                goto LABEL_171;
LABEL_169:
              v83 = v103;
              return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                                v83,
                                                (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
            }
            *(_QWORD *)(v50 + 32) = targetlist;
            sub_1B8635C((CGThumbnailListItem_o *)(v50 + 32), (int32_t)targetlist, v100, v101);
            if ( SvtType__IsEnemy_38667196(svtData->fields.svtType, 0LL) )
            {
              v102 = v149;
              v103 = v150;
              Type = 10;
              goto LABEL_155;
            }
            v102 = v149;
            v103 = v150;
            if ( AiAct__isAttackArts(aiActType, 0LL) )
            {
              Type = 1;
              goto LABEL_155;
            }
            if ( AiAct__isAttackBuster(aiActType, 0LL) )
            {
              Type = 2;
              goto LABEL_155;
            }
            if ( AiAct__isAttackQuick(aiActType, 0LL) )
            {
              Type = 3;
              goto LABEL_155;
            }
            v130 = (WeightRate_int__o *)sub_1B86604(WeightRate_int__TypeInfo);
            WeightRate_int____ctor(v130, (const MethodInfo_39D8F68 *)Method_WeightRate_int___ctor__);
            this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi__GetCommandArray(v12, svtData, v131);
            if ( !this )
              goto LABEL_171;
            v132 = this->fields.logic;
            v133 = this;
            if ( (int)v132 < 1 )
            {
LABEL_151:
              if ( !v130 )
                goto LABEL_171;
              v135 = BattleRandom__getNext(v130->fields.totalweight, 0LL);
              v136 = WeightRate_int___getData(v130, v135, (const MethodInfo_39D88F8 *)Method_WeightRate_int__getData__);
              if ( !BattleCommand_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
              Type = BattleCommand__getType(v136, 0LL);
LABEL_155:
              FixCommandCardIds = AiActEntity__GetFixCommandCardIds(v33, Type, 0LL);
              svtData->fields.fixCommandCardIds = FixCommandCardIds;
              sub_1B8635C(
                (CGThumbnailListItem_o *)&svtData->fields.fixCommandCardIds,
                (int32_t)FixCommandCardIds,
                v138,
                v139);
              SvtId = BattleServantData__getSvtId(svtData, 0LL);
              DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
              v142 = (BattleCommandData_o *)sub_1B86604(BattleCommandData_TypeInfo);
              BattleCommandData___ctor_44503096(v142, Type, SvtId, DispLimitCount, 0, -1, 0LL);
              if ( !v142 )
                goto LABEL_171;
              v142->fields.uniqueId = svtData->fields.uniqueId;
              if ( *(_BYTE *)(v50 + 232) )
              {
                v143 = 3;
              }
              else
              {
                if ( AiAct__isAttackCritical(aiActType, 0LL) )
                {
                  BattleCommandData__SetCriticalDecisionType(v142, 2, 0LL);
                  aiActType = 2;
                  goto LABEL_162;
                }
                v143 = 1;
              }
              BattleCommandData__SetCriticalDecisionType(v142, v143, 0LL);
LABEL_162:
              v144 = (BattleComboData_o *)sub_1B86604(BattleComboData_TypeInfo);
              BattleComboData___ctor(v144, 0LL);
              BattleLogicTask__setActionCommand((BattleLogicTask_o *)v50, v144, v142, v102, 0LL);
              if ( !v103 )
                goto LABEL_171;
LABEL_163:
              v145 = v103->fields._items;
              v146 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
              ++v103->fields._version;
              if ( !v145 )
                goto LABEL_171;
              v147 = v103->fields._size;
              if ( (unsigned int)v147 < v145->max_length )
              {
                v148 = (__int64)v145 + 8 * v147;
                v103->fields._size = v147 + 1;
                *(_QWORD *)(v148 + 32) = v50;
                v125 = (CGThumbnailListItem_o *)(v148 + 32);
                v126 = v50;
                goto LABEL_166;
              }
              v127 = v146[4];
              v128 = v103;
              v129 = (Il2CppObject *)v50;
              goto LABEL_168;
            }
            v134 = 0LL;
            while ( v134 < (unsigned int)v132 )
            {
              if ( !v130 )
                goto LABEL_171;
              WeightRate_int___setWeight(
                v130,
                10,
                *((_DWORD *)&v133->fields.logictarget + v134),
                (const MethodInfo_39D8484 *)Method_WeightRate_int__setWeight__);
              LODWORD(v132) = v133->fields.logic;
              if ( (__int64)++v134 >= (int)v132 )
                goto LABEL_151;
            }
          }
        }
        sub_1B8661C(this, svtData);
      }
      this = (BattleLogicEnemyAi_o *)AiBaseEntity__getActionValue((AiBaseEntity_o *)aiEnt, 0LL);
      id[1] = (int)this;
      if ( (int)this >= 1 )
      {
        v60 = System_Int32__ToString((int32_t)&id[1], 0LL);
        v61 = System_String__Concat_61645176((System_String_o *)StringLiteral_8587/*"MOTION_"*/, v60, 0LL);
        BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v50, v61, 0LL);
        v62 = v12->fields.logic;
        if ( v62 )
        {
          this = (BattleLogicEnemyAi_o *)v62->fields.perf;
          if ( this )
          {
            ServantGameObject = BattlePerformance__getServantGameObject(
                                  (BattlePerformance_o *)this,
                                  svtData->fields.uniqueId,
                                  0LL);
            *(_QWORD *)(v50 + 128) = ServantGameObject;
            sub_1B8635C((CGThumbnailListItem_o *)(v50 + 128), (int32_t)ServantGameObject, v64, v65);
            BattleLogicTask__setActor((BattleLogicTask_o *)v50, 3, svtData->fields.uniqueId, 0LL);
            if ( v49 )
            {
              v68 = v49->fields._items;
              v69 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
              ++v49->fields._version;
              if ( v68 )
              {
                v70 = v49->fields._size;
                if ( (unsigned int)v70 >= v68->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v49,
                    (Il2CppObject *)v50,
                    *(const MethodInfo_35FC958 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
                }
                else
                {
                  v71 = &v68->obj.klass + v70;
                  v49->fields._size = v70 + 1;
                  v71[4] = (Il2CppClass *)v50;
                  sub_1B8635C((CGThumbnailListItem_o *)(v71 + 4), v50, v66, v67);
                }
                goto LABEL_91;
              }
            }
          }
        }
LABEL_171:
        sub_1B86614(this, svtData);
      }
LABEL_79:
      if ( !v49 )
        goto LABEL_171;
LABEL_91:
      v83 = v49;
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v83,
                                        (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
  }
}


void __fastcall BattleLogicEnemyAi__resetAct(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  BattleLogicEnemyAi_o *v2; // x19
  struct System_Collections_Generic_List_BattleServantData__o *actlist; // x8
  int32_t size; // w2
  int v5; // w9
  int logic; // w8
  BattleLogicEnemyAi_o *v7; // x19
  unsigned int v8; // w20

  v2 = this;
  if ( (byte_4A512F7 & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_1B863B8(
                                     &Method_System_Collections_Generic_List_BattleServantData__Clear__,
                                     method);
    byte_4A512F7 = 1;
  }
  actlist = v2->fields.actlist;
  if ( !actlist )
    goto LABEL_14;
  size = actlist->fields._size;
  v5 = actlist->fields._version + 1;
  actlist->fields._size = 0;
  actlist->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)actlist->fields._items, 0, size, 0LL);
  this = (BattleLogicEnemyAi_o *)v2->fields.data;
  if ( !this )
    goto LABEL_14;
  LODWORD(this[2].fields.logicNomal) = 0;
  this = (BattleLogicEnemyAi_o *)BattleData__getFieldEnemyServantList((BattleData_o *)this, 0, 0LL);
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
        sub_1B8661C(this, method);
      this = (BattleLogicEnemyAi_o *)*((_QWORD *)&v7->fields.logictarget + (int)v8);
      if ( !this )
        break;
      BattleServantData__resetActionCount((BattleServantData_o *)this, 0LL);
      logic = (int)v7->fields.logic;
      if ( (int)++v8 >= logic )
        return;
    }
LABEL_14:
    sub_1B86614(this, method);
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
  System_Collections_Generic_List_object__o *v11; // x20

  if ( (byte_4A512F5 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, *(_QWORD *)&ltype);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v6);
    byte_4A512F5 = 1;
  }
  BattleLogicEnemyAi__ExcludeDeadFromTempDead(this, *(const MethodInfo **)&ltype);
  TaskAIAttack = BattleLogicEnemyAi__CreateTaskAIAttack(this, v7, data, v8);
  if ( !TaskAIAttack )
    sub_1B86614(0LL, v10);
  v11 = (System_Collections_Generic_List_object__o *)TaskAIAttack;
  if ( TaskAIAttack->fields._size >= 1 )
    BattleLogicEnemyAi__ClearTempDeadSvt(this, v10);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_object__o *v10; // x20
  __int64 v11; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v13; // x21
  Il2CppObject *MasterData_object; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct BattleData_o *v17; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A512FC & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_AiActMaster___, *(_QWORD *)&actUniqueId);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B863B8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A512FC = 1;
  }
  info = 0LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  data = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.aiActMst, (int32_t)MasterData_object, v15, v16);
  v17 = this->fields.data;
  if ( !v17 )
    goto LABEL_16;
  data = (BattleData_o *)this->fields.aiLogic;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)AiLogic__getAction(
                           (AiLogic_o *)data,
                           v13,
                           2,
                           v17->fields.turnCount,
                           0,
                           (BattleLogicBaseAi_o *)this,
                           &info,
                           0,
                           0LL);
  if ( !data )
  {
LABEL_14:
    if ( v10 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v10,
                                        (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_16:
    sub_1B86614(data, v11);
  }
  data = (BattleData_o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, BattleData_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._21_procAiAct.method)(
                           this,
                           v13,
                           data,
                           0LL,
                           info,
                           0LL,
                           this->klass->vtable._22_ExistThinking.methodPtr);
  if ( !v10 )
    goto LABEL_16;
  System_Collections_Generic_List_object___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  System_Collections_Generic_List_object__o *v10; // x20
  __int64 v11; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v13; // x21
  Il2CppObject *MasterData_object; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct BattleData_o *v17; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A512FD & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_AiActMaster___, *(_QWORD *)&actUniqueId);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B863B8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4A512FD = 1;
  }
  info = 0LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  data = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.aiActMst, (int32_t)MasterData_object, v15, v16);
  v17 = this->fields.data;
  if ( !v17 )
    goto LABEL_16;
  data = (BattleData_o *)this->fields.aiLogic;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)AiLogic__getAction(
                           (AiLogic_o *)data,
                           v13,
                           7,
                           v17->fields.turnCount,
                           0,
                           (BattleLogicBaseAi_o *)this,
                           &info,
                           0,
                           0LL);
  if ( !data )
  {
LABEL_14:
    if ( v10 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v10,
                                        (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_16:
    sub_1B86614(data, v11);
  }
  data = (BattleData_o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, BattleData_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._21_procAiAct.method)(
                           this,
                           v13,
                           data,
                           0LL,
                           info,
                           0LL,
                           this->klass->vtable._22_ExistThinking.methodPtr);
  if ( !v10 )
    goto LABEL_16;
  System_Collections_Generic_List_object___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  struct System_Collections_Generic_List_BattleServantData__o *actlist; // x8
  CGThumbnailListItem_o *p_actlist; // x19
  System_Collections_Generic_IEnumerable_TSource__o *FieldEnemyServantList; // x21
  BattleLogicEnemyAi___c_c *v20; // x8
  System_Func_object__bool__o *_9__23_0; // x22
  Il2CppObject *v22; // x23
  struct BattleLogicEnemyAi___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  BattleLogicEnemyAi___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x21
  System_Func_object__int__o *_9__23_1; // x22
  Il2CppObject *v30; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v34; // x0
  BattleLogicEnemyAi___c_c *v35; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v36; // x21
  System_Func_object__int__o *_9__23_2; // x22
  Il2CppObject *v38; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v42; // x0
  BattleLogicEnemyAi___c_c *v43; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v44; // x21
  System_Func_object__int__o *_9__23_3; // x22
  Il2CppObject *v46; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_Collections_Generic_List_TSource__o *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct BattleData_o *data; // x8
  System_Collections_Generic_List_object__o *klass; // x20
  System_Predicate_object__o *v56; // x21
  Il2CppObject *v57; // x22
  struct BattleLogicEnemyAi___c_StaticFields *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  System_Collections_Generic_List_T__o *All; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3

  v2 = this;
  if ( (byte_4A512F8 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_OrderByDescending_BattleServantData__int___, method);
    sub_1B863B8(&Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___, v3);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_BattleServantData___, v4);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_BattleServantData___, v5);
    sub_1B863B8(&System_Func_BattleServantData__int__TypeInfo, v6);
    sub_1B863B8(&System_Func_BattleServantData__bool__TypeInfo, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleServantData__FindAll__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v9);
    sub_1B863B8(&System_Predicate_BattleServantData__TypeInfo, v10);
    sub_1B863B8(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_0__, v11);
    sub_1B863B8(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_1__, v12);
    sub_1B863B8(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_2__, v13);
    sub_1B863B8(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_3__, v14);
    sub_1B863B8(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_4__, v15);
    this = (BattleLogicEnemyAi_o *)sub_1B863B8(&BattleLogicEnemyAi___c_TypeInfo, v16);
    byte_4A512F8 = 1;
  }
  p_actlist = (CGThumbnailListItem_o *)&v2->fields.actlist;
  actlist = v2->fields.actlist;
  if ( !actlist )
    goto LABEL_41;
  if ( actlist->fields._size <= 0 )
  {
    this = (BattleLogicEnemyAi_o *)v2->fields.data;
    if ( !this )
      goto LABEL_41;
    FieldEnemyServantList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldEnemyServantList(
                                                                                   (BattleData_o *)this,
                                                                                   1,
                                                                                   0LL);
    v20 = BattleLogicEnemyAi___c_TypeInfo;
    if ( !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v20 = BattleLogicEnemyAi___c_TypeInfo;
    }
    _9__23_0 = (System_Func_object__bool__o *)v20->static_fields->__9__23_0;
    if ( !_9__23_0 )
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v20 = BattleLogicEnemyAi___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v20->static_fields->__9;
      _9__23_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__23_0,
        v22,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_0__,
        0LL);
      static_fields = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      static_fields->__9__23_0 = (struct System_Func_BattleServantData__bool__o *)_9__23_0;
      sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__23_0, (int32_t)_9__23_0, v24, v25);
    }
    v26 = System_Linq_Enumerable__Where_object_(
            FieldEnemyServantList,
            (System_Func_TSource__bool__o *)_9__23_0,
            (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
    v27 = BattleLogicEnemyAi___c_TypeInfo;
    v28 = v26;
    if ( !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v27 = BattleLogicEnemyAi___c_TypeInfo;
    }
    _9__23_1 = (System_Func_object__int__o *)v27->static_fields->__9__23_1;
    if ( !_9__23_1 )
    {
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v27 = BattleLogicEnemyAi___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v27->static_fields->__9;
      _9__23_1 = (System_Func_object__int__o *)sub_1B86604(System_Func_BattleServantData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__23_1,
        v30,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_1__,
        0LL);
      v31 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v31->__9__23_1 = (struct System_Func_BattleServantData__int__o *)_9__23_1;
      sub_1B8635C((CGThumbnailListItem_o *)&v31->__9__23_1, (int32_t)_9__23_1, v32, v33);
    }
    v34 = System_Linq_Enumerable__OrderByDescending_object__int_(
            v28,
            (System_Func_TSource__TKey__o *)_9__23_1,
            (const MethodInfo_2F9B158 *)Method_System_Linq_Enumerable_OrderByDescending_BattleServantData__int___);
    v35 = BattleLogicEnemyAi___c_TypeInfo;
    v36 = v34;
    if ( !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v35 = BattleLogicEnemyAi___c_TypeInfo;
    }
    _9__23_2 = (System_Func_object__int__o *)v35->static_fields->__9__23_2;
    if ( !_9__23_2 )
    {
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        v35 = BattleLogicEnemyAi___c_TypeInfo;
      }
      v38 = (Il2CppObject *)v35->static_fields->__9;
      _9__23_2 = (System_Func_object__int__o *)sub_1B86604(System_Func_BattleServantData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__23_2,
        v38,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_2__,
        0LL);
      v39 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v39->__9__23_2 = (struct System_Func_BattleServantData__int__o *)_9__23_2;
      sub_1B8635C((CGThumbnailListItem_o *)&v39->__9__23_2, (int32_t)_9__23_2, v40, v41);
    }
    v42 = System_Linq_Enumerable__ThenByDescending_object__int_(
            v36,
            (System_Func_TSource__TKey__o *)_9__23_2,
            (const MethodInfo_2FA9168 *)Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
    v43 = BattleLogicEnemyAi___c_TypeInfo;
    v44 = v42;
    if ( !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v43 = BattleLogicEnemyAi___c_TypeInfo;
    }
    _9__23_3 = (System_Func_object__int__o *)v43->static_fields->__9__23_3;
    if ( !_9__23_3 )
    {
      if ( !v43->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v43);
        v43 = BattleLogicEnemyAi___c_TypeInfo;
      }
      v46 = (Il2CppObject *)v43->static_fields->__9;
      _9__23_3 = (System_Func_object__int__o *)sub_1B86604(System_Func_BattleServantData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__23_3,
        v46,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_3__,
        0LL);
      v47 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v47->__9__23_3 = (struct System_Func_BattleServantData__int__o *)_9__23_3;
      sub_1B8635C((CGThumbnailListItem_o *)&v47->__9__23_3, (int32_t)_9__23_3, v48, v49);
    }
    v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__int_(
                                                                 v44,
                                                                 (System_Func_TSource__TKey__o *)_9__23_3,
                                                                 (const MethodInfo_2FA9168 *)Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
    v51 = System_Linq_Enumerable__ToList_object_(
            v50,
            (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_BattleServantData___);
    p_actlist->klass = (CGThumbnailListItem_c *)v51;
    sub_1B8635C((CGThumbnailListItem_o *)&v2->fields.actlist, (int32_t)v51, v52, v53);
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_41;
  if ( data->fields.enemyActCount > data->fields.countEnemyAttack )
    return;
  klass = (System_Collections_Generic_List_object__o *)p_actlist->klass;
  this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi___c_TypeInfo;
  if ( !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
    this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi___c_TypeInfo;
  }
  v56 = *(System_Predicate_object__o **)&this[1].fields.dicAiActFunc->fields._freeCount;
  if ( !v56 )
  {
    if ( !LODWORD(this[1].fields.tempDeadSvtHash) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi___c_TypeInfo;
    }
    v57 = (Il2CppObject *)this[1].fields.dicAiActFunc->klass;
    v56 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_object____ctor(v56, v57, Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_4__, 0LL);
    v58 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    v58->__9__23_4 = (struct System_Predicate_BattleServantData__o *)v56;
    sub_1B8635C((CGThumbnailListItem_o *)&v58->__9__23_4, (int32_t)v56, v59, v60);
  }
  if ( !klass )
LABEL_41:
    sub_1B86614(this, method);
  All = System_Collections_Generic_List_object___FindAll(
          klass,
          (System_Predicate_T__o *)v56,
          (const MethodInfo_35FD068 *)Method_System_Collections_Generic_List_BattleServantData__FindAll__);
  p_actlist->klass = (CGThumbnailListItem_c *)All;
  sub_1B8635C(p_actlist, (int32_t)All, v62, v63);
}


void __fastcall BattleLogicEnemyAi___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A5130B & 1) == 0 )
  {
    sub_1B863B8(&BattleLogicEnemyAi___c_TypeInfo, v1);
    byte_4A5130B = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(BattleLogicEnemyAi___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleLogicEnemyAi___c_TypeInfo->static_fields->__9 = (struct BattleLogicEnemyAi___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)BattleLogicEnemyAi___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B86614(this, 0LL);
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
    sub_1B86614(this, 0LL);
  return BattleServantData__GetOriginalRemainingNeedActCount(x, 0LL);
}


int32_t __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__23_2(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.actPriority;
}


int32_t __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__23_3(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return BattleServantData__getDeckIndex(x, 0LL);
}


bool __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__23_4(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
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
    sub_1B86614(this, 0LL);
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
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1B86614(this, x);
  return BattleLogicEnemyAi__ReplaceCommandTaskBySealStatus(this->fields.__4__this, this->fields.svtData, x, v3);
}