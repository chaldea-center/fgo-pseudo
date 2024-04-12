void __fastcall TitleInfoEventTower___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct TitleInfoEventTower_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct TitleInfoEventTower_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42AE731 & 1) == 0 )
  {
    sub_B52984(&TitleInfoEventTower_TypeInfo);
    sub_B52984(&StringLiteral_18351/*"ef_tower_change{0}_end"*/);
    sub_B52984(&StringLiteral_18350/*"ef_tower_change"*/);
    sub_B52984(&StringLiteral_18352/*"ef_tower_change{0}_start"*/);
    byte_42AE731 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventTower_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_18352/*"ef_tower_change{0}_start"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18352/*"ef_tower_change{0}_start"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = TitleInfoEventTower_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_18351/*"ef_tower_change{0}_end"*/;
  v9->EFFECT_ANIMATION_END_FORMAT = (struct System_String_o *)StringLiteral_18351/*"ef_tower_change{0}_end"*/;
  sub_B52920((BattleServantConfConponent_o *)&v9->EFFECT_ANIMATION_END_FORMAT, v10, v11, v12, v13, v14, v15, v16);
  v17 = TitleInfoEventTower_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_18350/*"ef_tower_change"*/;
  v17->OBJECT_NAME_EFFECT_BASE = (struct System_String_o *)StringLiteral_18350/*"ef_tower_change"*/;
  sub_B52920((BattleServantConfConponent_o *)&v17->OBJECT_NAME_EFFECT_BASE, v18, v19, v20, v21, v22, v23, v24);
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

  if ( (byte_42AE728 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE728 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_18:
    sub_B52A5C(gameObject, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.animationName = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.animationName, 0LL, v5, v6, v7, v8, v9, v10);
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


int32_t __fastcall TitleInfoEventTower__GetQuestIdOnFirstFloorOfNextTower(
        TitleInfoEventTower_o *this,
        int32_t eventId,
        int32_t nowTowerId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_42AE72C & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE72C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v7);
  }
  return QuestGroupMaster__GetEventTowerQuestId((QuestGroupMaster_o *)Instance, eventId, nowTowerId + 1, 1, 0LL);
}


TitleInfoEventTower_TowerEffectData_o *__fastcall TitleInfoEventTower__GetTowerEffectData(
        TitleInfoEventTower_o *this,
        int32_t eventId,
        int32_t effectId,
        const MethodInfo *method)
{
  TitleInfoEventTower___c__DisplayClass33_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  struct TitleInfoEventTower_TowerEventInfo_array *towerEventInfoList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v11; // x20
  TitleInfoEventTower_TowerEffectData_o *result; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v13; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v14; // x20

  if ( (byte_42AE730 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___);
    sub_B52984(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
    sub_B52984(&Method_System_Func_TitleInfoEventTower_TowerEventInfo__bool___ctor__);
    sub_B52984(&Method_System_Func_TitleInfoEventTower_TowerEffectData__bool___ctor__);
    sub_B52984(&System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo);
    sub_B52984(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
    sub_B52984(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__);
    sub_B52984(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__);
    sub_B52984(&TitleInfoEventTower___c__DisplayClass33_0_TypeInfo);
    byte_42AE730 = 1;
  }
  v7 = (TitleInfoEventTower___c__DisplayClass33_0_o *)sub_B52A54(TitleInfoEventTower___c__DisplayClass33_0_TypeInfo);
  TitleInfoEventTower___c__DisplayClass33_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  v7->fields.eventId = eventId;
  v7->fields.effectId = effectId;
  towerEventInfoList = this->fields.towerEventInfoList;
  v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_TitleInfoEventTower_TowerEventInfo__bool___ctor__);
  result = (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                      (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)towerEventInfoList,
                                                      (System_Func_T__bool__o *)v11,
                                                      (const MethodInfo_1A421B0 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v13 = *(WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array **)&result->fields.FadeInTime;
    v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v14,
      (Il2CppObject *)v7,
      Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__,
      (const MethodInfo_2BC90BC *)Method_System_Func_TitleInfoEventTower_TowerEffectData__bool___ctor__);
    return (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                      v13,
                                                      (System_Func_T__bool__o *)v14,
                                                      (const MethodInfo_1A421B0 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___);
  }
  return result;
}


TitleInfoEventTower_TowerShiftData_o *__fastcall TitleInfoEventTower__GetTowerShiftData(
        TitleInfoEventTower_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  TitleInfoEventTower___c__DisplayClass31_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  struct TitleInfoEventTower_TowerEventInfo_array *towerEventInfoList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v11; // x20
  TitleInfoEventTower_TowerShiftData_o *result; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v13; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v14; // x20

  if ( (byte_42AE72E & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
    sub_B52984(&Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___);
    sub_B52984(&Method_System_Func_TitleInfoEventTower_TowerEventInfo__bool___ctor__);
    sub_B52984(&Method_System_Func_TitleInfoEventTower_TowerShiftData__bool___ctor__);
    sub_B52984(&System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo);
    sub_B52984(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
    sub_B52984(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__);
    sub_B52984(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__);
    sub_B52984(&TitleInfoEventTower___c__DisplayClass31_0_TypeInfo);
    byte_42AE72E = 1;
  }
  v7 = (TitleInfoEventTower___c__DisplayClass31_0_o *)sub_B52A54(TitleInfoEventTower___c__DisplayClass31_0_TypeInfo);
  TitleInfoEventTower___c__DisplayClass31_0___ctor(v7, 0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  v7->fields.eventId = eventId;
  v7->fields.towerId = towerId;
  towerEventInfoList = this->fields.towerEventInfoList;
  v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_TitleInfoEventTower_TowerEventInfo__bool___ctor__);
  result = (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                     (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)towerEventInfoList,
                                                     (System_Func_T__bool__o *)v11,
                                                     (const MethodInfo_1A421B0 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v13 = *(WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array **)&result->fields.CondType;
    v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v14,
      (Il2CppObject *)v7,
      Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__,
      (const MethodInfo_2BC90BC *)Method_System_Func_TitleInfoEventTower_TowerShiftData__bool___ctor__);
    return (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                     v13,
                                                     (System_Func_T__bool__o *)v14,
                                                     (const MethodInfo_1A421B0 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___);
  }
  return result;
}


bool __fastcall TitleInfoEventTower__IsDispEnabled(
        TitleInfoEventTower_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  EventUiMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  EventUiEntity_o *Entity; // x0
  EventUiEntity_o *v9; // x19

  if ( (byte_42AE72D & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_EventUiMaster___);
    sub_B52984(&Method_DataManager_GetMaster_EventUiReleaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    byte_42AE72D = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventUiMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventUiMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  Entity = EventUiMaster__getEntity(Master_WarQuestSelectionMaster, eventId, towerId, 0LL);
  if ( !Entity )
    return (char)Entity;
  v9 = Entity;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventUiMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_14:
    sub_B52A5C(Master_WarQuestSelectionMaster, v7);
  LOBYTE(Entity) = EventUiReleaseMaster__IsOpen((EventUiReleaseMaster_o *)Master_WarQuestSelectionMaster, v9, 0LL);
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

  if ( (byte_42AE72F & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    byte_42AE72F = 1;
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


bool __fastcall TitleInfoEventTower__IsOpenedNextTower(
        TitleInfoEventTower_o *this,
        int32_t eventId,
        int32_t nowTowerId,
        const MethodInfo *method)
{
  int32_t QuestIdOnFirstFloorOfNextTower; // w0
  int32_t v7; // w19
  clsQuestCheck_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_42AE72B & 1) == 0 )
  {
    sub_B52984(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    this = (TitleInfoEventTower_o *)sub_B52984(&SingletonTemplate_clsQuestCheck__TypeInfo);
    byte_42AE72B = 1;
  }
  QuestIdOnFirstFloorOfNextTower = TitleInfoEventTower__GetQuestIdOnFirstFloorOfNextTower(
                                     this,
                                     eventId,
                                     nowTowerId,
                                     method);
  if ( QuestIdOnFirstFloorOfNextTower < 1 )
    return 0;
  v7 = QuestIdOnFirstFloorOfNextTower;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v8 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v8 )
    sub_B52A5C(0LL, v9);
  return clsQuestCheck__IsQuestRelease(v8, v7, -1, 0, 0LL);
}


void __fastcall TitleInfoEventTower__Open(
        TitleInfoEventTower_o *this,
        System_Action_o *callback,
        AssetData_o *effectAsset,
        bool isFadeIn,
        const MethodInfo *method)
{
  __int64 v9; // x22
  int64_t Instance; // x0
  const MethodInfo *v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct EventDetailEntity_o *eventDetailEntity; // x8
  struct EventDetailEntity_o *v25; // x8
  int32_t eventId; // w19
  QuestGroupMaster_o *v27; // x25
  const MethodInfo *v28; // x3
  struct EventDetailEntity_o *v29; // x8
  int32_t v30; // w19
  int32_t v31; // w26
  TitleInfoEventTower_o *TowerShiftData; // x0
  const MethodInfo *v33; // x3
  TitleInfoEventTower_TowerShiftData_o *v34; // x27
  int32_t ForceShiftTowerId; // w19
  struct EventDetailEntity_o *v36; // x8
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  int32_t *p_EventTowerState_k__BackingField; // x8
  int32_t EventTowerState_k__BackingField; // t1
  int32_t v40; // w19
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  struct EventDetailEntity_o *v42; // x8
  System_Action_o *v43; // x0
  char i; // w8
  int32_t v45; // w19
  struct EventRewardSaveData_StaticFields **p_static_fields; // x8
  struct EventRewardSaveData_StaticFields *v47; // x9
  int32_t *v48; // x9
  int32_t v49; // t1
  int32_t v50; // w19
  struct EventDetailEntity_o *v51; // x9
  int32_t v52; // w19
  struct EventDetailEntity_o *v53; // x8
  int32_t v54; // w25
  EventTowerMaster_o *MasterData_WarQuestSelectionMaster; // x27
  struct EventDetailEntity_o *v56; // x8
  _DWORD *v57; // x28
  int v58; // w9
  int32_t v59; // w2
  const MethodInfo *v60; // x2
  const MethodInfo *v61; // x3
  struct EventDetailEntity_o *v62; // x8
  bool IsDispEnabled; // w19
  UserEventPointMaster_o *v64; // x19
  int32_t j; // w25
  struct EventDetailEntity_o *v66; // x8
  int32_t Point; // w26
  const MethodInfo *v68; // x3
  struct EventDetailEntity_o *v69; // x8
  TitleInfoEventTower_TowerEffectData_o *TowerEffectData; // x0
  const MethodInfo *v71; // x3
  int v72; // w21
  int32_t v73; // w19
  System_Action_o *v74; // x24
  int v75; // w21
  bool v76; // w23
  int32_t openEffectId; // w19
  int32_t v78; // w2
  System_Action_o *v79; // x23
  const MethodInfo *v80; // x3
  struct EventDetailEntity_o *v81; // x8
  const MethodInfo *v82; // x3
  int64_t v83; // x19
  float v84; // s0
  System_Collections_IEnumerator_o *v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v95; // x2
  const MethodInfo *v96; // x2
  UnityEngine_Object_o *stamp; // x19
  const MethodInfo *v98; // x4
  bool v99; // w22
  UnityEngine_Object_o *v100; // x19
  struct EventDetailEntity_o *v101; // x9
  const MethodInfo *v102; // x3
  struct EventDetailEntity_o *v103; // x8
  const MethodInfo *v104; // x3
  __int64 v105; // x0
  const MethodInfo *v106; // [xsp+0h] [xbp-A0h]
  System_Action_o *v107; // [xsp+10h] [xbp-90h]
  int v108; // [xsp+1Ch] [xbp-84h]
  _QWORD *v109; // [xsp+20h] [xbp-80h]
  WarEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  EventTowerEntity_o *v111; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42AE726 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___);
    sub_B52984(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___);
    sub_B52984(&Method_DataManager_GetMasterData_EventTowerMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_B52984(&Method_DataManager_GetMaster_WarMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B52984(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__);
    sub_B52984(&TitleInfoEventTower___c__DisplayClass22_0_TypeInfo);
    byte_42AE726 = 1;
  }
  v111 = 0LL;
  entity = 0LL;
  v9 = sub_B52A54(TitleInfoEventTower___c__DisplayClass22_0_TypeInfo);
  TitleInfoEventTower___c__DisplayClass22_0___ctor((TitleInfoEventTower___c__DisplayClass22_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_201;
  *(_QWORD *)(v9 + 16) = effectAsset;
  v109 = (_QWORD *)(v9 + 16);
  sub_B52920(
    (BattleServantConfConponent_o *)(v9 + 16),
    (System_Int32_array **)effectAsset,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  *(_QWORD *)(v9 + 24) = this;
  sub_B52920((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  eventDetailEntity = this->fields.eventDetailEntity;
  if ( !eventDetailEntity )
    goto LABEL_74;
  EventRewardSaveData__LoadEventTowerState(eventDetailEntity->fields.eventId, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_201;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  v25 = this->fields.eventDetailEntity;
  if ( !v25 )
    goto LABEL_201;
  eventId = v25->fields.eventId;
  v27 = (QuestGroupMaster_o *)Instance;
  if ( !byte_42AC7AD )
  {
    Instance = sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42AC7AD = 1;
  }
  if ( !v27 )
    goto LABEL_201;
  Instance = QuestGroupMaster__GetEventTowerQuestId(
               v27,
               eventId,
               EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField + 1,
               1,
               0LL);
  v29 = this->fields.eventDetailEntity;
  if ( !v29 )
    goto LABEL_201;
  v30 = v29->fields.eventId;
  v31 = Instance;
  if ( !byte_42AC7AD )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42AC7AD = 1;
  }
  TowerShiftData = (TitleInfoEventTower_o *)TitleInfoEventTower__GetTowerShiftData(
                                              this,
                                              v30,
                                              EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
                                              v28);
  v34 = (TitleInfoEventTower_TowerShiftData_o *)TowerShiftData;
  if ( !byte_42AC7AD )
  {
    TowerShiftData = (TitleInfoEventTower_o *)sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42AC7AD = 1;
  }
  v107 = callback;
  if ( TitleInfoEventTower__IsForceShiftTower(
         TowerShiftData,
         v34,
         EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
         v33) )
  {
    if ( *v109 )
    {
      if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
      }
      Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !Instance )
        goto LABEL_201;
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
      if ( !v34 )
        goto LABEL_201;
      ForceShiftTowerId = v34->fields.ForceShiftTowerId;
      if ( !byte_42AE7F3 )
      {
        Instance = sub_B52984(&EventRewardSaveData_TypeInfo);
        byte_42AE7F3 = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = ForceShiftTowerId;
      v36 = this->fields.eventDetailEntity;
      if ( !v36 )
        goto LABEL_201;
LABEL_25:
      EventRewardSaveData__SaveEventTowerState(v36->fields.eventId, 0LL);
      v108 = 1;
      goto LABEL_94;
    }
    goto LABEL_49;
  }
  if ( v31 < 1 )
    goto LABEL_46;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_201;
  Instance = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v31, -1, 0, 0LL);
  if ( (Instance & 1) == 0 )
  {
LABEL_46:
    if ( !byte_42AC7AD )
    {
      sub_B52984(&EventRewardSaveData_TypeInfo);
      byte_42AC7AD = 1;
    }
    if ( EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField )
    {
LABEL_49:
      v108 = 0;
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
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42AC2A2 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2A2 = 1;
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
                 (const MethodInfo_23E2334 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    if ( (Instance & 1) != 0 )
    {
      v42 = this->fields.eventDetailEntity;
      if ( !v42 || !entity )
        goto LABEL_201;
      if ( v42->fields.eventId == entity->fields.eventId )
      {
        if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
        }
        Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !Instance )
          goto LABEL_201;
        MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0LL);
      }
    }
LABEL_74:
    if ( !callback )
      return;
    v43 = callback;
    goto LABEL_199;
  }
  if ( !byte_42AC7AD )
  {
    Instance = sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42AC7AD = 1;
  }
  if ( EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField )
  {
    if ( *v109 )
    {
      if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
      }
      Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !Instance )
        goto LABEL_201;
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
      if ( !byte_42AC7AD )
      {
        Instance = sub_B52984(&EventRewardSaveData_TypeInfo);
        byte_42AC7AD = 1;
      }
      static_fields = EventRewardSaveData_TypeInfo->static_fields;
      EventTowerState_k__BackingField = static_fields->_EventTowerState_k__BackingField;
      p_EventTowerState_k__BackingField = &static_fields->_EventTowerState_k__BackingField;
      v40 = EventTowerState_k__BackingField + 1;
      if ( !byte_42AE7F3 )
      {
        Instance = sub_B52984(&EventRewardSaveData_TypeInfo);
        byte_42AE7F3 = 1;
        p_EventTowerState_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
      }
      *p_EventTowerState_k__BackingField = v40;
      v36 = this->fields.eventDetailEntity;
      if ( !v36 )
        goto LABEL_201;
      goto LABEL_25;
    }
  }
  else
  {
    for ( i = 1; ; i = byte_42AC7AD )
    {
      if ( !i )
      {
        Instance = sub_B52984(&EventRewardSaveData_TypeInfo);
        byte_42AC7AD = 1;
      }
      p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
      v47 = EventRewardSaveData_TypeInfo->static_fields;
      v49 = v47->_EventTowerState_k__BackingField;
      v48 = &v47->_EventTowerState_k__BackingField;
      v50 = v49 + 1;
      if ( !byte_42AE7F3 )
      {
        Instance = sub_B52984(&EventRewardSaveData_TypeInfo);
        byte_42AE7F3 = 1;
        p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
        v48 = &EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
      }
      *v48 = v50;
      v51 = this->fields.eventDetailEntity;
      if ( !v51 )
        goto LABEL_201;
      v52 = v51->fields.eventId;
      if ( !byte_42AC7AD )
      {
        sub_B52984(&EventRewardSaveData_TypeInfo);
        byte_42AC7AD = 1;
        p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
      }
      Instance = QuestGroupMaster__GetEventTowerQuestId(
                   v27,
                   v52,
                   (*p_static_fields)->_EventTowerState_k__BackingField + 1,
                   1,
                   0LL);
      if ( (int)Instance < 1 )
        break;
      v45 = Instance;
      if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
      }
      Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Instance )
        goto LABEL_201;
      Instance = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v45, -1, 0, 0LL);
      if ( (Instance & 1) == 0 )
        break;
    }
    v53 = this->fields.eventDetailEntity;
    if ( !v53 )
      goto LABEL_201;
    EventRewardSaveData__SaveEventTowerState(v53->fields.eventId, 0LL);
  }
  v108 = 0;
LABEL_94:
  if ( !byte_42AC7AD )
  {
    sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42AC7AD = 1;
  }
  v54 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_201;
  MasterData_WarQuestSelectionMaster = (EventTowerMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventTowerMaster___);
  Instance = sub_B5299C(int___TypeInfo, 2LL);
  v56 = this->fields.eventDetailEntity;
  if ( !v56 )
    goto LABEL_201;
  v57 = (_DWORD *)Instance;
  if ( !Instance )
    goto LABEL_201;
  v58 = *(_DWORD *)(Instance + 24);
  if ( !v58 )
    goto LABEL_202;
  v59 = v56->fields.eventId;
  *(_DWORD *)(Instance + 32) = v59;
  if ( v58 == 1 )
    goto LABEL_202;
  *(_DWORD *)(Instance + 36) = v54;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_201;
  EventTowerMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &v111, v59, v54, 0LL);
  TitleInfoEventTower__SetTowerPosition(this, v54, v60);
  if ( v111 )
    this->fields.TowerFloorMax = v111->fields.topFloor;
  v62 = this->fields.eventDetailEntity;
  if ( !v62 )
    goto LABEL_201;
  IsDispEnabled = TitleInfoEventTower__IsDispEnabled((TitleInfoEventTower_o *)Instance, v62->fields.eventId, v54, v61);
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_201;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, IsDispEnabled, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_201;
  v64 = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  for ( j = v54 - 1; ; ++j )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    v66 = this->fields.eventDetailEntity;
    if ( !v66 || !v64 )
      goto LABEL_201;
    Point = UserEventPointMaster__GetPoint(v64, Instance, v66->fields.eventId, j + 1, 0LL);
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
  v69 = this->fields.eventDetailEntity;
  if ( !v69 )
    goto LABEL_201;
  TowerEffectData = TitleInfoEventTower__GetTowerEffectData(this, v69->fields.eventId, this->fields.openEffectId, v68);
  if ( TowerEffectData )
    TitleInfoEventTower__PlayFade(
      this,
      0.0,
      1.0,
      TowerEffectData->fields.FadeInTime,
      TowerEffectData->fields.FadeInEasingType,
      0LL,
      v71);
  else
LABEL_121:
    TitleInfoEventTower__SetSpriteAlpha(this, 1.0, v11);
  v72 = 0;
  if ( j + 1 < 2 || Point )
  {
    ++j;
    v74 = v107;
    v76 = 0;
    goto LABEL_162;
  }
  if ( !v111 )
  {
    if ( v57[6] > 1u )
    {
      v57[9] = j;
      Point = this->fields.TowerFloorMax;
      EventTowerMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &v111, v57[8], j, 0LL);
      v74 = v107;
LABEL_157:
      v75 = 0;
      goto LABEL_158;
    }
LABEL_202:
    v105 = sub_B52A88(Instance);
    sub_B52A28(v105, 0LL);
  }
  if ( !byte_42AC7AD )
  {
    Instance = sub_B52984(&EventRewardSaveData_TypeInfo);
    byte_42AC7AD = 1;
  }
  v73 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
  if ( v73 != j )
  {
    if ( !v108 )
    {
      ++j;
      v74 = v107;
      v75 = 0;
      Point = 0;
      goto LABEL_158;
    }
    if ( v57[6] >= 2u )
    {
      Point = this->fields.TowerFloorMax;
      Instance = EventTowerMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &v111, v57[8], v57[9], 0LL);
      if ( !v111 )
        goto LABEL_201;
      openEffectId = v111->fields.openEffectId;
      this->fields.openEffectId = openEffectId;
      if ( v57[6] > 1u )
      {
        v78 = v57[8];
        v57[9] = j;
        EventTowerMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &v111, v78, j, 0LL);
        if ( !openEffectId )
        {
          Instance = (int64_t)v111;
          v74 = v107;
          if ( !v111 )
            goto LABEL_201;
          if ( EventTowerEntity__HasFlag(v111, 2, 0LL) )
          {
            Instance = (int64_t)this->fields.spriteRoot;
            if ( !Instance )
              goto LABEL_201;
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
            x = localPosition.fields.x;
            y = localPosition.fields.y;
            z = localPosition.fields.z;
            TitleInfoEventTower__SetTowerPosition(this, j, v95);
            Instance = (int64_t)this->fields.spriteRoot;
            if ( !Instance )
              goto LABEL_201;
            Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)Instance,
                                  (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___);
            if ( !Instance )
              goto LABEL_201;
            v113.fields.x = x;
            v113.fields.y = y;
            v113.fields.z = z;
            TitleInfoEventTowerSlideAnimation__StartSlideAnim(
              (TitleInfoEventTowerSlideAnimation_o *)Instance,
              v107,
              v113,
              v96);
          }
          v75 = 1;
          goto LABEL_158;
        }
        v79 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(
          v79,
          (Il2CppObject *)v9,
          Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__,
          0LL);
        v81 = this->fields.eventDetailEntity;
        v74 = v107;
        if ( !v81 )
          goto LABEL_201;
        Instance = (int64_t)TitleInfoEventTower__GetTowerEffectData(
                              this,
                              v81->fields.eventId,
                              this->fields.openEffectId,
                              v80);
        if ( Instance )
        {
          v83 = Instance;
          TitleInfoEventTower__PlayFade(this, 1.0, 0.0, *(float *)(Instance + 20), *(_DWORD *)(Instance + 24), 0LL, v82);
          v84 = *(float *)(v83 + 28);
          if ( v84 <= 0.0 )
          {
            if ( !v79 )
              goto LABEL_201;
            System_Action__Invoke(v79, 0LL);
          }
          else
          {
            v85 = BasicHelper__DelayCall(v84, v79, 0LL);
            UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v85, 0LL);
          }
        }
        else
        {
          if ( !v79 )
            goto LABEL_201;
          System_Action__Invoke(v79, 0LL);
          Instance = (int64_t)this->fields.floorSprite;
          if ( !Instance )
            goto LABEL_201;
          Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_201;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        }
        this->fields.endCallback = v107;
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.endCallback,
          (System_Int32_array **)v107,
          v86,
          v87,
          v88,
          v89,
          v90,
          v91);
        goto LABEL_157;
      }
    }
    goto LABEL_202;
  }
  if ( v57[6] <= 1u )
    goto LABEL_202;
  v57[9] = v73;
  Point = this->fields.TowerFloorMax;
  EventTowerMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &v111, v57[8], v73, 0LL);
  v74 = v107;
  v75 = 0;
  j = v73;
