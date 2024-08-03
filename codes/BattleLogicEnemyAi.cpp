void __fastcall BattleLogicEnemyAi___ctor(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x1

  if ( (byte_49FEF3E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_BattleServantData__TypeInfo, v4);
    byte_49FEF3E = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_BattleServantData__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this->fields.actlist = (struct System_Collections_Generic_List_BattleServantData__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.actlist, (int32_t)v5, v6, v7);
  BattleLogicBaseAi___ctor((BattleLogicBaseAi_o *)this, v8);
}


void __fastcall BattleLogicEnemyAi__AddActCount(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  if ( !svtData || (++svtData->fields.actionCount, (data = this->fields.data) == 0LL) )
    sub_1B64324(this);
  ++data->fields.countEnemyAttack;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicEnemyAi__AddTempDeadSvt(
        BattleLogicEnemyAi_o *this,
        int32_t svtUniqueId,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x0

  if ( (byte_49FEF36 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Add__, *(_QWORD *)&svtUniqueId);
    byte_49FEF36 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
    System_Collections_Generic_HashSet_int___Add(
      tempDeadSvtHash,
      svtUniqueId,
      (const MethodInfo_3364BB0 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
  if ( (byte_49FEF3A & 1) == 0 )
  {
    sub_1B640C8(&AiLogic_AiInfo_CheckedInfo_TypeInfo, skillFlg);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B640C8(&Method_WeightRate_int___ctor__, v13);
    sub_1B640C8(&Method_WeightRate_int__getCount__, v14);
    sub_1B640C8(&Method_WeightRate_int__getData__, v15);
    sub_1B640C8(&Method_WeightRate_int__getTotalWeight__, v16);
    sub_1B640C8(&Method_WeightRate_int__setWeight__, v17);
    sub_1B640C8(&WeightRate_int__TypeInfo, v18);
    byte_49FEF3A = 1;
  }
  v19 = (WeightRate_int__o *)sub_1B64314(WeightRate_int__TypeInfo, skillFlg, svtData);
  WeightRate_int____ctor(v19, (const MethodInfo_388C894 *)Method_WeightRate_int___ctor__);
  if ( actType <= 13 )
  {
    switch ( actType )
    {
      case 10:
        if ( v9 )
          BattleLogicEnemyAi__SetSkillRandomWeightSameProbability(Int, v19, 10, svtData, v23);
        if ( !v19 )
          goto LABEL_46;
        if ( WeightRate_int___getCount(v19, (const MethodInfo_388C16C *)Method_WeightRate_int__getCount__) < 1 )
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
          (const MethodInfo_388BE70 *)Method_WeightRate_int__setWeight__);
        if ( v9 )
          BattleLogicEnemyAi__SetSkillRandomWeightSameProbability(v29, v19, 10, svtData, v30);
LABEL_31:
        Next = BattleRandom__getNext(v19->fields.totalweight, 0LL);
        Data = WeightRate_int___getData(v19, Next, (const MethodInfo_388C224 *)Method_WeightRate_int__getData__);
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
    sub_1B64324(Int);
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
  Int = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Int )
    goto LABEL_46;
  Int = (BattleLogicEnemyAi_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)Int,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
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
  v36 = (AiLogic_AiInfo_CheckedInfo_o *)sub_1B64314(AiLogic_AiInfo_CheckedInfo_TypeInfo, v21, v22);
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
  __int64 Master_object; // x0
  const MethodInfo *v12; // x5
  BattleServantData_o *v13; // x23
  const MethodInfo *v14; // x3
  AiLogic_AiInfo_CheckedInfo_o *v15; // x20
  bool v16; // w24
  __int64 methodPtr_low; // x10
  AiEntity_o *v18; // x26
  BattleLogicTarget_o *logictarget; // x27
  int32_t monitor; // w28
  int32_t uniqueId; // w29
  Il2CppClass *klass; // x22
  System_Int32_array *FieldPlayerServantIDList; // x0
  Il2CppObject *aiActEnt; // x25
  System_Int32_array *v25; // x20
  const MethodInfo *v26; // x2
  __int64 v27; // x1
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

  if ( (byte_49FEF3D & 1) == 0 )
  {
    sub_1B640C8(&AiEntity_TypeInfo, aiInfo);
    sub_1B640C8(&Method_DataManager_GetMaster_AiActMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__, v9);
    sub_1B640C8(&int___TypeInfo, v10);
    byte_49FEF3D = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !aiBaseEntity || !Master_object )
    goto LABEL_41;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          aiBaseEntity->fields.aiActId,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__) )
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
  v13 = (BattleServantData_o *)Master_object;
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
                             v13,
                             (AiActEntity_o *)entity,
                             HIDWORD(entity[1].klass),
                             v12);
  if ( !Master_object )
    goto LABEL_41;
  v15 = (AiLogic_AiInfo_CheckedInfo_o *)Master_object;
  v16 = BattleLogicEnemyAi__CheckHate(this, *(_DWORD *)(Master_object + 16), v13, v14);
  methodPtr_low = LOBYTE(AiEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(aiBaseEntity->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    v18 = (AiEntity_c *)aiBaseEntity->klass->_2.typeHierarchy[methodPtr_low - 1] == AiEntity_TypeInfo
        ? (AiEntity_o *)aiBaseEntity
        : 0LL;
  else
    v18 = 0LL;
  Master_object = sub_1B64170(int___TypeInfo, 1LL);
  if ( !entity )
    goto LABEL_41;
  if ( !v13 )
    goto LABEL_41;
  v36 = aiInfo;
  v37 = (System_Int32_array *)Master_object;
  Master_object = (__int64)this->fields.data;
  v35 = v15;
  if ( !Master_object )
    goto LABEL_41;
  logictarget = this->fields.logictarget;
  monitor = (int32_t)entity[1].monitor;
  uniqueId = v13->fields.uniqueId;
  klass = entity[2].klass;
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList((BattleData_o *)Master_object, 0LL, 0LL);
  aiActEnt = entity;
  v25 = FieldPlayerServantIDList;
  Master_object = BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(this, v18, v26);
  if ( !logictarget )
    goto LABEL_41;
  Master_object = BattleLogicTarget__getTargetAiAct(
                    logictarget,
                    monitor,
                    uniqueId,
                    (System_Int32_array *)klass,
                    v25,
                    v16,
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
  Master_object = sub_1B64170(int___TypeInfo, 1LL);
  if ( !entity )
    goto LABEL_41;
  v28 = (System_Int32_array *)Master_object;
  Master_object = (__int64)this->fields.data;
  if ( !Master_object
    || (v29 = this->fields.logictarget,
        v30 = (int32_t)entity[1].monitor,
        v31 = v13->fields.uniqueId,
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
    sub_1B64324(Master_object);
  }
  if ( !v28->max_length )
LABEL_42:
    sub_1B6432C(Master_object, v27);
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


bool __fastcall BattleLogicEnemyAi__CheckEnemyShiftAfter(
        BattleLogicEnemyAi_o *this,
        int32_t actUniqueId,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data || (data = (BattleData_o *)BattleData__getServantData(data, actUniqueId, 0LL), !this->fields.aiLogic) )
    sub_1B64324(data);
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
  SkillLvMaster_o *v10; // x21
  BattleSkillInfoData_o *SkillInfoDataByAiActType; // x0
  BattleSkillInfoData_o *v12; // x19
  SkillLvEntity_o *Entity; // x21
  bool v14; // w0
  struct BattleLogic_o *v15; // x20
  System_Int32_array *funcId; // x22
  DataVals_array *v17; // x2
  BattleLogic_o *logic; // x0
  System_Int32_array *v19; // x1
  Il2CppObject *MasterData_object; // x23

  if ( (byte_49FEF3C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, *(_QWORD *)&actType);
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FEF3C = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !svtData )
    goto LABEL_27;
  v10 = (SkillLvMaster_o *)Instance;
  SkillInfoDataByAiActType = BattleServantData__getSkillInfoDataByAiActType(svtData, actType, 0LL);
  v12 = SkillInfoDataByAiActType;
  if ( SkillInfoDataByAiActType )
  {
    Instance = ((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))SkillInfoDataByAiActType->klass->vtable._5_get_skillId.method)(
                 SkillInfoDataByAiActType,
                 SkillInfoDataByAiActType->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !v10 )
      goto LABEL_27;
    Entity = SkillLvMaster__GetEntity(v10, Instance, v12->fields.skilllv, 0LL);
  }
  else
  {
    Entity = 0LL;
  }
  if ( !AiAct__isSkillType(actType, 0LL) )
  {
    if ( actType != 80 )
      goto LABEL_23;
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_27;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
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
      v14 = 1;
      if ( !v12 )
        return v14;
      goto LABEL_24;
    }
    if ( this->fields.logic )
    {
      v19 = *(System_Int32_array **)(Instance + 32);
      logic = this->fields.logic;
      v17 = 0LL;
      goto LABEL_20;
    }
LABEL_27:
    sub_1B64324(Instance);
  }
  v14 = 1;
  if ( v12 && Entity )
  {
    v15 = this->fields.logic;
    funcId = Entity->fields.funcId;
    Instance = (__int64)SkillLvEntity__getDataValsList(Entity, 0LL);
    if ( v15 )
    {
      v17 = (DataVals_array *)Instance;
      logic = v15;
      v19 = funcId;
LABEL_20:
      v14 = BattleLogic__checkEnemyTargetFunction(logic, v19, v17, 0LL);
      goto LABEL_21;
    }
    goto LABEL_27;
  }
LABEL_21:
  if ( !v12 )
    return v14;
LABEL_24:
  if ( Entity )
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
    sub_1B64324(data);
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
    sub_1B64324(this);
  if ( !BattleServantData__isUseSelfSkill(servantData, skillIndex, 0LL) )
    *actType = 2;
}


void __fastcall BattleLogicEnemyAi__ClearTempDeadSvt(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x0

  if ( (byte_49FEF37 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Clear__, method);
    byte_49FEF37 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
    System_Collections_Generic_HashSet_int___Clear(
      tempDeadSvtHash,
      (const MethodInfo_3364040 *)Method_System_Collections_Generic_HashSet_int__Clear__);
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
    sub_1B64324(0LL);
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
  System_Collections_Generic_List_object__o *v12; // x22
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  struct BattleData_o *data; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FEF32 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_AiActMaster___, svtData);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49FEF32 = 1;
  }
  info = 0LL;
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       svtData,
                                                       *(_QWORD *)&procState);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.aiActMst, (int32_t)MasterData_object, v15, v16);
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
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_11:
    sub_1B64324(Instance);
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
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v12,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_1B64324(0LL);
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
    sub_1B64324(this);
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
  UnityEngine_Object_o *perf; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  BattleData_o *v27; // x21
  System_Func_object__bool__o *v28; // x23
  struct BattleData_o *v29; // x8
  Il2CppObject *MasterData_object; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  const MethodInfo *v34; // x1
  BattleServantData_o *v35; // x21
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  BattleCommandData_o *TreasureDvcCommand; // x0
  const MethodInfo *v39; // x2
  __int64 v40; // x2
  System_Collections_Generic_IEnumerable_T__o *v41; // x1
  struct AiActMaster_o **p_aiActMst; // x26
  BattleLogicTask_o *v43; // x23
  Il2CppObject *v44; // x24
  char v45; // w24
  struct BattleData_o *v46; // x8
  struct BattleData_o *v47; // x8
  struct BattleData_o *v48; // x8
  BattleLogicEnemyAi_c *v49; // x9
  struct AiEntity_o *noThinkAiEnt; // x2
  struct BattleData_o *v51; // x8
  int32_t v52; // w2
  int32_t v53; // w3
  struct BattleLogicTarget_o *logictarget; // x8
  struct System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x1
  AiEntity_o *v56; // x25
  BattleLogicTarget_o *v57; // x26
  int32_t uniqueId; // w28
  Il2CppClass *klass; // x29
  System_Int32_array *FieldPlayerServantIDList; // x0
  Il2CppObject *v61; // x27
  System_Int32_array *v62; // x22
  const MethodInfo *v63; // x2
  int32_t TargetAiAct; // w0
  BattleLogicTarget_o *v65; // x25
  int32_t v66; // w26
  int32_t v67; // w2
  int32_t v68; // w3
  __int64 v69; // x1
  __int64 v70; // x2
  BattleCommandData_o *v71; // x22
  __int64 v72; // x1
  __int64 v73; // x2
  BattleComboData_o *v74; // x24
  struct BattleData_o *v75; // x8
  int32_t TreasureDvcId; // w0
  __int64 v77; // x22
  __int64 v78; // x0
  __int64 v79; // x1
  int32_t v80; // w2
  int32_t v81; // w3
  const MethodInfo *v82; // x3
  __int64 v83; // x0
  int32_t monitor; // [xsp+24h] [xbp-7Ch]
  AiLogic_AiInfo_o *v85; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+30h] [xbp-70h] BYREF
  AiLogic_AiInfo_o *info; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_49FEF2A & 1) == 0 )
  {
    sub_1B640C8(&BattleComboData_TypeInfo, *(_QWORD *)&ltype);
    sub_1B640C8(&BattleCommandData_TypeInfo, v6);
    sub_1B640C8(&Method_BattleLogicEnemyAi_IsNotTempDeadSvt__, v7);
    sub_1B640C8(&BattleLogicTask___TypeInfo, v8);
    sub_1B640C8(&BattleLogicTask_TypeInfo, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_AiActMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v11);
    sub_1B640C8(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__, v12);
    sub_1B640C8(&System_Func_BattleServantData__bool__TypeInfo, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData__RemoveAt__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData__get_Item__, v18);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v19);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v20);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    byte_49FEF2A = 1;
  }
  entity = 0LL;
  info = 0LL;
  v85 = 0LL;
  v22 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&ltype,
                                                       data);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  v27 = this->fields.data;
  v28 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleServantData__bool__TypeInfo, v25, v26);
  System_Func_object__bool____ctor(v28, (Il2CppObject *)this, Method_BattleLogicEnemyAi_IsNotTempDeadSvt__, 0LL);
  if ( !v27 )
    goto LABEL_68;
  Instance = BattleData__CheckAlivePlayers(v27, (System_Func_BattleServantData__bool__o *)v28, 0LL);
  if ( (Instance & 1) == 0 )
    return (System_Collections_Generic_List_BattleLogicTask__o *)v22;
  v29 = this->fields.data;
  if ( !v29 )
    goto LABEL_68;
  if ( !v29->fields.leaderDown && !v29->fields.endbattleFlg )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_AiActMaster___);
      this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.aiActMst, (int32_t)MasterData_object, v32, v33);
      BattleLogicEnemyAi__updateActPriorityList(this, v34);
      Instance = (__int64)this->fields.actlist;
      if ( Instance )
      {
        if ( *(int *)(Instance + 24) <= 0 )
        {
          v46 = this->fields.data;
          if ( v46 )
          {
            ++v46->fields.countEnemyAttack;
            return (System_Collections_Generic_List_BattleLogicTask__o *)v22;
          }
        }
        else
        {
          Instance = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)Instance,
                                0,
                                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleServantData__get_Item__);
          if ( this->fields.actlist )
          {
            v35 = (BattleServantData_o *)Instance;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this->fields.actlist,
              0,
              (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_BattleServantData__RemoveAt__);
            if ( v35 )
            {
              if ( !BattleServantData__isAlive(v35, 0, 0LL)
                || !BattleLogicEnemyAi__IsNotTempDeadSvt(this, v35, v36)
                || !v35->fields.isEntry )
              {
                return (System_Collections_Generic_List_BattleLogicTask__o *)v22;
              }
              if ( !BattleServantData__isAction(v35, 0LL) )
              {
LABEL_47:
                BattleLogicEnemyAi__AddActCount(this, v35, v37);
                return (System_Collections_Generic_List_BattleLogicTask__o *)v22;
              }
              Instance = BattleServantData__isTDSeraled(v35, 0LL);
              if ( (Instance & 1) == 0
                && (Instance = BattleServantData__checkUseTDvc(v35, this->fields.data, 1, 0LL), (Instance & 1) != 0)
                && (TreasureDvcCommand = BattleServantData__MakeTreasureDvcCommand(v35, 0LL),
                    Instance = BattleServantData__isCardTypeAction(v35, TreasureDvcCommand, 0LL),
                    (Instance & 1) != 0) )
              {
                Instance = (__int64)BattleLogicEnemyAi__taskAIEnemyMaxNp(this, v35->fields.uniqueId, v39);
                if ( !Instance )
                  goto LABEL_68;
                v41 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
                if ( *(_QWORD *)(Instance + 24) )
                {
LABEL_67:
                  if ( !v22 )
                    goto LABEL_68;
                  goto LABEL_46;
                }
                p_aiActMst = &this->fields.aiActMst;
                v43 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, Instance, v40);
                BattleLogicTask___ctor(v43, 0LL);
                if ( v43 )
                {
                  BattleLogicTask__setActor(v43, 3, v35->fields.uniqueId, 0LL);
                  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( Instance )
                  {
                    v44 = DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                    Instance = BattleServantData__getTreasureDvcId(v35, 1, 0LL);
                    if ( v44 )
                    {
                      Instance = (__int64)TreasureDvcLvMaster__GetEntity(
                                            (TreasureDvcLvMaster_o *)v44,
                                            Instance,
                                            v35->fields.treasuredvcLevel,
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
                        v45 = Instance;
                      }
                      else
                      {
                        v45 = 1;
                      }
                      v51 = this->fields.data;
                      if ( v51 )
                      {
                        Instance = (__int64)this->fields.aiLogic;
                        if ( Instance )
                        {
                          Instance = (__int64)AiLogic__getAction(
                                                (AiLogic_o *)Instance,
                                                v35,
                                                8,
                                                data->fields.turnCount,
                                                v51->fields.countEnemyAttack,
                                                (BattleLogicBaseAi_o *)this,
                                                &v85,
                                                0,
                                                0LL);
                          entity = 0LL;
                          logictarget = this->fields.logictarget;
                          if ( logictarget )
                          {
                            tempDeadSvtHash = this->fields.tempDeadSvtHash;
                            v56 = (AiEntity_o *)Instance;
                            logictarget->fields.tempDeadSvtHash = tempDeadSvtHash;
                            sub_1B6406C(
                              (ServantStatusBattleListViewItem_o *)&logictarget->fields.tempDeadSvtHash,
                              (int32_t)tempDeadSvtHash,
                              v52,
                              v53);
                            if ( !v56 )
                              goto LABEL_58;
                            Instance = (__int64)*p_aiActMst;
                            if ( !*p_aiActMst )
                              goto LABEL_68;
                            Instance = DataMasterBase_object__object__int___TryGetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                         &entity,
                                         v56->fields.aiActId,
                                         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
                            if ( (Instance & 1) != 0 )
                            {
                              if ( !entity )
                                goto LABEL_68;
                              v57 = this->fields.logictarget;
                              uniqueId = v35->fields.uniqueId;
                              klass = entity[2].klass;
                              monitor = (int32_t)entity[1].monitor;
                              FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
                              v61 = entity;
                              v62 = FieldPlayerServantIDList;
                              Instance = BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(this, v56, v63);
                              if ( !v57 )
                                goto LABEL_68;
                              TargetAiAct = BattleLogicTarget__getTargetAiAct(
                                              v57,
                                              monitor,
                                              uniqueId,
                                              (System_Int32_array *)klass,
                                              v62,
                                              v45 & 1,
                                              0,
                                              0LL,
                                              (AiActEntity_o *)v61,
                                              Instance & 1,
                                              0LL);
                            }
                            else
                            {
LABEL_58:
                              v65 = this->fields.logictarget;
                              v66 = v35->fields.uniqueId;
                              Instance = (__int64)BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
                              if ( !v65 )
                                goto LABEL_68;
                              TargetAiAct = BattleLogicTarget__getTargetAiAct(
                                              v65,
                                              1,
                                              v66,
                                              0LL,
                                              (System_Int32_array *)Instance,
                                              v45 & 1,
                                              0,
                                              0LL,
                                              (AiActEntity_o *)entity,
                                              1,
                                              0LL);
                            }
                            BattleLogicTask__setTarget(v43, TargetAiAct, 0LL);
                            Instance = (__int64)this->fields.logictarget;
                            if ( Instance )
                            {
                              *(_QWORD *)(Instance + 24) = 0LL;
                              sub_1B6406C((ServantStatusBattleListViewItem_o *)(Instance + 24), 0, v67, v68);
                              v71 = (BattleCommandData_o *)sub_1B64314(BattleCommandData_TypeInfo, v69, v70);
                              BattleCommandData___ctor(v71, 0LL);
                              Instance = BattleServantData__getTreasureDvcCardId(v35, 0LL);
                              if ( v71 )
                              {
                                v71->fields._type = Instance;
                                v71->fields.svtlimit = BattleServantData__getDispLimitCount(v35, 1, 0LL);
                                v71->fields.uniqueId = v35->fields.uniqueId;
                                v71->fields.svtId = BattleServantData__getSvtId(v35, 0LL);
                                v71->fields.treasureDvc = BattleServantData__getTreasureDvcId(v35, 1, 0LL);
                                v74 = (BattleComboData_o *)sub_1B64314(BattleComboData_TypeInfo, v72, v73);
                                BattleComboData___ctor(v74, 0LL);
                                v75 = this->fields.data;
                                if ( v75 )
                                {
                                  BattleLogicTask__setActionCommand(v43, v74, v71, v75->fields.countEnemyAttack, 0LL);
                                  TreasureDvcId = BattleServantData__getTreasureDvcId(v35, 1, 0LL);
                                  BattleLogicTask__setActionTreasureDvc(v43, TreasureDvcId, 1, 0LL);
                                  Instance = sub_1B64170(BattleLogicTask___TypeInfo, 1LL);
                                  if ( Instance )
                                  {
                                    v77 = Instance;
                                    v78 = sub_1B64204(v43, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
                                    if ( !v78 )
                                    {
                                      v83 = sub_1B64348(0LL);
                                      sub_1B641F0(v83, 0LL);
                                    }
                                    if ( !*(_DWORD *)(v77 + 24) )
                                      sub_1B6432C(v78, v79);
                                    *(_QWORD *)(v77 + 32) = v43;
                                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v77 + 32), (int32_t)v43, v80, v81);
                                    Instance = (__int64)BattleLogicEnemyAi__ReplaceCommandTasksBySealStatus(
                                                          this,
                                                          v35,
                                                          (BattleLogicTask_array *)v77,
                                                          v82);
                                    v41 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
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
                v47 = this->fields.data;
                if ( v47 )
                {
                  Instance = (__int64)this->fields.aiLogic;
                  if ( Instance )
                  {
                    Instance = (__int64)AiLogic__getAction(
                                          (AiLogic_o *)Instance,
                                          v35,
                                          1,
                                          data->fields.turnCount,
                                          v47->fields.countEnemyAttack,
                                          (BattleLogicBaseAi_o *)this,
                                          &info,
                                          0,
                                          0LL);
                    v48 = this->fields.data;
                    if ( Instance )
                    {
                      if ( !v48 )
                        goto LABEL_68;
                      v49 = this->klass;
                      noThinkAiEnt = (struct AiEntity_o *)Instance;
                    }
                    else
                    {
                      if ( !v48 )
                        goto LABEL_68;
                      v49 = this->klass;
                      noThinkAiEnt = this->fields.noThinkAiEnt;
                    }
                    Instance = ((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, struct AiEntity_o *, _QWORD, AiLogic_AiInfo_o *, __int64, Il2CppMethodPointer))v49->vtable._19_procAiAct.method)(
                                 this,
                                 v35,
                                 noThinkAiEnt,
                                 (unsigned int)v48->fields.countEnemyAttack,
                                 info,
                                 1LL,
                                 v49->vtable._20_ExistThinking.methodPtr);
                    if ( v22 )
                    {
                      v41 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
LABEL_46:
                      System_Collections_Generic_List_object___AddRange(
                        v22,
                        v41,
                        (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
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
    sub_1B64324(Instance);
  }
  return (System_Collections_Generic_List_BattleLogicTask__o *)v22;
}


void __fastcall BattleLogicEnemyAi__ExcludeDeadFromTempDead(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x20
  Il2CppObject *data; // x19
  System_Predicate_int__o *v8; // x21

  if ( (byte_49FEF38 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleData_IsNotAliveTarget__, method);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__, v4);
    sub_1B640C8(&System_Predicate_int__TypeInfo, v5);
    byte_49FEF38 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
  {
    data = (Il2CppObject *)this->fields.data;
    v8 = (System_Predicate_int__o *)sub_1B64314(System_Predicate_int__TypeInfo, method, v2);
    System_Predicate_int____ctor(v8, data, Method_BattleData_IsNotAliveTarget__, 0LL);
    System_Collections_Generic_HashSet_int___RemoveWhere(
      tempDeadSvtHash,
      (System_Predicate_T__o *)v8,
      (const MethodInfo_33650E4 *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
  }
}


System_Int32_array *__fastcall BattleLogicEnemyAi__GetCommandArray(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *data; // x21
  BattleData_o *StageEntity; // x0

  if ( (byte_49FEF35 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, servantData);
    byte_49FEF35 = 1;
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
    sub_1B64324(StageEntity);
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
  __int64 v7; // x1
  __int64 v8; // x2
  AiLogic_o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  AiLogic_o *aiLogic; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  AiEntity_o *v15; // x20
  struct AiEntity_o **p_noThinkAiEnt; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  struct AiEntity_o *v19; // x19

  if ( (byte_49FEF26 & 1) == 0 )
  {
    sub_1B640C8(&AiEntity_TypeInfo, data);
    sub_1B640C8(&AiLogic_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_9228/*"NOTHINK_AIACTID"*/, v6);
    byte_49FEF26 = 1;
  }
  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, method);
  v9 = (AiLogic_o *)sub_1B64314(AiLogic_TypeInfo, v7, v8);
  AiLogic___ctor(v9, 0LL);
  this->fields.aiLogic = v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.aiLogic, (int32_t)v9, v10, v11);
  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    goto LABEL_6;
  AiLogic__Initialize(aiLogic, data, 0LL);
  v15 = (AiEntity_o *)sub_1B64314(AiEntity_TypeInfo, v13, v14);
  AiEntity___ctor(v15, 0LL);
  this->fields.noThinkAiEnt = v15;
  p_noThinkAiEnt = &this->fields.noThinkAiEnt;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_noThinkAiEnt, (int32_t)v15, v17, v18);
  v19 = *p_noThinkAiEnt;
  aiLogic = (AiLogic_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_9228/*"NOTHINK_AIACTID"*/, 0LL);
  if ( !v19 )
LABEL_6:
    sub_1B64324(aiLogic);
  v19->fields.aiActId = (int)aiLogic;
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
    sub_1B64324(0LL);
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
  if ( (byte_49FEF39 & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_1B640C8(&Method_BasicHelper_ContainsSelfNotNull_int___, svtData);
    byte_49FEF39 = 1;
  }
  if ( !svtData )
    sub_1B64324(this);
  return !BasicHelper__ContainsSelfNotNull_int_(
            (System_Collections_Generic_HashSet_T__o *)v4->fields.tempDeadSvtHash,
            svtData->fields.uniqueId,
            (const MethodInfo_2E24DF0 *)Method_BasicHelper_ContainsSelfNotNull_int___);
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
  const MethodInfo *v9; // x2

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
    CommandRandomTask = BattleLogicEnemyAi__CreateCommandRandomTask(this, svtData, CommandRandomTask, v8);
    IsSealedCommandTask = BattleLogicServantAi__IsSealedCommandTask(svtData, CommandRandomTask, v9);
    if ( IsSealedCommandTask )
    {
      if ( CommandRandomTask )
        goto LABEL_6;
LABEL_8:
      sub_1B64324(IsSealedCommandTask);
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  __int64 v18; // x2
  System_Func_object__object__o *v19; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_49FEF34 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_BattleLogicTask__BattleLogicTask___, svtData);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BattleLogicTask___, v7);
    sub_1B640C8(&System_Func_BattleLogicTask__BattleLogicTask__TypeInfo, v8);
    sub_1B640C8(&Method_BattleLogicEnemyAi___c__DisplayClass36_0__ReplaceCommandTasksBySealStatus_b__0__, v9);
    sub_1B640C8(&BattleLogicEnemyAi___c__DisplayClass36_0_TypeInfo, v10);
    byte_49FEF34 = 1;
  }
  v11 = sub_1B64314(BattleLogicEnemyAi___c__DisplayClass36_0_TypeInfo, svtData, derivedTasks);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B64324(v12);
  *(_QWORD *)(v11 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v11 + 24) = svtData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)svtData, v15, v16);
  v19 = (System_Func_object__object__o *)sub_1B64314(System_Func_BattleLogicTask__BattleLogicTask__TypeInfo, v17, v18);
  System_Func_object__object____ctor(
    v19,
    (Il2CppObject *)v11,
    Method_BattleLogicEnemyAi___c__DisplayClass36_0__ReplaceCommandTasksBySealStatus_b__0__,
    0LL);
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)derivedTasks,
                                                               (System_Func_TSource__TResult__o *)v19,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_BattleLogicTask__BattleLogicTask___);
  return (BattleLogicTask_array *)System_Linq_Enumerable__ToArray_object_(
                                    v20,
                                    (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
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
  if ( (byte_49FEF3B & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_1B640C8(&Method_WeightRate_int__setWeight__, weight);
    byte_49FEF3B = 1;
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
      (const MethodInfo_388BE70 *)Method_WeightRate_int__setWeight__);
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
      (const MethodInfo_388BE70 *)Method_WeightRate_int__setWeight__);
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
        (const MethodInfo_388BE70 *)Method_WeightRate_int__setWeight__);
      return;
    }
LABEL_14:
    sub_1B64324(this);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.tempDeadSvtHash, 0, v5, v6);
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x21
  bool isClearTempDeadSvtPrevAct; // w23
  __int64 v15; // x1
  __int64 v16; // x2
  CheckEnemyRelationInterruptProcess_o *v17; // x22
  __int64 v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_49FEF28 & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicTask_TypeInfo, *(_QWORD *)&ltype);
    sub_1B640C8(&CheckEnemyRelationInterruptProcess_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v9);
    byte_49FEF28 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&ltype,
                                                       data);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v13 = sub_1B64314(BattleLogicTask_TypeInfo, v11, v12);
  BattleLogicTask___ctor((BattleLogicTask_o *)v13, 0LL);
  isClearTempDeadSvtPrevAct = this->fields.isClearTempDeadSvtPrevAct;
  v17 = (CheckEnemyRelationInterruptProcess_o *)sub_1B64314(CheckEnemyRelationInterruptProcess_TypeInfo, v15, v16);
  CheckEnemyRelationInterruptProcess___ctor(v17, isClearTempDeadSvtPrevAct, 0LL);
  if ( !v13
    || (*(_QWORD *)(v13 + 232) = v17,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 232), (int32_t)v17, v19, v20),
        *(_BYTE *)(v13 + 210) = 1,
        !v10)
    || (items = v10->fields._items,
        v24 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++v10->fields._version,
        !items) )
  {
    sub_1B64324(v18);
  }
  size = v10->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v13,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v10->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v13;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), v13, v21, v22);
  }
  this->fields.isClearTempDeadSvtPrevAct = 0;
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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

  if ( (byte_49FEF27 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor__, *(_QWORD *)&ltype);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v5);
    byte_49FEF27 = 1;
  }
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                      System_Collections_Generic_HashSet_int__TypeInfo,
                                                      *(_QWORD *)&ltype,
                                                      data);
  System_Collections_Generic_HashSet_int____ctor(
    v6,
    (const MethodInfo_33639AC *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.tempDeadSvtHash = v6;
  p_tempDeadSvtHash = &this->fields.tempDeadSvtHash;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_tempDeadSvtHash, (int32_t)v6, v8, v9);
  *((_BYTE *)p_tempDeadSvtHash + 8) = 0;
  return 0LL;
}


