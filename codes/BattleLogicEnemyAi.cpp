void __fastcall BattleLogicEnemyAi___ctor(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EAFCA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_BattleServantData__TypeInfo, v5, v6, v7);
    byte_42EAFCA = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this->fields.actlist = (struct System_Collections_Generic_List_BattleServantData__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.actlist,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  BattleLogicServantAi___ctor((BattleLogicServantAi_o *)this, 0LL);
}


void __fastcall BattleLogicEnemyAi__AddActCount(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  if ( !svtData || (++svtData->fields.actionCount, (data = this->fields.data) == 0LL) )
    sub_B5D69C(this, svtData);
  ++data->fields.countEnemyAttack;
}


void __fastcall BattleLogicEnemyAi__AddTempDeadSvt(
        BattleLogicEnemyAi_o *this,
        int32_t svtUniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x0

  if ( (byte_42EAFC2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, svtUniqueId, (_DWORD)method, v3);
    byte_42EAFC2 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
    System_Collections_Generic_HashSet_int___Add(
      tempDeadSvtHash,
      svtUniqueId,
      (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  WeightRate_int__o *v35; // x22
  BattleLogicEnemyAi_o *Int; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x4
  struct System_Int32_array *skillVals; // x8
  int32_t v40; // w21
  int32_t v41; // w22
  BattleSkillInfoData_o *v42; // x20
  char v43; // w22
  BattleLogicEnemyAi_o *v44; // x0
  const MethodInfo *v45; // x4
  int32_t Next; // w0
  int32_t Data; // w0
  bool v48; // zf
  int32_t v49; // w8
  _BOOL4 isUseSelfSkill; // w0
  AiLogic_AiInfo_CheckedInfo_o *v51; // x21

  v9 = skillFlg;
  if ( (byte_42EAFC6 & 1) == 0 )
  {
    sub_B5D5C4(&AiLogic_AiInfo_CheckedInfo_TypeInfo, skillFlg, (_DWORD)svtData, aiActEnt);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_WeightRate_int___ctor__, v17, v18, v19);
    sub_B5D5C4(&Method_WeightRate_int__getCount__, v20, v21, v22);
    sub_B5D5C4(&Method_WeightRate_int__getData__, v23, v24, v25);
    sub_B5D5C4(&Method_WeightRate_int__getTotalWeight__, v26, v27, v28);
    sub_B5D5C4(&Method_WeightRate_int__setWeight__, v29, v30, v31);
    sub_B5D5C4(&WeightRate_int__TypeInfo, v32, v33, v34);
    byte_42EAFC6 = 1;
  }
  v35 = (WeightRate_int__o *)sub_B5D694(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v35, (const MethodInfo_2BF9C18 *)Method_WeightRate_int___ctor__);
  if ( actType <= 13 )
  {
    switch ( actType )
    {
      case 10:
        if ( v9 )
          BattleLogicEnemyAi__SetSkillRandomWeightSameProbability(Int, v35, 10, svtData, v38);
        if ( !v35 )
          goto LABEL_46;
        if ( WeightRate_int___getCount(v35, (const MethodInfo_2BF9180 *)Method_WeightRate_int__getCount__) < 1 )
          goto LABEL_26;
        goto LABEL_31;
      case 11:
        if ( !svtData )
          goto LABEL_46;
        v43 = !v9;
        v48 = !BattleServantData__isUseSelfSkill(svtData, 0, 0LL) || !v9;
        v49 = 11;
        goto LABEL_38;
      case 12:
        if ( !svtData )
          goto LABEL_46;
        v43 = !v9;
        v48 = !BattleServantData__isUseSelfSkill(svtData, 1, 0LL) || !v9;
        v49 = 12;
LABEL_38:
        v42 = 0LL;
        if ( v48 )
          actType = 2;
        else
          actType = v49;
        goto LABEL_45;
      case 13:
        if ( !svtData )
          goto LABEL_46;
        v43 = !v9;
        isUseSelfSkill = BattleServantData__isUseSelfSkill(svtData, 2, 0LL);
        v42 = 0LL;
        if ( isUseSelfSkill && v9 )
          actType = 13;
        else
          actType = 2;
        goto LABEL_45;
      default:
        if ( actType != 1 )
          goto LABEL_33;
        Int = (BattleLogicEnemyAi_o *)AiAct__getInt(2, 0LL);
        if ( !v35 )
          goto LABEL_46;
        WeightRate_int___setWeight(
          v35,
          10,
          (int32_t)Int,
          (const MethodInfo_2BF8DE0 *)Method_WeightRate_int__setWeight__);
        if ( v9 )
          BattleLogicEnemyAi__SetSkillRandomWeightSameProbability(v44, v35, 10, svtData, v45);
LABEL_31:
        Next = BattleRandom__getNext(v35->fields.totalweight, 0LL);
        Data = WeightRate_int___getData(v35, Next, (const MethodInfo_2BF9264 *)Method_WeightRate_int__getData__);
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
      v43 = 0;
      v42 = 0LL;
      goto LABEL_45;
    }
    if ( svtData )
    {
      if ( BattleServantData__isNobleAction(svtData, 0LL)
        && TreasureDeviceConditionUtil__IsSatisfyEachCondition(svtData, this->fields.data, 0LL) )
      {
        v43 = 0;
        v42 = 0LL;
        actType = 80;
        goto LABEL_45;
      }
      goto LABEL_26;
    }
LABEL_46:
    sub_B5D69C(Int, v37);
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
    v42 = 0LL;
    v43 = 1;
    actType = 2;
    goto LABEL_45;
  }
  v40 = skillVals->m_Items[1];
  v41 = skillVals->m_Items[2];
  Int = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Int )
    goto LABEL_46;
  Int = (BattleLogicEnemyAi_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Int,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !Int )
    goto LABEL_46;
  if ( !SkillLvMaster__GetEntity((SkillLvMaster_o *)Int, v40, v41, 0LL) )
    goto LABEL_32;
  Int = (BattleLogicEnemyAi_o *)BattleSkillInfoData__MakeSkillData(20, 0LL);
  if ( !svtData )
    goto LABEL_46;
  v42 = BattleServantData__SetSkillInfo(svtData, (BattleSkillInfoData_o *)Int, 20, 0, v40, v41, -1LL, -1, 0LL);
  v43 = 0;
LABEL_45:
  v51 = (AiLogic_AiInfo_CheckedInfo_o *)sub_B5D694(AiLogic_AiInfo_CheckedInfo_TypeInfo);
  AiLogic_AiInfo_CheckedInfo___ctor(v51, actType, v43 & 1, v42, 0LL);
  return v51;
}


bool __fastcall BattleLogicEnemyAi__CheckAiCanActionFromTargets(
        BattleLogicEnemyAi_o *this,
        AiLogic_AiInfo_o *aiInfo,
        AiBaseEntity_o *aiBaseEntity,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x5
  BattleServantData_o *v22; // x23
  const MethodInfo *v23; // x3
  AiLogic_AiInfo_CheckedInfo_o *v24; // x20
  bool v25; // w26
  __int64 v26; // x10
  AiEntity_o *v27; // x19
  BattleLogicTarget_o *logictarget; // x27
  int32_t age; // w28
  int32_t uniqueId; // w22
  struct System_String_o *name; // x20
  System_Int32_array *FieldPlayerServantIDList; // x0
  AiActEntity_o *aiActEnt; // x24
  System_Int32_array *v34; // x25
  const MethodInfo *v35; // x2
  System_Int32_array *v36; // x25
  BattleLogicTarget_o *v37; // x20
  int32_t v38; // w22
  int32_t v39; // w23
  struct System_String_o *v40; // x26
  AiLogic_o *aiLogic; // x20
  __int64 v43; // x0
  AiBaseEntity_o *aiBaseEntitya; // [xsp+18h] [xbp-78h]
  AiLogic_AiInfo_CheckedInfo_o *v45; // [xsp+20h] [xbp-70h]
  AiLogic_AiInfo_o *v46; // [xsp+28h] [xbp-68h]
  System_Int32_array *v47; // [xsp+30h] [xbp-60h]
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_42EAFC9 & 1) == 0 )
  {
    sub_B5D5C4(&AiEntity_TypeInfo, (_DWORD)aiInfo, (_DWORD)aiBaseEntity, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_AiActMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__, v13, v14, v15);
    sub_B5D5C4(&int___TypeInfo, v16, v17, v18);
    byte_42EAFC9 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_AiActMaster___);
  if ( !aiBaseEntity || !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
          &entity,
          aiBaseEntity->fields.aiActId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__) )
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
  v22 = (BattleServantData_o *)Master_WarQuestSelectionMaster;
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
                                              v22,
                                              (AiActEntity_o *)entity,
                                              *(&entity->fields.id + 1),
                                              v21);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  v24 = (AiLogic_AiInfo_CheckedInfo_o *)Master_WarQuestSelectionMaster;
  v25 = BattleLogicEnemyAi__CheckHate(this, *(_DWORD *)(Master_WarQuestSelectionMaster + 16), v22, v23);
  v26 = *(&AiEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&aiBaseEntity->klass->_2.bitflags2 + 1) >= (unsigned int)v26 )
    v27 = (AiEntity_c *)aiBaseEntity->klass->_2.typeHierarchy[v26 - 1] == AiEntity_TypeInfo
        ? (AiEntity_o *)aiBaseEntity
        : 0LL;
  else
    v27 = 0LL;
  Master_WarQuestSelectionMaster = sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !entity )
    goto LABEL_42;
  if ( !v22 )
    goto LABEL_42;
  aiBaseEntitya = aiBaseEntity;
  v45 = v24;
  v46 = aiInfo;
  v47 = (System_Int32_array *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (__int64)this->fields.data;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  logictarget = this->fields.logictarget;
  age = (int32_t)entity->fields.age;
  uniqueId = v22->fields.uniqueId;
  name = entity->fields.name;
  FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(
                               (BattleData_o *)Master_WarQuestSelectionMaster,
                               0LL,
                               0LL);
  aiActEnt = (AiActEntity_o *)entity;
  v34 = FieldPlayerServantIDList;
  Master_WarQuestSelectionMaster = BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(this, v27, v35);
  if ( !logictarget )
    goto LABEL_42;
  Master_WarQuestSelectionMaster = BattleLogicTarget__getTargetAiAct(
                                     logictarget,
                                     age,
                                     uniqueId,
                                     (System_Int32_array *)name,
                                     v34,
                                     v25,
                                     0,
                                     0LL,
                                     aiActEnt,
                                     Master_WarQuestSelectionMaster & 1,
                                     0LL);
  if ( !v47 )
    goto LABEL_42;
  if ( !v47->max_length )
    goto LABEL_43;
  v47->m_Items[1] = Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !entity )
    goto LABEL_42;
  v36 = (System_Int32_array *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (__int64)this->fields.data;
  if ( !Master_WarQuestSelectionMaster
    || (v37 = this->fields.logictarget,
        v38 = (int32_t)entity->fields.age,
        v39 = v22->fields.uniqueId,
        v40 = entity->fields.name,
        Master_WarQuestSelectionMaster = (__int64)BattleData__getFieldEnemyServantIDList(
                                                    (BattleData_o *)Master_WarQuestSelectionMaster,
                                                    0,
                                                    0LL),
        !v37)
    || (Master_WarQuestSelectionMaster = BattleLogicTarget__getTargetAiAct(
                                           v37,
                                           v38,
                                           v39,
                                           (System_Int32_array *)v40,
                                           (System_Int32_array *)Master_WarQuestSelectionMaster,
                                           0,
                                           0,
                                           0LL,
                                           (AiActEntity_o *)entity,
                                           1,
                                           0LL),
        !v36) )
  {
LABEL_42:
    sub_B5D69C(Master_WarQuestSelectionMaster, v20);
  }
  if ( !v36->max_length )
  {
LABEL_43:
    v43 = sub_B5D6C8(Master_WarQuestSelectionMaster);
    sub_B5D668(v43, 0LL);
  }
  v36->m_Items[1] = Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (__int64)entity;
  if ( !entity )
    goto LABEL_42;
  aiLogic = this->fields.aiLogic;
  Master_WarQuestSelectionMaster = AiActEntity__GetNoTargetNoActionType((AiActEntity_o *)entity, 0LL);
  if ( !aiLogic )
    goto LABEL_42;
  if ( AiLogic__IsNoTargetNoActionTask(aiLogic, Master_WarQuestSelectionMaster, v47, v36, 0LL) )
    return 0;
  AiLogic_AiInfo__SetCheckedResult(v46, aiBaseEntitya, v45, 0LL);
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
    sub_B5D69C(data, *(_QWORD *)&actUniqueId);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  SkillLvMaster_o *v15; // x21
  BattleSkillInfoData_o *SkillInfoDataByAiActType; // x0
  BattleSkillInfoData_o *v17; // x19
  SkillLvEntity_o *Entity; // x21
  bool v19; // w0
  struct BattleLogic_o *logic; // x20
  System_Int32_array *funcId; // x22
  DataVals_array *v22; // x2
  BattleLogic_o *v23; // x0
  System_Int32_array *lookup; // x1
  TreasureDvcLvMaster_o *MasterData_WarQuestSelectionMaster; // x23

  if ( (byte_42EAFC8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, actType, (_DWORD)svtData, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42EAFC8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !svtData )
    goto LABEL_26;
  v15 = (SkillLvMaster_o *)Instance;
  SkillInfoDataByAiActType = BattleServantData__getSkillInfoDataByAiActType(svtData, actType, 0LL);
  v17 = SkillInfoDataByAiActType;
  if ( SkillInfoDataByAiActType )
  {
    Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))SkillInfoDataByAiActType->klass->vtable._5_get_skillId.method)(
                                  SkillInfoDataByAiActType,
                                  SkillInfoDataByAiActType->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !v15 )
      goto LABEL_26;
    Entity = SkillLvMaster__GetEntity(v15, (int32_t)Instance, v17->fields.skilllv, 0LL);
  }
  else
  {
    Entity = 0LL;
  }
  if ( AiAct__isSkillType(actType, 0LL) )
  {
    v19 = 1;
    if ( !Entity || !v17 )
    {
LABEL_21:
      if ( !Entity )
        return v19;
      goto LABEL_22;
    }
    logic = this->fields.logic;
    funcId = Entity->fields.funcId;
    Instance = (DataManager_o *)SkillLvEntity__getDataValsList(Entity, 0LL);
    if ( logic )
    {
      v22 = (DataVals_array *)Instance;
      v23 = logic;
      lookup = funcId;
LABEL_20:
      v19 = BattleLogic__checkEnemyTargetFunction(v23, lookup, v22, 0LL);
      goto LABEL_21;
    }
    goto LABEL_26;
  }
  if ( actType == 80 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_26;
    MasterData_WarQuestSelectionMaster = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    Instance,
                                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
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
        v23 = this->fields.logic;
        v22 = 0LL;
        goto LABEL_20;
      }