LABEL_158:
  Instance = (int64_t)v111;
  if ( !v111 )
    goto LABEL_201;
  v76 = !EventTowerEntity__HasFlag(v111, 1, 0LL);
  if ( v75 )
    v72 = 51;
  else
    v72 = 0;
LABEL_162:
  Instance = (int64_t)v111;
  if ( !v111 )
    goto LABEL_201;
  if ( !EventTowerEntity__HasFlag(v111, 2, 0LL) )
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
                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
    if ( !Instance )
      goto LABEL_201;
    TitleInfoEventTowerStamp__StampProgress(
      (TitleInfoEventTowerStamp_o *)Instance,
      Point,
      j,
      this->fields.spriteRoot,
      v98);
    v99 = 1;
  }
  else
  {
LABEL_171:
    v100 = (UnityEngine_Object_o *)this->fields.stamp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v100, 0LL, 0LL) )
    {
      Instance = (int64_t)this->fields.stamp;
      if ( !Instance )
        goto LABEL_201;
      Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                            (UnityEngine_GameObject_o *)Instance,
                            (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
      if ( !Instance )
        goto LABEL_201;
      TitleInfoEventTowerStamp__ResetStamp((TitleInfoEventTowerStamp_o *)Instance, v11);
    }
    v99 = 0;
  }
  Instance = (int64_t)this->fields.floorSprite;
  if ( !Instance )
    goto LABEL_201;
  Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___);
  v101 = this->fields.eventDetailEntity;
  if ( !v101 )
    goto LABEL_201;
  if ( !v111 )
    goto LABEL_201;
  if ( !Instance )
    goto LABEL_201;
  TitleInfoEventTowerFloorLabel__SetFloorLabel(
    (TitleInfoEventTowerFloorLabel_o *)Instance,
    v101->fields.eventId,
    j,
    this->fields.TowerFloorMax,
    Point,
    v111->fields.floorLabel,
    v76,
    v99,
    v106);
  Instance = (int64_t)this->fields.nameSprite;
  if ( !Instance )
    goto LABEL_201;
  Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___);
  v103 = this->fields.eventDetailEntity;
  if ( !v103 )
    goto LABEL_201;
  if ( !Instance )
    goto LABEL_201;
  TitleInfoEventTowerNameLabel__SetTowerNameLabel(
    (TitleInfoEventTowerNameLabel_o *)Instance,
    v103->fields.eventId,
    j,
    v102);
  Instance = (int64_t)this->fields.baseSprite;
  if ( !Instance )
    goto LABEL_201;
  Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_1A491D8 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___);
  if ( !Instance )
    goto LABEL_201;
  TitleInfoEventTowerBase__SetBaseSprite((TitleInfoEventTowerBase_o *)Instance, j, v99, v104);
  if ( (v108 & 1) == 0 && *v109 )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( Instance )
    {
      MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0LL);
      goto LABEL_195;
    }