void __fastcall BattleLogicEnemyAi__addEnemyActPriorityList(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *inSvtData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *actlist; // x0

  if ( (byte_49FEF2D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData__Insert__, inSvtData);
    byte_49FEF2D = 1;
  }
  actlist = (System_Collections_Generic_List_object__o *)this->fields.actlist;
  if ( !actlist )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___Insert(
    actlist,
    0,
    (Il2CppObject *)inSvtData,
    (const MethodInfo_34AE524 *)Method_System_Collections_Generic_List_BattleServantData__Insert__);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v20; // x2
  int32_t Type; // w24
  WeightRate_int__o *v22; // x23
  __int64 v23; // x1
  __int64 v24; // x8
  System_Int32_array *v25; // x24
  unsigned __int64 v26; // x25
  int32_t Next; // w0
  int32_t Data; // w0
  int32_t SvtId; // w25
  int32_t DispLimitCount; // w26
  __int64 v31; // x1
  __int64 v32; // x2
  BattleCommandData_o *v33; // x23
  int32_t v34; // w1
  __int64 v35; // x1
  __int64 v36; // x2
  BattleComboData_o *v37; // x20

  if ( (byte_49FEF33 & 1) == 0 )
  {
    sub_1B640C8(&BattleComboData_TypeInfo, svtData);
    sub_1B640C8(&BattleCommandData_TypeInfo, v10);
    sub_1B640C8(&BattleLogicTask_TypeInfo, v11);
    sub_1B640C8(&Method_WeightRate_int___ctor__, v12);
    sub_1B640C8(&Method_WeightRate_int__getData__, v13);
    sub_1B640C8(&Method_WeightRate_int__getTotalWeight__, v14);
    sub_1B640C8(&Method_WeightRate_int__setWeight__, v15);
    sub_1B640C8(&WeightRate_int__TypeInfo, v16);
    byte_49FEF33 = 1;
  }
  v17 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, svtData, *(_QWORD *)&targetId);
  BattleLogicTask___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_21;
  BattleLogicTask__setTarget(v17, targetId, 0LL);
  if ( !svtData )
    goto LABEL_21;
  BattleLogicTask__setActor(v17, 3, svtData->fields.uniqueId, 0LL);
  if ( SvtType__IsEnemy_37401396(svtData->fields.svtType, 0LL) )
  {
    Type = 10;
    goto LABEL_15;
  }
  v22 = (WeightRate_int__o *)sub_1B64314(WeightRate_int__TypeInfo, v19, v20);
  WeightRate_int____ctor(v22, (const MethodInfo_388C894 *)Method_WeightRate_int___ctor__);
  CommandList = BattleServantData__getCommandList(svtData, 0LL);
  if ( !CommandList )
    goto LABEL_21;
  v24 = *(_QWORD *)&CommandList->max_length;
  v25 = CommandList;
  if ( (int)v24 >= 1 )
  {
    v26 = 0LL;
    while ( 1 )
    {
      if ( v26 >= (unsigned int)v24 )
        sub_1B6432C(CommandList, v23);
      if ( !v22 )
        break;
      WeightRate_int___setWeight(
        v22,
        10,
        v25->m_Items[v26 + 1],
        (const MethodInfo_388BE70 *)Method_WeightRate_int__setWeight__);
      LODWORD(v24) = v25->max_length;
      if ( (__int64)++v26 >= (int)v24 )
        goto LABEL_13;
    }
LABEL_21:
    sub_1B64324(CommandList);
  }