LABEL_26:
      sub_B5D69C(Instance, v14);
    }
  }
  v19 = 1;
  if ( !Entity )
    return v19;
LABEL_22:
  if ( v17 )
    return SkillLvEntity__IsEnableTarget(Entity, v19, 0LL);
  return v19;
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
    sub_B5D69C(data, *(_QWORD *)&actUniqueId);
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
    sub_B5D69C(0LL, skillFlg);
  if ( !BattleServantData__isUseSelfSkill(servantData, skillIndex, 0LL) )
    *actType = 2;
}


void __fastcall BattleLogicEnemyAi__ClearTempDeadSvt(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x0

  if ( (byte_42EAFC3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Clear__, (_DWORD)method, v2, v3);
    byte_42EAFC3 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
    System_Collections_Generic_HashSet_int___Clear(
      tempDeadSvtHash,
      (const MethodInfo_24FFA90 *)Method_System_Collections_Generic_HashSet_int__Clear__);
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
    sub_B5D69C(0LL, actUniqueId);
  ServantData = BattleData__getServantData(data, actUniqueId, 0LL);
  return BattleLogicEnemyAi__CreateAILogicTask(this, ServantData, 20, v6);
}


BattleLogicTask_array *__fastcall BattleLogicEnemyAi__CreateAILogicTask(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        int32_t procState,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x22
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  struct AiActMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct BattleData_o *data; // x8
  AiLogic_AiInfo_o *info; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42EAFBE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_AiActMaster___, (_DWORD)svtData, procState, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    byte_42EAFBE = 1;
  }
  info = 0LL;
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = (struct AiActMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 Instance,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = MasterData_WarQuestSelectionMaster;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.aiActMst,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
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
    if ( v22 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_11:
    sub_B5D69C(Instance, v24);
  }
  Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, DataManager_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._19_procAiAct.method)(
                                this,
                                svtData,
                                Instance,
                                0LL,
                                info,
                                0LL,
                                this->klass->vtable._20_ExistThinking.methodPtr);
  if ( !v22 )
    goto LABEL_11;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v22,
    (System_Collections_Generic_IEnumerable_T__o *)Instance,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
    sub_B5D69C(0LL, actUniqueId);
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
    sub_B5D69C(this, svtData);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v57; // x20
  __int64 Instance; // x0
  System_Collections_Generic_IEnumerable_T__o *v59; // x1
  UnityEngine_Object_o *perf; // x21
  BattleData_o *v61; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v62; // x23
  struct BattleData_o *v63; // x8
  struct AiActMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct AiActMaster_o **p_aiActMst; // x24
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  const MethodInfo *v73; // x1
  BattleServantData_o *v74; // x21
  const MethodInfo *v75; // x2
  const MethodInfo *v76; // x2
  const MethodInfo *v77; // x2
  BattleLogicTask_o *v78; // x23
  TreasureDvcLvMaster_o *v79; // x25
  char v80; // w25
  struct BattleData_o *v81; // x8
  struct BattleData_o *v82; // x8
  struct BattleData_o *v83; // x8
  BattleLogicEnemyAi_c *klass; // x9
  struct AiEntity_o *noThinkAiEnt; // x2
  struct BattleData_o *v86; // x8
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  struct BattleLogicTarget_o *logictarget; // x8
  System_Int32_array **tempDeadSvtHash; // x1
  AiEntity_o *v95; // x26
  BattleLogicTarget_o *v96; // x24
  int32_t uniqueId; // w28
  System_Int32_array *FieldPlayerServantIDList; // x0
  AiActEntity_o *v99; // x27
  System_Int32_array *v100; // x22
  const MethodInfo *v101; // x2
  int32_t TargetAiAct; // w0
  BattleLogicTarget_o *v103; // x24
  int32_t v104; // w26
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  BattleCommandData_o *v111; // x22
  BattleComboData_o *v112; // x24
  struct BattleData_o *v113; // x8
  int32_t TreasureDvcId; // w0
  __int64 v115; // x22
  __int64 v116; // x0
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  const MethodInfo *v123; // x3
  __int64 v124; // x0
  __int64 v125; // x0
  struct System_String_o *name; // [xsp+18h] [xbp-78h]
  int32_t age; // [xsp+24h] [xbp-6Ch]
  AiLogic_AiInfo_o *v128; // [xsp+28h] [xbp-68h] BYREF
  WarEntity_o *entity; // [xsp+30h] [xbp-60h] BYREF
  AiLogic_AiInfo_o *info; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_42EAFB6 & 1) == 0 )
  {
    sub_B5D5C4(&BattleComboData_TypeInfo, ltype, (_DWORD)data, method);
    sub_B5D5C4(&BattleCommandData_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_BattleLogicEnemyAi_IsNotTempDeadSvt__, v9, v10, v11);
    sub_B5D5C4(&BattleLogicTask___TypeInfo, v12, v13, v14);
    sub_B5D5C4(&BattleLogicTask_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_AiActMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Func_BattleServantData__bool___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Func_BattleServantData__bool__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__RemoveAt__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v39, v40, v41);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__get_Item__, v45, v46, v47);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v48, v49, v50);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v54, v55, v56);
    byte_42EAFB6 = 1;
  }
  entity = 0LL;
  info = 0LL;
  v128 = 0LL;
  v57 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v57,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
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
  v61 = this->fields.data;
  v62 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v62,
    (Il2CppObject *)this,
    Method_BattleLogicEnemyAi_IsNotTempDeadSvt__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleServantData__bool___ctor__);
  if ( !v61 )
    goto LABEL_67;
  Instance = BattleData__CheckAlivePlayers(v61, (System_Func_BattleServantData__bool__o *)v62, 0LL);
  if ( (Instance & 1) == 0 )
    return (System_Collections_Generic_List_BattleLogicTask__o *)v57;
  v63 = this->fields.data;
  if ( !v63 )
    goto LABEL_67;
  if ( !v63->fields.leaderDown && !v63->fields.endbattleFlg )
  {
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_67;
    MasterData_WarQuestSelectionMaster = (struct AiActMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_AiActMaster___);
    this->fields.aiActMst = MasterData_WarQuestSelectionMaster;
    p_aiActMst = &this->fields.aiActMst;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.aiActMst,
      (System_Int32_array **)MasterData_WarQuestSelectionMaster,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
    BattleLogicEnemyAi__updateActPriorityList(this, v73);
    Instance = (__int64)this->fields.actlist;
    if ( !Instance )
      goto LABEL_67;
    if ( *(int *)(Instance + 24) <= 0 )
    {
      v81 = this->fields.data;
      if ( v81 )
      {
        ++v81->fields.countEnemyAttack;
        return (System_Collections_Generic_List_BattleLogicTask__o *)v57;
      }
      goto LABEL_67;
    }
    v74 = *(BattleServantData_o **)(*(_QWORD *)(Instance + 16) + 32LL);
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)Instance,
      0,
      (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_BattleServantData__RemoveAt__);
    if ( !v74 )
      goto LABEL_67;
    if ( !BattleServantData__isAlive(v74, 0, 0LL)
      || !BattleLogicEnemyAi__IsNotTempDeadSvt(this, v74, v75)
      || !v74->fields.isEntry )
    {
      return (System_Collections_Generic_List_BattleLogicTask__o *)v57;
    }
    if ( !BattleServantData__isAction(v74, 0LL) )
    {
LABEL_66:
      BattleLogicEnemyAi__AddActCount(this, v74, v76);
      return (System_Collections_Generic_List_BattleLogicTask__o *)v57;
    }
    Instance = BattleServantData__isTDSeraled(v74, 0LL);
    if ( (Instance & 1) != 0
      || (Instance = BattleServantData__checkUseTDvc(v74, this->fields.data, 1, 0LL), (Instance & 1) == 0) )
    {
      v82 = this->fields.data;
      if ( v82 )
      {
        Instance = (__int64)this->fields.aiLogic;
        if ( Instance )
        {
          Instance = (__int64)AiLogic__getAction(
                                (AiLogic_o *)Instance,
                                v74,
                                1,
                                data->fields.turnCount,
                                v82->fields.countEnemyAttack,
                                (BattleLogicBaseAi_o *)this,
                                &info,
                                0,
                                0LL);
          v83 = this->fields.data;
          if ( Instance )
          {
            if ( !v83 )
              goto LABEL_67;
            klass = this->klass;
            noThinkAiEnt = (struct AiEntity_o *)Instance;
          }
          else
          {
            if ( !v83 )
              goto LABEL_67;
            klass = this->klass;
            noThinkAiEnt = this->fields.noThinkAiEnt;
          }
          Instance = ((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, struct AiEntity_o *, _QWORD, AiLogic_AiInfo_o *, __int64, Il2CppMethodPointer))klass->vtable._19_procAiAct.method)(
                       this,
                       v74,
                       noThinkAiEnt,
                       (unsigned int)v83->fields.countEnemyAttack,
                       info,
                       1LL,
                       klass->vtable._20_ExistThinking.methodPtr);
          if ( v57 )
          {
            v59 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
LABEL_65:
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v57,
              v59,
              (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
            goto LABEL_66;
          }
        }
      }
    }
    else
    {
      Instance = (__int64)BattleLogicEnemyAi__taskAIEnemyMaxNp(this, v74->fields.uniqueId, v77);
      if ( !Instance )
        goto LABEL_67;
      v59 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
      if ( *(_QWORD *)(Instance + 24) )
      {
LABEL_64:
        if ( v57 )
          goto LABEL_65;
        goto LABEL_67;
      }
      v78 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor(v78, 0LL);
      if ( v78 )
      {
        BattleLogicTask__setActor(v78, 3, v74->fields.uniqueId, 0LL);
        Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v79 = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
          Instance = BattleServantData__getTreasureDvcId(v74, 1, 0LL);
          if ( v79 )
          {
            Instance = (__int64)TreasureDvcLvMaster__GetEntity(v79, Instance, v74->fields.treasuredvcLevel, 0LL);
            if ( Instance )
            {
              if ( !this->fields.logic )
                goto LABEL_67;
              Instance = BattleLogic__checkEnemyTargetFunction(
                           this->fields.logic,
                           *(System_Int32_array **)(Instance + 32),
                           0LL,
                           0LL);
              v80 = Instance;
            }
            else
            {
              v80 = 1;
            }
            v86 = this->fields.data;
            if ( v86 )
            {
              Instance = (__int64)this->fields.aiLogic;
              if ( Instance )
              {
                Instance = (__int64)AiLogic__getAction(
                                      (AiLogic_o *)Instance,
                                      v74,
                                      8,
                                      data->fields.turnCount,
                                      v86->fields.countEnemyAttack,
                                      (BattleLogicBaseAi_o *)this,
                                      &v128,
                                      0,
                                      0LL);
                entity = 0LL;
                logictarget = this->fields.logictarget;
                if ( logictarget )
                {
                  tempDeadSvtHash = (System_Int32_array **)this->fields.tempDeadSvtHash;
                  v95 = (AiEntity_o *)Instance;
                  logictarget->fields.tempDeadSvtHash = (struct System_Collections_Generic_HashSet_int__o *)tempDeadSvtHash;
                  sub_B5D560(
                    (BattleServantConfConponent_o *)&logictarget->fields.tempDeadSvtHash,
                    tempDeadSvtHash,
                    v87,
                    v88,
                    v89,
                    v90,
                    v91,
                    v92);
                  if ( !v95 )
                    goto LABEL_55;
                  Instance = (__int64)*p_aiActMst;
                  if ( !*p_aiActMst )
                    goto LABEL_67;
                  Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                               &entity,
                               v95->fields.aiActId,
                               (const MethodInfo_23FAE6C *)Method_DataMasterBase_AiActMaster__AiActEntity__int__TryGetEntity__);
                  if ( (Instance & 1) != 0 )
                  {
                    if ( !entity )
                      goto LABEL_67;
                    v96 = this->fields.logictarget;
                    uniqueId = v74->fields.uniqueId;
                    age = (int32_t)entity->fields.age;
                    name = entity->fields.name;
                    FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
                    v99 = (AiActEntity_o *)entity;
                    v100 = FieldPlayerServantIDList;
                    Instance = BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(this, v95, v101);
                    if ( !v96 )
                      goto LABEL_67;
                    TargetAiAct = BattleLogicTarget__getTargetAiAct(
                                    v96,
                                    age,
                                    uniqueId,
                                    (System_Int32_array *)name,
                                    v100,
                                    v80 & 1,
                                    0,
                                    0LL,
                                    v99,
                                    Instance & 1,
                                    0LL);
                  }
                  else
                  {
LABEL_55:
                    v103 = this->fields.logictarget;
                    v104 = v74->fields.uniqueId;
                    Instance = (__int64)BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
                    if ( !v103 )
                      goto LABEL_67;
                    TargetAiAct = BattleLogicTarget__getTargetAiAct(
                                    v103,
                                    1,
                                    v104,
                                    0LL,
                                    (System_Int32_array *)Instance,
                                    v80 & 1,
                                    0,
                                    0LL,
                                    (AiActEntity_o *)entity,
                                    1,
                                    0LL);
                  }
                  BattleLogicTask__setTarget(v78, TargetAiAct, 0LL);
                  Instance = (__int64)this->fields.logictarget;
                  if ( !Instance )
                    goto LABEL_67;
                  *(_QWORD *)(Instance + 24) = 0LL;
                  sub_B5D560((BattleServantConfConponent_o *)(Instance + 24), 0LL, v105, v106, v107, v108, v109, v110);
                  v111 = (BattleCommandData_o *)sub_B5D694(BattleCommandData_TypeInfo);
                  BattleCommandData___ctor(v111, 0LL);
                  Instance = BattleServantData__getTreasureDvcCardId(v74, 0LL);
                  if ( !v111 )
                    goto LABEL_67;
                  v111->fields._type = Instance;
                  v111->fields.svtlimit = BattleServantData__getDispLimitCount(v74, 1, 0LL);
                  v111->fields.uniqueId = v74->fields.uniqueId;
                  v111->fields.svtId = BattleServantData__getSvtId(v74, 0LL);
                  v111->fields.treasureDvc = BattleServantData__getTreasureDvcId(v74, 1, 0LL);
                  v112 = (BattleComboData_o *)sub_B5D694(BattleComboData_TypeInfo);
                  BattleComboData___ctor(v112, 0LL);
                  v113 = this->fields.data;
                  if ( !v113 )
                    goto LABEL_67;
                  BattleLogicTask__setActionCommand(v78, v112, v111, v113->fields.countEnemyAttack, 0LL);
                  TreasureDvcId = BattleServantData__getTreasureDvcId(v74, 1, 0LL);
                  BattleLogicTask__setActionTreasureDvc(v78, TreasureDvcId, 1, 0LL);
                  Instance = sub_B5D5DC(BattleLogicTask___TypeInfo, 1LL);
                  if ( !Instance )
                    goto LABEL_67;
                  v115 = Instance;
                  v116 = sub_B5D684(v78, *(_QWORD *)(*(_QWORD *)Instance + 64LL));
                  if ( !v116 )
                  {
                    v124 = sub_B5D6BC(0LL);
                    sub_B5D668(v124, 0LL);
                  }
                  if ( !*(_DWORD *)(v115 + 24) )
                  {
                    v125 = sub_B5D6C8(v116);
                    sub_B5D668(v125, 0LL);
                  }
                  *(_QWORD *)(v115 + 32) = v78;
                  sub_B5D560(
                    (BattleServantConfConponent_o *)(v115 + 32),
                    (System_Int32_array **)v78,
                    v117,
                    v118,
                    v119,
                    v120,
                    v121,
                    v122);
                  Instance = (__int64)BattleLogicEnemyAi__ReplaceCommandTasksBySealStatus(
                                        this,
                                        v74,
                                        (BattleLogicTask_array *)v115,
                                        v123);
                  v59 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
                  goto LABEL_64;
                }
              }
            }
          }
        }
      }
    }
