void __fastcall BattleLogicEnemyAi___ctor(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_48E5191 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleServantData___ctor__, method);
    sub_1B00CCC(&System_Collections_Generic_List_BattleServantData__TypeInfo, v3);
    byte_48E5191 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this->fields.actlist = (struct System_Collections_Generic_List_BattleServantData__o *)v4;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.actlist, (int32_t)v4, v5, v6);
  BattleLogicServantAi___ctor((BattleLogicServantAi_o *)this, 0LL);
}


void __fastcall BattleLogicEnemyAi__AddActCount(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  if ( !svtData || (++svtData->fields.actionCount, (data = this->fields.data) == 0LL) )
    sub_1B00F28(this, svtData);
  ++data->fields.countEnemyAttack;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicEnemyAi__AddTempDeadSvt(
        BattleLogicEnemyAi_o *this,
        int32_t svtUniqueId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x0

  if ( (byte_48E5189 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int__Add__, *(_QWORD *)&svtUniqueId);
    byte_48E5189 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
    System_Collections_Generic_HashSet_int___Add(
      tempDeadSvtHash,
      svtUniqueId,
      (const MethodInfo_327B040 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
  if ( (byte_48E518D & 1) == 0 )
  {
    sub_1B00CCC(&AiLogic_AiInfo_CheckedInfo_TypeInfo, skillFlg);
    sub_1B00CCC(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B00CCC(&Method_WeightRate_int___ctor__, v13);
    sub_1B00CCC(&Method_WeightRate_int__getCount__, v14);
    sub_1B00CCC(&Method_WeightRate_int__getData__, v15);
    sub_1B00CCC(&Method_WeightRate_int__getTotalWeight__, v16);
    sub_1B00CCC(&Method_WeightRate_int__setWeight__, v17);
    sub_1B00CCC(&WeightRate_int__TypeInfo, v18);
    byte_48E518D = 1;
  }
  v19 = (WeightRate_int__o *)sub_1B00F18(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v19, (const MethodInfo_379B874 *)Method_WeightRate_int___ctor__);
  if ( actType <= 13 )
  {
    switch ( actType )
    {
      case 10:
        if ( v9 )
          BattleLogicEnemyAi__SetSkillRandomWeightSameProbability(Int, v19, 10, svtData, v22);
        if ( !v19 )
          goto LABEL_46;
        if ( WeightRate_int___getCount(v19, (const MethodInfo_379B14C *)Method_WeightRate_int__getCount__) < 1 )
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
          (const MethodInfo_379AE50 *)Method_WeightRate_int__setWeight__);
        if ( v9 )
          BattleLogicEnemyAi__SetSkillRandomWeightSameProbability(v28, v19, 10, svtData, v29);
LABEL_31:
        Next = BattleRandom__getNext(v19->fields.totalweight, 0LL);
        Data = WeightRate_int___getData(v19, Next, (const MethodInfo_379B204 *)Method_WeightRate_int__getData__);
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
    sub_1B00F28(Int, v21);
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
  Int = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Int )
    goto LABEL_46;
  Int = (BattleLogicEnemyAi_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Int,
                                  (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  v35 = (AiLogic_AiInfo_CheckedInfo_o *)sub_1B00F18(AiLogic_AiInfo_CheckedInfo_TypeInfo);
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

  if ( (byte_48E5190 & 1) == 0 )
  {
    sub_1B00CCC(&AiEntity_TypeInfo, aiInfo);
    sub_1B00CCC(&Method_DataManager_GetMaster_AiActMaster___, v7);
    sub_1B00CCC(&DataManager_TypeInfo, v8);
    sub_1B00CCC(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__, v9);
    sub_1B00CCC(&int___TypeInfo, v10);
    byte_48E5190 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !aiBaseEntity || !Master_object )
    goto LABEL_41;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          aiBaseEntity->fields.aiActId,
          (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__) )
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
  Master_object = sub_1B00D74(int___TypeInfo, 1LL);
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
  Master_object = sub_1B00D74(int___TypeInfo, 1LL);
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
    sub_1B00F28(Master_object, v12);
  }
  if ( !v28->max_length )
LABEL_42:
    sub_1B00F30(Master_object, v12);
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
    sub_1B00F28(data, *(_QWORD *)&actUniqueId);
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

  if ( (byte_48E518F & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&actType);
    sub_1B00CCC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v7);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_48E518F = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    Instance = BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
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
    sub_1B00F28(Instance, v10);
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
    sub_1B00F28(data, *(_QWORD *)&actUniqueId);
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
    sub_1B00F28(this, skillFlg);
  if ( !BattleServantData__isUseSelfSkill(servantData, skillIndex, 0LL) )
    *actType = 2;
}


void __fastcall BattleLogicEnemyAi__ClearTempDeadSvt(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x0

  if ( (byte_48E518A & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int__Clear__, method);
    byte_48E518A = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
    System_Collections_Generic_HashSet_int___Clear(
      tempDeadSvtHash,
      (const MethodInfo_327A4D0 *)Method_System_Collections_Generic_HashSet_int__Clear__);
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
    sub_1B00F28(0LL, actUniqueId);
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
  int32_t v17; // w3
  struct BattleData_o *data; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_48E5185 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_AiActMaster___, svtData);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_48E5185 = 1;
  }
  info = 0LL;
  v12 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.aiActMst, (int32_t)MasterData_object, v16, v17);
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
                                        (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_11:
    sub_1B00F28(Instance, v14);
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
  System_Collections_Generic_List_object___AddRange(
    v12,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1B00F28(0LL, actUniqueId);
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
    sub_1B00F28(this, svtData);
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
  int32_t v32; // w3
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
  int32_t v50; // w3
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
  int32_t v65; // w3
  BattleCommandData_o *v66; // x22
  BattleComboData_o *v67; // x24
  struct BattleData_o *v68; // x8
  int32_t TreasureDvcId; // w0
  __int64 v70; // x22
  __int64 v71; // x0
  __int64 v72; // x1
  int32_t v73; // w2
  int32_t v74; // w3
  const MethodInfo *v75; // x3
  __int64 v76; // x0
  int32_t monitor; // [xsp+24h] [xbp-7Ch]
  AiLogic_AiInfo_o *v78; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+30h] [xbp-70h] BYREF
  AiLogic_AiInfo_o *info; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_48E517D & 1) == 0 )
  {
    sub_1B00CCC(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_1B00CCC(&BattleCommandData_TypeInfo, v6);
    sub_1B00CCC(&Method_BattleLogicEnemyAi_IsNotTempDeadSvt__, v7);
    sub_1B00CCC(&BattleLogicTask___TypeInfo, v8);
    sub_1B00CCC(&BattleLogicTask_TypeInfo, v9);
    sub_1B00CCC(&Method_DataManager_GetMasterData_AiActMaster___, v10);
    sub_1B00CCC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v11);
    sub_1B00CCC(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__, v12);
    sub_1B00CCC(&System_Func_BattleServantData__bool__TypeInfo, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleServantData__RemoveAt__, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v17);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleServantData__get_Item__, v18);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v19);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v20);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_48E517D = 1;
  }
  entity = 0LL;
  info = 0LL;
  v78 = 0LL;
  v22 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  v27 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_BattleServantData__bool__TypeInfo);
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
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_AiActMaster___);
      this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.aiActMst, (int32_t)MasterData_object, v31, v32);
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
                                (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
          if ( this->fields.actlist )
          {
            v34 = (BattleServantData_o *)Instance;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this->fields.actlist,
              0,
              (const MethodInfo_33C31A4 *)Method_System_Collections_Generic_List_BattleServantData__RemoveAt__);
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
                    Instance = BattleServantData__isCardTypeAction(v34, TreasureDvcCommand, 0LL),
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
                v40 = (BattleLogicTask_o *)sub_1B00F18(BattleLogicTask_TypeInfo);
                BattleLogicTask___ctor(v40, 0LL);
                if ( v40 )
                {
                  BattleLogicTask__setActor(v40, 3, v34->fields.uniqueId, 0LL);
                  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( Instance )
                  {
                    v41 = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                    Instance = BattleServantData__getTreasureDvcId(v34, 1, 0LL);
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
                            sub_1B00C70(
                              (ServantStatusBattleListViewItem_o *)&logictarget->fields.tempDeadSvtHash,
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
                                         (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
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
                              sub_1B00C70((ServantStatusBattleListViewItem_o *)(Instance + 24), 0, v64, v65);
                              v66 = (BattleCommandData_o *)sub_1B00F18(BattleCommandData_TypeInfo);
                              BattleCommandData___ctor(v66, 0LL);
                              Instance = BattleServantData__getTreasureDvcCardId(v34, 0LL);
                              if ( v66 )
                              {
                                v66->fields._type = Instance;
                                v66->fields.svtlimit = BattleServantData__getDispLimitCount(v34, 1, 0LL);
                                v66->fields.uniqueId = v34->fields.uniqueId;
                                v66->fields.svtId = BattleServantData__getSvtId(v34, 0LL);
                                v66->fields.treasureDvc = BattleServantData__getTreasureDvcId(v34, 1, 0LL);
                                v67 = (BattleComboData_o *)sub_1B00F18(BattleComboData_TypeInfo);
                                BattleComboData___ctor(v67, 0LL);
                                v68 = this->fields.data;
                                if ( v68 )
                                {
                                  BattleLogicTask__setActionCommand(v40, v67, v66, v68->fields.countEnemyAttack, 0LL);
                                  TreasureDvcId = BattleServantData__getTreasureDvcId(v34, 1, 0LL);
                                  BattleLogicTask__setActionTreasureDvc(v40, TreasureDvcId, 1, 0LL);
                                  Instance = sub_1B00D74(BattleLogicTask___TypeInfo, 1LL);
                                  if ( Instance )
                                  {
                                    v70 = Instance;
                                    v71 = sub_1B00E08(v40, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
                                    if ( !v71 )
                                    {
                                      v76 = sub_1B00F4C(0LL);
                                      sub_1B00DF4(v76, 0LL);
                                    }
                                    if ( !*(_DWORD *)(v70 + 24) )
                                      sub_1B00F30(v71, v72);
                                    *(_QWORD *)(v70 + 32) = v40;
                                    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v70 + 32), (int32_t)v40, v73, v74);
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
                    Instance = ((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, struct AiEntity_o *, _QWORD, AiLogic_AiInfo_o *, __int64, Il2CppMethodPointer))v46->vtable._19_procAiAct.method)(
                                 this,
                                 v34,
                                 noThinkAiEnt,
                                 (unsigned int)v45->fields.countEnemyAttack,
                                 info,
                                 1LL,
                                 v46->vtable._20_ExistThinking.methodPtr);
                    if ( v22 )
                    {
                      v24 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
LABEL_46:
                      System_Collections_Generic_List_object___AddRange(
                        v22,
                        v24,
                        (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
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
    sub_1B00F28(Instance, v24);
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

  if ( (byte_48E518B & 1) == 0 )
  {
    sub_1B00CCC(&Method_BattleData_IsNotAliveTarget__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__, v3);
    sub_1B00CCC(&System_Predicate_int__TypeInfo, v4);
    byte_48E518B = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
  {
    data = (Il2CppObject *)this->fields.data;
    v7 = (System_Predicate_int__o *)sub_1B00F18(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(v7, data, Method_BattleData_IsNotAliveTarget__, 0LL);
    System_Collections_Generic_HashSet_int___RemoveWhere(
      tempDeadSvtHash,
      (System_Predicate_T__o *)v7,
      (const MethodInfo_327B574 *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
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

  if ( (byte_48E5188 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, servantData);
    byte_48E5188 = 1;
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
    sub_1B00F28(StageEntity, v7);
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
  int32_t v9; // w3
  __int64 v10; // x1
  AiLogic_o *aiLogic; // x0
  AiEntity_o *v12; // x20
  struct AiEntity_o **p_noThinkAiEnt; // x19
  int32_t v14; // w2
  int32_t v15; // w3
  struct AiEntity_o *v16; // x19

  if ( (byte_48E5179 & 1) == 0 )
  {
    sub_1B00CCC(&AiEntity_TypeInfo, data);
    sub_1B00CCC(&AiLogic_TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_9167/*"NOTHINK_AIACTID"*/, v6);
    byte_48E5179 = 1;
  }
  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, 0LL);
  v7 = (AiLogic_o *)sub_1B00F18(AiLogic_TypeInfo);
  AiLogic___ctor(v7, 0LL);
  this->fields.aiLogic = v7;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.aiLogic, (int32_t)v7, v8, v9);
  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    goto LABEL_6;
  AiLogic__Initialize(aiLogic, data, 0LL);
  v12 = (AiEntity_o *)sub_1B00F18(AiEntity_TypeInfo);
  AiEntity___ctor(v12, 0LL);
  this->fields.noThinkAiEnt = v12;
  p_noThinkAiEnt = &this->fields.noThinkAiEnt;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)p_noThinkAiEnt, (int32_t)v12, v14, v15);
  v16 = *p_noThinkAiEnt;
  aiLogic = (AiLogic_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_9167/*"NOTHINK_AIACTID"*/, 0LL);
  if ( !v16 )
LABEL_6:
    sub_1B00F28(aiLogic, v10);
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
    sub_1B00F28(0LL, aiEnt);
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
  if ( (byte_48E518C & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_1B00CCC(&Method_BasicHelper_ContainsSelfNotNull_int___, svtData);
    byte_48E518C = 1;
  }
  if ( !svtData )
    sub_1B00F28(this, svtData);
  return !BasicHelper__ContainsSelfNotNull_int_(
            (System_Collections_Generic_HashSet_T__o *)v4->fields.tempDeadSvtHash,
            svtData->fields.uniqueId,
            (const MethodInfo_2D4ED00 *)Method_BasicHelper_ContainsSelfNotNull_int___);
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
      sub_1B00F28(IsSealedCommandTask, v8);
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
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  System_Func_object__object__o *v18; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_48E5187 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_Select_BattleLogicTask__BattleLogicTask___, svtData);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_BattleLogicTask___, v7);
    sub_1B00CCC(&System_Func_BattleLogicTask__BattleLogicTask__TypeInfo, v8);
    sub_1B00CCC(&Method_BattleLogicEnemyAi___c__DisplayClass36_0__ReplaceCommandTasksBySealStatus_b__0__, v9);
    sub_1B00CCC(&BattleLogicEnemyAi___c__DisplayClass36_0_TypeInfo, v10);
    byte_48E5187 = 1;
  }
  v11 = sub_1B00F18(BattleLogicEnemyAi___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B00F28(v12, v13);
  *(_QWORD *)(v11 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = svtData;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)svtData, v16, v17);
  v18 = (System_Func_object__object__o *)sub_1B00F18(System_Func_BattleLogicTask__BattleLogicTask__TypeInfo);
  System_Func_object__object____ctor(
    v18,
    (Il2CppObject *)v11,
    Method_BattleLogicEnemyAi___c__DisplayClass36_0__ReplaceCommandTasksBySealStatus_b__0__,
    0LL);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)derivedTasks,
                                                               (System_Func_TSource__TResult__o *)v18,
                                                               (const MethodInfo_2D8FA10 *)Method_System_Linq_Enumerable_Select_BattleLogicTask__BattleLogicTask___);
  return (BattleLogicTask_array *)System_Linq_Enumerable__ToArray_object_(
                                    v19,
                                    (const MethodInfo_2D976BC *)Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
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
  if ( (byte_48E518E & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_1B00CCC(&Method_WeightRate_int__setWeight__, weight);
    byte_48E518E = 1;
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
      (const MethodInfo_379AE50 *)Method_WeightRate_int__setWeight__);
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
      (const MethodInfo_379AE50 *)Method_WeightRate_int__setWeight__);
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
        (const MethodInfo_379AE50 *)Method_WeightRate_int__setWeight__);
      return;
    }
LABEL_14:
    sub_1B00F28(this, weight);
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
  int32_t v6; // w3

  BattleLogicEnemyAi__ClearTempDeadSvt(this, *(const MethodInfo **)&ltype);
  this->fields.tempDeadSvtHash = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.tempDeadSvtHash, 0, v5, v6);
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
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_48E517B & 1) == 0 )
  {
    sub_1B00CCC(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_1B00CCC(&CheckEnemyRelationInterruptProcess_TypeInfo, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    byte_48E517B = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v11 = sub_1B00F18(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v11, 0LL);
  isClearTempDeadSvtPrevAct = this->fields.isClearTempDeadSvtPrevAct;
  v13 = (CheckEnemyRelationInterruptProcess_o *)sub_1B00F18(CheckEnemyRelationInterruptProcess_TypeInfo);
  CheckEnemyRelationInterruptProcess___ctor(v13, isClearTempDeadSvtPrevAct, 0LL);
  if ( !v11
    || (*(_QWORD *)(v11 + 232) = v13,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v11 + 232), (int32_t)v13, v16, v17),
        *(_BYTE *)(v11 + 209) = 1,
        !v10)
    || (items = v10->fields._items,
        v21 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v10->fields._version,
        !items) )
  {
    sub_1B00F28(v14, v15);
  }
  size = v10->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v11,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    v10->fields._size = size + 1;
    v23[4] = (Il2CppClass *)v11;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v23 + 4), v11, v18, v19);
  }
  this->fields.isClearTempDeadSvtPrevAct = 0;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v9; // w3

  if ( (byte_48E517A & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int___ctor__, *(_QWORD *)&ltype);
    sub_1B00CCC(&System_Collections_Generic_HashSet_int__TypeInfo, v5);
    byte_48E517A = 1;
  }
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_1B00F18(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_3279E3C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.tempDeadSvtHash = v6;
  p_tempDeadSvtHash = &this->fields.tempDeadSvtHash;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)p_tempDeadSvtHash, (int32_t)v6, v8, v9);
  *((_BYTE *)p_tempDeadSvtHash + 8) = 0;
  return 0LL;
}