LABEL_13:
  if ( !v22 )
    goto LABEL_21;
  Next = BattleRandom__getNext(v22->fields.totalweight, 0LL);
  Data = WeightRate_int___getData(v22, Next, (const MethodInfo_388C224 *)Method_WeightRate_int__getData__);
  Type = BattleCommand__getType(Data, 0LL);
LABEL_15:
  SvtId = BattleServantData__getSvtId(svtData, 0LL);
  DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
  v33 = (BattleCommandData_o *)sub_1B64314(BattleCommandData_TypeInfo, v31, v32);
  BattleCommandData___ctor_42850076(v33, Type, SvtId, DispLimitCount, 0, -1, 0LL);
  if ( !v33 )
    goto LABEL_21;
  v33->fields.uniqueId = svtData->fields.uniqueId;
  if ( !baseTask )
    goto LABEL_21;
  if ( baseTask->fields.isNoCriticalOnAttack )
    v34 = 3;
  else
    v34 = 1;
  BattleCommandData__SetCriticalDecisionType(v33, v34, 0LL);
  v17->fields.isNoCriticalOnAttack = baseTask->fields.isNoCriticalOnAttack;
  v37 = (BattleComboData_o *)sub_1B64314(BattleComboData_TypeInfo, v35, v36);
  BattleComboData___ctor(v37, 0LL);
  BattleLogicTask__setActionCommand(v17, v37, v33, countAct, 0LL);
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
    sub_1B64324(0LL);
  return BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
}