LABEL_67:
    sub_B5D69C(Instance, v59);
  }
  return (System_Collections_Generic_List_BattleLogicTask__o *)v57;
}


void __fastcall BattleLogicEnemyAi__ExcludeDeadFromTempDead(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_Collections_Generic_HashSet_int__o *tempDeadSvtHash; // x20
  Il2CppObject *data; // x19
  System_Predicate_int__o *v16; // x21

  if ( (byte_42EAFC4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleData_IsNotAliveTarget__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__RemoveWhere__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Predicate_int___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Predicate_int__TypeInfo, v11, v12, v13);
    byte_42EAFC4 = 1;
  }
  tempDeadSvtHash = this->fields.tempDeadSvtHash;
  if ( tempDeadSvtHash )
  {
    data = (Il2CppObject *)this->fields.data;
    v16 = (System_Predicate_int__o *)sub_B5D694(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      v16,
      data,
      Method_BattleData_IsNotAliveTarget__,
      (const MethodInfo_2B91B48 *)Method_System_Predicate_int___ctor__);
    System_Collections_Generic_HashSet_int___RemoveWhere(
      tempDeadSvtHash,
      (System_Predicate_T__o *)v16,
      (const MethodInfo_2500BD4 *)Method_System_Collections_Generic_HashSet_int__RemoveWhere__);
  }
}