void __fastcall BattleLogicEnemyAi__addEnemyActPriorityList(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *inSvtData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *actlist; // x0

  if ( (byte_48E5180 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleServantData__Insert__, inSvtData);
    byte_48E5180 = 1;
  }
  actlist = (System_Collections_Generic_List_object__o *)this->fields.actlist;
  if ( !actlist )
    sub_1B00F28(0LL, inSvtData);
  System_Collections_Generic_List_object___Insert(
    actlist,
    0,
    (Il2CppObject *)inSvtData,
    (const MethodInfo_33C2780 *)Method_System_Collections_Generic_List_BattleServantData__Insert__);
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
  BattleLogicTask_o *v17; // x22
  System_Int32_array *CommandList; // x0
  __int64 v19; // x1
  int32_t Type; // w24
  WeightRate_int__o *v21; // x23
  __int64 v22; // x8
  System_Int32_array *v23; // x24
  unsigned __int64 v24; // x25
  int32_t Next; // w0
  int32_t Data; // w0
  int32_t SvtId; // w25
  int32_t DispLimitCount; // w26
  BattleCommandData_o *v29; // x23
  int32_t v30; // w1
  BattleComboData_o *v31; // x20

  if ( (byte_48E5186 & 1) == 0 )
  {
    sub_1B00CCC(&BattleComboData_TypeInfo, svtData);
    sub_1B00CCC(&BattleCommandData_TypeInfo, v10);
    sub_1B00CCC(&BattleLogicTask_TypeInfo, v11);
    sub_1B00CCC(&Method_WeightRate_int___ctor__, v12);
    sub_1B00CCC(&Method_WeightRate_int__getData__, v13);
    sub_1B00CCC(&Method_WeightRate_int__getTotalWeight__, v14);
    sub_1B00CCC(&Method_WeightRate_int__setWeight__, v15);
    sub_1B00CCC(&WeightRate_int__TypeInfo, v16);
    byte_48E5186 = 1;
  }
  v17 = (BattleLogicTask_o *)sub_1B00F18(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_21;
  BattleLogicTask__setTarget(v17, targetId, 0LL);
  if ( !svtData )
    goto LABEL_21;
  BattleLogicTask__setActor(v17, 3, svtData->fields.uniqueId, 0LL);
  if ( SvtType__IsEnemy_36513788(svtData->fields.svtType, 0LL) )
  {
    Type = 10;
    goto LABEL_15;
  }
  v21 = (WeightRate_int__o *)sub_1B00F18(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v21, (const MethodInfo_379B874 *)Method_WeightRate_int___ctor__);
  CommandList = BattleServantData__getCommandList(svtData, 0LL);
  if ( !CommandList )
    goto LABEL_21;
  v22 = *(_QWORD *)&CommandList->max_length;
  v23 = CommandList;
  if ( (int)v22 >= 1 )
  {
    v24 = 0LL;
    while ( 1 )
    {
      if ( v24 >= (unsigned int)v22 )
        sub_1B00F30(CommandList, v19);
      if ( !v21 )
        break;
      WeightRate_int___setWeight(
        v21,
        10,
        v23->m_Items[v24 + 1],
        (const MethodInfo_379AE50 *)Method_WeightRate_int__setWeight__);
      LODWORD(v22) = v23->max_length;
      if ( (__int64)++v24 >= (int)v22 )
        goto LABEL_13;
    }
LABEL_21:
    sub_1B00F28(CommandList, v19);
  }
LABEL_13:
  if ( !v21 )
    goto LABEL_21;
  Next = BattleRandom__getNext(v21->fields.totalweight, 0LL);
  Data = WeightRate_int___getData(v21, Next, (const MethodInfo_379B204 *)Method_WeightRate_int__getData__);
  Type = BattleCommand__getType(Data, 0LL);
LABEL_15:
  SvtId = BattleServantData__getSvtId(svtData, 0LL);
  DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
  v29 = (BattleCommandData_o *)sub_1B00F18(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_41719924(v29, Type, SvtId, DispLimitCount, 0, -1, 0LL);
  if ( !v29 )
    goto LABEL_21;
  v29->fields.uniqueId = svtData->fields.uniqueId;
  if ( !baseTask )
    goto LABEL_21;
  if ( baseTask->fields.isNoCriticalOnAttack )
    v30 = 3;
  else
    v30 = 1;
  BattleCommandData__SetCriticalDecisionType(v29, v30, 0LL);
  v17->fields.isNoCriticalOnAttack = baseTask->fields.isNoCriticalOnAttack;
  v31 = (BattleComboData_o *)sub_1B00F18(BattleComboData_TypeInfo);
  BattleComboData___ctor(v31, 0LL);
  BattleLogicTask__setActionCommand(v17, v31, v29, countAct, 0LL);
  return v17;
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
    sub_1B00F28(0LL, method);
  return BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
}


System_Int32_array *__fastcall BattleLogicEnemyAi__get_PartySvtIds(
        BattleLogicEnemyAi_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1B00F28(0LL, method);
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
  int32_t v20; // w3
  const MethodInfo *v21; // x6
  BattleLogicTask_array *v22; // x20
  const MethodInfo *v23; // x3
  BattleLogicTask_array *v24; // x19
  System_Action_object__o *v25; // x21

  if ( (byte_48E5181 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_BattleLogicTask__TypeInfo, svtData);
    sub_1B00CCC(&Method_BasicHelper_ForEach_BattleLogicTask___, v13);
    sub_1B00CCC(&Method_BattleLogicEnemyAi___c__DisplayClass25_0__procAiAct_b__0__, v14);
    sub_1B00CCC(&BattleLogicEnemyAi___c__DisplayClass25_0_TypeInfo, v15);
    byte_48E5181 = 1;
  }
  v16 = sub_1B00F18(BattleLogicEnemyAi___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    sub_1B00F28(v17, v18);
  *(_QWORD *)(v16 + 16) = svtData;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)svtData, v19, v20);
  v22 = BattleLogicEnemyAi__procAiActLocal(
          this,
          *(BattleServantData_o **)(v16 + 16),
          aiEnt,
          countAct,
          aiInfo,
          procState,
          v21);
  v24 = BattleLogicEnemyAi__ReplaceCommandTasksBySealStatus(this, *(BattleServantData_o **)(v16 + 16), v22, v23);
  v25 = (System_Action_object__o *)sub_1B00F18(System_Action_BattleLogicTask__TypeInfo);
  System_Action_object____ctor(
    v25,
    (Il2CppObject *)v16,
    Method_BattleLogicEnemyAi___c__DisplayClass25_0__procAiAct_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)v22,
    (System_Action_T__o *)v25,
    (const MethodInfo_2D50464 *)Method_BasicHelper_ForEach_BattleLogicTask___);
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
  BattleLogicEnemyAi_o *v12; // x21
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
  int32_t data_high; // w27
  AiActEntity_o *v32; // x26
  AiState_o *v33; // x0
  bool v35; // w28
  WeightRate_int__o *v36; // x22
  int32_t Int; // w0
  int32_t v38; // w0
  int32_t v39; // w0
  BattleServantData_o *v40; // x0
  int32_t v41; // w1
  int *skillVals; // x8
  int32_t v43; // w22
  int32_t v44; // w25
  int32_t Next; // w0
  int32_t Data; // w0
  System_Collections_Generic_List_object__o *v47; // x27
  __int64 v48; // x25
  int32_t v49; // w2
  int32_t v50; // w3
  struct System_String_o *infoText; // x1
  bool v52; // w22
  ServantAiActArgument_o *v53; // x20
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  struct BattleLogic_o *logic; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  int32_t v60; // w2
  int32_t v61; // w3
  Il2CppObject *MasterData_object; // x20
  BattleSkillInfoData_o *SkillInfoDataByAiActType; // x0
  SkillLvEntity_o *Entity; // x28
  int32_t v65; // w2
  int32_t v66; // w3
  bool IsEnableTarget; // w29
  BattleLogic_o *v68; // x20
  struct BattleLogicTarget_o *funcId; // x22
  BattleLogicEnemyAi_o *v70; // x2
  BattleLogic_o *v71; // x0
  struct BattleLogicTarget_o *logictarget; // x1
  Il2CppObject *v73; // x20
  struct BattleLogic_o *tempDeadSvtHash; // x1
  BattleData_o *v75; // x8
  BattleLogicTarget_o *v76; // x20
  int32_t target; // w24
  int32_t uniqueId; // w27
  System_Int32_array *targetIndividuality; // x28
  System_Int32_array *FieldPlayerServantIDList; // x22
  const MethodInfo *v81; // x2
  BattleLogicTarget_o *v82; // x20
  int32_t v83; // w24
  int32_t v84; // w27
  System_Int32_array *v85; // x28
  System_Int32_array *v86; // x29
  int32_t v87; // w2
  int32_t v88; // w3
  int32_t v89; // w2
  int32_t v90; // w3
  int32_t v91; // w26
  int32_t Type; // w23
  int32_t v93; // w2
  int32_t v94; // w3
  struct System_Object_array *v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  Il2CppClass **v98; // x0
  int32_t v99; // w2
  int32_t v100; // w3
  BattleCommandData_o *v101; // x21
  BattleComboData_o *v102; // x20
  int32_t TreasureDvcId; // w0
  BattleLogicTask_o *v104; // x19
  struct System_Object_array *v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  Il2CppClass **v108; // x0
  ServantStatusBattleListViewItem_o *v109; // x0
  int32_t v110; // w1
  __int64 v111; // x8
  System_Collections_Generic_List_object__o *v112; // x0
  Il2CppObject *v113; // x1
  WeightRate_int__o *v114; // x23
  const MethodInfo *v115; // x2
  struct BattleLogic_o *v116; // x8
  BattleLogicEnemyAi_o *v117; // x21
  unsigned __int64 v118; // x20
  int32_t v119; // w0
  int32_t v120; // w0
  int32_t SvtId; // w20
  int32_t DispLimitCount; // w22
  BattleCommandData_o *v123; // x21
  int32_t v124; // w1
  BattleComboData_o *v125; // x19
  struct System_Object_array *items; // x8
  _QWORD *v127; // x9
  __int64 size; // x10
  Il2CppClass **v129; // x0
  int32_t v130; // [xsp+24h] [xbp-9Ch]
  System_Collections_Generic_List_object__o *v131; // [xsp+28h] [xbp-98h]
  int32_t v132; // [xsp+34h] [xbp-8Ch]
  System_Int32_array *targetlist; // [xsp+38h] [xbp-88h]
  BattleSkillInfoData_o *v134; // [xsp+40h] [xbp-80h]
  int32_t lv; // [xsp+4Ch] [xbp-74h] BYREF
  int32_t id[2]; // [xsp+50h] [xbp-70h] BYREF
  int32_t aiActType; // [xsp+58h] [xbp-68h] BYREF
  bool noMessage; // [xsp+5Ch] [xbp-64h] BYREF

  v12 = this;
  if ( (byte_48E5182 & 1) == 0 )
  {
    sub_1B00CCC(&BattleComboData_TypeInfo, svtData);
    sub_1B00CCC(&BattleCommandData_TypeInfo, v13);
    sub_1B00CCC(&BattleLogicTask_TypeInfo, v14);
    sub_1B00CCC(&Method_DataManager_GetMasterData_SkillLvMaster___, v15);
    sub_1B00CCC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v16);
    sub_1B00CCC(&int___TypeInfo, v17);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v19);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v20);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v21);
    sub_1B00CCC(&ServantAiActArgument_TypeInfo, v22);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1B00CCC(&Method_WeightRate_int___ctor__, v24);
    sub_1B00CCC(&Method_WeightRate_int__getCount__, v25);
    sub_1B00CCC(&Method_WeightRate_int__getData__, v26);
    sub_1B00CCC(&Method_WeightRate_int__getTotalWeight__, v27);
    sub_1B00CCC(&Method_WeightRate_int__setWeight__, v28);
    sub_1B00CCC(&WeightRate_int__TypeInfo, v29);
    this = (BattleLogicEnemyAi_o *)sub_1B00CCC(&StringLiteral_8609/*"MOTION_"*/, v30);
    byte_48E5182 = 1;
  }
  *(_QWORD *)id = 0LL;
  lv = 0;
  noMessage = 0;
  if ( !aiEnt )
    goto LABEL_164;
  this = (BattleLogicEnemyAi_o *)BattleLogicBaseAi__GetAiActEntity(
                                   (BattleLogicBaseAi_o *)v12,
                                   aiEnt->fields.aiActId,
                                   0LL);
  if ( !this )
    goto LABEL_164;
  data_high = HIDWORD(this->fields.data);
  v32 = (AiActEntity_o *)this;
  aiActType = data_high;
  if ( !svtData )
    goto LABEL_164;
  v33 = (AiState_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._18_getAiState.method)(
                       svtData,
                       svtData->klass->vtable._19_ExistAiThinking.methodPtr);
  if ( BattleLogicBaseAi__IsChangeThinkingOnly((BattleLogicBaseAi_o *)v12, data_high, (AiBaseEntity_o *)aiEnt, v33, 0LL) )
    return v12->fields.emptyTask;
  v35 = procState != 1 || BattleServantData__canUseSkill(svtData, -1, 0LL);
  v36 = (WeightRate_int__o *)sub_1B00F18(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v36, (const MethodInfo_379B874 *)Method_WeightRate_int___ctor__);
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
      if ( !v35 )
        goto LABEL_58;
      if ( !BattleServantData__isUseSelfSkill(svtData, 0, 0LL) )
        goto LABEL_19;
      this = (BattleLogicEnemyAi_o *)AiAct__getInt(11, 0LL);
      if ( !v36 )
        goto LABEL_164;
      WeightRate_int___setWeight(v36, 10, (int32_t)this, (const MethodInfo_379AE50 *)Method_WeightRate_int__setWeight__);
