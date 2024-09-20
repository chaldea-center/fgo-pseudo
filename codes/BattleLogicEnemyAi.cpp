void __fastcall BattleLogicEnemyAi___ctor(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  const MethodInfo *v6; // x1

  if ( (byte_4A5DCFC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    byte_4A5DCFC = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this->fields.actlist = (struct System_Collections_Generic_List_BattleServantData__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.actlist, (int32_t)v3, v4, v5);
  BattleLogicBaseAi___ctor((BattleLogicBaseAi_o *)this, v6);
}


void __fastcall BattleLogicEnemyAi__AddActCount(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  if ( !svtData || (++svtData->fields.actionCount, (data = this->fields.data) == 0LL) )
    sub_1B8880C(this, svtData);
  ++data->fields.countEnemyAttack;
}


void __fastcall BattleLogicEnemyAi__AddTempDeadSvt(
        BattleLogicEnemyAi_o *this,
        int32_t svtUniqueId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x0

  if ( (byte_4A5DCF4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4A5DCF4 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
    System_Collections_Generic_HashSet_int___Add(
      tempDeadSvtHash,
      svtUniqueId,
      (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
  if ( (byte_4A5DCF8 & 1) == 0 )
  {
    sub_1B885B0(&AiLogic_AiInfo_CheckedInfo_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_WeightRate_int___ctor__);
    sub_1B885B0(&Method_WeightRate_int__getCount__);
    sub_1B885B0(&Method_WeightRate_int__getData__);
    sub_1B885B0(&Method_WeightRate_int__getTotalWeight__);
    sub_1B885B0(&Method_WeightRate_int__setWeight__);
    sub_1B885B0(&WeightRate_int__TypeInfo);
    byte_4A5DCF8 = 1;
  }
  v11 = (WeightRate_int__o *)sub_1B887FC(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v11, (const MethodInfo_38DB260 *)Method_WeightRate_int___ctor__);
  if ( actType <= 13 )
  {
    switch ( actType )
    {
      case 10:
        if ( v9 )
          BattleLogicEnemyAi__SetSkillRandomWeightSameProbability(Int, v11, 10, svtData, v14);
        if ( !v11 )
          goto LABEL_46;
        if ( WeightRate_int___getCount(v11, (const MethodInfo_38DAB38 *)Method_WeightRate_int__getCount__) < 1 )
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
          (const MethodInfo_38DA77C *)Method_WeightRate_int__setWeight__);
        if ( v9 )
          BattleLogicEnemyAi__SetSkillRandomWeightSameProbability(v20, v11, 10, svtData, v21);
LABEL_31:
        Next = BattleRandom__getNext(v11->fields.totalweight, 0LL);
        Data = WeightRate_int___getData(v11, Next, (const MethodInfo_38DABF0 *)Method_WeightRate_int__getData__);
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
    sub_1B8880C(Int, v13);
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
  Int = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Int )
    goto LABEL_46;
  Int = (BattleLogicEnemyAi_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Int,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  v27 = (AiLogic_AiInfo_CheckedInfo_o *)sub_1B887FC(AiLogic_AiInfo_CheckedInfo_TypeInfo);
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

  if ( (byte_4A5DCFB & 1) == 0 )
  {
    sub_1B885B0(&AiEntity_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_AiActMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
    sub_1B885B0(&int___TypeInfo);
    byte_4A5DCFB = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !aiBaseEntity || !Master_object )
    goto LABEL_41;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          aiBaseEntity->fields.aiActId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__) )
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
  Master_object = sub_1B88658(int___TypeInfo, 1LL);
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
  Master_object = sub_1B88658(int___TypeInfo, 1LL);
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
    sub_1B8880C(Master_object, v8);
  }
  if ( !v24->max_length )
LABEL_42:
    sub_1B88814(Master_object, v8);
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
    sub_1B8880C(data, *(_QWORD *)&actUniqueId);
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

  if ( (byte_4A5DCFA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5DCFA = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
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
    sub_1B8880C(Instance, v8);
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
    sub_1B8880C(data, *(_QWORD *)&actUniqueId);
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
    sub_1B8880C(this, skillFlg);
  if ( !BattleServantData__isUseSelfSkill(servantData, skillIndex, 0LL) )
    *actType = 2;
}


void __fastcall BattleLogicEnemyAi__ClearTempDeadSvt(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x0

  if ( (byte_4A5DCF5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Clear__);
    byte_4A5DCF5 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
    System_Collections_Generic_HashSet_int___Clear(
      tempDeadSvtHash,
      (const MethodInfo_33B3210 *)Method_System_Collections_Generic_HashSet_int__Clear__);
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
    sub_1B8880C(0LL, actUniqueId);
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
  int32_t v11; // w2
  int32_t v12; // w3
  struct BattleData_o *data; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5DCF0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5DCF0 = 1;
  }
  info = 0LL;
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.aiActMst, (int32_t)MasterData_object, v11, v12);
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
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_11:
    sub_1B8880C(Instance, v9);
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
  System_Collections_Generic_List_object___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v7,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1B8880C(0LL, actUniqueId);
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
    sub_1B8880C(this, svtData);
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
  int32_t v15; // w2
  int32_t v16; // w3
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
  int32_t v34; // w3
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
  int32_t v49; // w3
  BattleCommandData_o *v50; // x22
  BattleComboData_o *v51; // x24
  struct BattleData_o *v52; // x8
  int32_t TreasureDvcId; // w0
  __int64 v54; // x22
  __int64 v55; // x0
  __int64 v56; // x1
  int32_t v57; // w2
  int32_t v58; // w3
  const MethodInfo *v59; // x3
  __int64 v60; // x0
  int32_t monitor; // [xsp+24h] [xbp-7Ch]
  AiLogic_AiInfo_o *v62; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+30h] [xbp-70h] BYREF
  AiLogic_AiInfo_o *info; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4A5DCE8 & 1) == 0 )
  {
    sub_1B885B0(&BattleComboData_TypeInfo);
    sub_1B885B0(&BattleCommandData_TypeInfo);
    sub_1B885B0(&Method_BattleLogicEnemyAi_IsNotTempDeadSvt__);
    sub_1B885B0(&BattleLogicTask___TypeInfo);
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1B885B0(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
    sub_1B885B0(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5DCE8 = 1;
  }
  entity = 0LL;
  info = 0LL;
  v62 = 0LL;
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  v11 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleServantData__bool__TypeInfo);
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
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_AiActMaster___);
      this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.aiActMst, (int32_t)MasterData_object, v15, v16);
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
                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
          if ( this->fields.actlist )
          {
            v18 = (BattleServantData_o *)Instance;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this->fields.actlist,
              0,
              (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_BattleServantData__RemoveAt__);
            if ( v18 )
            {
              if ( !BattleServantData__isAlive(v18, 0, 0LL)
                || !BattleLogicEnemyAi__IsNotTempDeadSvt(this, v18, v19)
                || !v18->fields.isEntry )
              {
                return (System_Collections_Generic_List_BattleLogicTask__o *)v6;
              }
              if ( !BattleServantData__isAction(v18, 0LL) )
              {
LABEL_47:
                BattleLogicEnemyAi__AddActCount(this, v18, v20);
                return (System_Collections_Generic_List_BattleLogicTask__o *)v6;
              }
              Instance = BattleServantData__isTDSeraled(v18, 0LL);
              if ( (Instance & 1) == 0
                && (Instance = BattleServantData__checkUseTDvc(v18, this->fields.data, 1, 0LL), (Instance & 1) != 0)
                && (TreasureDvcCommand = BattleServantData__MakeTreasureDvcCommand(v18, 0LL),
                    Instance = BattleServantData__IsCardAction(v18, TreasureDvcCommand, 0LL),
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
                v24 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
                BattleLogicTask___ctor(v24, 0LL);
                if ( v24 )
                {
                  BattleLogicTask__setActor(v24, 3, v18->fields.uniqueId, 0LL);
                  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( Instance )
                  {
                    v25 = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                    Instance = BattleServantData__getTreasureDvcId(v18, 1, 0LL, 0LL);
                    if ( v25 )
                    {
                      Instance = (__int64)TreasureDvcLvMaster__GetEntity(
                                            (TreasureDvcLvMaster_o *)v25,
                                            Instance,
                                            v18->fields.treasuredvcLevel,
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
                                                0LL);
                          entity = 0LL;
                          logictarget = this->fields.logictarget;
                          if ( logictarget )
                          {
                            tempDeadSvtHash = this->fields.tempDeadSvtHash;
                            v37 = (AiEntity_o *)Instance;
                            logictarget->fields.tempDeadSvtHash = tempDeadSvtHash;
                            sub_1B88554(
                              (ServantStatusBattleListViewItem_o *)&logictarget->fields.tempDeadSvtHash,
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
                                         (const MethodInfo_311D988 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
                            if ( (Instance & 1) != 0 )
                            {
                              if ( !entity )
                                goto LABEL_68;
                              v38 = this->fields.logictarget;
                              uniqueId = v18->fields.uniqueId;
                              klass = entity[2].klass;
                              monitor = (int32_t)entity[1].monitor;
                              FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
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
                                              0LL,
                                              (AiActEntity_o *)v42,
                                              Instance & 1,
                                              0LL);
                            }
                            else
                            {
LABEL_58:
                              v46 = this->fields.logictarget;
                              v47 = v18->fields.uniqueId;
                              Instance = (__int64)BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
                              if ( !v46 )
                                goto LABEL_68;
                              TargetAiAct = BattleLogicTarget__getTargetAiAct(
                                              v46,
                                              1,
                                              v47,
                                              0LL,
                                              (System_Int32_array *)Instance,
                                              v26 & 1,
                                              0,
                                              0LL,
                                              (AiActEntity_o *)entity,
                                              1,
                                              0LL);
                            }
                            BattleLogicTask__setTarget(v24, TargetAiAct, 0LL);
                            Instance = (__int64)this->fields.logictarget;
                            if ( Instance )
                            {
                              *(_QWORD *)(Instance + 24) = 0LL;
                              sub_1B88554((ServantStatusBattleListViewItem_o *)(Instance + 24), 0, v48, v49);
                              v50 = (BattleCommandData_o *)sub_1B887FC(BattleCommandData_TypeInfo);
                              BattleCommandData___ctor(v50, 0LL);
                              Instance = BattleServantData__getTreasureDvcCardId(v18, 0LL);
                              if ( v50 )
                              {
                                v50->fields._type = Instance;
                                v50->fields.svtlimit = BattleServantData__getDispLimitCount(v18, 1, 0LL);
                                v50->fields.uniqueId = v18->fields.uniqueId;
                                v50->fields.svtId = BattleServantData__getSvtId(v18, 0LL);
                                v50->fields.treasureDvc = BattleServantData__getTreasureDvcId(v18, 1, 0LL, 0LL);
                                v51 = (BattleComboData_o *)sub_1B887FC(BattleComboData_TypeInfo);
                                BattleComboData___ctor(v51, 0LL);
                                v52 = this->fields.data;
                                if ( v52 )
                                {
                                  BattleLogicTask__setActionCommand(v24, v51, v50, v52->fields.countEnemyAttack, 0LL);
                                  TreasureDvcId = BattleServantData__getTreasureDvcId(v18, 1, 0LL, 0LL);
                                  BattleLogicTask__setActionTreasureDvc(v24, TreasureDvcId, 1, 0LL);
                                  Instance = sub_1B88658(BattleLogicTask___TypeInfo, 1LL);
                                  if ( Instance )
                                  {
                                    v54 = Instance;
                                    v55 = sub_1B886EC(v24, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
                                    if ( !v55 )
                                    {
                                      v60 = sub_1B88830(0LL);
                                      sub_1B886D8(v60, 0LL);
                                    }
                                    if ( !*(_DWORD *)(v54 + 24) )
                                      sub_1B88814(v55, v56);
                                    *(_QWORD *)(v54 + 32) = v24;
                                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v54 + 32), (int32_t)v24, v57, v58);
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
                                          0LL);
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
                    Instance = ((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, struct AiEntity_o *, _QWORD, AiLogic_AiInfo_o *, __int64, Il2CppMethodPointer))v30->vtable._19_procAiAct.method)(
                                 this,
                                 v18,
                                 noThinkAiEnt,
                                 (unsigned int)v29->fields.countEnemyAttack,
                                 info,
                                 1LL,
                                 v30->vtable._20_ExistThinking.methodPtr);
                    if ( v6 )
                    {
                      v8 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
LABEL_46:
                      System_Collections_Generic_List_object___AddRange(
                        v6,
                        v8,
                        (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
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
    sub_1B8880C(Instance, v8);
  }
  return (System_Collections_Generic_List_BattleLogicTask__o *)v6;
}


void __fastcall BattleLogicEnemyAi__ExcludeDeadFromTempDead(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x20
  Il2CppObject *data; // x19
  System_Predicate_int__o *v5; // x21

  if ( (byte_4A5DCF6 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleData_IsNotAliveTarget__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
    sub_1B885B0(&System_Predicate_int__TypeInfo);
    byte_4A5DCF6 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
  {
    data = (Il2CppObject *)this->fields.data;
    v5 = (System_Predicate_int__o *)sub_1B887FC(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(v5, data, Method_BattleData_IsNotAliveTarget__, 0LL);
    System_Collections_Generic_HashSet_int___RemoveWhere(
      tempDeadSvtHash,
      (System_Predicate_T__o *)v5,
      (const MethodInfo_33B42B4 *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
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

  if ( (byte_4A5DCF3 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DCF3 = 1;
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
    sub_1B8880C(StageEntity, v7);
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
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  AiLogic_o *aiLogic; // x0
  AiEntity_o *v10; // x20
  struct AiEntity_o **p_noThinkAiEnt; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  struct AiEntity_o *v14; // x19

  if ( (byte_4A5DCE4 & 1) == 0 )
  {
    sub_1B885B0(&AiEntity_TypeInfo);
    sub_1B885B0(&AiLogic_TypeInfo);
    sub_1B885B0(&StringLiteral_9270/*"NOTHINK_AIACTID"*/);
    byte_4A5DCE4 = 1;
  }
  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, method);
  v5 = (AiLogic_o *)sub_1B887FC(AiLogic_TypeInfo);
  AiLogic___ctor(v5, 0LL);
  this->fields.aiLogic = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.aiLogic, (int32_t)v5, v6, v7);
  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    goto LABEL_6;
  AiLogic__Initialize(aiLogic, data, 0LL);
  v10 = (AiEntity_o *)sub_1B887FC(AiEntity_TypeInfo);
  AiEntity___ctor(v10, 0LL);
  this->fields.noThinkAiEnt = v10;
  p_noThinkAiEnt = &this->fields.noThinkAiEnt;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_noThinkAiEnt, (int32_t)v10, v12, v13);
  v14 = *p_noThinkAiEnt;
  aiLogic = (AiLogic_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_9270/*"NOTHINK_AIACTID"*/, 0LL);
  if ( !v14 )
LABEL_6:
    sub_1B8880C(aiLogic, v8);
  v14->fields.aiActId = (int)aiLogic;
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
    sub_1B8880C(0LL, aiEnt);
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
  if ( (byte_4A5DCF7 & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_1B885B0(&Method_BasicHelper_ContainsSelfNotNull_int___);
    byte_4A5DCF7 = 1;
  }
  if ( !svtData )
    sub_1B8880C(this, svtData);
  return !BasicHelper__ContainsSelfNotNull_int_(
            (System_Collections_Generic_HashSet_T__o *)v4->fields.tempDeadSvtHash,
            svtData->fields.uniqueId,
            (const MethodInfo_2E6B250 *)Method_BasicHelper_ContainsSelfNotNull_int___);
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
      sub_1B8880C(IsSealedCommandTask, v8);
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  System_Func_object__object__o *v14; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_4A5DCF2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_BattleLogicTask__BattleLogicTask___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
    sub_1B885B0(&System_Func_BattleLogicTask__BattleLogicTask__TypeInfo);
    sub_1B885B0(&Method_BattleLogicEnemyAi___c__DisplayClass36_0__ReplaceCommandTasksBySealStatus_b__0__);
    sub_1B885B0(&BattleLogicEnemyAi___c__DisplayClass36_0_TypeInfo);
    byte_4A5DCF2 = 1;
  }
  v7 = sub_1B887FC(BattleLogicEnemyAi___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = svtData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)svtData, v12, v13);
  v14 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleLogicTask__BattleLogicTask__TypeInfo);
  System_Func_object__object____ctor(
    v14,
    (Il2CppObject *)v7,
    Method_BattleLogicEnemyAi___c__DisplayClass36_0__ReplaceCommandTasksBySealStatus_b__0__,
    0LL);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)derivedTasks,
                                                               (System_Func_TSource__TResult__o *)v14,
                                                               (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_BattleLogicTask__BattleLogicTask___);
  return (BattleLogicTask_array *)System_Linq_Enumerable__ToArray_object_(
                                    v15,
                                    (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
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
  if ( (byte_4A5DCF9 & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_1B885B0(&Method_WeightRate_int__setWeight__);
    byte_4A5DCF9 = 1;
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
      (const MethodInfo_38DA77C *)Method_WeightRate_int__setWeight__);
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
      (const MethodInfo_38DA77C *)Method_WeightRate_int__setWeight__);
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
        (const MethodInfo_38DA77C *)Method_WeightRate_int__setWeight__);
      return;
    }
LABEL_14:
    sub_1B8880C(this, weight);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tempDeadSvtHash, 0, v5, v6);
  return 0LL;
}


BattleLogicTask_array *__fastcall BattleLogicEnemyAi__TaskAIAttackPrecheck(
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
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4A5DCE6 & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&CheckEnemyRelationInterruptProcess_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    byte_4A5DCE6 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v6 = sub_1B887FC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v6, 0LL);
  isClearTempDeadSvtPrevAct = this->fields.isClearTempDeadSvtPrevAct;
  v8 = (CheckEnemyRelationInterruptProcess_o *)sub_1B887FC(CheckEnemyRelationInterruptProcess_TypeInfo);
  CheckEnemyRelationInterruptProcess___ctor(v8, isClearTempDeadSvtPrevAct, 0LL);
  if ( !v6
    || (*(_QWORD *)(v6 + 232) = v8,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 232), (int32_t)v8, v11, v12),
        *(_BYTE *)(v6 + 211) = 1,
        !v5)
    || (items = v5->fields._items,
        v16 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v5->fields._version,
        !items) )
  {
    sub_1B8880C(v9, v10);
  }
  size = v5->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v6,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), v6, v13, v14);
  }
  this->fields.isClearTempDeadSvtPrevAct = 0;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicEnemyAi__TaskAIAttackStart(
        BattleLogicEnemyAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v5; // x20
  struct System_Collections_Generic_HashSet_int__o **p_tempDeadSvtHash; // x19
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5DCE5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4A5DCE5 = 1;
  }
  v5 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v5,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.tempDeadSvtHash = v5;
  p_tempDeadSvtHash = &this->fields.tempDeadSvtHash;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_tempDeadSvtHash, (int32_t)v5, v7, v8);
  *((_BYTE *)p_tempDeadSvtHash + 8) = 0;
  return 0LL;
}


void __fastcall BattleLogicEnemyAi__addEnemyActPriorityList(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *inSvtData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *actlist; // x0

  if ( (byte_4A5DCEB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData__Insert__);
    byte_4A5DCEB = 1;
  }
  actlist = (System_Collections_Generic_List_object__o *)this->fields.actlist;
  if ( !actlist )
    sub_1B8880C(0LL, inSvtData);
  System_Collections_Generic_List_object___Insert(
    actlist,
    0,
    (Il2CppObject *)inSvtData,
    (const MethodInfo_34FE5E4 *)Method_System_Collections_Generic_List_BattleServantData__Insert__);
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

  if ( (byte_4A5DCF1 & 1) == 0 )
  {
    sub_1B885B0(&BattleComboData_TypeInfo);
    sub_1B885B0(&BattleCommandData_TypeInfo);
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&Method_WeightRate_int___ctor__);
    sub_1B885B0(&Method_WeightRate_int__getData__);
    sub_1B885B0(&Method_WeightRate_int__getTotalWeight__);
    sub_1B885B0(&Method_WeightRate_int__setWeight__);
    sub_1B885B0(&WeightRate_int__TypeInfo);
    byte_4A5DCF1 = 1;
  }
  v10 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_21;
  BattleLogicTask__setTarget(v10, targetId, 0LL);
  if ( !svtData )
    goto LABEL_21;
  BattleLogicTask__setActor(v10, 3, svtData->fields.uniqueId, 0LL);
  if ( SvtType__IsEnemy_37713208(svtData->fields.svtType, 0LL) )
  {
    Type = 10;
    goto LABEL_15;
  }
  v14 = (WeightRate_int__o *)sub_1B887FC(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v14, (const MethodInfo_38DB260 *)Method_WeightRate_int___ctor__);
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
        sub_1B88814(CommandList, v12);
      if ( !v14 )
        break;
      WeightRate_int___setWeight(
        v14,
        10,
        v16->m_Items[v17 + 1],
        (const MethodInfo_38DA77C *)Method_WeightRate_int__setWeight__);
      LODWORD(v15) = v16->max_length;
      if ( (__int64)++v17 >= (int)v15 )
        goto LABEL_13;
    }
LABEL_21:
    sub_1B8880C(CommandList, v12);
  }
LABEL_13:
  if ( !v14 )
    goto LABEL_21;
  Next = BattleRandom__getNext(v14->fields.totalweight, 0LL);
  Data = WeightRate_int___getData(v14, Next, (const MethodInfo_38DABF0 *)Method_WeightRate_int__getData__);
  Type = BattleCommand__getType(Data, 0LL);
LABEL_15:
  SvtId = BattleServantData__getSvtId(svtData, 0LL);
  DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
  v22 = (BattleCommandData_o *)sub_1B887FC(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_43210772(v22, Type, SvtId, DispLimitCount, 0, -1, 0LL);
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
  v24 = (BattleComboData_o *)sub_1B887FC(BattleComboData_TypeInfo);
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
    sub_1B8880C(0LL, method);
  return BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
}


System_Int32_array *__fastcall BattleLogicEnemyAi__get_PartySvtIds(
        BattleLogicEnemyAi_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1B8880C(0LL, method);
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
  int32_t v16; // w2
  int32_t v17; // w3
  const MethodInfo *v18; // x6
  BattleLogicTask_array *v19; // x20
  const MethodInfo *v20; // x3
  BattleLogicTask_array *v21; // x19
  System_Action_object__o *v22; // x21

  if ( (byte_4A5DCEC & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleLogicTask__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_BattleLogicTask___);
    sub_1B885B0(&Method_BattleLogicEnemyAi___c__DisplayClass25_0__procAiAct_b__0__);
    sub_1B885B0(&BattleLogicEnemyAi___c__DisplayClass25_0_TypeInfo);
    byte_4A5DCEC = 1;
  }
  v13 = sub_1B887FC(BattleLogicEnemyAi___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1B8880C(v14, v15);
  *(_QWORD *)(v13 + 16) = svtData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)svtData, v16, v17);
  v19 = BattleLogicEnemyAi__procAiActLocal(
          this,
          *(BattleServantData_o **)(v13 + 16),
          aiEnt,
          countAct,
          aiInfo,
          procState,
          v18);
  v21 = BattleLogicEnemyAi__ReplaceCommandTasksBySealStatus(this, *(BattleServantData_o **)(v13 + 16), v19, v20);
  v22 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleLogicTask__TypeInfo);
  System_Action_object____ctor(
    v22,
    (Il2CppObject *)v13,
    Method_BattleLogicEnemyAi___c__DisplayClass25_0__procAiAct_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)v19,
    (System_Action_T__o *)v22,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_BattleLogicTask___);
  return v21;
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
  __int64 v31; // x25
  int32_t v32; // w2
  int32_t v33; // w3
  struct System_String_o *infoText; // x1
  bool v35; // w22
  __int64 v36; // x20
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  int32_t v39; // w3
  const MethodInfo *v40; // x4
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  struct BattleLogic_o *logic; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w2
  int32_t v48; // w3
  Il2CppObject *MasterData_object; // x20
  BattleSkillInfoData_o *SkillInfoDataByAiActType; // x0
  SkillLvEntity_o *Entity; // x28
  int32_t v52; // w2
  int32_t v53; // w3
  bool IsEnableTarget; // w29
  BattleLogic_o *v55; // x20
  struct BattleLogicTarget_o *funcId; // x22
  BattleLogicEnemyAi_o *v57; // x2
  BattleLogic_o *v58; // x0
  struct BattleLogicTarget_o *logictarget; // x1
  Il2CppObject *v60; // x20
  struct BattleLogic_o *tempDeadSvtHash; // x1
  BattleData_o *v62; // x8
  BattleLogicTarget_o *v63; // x20
  int32_t target; // w24
  int32_t uniqueId; // w27
  System_Int32_array *targetIndividuality; // x28
  System_Int32_array *FieldPlayerServantIDList; // x22
  const MethodInfo *v68; // x2
  BattleLogicTarget_o *v69; // x20
  int32_t v70; // w24
  int32_t v71; // w27
  System_Int32_array *v72; // x28
  System_Int32_array *v73; // x29
  int32_t v74; // w2
  int32_t v75; // w3
  int32_t v76; // w2
  int32_t v77; // w3
  int32_t v78; // w26
  int32_t Type; // w23
  const MethodInfo *v80; // x5
  const MethodInfo *v81; // x3
  int32_t v82; // w2
  int32_t v83; // w3
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  Il2CppClass **v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  BattleCommandData_o *v90; // x21
  BattleComboData_o *v91; // x20
  int32_t TreasureDvcId; // w0
  BattleLogicTask_o *v93; // x19
  struct System_Object_array *v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  Il2CppClass **v97; // x0
  ServantStatusBattleListViewItem_o *v98; // x0
  int32_t v99; // w1
  __int64 v100; // x8
  System_Collections_Generic_List_object__o *v101; // x0
  Il2CppObject *v102; // x1
  WeightRate_int__o *v103; // x23
  const MethodInfo *v104; // x2
  struct BattleLogic_o *v105; // x8
  BattleLogicEnemyAi_o *v106; // x21
  unsigned __int64 v107; // x20
  int32_t v108; // w0
  int32_t v109; // w0
  int32_t SvtId; // w20
  int32_t DispLimitCount; // w22
  BattleCommandData_o *v112; // x21
  int32_t v113; // w1
  BattleComboData_o *v114; // x19
  struct System_Object_array *items; // x8
  _QWORD *v116; // x9
  __int64 size; // x10
  Il2CppClass **v118; // x0
  int32_t v119; // [xsp+24h] [xbp-9Ch]
  System_Collections_Generic_List_object__o *v120; // [xsp+28h] [xbp-98h]
  int32_t v121; // [xsp+34h] [xbp-8Ch]
  System_Int32_array *targetlist; // [xsp+38h] [xbp-88h]
  BattleSkillInfoData_o *v123; // [xsp+40h] [xbp-80h]
  int32_t lv; // [xsp+4Ch] [xbp-74h] BYREF
  int32_t id[2]; // [xsp+50h] [xbp-70h] BYREF
  int32_t aiActType; // [xsp+58h] [xbp-68h] BYREF
  bool noMessage; // [xsp+5Ch] [xbp-64h] BYREF

  v12 = this;
  if ( (byte_4A5DCED & 1) == 0 )
  {
    sub_1B885B0(&BattleComboData_TypeInfo);
    sub_1B885B0(&BattleCommandData_TypeInfo);
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1B885B0(&ServantAiActArgument_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_WeightRate_int___ctor__);
    sub_1B885B0(&Method_WeightRate_int__getCount__);
    sub_1B885B0(&Method_WeightRate_int__getData__);
    sub_1B885B0(&Method_WeightRate_int__getTotalWeight__);
    sub_1B885B0(&Method_WeightRate_int__setWeight__);
    sub_1B885B0(&WeightRate_int__TypeInfo);
    this = (BattleLogicEnemyAi_o *)sub_1B885B0(&StringLiteral_8708/*"MOTION_"*/);
    byte_4A5DCED = 1;
  }
  *(_QWORD *)id = 0LL;
  lv = 0;
  noMessage = 0;
  if ( !aiEnt )
    goto LABEL_164;
  this = (BattleLogicEnemyAi_o *)BattleLogicBaseAi__GetAiActEntity(
                                   (BattleLogicBaseAi_o *)v12,
                                   aiEnt->fields.aiActId,
                                   (const MethodInfo *)aiEnt);
  if ( !this )
    goto LABEL_164;
  data_high = HIDWORD(this->fields.data);
  v14 = (AiActEntity_o *)this;
  aiActType = data_high;
  if ( !svtData )
    goto LABEL_164;
  v15 = (BattleLogicBaseAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._18_getAiState.method)(
                                 svtData,
                                 svtData->klass->vtable._19_ExistAiThinking.methodPtr);
  if ( BattleLogicBaseAi__IsChangeThinkingOnly(v15, data_high, (AiBaseEntity_o *)aiEnt, (AiState_o *)v15, v16) )
    return v12->fields.emptyTask;
  v18 = procState != 1 || BattleServantData__canUseSkill(svtData, -1, 0LL);
  v19 = (WeightRate_int__o *)sub_1B887FC(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v19, (const MethodInfo_38DB260 *)Method_WeightRate_int___ctor__);
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
        goto LABEL_164;
      WeightRate_int___setWeight(v19, 10, (int32_t)this, (const MethodInfo_38DA77C *)Method_WeightRate_int__setWeight__);
LABEL_19:
      if ( !BattleServantData__isUseSelfSkill(svtData, 1, 0LL) )
        goto LABEL_22;
      this = (BattleLogicEnemyAi_o *)AiAct__getInt(12, 0LL);
      if ( !v19 )
        goto LABEL_164;
      WeightRate_int___setWeight(v19, 10, (int32_t)this, (const MethodInfo_38DA77C *)Method_WeightRate_int__setWeight__);
LABEL_22:
      this = (BattleLogicEnemyAi_o *)BattleServantData__isUseSelfSkill(svtData, 2, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleLogicEnemyAi_o *)AiAct__getInt(13, 0LL);
        if ( !v19 )
          goto LABEL_164;
        WeightRate_int___setWeight(
          v19,
          10,
          (int32_t)this,
          (const MethodInfo_38DA77C *)Method_WeightRate_int__setWeight__);
      }
      else
      {
LABEL_58:
        if ( !v19 )
          goto LABEL_164;
      }
      if ( WeightRate_int___getCount(v19, (const MethodInfo_38DAB38 *)Method_WeightRate_int__getCount__) >= 1 )
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
          goto LABEL_164;
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
          this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_164;
          this = (BattleLogicEnemyAi_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
          if ( !this )
            goto LABEL_164;
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
        goto LABEL_164;
      WeightRate_int___setWeight(v19, 10, (int32_t)this, (const MethodInfo_38DA77C *)Method_WeightRate_int__setWeight__);
      if ( v18 )
      {
        if ( BattleServantData__isUseSelfSkill(svtData, 0, 0LL) )
        {
          Int = AiAct__getInt(11, 0LL);
          WeightRate_int___setWeight(v19, 10, Int, (const MethodInfo_38DA77C *)Method_WeightRate_int__setWeight__);
        }
        if ( BattleServantData__isUseSelfSkill(svtData, 1, 0LL) )
        {
          v21 = AiAct__getInt(12, 0LL);
          WeightRate_int___setWeight(v19, 10, v21, (const MethodInfo_38DA77C *)Method_WeightRate_int__setWeight__);
        }
        if ( BattleServantData__isUseSelfSkill(svtData, 2, 0LL) )
        {
          v22 = AiAct__getInt(13, 0LL);
          WeightRate_int___setWeight(v19, 10, v22, (const MethodInfo_38DA77C *)Method_WeightRate_int__setWeight__);
        }
      }
LABEL_60:
      Next = BattleRandom__getNext(v19->fields.totalweight, 0LL);
      Data = WeightRate_int___getData(v19, Next, (const MethodInfo_38DABF0 *)Method_WeightRate_int__getData__);
      aiActType = AiAct__getType(Data, 0LL);
LABEL_62:
      v30 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v30,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      v31 = sub_1B887FC(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor((BattleLogicTask_o *)v31, 0LL);
      if ( noMessage )
      {
        if ( !v31 )
          goto LABEL_164;
      }
      else
      {
        if ( !v31 )
          goto LABEL_164;
        infoText = aiEnt->fields.infoText;
        *(_QWORD *)(v31 + 152) = infoText;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 152), (int32_t)infoText, v32, v33);
      }
      BattleLogicTask__setActor((BattleLogicTask_o *)v31, 3, svtData->fields.uniqueId, 0LL);
      if ( AiBaseEntity__IsForcedActionSpeedAnyTime((AiBaseEntity_o *)aiEnt, 0LL) )
        *(_BYTE *)(v31 + 160) = 1;
      *(_BYTE *)(v31 + 208) = AiActEntity__IsNoCriticalOnAttack(v14, 0LL);
      this = (BattleLogicEnemyAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._18_getAiState.method)(
                                       svtData,
                                       svtData->klass->vtable._19_ExistAiThinking.methodPtr);
      if ( !this )
        goto LABEL_164;
      AiState__setBeforeAction((AiState_o *)this, aiActType, aiEnt->fields.aiActId, 0LL);
      v35 = noMessage;
      v36 = sub_1B887FC(ServantAiActArgument_TypeInfo);
      BaseAiActArgument___ctor((BaseAiActArgument_o *)v36, v14, (AiBaseEntity_o *)aiEnt, v37);
      *(_QWORD *)(v36 + 32) = svtData;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 32), (int32_t)svtData, v38, v39);
      *(_BYTE *)(v36 + 40) = v35;
      if ( aiActType == 71 )
      {
        this = (BattleLogicEnemyAi_o *)AiBaseEntity__getActionValue((AiBaseEntity_o *)aiEnt, 0LL);
        id[1] = (int)this;
        if ( (int)this >= 1 )
        {
          v41 = System_Int32__ToString((int32_t)&id[1], 0LL);
          v42 = System_String__Concat_61707032((System_String_o *)StringLiteral_8708/*"MOTION_"*/, v41, 0LL);
          BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v31, v42, 0LL);
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
          *(_QWORD *)(v31 + 112) = ServantGameObject;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 112), (int32_t)ServantGameObject, v45, v46);
          BattleLogicTask__setActor((BattleLogicTask_o *)v31, 3, svtData->fields.uniqueId, 0LL);
          if ( !v30 )
            goto LABEL_164;
          goto LABEL_157;
        }
        goto LABEL_77;
      }
      this = (BattleLogicEnemyAi_o *)BattleLogicBaseAi__SetNoTargetAiActTask(
                                       (BattleLogicBaseAi_o *)v12,
                                       (System_Collections_Generic_List_BattleLogicTask__o *)v30,
                                       aiActType,
                                       (BaseAiActArgument_o *)v36,
                                       v40);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_77:
        if ( !v30 )
          goto LABEL_164;
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v30,
                                          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      }
      this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_164;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
      SkillInfoDataByAiActType = BattleServantData__getSkillInfoDataByAiActType(svtData, aiActType, 0LL);
      Entity = (SkillLvEntity_o *)SkillInfoDataByAiActType;
      v123 = SkillInfoDataByAiActType;
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
      v119 = countAct;
      v120 = v30;
      v121 = procState;
      if ( AiAct__isSkillType(aiActType, 0LL) )
      {
        IsEnableTarget = 1;
        if ( !v123 || !Entity )
          goto LABEL_96;
        v55 = v12->fields.logic;
        funcId = (struct BattleLogicTarget_o *)Entity->fields.funcId;
        this = (BattleLogicEnemyAi_o *)SkillLvEntity__getDataValsList(Entity, 0LL);
        if ( !v55 )
          goto LABEL_164;
        v57 = this;
        v58 = v55;
        logictarget = funcId;
      }
      else
      {
        if ( aiActType != 80 )
          goto LABEL_95;
        this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_164;
        v60 = DataManager__GetMasterData_object_(
                (DataManager_o *)this,
                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
        this = (BattleLogicEnemyAi_o *)BattleServantData__getTreasureDvcId(svtData, 1, 0LL, 0LL);
        if ( !v60 )
          goto LABEL_164;
        this = (BattleLogicEnemyAi_o *)TreasureDvcLvMaster__GetEntity(
                                         (TreasureDvcLvMaster_o *)v60,
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
        v58 = v12->fields.logic;
        v57 = 0LL;
      }
      IsEnableTarget = BattleLogic__checkEnemyTargetFunction(
                         v58,
                         (System_Int32_array *)logictarget,
                         (DataVals_array *)v57,
                         0LL);
LABEL_96:
      this = (BattleLogicEnemyAi_o *)v12->fields.logictarget;
      if ( !this )
        goto LABEL_164;
      tempDeadSvtHash = (struct BattleLogic_o *)v12->fields.tempDeadSvtHash;
      this->fields.logic = tempDeadSvtHash;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.logic, (int32_t)tempDeadSvtHash, v52, v53);
      if ( v123 && Entity )
        IsEnableTarget = SkillLvEntity__IsEnableTarget(Entity, IsEnableTarget, 0LL);
      this = (BattleLogicEnemyAi_o *)sub_1B88658(int___TypeInfo, 1LL);
      v62 = v12->fields.data;
      targetlist = (System_Int32_array *)this;
      if ( !v62 )
        goto LABEL_164;
      v63 = v12->fields.logictarget;
      target = v14->fields.target;
      uniqueId = svtData->fields.uniqueId;
      targetIndividuality = v14->fields.targetIndividuality;
      FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v62, 0LL, 0LL);
      this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(v12, aiEnt, v68);
      if ( !v63 )
        goto LABEL_164;
      this = (BattleLogicEnemyAi_o *)BattleLogicTarget__getTargetAiAct(
                                       v63,
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
        goto LABEL_164;
      if ( !targetlist->max_length )
        goto LABEL_165;
      targetlist->m_Items[1] = (int)this;
      this = (BattleLogicEnemyAi_o *)sub_1B88658(int___TypeInfo, 1LL);
      if ( !v12->fields.data )
        goto LABEL_164;
      v69 = v12->fields.logictarget;
      v70 = v14->fields.target;
      v71 = svtData->fields.uniqueId;
      v72 = v14->fields.targetIndividuality;
      v73 = (System_Int32_array *)this;
      this = (BattleLogicEnemyAi_o *)BattleData__getFieldEnemyServantIDList(v12->fields.data, 0, 0LL);
      if ( !v69 )
        goto LABEL_164;
      this = (BattleLogicEnemyAi_o *)BattleLogicTarget__getTargetAiAct(
                                       v69,
                                       v70,
                                       v71,
                                       v72,
                                       (System_Int32_array *)this,
                                       0,
                                       0,
                                       0LL,
                                       v14,
                                       1,
                                       0LL);
      if ( !v73 )
        goto LABEL_164;
      if ( !v73->max_length )
        goto LABEL_165;
      v73->m_Items[1] = (int)this;
      this = (BattleLogicEnemyAi_o *)v12->fields.logictarget;
      if ( !this )
        goto LABEL_164;
      this->fields.logic = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.logic, 0, v74, v75);
      this = (BattleLogicEnemyAi_o *)v12->fields.logic;
      if ( !this )
        goto LABEL_164;
      *(_BYTE *)(v31 + 168) = (v121 == 1) & (BattleLogic__GetLogicType((BattleLogic_o *)this, 0LL) == 42);
      if ( AiAct__isAttackType(aiActType, 0LL) )
      {
        *(_QWORD *)(v31 + 32) = targetlist;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 32), (int32_t)targetlist, v76, v77);
        if ( SvtType__IsEnemy_37713208(svtData->fields.svtType, 0LL) )
        {
          v78 = v119;
          v30 = v120;
          Type = 10;
          goto LABEL_149;
        }
        v78 = v119;
        v30 = v120;
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
        v103 = (WeightRate_int__o *)sub_1B887FC(WeightRate_int__TypeInfo);
        WeightRate_int____ctor(v103, (const MethodInfo_38DB260 *)Method_WeightRate_int___ctor__);
        this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi__GetCommandArray(v12, svtData, v104);
        if ( !this )
          goto LABEL_164;
        v105 = this->fields.logic;
        v106 = this;
        if ( (int)v105 < 1 )
        {
LABEL_147:
          if ( !v103 )
            goto LABEL_164;
          v108 = BattleRandom__getNext(v103->fields.totalweight, 0LL);
          v109 = WeightRate_int___getData(v103, v108, (const MethodInfo_38DABF0 *)Method_WeightRate_int__getData__);
          Type = BattleCommand__getType(v109, 0LL);
LABEL_149:
          SvtId = BattleServantData__getSvtId(svtData, 0LL);
          DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
          v112 = (BattleCommandData_o *)sub_1B887FC(BattleCommandData_TypeInfo);
          BattleCommandData___ctor_43210772(v112, Type, SvtId, DispLimitCount, 0, -1, 0LL);
          if ( !v112 )
            goto LABEL_164;
          v112->fields.uniqueId = svtData->fields.uniqueId;
          if ( *(_BYTE *)(v31 + 208) )
          {
            v113 = 3;
          }
          else
          {
            if ( AiAct__isAttackCritical(aiActType, 0LL) )
            {
              BattleCommandData__SetCriticalDecisionType(v112, 2, 0LL);
              aiActType = 2;
              goto LABEL_156;
            }
            v113 = 1;
          }
          BattleCommandData__SetCriticalDecisionType(v112, v113, 0LL);
LABEL_156:
          v114 = (BattleComboData_o *)sub_1B887FC(BattleComboData_TypeInfo);
          BattleComboData___ctor(v114, 0LL);
          BattleLogicTask__setActionCommand((BattleLogicTask_o *)v31, v114, v112, v78, 0LL);
          if ( !v30 )
            goto LABEL_164;
          goto LABEL_157;
        }
        v107 = 0LL;
        while ( v107 < (unsigned int)v105 )
        {
          if ( !v103 )
            goto LABEL_164;
          WeightRate_int___setWeight(
            v103,
            10,
            *((_DWORD *)&v106->fields.logictarget + v107),
            (const MethodInfo_38DA77C *)Method_WeightRate_int__setWeight__);
          LODWORD(v105) = v106->fields.logic;
          if ( (__int64)++v107 >= (int)v105 )
            goto LABEL_147;
        }