LABEL_201:
    sub_B52A5C(Instance, v11);
  }
LABEL_195:
  if ( !this->fields.endCallback && v74 && !v72 )
  {
    v43 = v74;
LABEL_199:
    System_Action__Invoke(v43, 0LL);
  }
}


void __fastcall TitleInfoEventTower__PlayFade(
        TitleInfoEventTower_o *this,
        float from,
        float to,
        float time,
        int32_t easingType,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  EasingObject_o *v37; // x21
  System_Action_o *v38; // x22
  System_Action_o *v39; // x23

  if ( (byte_42AE72A & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_B52984(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__);
    sub_B52984(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__);
    sub_B52984(&TitleInfoEventTower___c__DisplayClass26_0_TypeInfo);
    byte_42AE72A = 1;
  }
  v13 = sub_B52A54(TitleInfoEventTower___c__DisplayClass26_0_TypeInfo);
  TitleInfoEventTower___c__DisplayClass26_0___ctor((TitleInfoEventTower___c__DisplayClass26_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_6;
  *(float *)(v13 + 24) = from;
  *(float *)(v13 + 28) = to;
  *(_QWORD *)(v13 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v13 + 32), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 40) = endAction;
  sub_B52920((BattleServantConfConponent_o *)(v13 + 40), (System_Int32_array **)endAction, v22, v23, v24, v25, v26, v27);
  TitleInfoEventTower__SetSpriteAlpha(this, *(float *)(v13 + 24), v28);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1B7BF3C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v13 + 16) = Component_UIWidget;
  sub_B52920((BattleServantConfConponent_o *)(v13 + 16), Component_UIWidget, v31, v32, v33, v34, v35, v36);
  v37 = *(EasingObject_o **)(v13 + 16);
  v38 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)v13, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__, 0LL);
  v39 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v39, (Il2CppObject *)v13, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__, 0LL);
  if ( !v37 )