System_Int32_array *__fastcall BattleLogicEnemyAi__GetCommandArray(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *data; // x21
  BattleData_o *StageEntity; // x0
  __int64 v8; // x1

  if ( (byte_42EAFC1 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)servantData, (_DWORD)method, v3);
    byte_42EAFC1 = 1;
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
    sub_B5D69C(StageEntity, v8);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  AiLogic_o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  AiLogic_o *aiLogic; // x0
  AiEntity_o *v21; // x20
  struct AiEntity_o **p_noThinkAiEnt; // x19
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct AiEntity_o *v29; // x19

  if ( (byte_42EAFB2 & 1) == 0 )
  {
    sub_B5D5C4(&AiEntity_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&AiLogic_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_9424/*"NOTHINK_AIACTID"*/, v9, v10, v11);
    byte_42EAFB2 = 1;
  }
  BattleLogicBaseAi__Initialize((BattleLogicBaseAi_o *)this, data, method);
  v12 = (AiLogic_o *)sub_B5D694(AiLogic_TypeInfo);
  AiLogic___ctor(v12, 0LL);
  this->fields.aiLogic = v12;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.aiLogic,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  aiLogic = this->fields.aiLogic;
  if ( !aiLogic )
    goto LABEL_6;
  AiLogic__Initialize(aiLogic, data, 0LL);
  v21 = (AiEntity_o *)sub_B5D694(AiEntity_TypeInfo);
  AiEntity___ctor(v21, 0LL);
  this->fields.noThinkAiEnt = v21;
  p_noThinkAiEnt = &this->fields.noThinkAiEnt;
  sub_B5D560((BattleServantConfConponent_o *)p_noThinkAiEnt, (System_Int32_array **)v21, v23, v24, v25, v26, v27, v28);
  v29 = *p_noThinkAiEnt;
  aiLogic = (AiLogic_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_9424/*"NOTHINK_AIACTID"*/, 0LL);
  if ( !v29 )
LABEL_6:
    sub_B5D69C(aiLogic, v19);
  v29->fields.aiActId = (int)aiLogic;
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
    sub_B5D69C(0LL, aiEnt);
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
  __int64 v3; // x3
  BattleLogicEnemyAi_o *v5; // x20

  v5 = this;
  if ( (byte_42EAFC5 & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_B5D5C4(
                                     &Method_BasicHelper_ContainsSelfNotNull_int___,
                                     (_DWORD)svtData,
                                     (_DWORD)method,
                                     v3);
    byte_42EAFC5 = 1;
  }
  if ( !svtData )
    sub_B5D69C(this, svtData);
  return !BasicHelper__ContainsSelfNotNull_int_(
            (System_Collections_Generic_HashSet_T__o *)v5->fields.tempDeadSvtHash,
            svtData->fields.uniqueId,
            (const MethodInfo_1AD6F50 *)Method_BasicHelper_ContainsSelfNotNull_int___);
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
      sub_B5D69C(IsSealedCommandTask, v8);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  __int64 v22; // x22
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v37; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0

  if ( (byte_42EAFC0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_BattleLogicTask__BattleLogicTask___,
      (_DWORD)svtData,
      (_DWORD)derivedTasks,
      method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BattleLogicTask___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Func_BattleLogicTask__BattleLogicTask___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Func_BattleLogicTask__BattleLogicTask__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_BattleLogicEnemyAi___c__DisplayClass36_0__ReplaceCommandTasksBySealStatus_b__0__, v16, v17, v18);
    sub_B5D5C4(&BattleLogicEnemyAi___c__DisplayClass36_0_TypeInfo, v19, v20, v21);
    byte_42EAFC0 = 1;
  }
  v22 = sub_B5D694(BattleLogicEnemyAi___c__DisplayClass36_0_TypeInfo);
  BattleLogicEnemyAi___c__DisplayClass36_0___ctor((BattleLogicEnemyAi___c__DisplayClass36_0_o *)v22, 0LL);
  if ( !v22 )
    sub_B5D69C(v23, v24);
  *(_QWORD *)(v22 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 16), (System_Int32_array **)this, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v22 + 24) = svtData;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 24), (System_Int32_array **)svtData, v31, v32, v33, v34, v35, v36);
  v37 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BattleLogicTask__BattleLogicTask__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v37,
    (Il2CppObject *)v22,
    Method_BattleLogicEnemyAi___c__DisplayClass36_0__ReplaceCommandTasksBySealStatus_b__0__,
    (const MethodInfo_2C3041C *)Method_System_Func_BattleLogicTask__BattleLogicTask___ctor__);
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)derivedTasks,
                                                               (System_Func_TSource__TResult__o *)v37,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_BattleLogicTask__BattleLogicTask___);
  return (BattleLogicTask_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                    v38,
                                    (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattleLogicTask___);
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
  if ( (byte_42EAFC7 & 1) == 0 )
  {
    this = (BattleLogicEnemyAi_o *)sub_B5D5C4(
                                     &Method_WeightRate_int__setWeight__,
                                     (_DWORD)weight,
                                     weightRate,
                                     servantData);
    byte_42EAFC7 = 1;
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
      (const MethodInfo_2BF8DE0 *)Method_WeightRate_int__setWeight__);
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
      (const MethodInfo_2BF8DE0 *)Method_WeightRate_int__setWeight__);
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
        (const MethodInfo_2BF8DE0 *)Method_WeightRate_int__setWeight__);
      return;
    }
LABEL_14:
    sub_B5D69C(this, weight);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.tempDeadSvtHash, 0LL, v5, v6, v7, v8, v9, v10);
  return 0LL;
}


BattleLogicTask_array *__fastcall BattleLogicEnemyAi__TaskAIAttackPrecheck(
        BattleLogicEnemyAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  __int64 v21; // x21
  bool isClearTempDeadSvtPrevAct; // w23
  CheckEnemyRelationInterruptProcess_o *v23; // x22
  __int64 v24; // x0
  __int64 v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_42EAFB4 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicTask_TypeInfo, ltype, (_DWORD)data, method);
    sub_B5D5C4(&CheckEnemyRelationInterruptProcess_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v17, v18, v19);
    byte_42EAFB4 = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  v21 = sub_B5D694(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor((BattleLogicTask_o *)v21, 0LL);
  isClearTempDeadSvtPrevAct = this->fields.isClearTempDeadSvtPrevAct;
  v23 = (CheckEnemyRelationInterruptProcess_o *)sub_B5D694(CheckEnemyRelationInterruptProcess_TypeInfo);
  CheckEnemyRelationInterruptProcess___ctor(v23, isClearTempDeadSvtPrevAct, 0LL);
  if ( !v21
    || (*(_QWORD *)(v21 + 232) = v23,
        sub_B5D560(
          (BattleServantConfConponent_o *)(v21 + 232),
          (System_Int32_array **)v23,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31),
        *(_BYTE *)(v21 + 209) = 1,
        !v20) )
  {
    sub_B5D69C(v24, v25);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v20,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v21,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
  this->fields.isClearTempDeadSvtPrevAct = 0;
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicEnemyAi__TaskAIAttackStart(
        BattleLogicEnemyAi_o *this,
        int32_t ltype,
        BattleData_o *data,
        const MethodInfo *method)
{
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_HashSet_int__o *v8; // x20
  struct System_Collections_Generic_HashSet_int__o **p_tempDeadSvtHash; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42EAFB3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, ltype, (_DWORD)data, method);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v5, v6, v7);
    byte_42EAFB3 = 1;
  }
  v8 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v8,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  this->fields.tempDeadSvtHash = v8;
  p_tempDeadSvtHash = &this->fields.tempDeadSvtHash;
  sub_B5D560((BattleServantConfConponent_o *)p_tempDeadSvtHash, (System_Int32_array **)v8, v10, v11, v12, v13, v14, v15);
  *((_BYTE *)p_tempDeadSvtHash + 8) = 0;
  return 0LL;
}


void __fastcall BattleLogicEnemyAi__addEnemyActPriorityList(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *inSvtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_List_BattleServantData__o *actlist; // x0

  if ( (byte_42EAFB9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleServantData__Insert__,
      (_DWORD)inSvtData,
      (_DWORD)method,
      v3);
    byte_42EAFB9 = 1;
  }
  actlist = this->fields.actlist;
  if ( !actlist )
    sub_B5D69C(0LL, inSvtData);
  System_Collections_Generic_List_XWeaponTrail_Element___Insert(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)actlist,
    0,
    (XWeaponTrail_Element_o *)inSvtData,
    (const MethodInfo_30581D4 *)Method_System_Collections_Generic_List_BattleServantData__Insert__);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  BattleLogicTask_o *v31; // x22
  System_Int32_array *CommandList; // x0
  __int64 v33; // x1
  int32_t Type; // w24
  WeightRate_int__o *v35; // x23
  __int64 v36; // x8
  System_Int32_array *v37; // x24
  unsigned __int64 v38; // x25
  int32_t Next; // w0
  int32_t Data; // w0
  int32_t SvtId; // w25
  int32_t DispLimitCount; // w26
  BattleCommandData_o *v43; // x23
  int32_t v44; // w1
  BattleComboData_o *v45; // x20
  __int64 v47; // x0

  if ( (byte_42EAFBF & 1) == 0 )
  {
    sub_B5D5C4(&BattleComboData_TypeInfo, (_DWORD)svtData, targetId, *(_QWORD *)&countAct);
    sub_B5D5C4(&BattleCommandData_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&BattleLogicTask_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_WeightRate_int___ctor__, v16, v17, v18);
    sub_B5D5C4(&Method_WeightRate_int__getData__, v19, v20, v21);
    sub_B5D5C4(&Method_WeightRate_int__getTotalWeight__, v22, v23, v24);
    sub_B5D5C4(&Method_WeightRate_int__setWeight__, v25, v26, v27);
    sub_B5D5C4(&WeightRate_int__TypeInfo, v28, v29, v30);
    byte_42EAFBF = 1;
  }
  v31 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v31, 0LL);
  if ( !v31 )
    goto LABEL_21;
  BattleLogicTask__setTarget(v31, targetId, 0LL);
  if ( !svtData )
    goto LABEL_21;
  BattleLogicTask__setActor(v31, 3, svtData->fields.uniqueId, 0LL);
  if ( SvtType__IsEnemy_19903824(svtData->fields.svtType, 0LL) )
  {
    Type = 10;
    goto LABEL_15;
  }
  v35 = (WeightRate_int__o *)sub_B5D694(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v35, (const MethodInfo_2BF9C18 *)Method_WeightRate_int___ctor__);
  CommandList = BattleServantData__getCommandList(svtData, 0LL);
  if ( !CommandList )
    goto LABEL_21;
  v36 = *(_QWORD *)&CommandList->max_length;
  v37 = CommandList;
  if ( (int)v36 >= 1 )
  {
    v38 = 0LL;
    while ( 1 )
    {
      if ( v38 >= (unsigned int)v36 )
      {
        v47 = sub_B5D6C8(CommandList);
        sub_B5D668(v47, 0LL);
      }
      if ( !v35 )
        break;
      WeightRate_int___setWeight(
        v35,
        10,
        v37->m_Items[v38 + 1],
        (const MethodInfo_2BF8DE0 *)Method_WeightRate_int__setWeight__);
      LODWORD(v36) = v37->max_length;
      if ( (__int64)++v38 >= (int)v36 )
        goto LABEL_13;
    }
LABEL_21:
    sub_B5D69C(CommandList, v33);
  }
LABEL_13:
  if ( !v35 )
    goto LABEL_21;
  Next = BattleRandom__getNext(v35->fields.totalweight, 0LL);
  Data = WeightRate_int___getData(v35, Next, (const MethodInfo_2BF9264 *)Method_WeightRate_int__getData__);
  Type = BattleCommand__getType(Data, 0LL);
LABEL_15:
  SvtId = BattleServantData__getSvtId(svtData, 0LL);
  DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
  v43 = (BattleCommandData_o *)sub_B5D694(BattleCommandData_TypeInfo);
  BattleCommandData___ctor_18880712(v43, Type, SvtId, DispLimitCount, 0, 0LL);
  if ( !v43 )
    goto LABEL_21;
  v43->fields.uniqueId = svtData->fields.uniqueId;
  if ( !baseTask )
    goto LABEL_21;
  if ( baseTask->fields.isNoCriticalOnAttack )
    v44 = 3;
  else
    v44 = 1;
  BattleCommandData__SetCriticalDecisionType(v43, v44, 0LL);
  v31->fields.isNoCriticalOnAttack = baseTask->fields.isNoCriticalOnAttack;
  v45 = (BattleComboData_o *)sub_B5D694(BattleComboData_TypeInfo);
  BattleComboData___ctor(v45, 0LL);
  BattleLogicTask__setActionCommand(v31, v45, v43, countAct, 0LL);
  return v31;
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
    sub_B5D69C(0LL, method);
  return BattleData__getFieldPlayerServantIDList(data, 0LL, 0LL);
}