LABEL_165:
        sub_1B88814(this, svtData);
      }
      this = (BattleLogicEnemyAi_o *)AiAct__isSkillType(aiActType, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( aiActType != 80 )
          goto LABEL_129;
        v30 = v120;
        if ( BattleLogicServantAi__TryGetOverwriteTreasureDevice(
               (BattleLogicServantAi_o *)this,
               svtData,
               v14->fields.skillVals,
               id,
               &lv,
               v80) )
        {
          BattleLogicTask__SetOverwriteTreasureDevice((BattleLogicTask_o *)v31, id[0], lv, 0LL);
          this = *(BattleLogicEnemyAi_o **)(v31 + 200);
          if ( !this )
            goto LABEL_164;
          OverwriteTreasureDeviceData__Overwrite((OverwriteTreasureDeviceData_o *)this, svtData, 0LL);
        }
        BattleLogicTask__setActor((BattleLogicTask_o *)v31, 3, svtData->fields.uniqueId, 0LL);
        *(_QWORD *)(v31 + 32) = targetlist;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 32), (int32_t)targetlist, v88, v89);
        v90 = (BattleCommandData_o *)sub_1B887FC(BattleCommandData_TypeInfo);
        BattleCommandData___ctor(v90, 0LL);
        this = (BattleLogicEnemyAi_o *)BattleServantData__getTreasureDvcCardId(svtData, 0LL);
        if ( v90 )
        {
          v90->fields._type = (int)this;
          v90->fields.svtlimit = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
          v90->fields.uniqueId = svtData->fields.uniqueId;
          v90->fields.svtId = BattleServantData__getSvtId(svtData, 0LL);
          v90->fields.treasureDvc = BattleServantData__getTreasureDvcId(svtData, 1, 0LL, 0LL);
          v91 = (BattleComboData_o *)sub_1B887FC(BattleComboData_TypeInfo);
          BattleComboData___ctor(v91, 0LL);
          BattleLogicTask__setActionCommand((BattleLogicTask_o *)v31, v91, v90, v119, 0LL);
          TreasureDvcId = BattleServantData__getTreasureDvcId(svtData, 1, 0LL, 0LL);
          BattleLogicTask__setActionTreasureDvc((BattleLogicTask_o *)v31, TreasureDvcId, 1, 0LL);
          if ( v120 )
          {
LABEL_157:
            items = v30->fields._items;
            v116 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v30->fields._version;
            if ( !items )
              goto LABEL_164;
            size = v30->fields._size;
            if ( (unsigned int)size < items->max_length )
            {
              v118 = &items->obj.klass + size;
              v30->fields._size = size + 1;
              v118[4] = (Il2CppClass *)v31;
              v98 = (ServantStatusBattleListViewItem_o *)(v118 + 4);
              v99 = v31;
              goto LABEL_160;
            }
            v100 = v116[4];
            v101 = v30;
            v102 = (Il2CppObject *)v31;
            goto LABEL_162;
          }
        }