LABEL_6:
    sub_B52A5C(v14, v15);
  EasingObject__Play(v37, time, v38, v39, 0.0, easingType, 0LL);
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
    sub_B52A5C(baseSprite, method);
  }
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, long double))baseSprite->klass->vtable._8_set_alpha.method)(
    baseSprite,
    baseSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    v5);
}


void __fastcall TitleInfoEventTower__SetTowerPosition(
        TitleInfoEventTower_o *this,
        int32_t towerId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct EventDetailEntity_o *eventDetailEntity; // x8
  EventUiEntity_o *Entity; // x0
  EventUiEntity_o *v9; // x20
  UnityEngine_Object_o *spriteRoot; // x21
  UnityEngine_Transform_o *v11; // x19
  int x; // s8
  int y; // s9
  float *saveNameList; // x8
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42AE727 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventUiMaster___);
    sub_B52984(&EventUiEntity_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AE727 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventUiMaster___);
  if ( Instance )
  {
    eventDetailEntity = this->fields.eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_17;
    Entity = EventUiMaster__getEntity((EventUiMaster_o *)Instance, eventDetailEntity->fields.eventId, towerId, 0LL);
    if ( Entity )
    {
      v9 = Entity;
      spriteRoot = (UnityEngine_Object_o *)this->fields.spriteRoot;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(spriteRoot, 0LL, 0LL) )
      {
        v11 = this->fields.spriteRoot;
        x = v9->fields.x;
        y = v9->fields.y;
        Instance = (DataManager_o *)EventUiEntity_TypeInfo;
        if ( (BYTE3(EventUiEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventUiEntity_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo);
          Instance = (DataManager_o *)EventUiEntity_TypeInfo;
        }
        if ( v11 )
        {
          saveNameList = (float *)Instance[1].fields.saveNameList;
          v15.fields.x = *saveNameList * (float)x;
          v15.fields.y = -(float)(*saveNameList * (float)y);
          v15.fields.z = *saveNameList * 0.0;
          UnityEngine_Transform__set_localPosition(v11, v15, 0LL);
          return;
        }
LABEL_17:
        sub_B52A5C(Instance, v6);
      }
    }
  }
}