System_Int32_array *__fastcall BattleLogicEnemyAi__get_PartySvtIds(
        BattleLogicEnemyAi_o *this,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_B5D69C(0LL, method);
  return BattleData__getFieldEnemyServantIDList(data, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleLogicTask_array *__fastcall BattleLogicEnemyAi__procAiAct(
        BattleLogicEnemyAi_o *this,
        BattleServantData_o *svtData,
        AiEntity_o *aiEnt,
        int32_t countAct,
        AiLogic_AiInfo_o *aiInfo,
        int32_t procState,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  __int64 v25; // x25
  __int64 v26; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x6
  BattleLogicTask_array *v35; // x19
  const MethodInfo *v36; // x3
  BattleLogicTask_array *v37; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v38; // x21

  if ( (byte_42EAFBA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleLogicTask___ctor__, (_DWORD)svtData, (_DWORD)aiEnt, *(_QWORD *)&countAct);
    sub_B5D5C4(&System_Action_BattleLogicTask__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleLogicTask___, v16, v17, v18);
    sub_B5D5C4(&Method_BattleLogicEnemyAi___c__DisplayClass25_0__procAiAct_b__0__, v19, v20, v21);
    sub_B5D5C4(&BattleLogicEnemyAi___c__DisplayClass25_0_TypeInfo, v22, v23, v24);
    byte_42EAFBA = 1;
  }
  v25 = sub_B5D694(BattleLogicEnemyAi___c__DisplayClass25_0_TypeInfo);
  BattleLogicEnemyAi___c__DisplayClass25_0___ctor((BattleLogicEnemyAi___c__DisplayClass25_0_o *)v25, 0LL);
  if ( !v25 )
    sub_B5D69C(v26, v27);
  *(_QWORD *)(v25 + 16) = svtData;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 16), (System_Int32_array **)svtData, v28, v29, v30, v31, v32, v33);
  v35 = BattleLogicEnemyAi__procAiActLocal(
          this,
          *(BattleServantData_o **)(v25 + 16),
          aiEnt,
          countAct,
          aiInfo,
          procState,
          v34);
  v37 = BattleLogicEnemyAi__ReplaceCommandTasksBySealStatus(this, *(BattleServantData_o **)(v25 + 16), v35, v36);
  v38 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleLogicTask__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v38,
    (Il2CppObject *)v25,
    Method_BattleLogicEnemyAi___c__DisplayClass25_0__procAiAct_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_BattleLogicTask___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    (System_Collections_Generic_IEnumerable_T__o *)v35,
    (System_Action_T__o *)v38,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleLogicTask___);
  return v37;
}


// local variable allocation has failed, the output may be wrong!
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int32_t data_high; // w20
  AiActEntity_o *v68; // x25
  BattleLogicBaseAi_o *v69; // x0
  const MethodInfo *v70; // x4
  bool v72; // w27
  WeightRate_int__o *v73; // x24
  int32_t Int; // w0
  int32_t v75; // w0
  int32_t v76; // w0
  int32_t v77; // w1
  BattleServantData_o *v78; // x0
  int *skillVals; // x8
  int32_t v80; // w20
  int32_t v81; // w24
  int32_t Next; // w0
  int32_t Data; // w0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v84; // x24
  __int64 v85; // x26
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **infoText; // x1
  bool v93; // w21
  ServantAiActArgument_o *v94; // x20
  const MethodInfo *v95; // x4
  System_String_o *v96; // x0
  System_String_o *v97; // x0
  struct BattleLogic_o *v98; // x8
  System_Int32_array **ServantGameObject; // x0
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v106; // x0
  SkillLvMaster_o *MasterData_WarQuestSelectionMaster; // x20
  BattleSkillInfoData_o *SkillInfoDataByAiActType; // x0
  BattleSkillInfoData_o *v109; // x27
  SkillLvEntity_o *Entity; // x28
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  bool v117; // w20
  struct BattleLogicTarget_o *funcId; // x21
  BattleLogic_o *logic; // x20
  BattleLogicEnemyAi_o *v120; // x2
  BattleLogic_o *v121; // x0
  struct BattleLogicTarget_o *logictarget; // x1
  TreasureDvcLvMaster_o *v123; // x20
  struct BattleLogic_o *v124; // x1
  BattleLogicTarget_o *v125; // x23
  int32_t target; // w27
  int32_t uniqueId; // w24
  System_Int32_array *targetIndividuality; // x28
  System_Int32_array *FieldPlayerServantIDList; // x21
  const MethodInfo *v130; // x2
  BattleLogicTarget_o *v131; // x23
  int32_t v132; // w24
  int32_t v133; // w27
  System_Int32_array *v134; // x28
  System_Int32_array *v135; // x20
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  int32_t Type; // w21
  const MethodInfo *v149; // x3
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v150; // x21
  BattleLogicTask_o *v151; // x19
  const MethodInfo_3056FC0 *v152; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v153; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v154; // x1
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  BattleCommandData_o *v161; // x20
  BattleComboData_o *v162; // x21
  int32_t TreasureDvcId; // w0
  WeightRate_int__o *v164; // x20
  const MethodInfo *v165; // x2
  struct BattleLogic_o *v166; // x8
  BattleLogicEnemyAi_o *v167; // x21
  unsigned __int64 v168; // x22
  int32_t v169; // w0
  int32_t v170; // w0
  int32_t SvtId; // w22
  int32_t DispLimitCount; // w23
  BattleCommandData_o *v173; // x20
  int32_t v174; // w1
  BattleComboData_o *v175; // x19
  __int64 v176; // x0
  BattleSkillInfoData_o *skillInfo; // [xsp+20h] [xbp-A0h]
  bool IsEnableTarget; // [xsp+2Ch] [xbp-94h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v179; // [xsp+30h] [xbp-90h]
  int32_t v180; // [xsp+3Ch] [xbp-84h]
  BattleLogicEnemyAi_o *targetlist; // [xsp+40h] [xbp-80h]
  int32_t v182; // [xsp+4Ch] [xbp-74h]
  BattleLogicBaseAi_o *v183; // [xsp+50h] [xbp-70h]
  int32_t lv; // [xsp+5Ch] [xbp-64h] BYREF
  int32_t id; // [xsp+60h] [xbp-60h] BYREF
  int32_t aiActType[2]; // [xsp+64h] [xbp-5Ch] BYREF
  bool noMessage; // [xsp+6Ch] [xbp-54h] BYREF

  v12 = (BattleLogicBaseAi_o *)this;
  if ( (byte_42EAFBB & 1) == 0 )
  {
    sub_B5D5C4(&BattleComboData_TypeInfo, (_DWORD)svtData, (_DWORD)aiEnt, *(_QWORD *)&countAct);
    sub_B5D5C4(&BattleCommandData_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&BattleLogicTask_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillLvMaster___, v19, v20, v21);
    sub_B5D5C4(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v22, v23, v24);
    sub_B5D5C4(&int___TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v34, v35, v36);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v37, v38, v39);
    sub_B5D5C4(&ServantAiActArgument_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43, v44, v45);
    sub_B5D5C4(&Method_WeightRate_int___ctor__, v46, v47, v48);
    sub_B5D5C4(&Method_WeightRate_int__getCount__, v49, v50, v51);
    sub_B5D5C4(&Method_WeightRate_int__getData__, v52, v53, v54);
    sub_B5D5C4(&Method_WeightRate_int__getTotalWeight__, v55, v56, v57);
    sub_B5D5C4(&Method_WeightRate_int__setWeight__, v58, v59, v60);
    sub_B5D5C4(&WeightRate_int__TypeInfo, v61, v62, v63);
    this = (BattleLogicEnemyAi_o *)sub_B5D5C4(&StringLiteral_8877/*"MOTION_"*/, v64, v65, v66);
    byte_42EAFBB = 1;
  }
  *(_QWORD *)aiActType = 0LL;
  lv = 0;
  id = 0;
  noMessage = 0;
  if ( !aiEnt )
    goto LABEL_156;
  this = (BattleLogicEnemyAi_o *)BattleLogicBaseAi__GetAiActEntity(
                                   v12,
                                   aiEnt->fields.aiActId,
                                   (const MethodInfo *)aiEnt);
  aiActType[1] = 0;
  if ( !this )
    goto LABEL_156;
  data_high = HIDWORD(this->fields.data);
  v68 = (AiActEntity_o *)this;
  aiActType[1] = data_high;
  if ( !svtData )
    goto LABEL_156;
  v69 = (BattleLogicBaseAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._18_getAiState.method)(
                                 svtData,
                                 svtData->klass->vtable._19_ExistAiThinking.methodPtr);
  if ( BattleLogicBaseAi__IsChangeThinkingOnly(v69, data_high, (AiBaseEntity_o *)aiEnt, (AiState_o *)v69, v70) )
    return v12->fields.emptyTask;
  v72 = procState != 1 || BattleServantData__canUseSkill(svtData, -1, 0LL);
  v73 = (WeightRate_int__o *)sub_B5D694(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v73, (const MethodInfo_2BF9C18 *)Method_WeightRate_int___ctor__);
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
      if ( !v72 )
        goto LABEL_58;
      if ( !BattleServantData__isUseSelfSkill(svtData, 0, 0LL) )
        goto LABEL_19;
      this = (BattleLogicEnemyAi_o *)AiAct__getInt(11, 0LL);
      if ( !v73 )
        goto LABEL_156;
      WeightRate_int___setWeight(v73, 10, (int32_t)this, (const MethodInfo_2BF8DE0 *)Method_WeightRate_int__setWeight__);
LABEL_19:
      if ( !BattleServantData__isUseSelfSkill(svtData, 1, 0LL) )
        goto LABEL_22;
      this = (BattleLogicEnemyAi_o *)AiAct__getInt(12, 0LL);
      if ( !v73 )
        goto LABEL_156;
      WeightRate_int___setWeight(v73, 10, (int32_t)this, (const MethodInfo_2BF8DE0 *)Method_WeightRate_int__setWeight__);
LABEL_22:
      this = (BattleLogicEnemyAi_o *)BattleServantData__isUseSelfSkill(svtData, 2, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleLogicEnemyAi_o *)AiAct__getInt(13, 0LL);
        if ( !v73 )
          goto LABEL_156;
        WeightRate_int___setWeight(
          v73,
          10,
          (int32_t)this,
          (const MethodInfo_2BF8DE0 *)Method_WeightRate_int__setWeight__);
      }
      else
      {
LABEL_58:
        if ( !v73 )
          goto LABEL_156;
      }
      if ( WeightRate_int___getCount(v73, (const MethodInfo_2BF9180 *)Method_WeightRate_int__getCount__) >= 1 )
        goto LABEL_60;
      goto LABEL_61;
    case 11:
      if ( !v72 )
      {
        aiActType[1] = 2;
        noMessage = 1;
      }
      v78 = svtData;
      v77 = 0;
      goto LABEL_56;
    case 12:
      if ( !v72 )
      {
        aiActType[1] = 2;
        noMessage = 1;
      }
      v77 = 1;
      v78 = svtData;
