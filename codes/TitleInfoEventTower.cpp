void __fastcall TitleInfoEventTower___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1
  struct TitleInfoEventTower_StaticFields *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct TitleInfoEventTower_StaticFields *v21; // x0
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_4213086 & 1) == 0 )
  {
    sub_B0D8A4(&TitleInfoEventTower_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_18273/*"ef_tower_change{0}_end"*/, v8);
    sub_B0D8A4(&StringLiteral_18272/*"ef_tower_change"*/, v9);
    sub_B0D8A4(&StringLiteral_18274/*"ef_tower_change{0}_start"*/, v10);
    byte_4213086 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventTower_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_18274/*"ef_tower_change{0}_start"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18274/*"ef_tower_change{0}_start"*/;
  sub_B0D840(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = TitleInfoEventTower_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_18273/*"ef_tower_change{0}_end"*/;
  v13->EFFECT_ANIMATION_END_FORMAT = (struct System_String_o *)StringLiteral_18273/*"ef_tower_change{0}_end"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v13->EFFECT_ANIMATION_END_FORMAT, v14, v15, v16, v17, v18, v19, v20);
  v21 = TitleInfoEventTower_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_18272/*"ef_tower_change"*/;
  v21->OBJECT_NAME_EFFECT_BASE = (struct System_String_o *)StringLiteral_18272/*"ef_tower_change"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v21->OBJECT_NAME_EFFECT_BASE, v22, v23, v24, v25, v26, v27, v28);
}


void __fastcall TitleInfoEventTower___ctor(TitleInfoEventTower_o *this, const MethodInfo *method)
{
  this->fields.TowerFloorMax = 100;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventTower__Close(TitleInfoEventTower_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  UnityEngine_Object_o *simpleAnimationData; // x20
  UnityEngine_Object_o *animationData; // x20

  if ( (byte_421307D & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421307D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_18:
    sub_B0D97C(gameObject);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.animationName = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.animationName, 0LL, v4, v5, v6, v7, v8, v9);
  simpleAnimationData = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimationData, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.simpleAnimationData;
    if ( !gameObject )
      goto LABEL_18;
  }
  else
  {
    animationData = (UnityEngine_Object_o *)this->fields.animationData;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(animationData, 0LL, 0LL) )
      return;
    gameObject = (UnityEngine_GameObject_o *)this->fields.animationData;
    if ( !gameObject )
      goto LABEL_18;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TitleInfoEventTower__GetQuestIdOnFirstFloorOfNextTower(
        TitleInfoEventTower_o *this,
        int32_t eventId,
        int32_t nowTowerId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  DataManager_o *Instance; // x0

  if ( (byte_4213081 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4213081 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  return QuestGroupMaster__GetEventTowerQuestId((QuestGroupMaster_o *)Instance, eventId, nowTowerId + 1, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
TitleInfoEventTower_TowerEffectData_o *__fastcall TitleInfoEventTower__GetTowerEffectData(
        TitleInfoEventTower_o *this,
        int32_t eventId,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  TitleInfoEventTower___c__DisplayClass33_0_o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  struct TitleInfoEventTower_TowerEventInfo_array *towerEventInfoList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v20; // x20
  TitleInfoEventTower_TowerEffectData_o *result; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v24; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v25; // x20

  if ( (byte_4213085 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___, v7);
    sub_B0D8A4(&Method_System_Func_TitleInfoEventTower_TowerEventInfo__bool___ctor__, v8);
    sub_B0D8A4(&Method_System_Func_TitleInfoEventTower_TowerEffectData__bool___ctor__, v9);
    sub_B0D8A4(&System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo, v10);
    sub_B0D8A4(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo, v11);
    sub_B0D8A4(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__, v12);
    sub_B0D8A4(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__, v13);
    sub_B0D8A4(&TitleInfoEventTower___c__DisplayClass33_0_TypeInfo, v14);
    byte_4213085 = 1;
  }
  v15 = (TitleInfoEventTower___c__DisplayClass33_0_o *)sub_B0D974(
                                                         TitleInfoEventTower___c__DisplayClass33_0_TypeInfo,
                                                         *(_QWORD *)&eventId,
                                                         *(_QWORD *)&effectId);
  TitleInfoEventTower___c__DisplayClass33_0___ctor(v15, 0LL);
  if ( !v15 )
    sub_B0D97C(v16);
  v15->fields.eventId = eventId;
  v15->fields.effectId = effectId;
  towerEventInfoList = this->fields.towerEventInfoList;
  v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo,
                                                                             v17,
                                                                             v18);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v20,
    (Il2CppObject *)v15,
    Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_TitleInfoEventTower_TowerEventInfo__bool___ctor__);
  result = (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                      (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)towerEventInfoList,
                                                      (System_Func_T__bool__o *)v20,
                                                      (const MethodInfo_170767C *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v24 = *(WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array **)&result->fields.FadeInTime;
    v25 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                               System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo,
                                                                               v22,
                                                                               v23);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v25,
      (Il2CppObject *)v15,
      Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__,
      (const MethodInfo_26189B8 *)Method_System_Func_TitleInfoEventTower_TowerEffectData__bool___ctor__);
    return (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                      v24,
                                                      (System_Func_T__bool__o *)v25,
                                                      (const MethodInfo_170767C *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
TitleInfoEventTower_TowerShiftData_o *__fastcall TitleInfoEventTower__GetTowerShiftData(
        TitleInfoEventTower_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  TitleInfoEventTower___c__DisplayClass31_0_o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  struct TitleInfoEventTower_TowerEventInfo_array *towerEventInfoList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v20; // x20
  TitleInfoEventTower_TowerShiftData_o *result; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v24; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v25; // x20

  if ( (byte_4213083 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___, v7);
    sub_B0D8A4(&Method_System_Func_TitleInfoEventTower_TowerEventInfo__bool___ctor__, v8);
    sub_B0D8A4(&Method_System_Func_TitleInfoEventTower_TowerShiftData__bool___ctor__, v9);
    sub_B0D8A4(&System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo, v10);
    sub_B0D8A4(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo, v11);
    sub_B0D8A4(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__, v12);
    sub_B0D8A4(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__, v13);
    sub_B0D8A4(&TitleInfoEventTower___c__DisplayClass31_0_TypeInfo, v14);
    byte_4213083 = 1;
  }
  v15 = (TitleInfoEventTower___c__DisplayClass31_0_o *)sub_B0D974(
                                                         TitleInfoEventTower___c__DisplayClass31_0_TypeInfo,
                                                         *(_QWORD *)&eventId,
                                                         *(_QWORD *)&towerId);
  TitleInfoEventTower___c__DisplayClass31_0___ctor(v15, 0LL);
  if ( !v15 )
    sub_B0D97C(v16);
  v15->fields.eventId = eventId;
  v15->fields.towerId = towerId;
  towerEventInfoList = this->fields.towerEventInfoList;
  v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo,
                                                                             v17,
                                                                             v18);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v20,
    (Il2CppObject *)v15,
    Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_TitleInfoEventTower_TowerEventInfo__bool___ctor__);
  result = (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                     (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)towerEventInfoList,
                                                     (System_Func_T__bool__o *)v20,
                                                     (const MethodInfo_170767C *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v24 = *(WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array **)&result->fields.CondType;
    v25 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                               System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo,
                                                                               v22,
                                                                               v23);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v25,
      (Il2CppObject *)v15,
      Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__,
      (const MethodInfo_26189B8 *)Method_System_Func_TitleInfoEventTower_TowerShiftData__bool___ctor__);
    return (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                     v24,
                                                     (System_Func_T__bool__o *)v25,
                                                     (const MethodInfo_170767C *)Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TitleInfoEventTower__IsDispEnabled(
        TitleInfoEventTower_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  EventUiMaster_o *Master_WarQuestSelectionMaster; // x0
  EventUiEntity_o *Entity; // x0
  EventUiEntity_o *v10; // x19

  if ( (byte_4213082 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventUiMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventUiReleaseMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    byte_4213082 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventUiMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventUiMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  Entity = EventUiMaster__getEntity(Master_WarQuestSelectionMaster, eventId, towerId, 0LL);
  if ( !Entity )
    return (char)Entity;
  v10 = Entity;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventUiMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_14:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  LOBYTE(Entity) = EventUiReleaseMaster__IsOpen((EventUiReleaseMaster_o *)Master_WarQuestSelectionMaster, v10, 0LL);
  return (char)Entity;
}


bool __fastcall TitleInfoEventTower__IsForceShiftTower(
        TitleInfoEventTower_o *this,
        TitleInfoEventTower_TowerShiftData_o *towerShiftData,
        int32_t nowTowerId,
        const MethodInfo *method)
{
  int32_t CondTargetId; // w20
  int32_t CondType; // w21
  int64_t CondValue; // x19

  if ( (byte_4213084 & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, towerShiftData);
    byte_4213084 = 1;
  }
  if ( !towerShiftData || towerShiftData->fields.TowerId != nowTowerId )
    return 0;
  CondType = towerShiftData->fields.CondType;
  CondTargetId = towerShiftData->fields.CondTargetId;
  CondValue = towerShiftData->fields.CondValue;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(CondType, CondTargetId, CondValue, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TitleInfoEventTower__IsOpenedNextTower(
        TitleInfoEventTower_o *this,
        int32_t eventId,
        int32_t nowTowerId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  int32_t QuestIdOnFirstFloorOfNextTower; // w0
  int32_t v8; // w19
  clsQuestCheck_o *v9; // x0

  if ( (byte_4213080 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, *(_QWORD *)&eventId);
    this = (TitleInfoEventTower_o *)sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v6);
    byte_4213080 = 1;
  }
  QuestIdOnFirstFloorOfNextTower = TitleInfoEventTower__GetQuestIdOnFirstFloorOfNextTower(
                                     this,
                                     eventId,
                                     nowTowerId,
                                     method);
  if ( QuestIdOnFirstFloorOfNextTower < 1 )
    return 0;
  v8 = QuestIdOnFirstFloorOfNextTower;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v9 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v9 )
    sub_B0D97C(0LL);
  return clsQuestCheck__IsQuestRelease(v9, v8, -1, 0, 0LL);
}


void __fastcall TitleInfoEventTower__Open(
        TitleInfoEventTower_o *this,
        System_Action_o *callback,
        AssetData_o *effectAsset,
        bool isFadeIn,
        const MethodInfo *method)
{
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
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x22
  int64_t Instance; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct EventDetailEntity_o *eventDetailEntity; // x8
  __int64 v46; // x1
  struct EventDetailEntity_o *v47; // x8
  int32_t eventId; // w19
  QuestGroupMaster_o *v49; // x25
  __int64 v50; // x1
  const MethodInfo *v51; // x3
  struct EventDetailEntity_o *v52; // x8
  int32_t v53; // w19
  int32_t v54; // w26
  TitleInfoEventTower_o *TowerShiftData; // x0
  __int64 v56; // x1
  const MethodInfo *v57; // x3
  TitleInfoEventTower_TowerShiftData_o *v58; // x27
  __int64 v59; // x1
  __int64 v60; // x1
  int32_t ForceShiftTowerId; // w19
  struct EventDetailEntity_o *v62; // x8
  __int64 v63; // x1
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  int32_t *p_EventTowerState_k__BackingField; // x8
  int32_t EventTowerState_k__BackingField; // t1
  int32_t v67; // w19
  __int64 v68; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  struct EventDetailEntity_o *v70; // x8
  System_Action_o *v71; // x0
  char i; // w8
  int32_t v73; // w19
  struct EventRewardSaveData_StaticFields **p_static_fields; // x8
  struct EventRewardSaveData_StaticFields *v75; // x9
  int32_t *v76; // x9
  int32_t v77; // t1
  int32_t v78; // w19
  struct EventDetailEntity_o *v79; // x9
  int32_t v80; // w19
  struct EventDetailEntity_o *v81; // x8
  int32_t v82; // w25
  EventTowerMaster_o *MasterData_WarQuestSelectionMaster; // x27
  struct EventDetailEntity_o *v84; // x8
  _DWORD *v85; // x28
  int v86; // w9
  int32_t v87; // w2
  const MethodInfo *v88; // x2
  const MethodInfo *v89; // x3
  struct EventDetailEntity_o *v90; // x8
  bool IsDispEnabled; // w19
  UserEventPointMaster_o *v92; // x19
  int32_t j; // w25
  struct EventDetailEntity_o *v94; // x8
  int32_t Point; // w26
  const MethodInfo *v96; // x1
  const MethodInfo *v97; // x3
  struct EventDetailEntity_o *v98; // x8
  TitleInfoEventTower_TowerEffectData_o *TowerEffectData; // x0
  const MethodInfo *v100; // x3
  __int64 v101; // x1
  int v102; // w21
  int32_t v103; // w19
  System_Action_o *v104; // x24
  int v105; // w21
  bool v106; // w23
  int32_t openEffectId; // w19
  int32_t v108; // w2
  __int64 v109; // x1
  __int64 v110; // x2
  System_Action_o *v111; // x23
  const MethodInfo *v112; // x3
  struct EventDetailEntity_o *v113; // x8
  const MethodInfo *v114; // x3
  int64_t v115; // x19
  float v116; // s0
  System_Collections_IEnumerator_o *v117; // x0
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v127; // x2
  const MethodInfo *v128; // x2
  UnityEngine_Object_o *stamp; // x19
  const MethodInfo *v130; // x4
  bool v131; // w22
  UnityEngine_Object_o *v132; // x19
  const MethodInfo *v133; // x1
  struct EventDetailEntity_o *v134; // x9
  const MethodInfo *v135; // x3
  struct EventDetailEntity_o *v136; // x8
  const MethodInfo *v137; // x3
  __int64 v138; // x0
  const MethodInfo *v139; // [xsp+0h] [xbp-A0h]
  System_Action_o *v140; // [xsp+10h] [xbp-90h]
  int v141; // [xsp+1Ch] [xbp-84h]
  _QWORD *v142; // [xsp+20h] [xbp-80h]
  WarEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  EventTowerEntity_o *v144; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v146; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421307B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___, v9);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___, v10);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___, v11);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___, v12);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventTowerMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventPointMaster___, v15);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarMaster___, v16);
    sub_B0D8A4(&DataManager_TypeInfo, v17);
    sub_B0D8A4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v18);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___, v19);
    sub_B0D8A4(&int___TypeInfo, v20);
    sub_B0D8A4(&NetworkManager_TypeInfo, v21);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v22);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v24);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v25);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v26);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v27);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v28);
    sub_B0D8A4(&Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__, v29);
    sub_B0D8A4(&TitleInfoEventTower___c__DisplayClass22_0_TypeInfo, v30);
    byte_421307B = 1;
  }
  v144 = 0LL;
  entity = 0LL;
  v31 = sub_B0D974(TitleInfoEventTower___c__DisplayClass22_0_TypeInfo, callback, effectAsset);
  TitleInfoEventTower___c__DisplayClass22_0___ctor((TitleInfoEventTower___c__DisplayClass22_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_201;
  *(_QWORD *)(v31 + 16) = effectAsset;
  v142 = (_QWORD *)(v31 + 16);
  sub_B0D840(
    (BattleServantConfConponent_o *)(v31 + 16),
    (System_Int32_array **)effectAsset,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  *(_QWORD *)(v31 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v31 + 24), (System_Int32_array **)this, v39, v40, v41, v42, v43, v44);
  eventDetailEntity = this->fields.eventDetailEntity;
  if ( !eventDetailEntity )
    goto LABEL_74;
  EventRewardSaveData__LoadEventTowerState(eventDetailEntity->fields.eventId, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_201;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  v47 = this->fields.eventDetailEntity;
  if ( !v47 )
    goto LABEL_201;
  eventId = v47->fields.eventId;
  v49 = (QuestGroupMaster_o *)Instance;
  if ( !byte_4210D42 )
  {
    Instance = sub_B0D8A4(&EventRewardSaveData_TypeInfo, v46);
    byte_4210D42 = 1;
  }
  if ( !v49 )
    goto LABEL_201;
  Instance = QuestGroupMaster__GetEventTowerQuestId(
               v49,
               eventId,
               EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField + 1,
               1,
               0LL);
  v52 = this->fields.eventDetailEntity;
  if ( !v52 )
    goto LABEL_201;
  v53 = v52->fields.eventId;
  v54 = Instance;
  if ( !byte_4210D42 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v50);
    byte_4210D42 = 1;
  }
  TowerShiftData = (TitleInfoEventTower_o *)TitleInfoEventTower__GetTowerShiftData(
                                              this,
                                              v53,
                                              EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
                                              v51);
  v58 = (TitleInfoEventTower_TowerShiftData_o *)TowerShiftData;
  if ( !byte_4210D42 )
  {
    TowerShiftData = (TitleInfoEventTower_o *)sub_B0D8A4(&EventRewardSaveData_TypeInfo, v56);
    byte_4210D42 = 1;
  }
  v140 = callback;
  if ( TitleInfoEventTower__IsForceShiftTower(
         TowerShiftData,
         v58,
         EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
         v57) )
  {
    if ( *v142 )
    {
      if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
      }
      Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !Instance )
        goto LABEL_201;
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
      if ( !v58 )
        goto LABEL_201;
      ForceShiftTowerId = v58->fields.ForceShiftTowerId;
      if ( !byte_4213147 )
      {
        Instance = sub_B0D8A4(&EventRewardSaveData_TypeInfo, v60);
        byte_4213147 = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = ForceShiftTowerId;
      v62 = this->fields.eventDetailEntity;
      if ( !v62 )
        goto LABEL_201;
LABEL_25:
      EventRewardSaveData__SaveEventTowerState(v62->fields.eventId, 0LL);
      v141 = 1;
      goto LABEL_94;
    }
    goto LABEL_49;
  }
  if ( v54 < 1 )
    goto LABEL_46;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_201;
  Instance = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v54, -1, 0, 0LL);
  if ( (Instance & 1) == 0 )
  {
LABEL_46:
    if ( !byte_4210D42 )
    {
      sub_B0D8A4(&EventRewardSaveData_TypeInfo, v59);
      byte_4210D42 = 1;
    }
    if ( EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField )
    {
LABEL_49:
      v141 = 0;
      goto LABEL_94;
    }
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_201;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    Instance = (int64_t)this->fields.floorSprite;
    if ( !Instance )
      goto LABEL_201;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_201;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_421083F )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v68);
      byte_421083F = 1;
    }
    Instance = (int64_t)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (int64_t)TerminalPramsManager_TypeInfo;
    }
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_201;
    Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                 Master_WarQuestSelectionMaster,
                 &entity,
                 *(_DWORD *)(*(_QWORD *)(Instance + 184) + 4LL),
                 (const MethodInfo_2669C30 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    if ( (Instance & 1) != 0 )
    {
      v70 = this->fields.eventDetailEntity;
      if ( !v70 || !entity )
        goto LABEL_201;
      if ( v70->fields.eventId == entity->fields.eventId )
      {
        if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
        }
        Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !Instance )
          goto LABEL_201;
        MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0LL);
      }
    }
LABEL_74:
    if ( !callback )
      return;
    v71 = callback;
    goto LABEL_199;
  }
  if ( !byte_4210D42 )
  {
    Instance = sub_B0D8A4(&EventRewardSaveData_TypeInfo, v59);
    byte_4210D42 = 1;
  }
  if ( EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField )
  {
    if ( *v142 )
    {
      if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
      }
      Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !Instance )
        goto LABEL_201;
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
      if ( !byte_4210D42 )
      {
        Instance = sub_B0D8A4(&EventRewardSaveData_TypeInfo, v63);
        byte_4210D42 = 1;
      }
      static_fields = EventRewardSaveData_TypeInfo->static_fields;
      EventTowerState_k__BackingField = static_fields->_EventTowerState_k__BackingField;
      p_EventTowerState_k__BackingField = &static_fields->_EventTowerState_k__BackingField;
      v67 = EventTowerState_k__BackingField + 1;
      if ( !byte_4213147 )
      {
        Instance = sub_B0D8A4(&EventRewardSaveData_TypeInfo, v63);
        byte_4213147 = 1;
        p_EventTowerState_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
      }
      *p_EventTowerState_k__BackingField = v67;
      v62 = this->fields.eventDetailEntity;
      if ( !v62 )
        goto LABEL_201;
      goto LABEL_25;
    }
  }
  else
  {
    for ( i = 1; ; i = byte_4210D42 )
    {
      if ( !i )
      {
        Instance = sub_B0D8A4(&EventRewardSaveData_TypeInfo, v59);
        byte_4210D42 = 1;
      }
      p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
      v75 = EventRewardSaveData_TypeInfo->static_fields;
      v77 = v75->_EventTowerState_k__BackingField;
      v76 = &v75->_EventTowerState_k__BackingField;
      v78 = v77 + 1;
      if ( !byte_4213147 )
      {
        Instance = sub_B0D8A4(&EventRewardSaveData_TypeInfo, v59);
        byte_4213147 = 1;
        p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
        v76 = &EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
      }
      *v76 = v78;
      v79 = this->fields.eventDetailEntity;
      if ( !v79 )
        goto LABEL_201;
      v80 = v79->fields.eventId;
      if ( !byte_4210D42 )
      {
        sub_B0D8A4(&EventRewardSaveData_TypeInfo, v59);
        byte_4210D42 = 1;
        p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
      }
      Instance = QuestGroupMaster__GetEventTowerQuestId(
                   v49,
                   v80,
                   (*p_static_fields)->_EventTowerState_k__BackingField + 1,
                   1,
                   0LL);
      if ( (int)Instance < 1 )
        break;
      v73 = Instance;
      if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
      }
      Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Instance )
        goto LABEL_201;
      Instance = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v73, -1, 0, 0LL);
      if ( (Instance & 1) == 0 )
        break;
    }
    v81 = this->fields.eventDetailEntity;
    if ( !v81 )
      goto LABEL_201;
    EventRewardSaveData__SaveEventTowerState(v81->fields.eventId, 0LL);
  }
  v141 = 0;
LABEL_94:
  if ( !byte_4210D42 )
  {
    sub_B0D8A4(&EventRewardSaveData_TypeInfo, v59);
    byte_4210D42 = 1;
  }
  v82 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_201;
  MasterData_WarQuestSelectionMaster = (EventTowerMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventTowerMaster___);
  Instance = sub_B0D8BC(int___TypeInfo, 2LL);
  v84 = this->fields.eventDetailEntity;
  if ( !v84 )
    goto LABEL_201;
  v85 = (_DWORD *)Instance;
  if ( !Instance )
    goto LABEL_201;
  v86 = *(_DWORD *)(Instance + 24);
  if ( !v86 )
    goto LABEL_202;
  v87 = v84->fields.eventId;
  *(_DWORD *)(Instance + 32) = v87;
  if ( v86 == 1 )
    goto LABEL_202;
  *(_DWORD *)(Instance + 36) = v82;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_201;
  EventTowerMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &v144, v87, v82, 0LL);
  TitleInfoEventTower__SetTowerPosition(this, v82, v88);
  if ( v144 )
    this->fields.TowerFloorMax = v144->fields.topFloor;
  v90 = this->fields.eventDetailEntity;
  if ( !v90 )
    goto LABEL_201;
  IsDispEnabled = TitleInfoEventTower__IsDispEnabled((TitleInfoEventTower_o *)Instance, v90->fields.eventId, v82, v89);
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_201;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, IsDispEnabled, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_201;
  v92 = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  for ( j = v82 - 1; ; ++j )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    v94 = this->fields.eventDetailEntity;
    if ( !v94 || !v92 )
      goto LABEL_201;
    Point = UserEventPointMaster__GetPoint(v92, Instance, v94->fields.eventId, j + 1, 0LL);
    if ( this->fields.TowerFloorMax > Point )
      break;
  }
  Instance = (int64_t)this->fields.floorSprite;
  if ( !Instance )
    goto LABEL_201;
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_201;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  if ( !isFadeIn )
    goto LABEL_121;
  v98 = this->fields.eventDetailEntity;
  if ( !v98 )
    goto LABEL_201;
  TowerEffectData = TitleInfoEventTower__GetTowerEffectData(this, v98->fields.eventId, this->fields.openEffectId, v97);
  if ( TowerEffectData )
    TitleInfoEventTower__PlayFade(
      this,
      0.0,
      1.0,
      TowerEffectData->fields.FadeInTime,
      TowerEffectData->fields.FadeInEasingType,
      0LL,
      v100);
  else
LABEL_121:
    TitleInfoEventTower__SetSpriteAlpha(this, 1.0, v96);
  v102 = 0;
  if ( j + 1 < 2 || Point )
  {
    ++j;
    v104 = v140;
    v106 = 0;
    goto LABEL_162;
  }
  if ( !v144 )
  {
    if ( v85[6] > 1u )
    {
      v85[9] = j;
      Point = this->fields.TowerFloorMax;
      EventTowerMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &v144, v85[8], j, 0LL);
      v104 = v140;
LABEL_157:
      v105 = 0;
      goto LABEL_158;
    }
LABEL_202:
    v138 = sub_B0D9A8(Instance);
    sub_B0D948(v138, 0LL);
  }
  if ( !byte_4210D42 )
  {
    Instance = sub_B0D8A4(&EventRewardSaveData_TypeInfo, v101);
    byte_4210D42 = 1;
  }
  v103 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
  if ( v103 != j )
  {
    if ( !v141 )
    {
      ++j;
      v104 = v140;
      v105 = 0;
      Point = 0;
      goto LABEL_158;
    }
    if ( v85[6] >= 2u )
    {
      Point = this->fields.TowerFloorMax;
      Instance = EventTowerMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &v144, v85[8], v85[9], 0LL);
      if ( !v144 )
        goto LABEL_201;
      openEffectId = v144->fields.openEffectId;
      this->fields.openEffectId = openEffectId;
      if ( v85[6] > 1u )
      {
        v108 = v85[8];
        v85[9] = j;
        EventTowerMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &v144, v108, j, 0LL);
        if ( !openEffectId )
        {
          Instance = (int64_t)v144;
          v104 = v140;
          if ( !v144 )
            goto LABEL_201;
          if ( EventTowerEntity__HasFlag(v144, 2, 0LL) )
          {
            Instance = (int64_t)this->fields.spriteRoot;
            if ( !Instance )
              goto LABEL_201;
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
            x = localPosition.fields.x;
            y = localPosition.fields.y;
            z = localPosition.fields.z;
            TitleInfoEventTower__SetTowerPosition(this, j, v127);
            Instance = (int64_t)this->fields.spriteRoot;
            if ( !Instance )
              goto LABEL_201;
            Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)Instance,
                                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___);
            if ( !Instance )
              goto LABEL_201;
            v146.fields.x = x;
            v146.fields.y = y;
            v146.fields.z = z;
            TitleInfoEventTowerSlideAnimation__StartSlideAnim(
              (TitleInfoEventTowerSlideAnimation_o *)Instance,
              v140,
              v146,
              v128);
          }
          v105 = 1;
          goto LABEL_158;
        }
        v111 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v109, v110);
        System_Action___ctor(
          v111,
          (Il2CppObject *)v31,
          Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__,
          0LL);
        v113 = this->fields.eventDetailEntity;
        v104 = v140;
        if ( !v113 )
          goto LABEL_201;
        Instance = (int64_t)TitleInfoEventTower__GetTowerEffectData(
                              this,
                              v113->fields.eventId,
                              this->fields.openEffectId,
                              v112);
        if ( Instance )
        {
          v115 = Instance;
          TitleInfoEventTower__PlayFade(
            this,
            1.0,
            0.0,
            *(float *)(Instance + 20),
            *(_DWORD *)(Instance + 24),
            0LL,
            v114);
          v116 = *(float *)(v115 + 28);
          if ( v116 <= 0.0 )
          {
            if ( !v111 )
              goto LABEL_201;
            System_Action__Invoke(v111, 0LL);
          }
          else
          {
            v117 = BasicHelper__DelayCall(v116, v111, 0LL);
            UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v117, 0LL);
          }
        }
        else
        {
          if ( !v111 )
            goto LABEL_201;
          System_Action__Invoke(v111, 0LL);
          Instance = (int64_t)this->fields.floorSprite;
          if ( !Instance )
            goto LABEL_201;
          Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_201;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        }
        this->fields.endCallback = v140;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.endCallback,
          (System_Int32_array **)v140,
          v118,
          v119,
          v120,
          v121,
          v122,
          v123);
        goto LABEL_157;
      }
    }
    goto LABEL_202;
  }
  if ( v85[6] <= 1u )
    goto LABEL_202;
  v85[9] = v103;
  Point = this->fields.TowerFloorMax;
  EventTowerMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &v144, v85[8], v103, 0LL);
  v104 = v140;
  v105 = 0;
  j = v103;
LABEL_158:
  Instance = (int64_t)v144;
  if ( !v144 )
    goto LABEL_201;
  v106 = !EventTowerEntity__HasFlag(v144, 1, 0LL);
  if ( v105 )
    v102 = 51;
  else
    v102 = 0;
LABEL_162:
  Instance = (int64_t)v144;
  if ( !v144 )
    goto LABEL_201;
  if ( !EventTowerEntity__HasFlag(v144, 2, 0LL) )
    goto LABEL_171;
  stamp = (UnityEngine_Object_o *)this->fields.stamp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(stamp, 0LL, 0LL) )
  {
    Instance = (int64_t)this->fields.stamp;
    if ( !Instance )
      goto LABEL_201;
    Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
    if ( !Instance )
      goto LABEL_201;
    TitleInfoEventTowerStamp__StampProgress(
      (TitleInfoEventTowerStamp_o *)Instance,
      Point,
      j,
      this->fields.spriteRoot,
      v130);
    v131 = 1;
  }
  else
  {
LABEL_171:
    v132 = (UnityEngine_Object_o *)this->fields.stamp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v132, 0LL, 0LL) )
    {
      Instance = (int64_t)this->fields.stamp;
      if ( !Instance )
        goto LABEL_201;
      Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                            (UnityEngine_GameObject_o *)Instance,
                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
      if ( !Instance )
        goto LABEL_201;
      TitleInfoEventTowerStamp__ResetStamp((TitleInfoEventTowerStamp_o *)Instance, v133);
    }
    v131 = 0;
  }
  Instance = (int64_t)this->fields.floorSprite;
  if ( !Instance )
    goto LABEL_201;
  Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___);
  v134 = this->fields.eventDetailEntity;
  if ( !v134 )
    goto LABEL_201;
  if ( !v144 )
    goto LABEL_201;
  if ( !Instance )
    goto LABEL_201;
  TitleInfoEventTowerFloorLabel__SetFloorLabel(
    (TitleInfoEventTowerFloorLabel_o *)Instance,
    v134->fields.eventId,
    j,
    this->fields.TowerFloorMax,
    Point,
    v144->fields.floorLabel,
    v106,
    v131,
    v139);
  Instance = (int64_t)this->fields.nameSprite;
  if ( !Instance )
    goto LABEL_201;
  Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___);
  v136 = this->fields.eventDetailEntity;
  if ( !v136 )
    goto LABEL_201;
  if ( !Instance )
    goto LABEL_201;
  TitleInfoEventTowerNameLabel__SetTowerNameLabel(
    (TitleInfoEventTowerNameLabel_o *)Instance,
    v136->fields.eventId,
    j,
    v135);
  Instance = (int64_t)this->fields.baseSprite;
  if ( !Instance )
    goto LABEL_201;
  Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___);
  if ( !Instance )
    goto LABEL_201;
  TitleInfoEventTowerBase__SetBaseSprite((TitleInfoEventTowerBase_o *)Instance, j, v131, v137);
  if ( (v141 & 1) == 0 && *v142 )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( Instance )
    {
      MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0LL);
      goto LABEL_195;
    }
LABEL_201:
    sub_B0D97C(Instance);
  }
LABEL_195:
  if ( !this->fields.endCallback && v104 && !v102 )
  {
    v71 = v104;
LABEL_199:
    System_Action__Invoke(v71, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTower__PlayFade(
        TitleInfoEventTower_o *this,
        float from,
        float to,
        float time,
        int32_t easingType,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x20
  __int64 v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  EasingObject_o *v40; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  System_Action_o *v43; // x22
  __int64 v44; // x1
  __int64 v45; // x2
  System_Action_o *v46; // x23

  if ( (byte_421307F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&easingType);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v13);
    sub_B0D8A4(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__, v14);
    sub_B0D8A4(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__, v15);
    sub_B0D8A4(&TitleInfoEventTower___c__DisplayClass26_0_TypeInfo, v16);
    byte_421307F = 1;
  }
  v17 = sub_B0D974(TitleInfoEventTower___c__DisplayClass26_0_TypeInfo, *(_QWORD *)&easingType, endAction);
  TitleInfoEventTower___c__DisplayClass26_0___ctor((TitleInfoEventTower___c__DisplayClass26_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_6;
  *(float *)(v17 + 24) = from;
  *(float *)(v17 + 28) = to;
  *(_QWORD *)(v17 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 32), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v17 + 40) = endAction;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 40), (System_Int32_array **)endAction, v25, v26, v27, v28, v29, v30);
  TitleInfoEventTower__SetSpriteAlpha(this, *(float *)(v17 + 24), v31);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v17 + 16) = Component_UIWidget;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 16), Component_UIWidget, v34, v35, v36, v37, v38, v39);
  v40 = *(EasingObject_o **)(v17 + 16);
  v43 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v41, v42);
  System_Action___ctor(v43, (Il2CppObject *)v17, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__, 0LL);
  v46 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v44, v45);
  System_Action___ctor(v46, (Il2CppObject *)v17, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__, 0LL);
  if ( !v40 )
LABEL_6:
    sub_B0D97C(v18);
  EasingObject__Play(v40, time, v43, v46, 0.0, easingType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTower__SetSpriteAlpha(TitleInfoEventTower_o *this, float alpha, const MethodInfo *method)
{
  struct UISprite_o *baseSprite; // x0
  long double v5; // q8

  baseSprite = this->fields.baseSprite;
  if ( !baseSprite
    || (v5 = *(long double *)&alpha,
        ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))baseSprite->klass->vtable._8_set_alpha.method)(
          baseSprite,
          baseSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr),
        (baseSprite = this->fields.floorSprite) == 0LL)
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, long double))baseSprite->klass->vtable._8_set_alpha.method)(
          baseSprite,
          baseSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr,
          v5),
        (baseSprite = this->fields.nameSprite) == 0LL) )
  {
    sub_B0D97C(baseSprite);
  }
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, long double))baseSprite->klass->vtable._8_set_alpha.method)(
    baseSprite,
    baseSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTower__SetTowerPosition(
        TitleInfoEventTower_o *this,
        int32_t towerId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  struct EventDetailEntity_o *eventDetailEntity; // x8
  EventUiEntity_o *Entity; // x0
  EventUiEntity_o *v11; // x20
  UnityEngine_Object_o *spriteRoot; // x21
  UnityEngine_Transform_o *v13; // x19
  int x; // s8
  int y; // s9
  float *saveNameList; // x8
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_421307C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventUiMaster___, *(_QWORD *)&towerId);
    sub_B0D8A4(&EventUiEntity_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_421307C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventUiMaster___);
  if ( Instance )
  {
    eventDetailEntity = this->fields.eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_17;
    Entity = EventUiMaster__getEntity((EventUiMaster_o *)Instance, eventDetailEntity->fields.eventId, towerId, 0LL);
    if ( Entity )
    {
      v11 = Entity;
      spriteRoot = (UnityEngine_Object_o *)this->fields.spriteRoot;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(spriteRoot, 0LL, 0LL) )
      {
        v13 = this->fields.spriteRoot;
        x = v11->fields.x;
        y = v11->fields.y;
        Instance = (DataManager_o *)EventUiEntity_TypeInfo;
        if ( (BYTE3(EventUiEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventUiEntity_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo);
          Instance = (DataManager_o *)EventUiEntity_TypeInfo;
        }
        if ( v13 )
        {
          saveNameList = (float *)Instance[1].fields.saveNameList;
          v17.fields.x = *saveNameList * (float)x;
          v17.fields.y = -(float)(*saveNameList * (float)y);
          v17.fields.z = *saveNameList * 0.0;
          UnityEngine_Transform__set_localPosition(v13, v17, 0LL);
          return;
        }
LABEL_17:
        sub_B0D97C(Instance);
      }
    }
  }
}


void __fastcall TitleInfoEventTower__Update(TitleInfoEventTower_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o **p_animationName; // x21
  struct UnityEngine_Animation_o **p_animationData; // x20
  UnityEngine_Object_o *animationData; // x22
  UnityEngine_Animation_o *v10; // x0
  UnityEngine_Object_o *simpleAnimationData; // x22
  TitleInfoEventTower_c *v12; // x0
  System_String_o *EFFECT_ANIMATION_START_FORMAT; // x22
  Il2CppObject *v14; // x0
  System_String_o *v15; // x23
  System_String_o *EFFECT_ANIMATION_END_FORMAT; // x22
  Il2CppObject *v17; // x0
  struct System_String_o *v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_Object_o *v25; // x22
  const MethodInfo *v26; // x4
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct SimpleAnimation_o **p_simpleAnimationData; // x21
  UnityEngine_Object_o *v34; // x22
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  BattleServantConfConponent_o *v42; // x0
  UnityEngine_Object_o *v43; // x22
  UnityEngine_Object_o *v44; // x21
  UnityEngine_Object_o *v45; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  BattleServantConfConponent_o *p_endCallback; // x19
  System_Action_o *v53; // x20
  struct System_Action_o *endCallback; // t1
  int32_t v55; // [xsp+8h] [xbp-48h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_421307E & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v5);
    sub_B0D8A4(&TitleInfoEventTower_TypeInfo, v6);
    byte_421307E = 1;
  }
  p_animationName = &this->fields.animationName;
  if ( !System_String__IsNullOrEmpty(this->fields.animationName, 0LL) )
  {
    p_animationData = &this->fields.animationData;
    animationData = (UnityEngine_Object_o *)this->fields.animationData;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(animationData, 0LL, 0LL) )
    {
      v10 = *p_animationData;
      if ( !*p_animationData )
        goto LABEL_60;
      if ( !UnityEngine_Animation__IsPlaying(v10, *p_animationName, 0LL) )
        goto LABEL_16;
    }
    simpleAnimationData = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(simpleAnimationData, 0LL, 0LL) )
    {
      v10 = (UnityEngine_Animation_o *)this->fields.simpleAnimationData;
      if ( !v10 )
        goto LABEL_60;
      if ( !SimpleAnimation__IsPlaying((SimpleAnimation_o *)v10, *p_animationName, 0LL) )
      {
LABEL_16:
        v12 = TitleInfoEventTower_TypeInfo;
        if ( (BYTE3(TitleInfoEventTower_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
          v12 = TitleInfoEventTower_TypeInfo;
        }
        EFFECT_ANIMATION_START_FORMAT = v12->static_fields->EFFECT_ANIMATION_START_FORMAT;
        openEffectId = this->fields.openEffectId;
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openEffectId);
        v15 = System_String__Format(EFFECT_ANIMATION_START_FORMAT, v14, 0LL);
        EFFECT_ANIMATION_END_FORMAT = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_END_FORMAT;
        v55 = this->fields.openEffectId;
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
        v18 = System_String__Format(EFFECT_ANIMATION_END_FORMAT, v17, 0LL);
        if ( System_String__op_Equality(this->fields.animationName, v15, 0LL) )
        {
          this->fields.animationName = v18;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.animationName,
            (System_Int32_array **)v18,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
          v25 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
          {
            v10 = (UnityEngine_Animation_o *)this->fields.simpleAnimationData;
            if ( v10 )
            {
              SimpleAnimation__Play_50482404((SimpleAnimation_o *)v10, *p_animationName, 0LL);
LABEL_42:
              TitleInfoEventTower__Open(this, 0LL, 0LL, 1, v26);
              return;
            }
          }
          else
          {
            v43 = (UnityEngine_Object_o *)*p_animationData;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality(v43, 0LL, 0LL) )
              goto LABEL_42;
            v10 = *p_animationData;
            if ( *p_animationData )
            {
              UnityEngine_Animation__Play_50564840(v10, *p_animationName, 0LL);
              goto LABEL_42;
            }
          }
LABEL_60:
          sub_B0D97C(v10);
        }
        if ( System_String__op_Equality(*p_animationName, v18, 0LL) )
        {
          this->fields.animationName = 0LL;
          sub_B0D840((BattleServantConfConponent_o *)&this->fields.animationName, 0LL, v27, v28, v29, v30, v31, v32);
          p_simpleAnimationData = &this->fields.simpleAnimationData;
          v34 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          this->fields.openEffectId = 0;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
          {
            v10 = (UnityEngine_Animation_o *)*p_simpleAnimationData;
            if ( !*p_simpleAnimationData )
              goto LABEL_60;
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v10,
                                                   0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__DestroyImmediate_34935488(gameObject, 0LL);
            *p_simpleAnimationData = 0LL;
            v42 = (BattleServantConfConponent_o *)&this->fields.simpleAnimationData;
          }
          else
          {
            v44 = (UnityEngine_Object_o *)*p_animationData;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality(v44, 0LL, 0LL) )
              goto LABEL_53;
            v10 = *p_animationData;
            if ( !*p_animationData )
              goto LABEL_60;
            v45 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__DestroyImmediate_34935488(v45, 0LL);
            v42 = (BattleServantConfConponent_o *)&this->fields.animationData;
            *p_animationData = 0LL;
          }
          sub_B0D840(v42, 0LL, v36, v37, v38, v39, v40, v41);
LABEL_53:
          if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
          }
          v10 = (UnityEngine_Animation_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( !v10 )
            goto LABEL_60;
          MissionNotifyManager__CancelPause((MissionNotifyManager_o *)v10, 0LL);
          endCallback = this->fields.endCallback;
          p_endCallback = (BattleServantConfConponent_o *)&this->fields.endCallback;
          v53 = endCallback;
          if ( endCallback )
          {
            p_endCallback->klass = 0LL;
            sub_B0D840(p_endCallback, 0LL, v46, v47, v48, v49, v50, v51);
            System_Action__Invoke(v53, 0LL);
          }
        }
      }
    }
  }
}


void __fastcall TitleInfoEventTower__set_EventDetailEntity(
        TitleInfoEventTower_o *this,
        EventDetailEntity_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.eventDetailEntity = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventDetailEntity,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TitleInfoEventTower_TowerEffectData___ctor(
        TitleInfoEventTower_TowerEffectData_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.EffectId = 0x3F00000000000001LL;
  *(_QWORD *)&this->fields.EffectStartDelay = 0x3F0000003F000000LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventTower_TowerEventInfo___ctor(
        TitleInfoEventTower_TowerEventInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventTower_TowerShiftData___ctor(
        TitleInfoEventTower_TowerShiftData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventTower___c__DisplayClass22_0___ctor(
        TitleInfoEventTower___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventTower___c__DisplayClass22_0___Open_b__0(
        TitleInfoEventTower___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  AssetData_o *effectAsset; // x20
  System_String_o *Component_srcLineSprite; // x0
  struct TitleInfoEventTower_o *_4__this; // x8
  System_String_o *OBJECT_NAME_EFFECT_BASE; // x21
  System_String_o *v13; // x0
  UnityEngine_Object_o *Object_29501436; // x0
  UnityEngine_GameObject_c **v15; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v16; // x0
  struct TitleInfoEventTower_o *v17; // x8
  UnityEngine_GameObject_o *v18; // x20
  struct TitleInfoEventTower_o *v19; // x21
  struct TitleInfoEventTower_o *v20; // x21
  struct TitleInfoEventTower_o *v21; // x8
  struct TitleInfoEventTower_o *v22; // x20
  struct TitleInfoEventTower_o *v23; // x8
  System_String_o *EFFECT_ANIMATION_START_FORMAT; // x21
  Il2CppObject *v25; // x0
  struct TitleInfoEventTower_o *v26; // x8
  UnityEngine_Object_o *animationData; // x20
  struct TitleInfoEventTower_o *v28; // x20
  struct TitleInfoEventTower_o *v29; // x8
  System_String_o *v30; // x21
  Il2CppObject *v31; // x0
  struct TitleInfoEventTower_o *v32; // x8
  int32_t v33; // [xsp+8h] [xbp-28h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42125A5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v3);
    sub_B0D8A4(&UnityEngine_GameObject_TypeInfo, v4);
    sub_B0D8A4(&int_TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&TitleInfoEventTower_TypeInfo, v8);
    byte_42125A5 = 1;
  }
  effectAsset = this->fields.effectAsset;
  Component_srcLineSprite = (System_String_o *)TitleInfoEventTower_TypeInfo;
  if ( (BYTE3(TitleInfoEventTower_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_44;
  OBJECT_NAME_EFFECT_BASE = TitleInfoEventTower_TypeInfo->static_fields->OBJECT_NAME_EFFECT_BASE;
  v13 = System_Int32__ToString((int)_4__this + 112, 0LL);
  Component_srcLineSprite = System_String__Concat_43849904(OBJECT_NAME_EFFECT_BASE, v13, 0LL);
  if ( !effectAsset )
    goto LABEL_44;
  Object_29501436 = AssetData__GetObject_29501436(effectAsset, Component_srcLineSprite, 0LL);
  v15 = (UnityEngine_GameObject_c **)Object_29501436;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
    || UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    if ( Object_29501436 )
      goto LABEL_11;
LABEL_15:
    v16 = 0LL;
    goto LABEL_16;
  }
  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !v15 )
    goto LABEL_15;
LABEL_11:
  if ( *v15 == UnityEngine_GameObject_TypeInfo )
    v16 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v15;
  else
    v16 = 0LL;
LABEL_16:
  Component_srcLineSprite = (System_String_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                 v16,
                                                 (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_44;
  v18 = (UnityEngine_GameObject_o *)Component_srcLineSprite;
  GameObjectExtensions__SafeSetParent_31184716(
    (UnityEngine_GameObject_o *)Component_srcLineSprite,
    v17->fields.effectRoot,
    0LL);
  if ( !v18 )
    goto LABEL_44;
  v19 = this->fields.__4__this;
  Component_srcLineSprite = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 v18,
                                                 (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !v19 )
    goto LABEL_44;
  v19->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_srcLineSprite;
  sub_B0D840(&v19->fields.simpleAnimationData, Component_srcLineSprite);
  v20 = this->fields.__4__this;
  Component_srcLineSprite = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 v18,
                                                 (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !v20 )
    goto LABEL_44;
  v20->fields.animationData = (struct UnityEngine_Animation_o *)Component_srcLineSprite;
  sub_B0D840(&v20->fields.animationData, Component_srcLineSprite);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_44;
  Component_srcLineSprite = (System_String_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)v21->fields.simpleAnimationData,
                                                 0LL,
                                                 0LL);
  v22 = this->fields.__4__this;
  if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
  {
    Component_srcLineSprite = (System_String_o *)TitleInfoEventTower_TypeInfo;
    v23 = this->fields.__4__this;
    if ( (BYTE3(TitleInfoEventTower_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v23 = this->fields.__4__this;
      if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
        v23 = this->fields.__4__this;
      }
    }
    if ( v23 )
    {
      EFFECT_ANIMATION_START_FORMAT = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT;
      openEffectId = v23->fields.openEffectId;
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openEffectId);
      Component_srcLineSprite = System_String__Format(EFFECT_ANIMATION_START_FORMAT, v25, 0LL);
      if ( v22 )
      {
        v22->fields.animationName = Component_srcLineSprite;
        sub_B0D840(&v22->fields.animationName, Component_srcLineSprite);
        v26 = this->fields.__4__this;
        if ( v26 )
        {
          Component_srcLineSprite = (System_String_o *)v26->fields.simpleAnimationData;
          if ( Component_srcLineSprite )
          {
            SimpleAnimation__Play_50482404((SimpleAnimation_o *)Component_srcLineSprite, v26->fields.animationName, 0LL);
            return;
          }
        }
      }
    }
LABEL_44:
    sub_B0D97C(Component_srcLineSprite);
  }
  if ( !v22 )
    goto LABEL_44;
  animationData = (UnityEngine_Object_o *)v22->fields.animationData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(animationData, 0LL, 0LL) )
  {
    Component_srcLineSprite = (System_String_o *)TitleInfoEventTower_TypeInfo;
    v28 = this->fields.__4__this;
    v29 = v28;
    if ( (BYTE3(TitleInfoEventTower_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v29 = this->fields.__4__this;
      if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
        v29 = this->fields.__4__this;
      }
    }
    if ( !v29 )
      goto LABEL_44;
    v30 = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT;
    v33 = v29->fields.openEffectId;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
    Component_srcLineSprite = System_String__Format(v30, v31, 0LL);
    if ( !v28 )
      goto LABEL_44;
    v28->fields.animationName = Component_srcLineSprite;
    sub_B0D840(&v28->fields.animationName, Component_srcLineSprite);
    v32 = this->fields.__4__this;
    if ( !v32 )
      goto LABEL_44;
    Component_srcLineSprite = (System_String_o *)v32->fields.animationData;
    if ( !Component_srcLineSprite )
      goto LABEL_44;
    UnityEngine_Animation__Play_50564840(
      (UnityEngine_Animation_o *)Component_srcLineSprite,
      v32->fields.animationName,
      0LL);
  }
}


void __fastcall TitleInfoEventTower___c__DisplayClass26_0___ctor(
        TitleInfoEventTower___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventTower___c__DisplayClass26_0___PlayFade_b__0(
        TitleInfoEventTower___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *easingObj; // x8
  TitleInfoEventTower___c__DisplayClass26_0_o *v3; // x19
  float v4; // s0

  easingObj = this->fields.easingObj;
  if ( !easingObj
    || (v3 = this,
        v4 = UnityEngine_Mathf__Lerp(this->fields.from, this->fields.to, easingObj->fields.mStartTime, 0LL),
        (this = (TitleInfoEventTower___c__DisplayClass26_0_o *)v3->fields.__4__this) == 0LL) )
  {
    sub_B0D97C(this);
  }
  TitleInfoEventTower__SetSpriteAlpha((TitleInfoEventTower_o *)this, v4, 0LL);
}


void __fastcall TitleInfoEventTower___c__DisplayClass26_0___PlayFade_b__1(
        TitleInfoEventTower___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  TitleInfoEventTower_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  TitleInfoEventTower__SetSpriteAlpha(_4__this, this->fields.to, 0LL);
  ActionExtensions__Call(this->fields.endAction, 0LL);
}


void __fastcall TitleInfoEventTower___c__DisplayClass31_0___ctor(
        TitleInfoEventTower___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TitleInfoEventTower___c__DisplayClass31_0___GetTowerShiftData_b__0(
        TitleInfoEventTower___c__DisplayClass31_0_o *this,
        TitleInfoEventTower_TowerEventInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_B0D97C(this);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTower___c__DisplayClass31_0___GetTowerShiftData_b__1(
        TitleInfoEventTower___c__DisplayClass31_0_o *this,
        TitleInfoEventTower_TowerShiftData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B0D97C(this);
  return data->fields.TowerId == this->fields.towerId;
}


void __fastcall TitleInfoEventTower___c__DisplayClass33_0___ctor(
        TitleInfoEventTower___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TitleInfoEventTower___c__DisplayClass33_0___GetTowerEffectData_b__0(
        TitleInfoEventTower___c__DisplayClass33_0_o *this,
        TitleInfoEventTower_TowerEventInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_B0D97C(this);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTower___c__DisplayClass33_0___GetTowerEffectData_b__1(
        TitleInfoEventTower___c__DisplayClass33_0_o *this,
        TitleInfoEventTower_TowerEffectData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B0D97C(this);
  return data->fields.EffectId == this->fields.effectId;
}