System_Int32_array *__fastcall BattleLogicEnemyAi__get_PartySvtIds(
        BattleLogicEnemyAi_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1B64324(0LL);
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
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x6
  BattleLogicTask_array *v21; // x20
  const MethodInfo *v22; // x3
  BattleLogicTask_array *v23; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  System_Action_object__o *v26; // x21

  if ( (byte_49FEF2E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattleLogicTask__TypeInfo, svtData);
    sub_1B640C8(&Method_BasicHelper_ForEach_BattleLogicTask___, v13);
    sub_1B640C8(&Method_BattleLogicEnemyAi___c__DisplayClass25_0__procAiAct_b__0__, v14);
    sub_1B640C8(&BattleLogicEnemyAi___c__DisplayClass25_0_TypeInfo, v15);
    byte_49FEF2E = 1;
  }
  v16 = sub_1B64314(BattleLogicEnemyAi___c__DisplayClass25_0_TypeInfo, svtData, aiEnt);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    sub_1B64324(v17);
  *(_QWORD *)(v16 + 16) = svtData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 16), (int32_t)svtData, v18, v19);
  v21 = BattleLogicEnemyAi__procAiActLocal(
          this,
          *(BattleServantData_o **)(v16 + 16),
          aiEnt,
          countAct,
          aiInfo,
          procState,
          v20);
  v23 = BattleLogicEnemyAi__ReplaceCommandTasksBySealStatus(this, *(BattleServantData_o **)(v16 + 16), v21, v22);
  v26 = (System_Action_object__o *)sub_1B64314(System_Action_BattleLogicTask__TypeInfo, v24, v25);
  System_Action_object____ctor(
    v26,
    (Il2CppObject *)v16,
    Method_BattleLogicEnemyAi___c__DisplayClass25_0__procAiAct_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)v21,
    (System_Action_T__o *)v26,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_BattleLogicTask___);
  return v23;
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
  BattleLogicBaseAi_o *v33; // x0
  const MethodInfo *v34; // x4
  __int64 v35; // x1
  __int64 v36; // x2
  bool v38; // w28
  WeightRate_int__o *v39; // x22
  __int64 v40; // x1
  __int64 v41; // x2
  int32_t Int; // w0
  int32_t v43; // w0
  int32_t v44; // w0
  BattleServantData_o *v45; // x0
  int32_t v46; // w1
  int *skillVals; // x8
  int32_t v48; // w22
  int32_t v49; // w25
  int32_t Next; // w0
  int32_t Data; // w0
  System_Collections_Generic_List_object__o *v52; // x27
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x25
  int32_t v56; // w2
  int32_t v57; // w3
  struct System_String_o *infoText; // x1
  bool v59; // w22
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x20
  const MethodInfo *v63; // x3
  int32_t v64; // w2
  int32_t v65; // w3
  const MethodInfo *v66; // x4
  System_String_o *v67; // x0
  System_String_o *v68; // x0
  struct BattleLogic_o *logic; // x8
  UnityEngine_GameObject_o *ServantGameObject; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  int32_t v73; // w2
  int32_t v74; // w3
  Il2CppObject *MasterData_object; // x20
  BattleSkillInfoData_o *SkillInfoDataByAiActType; // x0
  SkillLvEntity_o *Entity; // x28
  int32_t v78; // w2
  int32_t v79; // w3
  bool IsEnableTarget; // w29
  BattleLogic_o *v81; // x20
  struct BattleLogicTarget_o *funcId; // x22
  BattleLogicEnemyAi_o *v83; // x2
  BattleLogic_o *v84; // x0
  struct BattleLogicTarget_o *logictarget; // x1
  Il2CppObject *v86; // x20
  struct BattleLogic_o *tempDeadSvtHash; // x1
  BattleData_o *v88; // x8
  BattleLogicTarget_o *v89; // x20
  int32_t target; // w24
  int32_t uniqueId; // w27
  System_Int32_array *targetIndividuality; // x28
  System_Int32_array *FieldPlayerServantIDList; // x22
  const MethodInfo *v94; // x2
  __int64 v95; // x1
  BattleLogicTarget_o *v96; // x20
  int32_t v97; // w24
  int32_t v98; // w27
  System_Int32_array *v99; // x28
  System_Int32_array *v100; // x29
  int32_t v101; // w2
  int32_t v102; // w3
  int32_t v103; // w2
  int32_t v104; // w3
  int32_t v105; // w26
  int32_t Type; // w23
  const MethodInfo *v107; // x5
  const MethodInfo *v108; // x3
  int32_t v109; // w2
  int32_t v110; // w3
  struct System_Object_array *v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  Il2CppClass **v114; // x0
  __int64 v115; // x1
  __int64 v116; // x2
  int32_t v117; // w2
  int32_t v118; // w3
  __int64 v119; // x1
  __int64 v120; // x2
  BattleCommandData_o *v121; // x21
  __int64 v122; // x1
  __int64 v123; // x2
  BattleComboData_o *v124; // x20
  int32_t TreasureDvcId; // w0
  BattleLogicTask_o *v126; // x19
  struct System_Object_array *v127; // x8
  _QWORD *v128; // x9
  __int64 v129; // x10
  Il2CppClass **v130; // x0
  ServantStatusBattleListViewItem_o *v131; // x0
  int32_t v132; // w1
  __int64 v133; // x8
  System_Collections_Generic_List_object__o *v134; // x0
  Il2CppObject *v135; // x1
  __int64 v136; // x1
  __int64 v137; // x2
  WeightRate_int__o *v138; // x23
  const MethodInfo *v139; // x2
  struct BattleLogic_o *v140; // x8
  BattleLogicEnemyAi_o *v141; // x21
  unsigned __int64 v142; // x20
  int32_t v143; // w0
  int32_t v144; // w0
  int32_t SvtId; // w20
  int32_t DispLimitCount; // w22
  __int64 v147; // x1
  __int64 v148; // x2
  BattleCommandData_o *v149; // x21
  int32_t v150; // w1
  __int64 v151; // x1
  __int64 v152; // x2
  BattleComboData_o *v153; // x19
  struct System_Object_array *items; // x8
  _QWORD *v155; // x9
  __int64 size; // x10
  Il2CppClass **v157; // x0
  int32_t v158; // [xsp+24h] [xbp-9Ch]
  System_Collections_Generic_List_object__o *v159; // [xsp+28h] [xbp-98h]
  int32_t v160; // [xsp+34h] [xbp-8Ch]
  System_Int32_array *targetlist; // [xsp+38h] [xbp-88h]
  BattleSkillInfoData_o *v162; // [xsp+40h] [xbp-80h]
  int32_t lv; // [xsp+4Ch] [xbp-74h] BYREF
  int32_t id[2]; // [xsp+50h] [xbp-70h] BYREF
  int32_t aiActType; // [xsp+58h] [xbp-68h] BYREF
  bool noMessage; // [xsp+5Ch] [xbp-64h] BYREF

  v12 = this;
  if ( (byte_49FEF2F & 1) == 0 )
  {
    sub_1B640C8(&BattleComboData_TypeInfo, svtData);
    sub_1B640C8(&BattleCommandData_TypeInfo, v13);
    sub_1B640C8(&BattleLogicTask_TypeInfo, v14);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v15);
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v16);
    sub_1B640C8(&int___TypeInfo, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v20);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v21);
    sub_1B640C8(&ServantAiActArgument_TypeInfo, v22);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1B640C8(&Method_WeightRate_int___ctor__, v24);
    sub_1B640C8(&Method_WeightRate_int__getCount__, v25);
    sub_1B640C8(&Method_WeightRate_int__getData__, v26);
    sub_1B640C8(&Method_WeightRate_int__getTotalWeight__, v27);
    sub_1B640C8(&Method_WeightRate_int__setWeight__, v28);
    sub_1B640C8(&WeightRate_int__TypeInfo, v29);
    this = (BattleLogicEnemyAi_o *)sub_1B640C8(&StringLiteral_8668/*"MOTION_"*/, v30);
    byte_49FEF2F = 1;
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
  v32 = (AiActEntity_o *)this;
  aiActType = data_high;
  if ( !svtData )
    goto LABEL_164;
  v33 = (BattleLogicBaseAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._18_getAiState.method)(
                                 svtData,
                                 svtData->klass->vtable._19_ExistAiThinking.methodPtr);
  if ( BattleLogicBaseAi__IsChangeThinkingOnly(v33, data_high, (AiBaseEntity_o *)aiEnt, (AiState_o *)v33, v34) )
    return v12->fields.emptyTask;
  v38 = procState != 1 || BattleServantData__canUseSkill(svtData, -1, 0LL);
  v39 = (WeightRate_int__o *)sub_1B64314(WeightRate_int__TypeInfo, v35, v36);
  WeightRate_int____ctor(v39, (const MethodInfo_388C894 *)Method_WeightRate_int___ctor__);
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
      if ( !v38 )
        goto LABEL_58;
      if ( !BattleServantData__isUseSelfSkill(svtData, 0, 0LL) )
        goto LABEL_19;
      this = (BattleLogicEnemyAi_o *)AiAct__getInt(11, 0LL);
      if ( !v39 )
        goto LABEL_164;
      WeightRate_int___setWeight(v39, 10, (int32_t)this, (const MethodInfo_388BE70 *)Method_WeightRate_int__setWeight__);
