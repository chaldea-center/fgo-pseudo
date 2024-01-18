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

  if ( (byte_41863A4 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventTower_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_18216/*"ef_tower_change{0}_end"*/, v8);
    sub_B2C35C(&StringLiteral_18215/*"ef_tower_change"*/, v9);
    sub_B2C35C(&StringLiteral_18217/*"ef_tower_change{0}_start"*/, v10);
    byte_41863A4 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventTower_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_18217/*"ef_tower_change{0}_start"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18217/*"ef_tower_change{0}_start"*/;
  sub_B2C2F8(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = TitleInfoEventTower_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_18216/*"ef_tower_change{0}_end"*/;
  v13->EFFECT_ANIMATION_END_FORMAT = (struct System_String_o *)StringLiteral_18216/*"ef_tower_change{0}_end"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v13->EFFECT_ANIMATION_END_FORMAT, v14, v15, v16, v17, v18, v19, v20);
  v21 = TitleInfoEventTower_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_18215/*"ef_tower_change"*/;
  v21->OBJECT_NAME_EFFECT_BASE = (struct System_String_o *)StringLiteral_18215/*"ef_tower_change"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v21->OBJECT_NAME_EFFECT_BASE, v22, v23, v24, v25, v26, v27, v28);
}


void __fastcall TitleInfoEventTower___ctor(TitleInfoEventTower_o *this, const MethodInfo *method)
{
  this->fields.TowerFloorMax = 100;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventTower__Close(TitleInfoEventTower_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  UnityEngine_Object_o *simpleAnimationData; // x20
  UnityEngine_Object_o *animationData; // x20

  if ( (byte_418639B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418639B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_18:
    sub_B2C434(gameObject, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.animationName = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.animationName, 0LL, v5, v6, v7, v8, v9, v10);
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
  __int64 v8; // x1

  if ( (byte_418639F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418639F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v8);
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
  struct TitleInfoEventTower_TowerEventInfo_array *towerEventInfoList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x20
  TitleInfoEventTower_TowerEffectData_o *result; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v21; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x20

  if ( (byte_41863A3 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___, v7);
    sub_B2C35C(&Method_System_Func_TitleInfoEventTower_TowerEventInfo__bool___ctor__, v8);
    sub_B2C35C(&Method_System_Func_TitleInfoEventTower_TowerEffectData__bool___ctor__, v9);
    sub_B2C35C(&System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo, v10);
    sub_B2C35C(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo, v11);
    sub_B2C35C(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__, v12);
    sub_B2C35C(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__, v13);
    sub_B2C35C(&TitleInfoEventTower___c__DisplayClass33_0_TypeInfo, v14);
    byte_41863A3 = 1;
  }
  v15 = (TitleInfoEventTower___c__DisplayClass33_0_o *)sub_B2C42C(TitleInfoEventTower___c__DisplayClass33_0_TypeInfo);
  TitleInfoEventTower___c__DisplayClass33_0___ctor(v15, 0LL);
  if ( !v15 )
    sub_B2C434(v16, v17);
  v15->fields.eventId = eventId;
  v15->fields.effectId = effectId;
  towerEventInfoList = this->fields.towerEventInfoList;
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v19,
    (Il2CppObject *)v15,
    Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_TitleInfoEventTower_TowerEventInfo__bool___ctor__);
  result = (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                      (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)towerEventInfoList,
                                                      (System_Func_T__bool__o *)v19,
                                                      (const MethodInfo_1726BF0 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v21 = *(WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array **)&result->fields.FadeInTime;
    v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v22,
      (Il2CppObject *)v15,
      Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__,
      (const MethodInfo_2711C04 *)Method_System_Func_TitleInfoEventTower_TowerEffectData__bool___ctor__);
    return (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                      v21,
                                                      (System_Func_T__bool__o *)v22,
                                                      (const MethodInfo_1726BF0 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___);
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
  struct TitleInfoEventTower_TowerEventInfo_array *towerEventInfoList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x20
  TitleInfoEventTower_TowerShiftData_o *result; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v21; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x20

  if ( (byte_41863A1 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___, v7);
    sub_B2C35C(&Method_System_Func_TitleInfoEventTower_TowerEventInfo__bool___ctor__, v8);
    sub_B2C35C(&Method_System_Func_TitleInfoEventTower_TowerShiftData__bool___ctor__, v9);
    sub_B2C35C(&System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo, v10);
    sub_B2C35C(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo, v11);
    sub_B2C35C(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__, v12);
    sub_B2C35C(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__, v13);
    sub_B2C35C(&TitleInfoEventTower___c__DisplayClass31_0_TypeInfo, v14);
    byte_41863A1 = 1;
  }
  v15 = (TitleInfoEventTower___c__DisplayClass31_0_o *)sub_B2C42C(TitleInfoEventTower___c__DisplayClass31_0_TypeInfo);
  TitleInfoEventTower___c__DisplayClass31_0___ctor(v15, 0LL);
  if ( !v15 )
    sub_B2C434(v16, v17);
  v15->fields.eventId = eventId;
  v15->fields.towerId = towerId;
  towerEventInfoList = this->fields.towerEventInfoList;
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v19,
    (Il2CppObject *)v15,
    Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_TitleInfoEventTower_TowerEventInfo__bool___ctor__);
  result = (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                     (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)towerEventInfoList,
                                                     (System_Func_T__bool__o *)v19,
                                                     (const MethodInfo_1726BF0 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v21 = *(WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array **)&result->fields.CondType;
    v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v22,
      (Il2CppObject *)v15,
      Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__,
      (const MethodInfo_2711C04 *)Method_System_Func_TitleInfoEventTower_TowerShiftData__bool___ctor__);
    return (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                     v21,
                                                     (System_Func_T__bool__o *)v22,
                                                     (const MethodInfo_1726BF0 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___);
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
  __int64 v9; // x1
  EventUiEntity_o *Entity; // x0
  EventUiEntity_o *v11; // x19

  if ( (byte_41863A0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventUiMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_DataManager_GetMaster_EventUiReleaseMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    byte_41863A0 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventUiMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventUiMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  Entity = EventUiMaster__getEntity(Master_WarQuestSelectionMaster, eventId, towerId, 0LL);
  if ( !Entity )
    return (char)Entity;
  v11 = Entity;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventUiMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_14:
    sub_B2C434(Master_WarQuestSelectionMaster, v9);
  LOBYTE(Entity) = EventUiReleaseMaster__IsOpen((EventUiReleaseMaster_o *)Master_WarQuestSelectionMaster, v11, 0LL);
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

  if ( (byte_41863A2 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, towerShiftData);
    byte_41863A2 = 1;
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
  __int64 v10; // x1

  if ( (byte_418639E & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, *(_QWORD *)&eventId);
    this = (TitleInfoEventTower_o *)sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v6);
    byte_418639E = 1;
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
  v9 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v9 )
    sub_B2C434(0LL, v10);
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
  const MethodInfo *v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct EventDetailEntity_o *eventDetailEntity; // x8
  struct EventDetailEntity_o *v47; // x8
  int32_t eventId; // w19
  QuestGroupMaster_o *v49; // x25
  const MethodInfo *v50; // x3
  struct EventDetailEntity_o *v51; // x8
  int32_t v52; // w19
  int32_t v53; // w26
  TitleInfoEventTower_o *TowerShiftData; // x0
  __int64 v55; // x1
  const MethodInfo *v56; // x3
  TitleInfoEventTower_TowerShiftData_o *v57; // x27
  int32_t ForceShiftTowerId; // w19
  struct EventDetailEntity_o *v59; // x8
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  int32_t *p_EventTowerState_k__BackingField; // x8
  int32_t EventTowerState_k__BackingField; // t1
  int32_t v63; // w19
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  struct EventDetailEntity_o *v65; // x8
  System_Action_o *v66; // x0
  char i; // w8
  int32_t v68; // w19
  struct EventRewardSaveData_StaticFields **p_static_fields; // x8
  struct EventRewardSaveData_StaticFields *v70; // x9
  int32_t *v71; // x9
  int32_t v72; // t1
  int32_t v73; // w19
  struct EventDetailEntity_o *v74; // x9
  int32_t v75; // w19
  struct EventDetailEntity_o *v76; // x8
  int32_t v77; // w25
  EventTowerMaster_o *MasterData_WarQuestSelectionMaster; // x27
  struct EventDetailEntity_o *v79; // x8
  _DWORD *v80; // x28
  int v81; // w9
  int32_t v82; // w2
  const MethodInfo *v83; // x2
  const MethodInfo *v84; // x3
  struct EventDetailEntity_o *v85; // x8
  bool IsDispEnabled; // w19
  UserEventPointMaster_o *v87; // x19
  int32_t j; // w25
  struct EventDetailEntity_o *v89; // x8
  int32_t Point; // w26
  const MethodInfo *v91; // x3
  struct EventDetailEntity_o *v92; // x8
  TitleInfoEventTower_TowerEffectData_o *TowerEffectData; // x0
  const MethodInfo *v94; // x3
  int v95; // w21
  int32_t v96; // w19
  System_Action_o *v97; // x24
  int v98; // w21
  bool v99; // w23
  int32_t openEffectId; // w19
  int32_t v101; // w2
  System_Action_o *v102; // x23
  const MethodInfo *v103; // x3
  struct EventDetailEntity_o *v104; // x8
  const MethodInfo *v105; // x3
  int64_t v106; // x19
  float v107; // s0
  System_Collections_IEnumerator_o *v108; // x0
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v118; // x2
  const MethodInfo *v119; // x2
  UnityEngine_Object_o *stamp; // x19
  const MethodInfo *v121; // x4
  bool v122; // w22
  UnityEngine_Object_o *v123; // x19
  struct EventDetailEntity_o *v124; // x9
  const MethodInfo *v125; // x3
  struct EventDetailEntity_o *v126; // x8
  const MethodInfo *v127; // x3
  __int64 v128; // x0
  const MethodInfo *v129; // [xsp+0h] [xbp-A0h]
  System_Action_o *v130; // [xsp+10h] [xbp-90h]
  int v131; // [xsp+1Ch] [xbp-84h]
  _QWORD *v132; // [xsp+20h] [xbp-80h]
  WarEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  EventTowerEntity_o *v134; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v136; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4186399 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___, v9);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___, v10);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___, v11);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventTowerMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestGroupMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventPointMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMaster_WarMaster___, v16);
    sub_B2C35C(&DataManager_TypeInfo, v17);
    sub_B2C35C(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v18);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___, v19);
    sub_B2C35C(&int___TypeInfo, v20);
    sub_B2C35C(&NetworkManager_TypeInfo, v21);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v22);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v24);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v25);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v26);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v27);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v28);
    sub_B2C35C(&Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__, v29);
    sub_B2C35C(&TitleInfoEventTower___c__DisplayClass22_0_TypeInfo, v30);
    byte_4186399 = 1;
  }
  v134 = 0LL;
  entity = 0LL;
  v31 = sub_B2C42C(TitleInfoEventTower___c__DisplayClass22_0_TypeInfo);
  TitleInfoEventTower___c__DisplayClass22_0___ctor((TitleInfoEventTower___c__DisplayClass22_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_201;
  *(_QWORD *)(v31 + 16) = effectAsset;
  v132 = (_QWORD *)(v31 + 16);
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v31 + 16),
    (System_Int32_array **)effectAsset,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  *(_QWORD *)(v31 + 24) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v31 + 24), (System_Int32_array **)this, v40, v41, v42, v43, v44, v45);
  eventDetailEntity = this->fields.eventDetailEntity;
  if ( !eventDetailEntity )
    goto LABEL_74;
  EventRewardSaveData__LoadEventTowerState(eventDetailEntity->fields.eventId, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_201;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  v47 = this->fields.eventDetailEntity;
  if ( !v47 )
    goto LABEL_201;
  eventId = v47->fields.eventId;
  v49 = (QuestGroupMaster_o *)Instance;
  if ( !byte_4184DBE )
  {
    Instance = sub_B2C35C(&EventRewardSaveData_TypeInfo, v33);
    byte_4184DBE = 1;
  }
  if ( !v49 )
    goto LABEL_201;
  Instance = QuestGroupMaster__GetEventTowerQuestId(
               v49,
               eventId,
               EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField + 1,
               1,
               0LL);
  v51 = this->fields.eventDetailEntity;
  if ( !v51 )
    goto LABEL_201;
  v52 = v51->fields.eventId;
  v53 = Instance;
  if ( !byte_4184DBE )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v33);
    byte_4184DBE = 1;
  }
  TowerShiftData = (TitleInfoEventTower_o *)TitleInfoEventTower__GetTowerShiftData(
                                              this,
                                              v52,
                                              EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
                                              v50);
  v57 = (TitleInfoEventTower_TowerShiftData_o *)TowerShiftData;
  if ( !byte_4184DBE )
  {
    TowerShiftData = (TitleInfoEventTower_o *)sub_B2C35C(&EventRewardSaveData_TypeInfo, v55);
    byte_4184DBE = 1;
  }
  v130 = callback;
  if ( TitleInfoEventTower__IsForceShiftTower(
         TowerShiftData,
         v57,
         EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
         v56) )
  {
    if ( *v132 )
    {
      if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
      }
      Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !Instance )
        goto LABEL_201;
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
      if ( !v57 )
        goto LABEL_201;
      ForceShiftTowerId = v57->fields.ForceShiftTowerId;
      if ( !byte_4186465 )
      {
        Instance = sub_B2C35C(&EventRewardSaveData_TypeInfo, v33);
        byte_4186465 = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = ForceShiftTowerId;
      v59 = this->fields.eventDetailEntity;
      if ( !v59 )
        goto LABEL_201;
LABEL_25:
      EventRewardSaveData__SaveEventTowerState(v59->fields.eventId, 0LL);
      v131 = 1;
      goto LABEL_94;
    }
    goto LABEL_49;
  }
  if ( v53 < 1 )
    goto LABEL_46;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_201;
  Instance = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v53, -1, 0, 0LL);
  if ( (Instance & 1) == 0 )
  {
LABEL_46:
    if ( !byte_4184DBE )
    {
      sub_B2C35C(&EventRewardSaveData_TypeInfo, v33);
      byte_4184DBE = 1;
    }
    if ( EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField )
    {
LABEL_49:
      v131 = 0;
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
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C67 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v33);
      byte_4183C67 = 1;
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
                 (const MethodInfo_24E412C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    if ( (Instance & 1) != 0 )
    {
      v65 = this->fields.eventDetailEntity;
      if ( !v65 || !entity )
        goto LABEL_201;
      if ( v65->fields.eventId == entity->fields.eventId )
      {
        if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
        }
        Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !Instance )
          goto LABEL_201;
        MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0LL);
      }
    }
LABEL_74:
    if ( !callback )
      return;
    v66 = callback;
    goto LABEL_199;
  }
  if ( !byte_4184DBE )
  {
    Instance = sub_B2C35C(&EventRewardSaveData_TypeInfo, v33);
    byte_4184DBE = 1;
  }
  if ( EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField )
  {
    if ( *v132 )
    {
      if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
      }
      Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !Instance )
        goto LABEL_201;
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
      if ( !byte_4184DBE )
      {
        Instance = sub_B2C35C(&EventRewardSaveData_TypeInfo, v33);
        byte_4184DBE = 1;
      }
      static_fields = EventRewardSaveData_TypeInfo->static_fields;
      EventTowerState_k__BackingField = static_fields->_EventTowerState_k__BackingField;
      p_EventTowerState_k__BackingField = &static_fields->_EventTowerState_k__BackingField;
      v63 = EventTowerState_k__BackingField + 1;
      if ( !byte_4186465 )
      {
        Instance = sub_B2C35C(&EventRewardSaveData_TypeInfo, v33);
        byte_4186465 = 1;
        p_EventTowerState_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
      }
      *p_EventTowerState_k__BackingField = v63;
      v59 = this->fields.eventDetailEntity;
      if ( !v59 )
        goto LABEL_201;
      goto LABEL_25;
    }
  }
  else
  {
    for ( i = 1; ; i = byte_4184DBE )
    {
      if ( !i )
      {
        Instance = sub_B2C35C(&EventRewardSaveData_TypeInfo, v33);
        byte_4184DBE = 1;
      }
      p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
      v70 = EventRewardSaveData_TypeInfo->static_fields;
      v72 = v70->_EventTowerState_k__BackingField;
      v71 = &v70->_EventTowerState_k__BackingField;
      v73 = v72 + 1;
      if ( !byte_4186465 )
      {
        Instance = sub_B2C35C(&EventRewardSaveData_TypeInfo, v33);
        byte_4186465 = 1;
        p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
        v71 = &EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
      }
      *v71 = v73;
      v74 = this->fields.eventDetailEntity;
      if ( !v74 )
        goto LABEL_201;
      v75 = v74->fields.eventId;
      if ( !byte_4184DBE )
      {
        sub_B2C35C(&EventRewardSaveData_TypeInfo, v33);
        byte_4184DBE = 1;
        p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
      }
      Instance = QuestGroupMaster__GetEventTowerQuestId(
                   v49,
                   v75,
                   (*p_static_fields)->_EventTowerState_k__BackingField + 1,
                   1,
                   0LL);
      if ( (int)Instance < 1 )
        break;
      v68 = Instance;
      if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
      }
      Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Instance )
        goto LABEL_201;
      Instance = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v68, -1, 0, 0LL);
      if ( (Instance & 1) == 0 )
        break;
    }
    v76 = this->fields.eventDetailEntity;
    if ( !v76 )
      goto LABEL_201;
    EventRewardSaveData__SaveEventTowerState(v76->fields.eventId, 0LL);
  }
  v131 = 0;
LABEL_94:
  if ( !byte_4184DBE )
  {
    sub_B2C35C(&EventRewardSaveData_TypeInfo, v33);
    byte_4184DBE = 1;
  }
  v77 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_201;
  MasterData_WarQuestSelectionMaster = (EventTowerMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventTowerMaster___);
  Instance = sub_B2C374(int___TypeInfo, 2LL);
  v79 = this->fields.eventDetailEntity;
  if ( !v79 )
    goto LABEL_201;
  v80 = (_DWORD *)Instance;
  if ( !Instance )
    goto LABEL_201;
  v81 = *(_DWORD *)(Instance + 24);
  if ( !v81 )
    goto LABEL_202;
  v82 = v79->fields.eventId;
  *(_DWORD *)(Instance + 32) = v82;
  if ( v81 == 1 )
    goto LABEL_202;
  *(_DWORD *)(Instance + 36) = v77;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_201;
  EventTowerMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &v134, v82, v77, 0LL);
  TitleInfoEventTower__SetTowerPosition(this, v77, v83);
  if ( v134 )
    this->fields.TowerFloorMax = v134->fields.topFloor;
  v85 = this->fields.eventDetailEntity;
  if ( !v85 )
    goto LABEL_201;
  IsDispEnabled = TitleInfoEventTower__IsDispEnabled((TitleInfoEventTower_o *)Instance, v85->fields.eventId, v77, v84);
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_201;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, IsDispEnabled, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_201;
  v87 = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  for ( j = v77 - 1; ; ++j )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    v89 = this->fields.eventDetailEntity;
    if ( !v89 || !v87 )
      goto LABEL_201;
    Point = UserEventPointMaster__GetPoint(v87, Instance, v89->fields.eventId, j + 1, 0LL);
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
  v92 = this->fields.eventDetailEntity;
  if ( !v92 )
    goto LABEL_201;
  TowerEffectData = TitleInfoEventTower__GetTowerEffectData(this, v92->fields.eventId, this->fields.openEffectId, v91);
  if ( TowerEffectData )
    TitleInfoEventTower__PlayFade(
      this,
      0.0,
      1.0,
      TowerEffectData->fields.FadeInTime,
      TowerEffectData->fields.FadeInEasingType,
      0LL,
      v94);
  else
LABEL_121:
    TitleInfoEventTower__SetSpriteAlpha(this, 1.0, v33);
  v95 = 0;
  if ( j + 1 < 2 || Point )
  {
    ++j;
    v97 = v130;
    v99 = 0;
    goto LABEL_162;
  }
  if ( !v134 )
  {
    if ( v80[6] > 1u )
    {
      v80[9] = j;
      Point = this->fields.TowerFloorMax;
      EventTowerMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &v134, v80[8], j, 0LL);
      v97 = v130;
LABEL_157:
      v98 = 0;
      goto LABEL_158;
    }
LABEL_202:
    v128 = sub_B2C460(Instance);
    sub_B2C400(v128, 0LL);
  }
  if ( !byte_4184DBE )
  {
    Instance = sub_B2C35C(&EventRewardSaveData_TypeInfo, v33);
    byte_4184DBE = 1;
  }
  v96 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
  if ( v96 != j )
  {
    if ( !v131 )
    {
      ++j;
      v97 = v130;
      v98 = 0;
      Point = 0;
      goto LABEL_158;
    }
    if ( v80[6] >= 2u )
    {
      Point = this->fields.TowerFloorMax;
      Instance = EventTowerMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &v134, v80[8], v80[9], 0LL);
      if ( !v134 )
        goto LABEL_201;
      openEffectId = v134->fields.openEffectId;
      this->fields.openEffectId = openEffectId;
      if ( v80[6] > 1u )
      {
        v101 = v80[8];
        v80[9] = j;
        EventTowerMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &v134, v101, j, 0LL);
        if ( !openEffectId )
        {
          Instance = (int64_t)v134;
          v97 = v130;
          if ( !v134 )
            goto LABEL_201;
          if ( EventTowerEntity__HasFlag(v134, 2, 0LL) )
          {
            Instance = (int64_t)this->fields.spriteRoot;
            if ( !Instance )
              goto LABEL_201;
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
            x = localPosition.fields.x;
            y = localPosition.fields.y;
            z = localPosition.fields.z;
            TitleInfoEventTower__SetTowerPosition(this, j, v118);
            Instance = (int64_t)this->fields.spriteRoot;
            if ( !Instance )
              goto LABEL_201;
            Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)Instance,
                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___);
            if ( !Instance )
              goto LABEL_201;
            v136.fields.x = x;
            v136.fields.y = y;
            v136.fields.z = z;
            TitleInfoEventTowerSlideAnimation__StartSlideAnim(
              (TitleInfoEventTowerSlideAnimation_o *)Instance,
              v130,
              v136,
              v119);
          }
          v98 = 1;
          goto LABEL_158;
        }
        v102 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          v102,
          (Il2CppObject *)v31,
          Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__,
          0LL);
        v104 = this->fields.eventDetailEntity;
        v97 = v130;
        if ( !v104 )
          goto LABEL_201;
        Instance = (int64_t)TitleInfoEventTower__GetTowerEffectData(
                              this,
                              v104->fields.eventId,
                              this->fields.openEffectId,
                              v103);
        if ( Instance )
        {
          v106 = Instance;
          TitleInfoEventTower__PlayFade(
            this,
            1.0,
            0.0,
            *(float *)(Instance + 20),
            *(_DWORD *)(Instance + 24),
            0LL,
            v105);
          v107 = *(float *)(v106 + 28);
          if ( v107 <= 0.0 )
          {
            if ( !v102 )
              goto LABEL_201;
            System_Action__Invoke(v102, 0LL);
          }
          else
          {
            v108 = BasicHelper__DelayCall(v107, v102, 0LL);
            UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v108, 0LL);
          }
        }
        else
        {
          if ( !v102 )
            goto LABEL_201;
          System_Action__Invoke(v102, 0LL);
          Instance = (int64_t)this->fields.floorSprite;
          if ( !Instance )
            goto LABEL_201;
          Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_201;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        }
        this->fields.endCallback = v130;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.endCallback,
          (System_Int32_array **)v130,
          v109,
          v110,
          v111,
          v112,
          v113,
          v114);
        goto LABEL_157;
      }
    }
    goto LABEL_202;
  }
  if ( v80[6] <= 1u )
    goto LABEL_202;
  v80[9] = v96;
  Point = this->fields.TowerFloorMax;
  EventTowerMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &v134, v80[8], v96, 0LL);
  v97 = v130;
  v98 = 0;
  j = v96;
LABEL_158:
  Instance = (int64_t)v134;
  if ( !v134 )
    goto LABEL_201;
  v99 = !EventTowerEntity__HasFlag(v134, 1, 0LL);
  if ( v98 )
    v95 = 51;
  else
    v95 = 0;
LABEL_162:
  Instance = (int64_t)v134;
  if ( !v134 )
    goto LABEL_201;
  if ( !EventTowerEntity__HasFlag(v134, 2, 0LL) )
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
                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
    if ( !Instance )
      goto LABEL_201;
    TitleInfoEventTowerStamp__StampProgress(
      (TitleInfoEventTowerStamp_o *)Instance,
      Point,
      j,
      this->fields.spriteRoot,
      v121);
    v122 = 1;
  }
  else
  {
LABEL_171:
    v123 = (UnityEngine_Object_o *)this->fields.stamp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v123, 0LL, 0LL) )
    {
      Instance = (int64_t)this->fields.stamp;
      if ( !Instance )
        goto LABEL_201;
      Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                            (UnityEngine_GameObject_o *)Instance,
                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
      if ( !Instance )
        goto LABEL_201;
      TitleInfoEventTowerStamp__ResetStamp((TitleInfoEventTowerStamp_o *)Instance, v33);
    }
    v122 = 0;
  }
  Instance = (int64_t)this->fields.floorSprite;
  if ( !Instance )
    goto LABEL_201;
  Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___);
  v124 = this->fields.eventDetailEntity;
  if ( !v124 )
    goto LABEL_201;
  if ( !v134 )
    goto LABEL_201;
  if ( !Instance )
    goto LABEL_201;
  TitleInfoEventTowerFloorLabel__SetFloorLabel(
    (TitleInfoEventTowerFloorLabel_o *)Instance,
    v124->fields.eventId,
    j,
    this->fields.TowerFloorMax,
    Point,
    v134->fields.floorLabel,
    v99,
    v122,
    v129);
  Instance = (int64_t)this->fields.nameSprite;
  if ( !Instance )
    goto LABEL_201;
  Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___);
  v126 = this->fields.eventDetailEntity;
  if ( !v126 )
    goto LABEL_201;
  if ( !Instance )
    goto LABEL_201;
  TitleInfoEventTowerNameLabel__SetTowerNameLabel(
    (TitleInfoEventTowerNameLabel_o *)Instance,
    v126->fields.eventId,
    j,
    v125);
  Instance = (int64_t)this->fields.baseSprite;
  if ( !Instance )
    goto LABEL_201;
  Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___);
  if ( !Instance )
    goto LABEL_201;
  TitleInfoEventTowerBase__SetBaseSprite((TitleInfoEventTowerBase_o *)Instance, j, v122, v127);
  if ( (v131 & 1) == 0 && *v132 )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( Instance )
    {
      MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0LL);
      goto LABEL_195;
    }
LABEL_201:
    sub_B2C434(Instance, v33);
  }
LABEL_195:
  if ( !this->fields.endCallback && v97 && !v95 )
  {
    v66 = v97;
LABEL_199:
    System_Action__Invoke(v66, 0LL);
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
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  EasingObject_o *v41; // x21
  System_Action_o *v42; // x22
  System_Action_o *v43; // x23

  if ( (byte_418639D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&easingType);
    sub_B2C35C(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v13);
    sub_B2C35C(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__, v14);
    sub_B2C35C(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__, v15);
    sub_B2C35C(&TitleInfoEventTower___c__DisplayClass26_0_TypeInfo, v16);
    byte_418639D = 1;
  }
  v17 = sub_B2C42C(TitleInfoEventTower___c__DisplayClass26_0_TypeInfo);
  TitleInfoEventTower___c__DisplayClass26_0___ctor((TitleInfoEventTower___c__DisplayClass26_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_6;
  *(float *)(v17 + 24) = from;
  *(float *)(v17 + 28) = to;
  *(_QWORD *)(v17 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 32), (System_Int32_array **)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 40) = endAction;
  sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 40), (System_Int32_array **)endAction, v26, v27, v28, v29, v30, v31);
  TitleInfoEventTower__SetSpriteAlpha(this, *(float *)(v17 + 24), v32);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1AA8660 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v17 + 16) = Component_UIWidget;
  sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 16), Component_UIWidget, v35, v36, v37, v38, v39, v40);
  v41 = *(EasingObject_o **)(v17 + 16);
  v42 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v42, (Il2CppObject *)v17, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__, 0LL);
  v43 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v43, (Il2CppObject *)v17, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__, 0LL);
  if ( !v41 )
LABEL_6:
    sub_B2C434(v18, v19);
  EasingObject__Play(v41, time, v42, v43, 0.0, easingType, 0LL);
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
    sub_B2C434(baseSprite, method);
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
  __int64 v9; // x1
  struct EventDetailEntity_o *eventDetailEntity; // x8
  EventUiEntity_o *Entity; // x0
  EventUiEntity_o *v12; // x20
  UnityEngine_Object_o *spriteRoot; // x21
  UnityEngine_Transform_o *v14; // x19
  int x; // s8
  int y; // s9
  float *saveNameList; // x8
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418639A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventUiMaster___, *(_QWORD *)&towerId);
    sub_B2C35C(&EventUiEntity_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_418639A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventUiMaster___);
  if ( Instance )
  {
    eventDetailEntity = this->fields.eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_17;
    Entity = EventUiMaster__getEntity((EventUiMaster_o *)Instance, eventDetailEntity->fields.eventId, towerId, 0LL);
    if ( Entity )
    {
      v12 = Entity;
      spriteRoot = (UnityEngine_Object_o *)this->fields.spriteRoot;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(spriteRoot, 0LL, 0LL) )
      {
        v14 = this->fields.spriteRoot;
        x = v12->fields.x;
        y = v12->fields.y;
        Instance = (DataManager_o *)EventUiEntity_TypeInfo;
        if ( (BYTE3(EventUiEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventUiEntity_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo);
          Instance = (DataManager_o *)EventUiEntity_TypeInfo;
        }
        if ( v14 )
        {
          saveNameList = (float *)Instance[1].fields.saveNameList;
          v18.fields.x = *saveNameList * (float)x;
          v18.fields.y = -(float)(*saveNameList * (float)y);
          v18.fields.z = *saveNameList * 0.0;
          UnityEngine_Transform__set_localPosition(v14, v18, 0LL);
          return;
        }
LABEL_17:
        sub_B2C434(Instance, v9);
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
  __int64 v10; // x1
  UnityEngine_Animation_o *v11; // x0
  UnityEngine_Object_o *simpleAnimationData; // x22
  TitleInfoEventTower_c *v13; // x0
  System_String_o *EFFECT_ANIMATION_START_FORMAT; // x22
  Il2CppObject *v15; // x0
  System_String_o *v16; // x23
  System_String_o *EFFECT_ANIMATION_END_FORMAT; // x22
  Il2CppObject *v18; // x0
  struct System_String_o *v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Object_o *v26; // x22
  const MethodInfo *v27; // x4
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct SimpleAnimation_o **p_simpleAnimationData; // x21
  UnityEngine_Object_o *v35; // x22
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  BattleServantConfConponent_o *v43; // x0
  UnityEngine_Object_o *v44; // x22
  UnityEngine_Object_o *v45; // x21
  UnityEngine_Object_o *v46; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  BattleServantConfConponent_o *p_endCallback; // x19
  System_Action_o *v54; // x20
  struct System_Action_o *endCallback; // t1
  int32_t v56; // [xsp+8h] [xbp-48h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_418639C & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v5);
    sub_B2C35C(&TitleInfoEventTower_TypeInfo, v6);
    byte_418639C = 1;
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
      v11 = *p_animationData;
      if ( !*p_animationData )
        goto LABEL_60;
      if ( !UnityEngine_Animation__IsPlaying(v11, *p_animationName, 0LL) )
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
      v11 = (UnityEngine_Animation_o *)this->fields.simpleAnimationData;
      if ( !v11 )
        goto LABEL_60;
      if ( !SimpleAnimation__IsPlaying((SimpleAnimation_o *)v11, *p_animationName, 0LL) )
      {
LABEL_16:
        v13 = TitleInfoEventTower_TypeInfo;
        if ( (BYTE3(TitleInfoEventTower_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
          v13 = TitleInfoEventTower_TypeInfo;
        }
        EFFECT_ANIMATION_START_FORMAT = v13->static_fields->EFFECT_ANIMATION_START_FORMAT;
        openEffectId = this->fields.openEffectId;
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openEffectId);
        v16 = System_String__Format(EFFECT_ANIMATION_START_FORMAT, v15, 0LL);
        EFFECT_ANIMATION_END_FORMAT = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_END_FORMAT;
        v56 = this->fields.openEffectId;
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56);
        v19 = System_String__Format(EFFECT_ANIMATION_END_FORMAT, v18, 0LL);
        if ( System_String__op_Equality(this->fields.animationName, v16, 0LL) )
        {
          this->fields.animationName = v19;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.animationName,
            (System_Int32_array **)v19,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          v26 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
          {
            v11 = (UnityEngine_Animation_o *)this->fields.simpleAnimationData;
            if ( v11 )
            {
              SimpleAnimation__Play_16486620((SimpleAnimation_o *)v11, *p_animationName, 0LL);
LABEL_42:
              TitleInfoEventTower__Open(this, 0LL, 0LL, 1, v27);
              return;
            }
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
              goto LABEL_42;
            v11 = *p_animationData;
            if ( *p_animationData )
            {
              UnityEngine_Animation__Play_50201580(v11, *p_animationName, 0LL);
              goto LABEL_42;
            }
          }
LABEL_60:
          sub_B2C434(v11, v10);
        }
        if ( System_String__op_Equality(*p_animationName, v19, 0LL) )
        {
          this->fields.animationName = 0LL;
          sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.animationName, 0LL, v28, v29, v30, v31, v32, v33);
          p_simpleAnimationData = &this->fields.simpleAnimationData;
          v35 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          this->fields.openEffectId = 0;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
          {
            v11 = (UnityEngine_Animation_o *)*p_simpleAnimationData;
            if ( !*p_simpleAnimationData )
              goto LABEL_60;
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v11,
                                                   0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__DestroyImmediate_35315108(gameObject, 0LL);
            *p_simpleAnimationData = 0LL;
            v43 = (BattleServantConfConponent_o *)&this->fields.simpleAnimationData;
          }
          else
          {
            v45 = (UnityEngine_Object_o *)*p_animationData;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
              goto LABEL_53;
            v11 = *p_animationData;
            if ( !*p_animationData )
              goto LABEL_60;
            v46 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v11, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__DestroyImmediate_35315108(v46, 0LL);
            v43 = (BattleServantConfConponent_o *)&this->fields.animationData;
            *p_animationData = 0LL;
          }
          sub_B2C2F8(v43, 0LL, v37, v38, v39, v40, v41, v42);
LABEL_53:
          if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
          }
          v11 = (UnityEngine_Animation_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( !v11 )
            goto LABEL_60;
          MissionNotifyManager__CancelPause((MissionNotifyManager_o *)v11, 0LL);
          endCallback = this->fields.endCallback;
          p_endCallback = (BattleServantConfConponent_o *)&this->fields.endCallback;
          v54 = endCallback;
          if ( endCallback )
          {
            p_endCallback->klass = 0LL;
            sub_B2C2F8(p_endCallback, 0LL, v47, v48, v49, v50, v51, v52);
            System_Action__Invoke(v54, 0LL);
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
  sub_B2C2F8(
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
  UnityEngine_Object_o *Object_30137720; // x0
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

  if ( (byte_418533D & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v3);
    sub_B2C35C(&UnityEngine_GameObject_TypeInfo, v4);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&TitleInfoEventTower_TypeInfo, v8);
    byte_418533D = 1;
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
  Component_srcLineSprite = System_String__Concat_44305532(OBJECT_NAME_EFFECT_BASE, v13, 0LL);
  if ( !effectAsset )
    goto LABEL_44;
  Object_30137720 = AssetData__GetObject_30137720(effectAsset, Component_srcLineSprite, 0LL);
  v15 = (UnityEngine_GameObject_c **)Object_30137720;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
    || UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    if ( Object_30137720 )
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
                                                 (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_44;
  v18 = (UnityEngine_GameObject_o *)Component_srcLineSprite;
  GameObjectExtensions__SafeSetParent_31331952(
    (UnityEngine_GameObject_o *)Component_srcLineSprite,
    v17->fields.effectRoot,
    0LL);
  if ( !v18 )
    goto LABEL_44;
  v19 = this->fields.__4__this;
  Component_srcLineSprite = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 v18,
                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !v19 )
    goto LABEL_44;
  v19->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_srcLineSprite;
  sub_B2C2F8(&v19->fields.simpleAnimationData, Component_srcLineSprite);
  v20 = this->fields.__4__this;
  Component_srcLineSprite = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 v18,
                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !v20 )
    goto LABEL_44;
  v20->fields.animationData = (struct UnityEngine_Animation_o *)Component_srcLineSprite;
  sub_B2C2F8(&v20->fields.animationData, Component_srcLineSprite);
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
        sub_B2C2F8(&v22->fields.animationName, Component_srcLineSprite);
        v26 = this->fields.__4__this;
        if ( v26 )
        {
          Component_srcLineSprite = (System_String_o *)v26->fields.simpleAnimationData;
          if ( Component_srcLineSprite )
          {
            SimpleAnimation__Play_16486620((SimpleAnimation_o *)Component_srcLineSprite, v26->fields.animationName, 0LL);
            return;
          }
        }
      }
    }
LABEL_44:
    sub_B2C434(Component_srcLineSprite, method);
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
    sub_B2C2F8(&v28->fields.animationName, Component_srcLineSprite);
    v32 = this->fields.__4__this;
    if ( !v32 )
      goto LABEL_44;
    Component_srcLineSprite = (System_String_o *)v32->fields.animationData;
    if ( !Component_srcLineSprite )
      goto LABEL_44;
    UnityEngine_Animation__Play_50201580(
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
    sub_B2C434(this, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTower___c__DisplayClass31_0___GetTowerShiftData_b__1(
        TitleInfoEventTower___c__DisplayClass31_0_o *this,
        TitleInfoEventTower_TowerShiftData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTower___c__DisplayClass33_0___GetTowerEffectData_b__1(
        TitleInfoEventTower___c__DisplayClass33_0_o *this,
        TitleInfoEventTower_TowerEffectData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B2C434(this, 0LL);
  return data->fields.EffectId == this->fields.effectId;
}