LABEL_19:
      if ( !BattleServantData__isUseSelfSkill(svtData, 1, 0LL) )
        goto LABEL_22;
      this = (BattleLogicEnemyAi_o *)AiAct__getInt(12, 0LL);
      if ( !v36 )
        goto LABEL_164;
      WeightRate_int___setWeight(v36, 10, (int32_t)this, (const MethodInfo_379AE50 *)Method_WeightRate_int__setWeight__);
LABEL_22:
      this = (BattleLogicEnemyAi_o *)BattleServantData__isUseSelfSkill(svtData, 2, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleLogicEnemyAi_o *)AiAct__getInt(13, 0LL);
        if ( !v36 )
          goto LABEL_164;
        WeightRate_int___setWeight(
          v36,
          10,
          (int32_t)this,
          (const MethodInfo_379AE50 *)Method_WeightRate_int__setWeight__);
      }
      else
      {
LABEL_58:
        if ( !v36 )
          goto LABEL_164;
      }
      if ( WeightRate_int___getCount(v36, (const MethodInfo_379B14C *)Method_WeightRate_int__getCount__) >= 1 )
        goto LABEL_60;
      goto LABEL_61;
    case 11:
      if ( !v35 )
      {
        aiActType = 2;
        noMessage = 1;
      }
      v40 = svtData;
      v41 = 0;
      goto LABEL_41;
    case 12:
      if ( !v35 )
      {
        aiActType = 2;
        noMessage = 1;
      }
      v41 = 1;
      v40 = svtData;