LABEL_56:
      if ( !BattleServantData__isUseSelfSkill(v78, v77, 0LL) )
        aiActType[1] = 2;
      goto LABEL_62;
    case 13:
      if ( !v72 )
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
        skillVals = (int *)v68->fields.skillVals;
        if ( !skillVals )
          goto LABEL_156;
        if ( skillVals[6] <= 1 )
        {
LABEL_132:
          aiActType[1] = 0;
          goto LABEL_62;
        }
        if ( v72 || data_high != 41 )
        {
          v80 = skillVals[8];
          v81 = skillVals[9];
          this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_156;
          this = (BattleLogicEnemyAi_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)this,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
          if ( !this )
            goto LABEL_156;
          if ( SkillLvMaster__GetEntity((SkillLvMaster_o *)this, v80, v81, 0LL) )
          {
            BattleServantData__addSkillInfo(svtData, 20, 0, v80, v81, -1LL, -1, 0LL, 0LL);
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
      if ( !v73 )
        goto LABEL_156;
      WeightRate_int___setWeight(v73, 10, (int32_t)this, (const MethodInfo_2BF8DE0 *)Method_WeightRate_int__setWeight__);
      if ( v72 )
      {
        if ( BattleServantData__isUseSelfSkill(svtData, 0, 0LL) )
        {
          Int = AiAct__getInt(11, 0LL);
          WeightRate_int___setWeight(v73, 10, Int, (const MethodInfo_2BF8DE0 *)Method_WeightRate_int__setWeight__);
        }
        if ( BattleServantData__isUseSelfSkill(svtData, 1, 0LL) )
        {
          v75 = AiAct__getInt(12, 0LL);
          WeightRate_int___setWeight(v73, 10, v75, (const MethodInfo_2BF8DE0 *)Method_WeightRate_int__setWeight__);
        }
        if ( BattleServantData__isUseSelfSkill(svtData, 2, 0LL) )
        {
          v76 = AiAct__getInt(13, 0LL);
          WeightRate_int___setWeight(v73, 10, v76, (const MethodInfo_2BF8DE0 *)Method_WeightRate_int__setWeight__);
        }
      }
LABEL_60:
      Next = BattleRandom__getNext(v73->fields.totalweight, 0LL);
      Data = WeightRate_int___getData(v73, Next, (const MethodInfo_2BF9264 *)Method_WeightRate_int__getData__);
      aiActType[1] = AiAct__getType(Data, 0LL);
LABEL_62:
      v84 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v84,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
      v85 = sub_B5D694(BattleLogicTask_TypeInfo);
      BattleLogicTask___ctor((BattleLogicTask_o *)v85, 0LL);
      if ( noMessage )
      {
        if ( !v85 )
          goto LABEL_156;
      }
      else
      {
        if ( !v85 )
          goto LABEL_156;
        infoText = (System_Int32_array **)aiEnt->fields.infoText;
        *(_QWORD *)(v85 + 152) = infoText;
        sub_B5D560((BattleServantConfConponent_o *)(v85 + 152), infoText, v86, v87, v88, v89, v90, v91);
      }
      BattleLogicTask__setActor((BattleLogicTask_o *)v85, 3, svtData->fields.uniqueId, 0LL);
      if ( AiBaseEntity__IsForcedActionSpeedAnyTime((AiBaseEntity_o *)aiEnt, 0LL) )
        *(_BYTE *)(v85 + 160) = 1;
      v182 = procState;
      *(_BYTE *)(v85 + 208) = AiActEntity__IsNoCriticalOnAttack(v68, 0LL);
      this = (BattleLogicEnemyAi_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))svtData->klass->vtable._18_getAiState.method)(
                                       svtData,
                                       svtData->klass->vtable._19_ExistAiThinking.methodPtr);
      if ( !this )
        goto LABEL_156;
      AiState__setBeforeAction((AiState_o *)this, aiActType[1], aiEnt->fields.aiActId, 0LL);
      v93 = noMessage;
      v94 = (ServantAiActArgument_o *)sub_B5D694(ServantAiActArgument_TypeInfo);
      ServantAiActArgument___ctor(v94, v68, (AiBaseEntity_o *)aiEnt, svtData, v93, 0LL);
      if ( aiActType[1] != 71 )
      {
        this = (BattleLogicEnemyAi_o *)BattleLogicBaseAi__SetNoTargetAiActTask(
                                         v12,
                                         (System_Collections_Generic_List_BattleLogicTask__o *)v84,
                                         aiActType[1],
                                         (BaseAiActArgument_o *)v94,
                                         v95);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
LABEL_77:
          if ( !v84 )
            goto LABEL_156;
          goto LABEL_78;
        }
        this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_156;
        MasterData_WarQuestSelectionMaster = (SkillLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)this,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillLvMaster___);
        SkillInfoDataByAiActType = BattleServantData__getSkillInfoDataByAiActType(svtData, aiActType[1], 0LL);
        v109 = SkillInfoDataByAiActType;
        v183 = v12;
        v180 = countAct;
        if ( SkillInfoDataByAiActType )
        {
          this = (BattleLogicEnemyAi_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, Il2CppMethodPointer))SkillInfoDataByAiActType->klass->vtable._5_get_skillId.method)(
                                           SkillInfoDataByAiActType,
                                           SkillInfoDataByAiActType->klass->vtable._6_get_IndividualityArray.methodPtr);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_156;
          Entity = SkillLvMaster__GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     (int32_t)this,
                     v109->fields.skilllv,
                     0LL);
        }
        else
        {
          Entity = 0LL;
        }
        if ( AiAct__isSkillType(aiActType[1], 0LL) )
        {
          v117 = 1;
          if ( !Entity || !v109 )
            goto LABEL_97;
          funcId = (struct BattleLogicTarget_o *)Entity->fields.funcId;
          logic = v183->fields.logic;
          this = (BattleLogicEnemyAi_o *)SkillLvEntity__getDataValsList(Entity, 0LL);
          if ( !logic )
            goto LABEL_156;
          v120 = this;
          v121 = logic;
          logictarget = funcId;
        }
        else
        {
          if ( aiActType[1] != 80 )
            goto LABEL_96;
          this = (BattleLogicEnemyAi_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !this )
            goto LABEL_156;
          v123 = (TreasureDvcLvMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)this,
                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
          this = (BattleLogicEnemyAi_o *)BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
          if ( !v123 )
            goto LABEL_156;
          this = (BattleLogicEnemyAi_o *)TreasureDvcLvMaster__GetEntity(
                                           v123,
                                           (int32_t)this,
                                           svtData->fields.treasuredvcLevel,
                                           0LL);
          if ( !this )
          {
LABEL_96:
            v117 = 1;
            goto LABEL_97;
          }
          if ( !v183->fields.logic )
            goto LABEL_156;
          logictarget = this->fields.logictarget;
          v121 = v183->fields.logic;
          v120 = 0LL;
        }
        v117 = BattleLogic__checkEnemyTargetFunction(
                 v121,
                 (System_Int32_array *)logictarget,
                 (DataVals_array *)v120,
                 0LL);