LABEL_19:
      if ( !BattleServantData__isUseSelfSkill(svtData, 1, 0LL) )
        goto LABEL_22;
      this = (BattleLogicEnemyAi_o *)AiAct__getInt(12, 0LL);
      if ( !v39 )
        goto LABEL_164;
      WeightRate_int___setWeight(v39, 10, (int32_t)this, (const MethodInfo_388BE70 *)Method_WeightRate_int__setWeight__);
LABEL_22:
      this = (BattleLogicEnemyAi_o *)BattleServantData__isUseSelfSkill(svtData, 2, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleLogicEnemyAi_o *)AiAct__getInt(13, 0LL);
        if ( !v39 )
          goto LABEL_164;
        WeightRate_int___setWeight(
          v39,
          10,
          (int32_t)this,
          (const MethodInfo_388BE70 *)Method_WeightRate_int__setWeight__);
      }
      else
      {
LABEL_58:
        if ( !v39 )
          goto LABEL_164;
      }
      if ( WeightRate_int___getCount(v39, (const MethodInfo_388C16C *)Method_WeightRate_int__getCount__) >= 1 )
        goto LABEL_60;
      goto LABEL_61;
    case 11:
      if ( !v38 )
      {
        aiActType = 2;
        noMessage = 1;
      }
      v45 = svtData;
      v46 = 0;
      goto LABEL_41;
    case 12:
      if ( !v38 )
      {
        aiActType = 2;
        noMessage = 1;
      }
      v46 = 1;
      v45 = svtData;