LABEL_41:
      if ( !BattleServantData__isUseSelfSkill(v40, v41, 0LL) )
        aiActType = 2;
      goto LABEL_62;
    case 13:
      if ( !v35 )
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
          goto LABEL_164;
        if ( skillVals[6] <= 1 )
        {
LABEL_133:
          aiActType = 0;
          goto LABEL_62;
        }
        if ( v35 || data_high != 41 )
        {
          v43 = skillVals[8];
          v44 = skillVals[9];
          this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_164;
          this = (BattleLogicEnemyAi_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillLvMaster___);
          if ( !this )
            goto LABEL_164;
          if ( SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v43, v44, 0LL) )
          {
            BattleServantData__addSkillInfo(svtData, 20, 0, v43, v44, -1LL, -1, 0LL, 0LL);
            goto LABEL_62;
          }
          goto LABEL_133;
        }
LABEL_61:
        aiActType = 2;
        noMessage = 1;
        goto LABEL_62;
      }
      this = (BattleLogicEnemyAi_o *)AiAct__getInt(2, 0LL);
      if ( !v36 )
        goto LABEL_164;
      WeightRate_int___setWeight(v36, 10, (int32_t)this, (const MethodInfo_379AE50 *)Method_WeightRate_int__setWeight__);
      if ( v35 )
      {
        if ( BattleServantData__isUseSelfSkill(svtData, 0, 0LL) )
        {
          Int = AiAct__getInt(11, 0LL);
          WeightRate_int___setWeight(v36, 10, Int, (const MethodInfo_379AE50 *)Method_WeightRate_int__setWeight__);
        }
        if ( BattleServantData__isUseSelfSkill(svtData, 1, 0LL) )
        {
          v38 = AiAct__getInt(12, 0LL);
          WeightRate_int___setWeight(v36, 10, v38, (const MethodInfo_379AE50 *)Method_WeightRate_int__setWeight__);
        }
        if ( BattleServantData__isUseSelfSkill(svtData, 2, 0LL) )
        {
          v39 = AiAct__getInt(13, 0LL);
          WeightRate_int___setWeight(v36, 10, v39, (const MethodInfo_379AE50 *)Method_WeightRate_int__setWeight__);
        }
      }