LABEL_164:
        sub_1B8880C(this, svtData);
      }
      this = (BattleLogicEnemyAi_o *)BattleServantData__get_BuffData(svtData, 0LL);
      if ( !this )
        goto LABEL_164;
      BattleBuffData__UpdateSkillRelationBuff((BattleBuffData_o *)this, 0LL);
      if ( v123 )
      {
        BattleLogicBaseAi__SetSkillSelectAddIndex((BattleLogicBaseAi_o *)this, v123, (AiBaseEntity_o *)aiEnt, v81);
        BattleLogicTask__setActionSkill((BattleLogicTask_o *)v31, v123, targetlist, v73, 0, 0, 0LL);
        BattleLogicTask__setActor((BattleLogicTask_o *)v31, 3, svtData->fields.uniqueId, 0LL);
        v30 = v120;
        *(_BYTE *)(v31 + 169) = 1;
        if ( v120 )
        {
          v84 = v120->fields._items;
          v85 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
          ++v120->fields._version;
          if ( v84 )
          {
            v86 = v120->fields._size;
            if ( (unsigned int)v86 >= v84->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v120,
                (Il2CppObject *)v31,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
            }
            else
            {
              v87 = &v84->obj.klass + v86;
              v120->fields._size = v86 + 1;
              v87[4] = (Il2CppClass *)v31;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v87 + 4), v31, v82, v83);
            }
            v93 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
            BattleLogicTask___ctor(v93, 0LL);
            v94 = v120->fields._items;
            v95 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v120->fields._version;
            if ( v94 )
            {
              v96 = v120->fields._size;
              if ( (unsigned int)v96 < v94->max_length )
              {
                v97 = &v94->obj.klass + v96;
                v120->fields._size = v96 + 1;
                v97[4] = (Il2CppClass *)v93;
                v98 = (ServantStatusBattleListViewItem_o *)(v97 + 4);
                v99 = (int)v93;
LABEL_160:
                sub_1B88554(v98, v99, v47, v48);
                return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                                  v30,
                                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
              }
              v100 = v95[4];
              v101 = v120;
              v102 = (Il2CppObject *)v93;
LABEL_162:
              System_Collections_Generic_List_object___AddWithResize(
                v101,
                v102,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v100 + 192) + 112LL));
              return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                                v30,
                                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
            }
          }
        }
        goto LABEL_164;
      }