LABEL_41:
      if ( !BattleServantData__isUseSelfSkill(v45, v46, 0LL) )
        aiActType = 2;
      goto LABEL_62;
    case 13:
      if ( !v38 )
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
        if ( v38 || data_high != 41 )
        {
          v48 = skillVals[8];
          v49 = skillVals[9];
          this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_164;
          this = (BattleLogicEnemyAi_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
          if ( !this )
            goto LABEL_164;
          if ( SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v48, v49, 0LL) )
          {
            BattleServantData__addSkillInfo(svtData, 20, 0, v48, v49, -1LL, -1, 0LL, 0LL);
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
      if ( !v39 )
        goto LABEL_164;
      WeightRate_int___setWeight(v39, 10, (int32_t)this, (const MethodInfo_388BE70 *)Method_WeightRate_int__setWeight__);
      if ( v38 )
      {
        if ( BattleServantData__isUseSelfSkill(svtData, 0, 0LL) )
        {
          Int = AiAct__getInt(11, 0LL);
          WeightRate_int___setWeight(v39, 10, Int, (const MethodInfo_388BE70 *)Method_WeightRate_int__setWeight__);
        }
        if ( BattleServantData__isUseSelfSkill(svtData, 1, 0LL) )
        {
          v43 = AiAct__getInt(12, 0LL);
          WeightRate_int___setWeight(v39, 10, v43, (const MethodInfo_388BE70 *)Method_WeightRate_int__setWeight__);
        }
        if ( BattleServantData__isUseSelfSkill(svtData, 2, 0LL) )
        {
          v44 = AiAct__getInt(13, 0LL);
          WeightRate_int___setWeight(v39, 10, v44, (const MethodInfo_388BE70 *)Method_WeightRate_int__setWeight__);
        }
      }
LABEL_60:
      Next = BattleRandom__getNext(v39->fields.totalweight, 0LL);
      Data = WeightRate_int___getData(v39, Next, (const MethodInfo_388C224 *)Method_WeightRate_int__getData__);
      aiActType = AiAct__getType(Data, 0LL);
LABEL_62:
      v52 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                           v40,
                                                           v41);
      System_Collections_Generic_List_object____ctor(
        v52,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      v55 = sub_1B64314(BattleLogicTask_TypeInfo, v53, v54);
      BattleLogicTask___ctor((BattleLogicTask_o *)v55, 0LL);
      if ( noMessage )
      {
        if ( !v55 )
          goto LABEL_164;
      }
      else
      {
        if ( !v55 )
          goto LABEL_164;
        infoText = aiEnt->fields.infoText;
        *(_QWORD *)(v55 + 152) = infoText;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v55 + 152), (int32_t)infoText, v56, v57);
      }
      BattleLogicTask__setActor((BattleLogicTask_o *)v55, 3, svtData->fields.uniqueId, 0LL);
      if ( AiBaseEntity__IsForcedActionSpeedAnyTime((AiBaseEntity_o *)aiEnt, 0LL) )
        *(_BYTE *)(v55 + 160) = 1;
      *(_BYTE *)(v55 + 208) = AiActEntity__IsNoCriticalOnAttack(v32, 0LL);
      this = (BattleLogicEnemyAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._18_getAiState.method)(
                                       svtData,
                                       svtData->klass->vtable._19_ExistAiThinking.methodPtr);
      if ( !this )
        goto LABEL_164;
      AiState__setBeforeAction((AiState_o *)this, aiActType, aiEnt->fields.aiActId, 0LL);
      v59 = noMessage;
      v62 = sub_1B64314(ServantAiActArgument_TypeInfo, v60, v61);
      BaseAiActArgument___ctor((BaseAiActArgument_o *)v62, v32, (AiBaseEntity_o *)aiEnt, v63);
      *(_QWORD *)(v62 + 32) = svtData;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v62 + 32), (int32_t)svtData, v64, v65);
      *(_BYTE *)(v62 + 40) = v59;
      if ( aiActType == 71 )
      {
        this = (BattleLogicEnemyAi_o *)AiBaseEntity__getActionValue((AiBaseEntity_o *)aiEnt, 0LL);
        id[1] = (int)this;
        if ( (int)this >= 1 )
        {
          v67 = System_Int32__ToString((int32_t)&id[1], 0LL);
          v68 = System_String__Concat_61375396((System_String_o *)StringLiteral_8668/*"MOTION_"*/, v67, 0LL);
          BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v55, v68, 0LL);
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
          *(_QWORD *)(v55 + 112) = ServantGameObject;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v55 + 112), (int32_t)ServantGameObject, v71, v72);
          BattleLogicTask__setActor((BattleLogicTask_o *)v55, 3, svtData->fields.uniqueId, 0LL);
          if ( !v52 )
            goto LABEL_164;
          goto LABEL_157;
        }
        goto LABEL_77;
      }
      this = (BattleLogicEnemyAi_o *)BattleLogicBaseAi__SetNoTargetAiActTask(
                                       (BattleLogicBaseAi_o *)v12,
                                       (System_Collections_Generic_List_BattleLogicTask__o *)v52,
                                       aiActType,
                                       (BaseAiActArgument_o *)v62,
                                       v66);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_77:
        if ( !v52 )
          goto LABEL_164;
        return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                          v52,
                                          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      }
      this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_164;
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
      SkillInfoDataByAiActType = BattleServantData__getSkillInfoDataByAiActType(svtData, aiActType, 0LL);
      Entity = (SkillLvEntity_o *)SkillInfoDataByAiActType;
      v162 = SkillInfoDataByAiActType;
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
      v158 = countAct;
      v159 = v52;
      v160 = procState;
      if ( AiAct__isSkillType(aiActType, 0LL) )
      {
        IsEnableTarget = 1;
        if ( !v162 || !Entity )
          goto LABEL_96;
        v81 = v12->fields.logic;
        funcId = (struct BattleLogicTarget_o *)Entity->fields.funcId;
        this = (BattleLogicEnemyAi_o *)SkillLvEntity__getDataValsList(Entity, 0LL);
        if ( !v81 )
          goto LABEL_164;
        v83 = this;
        v84 = v81;
        logictarget = funcId;
      }
      else
      {
        if ( aiActType != 80 )
          goto LABEL_95;
        this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_164;
        v86 = DataManager__GetMasterData_object_(
                (DataManager_o *)this,
                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
        this = (BattleLogicEnemyAi_o *)BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
        if ( !v86 )
          goto LABEL_164;
        this = (BattleLogicEnemyAi_o *)TreasureDvcLvMaster__GetEntity(
                                         (TreasureDvcLvMaster_o *)v86,
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
        v84 = v12->fields.logic;
        v83 = 0LL;
      }
      IsEnableTarget = BattleLogic__checkEnemyTargetFunction(
                         v84,
                         (System_Int32_array *)logictarget,
                         (DataVals_array *)v83,
                         0LL);
LABEL_96:
      this = (BattleLogicEnemyAi_o *)v12->fields.logictarget;
      if ( !this )
        goto LABEL_164;
      tempDeadSvtHash = (struct BattleLogic_o *)v12->fields.tempDeadSvtHash;
      this->fields.logic = tempDeadSvtHash;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.logic, (int32_t)tempDeadSvtHash, v78, v79);
      if ( v162 && Entity )
        IsEnableTarget = SkillLvEntity__IsEnableTarget(Entity, IsEnableTarget, 0LL);
      this = (BattleLogicEnemyAi_o *)sub_1B64170(int___TypeInfo, 1LL);
      v88 = v12->fields.data;
      targetlist = (System_Int32_array *)this;
      if ( !v88 )
        goto LABEL_164;
      v89 = v12->fields.logictarget;
      target = v32->fields.target;
      uniqueId = svtData->fields.uniqueId;
      targetIndividuality = v32->fields.targetIndividuality;
      FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v88, 0LL, 0LL);
      this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(v12, aiEnt, v94);
      if ( !v89 )
        goto LABEL_164;
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
        goto LABEL_164;
      if ( !targetlist->max_length )
        goto LABEL_165;
      targetlist->m_Items[1] = (int)this;
      this = (BattleLogicEnemyAi_o *)sub_1B64170(int___TypeInfo, 1LL);
      if ( !v12->fields.data )
        goto LABEL_164;
      v96 = v12->fields.logictarget;
      v97 = v32->fields.target;
      v98 = svtData->fields.uniqueId;
      v99 = v32->fields.targetIndividuality;
      v100 = (System_Int32_array *)this;
      this = (BattleLogicEnemyAi_o *)BattleData__getFieldEnemyServantIDList(v12->fields.data, 0, 0LL);
      if ( !v96 )
        goto LABEL_164;
      this = (BattleLogicEnemyAi_o *)BattleLogicTarget__getTargetAiAct(
                                       v96,
                                       v97,
                                       v98,
                                       v99,
                                       (System_Int32_array *)this,
                                       0,
                                       0,
                                       0LL,
                                       v32,
                                       1,
                                       0LL);
      if ( !v100 )
        goto LABEL_164;
      if ( !v100->max_length )
        goto LABEL_165;
      v100->m_Items[1] = (int)this;
      this = (BattleLogicEnemyAi_o *)v12->fields.logictarget;
      if ( !this )
        goto LABEL_164;
      this->fields.logic = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.logic, 0, v101, v102);
      this = (BattleLogicEnemyAi_o *)v12->fields.logic;
      if ( !this )
        goto LABEL_164;
      *(_BYTE *)(v55 + 168) = (v160 == 1) & (BattleLogic__GetLogicType((BattleLogic_o *)this, 0LL) == 42);
      if ( AiAct__isAttackType(aiActType, 0LL) )
      {
        *(_QWORD *)(v55 + 32) = targetlist;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v55 + 32), (int32_t)targetlist, v103, v104);
        if ( SvtType__IsEnemy_37401396(svtData->fields.svtType, 0LL) )
        {
          v105 = v158;
          v52 = v159;
          Type = 10;
          goto LABEL_149;
        }
        v105 = v158;
        v52 = v159;
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
        v138 = (WeightRate_int__o *)sub_1B64314(WeightRate_int__TypeInfo, v136, v137);
        WeightRate_int____ctor(v138, (const MethodInfo_388C894 *)Method_WeightRate_int___ctor__);
        this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi__GetCommandArray(v12, svtData, v139);
        if ( !this )
          goto LABEL_164;
        v140 = this->fields.logic;
        v141 = this;
        if ( (int)v140 < 1 )
        {
LABEL_147:
          if ( !v138 )
            goto LABEL_164;
          v143 = BattleRandom__getNext(v138->fields.totalweight, 0LL);
          v144 = WeightRate_int___getData(v138, v143, (const MethodInfo_388C224 *)Method_WeightRate_int__getData__);
          Type = BattleCommand__getType(v144, 0LL);
LABEL_149:
          SvtId = BattleServantData__getSvtId(svtData, 0LL);
          DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
          v149 = (BattleCommandData_o *)sub_1B64314(BattleCommandData_TypeInfo, v147, v148);
          BattleCommandData___ctor_42850076(v149, Type, SvtId, DispLimitCount, 0, -1, 0LL);
          if ( !v149 )
            goto LABEL_164;
          v149->fields.uniqueId = svtData->fields.uniqueId;
          if ( *(_BYTE *)(v55 + 208) )
          {
            v150 = 3;
          }
          else
          {
            if ( AiAct__isAttackCritical(aiActType, 0LL) )
            {
              BattleCommandData__SetCriticalDecisionType(v149, 2, 0LL);
              aiActType = 2;
              goto LABEL_156;
            }
            v150 = 1;
          }
          BattleCommandData__SetCriticalDecisionType(v149, v150, 0LL);
LABEL_156:
          v153 = (BattleComboData_o *)sub_1B64314(BattleComboData_TypeInfo, v151, v152);
          BattleComboData___ctor(v153, 0LL);
          BattleLogicTask__setActionCommand((BattleLogicTask_o *)v55, v153, v149, v105, 0LL);
          if ( !v52 )
            goto LABEL_164;
          goto LABEL_157;
        }
        v142 = 0LL;
        while ( v142 < (unsigned int)v140 )
        {
          if ( !v138 )
            goto LABEL_164;
          WeightRate_int___setWeight(
            v138,
            10,
            *((_DWORD *)&v141->fields.logictarget + v142),
            (const MethodInfo_388BE70 *)Method_WeightRate_int__setWeight__);
          LODWORD(v140) = v141->fields.logic;
          if ( (__int64)++v142 >= (int)v140 )
            goto LABEL_147;
        }