LABEL_60:
      Next = BattleRandom__getNext(v36->fields.totalweight, 0LL);
      Data = WeightRate_int___getData(v36, Next, (const MethodInfo_379B204 *)Method_WeightRate_int__getData__);
      aiActType = AiAct__getType(Data, 0LL);
LABEL_62:
      v47 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v47,
        (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      v48 = sub_1B00F18(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor((BattleLogicTask_o *)v48, 0LL);
      if ( noMessage )
      {
        if ( !v48 )
          goto LABEL_164;
      }
      else
      {
        if ( !v48 )
          goto LABEL_164;
        infoText = aiEnt->fields.infoText;
        *(_QWORD *)(v48 + 152) = infoText;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v48 + 152), (int32_t)infoText, v49, v50);
      }
      BattleLogicTask__setActor((BattleLogicTask_o *)v48, 3, svtData->fields.uniqueId, 0LL);
      if ( AiBaseEntity__IsForcedActionSpeedAnyTime((AiBaseEntity_o *)aiEnt, 0LL) )
        *(_BYTE *)(v48 + 160) = 1;
      *(_BYTE *)(v48 + 208) = AiActEntity__IsNoCriticalOnAttack(v32, 0LL);
      this = (BattleLogicEnemyAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._18_getAiState.method)(
                                       svtData,
                                       svtData->klass->vtable._19_ExistAiThinking.methodPtr);
      if ( !this )
        goto LABEL_164;
      AiState__setBeforeAction((AiState_o *)this, aiActType, aiEnt->fields.aiActId, 0LL);
      v52 = noMessage;
      v53 = (ServantAiActArgument_o *)sub_1B00F18(ServantAiActArgument_TypeInfo);
      ServantAiActArgument___ctor(v53, v32, (AiBaseEntity_o *)aiEnt, svtData, v52, 0LL);
      if ( aiActType == 71 )
      {
        this = (BattleLogicEnemyAi_o *)AiBaseEntity__getActionValue((AiBaseEntity_o *)aiEnt, 0LL);
        id[1] = (int)this;
        if ( (int)this >= 1 )
        {
          v54 = System_Int32__ToString((int32_t)&id[1], 0LL);
          v55 = System_String__Concat_60325748((System_String_o *)StringLiteral_8609/*"MOTION_"*/, v54, 0LL);
          BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v48, v55, 0LL);
          logic = v12->fields.logic;
          if ( !logic )
            goto LABEL_164;
          this = (BattleLogicEnemyAi_o *)logic->fields.perf;
          if ( !this )
            goto LABEL_164;
          ServantGameObject = BattlePerformance__getServantGameObject(
                                (BattlePerformance_o *)this,
                                svtData->fields.uniqueId,
                                0LL);
          *(_QWORD *)(v48 + 112) = ServantGameObject;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v48 + 112), (int32_t)ServantGameObject, v58, v59);
          BattleLogicTask__setActor((BattleLogicTask_o *)v48, 3, svtData->fields.uniqueId, 0LL);
          if ( !v47 )
            goto LABEL_164;
          goto LABEL_157;
        }
        goto LABEL_77;
      }
      this = (BattleLogicEnemyAi_o *)BattleLogicBaseAi__SetNoTargetAiActTask(
                                       (BattleLogicBaseAi_o *)v12,
                                       (System_Collections_Generic_List_BattleLogicTask__o *)v47,
                                       aiActType,
                                       (BaseAiActArgument_o *)v53,
                                       0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_77:
        if ( !v47 )
          goto LABEL_164;
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v47,
                                          (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      }
      this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_164;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      SkillInfoDataByAiActType = BattleServantData__getSkillInfoDataByAiActType(svtData, aiActType, 0LL);
      Entity = (SkillLvEntity_o *)SkillInfoDataByAiActType;
      v134 = SkillInfoDataByAiActType;
      if ( SkillInfoDataByAiActType )
      {
        this = (BattleLogicEnemyAi_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))SkillInfoDataByAiActType->klass->vtable._5_get_skillId.method)(
                                         SkillInfoDataByAiActType,
                                         SkillInfoDataByAiActType->klass->vtable._6_get_IndividualityArray.methodPtr);
        if ( !MasterData_object )
          goto LABEL_164;
        Entity = SkillLvMaster__GetEntity(
                   (SkillLvMaster_o *)MasterData_object,
                   (int32_t)this,
                   HIDWORD(Entity->fields.funcId),
                   0LL);
      }
      v130 = countAct;
      v131 = v47;
      v132 = procState;
      if ( AiAct__isSkillType(aiActType, 0LL) )
      {
        IsEnableTarget = 1;
        if ( !v134 || !Entity )
          goto LABEL_96;
        v68 = v12->fields.logic;
        funcId = (struct BattleLogicTarget_o *)Entity->fields.funcId;
        this = (BattleLogicEnemyAi_o *)SkillLvEntity__getDataValsList(Entity, 0LL);
        if ( !v68 )
          goto LABEL_164;
        v70 = this;
        v71 = v68;
        logictarget = funcId;
      }
      else
      {
        if ( aiActType != 80 )
          goto LABEL_95;
        this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_164;
        v73 = DataManager__GetMasterData_object_(
                (DataManager_o *)this,
                (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
        this = (BattleLogicEnemyAi_o *)BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
        if ( !v73 )
          goto LABEL_164;
        this = (BattleLogicEnemyAi_o *)TreasureDvcLvMaster__GetEntity(
                                         (TreasureDvcLvMaster_o *)v73,
                                         (int32_t)this,
                                         svtData->fields.treasuredvcLevel,
                                         0LL);
        if ( !this )
        {
LABEL_95:
          IsEnableTarget = 1;
          goto LABEL_96;
        }
        if ( !v12->fields.logic )
          goto LABEL_164;
        logictarget = this->fields.logictarget;
        v71 = v12->fields.logic;
        v70 = 0LL;
      }
      IsEnableTarget = BattleLogic__checkEnemyTargetFunction(
                         v71,
                         (System_Int32_array *)logictarget,
                         (DataVals_array *)v70,
                         0LL);
LABEL_96:
      this = (BattleLogicEnemyAi_o *)v12->fields.logictarget;
      if ( !this )
        goto LABEL_164;
      tempDeadSvtHash = (struct BattleLogic_o *)v12->fields.tempDeadSvtHash;
      this->fields.logic = tempDeadSvtHash;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.logic, (int32_t)tempDeadSvtHash, v65, v66);
      if ( v134 && Entity )
        IsEnableTarget = SkillLvEntity__IsEnableTarget(Entity, IsEnableTarget, 0LL);
      this = (BattleLogicEnemyAi_o *)sub_1B00D74(int___TypeInfo, 1LL);
      v75 = v12->fields.data;
      targetlist = (System_Int32_array *)this;
      if ( !v75 )
        goto LABEL_164;
      v76 = v12->fields.logictarget;
      target = v32->fields.target;
      uniqueId = svtData->fields.uniqueId;
      targetIndividuality = v32->fields.targetIndividuality;
      FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v75, 0LL, 0LL);
      this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(v12, aiEnt, v81);
      if ( !v76 )
        goto LABEL_164;
      this = (BattleLogicEnemyAi_o *)BattleLogicTarget__getTargetAiAct(
                                       v76,
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
        goto LABEL_164;
      if ( !targetlist->max_length )
        goto LABEL_165;
      targetlist->m_Items[1] = (int)this;
      this = (BattleLogicEnemyAi_o *)sub_1B00D74(int___TypeInfo, 1LL);
      if ( !v12->fields.data )
        goto LABEL_164;
      v82 = v12->fields.logictarget;
      v83 = v32->fields.target;
      v84 = svtData->fields.uniqueId;
      v85 = v32->fields.targetIndividuality;
      v86 = (System_Int32_array *)this;
      this = (BattleLogicEnemyAi_o *)BattleData__getFieldEnemyServantIDList(v12->fields.data, 0, 0LL);
      if ( !v82 )
        goto LABEL_164;
      this = (BattleLogicEnemyAi_o *)BattleLogicTarget__getTargetAiAct(
                                       v82,
                                       v83,
                                       v84,
                                       v85,
                                       (System_Int32_array *)this,
                                       0,
                                       0,
                                       0LL,
                                       v32,
                                       1,
                                       0LL);
      if ( !v86 )
        goto LABEL_164;
      if ( !v86->max_length )
        goto LABEL_165;
      v86->m_Items[1] = (int)this;
      this = (BattleLogicEnemyAi_o *)v12->fields.logictarget;
      if ( !this )
        goto LABEL_164;
      this->fields.logic = 0LL;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.logic, 0, v87, v88);
      this = (BattleLogicEnemyAi_o *)v12->fields.logic;
      if ( !this )
        goto LABEL_164;
      *(_BYTE *)(v48 + 168) = (v132 == 1) & (BattleLogic__GetLogicType((BattleLogic_o *)this, 0LL) == 42);
      if ( AiAct__isAttackType(aiActType, 0LL) )
      {
        *(_QWORD *)(v48 + 32) = targetlist;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v48 + 32), (int32_t)targetlist, v89, v90);
        if ( SvtType__IsEnemy_36513788(svtData->fields.svtType, 0LL) )
        {
          v91 = v130;
          v47 = v131;
          Type = 10;
          goto LABEL_149;
        }
        v91 = v130;
        v47 = v131;
        if ( AiAct__isAttackArts(aiActType, 0LL) )
        {
          Type = 1;
          goto LABEL_149;
        }
        if ( AiAct__isAttackBuster(aiActType, 0LL) )
        {
          Type = 2;
          goto LABEL_149;
        }
        if ( AiAct__isAttackQuick(aiActType, 0LL) )
        {
          Type = 3;
          goto LABEL_149;
        }
        v114 = (WeightRate_int__o *)sub_1B00F18(WeightRate_int__TypeInfo);
        WeightRate_int____ctor(v114, (const MethodInfo_379B874 *)Method_WeightRate_int___ctor__);
        this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi__GetCommandArray(v12, svtData, v115);
        if ( !this )
          goto LABEL_164;
        v116 = this->fields.logic;
        v117 = this;
        if ( (int)v116 < 1 )
        {
LABEL_147:
          if ( !v114 )
            goto LABEL_164;
          v119 = BattleRandom__getNext(v114->fields.totalweight, 0LL);
          v120 = WeightRate_int___getData(v114, v119, (const MethodInfo_379B204 *)Method_WeightRate_int__getData__);
          Type = BattleCommand__getType(v120, 0LL);
LABEL_149:
          SvtId = BattleServantData__getSvtId(svtData, 0LL);
          DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
          v123 = (BattleCommandData_o *)sub_1B00F18(BattleCommandData_TypeInfo);
          BattleCommandData___ctor_41719924(v123, Type, SvtId, DispLimitCount, 0, -1, 0LL);
          if ( !v123 )
            goto LABEL_164;
          v123->fields.uniqueId = svtData->fields.uniqueId;
          if ( *(_BYTE *)(v48 + 208) )
          {
            v124 = 3;
          }
          else
          {
            if ( AiAct__isAttackCritical(aiActType, 0LL) )
            {
              BattleCommandData__SetCriticalDecisionType(v123, 2, 0LL);
              aiActType = 2;
              goto LABEL_156;
            }
            v124 = 1;
          }
          BattleCommandData__SetCriticalDecisionType(v123, v124, 0LL);
LABEL_156:
          v125 = (BattleComboData_o *)sub_1B00F18(BattleComboData_TypeInfo);
          BattleComboData___ctor(v125, 0LL);
          BattleLogicTask__setActionCommand((BattleLogicTask_o *)v48, v125, v123, v91, 0LL);
          if ( !v47 )
            goto LABEL_164;
          goto LABEL_157;
        }
        v118 = 0LL;
        while ( v118 < (unsigned int)v116 )
        {
          if ( !v114 )
            goto LABEL_164;
          WeightRate_int___setWeight(
            v114,
            10,
            *((_DWORD *)&v117->fields.logictarget + v118),
            (const MethodInfo_379AE50 *)Method_WeightRate_int__setWeight__);
          LODWORD(v116) = v117->fields.logic;
          if ( (__int64)++v118 >= (int)v116 )
            goto LABEL_147;
        }