LABEL_97:
        this = (BattleLogicEnemyAi_o *)v183->fields.logictarget;
        if ( this )
        {
          v124 = v183[1].fields.logic;
          this->fields.logic = v124;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.logic,
            (System_Int32_array **)v124,
            v111,
            v112,
            v113,
            v114,
            v115,
            v116);
          if ( Entity && v109 )
            IsEnableTarget = SkillLvEntity__IsEnableTarget(Entity, v117, 0LL);
          else
            IsEnableTarget = v117;
          skillInfo = v109;
          v179 = v84;
          this = (BattleLogicEnemyAi_o *)sub_B5D5DC(int___TypeInfo, 1LL);
          targetlist = this;
          if ( v183->fields.data )
          {
            v125 = v183->fields.logictarget;
            target = v68->fields.target;
            uniqueId = svtData->fields.uniqueId;
            targetIndividuality = v68->fields.targetIndividuality;
            FieldPlayerServantIDList = BattleData__getFieldPlayerServantIDList(v183->fields.data, 0LL, 0LL);
            this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi__IsDeadToEnableUpHateEnemyAI(
                                             (BattleLogicEnemyAi_o *)v183,
                                             aiEnt,
                                             v130);
            if ( v125 )
            {
              this = (BattleLogicEnemyAi_o *)BattleLogicTarget__getTargetAiAct(
                                               v125,
                                               target,
                                               uniqueId,
                                               targetIndividuality,
                                               FieldPlayerServantIDList,
                                               IsEnableTarget,
                                               0,
                                               0LL,
                                               v68,
                                               (unsigned __int8)this & 1,
                                               0LL);
              if ( targetlist )
              {
                if ( !LODWORD(targetlist->fields.logic) )
                  goto LABEL_157;
                LODWORD(targetlist->fields.logictarget) = (_DWORD)this;
                this = (BattleLogicEnemyAi_o *)sub_B5D5DC(int___TypeInfo, 1LL);
                if ( v183->fields.data )
                {
                  v131 = v183->fields.logictarget;
                  v132 = v68->fields.target;
                  v133 = svtData->fields.uniqueId;
                  v134 = v68->fields.targetIndividuality;
                  v135 = (System_Int32_array *)this;
                  this = (BattleLogicEnemyAi_o *)BattleData__getFieldEnemyServantIDList(v183->fields.data, 0, 0LL);
                  if ( v131 )
                  {
                    this = (BattleLogicEnemyAi_o *)BattleLogicTarget__getTargetAiAct(
                                                     v131,
                                                     v132,
                                                     v133,
                                                     v134,
                                                     (System_Int32_array *)this,
                                                     0,
                                                     0,
                                                     0LL,
                                                     v68,
                                                     1,
                                                     0LL);
                    if ( v135 )
                    {
                      if ( !v135->max_length )
                        goto LABEL_157;
                      v135->m_Items[1] = (int)this;
                      this = (BattleLogicEnemyAi_o *)v183->fields.logictarget;
                      if ( this )
                      {
                        this->fields.logic = 0LL;
                        sub_B5D560(
                          (BattleServantConfConponent_o *)&this->fields.logic,
                          0LL,
                          v136,
                          v137,
                          v138,
                          v139,
                          v140,
                          v141);
                        this = (BattleLogicEnemyAi_o *)v183->fields.logic;
                        if ( this )
                        {
                          *(_BYTE *)(v85 + 168) = (v182 == 1) & (BattleLogic__GetLogicType((BattleLogic_o *)this, 0LL) == 42);
                          if ( AiAct__isAttackType(aiActType[1], 0LL) )
                          {
                            *(_QWORD *)(v85 + 32) = targetlist;
                            sub_B5D560(
                              (BattleServantConfConponent_o *)(v85 + 32),
                              (System_Int32_array **)targetlist,
                              v142,
                              v143,
                              v144,
                              v145,
                              v146,
                              v147);
                            if ( SvtType__IsEnemy_19903824(svtData->fields.svtType, 0LL) )
                            {
                              Type = 10;
                              goto LABEL_143;
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
                            v164 = (WeightRate_int__o *)sub_B5D694(WeightRate_int__TypeInfo);
                            WeightRate_int____ctor(v164, (const MethodInfo_2BF9C18 *)Method_WeightRate_int___ctor__);
                            this = (BattleLogicEnemyAi_o *)BattleLogicEnemyAi__GetCommandArray(
                                                             (BattleLogicEnemyAi_o *)v183,
                                                             svtData,
                                                             v165);
                            if ( !this )
                              goto LABEL_156;
                            v166 = this->fields.logic;
                            v167 = this;
                            if ( (int)v166 < 1 )
                            {
LABEL_141:
                              if ( !v164 )
                                goto LABEL_156;
                              v169 = BattleRandom__getNext(v164->fields.totalweight, 0LL);
                              v170 = WeightRate_int___getData(
                                       v164,
                                       v169,
                                       (const MethodInfo_2BF9264 *)Method_WeightRate_int__getData__);
                              Type = BattleCommand__getType(v170, 0LL);
LABEL_143:
                              SvtId = BattleServantData__getSvtId(svtData, 0LL);
                              DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
                              v173 = (BattleCommandData_o *)sub_B5D694(BattleCommandData_TypeInfo);
                              BattleCommandData___ctor_18880712(v173, Type, SvtId, DispLimitCount, 0, 0LL);
                              if ( !v173 )
                                goto LABEL_156;
                              v173->fields.uniqueId = svtData->fields.uniqueId;
                              if ( *(_BYTE *)(v85 + 208) )
                              {
                                v174 = 3;
                              }
                              else
                              {
                                if ( AiAct__isAttackCritical(aiActType[1], 0LL) )
                                {
                                  BattleCommandData__SetCriticalDecisionType(v173, 2, 0LL);
                                  aiActType[1] = 2;
LABEL_150:
                                  v175 = (BattleComboData_o *)sub_B5D694(BattleComboData_TypeInfo);
                                  BattleComboData___ctor(v175, 0LL);
                                  BattleLogicTask__setActionCommand((BattleLogicTask_o *)v85, v175, v173, v180, 0LL);
                                  goto LABEL_151;
                                }
                                v174 = 1;
                              }
                              BattleCommandData__SetCriticalDecisionType(v173, v174, 0LL);
                              goto LABEL_150;
                            }
                            v168 = 0LL;
                            while ( v168 < (unsigned int)v166 )
                            {
                              if ( !v164 )
                                goto LABEL_156;
                              WeightRate_int___setWeight(
                                v164,
                                10,
                                *((_DWORD *)&v167->fields.logictarget + v168),
                                (const MethodInfo_2BF8DE0 *)Method_WeightRate_int__setWeight__);
                              LODWORD(v166) = v167->fields.logic;
                              if ( (__int64)++v168 >= (int)v166 )
                                goto LABEL_141;
                            }
LABEL_157:
                            v176 = sub_B5D6C8(this);
                            sub_B5D668(v176, 0LL);
                          }
                          this = (BattleLogicEnemyAi_o *)AiAct__isSkillType(aiActType[1], 0LL);
                          if ( ((unsigned __int8)this & 1) != 0 )
                          {
                            this = (BattleLogicEnemyAi_o *)BattleServantData__get_BuffData(svtData, 0LL);
                            if ( !this )
                              goto LABEL_156;
                            BattleBuffData__UpdateSkillRelationBuff((BattleBuffData_o *)this, 0LL);
                            if ( skillInfo )
                            {
                              BattleLogicBaseAi__SetSkillSelectAddIndex(
                                (BattleLogicBaseAi_o *)this,
                                skillInfo,
                                (AiBaseEntity_o *)aiEnt,
                                v149);
                              BattleLogicTask__setActionSkill(
                                (BattleLogicTask_o *)v85,
                                skillInfo,
                                (System_Int32_array *)targetlist,
                                v135,
                                0,
                                0,
                                0LL);
                              BattleLogicTask__setActor((BattleLogicTask_o *)v85, 3, svtData->fields.uniqueId, 0LL);
                              v150 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v179;
                              *(_BYTE *)(v85 + 169) = 1;
                              if ( !v179 )
                                goto LABEL_156;
                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                v179,
                                (EventMissionProgressRequest_Argument_ProgressData_o *)v85,
                                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
                              v151 = (BattleLogicTask_o *)sub_B5D694(BattleLogicTask_TypeInfo);
                              BattleLogicTask___ctor(v151, 0LL);
                              v152 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                              v153 = v179;
                              v154 = (EventMissionProgressRequest_Argument_ProgressData_o *)v151;
LABEL_153:
                              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                v153,
                                v154,
                                v152);
                              goto LABEL_154;
                            }
LABEL_128:
                            v150 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v179;
                            if ( !v179 )
                              goto LABEL_156;
LABEL_154:
                            v106 = v150;
                            return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                              v106,
                                                              (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
                          }
                          if ( aiActType[1] != 80 )
                            goto LABEL_128;
                          if ( BattleLogicServantAi__TryGetOverwriteTreasureDevice(
                                 (BattleLogicServantAi_o *)v183,
                                 svtData,
                                 v68->fields.skillVals,
                                 &id,
                                 &lv,
                                 0LL) )
                          {
                            BattleLogicTask__SetOverwriteTreasureDevice((BattleLogicTask_o *)v85, id, lv, 0LL);
                            this = *(BattleLogicEnemyAi_o **)(v85 + 200);
                            if ( !this )
                              goto LABEL_156;
                            OverwriteTreasureDeviceData__Overwrite((OverwriteTreasureDeviceData_o *)this, svtData, 0LL);
                          }
                          BattleLogicTask__setActor((BattleLogicTask_o *)v85, 3, svtData->fields.uniqueId, 0LL);
                          *(_QWORD *)(v85 + 32) = targetlist;
                          sub_B5D560(
                            (BattleServantConfConponent_o *)(v85 + 32),
                            (System_Int32_array **)targetlist,
                            v155,
                            v156,
                            v157,
                            v158,
                            v159,
                            v160);
                          v161 = (BattleCommandData_o *)sub_B5D694(BattleCommandData_TypeInfo);
                          BattleCommandData___ctor(v161, 0LL);
                          this = (BattleLogicEnemyAi_o *)BattleServantData__getTreasureDvcCardId(svtData, 0LL);
                          if ( v161 )
                          {
                            v161->fields._type = (int)this;
                            v161->fields.svtlimit = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
                            v161->fields.uniqueId = svtData->fields.uniqueId;
                            v161->fields.svtId = BattleServantData__getSvtId(svtData, 0LL);
                            v161->fields.treasureDvc = BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
                            v162 = (BattleComboData_o *)sub_B5D694(BattleComboData_TypeInfo);
                            BattleComboData___ctor(v162, 0LL);
                            BattleLogicTask__setActionCommand((BattleLogicTask_o *)v85, v162, v161, v180, 0LL);
                            TreasureDvcId = BattleServantData__getTreasureDvcId(svtData, 1, 0LL);
                            BattleLogicTask__setActionTreasureDvc((BattleLogicTask_o *)v85, TreasureDvcId, 1, 0LL);
LABEL_151:
                            v150 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v179;
                            if ( !v179 )
                              goto LABEL_156;
                            v153 = v179;
                            v154 = (EventMissionProgressRequest_Argument_ProgressData_o *)v85;
                            v152 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__;
                            goto LABEL_153;
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
LABEL_156:
        sub_B5D69C(this, svtData);
      }
      this = (BattleLogicEnemyAi_o *)AiBaseEntity__getActionValue((AiBaseEntity_o *)aiEnt, 0LL);
      aiActType[0] = (int)this;
      if ( (int)this < 1 )
        goto LABEL_77;
      v96 = System_Int32__ToString((int32_t)aiActType, 0LL);
      v97 = System_String__Concat_44577788((System_String_o *)StringLiteral_8877/*"MOTION_"*/, v96, 0LL);
      BattleLogicTask__setPlayMoiton((BattleLogicTask_o *)v85, v97, 0LL);
      v98 = v12->fields.logic;
      if ( !v98 )
        goto LABEL_156;
      this = (BattleLogicEnemyAi_o *)v98->fields.perf;
      if ( !this )
        goto LABEL_156;
      ServantGameObject = (System_Int32_array **)BattlePerformance__getServantGameObject(
                                                   (BattlePerformance_o *)this,
                                                   svtData->fields.uniqueId,
                                                   0LL);
      *(_QWORD *)(v85 + 112) = ServantGameObject;
      sub_B5D560((BattleServantConfConponent_o *)(v85 + 112), ServantGameObject, v100, v101, v102, v103, v104, v105);
      BattleLogicTask__setActor((BattleLogicTask_o *)v85, 3, svtData->fields.uniqueId, 0LL);
      if ( !v84 )
        goto LABEL_156;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v84,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v85,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleLogicTask__Add__);
LABEL_78:
      v106 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v84;
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        v106,
                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
  }
}


void __fastcall BattleLogicEnemyAi__resetAct(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_List_XWeaponTrail_Element__o *actlist; // x0
  struct BattleData_o *data; // x8
  int size; // w8
  System_Collections_Generic_List_XWeaponTrail_Element__o *v8; // x19
  unsigned int v9; // w20
  __int64 v10; // x0

  if ( (byte_42EAFB7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__Clear__, (_DWORD)method, v2, v3);
    byte_42EAFB7 = 1;
  }
  actlist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.actlist;
  if ( !actlist )
    goto LABEL_13;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    actlist,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_BattleServantData__Clear__);
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
  v8 = actlist;
  if ( size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= size )
      {
        v10 = sub_B5D6C8(actlist);
        sub_B5D668(v10, 0LL);
      }
      actlist = (System_Collections_Generic_List_XWeaponTrail_Element__o *)*((_QWORD *)&v8->fields._syncRoot + (int)v9);
      if ( !actlist )
        break;
      BattleServantData__resetActionCount((BattleServantData_o *)actlist, 0LL);
      size = v8->fields._size;
      if ( (int)++v9 >= size )
        return;
    }
LABEL_13:
    sub_B5D69C(actlist, method);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t v9; // w1
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_BattleLogicTask__o *TaskAIAttack; // x0
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v13; // x20

  if ( (byte_42EAFB5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, ltype, (_DWORD)data, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v6, v7, v8);
    byte_42EAFB5 = 1;
  }
  BattleLogicEnemyAi__ExcludeDeadFromTempDead(this, *(const MethodInfo **)&ltype);
  TaskAIAttack = BattleLogicEnemyAi__CreateTaskAIAttack(this, v9, data, v10);
  if ( !TaskAIAttack )
    sub_B5D69C(0LL, v12);
  v13 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)TaskAIAttack;
  if ( TaskAIAttack->fields._size >= 1 )
    BattleLogicEnemyAi__ClearTempDeadSvt(this, v12);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    v13,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicEnemyAi__taskAIDead(
        BattleLogicEnemyAi_o *this,
        int32_t actUniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  __int64 v22; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v24; // x21
  struct AiActMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct BattleData_o *v32; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EAFBC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_AiActMaster___, actUniqueId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42EAFBC = 1;
  }
  info = 0LL;
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__getServantData(data, actUniqueId, 0LL);
  if ( !data )
    goto LABEL_16;
  v24 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
    goto LABEL_14;
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__checkAlivePlayers(data, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_14;
  data = (BattleData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (struct AiActMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)data,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = MasterData_WarQuestSelectionMaster;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.aiActMst,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = this->fields.data;
  if ( !v32 )
    goto LABEL_16;
  data = (BattleData_o *)this->fields.aiLogic;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)AiLogic__getAction(
                           (AiLogic_o *)data,
                           v24,
                           2,
                           v32->fields.turnCount,
                           0,
                           (BattleLogicBaseAi_o *)this,
                           &info,
                           0,
                           0LL);
  if ( !data )
  {
LABEL_14:
    if ( v21 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v21,
                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_16:
    sub_B5D69C(data, v22);
  }
  data = (BattleData_o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, BattleData_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._19_procAiAct.method)(
                           this,
                           v24,
                           data,
                           0LL,
                           info,
                           0LL,
                           this->klass->vtable._20_ExistThinking.methodPtr);
  if ( !v21 )
    goto LABEL_16;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v21,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v21,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


BattleLogicTask_array *__fastcall BattleLogicEnemyAi__taskAIEnemyMaxNp(
        BattleLogicEnemyAi_o *this,
        int32_t actUniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  __int64 v22; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v24; // x21
  struct AiActMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct BattleData_o *v32; // x8
  AiLogic_AiInfo_o *info; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EAFBD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_AiActMaster___, actUniqueId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__AddRange__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    byte_42EAFBD = 1;
  }
  info = 0LL;
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__getServantData(data, actUniqueId, 0LL);
  if ( !data )
    goto LABEL_16;
  v24 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleServantData__isAlive((BattleServantData_o *)data, 0, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_14;
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__checkAlivePlayers(data, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_14;
  data = (BattleData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !data )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (struct AiActMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)data,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_AiActMaster___);
  this->fields.aiActMst = MasterData_WarQuestSelectionMaster;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.aiActMst,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = this->fields.data;
  if ( !v32 )
    goto LABEL_16;
  data = (BattleData_o *)this->fields.aiLogic;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)AiLogic__getAction(
                           (AiLogic_o *)data,
                           v24,
                           7,
                           v32->fields.turnCount,
                           0,
                           (BattleLogicBaseAi_o *)this,
                           &info,
                           0,
                           0LL);
  if ( !data )
  {
LABEL_14:
    if ( v21 )
      return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v21,
                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
LABEL_16:
    sub_B5D69C(data, v22);
  }
  data = (BattleData_o *)((__int64 (__fastcall *)(BattleLogicEnemyAi_o *, BattleServantData_o *, BattleData_o *, _QWORD, AiLogic_AiInfo_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._19_procAiAct.method)(
                           this,
                           v24,
                           data,
                           0LL,
                           info,
                           0LL,
                           this->klass->vtable._20_ExistThinking.methodPtr);
  if ( !v21 )
    goto LABEL_16;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v21,
    (System_Collections_Generic_IEnumerable_T__o *)data,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_BattleLogicTask__AddRange__);
  return (BattleLogicTask_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v21,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
}


void __fastcall BattleLogicEnemyAi__updateActPriorityList(BattleLogicEnemyAi_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleLogicEnemyAi_o *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  struct System_Collections_Generic_List_BattleServantData__o *actlist; // x8
  BattleServantConfConponent_o *p_actlist; // x19
  System_Collections_Generic_IEnumerable_TSource__o *FieldEnemyServantList; // x21
  BattleLogicEnemyAi___c_c *v59; // x8
  struct BattleLogicEnemyAi___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__23_0; // x22
  Il2CppObject *v62; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  BattleLogicEnemyAi___c_c *v71; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x21
  struct BattleLogicEnemyAi___c_StaticFields *v73; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__23_1; // x22
  Il2CppObject *v75; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v83; // x0
  BattleLogicEnemyAi___c_c *v84; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v85; // x21
  struct BattleLogicEnemyAi___c_StaticFields *v86; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__23_2; // x22
  Il2CppObject *v88; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v96; // x0
  BattleLogicEnemyAi___c_c *v97; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v98; // x21
  struct BattleLogicEnemyAi___c_StaticFields *v99; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__23_3; // x22
  Il2CppObject *v101; // x23
  struct BattleLogicEnemyAi___c_StaticFields *v102; // x0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v109; // x0
  System_Int32_array **v110; // x0
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  struct BattleData_o *data; // x8
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *klass; // x20
  void *dicAiActFunc; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v120; // x21
  Il2CppObject *v121; // x22
  struct BattleLogicEnemyAi___c_StaticFields *v122; // x0
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  System_Int32_array **All; // x0
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7

  v4 = this;
  if ( (byte_42EAFB8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderByDescending_BattleServantData__int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_BattleServantData___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleServantData___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_BattleServantData__bool___ctor__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Func_BattleServantData__int___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Func_BattleServantData__bool__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Func_BattleServantData__int__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__FindAll__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Predicate_BattleServantData___ctor__, v32, v33, v34);
    sub_B5D5C4(&System_Predicate_BattleServantData__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_0__, v38, v39, v40);
    sub_B5D5C4(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_1__, v41, v42, v43);
    sub_B5D5C4(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_2__, v44, v45, v46);
    sub_B5D5C4(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_3__, v47, v48, v49);
    sub_B5D5C4(&Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_4__, v50, v51, v52);
    this = (BattleLogicEnemyAi_o *)sub_B5D5C4(&BattleLogicEnemyAi___c_TypeInfo, v53, v54, v55);
    byte_42EAFB8 = 1;
  }
  p_actlist = (BattleServantConfConponent_o *)&v4->fields.actlist;
  actlist = v4->fields.actlist;
  if ( !actlist )
    goto LABEL_51;
  if ( actlist->fields._size <= 0 )
  {
    this = (BattleLogicEnemyAi_o *)v4->fields.data;
    if ( !this )
      goto LABEL_51;
    FieldEnemyServantList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleData__getFieldEnemyServantList(
                                                                                   (BattleData_o *)this,
                                                                                   1,
                                                                                   0LL);
    v59 = BattleLogicEnemyAi___c_TypeInfo;
    if ( (BYTE3(BattleLogicEnemyAi___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v59 = BattleLogicEnemyAi___c_TypeInfo;
    }
    static_fields = v59->static_fields;
    _9__23_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__23_0;
    if ( !_9__23_0 )
    {
      if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v59);
        static_fields = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      }
      v62 = (Il2CppObject *)static_fields->__9;
      _9__23_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleServantData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__23_0,
        v62,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleServantData__bool___ctor__);
      v63 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v63->__9__23_0 = (struct System_Func_BattleServantData__bool__o *)_9__23_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v63->__9__23_0,
        (System_Int32_array **)_9__23_0,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69);
    }
    v70 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            FieldEnemyServantList,
            (System_Func_TSource__bool__o *)_9__23_0,
            (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
    v71 = BattleLogicEnemyAi___c_TypeInfo;
    v72 = v70;
    if ( (BYTE3(BattleLogicEnemyAi___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v71 = BattleLogicEnemyAi___c_TypeInfo;
    }
    v73 = v71->static_fields;
    _9__23_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v73->__9__23_1;
    if ( !_9__23_1 )
    {
      if ( (BYTE3(v71->vtable._0_Equals.methodPtr) & 4) != 0 && !v71->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v71);
        v73 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      }
      v75 = (Il2CppObject *)v73->__9;
      _9__23_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleServantData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__23_1,
        v75,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_1__,
        (const MethodInfo_2C2F87C *)Method_System_Func_BattleServantData__int___ctor__);
      v76 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v76->__9__23_1 = (struct System_Func_BattleServantData__int__o *)_9__23_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v76->__9__23_1,
        (System_Int32_array **)_9__23_1,
        v77,
        v78,
        v79,
        v80,
        v81,
        v82);
    }
    v83 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
            v72,
            (System_Func_TSource__TKey__o *)_9__23_1,
            (const MethodInfo_1CAF5B4 *)Method_System_Linq_Enumerable_OrderByDescending_BattleServantData__int___);
    v84 = BattleLogicEnemyAi___c_TypeInfo;
    v85 = v83;
    if ( (BYTE3(BattleLogicEnemyAi___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v84 = BattleLogicEnemyAi___c_TypeInfo;
    }
    v86 = v84->static_fields;
    _9__23_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v86->__9__23_2;
    if ( !_9__23_2 )
    {
      if ( (BYTE3(v84->vtable._0_Equals.methodPtr) & 4) != 0 && !v84->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v84);
        v86 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      }
      v88 = (Il2CppObject *)v86->__9;
      _9__23_2 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleServantData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__23_2,
        v88,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_2__,
        (const MethodInfo_2C2F87C *)Method_System_Func_BattleServantData__int___ctor__);
      v89 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v89->__9__23_2 = (struct System_Func_BattleServantData__int__o *)_9__23_2;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v89->__9__23_2,
        (System_Int32_array **)_9__23_2,
        v90,
        v91,
        v92,
        v93,
        v94,
        v95);
    }
    v96 = System_Linq_Enumerable__ThenByDescending_WarBoardManager_TaskList__int_(
            v85,
            (System_Func_TSource__TKey__o *)_9__23_2,
            (const MethodInfo_1CB72CC *)Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
    v97 = BattleLogicEnemyAi___c_TypeInfo;
    v98 = v96;
    if ( (BYTE3(BattleLogicEnemyAi___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleLogicEnemyAi___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicEnemyAi___c_TypeInfo);
      v97 = BattleLogicEnemyAi___c_TypeInfo;
    }
    v99 = v97->static_fields;
    _9__23_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v99->__9__23_3;
    if ( !_9__23_3 )
    {
      if ( (BYTE3(v97->vtable._0_Equals.methodPtr) & 4) != 0 && !v97->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v97);
        v99 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      }
      v101 = (Il2CppObject *)v99->__9;
      _9__23_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BattleServantData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__23_3,
        v101,
        Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_3__,
        (const MethodInfo_2C2F87C *)Method_System_Func_BattleServantData__int___ctor__);
      v102 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
      v102->__9__23_3 = (struct System_Func_BattleServantData__int__o *)_9__23_3;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v102->__9__23_3,
        (System_Int32_array **)_9__23_3,
        v103,
        v104,
        v105,
        v106,
        v107,
        v108);
    }
    v109 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_WarBoardManager_TaskList__int_(
                                                                  v98,
                                                                  (System_Func_TSource__TKey__o *)_9__23_3,
                                                                  (const MethodInfo_1CB72CC *)Method_System_Linq_Enumerable_ThenByDescending_BattleServantData__int___);
    v110 = (System_Int32_array **)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                    v109,
                                    (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_BattleServantData___);
    p_actlist->klass = (BattleServantConfConponent_c *)v110;
    sub_B5D560((BattleServantConfConponent_o *)&v4->fields.actlist, v110, v111, v112, v113, v114, v115, v116);
  }
  data = v4->fields.data;
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
  v120 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)*((_QWORD *)dicAiActFunc + 5);
  if ( !v120 )
  {
    if ( (BYTE3(this[2].fields.dicAiActFunc) & 4) != 0 && !LODWORD(this[1].fields.tempDeadSvtHash) )
    {
      j_il2cpp_runtime_class_init_0(this);
      dicAiActFunc = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    }
    v121 = *(Il2CppObject **)dicAiActFunc;
    v120 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_BattleServantData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      v120,
      v121,
      Method_BattleLogicEnemyAi___c__updateActPriorityList_b__23_4__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_BattleServantData___ctor__);
    v122 = BattleLogicEnemyAi___c_TypeInfo->static_fields;
    v122->__9__23_4 = (struct System_Predicate_BattleServantData__o *)v120;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v122->__9__23_4,
      (System_Int32_array **)v120,
      v123,
      v124,
      v125,
      v126,
      v127,
      v128);
  }
  if ( !klass )
LABEL_51:
    sub_B5D69C(this, method);
  All = (System_Int32_array **)System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                                 klass,
                                 (System_Predicate_T__o *)v120,
                                 (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_BattleServantData__FindAll__);
  p_actlist->klass = (BattleServantConfConponent_c *)All;
  sub_B5D560(p_actlist, All, v130, v131, v132, v133, v134, v135);
}


void __fastcall BattleLogicEnemyAi___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7C66 & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogicEnemyAi___c_TypeInfo, v1, v2, v3);
    byte_42E7C66 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleLogicEnemyAi___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleLogicEnemyAi___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return BattleServantData__GetOriginalRemainingNeedActCount(x, 0LL);
}


int32_t __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__23_2(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.actPriority;
}


int32_t __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__23_3(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return BattleServantData__getDeckIndex(x, 0LL);
}


bool __fastcall BattleLogicEnemyAi___c___updateActPriorityList_b__23_4(
        BattleLogicEnemyAi___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(0LL, x);
  return BattleLogicEnemyAi__ReplaceCommandTaskBySealStatus(_4__this, this->fields.svtData, x, 0LL);
}