LABEL_165:
        sub_1B6432C(this, v95);
      }
      this = (BattleLogicEnemyAi_o *)AiAct__isSkillType(aiActType, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( aiActType != 80 )
          goto LABEL_129;
        v52 = v159;
        if ( BattleLogicServantAi__TryGetOverwriteTreasureDevice(
               (BattleLogicServantAi_o *)this,
               svtData,
               v32->fields.skillVals,
               id,
               &lv,
               v107) )
        {
          BattleLogicTask__SetOverwriteTreasureDevice((BattleLogicTask_o *)v55, id[0], lv, 0LL);
          this = *(BattleLogicEnemyAi_o **)(v55 + 200);
          if ( !this )
            goto LABEL_164;
          OverwriteTreasureDeviceData__Overwrite((OverwriteTreasureDeviceData_o *)this, svtData, 0LL);
        }
        BattleLogicTask__setActor((BattleLogicTask_o *)v55, 3, svtData->fields.uniqueId, 0LL);
        *(_QWORD *)(v55 + 32) = targetlist;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v55 + 32), (int32_t)targetlist, v117, v118);
        v121 = (BattleCommandData_o *)sub_1B64314(BattleCommandData_TypeInfo, v119, v120);
        BattleCommandData___ctor(v121, 0LL);
        this = (BattleLogicEnemyAi_o *)BattleServantData__getTreasureDvcCardId(svtData, 0LL);
        if ( v121 )
        {
          v121->fields._type = (int)this;
          v121->fields.svtlimit = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
          v121->fields.uniqueId = svtData->fields.uniqueId;
          v121->fields.svtId = BattleServantData__getSvtId(svtData, 0LL);
          v121->fields.treasureDvc = BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
          v124 = (BattleComboData_o *)sub_1B64314(BattleComboData_TypeInfo, v122, v123);
          BattleComboData___ctor(v124, 0LL);
          BattleLogicTask__setActionCommand((BattleLogicTask_o *)v55, v124, v121, v158, 0LL);
          TreasureDvcId = BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
          BattleLogicTask__setActionTreasureDvc((BattleLogicTask_o *)v55, TreasureDvcId, 1, 0LL);
          if ( v159 )
          {
LABEL_157:
            items = v52->fields._items;
            v155 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v52->fields._version;
            if ( !items )
              goto LABEL_164;
            size = v52->fields._size;
            if ( (unsigned int)size < items->max_length )
            {
              v157 = &items->obj.klass + size;
              v52->fields._size = size + 1;
              v157[4] = (Il2CppClass *)v55;
              v131 = (ServantStatusBattleListViewItem_o *)(v157 + 4);
              v132 = v55;
              goto LABEL_160;
            }
            v133 = v155[4];
            v134 = v52;
            v135 = (Il2CppObject *)v55;
            goto LABEL_162;
          }
        }
LABEL_164:
        sub_1B64324(this);
      }
      this = (BattleLogicEnemyAi_o *)BattleServantData__get_BuffData(svtData, 0LL);
      if ( !this )
        goto LABEL_164;
      BattleBuffData__UpdateSkillRelationBuff((BattleBuffData_o *)this, 0LL);
      if ( v162 )
      {
        BattleLogicBaseAi__SetSkillSelectAddIndex((BattleLogicBaseAi_o *)this, v162, (AiBaseEntity_o *)aiEnt, v108);
        BattleLogicTask__setActionSkill((BattleLogicTask_o *)v55, v162, targetlist, v100, 0, 0, 0LL);
        BattleLogicTask__setActor((BattleLogicTask_o *)v55, 3, svtData->fields.uniqueId, 0LL);
        v52 = v159;
        *(_BYTE *)(v55 + 169) = 1;
        if ( v159 )
        {
          v111 = v159->fields._items;
          v112 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
          ++v159->fields._version;
          if ( v111 )
          {
            v113 = v159->fields._size;
            if ( (unsigned int)v113 >= v111->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v159,
                (Il2CppObject *)v55,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
            }
            else
            {
              v114 = &v111->obj.klass + v113;
              v159->fields._size = v113 + 1;
              v114[4] = (Il2CppClass *)v55;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v114 + 4), v55, v109, v110);
            }
            v126 = (BattleLogicTask_o *)sub_1B64314(BattleLogicTask_TypeInfo, v115, v116);
            BattleLogicTask___ctor(v126, 0LL);
            v127 = v159->fields._items;
            v128 = Method_System_Collections_Generic_List_BattleLogicTask__Add__;
            ++v159->fields._version;
            if ( v127 )
            {
              v129 = v159->fields._size;
              if ( (unsigned int)v129 < v127->max_length )
              {
                v130 = &v127->obj.klass + v129;
                v159->fields._size = v129 + 1;
                v130[4] = (Il2CppClass *)v126;
                v131 = (ServantStatusBattleListViewItem_o *)(v130 + 4);
                v132 = (int)v126;
LABEL_160:
                sub_1B6406C(v131, v132, v73, v74);
                return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                                  v52,
                                                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
              }
              v133 = v128[4];
              v134 = v159;
              v135 = (Il2CppObject *)v126;
LABEL_162:
              System_Collections_Generic_List_object___AddWithResize(
                v134,
                v135,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v133 + 192) + 112LL));
              return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                                v52,
                                                (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
            }
          }
        }
        goto LABEL_164;
      }
LABEL_129:
      v52 = v159;
      if ( !v159 )
        goto LABEL_164;
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v52,
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
  }
}