LABEL_165:
        sub_1B00F30(this, svtData);
      }
      this = (BattleLogicEnemyAi_o *)AiAct__isSkillType(aiActType, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( aiActType != 80 )
          goto LABEL_129;
        v47 = v131;
        if ( BattleLogicServantAi__TryGetOverwriteTreasureDevice(
               (BattleLogicServantAi_o *)v12,
               svtData,
               v32->fields.skillVals,
               id,
               &lv,
               0LL) )
        {
          BattleLogicTask__SetOverwriteTreasureDevice((BattleLogicTask_o *)v48, id[0], lv, 0LL);
          this = *(BattleLogicEnemyAi_o **)(v48 + 200);
          if ( !this )
            goto LABEL_164;
          OverwriteTreasureDeviceData__Overwrite((OverwriteTreasureDeviceData_o *)this, svtData, 0LL);
        }
        BattleLogicTask__setActor((BattleLogicTask_o *)v48, 3, svtData->fields.uniqueId, 0LL);
        *(_QWORD *)(v48 + 32) = targetlist;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v48 + 32), (int32_t)targetlist, v99, v100);
        v101 = (BattleCommandData_o *)sub_1B00F18(BattleCommandData_TypeInfo);
        BattleCommandData___ctor(v101, 0LL);
        this = (BattleLogicEnemyAi_o *)BattleServantData__getTreasureDvcCardId(svtData, 0LL);
        if ( v101 )
        {
          v101->fields._type = (int)this;
          v101->fields.svtlimit = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
          v101->fields.uniqueId = svtData->fields.uniqueId;
          v101->fields.svtId = BattleServantData__getSvtId(svtData, 0LL);
          v101->fields.treasureDvc = BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
          v102 = (BattleComboData_o *)sub_1B00F18(BattleComboData_TypeInfo);
          BattleComboData___ctor(v102, 0LL);
          BattleLogicTask__setActionCommand((BattleLogicTask_o *)v48, v102, v101, v130, 0LL);
          TreasureDvcId = BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
          BattleLogicTask__setActionTreasureDvc((BattleLogicTask_o *)v48, TreasureDvcId, 1, 0LL);
          if ( v131 )
          {
LABEL_157:
            items = v47->fields._items;
            v127 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v47->fields._version;
            if ( !items )
              goto LABEL_164;
            size = v47->fields._size;
            if ( (unsigned int)size < items->max_length )
            {
              v129 = &items->obj.klass + size;
              v47->fields._size = size + 1;
              v129[4] = (Il2CppClass *)v48;
              v109 = (ServantStatusBattleListViewItem_o *)(v129 + 4);
              v110 = v48;
              goto LABEL_160;
            }
            v111 = v127[4];
            v112 = v47;
            v113 = (Il2CppObject *)v48;
            goto LABEL_162;
          }
        }