void __fastcall TitleInfoEventTower__Update(TitleInfoEventTower_o *this, const MethodInfo *method)
{
  System_String_o **p_animationName; // x21
  struct UnityEngine_Animation_o **p_animationData; // x20
  UnityEngine_Object_o *animationData; // x22
  __int64 v6; // x1
  UnityEngine_Animation_o *v7; // x0
  UnityEngine_Object_o *simpleAnimationData; // x22
  TitleInfoEventTower_c *v9; // x0
  System_String_o *EFFECT_ANIMATION_START_FORMAT; // x22
  Il2CppObject *v11; // x0
  System_String_o *v12; // x23
  System_String_o *EFFECT_ANIMATION_END_FORMAT; // x22
  Il2CppObject *v14; // x0
  struct System_String_o *v15; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_Object_o *v22; // x22
  const MethodInfo *v23; // x4
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct SimpleAnimation_o **p_simpleAnimationData; // x21
  UnityEngine_Object_o *v31; // x22
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  BattleServantConfConponent_o *v39; // x0
  UnityEngine_Object_o *v40; // x22
  UnityEngine_Object_o *v41; // x21
  UnityEngine_Object_o *v42; // x21
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  BattleServantConfConponent_o *p_endCallback; // x19
  System_Action_o *v50; // x20
  struct System_Action_o *endCallback; // t1
  int32_t v52; // [xsp+8h] [xbp-48h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42AE729 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B52984(&TitleInfoEventTower_TypeInfo);
    byte_42AE729 = 1;
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
      v7 = *p_animationData;
      if ( !*p_animationData )
        goto LABEL_60;
      if ( !UnityEngine_Animation__IsPlaying(v7, *p_animationName, 0LL) )
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
      v7 = (UnityEngine_Animation_o *)this->fields.simpleAnimationData;
      if ( !v7 )
        goto LABEL_60;
      if ( !SimpleAnimation__IsPlaying((SimpleAnimation_o *)v7, *p_animationName, 0LL) )
      {
LABEL_16:
        v9 = TitleInfoEventTower_TypeInfo;
        if ( (BYTE3(TitleInfoEventTower_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
          v9 = TitleInfoEventTower_TypeInfo;
        }
        EFFECT_ANIMATION_START_FORMAT = v9->static_fields->EFFECT_ANIMATION_START_FORMAT;
        openEffectId = this->fields.openEffectId;
        v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openEffectId);
        v12 = System_String__Format(EFFECT_ANIMATION_START_FORMAT, v11, 0LL);
        EFFECT_ANIMATION_END_FORMAT = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_END_FORMAT;
        v52 = this->fields.openEffectId;
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52);
        v15 = System_String__Format(EFFECT_ANIMATION_END_FORMAT, v14, 0LL);
        if ( System_String__op_Equality(this->fields.animationName, v12, 0LL) )
        {
          this->fields.animationName = v15;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.animationName,
            (System_Int32_array **)v15,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21);
          v22 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
          {
            v7 = (UnityEngine_Animation_o *)this->fields.simpleAnimationData;
            if ( v7 )
            {
              SimpleAnimation__Play_16625408((SimpleAnimation_o *)v7, *p_animationName, 0LL);
LABEL_42:
              TitleInfoEventTower__Open(this, 0LL, 0LL, 1, v23);
              return;
            }
          }
          else
          {
            v40 = (UnityEngine_Object_o *)*p_animationData;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality(v40, 0LL, 0LL) )
              goto LABEL_42;
            v7 = *p_animationData;
            if ( *p_animationData )
            {
              UnityEngine_Animation__Play_51067744(v7, *p_animationName, 0LL);
              goto LABEL_42;
            }
          }
LABEL_60:
          sub_B52A5C(v7, v6);
        }
        if ( System_String__op_Equality(*p_animationName, v15, 0LL) )
        {
          this->fields.animationName = 0LL;
          sub_B52920((BattleServantConfConponent_o *)&this->fields.animationName, 0LL, v24, v25, v26, v27, v28, v29);
          p_simpleAnimationData = &this->fields.simpleAnimationData;
          v31 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          this->fields.openEffectId = 0;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
          {
            v7 = (UnityEngine_Animation_o *)*p_simpleAnimationData;
            if ( !*p_simpleAnimationData )
              goto LABEL_60;
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v7,
                                                   0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__DestroyImmediate_35617168(gameObject, 0LL);
            *p_simpleAnimationData = 0LL;
            v39 = (BattleServantConfConponent_o *)&this->fields.simpleAnimationData;
          }
          else
          {
            v41 = (UnityEngine_Object_o *)*p_animationData;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality(v41, 0LL, 0LL) )
              goto LABEL_53;
            v7 = *p_animationData;
            if ( !*p_animationData )
              goto LABEL_60;
            v42 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v7, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__DestroyImmediate_35617168(v42, 0LL);
            v39 = (BattleServantConfConponent_o *)&this->fields.animationData;
            *p_animationData = 0LL;
          }
          sub_B52920(v39, 0LL, v33, v34, v35, v36, v37, v38);
