void __fastcall BattleLogicEnemyAi___ctor(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  const MethodInfo *v10; // x1

  if ( (byte_4BDF22D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_4BDF22D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this->fields.actlist = (struct System_Collections_Generic_List_BattleServantData__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.actlist, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  BattleLogicBaseAi___ctor((BattleLogicBaseAi_o *)this, v10);
}


void __fastcall BattleLogicEnemyAi__AddActCount(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  if ( !svtData || (++svtData->fields.actionCount, (data = this->fields.data) == 0LL) )
    sub_1C22094(this, svtData);
  ++data->fields.countEnemyAttack;
}


void __fastcall BattleLogicEnemyAi__AddTempDeadSvt(
        BattleLogicEnemyAi_o *this,
        int32_t svtUniqueId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x0

  if ( (byte_4BDF225 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4BDF225 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
    System_Collections_Generic_HashSet_int___Add(
      tempDeadSvtHash,
      svtUniqueId,
      (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
  if ( (byte_4BDF229 & 1) == 0 )
  {
    sub_1C21E38(&AiLogic_AiInfo_CheckedInfo_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_WeightRate_int___ctor__);
    sub_1C21E38(&Method_WeightRate_int__getCount__);
    sub_1C21E38(&Method_WeightRate_int__getData__);
    sub_1C21E38(&Method_WeightRate_int__getTotalWeight__);
    sub_1C21E38(&Method_WeightRate_int__setWeight__);
    sub_1C21E38(&WeightRate_int__TypeInfo);
    byte_4BDF229 = 1;
  }
  v11 = (WeightRate_int__o *)sub_1C22084(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v11, (const MethodInfo_3A353C4 *)Method_WeightRate_int___ctor__);
  if ( actType <= 13 )
  {
    switch ( actType )
    {
      case 10:
        if ( v9 )
          BattleLogicEnemyAi__SetSkillRandomWeightSameProbability(Int, v11, 10, svtData, v14);
        if ( !v11 )
          goto LABEL_46;
        if ( WeightRate_int___getCount(v11, (const MethodInfo_3A34C9C *)Method_WeightRate_int__getCount__) < 1 )
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
          (const MethodInfo_3A348E0 *)Method_WeightRate_int__setWeight__);
        if ( v9 )
          BattleLogicEnemyAi__SetSkillRandomWeightSameProbability(v20, v11, 10, svtData, v21);
LABEL_31:
        Next = BattleRandom__getNext(v11->fields.totalweight, 0LL);
        Data = WeightRate_int___getData(v11, Next, (const MethodInfo_3A34D54 *)Method_WeightRate_int__getData__);
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
    sub_1C22094(Int, v13);
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
  Int = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Int )
    goto LABEL_46;
  Int = (BattleLogicEnemyAi_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Int,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  v27 = (AiLogic_AiInfo_CheckedInfo_o *)sub_1C22084(AiLogic_AiInfo_CheckedInfo_TypeInfo);
  AiLogic_AiInfo_CheckedInfo___ctor(v27, actType, v19 & 1, v18, 0LL);
  return v27;
}


bool __fastcall BattleLogicEnemyAi__CheckAiCanActionFromTargets(
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
  __int64 methodPtr_low; // x10
  AiEntity_o *v15; // x26
  BattleLogicTarget_o *logictarget; // x27
  int32_t monitor; // w28
  int32_t uniqueId; // w29
  Il2CppClass *klass; // x22
  System_Int32_array *FieldPlayerServantIDList; // x0
  Il2CppObject *aiActEnt; // x25
  System_Int32_array *v22; // x20
  const MethodInfo *v23; // x2
  System_Int32_array *v24; // x25
  BattleLogicTarget_o *v25; // x22
  int32_t v26; // w26
  int32_t v27; // w23
  Il2CppClass *v28; // x27
  AiLogic_o *aiLogic; // x20
  AiLogic_AiInfo_CheckedInfo_o *v31; // [xsp+20h] [xbp-80h]
  AiLogic_AiInfo_o *v32; // [xsp+28h] [xbp-78h]
  System_Int32_array *v33; // [xsp+30h] [xbp-70h]
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4BDF22C & 1) == 0 )
  {
    sub_1C21E38(&AiEntity_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_AiActMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
    sub_1C21E38(&int___TypeInfo);
    byte_4BDF22C = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !aiBaseEntity || !Master_object )
    goto LABEL_41;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          aiBaseEntity->fields.aiActId,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__) )
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
  v10 = (BattleServantData_o *)Master_object;
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
                             v10,
                             (AiActEntity_o *)entity,
                             HIDWORD(entity[1].klass),
                             v9);
  if ( !Master_object )
    goto LABEL_41;
  v12 = (AiLogic_AiInfo_CheckedInfo_o *)Master_object;
  v13 = BattleLogicEnemyAi__CheckHate(this, *(_DWORD *)(Master_object + 16), v10, v11);
  methodPtr_low = LOBYTE(AiEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(aiBaseEntity->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    v15 = (AiEntity_c *)aiBaseEntity->klass->_2.typeHierarchy[methodPtr_low - 1] == AiEntity_TypeInfo
        ? (AiEntity_o *)aiBaseEntity
        : 0LL;
  else
    v15 = 0LL;
  Master_object = sub_1C21EE0(int___TypeInfo, 1LL);
  if ( !entity )
    goto LABEL_41;
  if ( !v10 )
    goto LABEL_41;
  v32 = aiInfo;
  v33 = (System_Int32_array *)Master_object;
  Master_object = (__int64)this->fields.data;
  v31 = v12;
  if ( !Master_object )
    goto LABEL_41;
  logictarget = this->fields.logictarget;
  monitor = (int32_t)entity[1].monitor;
  uniqueId = v10->fields.uniqueId;
  klass = entity[2].klass;
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList((BattleData_o *)Master_object, 0LL, 0LL);
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
                    0LL,
                    (AiActEntity_o *)aiActEnt,
                    Master_object & 1,
                    0LL);
  if ( !v33 )
    goto LABEL_41;
  if ( !v33->max_length )
    goto LABEL_42;
  v33->m_Items[1] = Master_object;
  Master_object = sub_1C21EE0(int___TypeInfo, 1LL);
  if ( !entity )
    goto LABEL_41;
  v24 = (System_Int32_array *)Master_object;
  Master_object = (__int64)this->fields.data;
  if ( !Master_object
    || (v25 = this->fields.logictarget,
        v26 = (int32_t)entity[1].monitor,
        v27 = v10->fields.uniqueId,
        v28 = entity[2].klass,
        Master_object = (__int64)BattleData__getFieldEnemyServantIDList((BattleData_o *)Master_object, 0, 0LL),
        !v25)
    || (Master_object = BattleLogicTarget__getTargetAiAct(
                          v25,
                          v26,
                          v27,
                          (System_Int32_array *)v28,
                          (System_Int32_array *)Master_object,
                          0,
                          0,
                          0LL,
                          (AiActEntity_o *)entity,
                          1,
                          0LL),
        !v24) )
  {
LABEL_41:
    sub_1C22094(Master_object, v8);
  }
  if ( !v24->max_length )
LABEL_42:
    sub_1C2209C(Master_object, v8);
  v24->m_Items[1] = Master_object;
  Master_object = (__int64)entity;
  if ( !entity )
    goto LABEL_41;
  aiLogic = this->fields.aiLogic;
  Master_object = AiActEntity__GetNoTargetNoActionType((AiActEntity_o *)entity, 0LL);
  if ( !aiLogic )
    goto LABEL_41;
  if ( AiLogic__IsNoTargetNoActionTask(aiLogic, Master_object, v33, v24, 0LL) )
    return 0;
  AiLogic_AiInfo__SetCheckedResult(v32, aiBaseEntity, v31, 0LL);
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
    sub_1C22094(data, *(_QWORD *)&actUniqueId);
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

  if ( (byte_4BDF22B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF22B = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !svtData )
    goto LABEL_27;
  v9 = (SkillLvMaster_o *)Instance;
  SkillInfoDataByAiActType = BattleServantData__getSkillInfoDataByAiActType(svtData, actType, 0LL);
  v11 = SkillInfoDataByAiActType;
  if ( SkillInfoDataByAiActType )
  {
    Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))SkillInfoDataByAiActType->klass->vtable._5_get_skillId.method)(
                 SkillInfoDataByAiActType,
                 SkillInfoDataByAiActType->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !v9 )
      goto LABEL_27;
    Entity = SkillLvMaster__GetEntity(v9, Instance, v11->fields.skilllv, 0LL);
  }
  else
  {
    Entity = 0LL;
  }
  if ( !AiAct__isSkillType(actType, 0LL) )
  {
    if ( actType != 80 )
      goto LABEL_23;
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
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
      v13 = 1;
      if ( !v11 )
        return v13;
      goto LABEL_24;
    }
    if ( this->fields.logic )
    {
      v18 = *(System_Int32_array **)(Instance + 32);
      logic = this->fields.logic;
      v16 = 0LL;
      goto LABEL_20;
    }
LABEL_27:
    sub_1C22094(Instance, v8);
  }
  v13 = 1;
  if ( v11 && Entity )
  {
    v14 = this->fields.logic;
    funcId = Entity->fields.funcId;
    Instance = (__int64)SkillLvEntity__getDataValsList(Entity, 0LL);
    if ( v14 )
    {
      v16 = (DataVals_array *)Instance;
      logic = v14;
      v18 = funcId;
LABEL_20:
      v13 = BattleLogic__checkEnemyTargetFunction(logic, v18, v16, 0LL);
      goto LABEL_21;
    }
    goto LABEL_27;
  }
LABEL_21:
  if ( !v11 )
    return v13;
LABEL_24:
  if ( Entity )
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
    sub_1C22094(data, *(_QWORD *)&actUniqueId);
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
    sub_1C22094(this, skillFlg);
  if ( !BattleServantData__isUseSelfSkill(servantData, skillIndex, 0LL) )
    *actType = 2;
}


void __fastcall BattleLogicEnemyAi__ClearTempDeadSvt(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x0

  if ( (byte_4BDF226 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Clear__);
    byte_4BDF226 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
    System_Collections_Generic_HashSet_int___Clear(
      tempDeadSvtHash,
      (const MethodInfo_3502E14 *)Method_System_Collections_Generic_HashSet_int__Clear__);
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
    sub_1C22094(0LL, actUniqueId);
  ServantData = BattleData__getServantData(data, actUniqueId, 0LL);
  return BattleLogicEnemyAi__CreateAILogicTask(this, ServantData, 20, v6);
}


BattleLogicTask_array *__fastcall BattleLogicEnemyAi__CreateAILogicTask(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        int32_t procState,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct BattleData_o *data; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDF221 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF221 = 1;
  }
  info = 0LL;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.aiActMst,
    (int64_t)MasterData_object,
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
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v7,
                                        (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_11:
    sub_1C22094(Instance, v9);
  }
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, DataManager_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._20_procAiAct.method)(
                                this,
                                svtData,
                                Instance,
                                0LL,
                                info,
                                0LL,
                                this->klass->vtable._21_ExistThinking.methodPtr);
  if ( !v7 )
    goto LABEL_11;
  System_Collections_Generic_List_object___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1C22094(0LL, actUniqueId);
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
    sub_1C22094(this, svtData);
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
  System_Collections_Generic_List_object__o *v6; // x20
  __int64 Instance; // x0
  System_Collections_Generic_IEnumerable_T__o *v8; // x1
  UnityEngine_Object_o *perf; // x21
  BattleData_o *v10; // x21
  System_Func_object__bool__o *v11; // x23
  struct BattleData_o *v12; // x8
  Il2CppObject *MasterData_object; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
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
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct BattleLogicTarget_o *logictarget; // x8
  struct System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x1
  AiEntity_o *v45; // x25
  BattleLogicTarget_o *v46; // x26
  int32_t uniqueId; // w28
  Il2CppClass *klass; // x29
  System_Int32_array *FieldPlayerServantIDList; // x0
  Il2CppObject *v50; // x27
  System_Int32_array *v51; // x22
  const MethodInfo *v52; // x2
  int32_t TargetAiAct; // w0
  BattleLogicTarget_o *v54; // x25
  int32_t v55; // w26
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  BattleCommandData_o *v62; // x22
  BattleComboData_o *v63; // x24
  struct BattleData_o *v64; // x8
  int32_t TreasureDvcId; // w0
  __int64 v66; // x22
  __int64 v67; // x0
  __int64 v68; // x1
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  const MethodInfo *v75; // x3
  __int64 v76; // x0
  int32_t monitor; // [xsp+24h] [xbp-7Ch]
  AiLogic_AiInfo_o *v78; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+30h] [xbp-70h] BYREF
  AiLogic_AiInfo_o *info; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4BDF219 & 1) == 0 )
  {
    sub_1C21E38(&BattleComboData_TypeInfo);
    sub_1C21E38(&BattleCommandData_TypeInfo);
    sub_1C21E38(&Method_BattleLogicEnemyAi_IsNotTempDeadSvt__);
    sub_1C21E38(&BattleLogicTask___TypeInfo);
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C21E38(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
    sub_1C21E38(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleServantData__RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleServantData__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF219 = 1;
  }
  entity = 0LL;
  info = 0LL;
  v78 = 0LL;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  v10 = this->fields.data;
  v11 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(v11, (Il2CppObject *)this, Method_BattleLogicEnemyAi_IsNotTempDeadSvt__, 0LL);
  if ( !v10 )
    goto LABEL_68;
  Instance = BattleData__CheckAlivePlayers(v10, (System_Func_BattleServantData__bool__o *)v11, 0LL);
  if ( (Instance & 1) == 0 )
    return (System_Collections_Generic_List_BattleLogicTask__o *)v6;
  v12 = this->fields.data;
  if ( !v12 )
    goto LABEL_68;
  if ( !v12->fields.leaderDown && !v12->fields.endbattleFlg )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_AiActMaster___);
      this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.aiActMst,
        (int64_t)MasterData_object,
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
                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
          if ( this->fields.actlist )
          {
            v22 = (BattleServantData_o *)Instance;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this->fields.actlist,
              0,
              (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_BattleServantData__RemoveAt__);
            if ( v22 )
            {
              if ( !BattleServantData__isAlive(v22, 0, 0LL)
                || !BattleLogicEnemyAi__IsNotTempDeadSvt(this, v22, v23)
                || !v22->fields.isEntry )
              {
                return (System_Collections_Generic_List_BattleLogicTask__o *)v6;
              }
              if ( !BattleServantData__isAction(v22, 0LL) )
              {
LABEL_47:
                BattleLogicEnemyAi__AddActCount(this, v22, v24);
                return (System_Collections_Generic_List_BattleLogicTask__o *)v6;
              }
              Instance = BattleServantData__isTDSeraled(v22, 0LL);
              if ( (Instance & 1) == 0
                && (Instance = BattleServantData__checkUseTDvc(v22, this->fields.data, 1, 0LL), (Instance & 1) != 0)
                && (TreasureDvcCommand = BattleServantData__MakeTreasureDvcCommand(v22, 0LL),
                    Instance = BattleServantData__IsCardAction(v22, TreasureDvcCommand, 0LL),
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
                v28 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
                BattleLogicTask___ctor(v28, 0LL);
                if ( v28 )
                {
                  BattleLogicTask__setActor(v28, 3, v22->fields.uniqueId, 0LL);
                  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( Instance )
                  {
                    v29 = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                    Instance = BattleServantData__getTreasureDvcId(v22, 1, 0LL, 0LL);
                    if ( v29 )
                    {
                      Instance = (__int64)TreasureDvcLvMaster__GetEntity(
                                            (TreasureDvcLvMaster_o *)v29,
                                            Instance,
                                            v22->fields.treasuredvcLevel,
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
                                                &v78,
                                                0,
                                                0LL);
                          entity = 0LL;
                          logictarget = this->fields.logictarget;
                          if ( logictarget )
                          {
                            tempDeadSvtHash = this->fields.tempDeadSvtHash;
                            v45 = (AiEntity_o *)Instance;
                            logictarget->fields.tempDeadSvtHash = tempDeadSvtHash;
                            sub_1C21DDC(
                              (PartyOrganizationUtility_o *)&logictarget->fields.tempDeadSvtHash,
                              (int64_t)tempDeadSvtHash,
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
                                         (const MethodInfo_325BE14 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
                            if ( (Instance & 1) != 0 )
                            {
                              if ( !entity )
                                goto LABEL_68;
                              v46 = this->fields.logictarget;
                              uniqueId = v22->fields.uniqueId;
                              klass = entity[2].klass;
                              monitor = (int32_t)entity[1].monitor;
                              FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
                              v50 = entity;
                              v51 = FieldPlayerServantIDList;
                              Instance = BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(this, v45, v52);
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
                                              0LL,
                                              (AiActEntity_o *)v50,
                                              Instance & 1,
                                              0LL);
                            }
                            else
                            {
LABEL_58:
                              v54 = this->fields.logictarget;
                              v55 = v22->fields.uniqueId;
                              Instance = (__int64)BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
                              if ( !v54 )
                                goto LABEL_68;
                              TargetAiAct = BattleLogicTarget__getTargetAiAct(
                                              v54,
                                              1,
                                              v55,
                                              0LL,
                                              (System_Int32_array *)Instance,
                                              v30 & 1,
                                              0,
                                              0LL,
                                              (AiActEntity_o *)entity,
                                              1,
                                              0LL);
                            }
                            BattleLogicTask__setTarget(v28, TargetAiAct, 0LL);
                            Instance = (__int64)this->fields.logictarget;
                            if ( Instance )
                            {
                              *(_QWORD *)(Instance + 24) = 0LL;
                              sub_1C21DDC(
                                (PartyOrganizationUtility_o *)(Instance + 24),
                                0LL,
                                v56,
                                v57,
                                v58,
                                v59,
                                v60,
                                v61);
                              v62 = (BattleCommandData_o *)sub_1C22084(BattleCommandData_TypeInfo);
                              BattleCommandData___ctor(v62, 0LL);
                              Instance = BattleServantData__getTreasureDvcCardId(v22, 0LL);
                              if ( v62 )
                              {
                                v62->fields._type = Instance;
                                v62->fields.svtlimit = BattleServantData__getDispLimitCount(v22, 1, 0LL);
                                v62->fields.uniqueId = v22->fields.uniqueId;
                                v62->fields.svtId = BattleServantData__getSvtId(v22, 0LL);
                                v62->fields.treasureDvc = BattleServantData__getTreasureDvcId(v22, 1, 0LL, 0LL);
                                v63 = (BattleComboData_o *)sub_1C22084(BattleComboData_TypeInfo);
                                BattleComboData___ctor(v63, 0LL);
                                v64 = this->fields.data;
                                if ( v64 )
                                {
                                  BattleLogicTask__setActionCommand(v28, v63, v62, v64->fields.countEnemyAttack, 0LL);
                                  TreasureDvcId = BattleServantData__getTreasureDvcId(v22, 1, 0LL, 0LL);
                                  BattleLogicTask__setActionTreasureDvc(v28, TreasureDvcId, 1, 0LL);
                                  Instance = sub_1C21EE0(BattleLogicTask___TypeInfo, 1LL);
                                  if ( Instance )
                                  {
                                    v66 = Instance;
                                    v67 = sub_1C21F74(v28, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
                                    if ( !v67 )
                                    {
                                      v76 = sub_1C220B8(0LL);
                                      sub_1C21F60(v76, 0LL);
                                    }
                                    if ( !*(_DWORD *)(v66 + 24) )
                                      sub_1C2209C(v67, v68);
                                    *(_QWORD *)(v66 + 32) = v28;
                                    sub_1C21DDC(
                                      (PartyOrganizationUtility_o *)(v66 + 32),
                                      (int64_t)v28,
                                      v69,
                                      v70,
                                      v71,
                                      v72,
                                      v73,
                                      v74);
                                    Instance = (__int64)BattleLogicEnemyAi__ReplaceCommandTasksBySealStatus(
                                                          this,
                                                          v22,
                                                          (BattleLogicTask_array *)v66,
                                                          v75);
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
                                          0LL);
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
                    Instance = ((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, struct AiEntity_o *, _QWORD, AiLogic_AiInfo_o *, __int64, Il2CppMethodPointer))v34->vtable._20_procAiAct.method)(
                                 this,
                                 v22,
                                 noThinkAiEnt,
                                 (unsigned int)v33->fields.countEnemyAttack,
                                 info,
                                 1LL,
                                 v34->vtable._21_ExistThinking.methodPtr);
                    if ( v6 )
                    {
                      v8 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
LABEL_46:
                      System_Collections_Generic_List_object___AddRange(
                        v6,
                        v8,
                        (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
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
    sub_1C22094(Instance, v8);
  }
  return (System_Collections_Generic_List_BattleLogicTask__o *)v6;
}


void __fastcall BattleLogicEnemyAi__ExcludeDeadFromTempDead(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x20
  Il2CppObject *data; // x19
  System_Predicate_int__o *v5; // x21

  if ( (byte_4BDF227 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleData_IsNotAliveTarget__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
    sub_1C21E38(&System_Predicate_int__TypeInfo);
    byte_4BDF227 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
  {
    data = (Il2CppObject *)this->fields.data;
    v5 = (System_Predicate_int__o *)sub_1C22084(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(v5, data, Method_BattleData_IsNotAliveTarget__, 0LL);
    System_Collections_Generic_HashSet_int___RemoveWhere(
      tempDeadSvtHash,
      (System_Predicate_T__o *)v5,
      (const MethodInfo_3503EB8 *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
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

  if ( (byte_4BDF224 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF224 = 1;
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
    sub_1C22094(StageEntity, v7);
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
  AiLogic_o *v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x1
  AiLogic_o *aiLogic; // x0
  AiEntity_o *v14; // x20
  struct AiEntity_o **p_noThinkAiEnt; // x19
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct AiEntity_o *v22; // x19

  if ( (byte_4BDF215 & 1) == 0 )
  {
    sub_1C21E38(&AiEntity_TypeInfo);
    sub_1C21E38(&AiLogic_TypeInfo);
    sub_1C21E38(&StringLiteral_9463/*"NOTHINK_AIACTID"*/);
    byte_4BDF215 = 1;
  }
  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, method);
  v5 = (AiLogic_o *)sub_1C22084(AiLogic_TypeInfo);
  AiLogic___ctor(v5, 0LL);
  this->fields.aiLogic = v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.aiLogic, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    goto LABEL_6;
  AiLogic__Initialize(aiLogic, data, 0LL);
  v14 = (AiEntity_o *)sub_1C22084(AiEntity_TypeInfo);
  AiEntity___ctor(v14, 0LL);
  this->fields.noThinkAiEnt = v14;
  p_noThinkAiEnt = &this->fields.noThinkAiEnt;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_noThinkAiEnt, (int64_t)v14, v16, v17, v18, v19, v20, v21);
  v22 = *p_noThinkAiEnt;
  aiLogic = (AiLogic_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_9463/*"NOTHINK_AIACTID"*/, 0LL);
  if ( !v22 )
LABEL_6:
    sub_1C22094(aiLogic, v12);
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
    sub_1C22094(0LL, aiEnt);
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
  if ( (byte_4BDF228 & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_1C21E38(&Method_BasicHelper_ContainsSelfNotNull_int___);
    byte_4BDF228 = 1;
  }
  if ( !svtData )
    sub_1C22094(this, svtData);
  return !BasicHelper__ContainsSelfNotNull_int_(
            (System_Collections_Generic_HashSet_T__o *)v4->fields.tempDeadSvtHash,
            svtData->fields.uniqueId,
            (const MethodInfo_2F9B2F0 *)Method_BasicHelper_ContainsSelfNotNull_int___);
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
      sub_1C22094(IsSealedCommandTask, v8);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Func_object__object__o *v22; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_4BDF223 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_BattleLogicTask__BattleLogicTask___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
    sub_1C21E38(&System_Func_BattleLogicTask__BattleLogicTask__TypeInfo);
    sub_1C21E38(&Method_BattleLogicEnemyAi___c__DisplayClass36_0__ReplaceCommandTasksBySealStatus_b__0__);
    sub_1C21E38(&BattleLogicEnemyAi___c__DisplayClass36_0_TypeInfo);
    byte_4BDF223 = 1;
  }
  v7 = sub_1C22084(BattleLogicEnemyAi___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = svtData;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)svtData, v16, v17, v18, v19, v20, v21);
  v22 = (System_Func_object__object__o *)sub_1C22084(System_Func_BattleLogicTask__BattleLogicTask__TypeInfo);
  System_Func_object__object____ctor(
    v22,
    (Il2CppObject *)v7,
    Method_BattleLogicEnemyAi___c__DisplayClass36_0__ReplaceCommandTasksBySealStatus_b__0__,
    0LL);
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)derivedTasks,
                                                               (System_Func_TSource__TResult__o *)v22,
                                                               (const MethodInfo_2FE15B8 *)Method_System_Linq_Enumerable_Select_BattleLogicTask__BattleLogicTask___);
  return (BattleLogicTask_array *)System_Linq_Enumerable__ToArray_object_(
                                    v23,
                                    (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
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
  if ( (byte_4BDF22A & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_1C21E38(&Method_WeightRate_int__setWeight__);
    byte_4BDF22A = 1;
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
      (const MethodInfo_3A348E0 *)Method_WeightRate_int__setWeight__);
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
      (const MethodInfo_3A348E0 *)Method_WeightRate_int__setWeight__);
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
        (const MethodInfo_3A348E0 *)Method_WeightRate_int__setWeight__);
      return;
    }
LABEL_14:
    sub_1C22094(this, weight);
  }
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicEnemyAi__TaskAIAttackEnd(
        BattleLogicEnemyAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  BattleLogicEnemyAi__ClearTempDeadSvt(this, *(const MethodInfo **)&ltype);
  this->fields.tempDeadSvtHash = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.tempDeadSvtHash, 0LL, v5, v6, v7, v8, v9, v10);
  return 0LL;
}


BattleLogicTask_array *__fastcall BattleLogicEnemyAi__TaskAIAttackPrecheck(
        BattleLogicEnemyAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  int64_t v6; // x21
  bool isClearTempDeadSvtPrevAct; // w23
  CheckEnemyRelationInterruptProcess_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4BDF217 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&CheckEnemyRelationInterruptProcess_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4BDF217 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v6 = sub_1C22084(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v6, 0LL);
  isClearTempDeadSvtPrevAct = this->fields.isClearTempDeadSvtPrevAct;
  v8 = (CheckEnemyRelationInterruptProcess_o *)sub_1C22084(CheckEnemyRelationInterruptProcess_TypeInfo);
  CheckEnemyRelationInterruptProcess___ctor(v8, isClearTempDeadSvtPrevAct, 0LL);
  if ( !v6
    || (*(_QWORD *)(v6 + 248) = v8,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 248), (int64_t)v8, v11, v12, v13, v14, v15, v16),
        *(_BYTE *)(v6 + 228) = 1,
        !v5)
    || (items = v5->fields._items,
        v24 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v5->fields._version,
        !items) )
  {
    sub_1C22094(v9, v10);
  }
  size = v5->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v6,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v6;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 4), v6, v17, v18, v19, v20, v21, v22);
  }
  this->fields.isClearTempDeadSvtPrevAct = 0;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicEnemyAi__TaskAIAttackStart(
        BattleLogicEnemyAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v5; // x20
  struct System_Collections_Generic_HashSet_int__o **p_tempDeadSvtHash; // x19
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BDF216 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4BDF216 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_1C22084(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_3502780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.tempDeadSvtHash = v5;
  p_tempDeadSvtHash = &this->fields.tempDeadSvtHash;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_tempDeadSvtHash, (int64_t)v5, v7, v8, v9, v10, v11, v12);
  *((_BYTE *)p_tempDeadSvtHash + 8) = 0;
  return 0LL;
}


void __fastcall BattleLogicEnemyAi__addEnemyActPriorityList(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *inSvtData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *actlist; // x0

  if ( (byte_4BDF21C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleServantData__Insert__);
    byte_4BDF21C = 1;
  }
  actlist = (System_Collections_Generic_List_object__o *)this->fields.actlist;
  if ( !actlist )
    sub_1C22094(0LL, inSvtData);
  System_Collections_Generic_List_object___Insert(
    actlist,
    0,
    (Il2CppObject *)inSvtData,
    (const MethodInfo_364FE64 *)Method_System_Collections_Generic_List_BattleServantData__Insert__);
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
  int32_t Data; // w23
  int32_t SvtId; // w25
  int32_t DispLimitCount; // w26
  BattleCommandData_o *v22; // x23
  int32_t v23; // w1
  BattleComboData_o *v24; // x20

  if ( (byte_4BDF222 & 1) == 0 )
  {
    sub_1C21E38(&BattleComboData_TypeInfo);
    sub_1C21E38(&BattleCommandData_TypeInfo);
    sub_1C21E38(&BattleCommand_TypeInfo);
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&Method_WeightRate_int___ctor__);
    sub_1C21E38(&Method_WeightRate_int__getData__);
    sub_1C21E38(&Method_WeightRate_int__getTotalWeight__);
    sub_1C21E38(&Method_WeightRate_int__setWeight__);
    sub_1C21E38(&WeightRate_int__TypeInfo);
    byte_4BDF222 = 1;
  }
  v10 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_23;
  BattleLogicTask__setTarget(v10, targetId, 0LL);
  if ( !svtData )
    goto LABEL_23;
  BattleLogicTask__setActor(v10, 3, svtData->fields.uniqueId, 0LL);
  if ( SvtType__IsEnemy_38957296(svtData->fields.svtType, 0LL) )
  {
    Type = 10;
    goto LABEL_17;
  }
  v14 = (WeightRate_int__o *)sub_1C22084(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v14, (const MethodInfo_3A353C4 *)Method_WeightRate_int___ctor__);
  CommandList = BattleServantData__getCommandList(svtData, 0LL);
  if ( !CommandList )
    goto LABEL_23;
  v15 = *(_QWORD *)&CommandList->max_length;
  v16 = CommandList;
  if ( (int)v15 >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v15 )
        sub_1C2209C(CommandList, v12);
      if ( !v14 )
        break;
      WeightRate_int___setWeight(
        v14,
        10,
        v16->m_Items[v17 + 1],
        (const MethodInfo_3A348E0 *)Method_WeightRate_int__setWeight__);
      LODWORD(v15) = v16->max_length;
      if ( (__int64)++v17 >= (int)v15 )
        goto LABEL_13;
    }
LABEL_23:
    sub_1C22094(CommandList, v12);
  }
LABEL_13:
  if ( !v14 )
    goto LABEL_23;
  Next = BattleRandom__getNext(v14->fields.totalweight, 0LL);
  Data = WeightRate_int___getData(v14, Next, (const MethodInfo_3A34D54 *)Method_WeightRate_int__getData__);
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  Type = BattleCommand__getType(Data, 0LL);
LABEL_17:
  SvtId = BattleServantData__getSvtId(svtData, 0LL);
  DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
  v22 = (BattleCommandData_o *)sub_1C22084(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_44642932(v22, Type, SvtId, DispLimitCount, 0, -1, 0LL);
  if ( !v22 )
    goto LABEL_23;
  v22->fields.uniqueId = svtData->fields.uniqueId;
  if ( !baseTask )
    goto LABEL_23;
  if ( baseTask->fields.isNoCriticalOnAttack )
    v23 = 3;
  else
    v23 = 1;
  BattleCommandData__SetCriticalDecisionType(v22, v23, 0LL);
  v10->fields.isNoCriticalOnAttack = baseTask->fields.isNoCriticalOnAttack;
  v24 = (BattleComboData_o *)sub_1C22084(BattleComboData_TypeInfo);
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
    sub_1C22094(0LL, method);
  return BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
}


System_Int32_array *__fastcall BattleLogicEnemyAi__get_PartySvtIds(
        BattleLogicEnemyAi_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1C22094(0LL, method);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  const MethodInfo *v22; // x6
  BattleLogicTask_array *v23; // x20
  const MethodInfo *v24; // x3
  BattleLogicTask_array *v25; // x19
  System_Action_object__o *v26; // x21

  if ( (byte_4BDF21D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_BattleLogicTask__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_BattleLogicTask___);
    sub_1C21E38(&Method_BattleLogicEnemyAi___c__DisplayClass25_0__procAiAct_b__0__);
    sub_1C21E38(&BattleLogicEnemyAi___c__DisplayClass25_0_TypeInfo);
    byte_4BDF21D = 1;
  }
  v13 = sub_1C22084(BattleLogicEnemyAi___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1C22094(v14, v15);
  *(_QWORD *)(v13 + 16) = svtData;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)svtData, v16, v17, v18, v19, v20, v21);
  v23 = BattleLogicEnemyAi__procAiActLocal(
          this,
          *(BattleServantData_o **)(v13 + 16),
          aiEnt,
          countAct,
          aiInfo,
          procState,
          v22);
  v25 = BattleLogicEnemyAi__ReplaceCommandTasksBySealStatus(this, *(BattleServantData_o **)(v13 + 16), v23, v24);
  v26 = (System_Action_object__o *)sub_1C22084(System_Action_BattleLogicTask__TypeInfo);
  System_Action_object____ctor(
    v26,
    (Il2CppObject *)v13,
    Method_BattleLogicEnemyAi___c__DisplayClass25_0__procAiAct_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)v23,
    (System_Action_T__o *)v26,
    (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_BattleLogicTask___);
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
  BattleLogicEnemyAi_o *v12; // x21
  int32_t data_high; // w27
  AiActEntity_o *v14; // x26
  BattleLogicBaseAi_o *v15; // x0
  const MethodInfo *v16; // x4
  bool v18; // w28
  WeightRate_int__o *v19; // x22
  int32_t Int; // w0
  int32_t v21; // w0
  int32_t v22; // w0
  BattleServantData_o *v23; // x0
  int32_t v24; // w1
  int *skillVals; // x8
  int32_t v26; // w22
  int32_t v27; // w25
  int32_t Next; // w0
  int32_t Data; // w0
  System_Collections_Generic_List_object__o *v30; // x27
  int64_t v31; // x25
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_String_o *infoText; // x1
  bool v39; // w22
  __int64 v40; // x20
  const MethodInfo *v41; // x4
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  const MethodInfo *v48; // x4
  System_String_o *v49; // x0
  System_String_o *v50; // x0
  struct BattleLogic_o *logic; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  Il2CppObject *MasterData_object; // x20
  BattleSkillInfoData_o *SkillInfoDataByAiActType; // x0
  SkillLvEntity_o *Entity; // x28
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  bool IsEnableTarget; // w29
  BattleLogic_o *v75; // x20
  struct BattleLogicTarget_o *funcId; // x22
  BattleLogicEnemyAi_o *v77; // x2
  BattleLogic_o *v78; // x0
  struct BattleLogicTarget_o *logictarget; // x1
  Il2CppObject *v80; // x20
  struct BattleLogic_o *tempDeadSvtHash; // x1
  BattleData_o *v82; // x8
  BattleLogicTarget_o *v83; // x20
  int32_t target; // w24
  int32_t uniqueId; // w27
  System_Int32_array *targetIndividuality; // x28
  System_Int32_array *FieldPlayerServantIDList; // x22
  const MethodInfo *v88; // x2
  BattleLogicTarget_o *v89; // x20
  int32_t v90; // w24
  int32_t v91; // w27
  System_Int32_array *v92; // x28
  System_Int32_array *v93; // x29
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  int32_t v106; // w26
  int32_t Type; // w23
  const MethodInfo *v108; // x5
  const MethodInfo *v109; // x3
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  struct System_Object_array *v116; // x8
  _QWORD *v117; // x9
  __int64 v118; // x10
  Il2CppClass **v119; // x0
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  BattleCommandData_o *v126; // x21
  BattleComboData_o *v127; // x20
  int32_t TreasureDvcId; // w0
  BattleLogicTask_o *v129; // x19
  struct System_Object_array *v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  Il2CppClass **v133; // x0
  PartyOrganizationUtility_o *v134; // x0
  int64_t v135; // x1
  __int64 v136; // x8
  System_Collections_Generic_List_object__o *v137; // x0
  Il2CppObject *v138; // x1
  WeightRate_int__o *v139; // x23
  const MethodInfo *v140; // x2
  struct BattleLogic_o *v141; // x8
  BattleLogicEnemyAi_o *v142; // x21
  unsigned __int64 v143; // x20
  int32_t v144; // w0
  int32_t v145; // w20
  int32_t SvtId; // w20
  int32_t DispLimitCount; // w22
  BattleCommandData_o *v148; // x21
  int32_t v149; // w1
  BattleComboData_o *v150; // x19
  struct System_Object_array *items; // x8
  _QWORD *v152; // x9
  __int64 size; // x10
  Il2CppClass **v154; // x0
  int32_t v155; // [xsp+24h] [xbp-9Ch]
  System_Collections_Generic_List_object__o *v156; // [xsp+28h] [xbp-98h]
  int32_t v157; // [xsp+34h] [xbp-8Ch]
  System_Int32_array *targetlist; // [xsp+38h] [xbp-88h]
  BattleSkillInfoData_o *v159; // [xsp+40h] [xbp-80h]
  int32_t lv; // [xsp+4Ch] [xbp-74h] BYREF
  int32_t id[2]; // [xsp+50h] [xbp-70h] BYREF
  int32_t aiActType; // [xsp+58h] [xbp-68h] BYREF
  bool noMessage; // [xsp+5Ch] [xbp-64h] BYREF

  v12 = this;
  if ( (byte_4BDF21E & 1) == 0 )
  {
    sub_1C21E38(&BattleComboData_TypeInfo);
    sub_1C21E38(&BattleCommandData_TypeInfo);
    sub_1C21E38(&BattleCommand_TypeInfo);
    sub_1C21E38(&BattleLogicTask_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C21E38(&ServantAiActArgument_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_WeightRate_int___ctor__);
    sub_1C21E38(&Method_WeightRate_int__getCount__);
    sub_1C21E38(&Method_WeightRate_int__getData__);
    sub_1C21E38(&Method_WeightRate_int__getTotalWeight__);
    sub_1C21E38(&Method_WeightRate_int__setWeight__);
    sub_1C21E38(&WeightRate_int__TypeInfo);
    this = (BattleLogicEnemyAi_o *)sub_1C21E38(&StringLiteral_8894/*"MOTION_"*/);
    byte_4BDF21E = 1;
  }
  *(_QWORD *)id = 0LL;
  lv = 0;
  noMessage = 0;
  if ( !aiEnt )
    goto LABEL_166;
  this = (BattleLogicEnemyAi_o *)BattleLogicBaseAi__GetAiActEntity(
                                   (BattleLogicBaseAi_o *)v12,
                                   aiEnt->fields.aiActId,
                                   (const MethodInfo *)aiEnt);
  if ( !this )
    goto LABEL_166;
  data_high = HIDWORD(this->fields.data);
  v14 = (AiActEntity_o *)this;
  aiActType = data_high;
  if ( !svtData )
    goto LABEL_166;
  v15 = (BattleLogicBaseAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._18_getAiState.method)(
                                 svtData,
                                 svtData->klass->vtable._19_ExistAiThinking.methodPtr);
  if ( BattleLogicBaseAi__IsChangeThinkingOnly(v15, data_high, (AiBaseEntity_o *)aiEnt, (AiState_o *)v15, v16) )
    return v12->fields.emptyTask;
  v18 = procState != 1 || BattleServantData__canUseSkill(svtData, -1, 0LL);
  v19 = (WeightRate_int__o *)sub_1C22084(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v19, (const MethodInfo_3A353C4 *)Method_WeightRate_int___ctor__);
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
      if ( !v18 )
        goto LABEL_58;
      if ( !BattleServantData__isUseSelfSkill(svtData, 0, 0LL) )
        goto LABEL_19;
      this = (BattleLogicEnemyAi_o *)AiAct__getInt(11, 0LL);
      if ( !v19 )
        goto LABEL_166;
      WeightRate_int___setWeight(v19, 10, (int32_t)this, (const MethodInfo_3A348E0 *)Method_WeightRate_int__setWeight__);
LABEL_19:
      if ( !BattleServantData__isUseSelfSkill(svtData, 1, 0LL) )
        goto LABEL_22;
      this = (BattleLogicEnemyAi_o *)AiAct__getInt(12, 0LL);
      if ( !v19 )
        goto LABEL_166;
      WeightRate_int___setWeight(v19, 10, (int32_t)this, (const MethodInfo_3A348E0 *)Method_WeightRate_int__setWeight__);
LABEL_22:
      this = (BattleLogicEnemyAi_o *)BattleServantData__isUseSelfSkill(svtData, 2, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleLogicEnemyAi_o *)AiAct__getInt(13, 0LL);
        if ( !v19 )
          goto LABEL_166;
        WeightRate_int___setWeight(
          v19,
          10,
          (int32_t)this,
          (const MethodInfo_3A348E0 *)Method_WeightRate_int__setWeight__);
      }
      else
      {
LABEL_58:
        if ( !v19 )
          goto LABEL_166;
      }
      if ( WeightRate_int___getCount(v19, (const MethodInfo_3A34C9C *)Method_WeightRate_int__getCount__) >= 1 )
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
      if ( !BattleServantData__isUseSelfSkill(v23, v24, 0LL) )
        aiActType = 2;
      goto LABEL_62;
    case 13:
      if ( !v18 )
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
        skillVals = (int *)v14->fields.skillVals;
        if ( !skillVals )
          goto LABEL_166;
        if ( skillVals[6] <= 1 )
        {
LABEL_133:
          aiActType = 0;
          goto LABEL_62;
        }
        if ( v18 || data_high != 41 )
        {
          v26 = skillVals[8];
          v27 = skillVals[9];
          this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_166;
          this = (BattleLogicEnemyAi_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillLvMaster___);
          if ( !this )
            goto LABEL_166;
          if ( SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v26, v27, 0LL) )
          {
            BattleServantData__addSkillInfo(svtData, 20, 0, v26, v27, -1LL, -1, 0LL, 0LL);
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
      if ( !v19 )
        goto LABEL_166;
      WeightRate_int___setWeight(v19, 10, (int32_t)this, (const MethodInfo_3A348E0 *)Method_WeightRate_int__setWeight__);
      if ( v18 )
      {
        if ( BattleServantData__isUseSelfSkill(svtData, 0, 0LL) )
        {
          Int = AiAct__getInt(11, 0LL);
          WeightRate_int___setWeight(v19, 10, Int, (const MethodInfo_3A348E0 *)Method_WeightRate_int__setWeight__);
        }
        if ( BattleServantData__isUseSelfSkill(svtData, 1, 0LL) )
        {
          v21 = AiAct__getInt(12, 0LL);
          WeightRate_int___setWeight(v19, 10, v21, (const MethodInfo_3A348E0 *)Method_WeightRate_int__setWeight__);
        }
        if ( BattleServantData__isUseSelfSkill(svtData, 2, 0LL) )
        {
          v22 = AiAct__getInt(13, 0LL);
          WeightRate_int___setWeight(v19, 10, v22, (const MethodInfo_3A348E0 *)Method_WeightRate_int__setWeight__);
        }
      }
LABEL_60:
      Next = BattleRandom__getNext(v19->fields.totalweight, 0LL);
      Data = WeightRate_int___getData(v19, Next, (const MethodInfo_3A34D54 *)Method_WeightRate_int__getData__);
      aiActType = AiAct__getType(Data, 0LL);
LABEL_62:
      v30 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v30,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      v31 = sub_1C22084(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor((BattleLogicTask_o *)v31, 0LL);
      if ( noMessage )
      {
        if ( !v31 )
          goto LABEL_166;
      }
      else
      {
        if ( !v31 )
          goto LABEL_166;
        infoText = aiEnt->fields.infoText;
        *(_QWORD *)(v31 + 168) = infoText;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v31 + 168), (int64_t)infoText, v32, v33, v34, v35, v36, v37);
      }
      BattleLogicTask__setActor((BattleLogicTask_o *)v31, 3, svtData->fields.uniqueId, 0LL);
      if ( AiBaseEntity__IsForcedActionSpeedAnyTime((AiBaseEntity_o *)aiEnt, 0LL) )
        *(_BYTE *)(v31 + 176) = 1;
      *(_BYTE *)(v31 + 224) = AiActEntity__IsNoCriticalOnAttack(v14, 0LL);
      this = (BattleLogicEnemyAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._18_getAiState.method)(
                                       svtData,
                                       svtData->klass->vtable._19_ExistAiThinking.methodPtr);
      if ( !this )
        goto LABEL_166;
      AiState__setBeforeAction((AiState_o *)this, aiActType, aiEnt->fields.aiActId, 0LL);
      v39 = noMessage;
      v40 = sub_1C22084(ServantAiActArgument_TypeInfo);
      BaseAiActArgument___ctor((BaseAiActArgument_o *)v40, v14, (AiBaseEntity_o *)aiEnt, procState, v41);
      *(_QWORD *)(v40 + 40) = svtData;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v40 + 40), (int64_t)svtData, v42, v43, v44, v45, v46, v47);
      *(_BYTE *)(v40 + 48) = v39;
      if ( aiActType == 71 )
      {
        this = (BattleLogicEnemyAi_o *)AiBaseEntity__getActionValue((AiBaseEntity_o *)aiEnt, 0LL);
        id[1] = (int)this;
        if ( (int)this >= 1 )
        {
          v49 = System_Int32__ToString((int32_t)&id[1], 0LL);
          v50 = System_String__Concat_63115476((System_String_o *)StringLiteral_8894/*"MOTION_"*/, v49, 0LL);
          BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v31, v50, 0LL);
          logic = v12->fields.logic;
          if ( !logic )
            goto LABEL_166;
          this = (BattleLogicEnemyAi_o *)logic->fields.perf;
          if ( !this )
            goto LABEL_166;
          ServantGameObject = BattlePerformance__getServantGameObject(
                                (BattlePerformance_o *)this,
                                svtData->fields.uniqueId,
                                0LL);
          *(_QWORD *)(v31 + 128) = ServantGameObject;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)(v31 + 128),
            (int64_t)ServantGameObject,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58);
          BattleLogicTask__setActor((BattleLogicTask_o *)v31, 3, svtData->fields.uniqueId, 0LL);
          if ( !v30 )
            goto LABEL_166;
          goto LABEL_159;
        }
        goto LABEL_77;
      }
      this = (BattleLogicEnemyAi_o *)BattleLogicBaseAi__SetNoTargetAiActTask(
                                       (BattleLogicBaseAi_o *)v12,
                                       (System_Collections_Generic_List_BattleLogicTask__o *)v30,
                                       aiActType,
                                       (BaseAiActArgument_o *)v40,
                                       v48);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_77:
        if ( !v30 )
          goto LABEL_166;
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v30,
                                          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      }
      this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_166;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      SkillInfoDataByAiActType = BattleServantData__getSkillInfoDataByAiActType(svtData, aiActType, 0LL);
      Entity = (SkillLvEntity_o *)SkillInfoDataByAiActType;
      v159 = SkillInfoDataByAiActType;
      if ( SkillInfoDataByAiActType )
      {
        this = (BattleLogicEnemyAi_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))SkillInfoDataByAiActType->klass->vtable._5_get_skillId.method)(
                                         SkillInfoDataByAiActType,
                                         SkillInfoDataByAiActType->klass->vtable._6_get_IndividualityArray.methodPtr);
        if ( !MasterData_object )
          goto LABEL_166;
        Entity = SkillLvMaster__GetEntity(
                   (SkillLvMaster_o *)MasterData_object,
                   (int32_t)this,
                   HIDWORD(Entity->fields.funcId),
                   0LL);
      }
      v155 = countAct;
      v156 = v30;
      v157 = procState;
      if ( AiAct__isSkillType(aiActType, 0LL) )
      {
        IsEnableTarget = 1;
        if ( !v159 || !Entity )
          goto LABEL_96;
        v75 = v12->fields.logic;
        funcId = (struct BattleLogicTarget_o *)Entity->fields.funcId;
        this = (BattleLogicEnemyAi_o *)SkillLvEntity__getDataValsList(Entity, 0LL);
        if ( !v75 )
          goto LABEL_166;
        v77 = this;
        v78 = v75;
        logictarget = funcId;
      }
      else
      {
        if ( aiActType != 80 )
          goto LABEL_95;
        this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_166;
        v80 = DataManager__GetMasterData_object_(
                (DataManager_o *)this,
                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
        this = (BattleLogicEnemyAi_o *)BattleServantData__getTreasureDvcId(svtData, 1, 0LL, 0LL);
        if ( !v80 )
          goto LABEL_166;
        this = (BattleLogicEnemyAi_o *)TreasureDvcLvMaster__GetEntity(
                                         (TreasureDvcLvMaster_o *)v80,
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
          goto LABEL_166;
        logictarget = this->fields.logictarget;
        v78 = v12->fields.logic;
        v77 = 0LL;
      }
      IsEnableTarget = BattleLogic__checkEnemyTargetFunction(
                         v78,
                         (System_Int32_array *)logictarget,
                         (DataVals_array *)v77,
                         0LL);
LABEL_96:
      this = (BattleLogicEnemyAi_o *)v12->fields.logictarget;
      if ( !this )
        goto LABEL_166;
      tempDeadSvtHash = (struct BattleLogic_o *)v12->fields.tempDeadSvtHash;
      this->fields.logic = tempDeadSvtHash;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.logic,
        (int64_t)tempDeadSvtHash,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      if ( v159 && Entity )
        IsEnableTarget = SkillLvEntity__IsEnableTarget(Entity, IsEnableTarget, 0LL);
      this = (BattleLogicEnemyAi_o *)sub_1C21EE0(int___TypeInfo, 1LL);
      v82 = v12->fields.data;
      targetlist = (System_Int32_array *)this;
      if ( !v82 )
        goto LABEL_166;
      v83 = v12->fields.logictarget;
      target = v14->fields.target;
      uniqueId = svtData->fields.uniqueId;
      targetIndividuality = v14->fields.targetIndividuality;
      FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v82, 0LL, 0LL);
      this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(v12, aiEnt, v88);
      if ( !v83 )
        goto LABEL_166;
      this = (BattleLogicEnemyAi_o *)BattleLogicTarget__getTargetAiAct(
                                       v83,
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
      if ( !targetlist )
        goto LABEL_166;
      if ( !targetlist->max_length )
        goto LABEL_167;
      targetlist->m_Items[1] = (int)this;
      this = (BattleLogicEnemyAi_o *)sub_1C21EE0(int___TypeInfo, 1LL);
      if ( !v12->fields.data )
        goto LABEL_166;
      v89 = v12->fields.logictarget;
      v90 = v14->fields.target;
      v91 = svtData->fields.uniqueId;
      v92 = v14->fields.targetIndividuality;
      v93 = (System_Int32_array *)this;
      this = (BattleLogicEnemyAi_o *)BattleData__getFieldEnemyServantIDList(v12->fields.data, 0, 0LL);
      if ( !v89 )
        goto LABEL_166;
      this = (BattleLogicEnemyAi_o *)BattleLogicTarget__getTargetAiAct(
                                       v89,
                                       v90,
                                       v91,
                                       v92,
                                       (System_Int32_array *)this,
                                       0,
                                       0,
                                       0LL,
                                       v14,
                                       1,
                                       0LL);
      if ( !v93 )
        goto LABEL_166;
      if ( !v93->max_length )
        goto LABEL_167;
      v93->m_Items[1] = (int)this;
      this = (BattleLogicEnemyAi_o *)v12->fields.logictarget;
      if ( !this )
        goto LABEL_166;
      this->fields.logic = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.logic, 0LL, v94, v95, v96, v97, v98, v99);
      this = (BattleLogicEnemyAi_o *)v12->fields.logic;
      if ( !this )
        goto LABEL_166;
      *(_BYTE *)(v31 + 184) = (v157 == 1) & (BattleLogic__GetLogicType((BattleLogic_o *)this, 0LL) == 42);
      if ( AiAct__isAttackType(aiActType, 0LL) )
      {
        *(_QWORD *)(v31 + 32) = targetlist;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v31 + 32), (int64_t)targetlist, v100, v101, v102, v103, v104, v105);
        if ( SvtType__IsEnemy_38957296(svtData->fields.svtType, 0LL) )
        {
          v106 = v155;
          v30 = v156;
          Type = 10;
          goto LABEL_151;
        }
        v106 = v155;
        v30 = v156;
        if ( AiAct__isAttackArts(aiActType, 0LL) )
        {
          Type = 1;
          goto LABEL_151;
        }
        if ( AiAct__isAttackBuster(aiActType, 0LL) )
        {
          Type = 2;
          goto LABEL_151;
        }
        if ( AiAct__isAttackQuick(aiActType, 0LL) )
        {
          Type = 3;
          goto LABEL_151;
        }
        v139 = (WeightRate_int__o *)sub_1C22084(WeightRate_int__TypeInfo);
        WeightRate_int____ctor(v139, (const MethodInfo_3A353C4 *)Method_WeightRate_int___ctor__);
        this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi__GetCommandArray(v12, svtData, v140);
        if ( !this )
          goto LABEL_166;
        v141 = this->fields.logic;
        v142 = this;
        if ( (int)v141 < 1 )
        {
LABEL_147:
          if ( !v139 )
            goto LABEL_166;
          v144 = BattleRandom__getNext(v139->fields.totalweight, 0LL);
          v145 = WeightRate_int___getData(v139, v144, (const MethodInfo_3A34D54 *)Method_WeightRate_int__getData__);
          if ( !BattleCommand_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
          Type = BattleCommand__getType(v145, 0LL);
LABEL_151:
          SvtId = BattleServantData__getSvtId(svtData, 0LL);
          DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
          v148 = (BattleCommandData_o *)sub_1C22084(BattleCommandData_TypeInfo);
          BattleCommandData___ctor_44642932(v148, Type, SvtId, DispLimitCount, 0, -1, 0LL);
          if ( !v148 )
            goto LABEL_166;
          v148->fields.uniqueId = svtData->fields.uniqueId;
          if ( *(_BYTE *)(v31 + 224) )
          {
            v149 = 3;
          }
          else
          {
            if ( AiAct__isAttackCritical(aiActType, 0LL) )
            {
              BattleCommandData__SetCriticalDecisionType(v148, 2, 0LL);
              aiActType = 2;
              goto LABEL_158;
            }
            v149 = 1;
          }
          BattleCommandData__SetCriticalDecisionType(v148, v149, 0LL);
LABEL_158:
          v150 = (BattleComboData_o *)sub_1C22084(BattleComboData_TypeInfo);
          BattleComboData___ctor(v150, 0LL);
          BattleLogicTask__setActionCommand((BattleLogicTask_o *)v31, v150, v148, v106, 0LL);
          if ( !v30 )
            goto LABEL_166;
          goto LABEL_159;
        }
        v143 = 0LL;
        while ( v143 < (unsigned int)v141 )
        {
          if ( !v139 )
            goto LABEL_166;
          WeightRate_int___setWeight(
            v139,
            10,
            *((_DWORD *)&v142->fields.logictarget + v143),
            (const MethodInfo_3A348E0 *)Method_WeightRate_int__setWeight__);
          LODWORD(v141) = v142->fields.logic;
          if ( (__int64)++v143 >= (int)v141 )
            goto LABEL_147;
        }
LABEL_167:
        sub_1C2209C(this, svtData);
      }
      this = (BattleLogicEnemyAi_o *)AiAct__isSkillType(aiActType, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( aiActType != 80 )
          goto LABEL_129;
        v30 = v156;
        if ( BattleLogicServantAi__TryGetOverwriteTreasureDevice(
               (BattleLogicServantAi_o *)this,
               svtData,
               v14->fields.skillVals,
               id,
               &lv,
               v108) )
        {
          BattleLogicTask__SetOverwriteTreasureDevice((BattleLogicTask_o *)v31, id[0], lv, 0LL);
          this = *(BattleLogicEnemyAi_o **)(v31 + 216);
          if ( !this )
            goto LABEL_166;
          OverwriteTreasureDeviceData__Overwrite((OverwriteTreasureDeviceData_o *)this, svtData, 0LL);
        }
        BattleLogicTask__setActor((BattleLogicTask_o *)v31, 3, svtData->fields.uniqueId, 0LL);
        *(_QWORD *)(v31 + 32) = targetlist;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v31 + 32), (int64_t)targetlist, v120, v121, v122, v123, v124, v125);
        v126 = (BattleCommandData_o *)sub_1C22084(BattleCommandData_TypeInfo);
        BattleCommandData___ctor(v126, 0LL);
        this = (BattleLogicEnemyAi_o *)BattleServantData__getTreasureDvcCardId(svtData, 0LL);
        if ( v126 )
        {
          v126->fields._type = (int)this;
          v126->fields.svtlimit = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
          v126->fields.uniqueId = svtData->fields.uniqueId;
          v126->fields.svtId = BattleServantData__getSvtId(svtData, 0LL);
          v126->fields.treasureDvc = BattleServantData__getTreasureDvcId(svtData, 1, 0LL, 0LL);
          v127 = (BattleComboData_o *)sub_1C22084(BattleComboData_TypeInfo);
          BattleComboData___ctor(v127, 0LL);
          BattleLogicTask__setActionCommand((BattleLogicTask_o *)v31, v127, v126, v155, 0LL);
          TreasureDvcId = BattleServantData__getTreasureDvcId(svtData, 1, 0LL, 0LL);
          BattleLogicTask__setActionTreasureDvc((BattleLogicTask_o *)v31, TreasureDvcId, 1, 0LL);
          if ( v156 )
          {
LABEL_159:
            items = v30->fields._items;
            v152 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v30->fields._version;
            if ( !items )
              goto LABEL_166;
            size = v30->fields._size;
            if ( (unsigned int)size < items->max_length )
            {
              v154 = &items->obj.klass + size;
              v30->fields._size = size + 1;
              v154[4] = (Il2CppClass *)v31;
              v134 = (PartyOrganizationUtility_o *)(v154 + 4);
              v135 = v31;
              goto LABEL_162;
            }
            v136 = v152[4];
            v137 = v30;
            v138 = (Il2CppObject *)v31;
            goto LABEL_164;
          }
        }
LABEL_166:
        sub_1C22094(this, svtData);
      }
      this = (BattleLogicEnemyAi_o *)BattleServantData__get_BuffData(svtData, 0LL);
      if ( !this )
        goto LABEL_166;
      BattleBuffData__UpdateSkillRelationBuff((BattleBuffData_o *)this, 0LL);
      if ( v159 )
      {
        BattleLogicBaseAi__SetSkillSelectAddIndex((BattleLogicBaseAi_o *)this, v159, (AiBaseEntity_o *)aiEnt, v109);
        BattleLogicTask__setActionSkill((BattleLogicTask_o *)v31, v159, targetlist, v93, 0, 0, 0LL);
        BattleLogicTask__setActor((BattleLogicTask_o *)v31, 3, svtData->fields.uniqueId, 0LL);
        v30 = v156;
        *(_BYTE *)(v31 + 185) = 1;
        if ( v156 )
        {
          v116 = v156->fields._items;
          v117 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
          ++v156->fields._version;
          if ( v116 )
          {
            v118 = v156->fields._size;
            if ( (unsigned int)v118 >= v116->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v156,
                (Il2CppObject *)v31,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
            }
            else
            {
              v119 = &v116->obj.klass + v118;
              v156->fields._size = v118 + 1;
              v119[4] = (Il2CppClass *)v31;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v119 + 4), v31, v110, v111, v112, v113, v114, v115);
            }
            v129 = (BattleLogicTask_o *)sub_1C22084(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v129, 0LL);
            v130 = v156->fields._items;
            v131 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v156->fields._version;
            if ( v130 )
            {
              v132 = v156->fields._size;
              if ( (unsigned int)v132 < v130->max_length )
              {
                v133 = &v130->obj.klass + v132;
                v156->fields._size = v132 + 1;
                v133[4] = (Il2CppClass *)v129;
                v134 = (PartyOrganizationUtility_o *)(v133 + 4);
                v135 = (int64_t)v129;
LABEL_162:
                sub_1C21DDC(v134, v135, v59, v60, v61, v62, v63, v64);
                return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                                  v30,
                                                  (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
              }
              v136 = v131[4];
              v137 = v156;
              v138 = (Il2CppObject *)v129;
LABEL_164:
              System_Collections_Generic_List_object___AddWithResize(
                v137,
                v138,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v136 + 192) + 112LL));
              return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                                v30,
                                                (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
            }
          }
        }
        goto LABEL_166;
      }