LABEL_164:
        sub_1B00F28(this, svtData);
      }
      this = (BattleLogicEnemyAi_o *)BattleServantData__get_BuffData(svtData, 0LL);
      if ( !this )
        goto LABEL_164;
      BattleBuffData__UpdateSkillRelationBuff((BattleBuffData_o *)this, 0LL);
      if ( v134 )
      {
        BattleLogicBaseAi__SetSkillSelectAddIndex((BattleLogicBaseAi_o *)v12, v134, (AiBaseEntity_o *)aiEnt, 0LL);
        BattleLogicTask__setActionSkill((BattleLogicTask_o *)v48, v134, targetlist, v86, 0, 0, 0LL);
        BattleLogicTask__setActor((BattleLogicTask_o *)v48, 3, svtData->fields.uniqueId, 0LL);
        v47 = v131;
        *(_BYTE *)(v48 + 169) = 1;
        if ( v131 )
        {
          v95 = v131->fields._items;
          v96 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
          ++v131->fields._version;
          if ( v95 )
          {
            v97 = v131->fields._size;
            if ( (unsigned int)v97 >= v95->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v131,
                (Il2CppObject *)v48,
                *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
            }
            else
            {
              v98 = &v95->obj.klass + v97;
              v131->fields._size = v97 + 1;
              v98[4] = (Il2CppClass *)v48;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)(v98 + 4), v48, v93, v94);
            }
            v104 = (BattleLogicTask_o *)sub_1B00F18(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v104, 0LL);
            v105 = v131->fields._items;
            v106 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v131->fields._version;
            if ( v105 )
            {
              v107 = v131->fields._size;
              if ( (unsigned int)v107 < v105->max_length )
              {
                v108 = &v105->obj.klass + v107;
                v131->fields._size = v107 + 1;
                v108[4] = (Il2CppClass *)v104;
                v109 = (ServantStatusBattleListViewItem_o *)(v108 + 4);
                v110 = (int)v104;
LABEL_160:
                sub_1B00C70(v109, v110, v60, v61);
                return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                                  v47,
                                                  (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
              }
              v111 = v106[4];
              v112 = v131;
              v113 = (Il2CppObject *)v104;
LABEL_162:
              System_Collections_Generic_List_object___AddWithResize(
                v112,
                v113,
                *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v111 + 192) + 112LL));
              return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                                v47,
                                                (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
            }
          }
        }
        goto LABEL_164;
      }