LABEL_53:
          if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
          }
          v7 = (UnityEngine_Animation_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( !v7 )
            goto LABEL_60;
          MissionNotifyManager__CancelPause((MissionNotifyManager_o *)v7, 0LL);
          endCallback = this->fields.endCallback;
          p_endCallback = (BattleServantConfConponent_o *)&this->fields.endCallback;
          v50 = endCallback;
          if ( endCallback )
          {
            p_endCallback->klass = 0LL;
            sub_B52920(p_endCallback, 0LL, v43, v44, v45, v46, v47, v48);
            System_Action__Invoke(v50, 0LL);
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
  sub_B52920(
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
  AssetData_o *effectAsset; // x20
  System_String_o *Component_srcLineSprite; // x0
  struct TitleInfoEventTower_o *_4__this; // x8
  System_String_o *OBJECT_NAME_EFFECT_BASE; // x21
  System_String_o *v7; // x0
  UnityEngine_Object_o *Object_30344972; // x0
  UnityEngine_GameObject_c **v9; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v10; // x0
  struct TitleInfoEventTower_o *v11; // x8
  UnityEngine_GameObject_o *v12; // x20
  struct TitleInfoEventTower_o *v13; // x21
  struct TitleInfoEventTower_o *v14; // x21
  struct TitleInfoEventTower_o *v15; // x8
  struct TitleInfoEventTower_o *v16; // x20
  struct TitleInfoEventTower_o *v17; // x8
  System_String_o *EFFECT_ANIMATION_START_FORMAT; // x21
  Il2CppObject *v19; // x0
  struct TitleInfoEventTower_o *v20; // x8
  UnityEngine_Object_o *animationData; // x20
  struct TitleInfoEventTower_o *v22; // x20
  struct TitleInfoEventTower_o *v23; // x8
  System_String_o *v24; // x21
  Il2CppObject *v25; // x0
  struct TitleInfoEventTower_o *v26; // x8
  int32_t v27; // [xsp+8h] [xbp-28h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42AD9E2 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B52984(&UnityEngine_GameObject_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&TitleInfoEventTower_TypeInfo);
    byte_42AD9E2 = 1;
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
  v7 = System_Int32__ToString((int)_4__this + 112, 0LL);
  Component_srcLineSprite = System_String__Concat_44568316(OBJECT_NAME_EFFECT_BASE, v7, 0LL);
  if ( !effectAsset )
    goto LABEL_44;
  Object_30344972 = AssetData__GetObject_30344972(effectAsset, Component_srcLineSprite, 0LL);
  v9 = (UnityEngine_GameObject_c **)Object_30344972;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
    || UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    if ( Object_30344972 )
      goto LABEL_11;
LABEL_15:
    v10 = 0LL;
    goto LABEL_16;
  }
  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !v9 )
    goto LABEL_15;
LABEL_11:
  if ( *v9 == UnityEngine_GameObject_TypeInfo )
    v10 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v9;
  else
    v10 = 0LL;
LABEL_16:
  Component_srcLineSprite = (System_String_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                 v10,
                                                 (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_44;
  v12 = (UnityEngine_GameObject_o *)Component_srcLineSprite;
  GameObjectExtensions__SafeSetParent_32091088(
    (UnityEngine_GameObject_o *)Component_srcLineSprite,
    v11->fields.effectRoot,
    0LL);
  if ( !v12 )
    goto LABEL_44;
  v13 = this->fields.__4__this;
  Component_srcLineSprite = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 v12,
                                                 (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !v13 )
    goto LABEL_44;
  v13->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_srcLineSprite;
  sub_B52920(&v13->fields.simpleAnimationData);
  v14 = this->fields.__4__this;
  Component_srcLineSprite = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 v12,
                                                 (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !v14 )
    goto LABEL_44;
  v14->fields.animationData = (struct UnityEngine_Animation_o *)Component_srcLineSprite;
  sub_B52920(&v14->fields.animationData);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_44;
  Component_srcLineSprite = (System_String_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)v15->fields.simpleAnimationData,
                                                 0LL,
                                                 0LL);
  v16 = this->fields.__4__this;
  if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
  {
    Component_srcLineSprite = (System_String_o *)TitleInfoEventTower_TypeInfo;
    v17 = this->fields.__4__this;
    if ( (BYTE3(TitleInfoEventTower_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v17 = this->fields.__4__this;
      if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
        v17 = this->fields.__4__this;
      }
    }
    if ( v17 )
    {
      EFFECT_ANIMATION_START_FORMAT = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT;
      openEffectId = v17->fields.openEffectId;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openEffectId);
      Component_srcLineSprite = System_String__Format(EFFECT_ANIMATION_START_FORMAT, v19, 0LL);
      if ( v16 )
      {
        v16->fields.animationName = Component_srcLineSprite;
        sub_B52920(&v16->fields.animationName);
        v20 = this->fields.__4__this;
        if ( v20 )
        {
          Component_srcLineSprite = (System_String_o *)v20->fields.simpleAnimationData;
          if ( Component_srcLineSprite )
          {
            SimpleAnimation__Play_16625408((SimpleAnimation_o *)Component_srcLineSprite, v20->fields.animationName, 0LL);
            return;
          }
        }
      }
    }
LABEL_44:
    sub_B52A5C(Component_srcLineSprite, method);
  }
  if ( !v16 )
    goto LABEL_44;
  animationData = (UnityEngine_Object_o *)v16->fields.animationData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(animationData, 0LL, 0LL) )
  {
    Component_srcLineSprite = (System_String_o *)TitleInfoEventTower_TypeInfo;
    v22 = this->fields.__4__this;
    v23 = v22;
    if ( (BYTE3(TitleInfoEventTower_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v23 = this->fields.__4__this;
      if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
        v23 = this->fields.__4__this;
      }
    }
    if ( !v23 )
      goto LABEL_44;
    v24 = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT;
    v27 = v23->fields.openEffectId;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
    Component_srcLineSprite = System_String__Format(v24, v25, 0LL);
    if ( !v22 )
      goto LABEL_44;
    v22->fields.animationName = Component_srcLineSprite;
    sub_B52920(&v22->fields.animationName);
    v26 = this->fields.__4__this;
    if ( !v26 )
      goto LABEL_44;
    Component_srcLineSprite = (System_String_o *)v26->fields.animationData;
    if ( !Component_srcLineSprite )
      goto LABEL_44;
    UnityEngine_Animation__Play_51067744(
      (UnityEngine_Animation_o *)Component_srcLineSprite,
      v26->fields.animationName,
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTower___c__DisplayClass31_0___GetTowerShiftData_b__1(
        TitleInfoEventTower___c__DisplayClass31_0_o *this,
        TitleInfoEventTower_TowerShiftData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTower___c__DisplayClass33_0___GetTowerEffectData_b__1(
        TitleInfoEventTower___c__DisplayClass33_0_o *this,
        TitleInfoEventTower_TowerEffectData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B52A5C(this, 0LL);
  return data->fields.EffectId == this->fields.effectId;
}