void __fastcall BattleLogicEnemyAi__resetAct(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  BattleLogicEnemyAi_o *v2; // x19
  struct System_Collections_Generic_List_BattleServantData__o *actlist; // x8
  int32_t size; // w2
  int v5; // w9
  __int64 v6; // x1
  int logic; // w8
  BattleLogicEnemyAi_o *v8; // x19
  unsigned int v9; // w20

  v2 = this;
  if ( (byte_49FEF2B & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_1B640C8(
                                     &Method_System_Collections_Generic_List_BattleServantData__Clear__,
                                     method);
    byte_49FEF2B = 1;
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
  v8 = this;
  if ( logic >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= logic )
        sub_1B6432C(this, v6);
      this = (BattleLogicEnemyAi_o *)*((_QWORD *)&v8->fields.logictarget + (int)v9);
      if ( !this )
        break;
      BattleServantData__resetActionCount((BattleServantData_o *)this, 0LL);
      logic = (int)v8->fields.logic;
      if ( (int)++v9 >= logic )
        return;
    }
LABEL_14:
    sub_1B64324(this);
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

  if ( (byte_49FEF29 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, *(_QWORD *)&ltype);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v6);
    byte_49FEF29 = 1;
  }
  BattleLogicEnemyAi__ExcludeDeadFromTempDead(this, *(const MethodInfo **)&ltype);
  TaskAIAttack = BattleLogicEnemyAi__CreateTaskAIAttack(this, v7, data, v8);
  if ( !TaskAIAttack )
    sub_1B64324(0LL);
  v11 = (System_Collections_Generic_List_object__o *)TaskAIAttack;
  if ( TaskAIAttack->fields._size >= 1 )
    BattleLogicEnemyAi__ClearTempDeadSvt(this, v10);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v11,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  BattleData_o *data; // x0
  BattleServantData_o *v12; // x21
  Il2CppObject *MasterData_object; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  struct BattleData_o *v16; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FEF30 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_AiActMaster___, *(_QWORD *)&actUniqueId);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FEF30 = 1;
  }
  info = 0LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&actUniqueId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  data = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.aiActMst, (int32_t)MasterData_object, v14, v15);
  v16 = this->fields.data;
  if ( !v16 )
    goto LABEL_16;
  data = (BattleData_o *)this->fields.aiLogic;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)AiLogic__getAction(
                           (AiLogic_o *)data,
                           v12,
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
    if ( v10 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v10,
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_16:
    sub_1B64324(data);
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
  System_Collections_Generic_List_object___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  BattleData_o *data; // x0
  BattleServantData_o *v12; // x21
  Il2CppObject *MasterData_object; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  struct BattleData_o *v16; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FEF31 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_AiActMaster___, *(_QWORD *)&actUniqueId);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_49FEF31 = 1;
  }
  info = 0LL;
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       *(_QWORD *)&actUniqueId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  data = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)data,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = (struct AiActMaster_o *)MasterData_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.aiActMst, (int32_t)MasterData_object, v14, v15);
  v16 = this->fields.data;
  if ( !v16 )
    goto LABEL_16;
  data = (BattleData_o *)this->fields.aiLogic;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)AiLogic__getAction(
                           (AiLogic_o *)data,
                           v12,
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
    if ( v10 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                        v10,
                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_16:
    sub_1B64324(data);
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
  System_Collections_Generic_List_object___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_object___ToArray(
                                    v10,
                                    (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
  struct System_Collections_Generic_List_BattleServantData__o *actlist; // x8
  ServantStatusBattleListViewItem_o *p_actlist; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_IEnumerable_TSource__o *FieldEnemyServantList; // x21
  BattleLogicEnemyAi___c_c *v23; // x8
  System_Func_object__bool__o *_9__23_0; // x22
  Il2CppObject *v25; // x23
  struct BattleLogicEnemyAi___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  BattleLogicEnemyAi___c_c *v32; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x21
  System_Func_object__int__o *_9__23_1; // x22
  Il2CppObject *v35; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  BattleLogicEnemyAi___c_c *v42; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v43; // x21
  System_Func_object__int__o *_9__23_2; // x22
  Il2CppObject *v45; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  BattleLogicEnemyAi___c_c *v52; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v53; // x21
  System_Func_object__int__o *_9__23_3; // x22
  Il2CppObject *v55; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  System_Collections_Generic_List_TSource__o *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  struct BattleData_o *data; // x8
  System_Collections_Generic_List_object__o *klass; // x20
  System_Predicate_object__o *v65; // x21
  Il2CppObject *v66; // x22
  struct BattleLogicEnemyAi___c_StaticFields *v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  System_Collections_Generic_List_T__o *All; // x0
  int32_t v71; // w2
  int32_t v72; // w3

  v3 = this;
  if ( (byte_49FEF2C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderByDescending_BattleServantData__int___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_BattleServantData___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleServantData___, v6);
    sub_1B640C8(&System_Func_BattleServantData__int__TypeInfo, v7);
    sub_1B640C8(&System_Func_BattleServantData__bool__TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData__FindAll__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v10);
    sub_1B640C8(&System_Predicate_BattleServantData__TypeInfo, v11);
    sub_1B640C8(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_0__, v12);
    sub_1B640C8(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_1__, v13);
    sub_1B640C8(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_2__, v14);
    sub_1B640C8(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_3__, v15);
    sub_1B640C8(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_4__, v16);
    this = (BattleLogicEnemyAi_o *)sub_1B640C8(&BattleLogicEnemyAi___c_TypeInfo, v17);
    byte_49FEF2C = 1;
  }
  p_actlist = (ServantStatusBattleListViewItem_o *)&v3->fields.actlist;
  actlist = v3->fields.actlist;
  if ( !actlist )
    goto LABEL_41;
  if ( actlist->fields._size <= 0 )
  {
    this = (BattleLogicEnemyAi_o *)v3->fields.data;
    if ( !this )
      goto LABEL_41;
    FieldEnemyServantList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldEnemyServantList(
                                                                                   (BattleData_o *)this,
                                                                                   1,
                                                                                   0LL);
    v23 = BattleLogicEnemyAi___c_TypeInfo;
    if ( !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v23 = BattleLogicEnemyAi___c_TypeInfo;
    }
    _9__23_0 = (System_Func_object__bool__o *)v23->static_fields->__9__23_0;
    if ( !_9__23_0 )
    {
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = BattleLogicEnemyAi___c_TypeInfo;
      }
      v25 = (Il2CppObject *)v23->static_fields->__9;
      _9__23_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleServantData__bool__TypeInfo, v20, v21);
      System_Func_object__bool____ctor(
        _9__23_0,
        v25,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_0__,
        0LL);
      static_fields = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      static_fields->__9__23_0 = (struct System_Func_BattleServantData__bool__o *)_9__23_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__23_0, (int32_t)_9__23_0, v27, v28);
    }
    v29 = System_Linq_Enumerable__Where_object_(
            FieldEnemyServantList,
            (System_Func_TSource__bool__o *)_9__23_0,
            (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
    v32 = BattleLogicEnemyAi___c_TypeInfo;
    v33 = v29;
    if ( !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v32 = BattleLogicEnemyAi___c_TypeInfo;
    }
    _9__23_1 = (System_Func_object__int__o *)v32->static_fields->__9__23_1;
    if ( !_9__23_1 )
    {
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        v32 = BattleLogicEnemyAi___c_TypeInfo;
      }
      v35 = (Il2CppObject *)v32->static_fields->__9;
      _9__23_1 = (System_Func_object__int__o *)sub_1B64314(System_Func_BattleServantData__int__TypeInfo, v30, v31);
      System_Func_object__int____ctor(
        _9__23_1,
        v35,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_1__,
        0LL);
      v36 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v36->__9__23_1 = (struct System_Func_BattleServantData__int__o *)_9__23_1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v36->__9__23_1, (int32_t)_9__23_1, v37, v38);
    }
    v39 = System_Linq_Enumerable__OrderByDescending_object__int_(
            v33,
            (System_Func_TSource__TKey__o *)_9__23_1,
            (const MethodInfo_2E63584 *)Method_System_Linq_Enumerable_OrderByDescending_BattleServantData__int___);
    v42 = BattleLogicEnemyAi___c_TypeInfo;
    v43 = v39;
    if ( !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v42 = BattleLogicEnemyAi___c_TypeInfo;
    }
    _9__23_2 = (System_Func_object__int__o *)v42->static_fields->__9__23_2;
    if ( !_9__23_2 )
    {
      if ( !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        v42 = BattleLogicEnemyAi___c_TypeInfo;
      }
      v45 = (Il2CppObject *)v42->static_fields->__9;
      _9__23_2 = (System_Func_object__int__o *)sub_1B64314(System_Func_BattleServantData__int__TypeInfo, v40, v41);
      System_Func_object__int____ctor(
        _9__23_2,
        v45,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_2__,
        0LL);
      v46 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v46->__9__23_2 = (struct System_Func_BattleServantData__int__o *)_9__23_2;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v46->__9__23_2, (int32_t)_9__23_2, v47, v48);
    }
    v49 = System_Linq_Enumerable__ThenByDescending_object__int_(
            v43,
            (System_Func_TSource__TKey__o *)_9__23_2,
            (const MethodInfo_2E70DEC *)Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
    v52 = BattleLogicEnemyAi___c_TypeInfo;
    v53 = v49;
    if ( !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v52 = BattleLogicEnemyAi___c_TypeInfo;
    }
    _9__23_3 = (System_Func_object__int__o *)v52->static_fields->__9__23_3;
    if ( !_9__23_3 )
    {
      if ( !v52->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v52);
        v52 = BattleLogicEnemyAi___c_TypeInfo;
      }
      v55 = (Il2CppObject *)v52->static_fields->__9;
      _9__23_3 = (System_Func_object__int__o *)sub_1B64314(System_Func_BattleServantData__int__TypeInfo, v50, v51);
      System_Func_object__int____ctor(
        _9__23_3,
        v55,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_3__,
        0LL);
      v56 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v56->__9__23_3 = (struct System_Func_BattleServantData__int__o *)_9__23_3;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v56->__9__23_3, (int32_t)_9__23_3, v57, v58);
    }
    v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__int_(
                                                                 v53,
                                                                 (System_Func_TSource__TKey__o *)_9__23_3,
                                                                 (const MethodInfo_2E70DEC *)Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
    v60 = System_Linq_Enumerable__ToList_object_(
            v59,
            (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_BattleServantData___);
    p_actlist->klass = (ServantStatusBattleListViewItem_c *)v60;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.actlist, (int32_t)v60, v61, v62);
  }
  data = v3->fields.data;
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
  v65 = *(System_Predicate_object__o **)&this[1].fields.dicAiActFunc->fields._freeCount;
  if ( !v65 )
  {
    if ( !LODWORD(this[1].fields.tempDeadSvtHash) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi___c_TypeInfo;
    }
    v66 = (Il2CppObject *)this[1].fields.dicAiActFunc->klass;
    v65 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_BattleServantData__TypeInfo, method, v2);
    System_Predicate_object____ctor(v65, v66, Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_4__, 0LL);
    v67 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    v67->__9__23_4 = (struct System_Predicate_BattleServantData__o *)v65;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v67->__9__23_4, (int32_t)v65, v68, v69);
  }
  if ( !klass )
LABEL_41:
    sub_1B64324(this);
  All = System_Collections_Generic_List_object___FindAll(
          klass,
          (System_Predicate_T__o *)v65,
          (const MethodInfo_34ADDE4 *)Method_System_Collections_Generic_List_BattleServantData__FindAll__);
  p_actlist->klass = (ServantStatusBattleListViewItem_c *)All;
  sub_1B6406C(p_actlist, (int32_t)All, v71, v72);
}


void __fastcall BattleLogicEnemyAi___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FEF3F & 1) == 0 )
  {
    sub_1B640C8(&BattleLogicEnemyAi___c_TypeInfo, v1);
    byte_49FEF3F = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleLogicEnemyAi___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleLogicEnemyAi___c_TypeInfo->static_fields->__9 = (struct BattleLogicEnemyAi___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)BattleLogicEnemyAi___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return BattleServantData__GetOriginalRemainingNeedActCount(x, 0LL);
}


int32_t __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__23_2(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.actPriority;
}


int32_t __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__23_3(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return BattleServantData__getDeckIndex(x, 0LL);
}


bool __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__23_4(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return BattleLogicEnemyAi__ReplaceCommandTaskBySealStatus(this->fields.__4__this, this->fields.svtData, x, v3);
}