LABEL_129:
      v30 = v120;
      if ( !v120 )
        goto LABEL_164;
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v30,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  if ( (byte_4A5DCE9 & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData__Clear__);
    byte_4A5DCE9 = 1;
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
        sub_1B88814(this, method);
      this = (BattleLogicEnemyAi_o *)*((_QWORD *)&v7->fields.logictarget + (int)v8);
      if ( !this )
        break;
      BattleServantData__resetActionCount((BattleServantData_o *)this, 0LL);
      logic = (int)v7->fields.logic;
      if ( (int)++v8 >= logic )
        return;
    }
LABEL_14:
    sub_1B8880C(this, method);
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

  if ( (byte_4A5DCE7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__);
    byte_4A5DCE7 = 1;
  }
  BattleLogicEnemyAi__ExcludeDeadFromTempDead(this, *(const MethodInfo **)&ltype);
  TaskAIAttack = BattleLogicEnemyAi__CreateTaskAIAttack(this, v6, data, v7);
  if ( !TaskAIAttack )
    sub_1B8880C(0LL, v9);
  v10 = (System_Collections_Generic_List_object__o *)TaskAIAttack;
  if ( TaskAIAttack->fields._size >= 1 )
    BattleLogicEnemyAi__ClearTempDeadSvt(this, v9);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v10; // w2
  int32_t v11; // w3
  struct BattleData_o *v12; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5DCEE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5DCEE = 1;
  }
  info = 0LL;
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  data = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.aiActMst, (int32_t)MasterData_object, v10, v11);
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
                           0LL);
  if ( !data )
  {
LABEL_14:
    if ( v5 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_16:
    sub_1B8880C(data, v6);
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
  System_Collections_Generic_List_object___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  int32_t v10; // w2
  int32_t v11; // w3
  struct BattleData_o *v12; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5DCEF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_AiActMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5DCEF = 1;
  }
  info = 0LL;
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  data = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.aiActMst, (int32_t)MasterData_object, v10, v11);
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
                           0LL);
  if ( !data )
  {
LABEL_14:
    if ( v5 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_16:
    sub_1B8880C(data, v6);
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
  System_Collections_Generic_List_object___AddRange(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v5,
                                    (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicEnemyAi__updateActPriorityList(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  BattleLogicEnemyAi_o *v2; // x20
  struct System_Collections_Generic_List_BattleServantData__o *actlist; // x8
  ServantStatusBattleListViewItem_o *p_actlist; // x19
  System_Collections_Generic_IEnumerable_TSource__o *FieldEnemyServantList; // x21
  BattleLogicEnemyAi___c_c *v6; // x8
  System_Func_object__bool__o *_9__23_0; // x22
  Il2CppObject *v8; // x23
  struct BattleLogicEnemyAi___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  BattleLogicEnemyAi___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x21
  System_Func_object__int__o *_9__23_1; // x22
  Il2CppObject *v16; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v20; // x0
  BattleLogicEnemyAi___c_c *v21; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v22; // x21
  System_Func_object__int__o *_9__23_2; // x22
  Il2CppObject *v24; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v28; // x0
  BattleLogicEnemyAi___c_c *v29; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v30; // x21
  System_Func_object__int__o *_9__23_3; // x22
  Il2CppObject *v32; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Collections_Generic_List_TSource__o *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  struct BattleData_o *data; // x8
  System_Collections_Generic_List_object__o *klass; // x20
  System_Predicate_object__o *v42; // x21
  Il2CppObject *v43; // x22
  struct BattleLogicEnemyAi___c_StaticFields *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_Collections_Generic_List_T__o *All; // x0
  int32_t v48; // w2
  int32_t v49; // w3

  v2 = this;
  if ( (byte_4A5DCEA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderByDescending_BattleServantData__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_BattleServantData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1B885B0(&System_Func_BattleServantData__int__TypeInfo);
    sub_1B885B0(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData__FindAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData__get_Count__);
    sub_1B885B0(&System_Predicate_BattleServantData__TypeInfo);
    sub_1B885B0(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_0__);
    sub_1B885B0(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_1__);
    sub_1B885B0(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_2__);
    sub_1B885B0(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_3__);
    sub_1B885B0(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_4__);
    this = (BattleLogicEnemyAi_o *)sub_1B885B0(&BattleLogicEnemyAi___c_TypeInfo);
    byte_4A5DCEA = 1;
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
      _9__23_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__23_0,
        v8,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_0__,
        0LL);
      static_fields = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      static_fields->__9__23_0 = (struct System_Func_BattleServantData__bool__o *)_9__23_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__23_0, (int32_t)_9__23_0, v10, v11);
    }
    v12 = System_Linq_Enumerable__Where_object_(
            FieldEnemyServantList,
            (System_Func_TSource__bool__o *)_9__23_0,
            (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
    v13 = BattleLogicEnemyAi___c_TypeInfo;
    v14 = v12;
    if ( !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v13 = BattleLogicEnemyAi___c_TypeInfo;
    }
    _9__23_1 = (System_Func_object__int__o *)v13->static_fields->__9__23_1;
    if ( !_9__23_1 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = BattleLogicEnemyAi___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v13->static_fields->__9;
      _9__23_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_BattleServantData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__23_1,
        v16,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_1__,
        0LL);
      v17 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v17->__9__23_1 = (struct System_Func_BattleServantData__int__o *)_9__23_1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->__9__23_1, (int32_t)_9__23_1, v18, v19);
    }
    v20 = System_Linq_Enumerable__OrderByDescending_object__int_(
            v14,
            (System_Func_TSource__TKey__o *)_9__23_1,
            (const MethodInfo_2EAA2F0 *)Method_System_Linq_Enumerable_OrderByDescending_BattleServantData__int___);
    v21 = BattleLogicEnemyAi___c_TypeInfo;
    v22 = v20;
    if ( !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v21 = BattleLogicEnemyAi___c_TypeInfo;
    }
    _9__23_2 = (System_Func_object__int__o *)v21->static_fields->__9__23_2;
    if ( !_9__23_2 )
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = BattleLogicEnemyAi___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v21->static_fields->__9;
      _9__23_2 = (System_Func_object__int__o *)sub_1B887FC(System_Func_BattleServantData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__23_2,
        v24,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_2__,
        0LL);
      v25 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v25->__9__23_2 = (struct System_Func_BattleServantData__int__o *)_9__23_2;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v25->__9__23_2, (int32_t)_9__23_2, v26, v27);
    }
    v28 = System_Linq_Enumerable__ThenByDescending_object__int_(
            v22,
            (System_Func_TSource__TKey__o *)_9__23_2,
            (const MethodInfo_2EB7F74 *)Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
    v29 = BattleLogicEnemyAi___c_TypeInfo;
    v30 = v28;
    if ( !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v29 = BattleLogicEnemyAi___c_TypeInfo;
    }
    _9__23_3 = (System_Func_object__int__o *)v29->static_fields->__9__23_3;
    if ( !_9__23_3 )
    {
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = BattleLogicEnemyAi___c_TypeInfo;
      }
      v32 = (Il2CppObject *)v29->static_fields->__9;
      _9__23_3 = (System_Func_object__int__o *)sub_1B887FC(System_Func_BattleServantData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__23_3,
        v32,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_3__,
        0LL);
      v33 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v33->__9__23_3 = (struct System_Func_BattleServantData__int__o *)_9__23_3;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v33->__9__23_3, (int32_t)_9__23_3, v34, v35);
    }
    v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__int_(
                                                                 v30,
                                                                 (System_Func_TSource__TKey__o *)_9__23_3,
                                                                 (const MethodInfo_2EB7F74 *)Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
    v37 = System_Linq_Enumerable__ToList_object_(
            v36,
            (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_BattleServantData___);
    p_actlist->klass = (ServantStatusBattleListViewItem_c *)v37;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.actlist, (int32_t)v37, v38, v39);
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
  v42 = *(System_Predicate_object__o **)&this[1].fields.dicAiActFunc->fields._freeCount;
  if ( !v42 )
  {
    if ( !LODWORD(this[1].fields.tempDeadSvtHash) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi___c_TypeInfo;
    }
    v43 = (Il2CppObject *)this[1].fields.dicAiActFunc->klass;
    v42 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_object____ctor(v42, v43, Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_4__, 0LL);
    v44 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    v44->__9__23_4 = (struct System_Predicate_BattleServantData__o *)v42;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v44->__9__23_4, (int32_t)v42, v45, v46);
  }
  if ( !klass )
LABEL_41:
    sub_1B8880C(this, method);
  All = System_Collections_Generic_List_object___FindAll(
          klass,
          (System_Predicate_T__o *)v42,
          (const MethodInfo_34FDF44 *)Method_System_Collections_Generic_List_BattleServantData__FindAll__);
  p_actlist->klass = (ServantStatusBattleListViewItem_c *)All;
  sub_1B88554(p_actlist, (int32_t)All, v48, v49);
}


void __fastcall BattleLogicEnemyAi___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5DCFD & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicEnemyAi___c_TypeInfo);
    byte_4A5DCFD = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattleLogicEnemyAi___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleLogicEnemyAi___c_TypeInfo->static_fields->__9 = (struct BattleLogicEnemyAi___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)BattleLogicEnemyAi___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
  return BattleServantData__GetOriginalRemainingNeedActCount(x, 0LL);
}


int32_t __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__23_2(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.actPriority;
}


int32_t __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__23_3(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return BattleServantData__getDeckIndex(x, 0LL);
}


bool __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__23_4(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, x);
  return BattleLogicEnemyAi__ReplaceCommandTaskBySealStatus(this->fields.__4__this, this->fields.svtData, x, v3);
}