LABEL_129:
      v47 = v131;
      if ( !v131 )
        goto LABEL_164;
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v47,
                                        (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  if ( (byte_48E517E & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_1B00CCC(
                                     &Method_System_Collections_Generic_List_BattleServantData__Clear__,
                                     method);
    byte_48E517E = 1;
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
        sub_1B00F30(this, method);
      this = (BattleLogicEnemyAi_o *)*((_QWORD *)&v7->fields.logictarget + (int)v8);
      if ( !this )
        break;
      BattleServantData__resetActionCount((BattleServantData_o *)this, 0LL);
      logic = (int)v7->fields.logic;
      if ( (int)++v8 >= logic )
        return;
    }
LABEL_14:
    sub_1B00F28(this, method);
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

  if ( (byte_48E517C & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, *(_QWORD *)&ltype);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v6);
    byte_48E517C = 1;
  }
  BattleLogicEnemyAi__ExcludeDeadFromTempDead(this, *(const MethodInfo **)&ltype);
  TaskAIAttack = BattleLogicEnemyAi__CreateTaskAIAttack(this, v7, data, v8);
  if ( !TaskAIAttack )
    sub_1B00F28(0LL, v10);
  v11 = (System_Collections_Generic_List_object__o *)TaskAIAttack;
  if ( TaskAIAttack->fields._size >= 1 )
    BattleLogicEnemyAi__ClearTempDeadSvt(this, v10);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v16; // w3
  struct BattleData_o *v17; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_48E5183 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_AiActMaster___, *(_QWORD *)&actUniqueId);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_48E5183 = 1;
  }
  info = 0LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  data = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.aiActMst, (int32_t)MasterData_object, v15, v16);
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
                                        (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_16:
    sub_1B00F28(data, v11);
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
  System_Collections_Generic_List_object___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v16; // w3
  struct BattleData_o *v17; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_48E5184 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_AiActMaster___, *(_QWORD *)&actUniqueId);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B00CCC(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_48E5184 = 1;
  }
  info = 0LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  data = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.aiActMst, (int32_t)MasterData_object, v15, v16);
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
                                        (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_16:
    sub_1B00F28(data, v11);
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
  System_Collections_Generic_List_object___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  ServantStatusBattleListViewItem_o *p_actlist; // x19
  System_Collections_Generic_IEnumerable_TSource__o *FieldEnemyServantList; // x21
  BattleLogicEnemyAi___c_c *v20; // x8
  System_Func_object__bool__o *_9__23_0; // x22
  Il2CppObject *v22; // x23
  struct BattleLogicEnemyAi___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  BattleLogicEnemyAi___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x21
  System_Func_object__int__o *_9__23_1; // x22
  Il2CppObject *v30; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v34; // x0
  BattleLogicEnemyAi___c_c *v35; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v36; // x21
  System_Func_object__int__o *_9__23_2; // x22
  Il2CppObject *v38; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v42; // x0
  BattleLogicEnemyAi___c_c *v43; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v44; // x21
  System_Func_object__int__o *_9__23_3; // x22
  Il2CppObject *v46; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_Collections_Generic_List_TSource__o *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  struct BattleData_o *data; // x8
  System_Collections_Generic_List_object__o *klass; // x20
  System_Predicate_object__o *v56; // x21
  Il2CppObject *v57; // x22
  struct BattleLogicEnemyAi___c_StaticFields *v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_Collections_Generic_List_T__o *All; // x0
  int32_t v62; // w2
  int32_t v63; // w3

  v2 = this;
  if ( (byte_48E517F & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_OrderByDescending_BattleServantData__int___, method);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___, v3);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToList_BattleServantData___, v4);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Where_BattleServantData___, v5);
    sub_1B00CCC(&System_Func_BattleServantData__int__TypeInfo, v6);
    sub_1B00CCC(&System_Func_BattleServantData__bool__TypeInfo, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleServantData__FindAll__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v9);
    sub_1B00CCC(&System_Predicate_BattleServantData__TypeInfo, v10);
    sub_1B00CCC(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_0__, v11);
    sub_1B00CCC(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_1__, v12);
    sub_1B00CCC(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_2__, v13);
    sub_1B00CCC(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_3__, v14);
    sub_1B00CCC(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_4__, v15);
    this = (BattleLogicEnemyAi_o *)sub_1B00CCC(&BattleLogicEnemyAi___c_TypeInfo, v16);
    byte_48E517F = 1;
  }
  p_actlist = (ServantStatusBattleListViewItem_o *)&v2->fields.actlist;
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
      _9__23_0 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__23_0,
        v22,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_0__,
        0LL);
      static_fields = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      static_fields->__9__23_0 = (struct System_Func_BattleServantData__bool__o *)_9__23_0;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__23_0, (int32_t)_9__23_0, v24, v25);
    }
    v26 = System_Linq_Enumerable__Where_object_(
            FieldEnemyServantList,
            (System_Func_TSource__bool__o *)_9__23_0,
            (const MethodInfo_2D9D054 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
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
      _9__23_1 = (System_Func_object__int__o *)sub_1B00F18(System_Func_BattleServantData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__23_1,
        v30,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_1__,
        0LL);
      v31 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v31->__9__23_1 = (struct System_Func_BattleServantData__int__o *)_9__23_1;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v31->__9__23_1, (int32_t)_9__23_1, v32, v33);
    }
    v34 = System_Linq_Enumerable__OrderByDescending_object__int_(
            v28,
            (System_Func_TSource__TKey__o *)_9__23_1,
            (const MethodInfo_2D8A1D0 *)Method_System_Linq_Enumerable_OrderByDescending_BattleServantData__int___);
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
      _9__23_2 = (System_Func_object__int__o *)sub_1B00F18(System_Func_BattleServantData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__23_2,
        v38,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_2__,
        0LL);
      v39 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v39->__9__23_2 = (struct System_Func_BattleServantData__int__o *)_9__23_2;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v39->__9__23_2, (int32_t)_9__23_2, v40, v41);
    }
    v42 = System_Linq_Enumerable__ThenByDescending_object__int_(
            v36,
            (System_Func_TSource__TKey__o *)_9__23_2,
            (const MethodInfo_2D9716C *)Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
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
      _9__23_3 = (System_Func_object__int__o *)sub_1B00F18(System_Func_BattleServantData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__23_3,
        v46,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_3__,
        0LL);
      v47 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v47->__9__23_3 = (struct System_Func_BattleServantData__int__o *)_9__23_3;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v47->__9__23_3, (int32_t)_9__23_3, v48, v49);
    }
    v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__int_(
                                                                 v44,
                                                                 (System_Func_TSource__TKey__o *)_9__23_3,
                                                                 (const MethodInfo_2D9716C *)Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
    v51 = System_Linq_Enumerable__ToList_object_(
            v50,
            (const MethodInfo_2D9AFD4 *)Method_System_Linq_Enumerable_ToList_BattleServantData___);
    p_actlist->klass = (ServantStatusBattleListViewItem_c *)v51;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields.actlist, (int32_t)v51, v52, v53);
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
    v56 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_object____ctor(v56, v57, Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_4__, 0LL);
    v58 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    v58->__9__23_4 = (struct System_Predicate_BattleServantData__o *)v56;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v58->__9__23_4, (int32_t)v56, v59, v60);
  }
  if ( !klass )
LABEL_41:
    sub_1B00F28(this, method);
  All = System_Collections_Generic_List_object___FindAll(
          klass,
          (System_Predicate_T__o *)v56,
          (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleServantData__FindAll__);
  p_actlist->klass = (ServantStatusBattleListViewItem_c *)All;
  sub_1B00C70(p_actlist, (int32_t)All, v62, v63);
}


void __fastcall BattleLogicEnemyAi___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E5192 & 1) == 0 )
  {
    sub_1B00CCC(&BattleLogicEnemyAi___c_TypeInfo, v1);
    byte_48E5192 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(BattleLogicEnemyAi___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleLogicEnemyAi___c_TypeInfo->static_fields->__9 = (struct BattleLogicEnemyAi___c_o *)v2;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)BattleLogicEnemyAi___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B00F28(this, 0LL);
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
    sub_1B00F28(this, 0LL);
  return BattleServantData__GetOriginalRemainingNeedActCount(x, 0LL);
}


int32_t __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__23_2(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B00F28(this, 0LL);
  return x->fields.actPriority;
}


int32_t __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__23_3(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B00F28(this, 0LL);
  return BattleServantData__getDeckIndex(x, 0LL);
}


bool __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__23_4(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B00F28(this, 0LL);
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
    sub_1B00F28(this, 0LL);
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
    sub_1B00F28(this, x);
  return BattleLogicEnemyAi__ReplaceCommandTaskBySealStatus(this->fields.__4__this, this->fields.svtData, x, v3);
}