LABEL_129:
      v30 = v156;
      if ( !v156 )
        goto LABEL_166;
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v30,
                                        (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  if ( (byte_4BDF21A & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_1C21E38(&Method_System_Collections_Generic_List_BattleServantData__Clear__);
    byte_4BDF21A = 1;
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
        sub_1C2209C(this, method);
      this = (BattleLogicEnemyAi_o *)*((_QWORD *)&v7->fields.logictarget + (int)v8);
      if ( !this )
        break;
      BattleServantData__resetActionCount((BattleServantData_o *)this, 0LL);
      logic = (int)v7->fields.logic;
      if ( (int)++v8 >= logic )
        return;
    }
LABEL_14:
    sub_1C22094(this, method);
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
  System_Collections_Generic_List_object__o *v10; // x20

  if ( (byte_4BDF218 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__);
    byte_4BDF218 = 1;
  }
  BattleLogicEnemyAi__ExcludeDeadFromTempDead(this, *(const MethodInfo **)&ltype);
  TaskAIAttack = BattleLogicEnemyAi__CreateTaskAIAttack(this, v6, data, v7);
  if ( !TaskAIAttack )
    sub_1C22094(0LL, v9);
  v10 = (System_Collections_Generic_List_object__o *)TaskAIAttack;
  if ( TaskAIAttack->fields._size >= 1 )
    BattleLogicEnemyAi__ClearTempDeadSvt(this, v9);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicEnemyAi__taskAIDead(
        BattleLogicEnemyAi_o *this,
        int32_t actUniqueId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v8; // x21
  Il2CppObject *MasterData_object; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct BattleData_o *v16; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDF21F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF21F = 1;
  }
  info = 0LL;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  data = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.aiActMst,
    (int64_t)MasterData_object,
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
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_16:
    sub_1C22094(data, v6);
  }
  data = (BattleData_o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, BattleData_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._20_procAiAct.method)(
                           this,
                           v8,
                           data,
                           0LL,
                           info,
                           0LL,
                           this->klass->vtable._21_ExistThinking.methodPtr);
  if ( !v5 )
    goto LABEL_16;
  System_Collections_Generic_List_object___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicEnemyAi__taskAIEnemyMaxNp(
        BattleLogicEnemyAi_o *this,
        int32_t actUniqueId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v8; // x21
  Il2CppObject *MasterData_object; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct BattleData_o *v16; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDF220 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF220 = 1;
  }
  info = 0LL;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  data = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.aiActMst,
    (int64_t)MasterData_object,
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
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_16:
    sub_1C22094(data, v6);
  }
  data = (BattleData_o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, BattleData_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._20_procAiAct.method)(
                           this,
                           v8,
                           data,
                           0LL,
                           info,
                           0LL,
                           this->klass->vtable._21_ExistThinking.methodPtr);
  if ( !v5 )
    goto LABEL_16;
  System_Collections_Generic_List_object___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicEnemyAi__updateActPriorityList(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  BattleLogicEnemyAi_o *v2; // x20
  struct System_Collections_Generic_List_BattleServantData__o *actlist; // x8
  PartyOrganizationUtility_o *p_actlist; // x19
  System_Collections_Generic_IEnumerable_TSource__o *FieldEnemyServantList; // x21
  BattleLogicEnemyAi___c_c *v6; // x8
  System_Func_object__bool__o *_9__23_0; // x22
  Il2CppObject *v8; // x23
  struct BattleLogicEnemyAi___c_StaticFields *static_fields; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  BattleLogicEnemyAi___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x21
  System_Func_object__int__o *_9__23_1; // x22
  Il2CppObject *v20; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v28; // x0
  BattleLogicEnemyAi___c_c *v29; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v30; // x21
  System_Func_object__int__o *_9__23_2; // x22
  Il2CppObject *v32; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v40; // x0
  BattleLogicEnemyAi___c_c *v41; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v42; // x21
  System_Func_object__int__o *_9__23_3; // x22
  Il2CppObject *v44; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  System_Collections_Generic_List_TSource__o *v53; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct BattleData_o *data; // x8
  System_Collections_Generic_List_object__o *klass; // x20
  System_Predicate_object__o *v62; // x21
  Il2CppObject *v63; // x22
  struct BattleLogicEnemyAi___c_StaticFields *v64; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  System_Collections_Generic_List_T__o *All; // x1
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7

  v2 = this;
  if ( (byte_4BDF21B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderByDescending_BattleServantData__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_BattleServantData___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C21E38(&System_Func_BattleServantData__int__TypeInfo);
    sub_1C21E38(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleServantData__FindAll__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1C21E38(&System_Predicate_BattleServantData__TypeInfo);
    sub_1C21E38(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_0__);
    sub_1C21E38(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_1__);
    sub_1C21E38(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_2__);
    sub_1C21E38(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_3__);
    sub_1C21E38(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_4__);
    this = (BattleLogicEnemyAi_o *)sub_1C21E38(&BattleLogicEnemyAi___c_TypeInfo);
    byte_4BDF21B = 1;
  }
  p_actlist = (PartyOrganizationUtility_o *)&v2->fields.actlist;
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
    v6 = BattleLogicEnemyAi___c_TypeInfo;
    if ( !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v6 = BattleLogicEnemyAi___c_TypeInfo;
    }
    _9__23_0 = (System_Func_object__bool__o *)v6->static_fields->__9__23_0;
    if ( !_9__23_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BattleLogicEnemyAi___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__23_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__23_0,
        v8,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_0__,
        0LL);
      static_fields = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      static_fields->__9__23_0 = (struct System_Func_BattleServantData__bool__o *)_9__23_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__23_0,
        (int64_t)_9__23_0,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    v16 = System_Linq_Enumerable__Where_object_(
            FieldEnemyServantList,
            (System_Func_TSource__bool__o *)_9__23_0,
            (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
    v17 = BattleLogicEnemyAi___c_TypeInfo;
    v18 = v16;
    if ( !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v17 = BattleLogicEnemyAi___c_TypeInfo;
    }
    _9__23_1 = (System_Func_object__int__o *)v17->static_fields->__9__23_1;
    if ( !_9__23_1 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = BattleLogicEnemyAi___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v17->static_fields->__9;
      _9__23_1 = (System_Func_object__int__o *)sub_1C22084(System_Func_BattleServantData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__23_1,
        v20,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_1__,
        0LL);
      v21 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v21->__9__23_1 = (struct System_Func_BattleServantData__int__o *)_9__23_1;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v21->__9__23_1, (int64_t)_9__23_1, v22, v23, v24, v25, v26, v27);
    }
    v28 = System_Linq_Enumerable__OrderByDescending_object__int_(
            v18,
            (System_Func_TSource__TKey__o *)_9__23_1,
            (const MethodInfo_2FD940C *)Method_System_Linq_Enumerable_OrderByDescending_BattleServantData__int___);
    v29 = BattleLogicEnemyAi___c_TypeInfo;
    v30 = v28;
    if ( !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v29 = BattleLogicEnemyAi___c_TypeInfo;
    }
    _9__23_2 = (System_Func_object__int__o *)v29->static_fields->__9__23_2;
    if ( !_9__23_2 )
    {
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = BattleLogicEnemyAi___c_TypeInfo;
      }
      v32 = (Il2CppObject *)v29->static_fields->__9;
      _9__23_2 = (System_Func_object__int__o *)sub_1C22084(System_Func_BattleServantData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__23_2,
        v32,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_2__,
        0LL);
      v33 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v33->__9__23_2 = (struct System_Func_BattleServantData__int__o *)_9__23_2;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v33->__9__23_2, (int64_t)_9__23_2, v34, v35, v36, v37, v38, v39);
    }
    v40 = System_Linq_Enumerable__ThenByDescending_object__int_(
            v30,
            (System_Func_TSource__TKey__o *)_9__23_2,
            (const MethodInfo_2FE9074 *)Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
    v41 = BattleLogicEnemyAi___c_TypeInfo;
    v42 = v40;
    if ( !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v41 = BattleLogicEnemyAi___c_TypeInfo;
    }
    _9__23_3 = (System_Func_object__int__o *)v41->static_fields->__9__23_3;
    if ( !_9__23_3 )
    {
      if ( !v41->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v41);
        v41 = BattleLogicEnemyAi___c_TypeInfo;
      }
      v44 = (Il2CppObject *)v41->static_fields->__9;
      _9__23_3 = (System_Func_object__int__o *)sub_1C22084(System_Func_BattleServantData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__23_3,
        v44,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_3__,
        0LL);
      v45 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v45->__9__23_3 = (struct System_Func_BattleServantData__int__o *)_9__23_3;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v45->__9__23_3, (int64_t)_9__23_3, v46, v47, v48, v49, v50, v51);
    }
    v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__int_(
                                                                 v42,
                                                                 (System_Func_TSource__TKey__o *)_9__23_3,
                                                                 (const MethodInfo_2FE9074 *)Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
    v53 = System_Linq_Enumerable__ToList_object_(
            v52,
            (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_BattleServantData___);
    p_actlist->klass = (PartyOrganizationUtility_c *)v53;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.actlist, (int64_t)v53, v54, v55, v56, v57, v58, v59);
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
  v62 = *(System_Predicate_object__o **)&this[1].fields.dicAiActFunc->fields._freeCount;
  if ( !v62 )
  {
    if ( !LODWORD(this[1].fields.tempDeadSvtHash) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi___c_TypeInfo;
    }
    v63 = (Il2CppObject *)this[1].fields.dicAiActFunc->klass;
    v62 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_object____ctor(v62, v63, Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_4__, 0LL);
    v64 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    v64->__9__23_4 = (struct System_Predicate_BattleServantData__o *)v62;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v64->__9__23_4, (int64_t)v62, v65, v66, v67, v68, v69, v70);
  }
  if ( !klass )
LABEL_41:
    sub_1C22094(this, method);
  All = System_Collections_Generic_List_object___FindAll(
          klass,
          (System_Predicate_T__o *)v62,
          (const MethodInfo_364F7C4 *)Method_System_Collections_Generic_List_BattleServantData__FindAll__);
  p_actlist->klass = (PartyOrganizationUtility_c *)All;
  sub_1C21DDC(p_actlist, (int64_t)All, v72, v73, v74, v75, v76, v77);
}


void __fastcall BattleLogicEnemyAi___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDF22E & 1) == 0 )
  {
    sub_1C21E38(&BattleLogicEnemyAi___c_TypeInfo);
    byte_4BDF22E = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BattleLogicEnemyAi___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleLogicEnemyAi___c_TypeInfo->static_fields->__9 = (struct BattleLogicEnemyAi___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattleLogicEnemyAi___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
  return BattleServantData__GetOriginalRemainingNeedActCount(x, 0LL);
}


int32_t __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__23_2(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.actPriority;
}


int32_t __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__23_3(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return BattleServantData__getDeckIndex(x, 0LL);
}


bool __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__23_4(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, x);
  return BattleLogicEnemyAi__ReplaceCommandTaskBySealStatus(this->fields.__4__this, this->fields.svtData, x, v3);
}