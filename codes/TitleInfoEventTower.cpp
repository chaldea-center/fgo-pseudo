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

  if ( (byte_40F83F5 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventTower_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_18148/*"ef_tower_change{0}_end"*/, v8);
    sub_B16FFC(&StringLiteral_18147/*"ef_tower_change"*/, v9);
    sub_B16FFC(&StringLiteral_18149/*"ef_tower_change{0}_start"*/, v10);
    byte_40F83F5 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventTower_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_18149/*"ef_tower_change{0}_start"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18149/*"ef_tower_change{0}_start"*/;
  sub_B16F98(static_fields, v12, v2, v3, v4, v5, v6, v7);
  v13 = TitleInfoEventTower_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_18148/*"ef_tower_change{0}_end"*/;
  v13->EFFECT_ANIMATION_END_FORMAT = (struct System_String_o *)StringLiteral_18148/*"ef_tower_change{0}_end"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v13->EFFECT_ANIMATION_END_FORMAT, v14, v15, v16, v17, v18, v19, v20);
  v21 = TitleInfoEventTower_TypeInfo->static_fields;
  v22 = (System_Int32_array **)StringLiteral_18147/*"ef_tower_change"*/;
  v21->OBJECT_NAME_EFFECT_BASE = (struct System_String_o *)StringLiteral_18147/*"ef_tower_change"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v21->OBJECT_NAME_EFFECT_BASE, v22, v23, v24, v25, v26, v27, v28);
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
  UnityEngine_Component_o *v11; // x0
  UnityEngine_Object_o *animationData; // x20
  UnityEngine_GameObject_o *v13; // x0

  if ( (byte_40F83EC & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F83EC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_18:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.animationName = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.animationName, 0LL, v4, v5, v6, v7, v8, v9);
  simpleAnimationData = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimationData, 0LL, 0LL) )
  {
    v11 = (UnityEngine_Component_o *)this->fields.simpleAnimationData;
    if ( !v11 )
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
    v11 = (UnityEngine_Component_o *)this->fields.animationData;
    if ( !v11 )
      goto LABEL_18;
  }
  v13 = UnityEngine_Component__get_gameObject(v11, 0LL);
  if ( !v13 )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(v13, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TitleInfoEventTower__GetQuestIdOnFirstFloorOfNextTower(
        TitleInfoEventTower_o *this,
        int32_t eventId,
        int32_t nowTowerId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  QuestGroupMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40F83F0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F83F0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (QuestGroupMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                     (DataManager_o *)Instance,
                                                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return QuestGroupMaster__GetEventTowerQuestId(MasterData_WarQuestSelectionMaster, eventId, nowTowerId + 1, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
TitleInfoEventTower_TowerEffectData_o *__fastcall TitleInfoEventTower__GetTowerEffectData(
        TitleInfoEventTower_o *this,
        int32_t eventId,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  TitleInfoEventTower___c__DisplayClass33_0_o *v16; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  struct TitleInfoEventTower_TowerEventInfo_array *towerEventInfoList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x20
  TitleInfoEventTower_TowerEffectData_o *result; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v28; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v29; // x20

  if ( (byte_40F83F4 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___, v8);
    sub_B16FFC(&Method_System_Func_TitleInfoEventTower_TowerEventInfo__bool___ctor__, v9);
    sub_B16FFC(&Method_System_Func_TitleInfoEventTower_TowerEffectData__bool___ctor__, v10);
    sub_B16FFC(&System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo, v11);
    sub_B16FFC(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo, v12);
    sub_B16FFC(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__, v13);
    sub_B16FFC(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__, v14);
    sub_B16FFC(&TitleInfoEventTower___c__DisplayClass33_0_TypeInfo, v15);
    byte_40F83F4 = 1;
  }
  v16 = (TitleInfoEventTower___c__DisplayClass33_0_o *)sub_B170CC(
                                                         TitleInfoEventTower___c__DisplayClass33_0_TypeInfo,
                                                         *(_QWORD *)&eventId,
                                                         *(_QWORD *)&effectId,
                                                         method,
                                                         v4);
  TitleInfoEventTower___c__DisplayClass33_0___ctor(v16, 0LL);
  if ( !v16 )
    sub_B170D4();
  v16->fields.eventId = eventId;
  v16->fields.effectId = effectId;
  towerEventInfoList = this->fields.towerEventInfoList;
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo,
                                                                             v17,
                                                                             v18,
                                                                             v19,
                                                                             v20);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v22,
    (Il2CppObject *)v16,
    Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_TitleInfoEventTower_TowerEventInfo__bool___ctor__);
  result = (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                      (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)towerEventInfoList,
                                                      (System_Func_T__bool__o *)v22,
                                                      (const MethodInfo_18B650C *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v28 = *(WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array **)&result->fields.FadeInTime;
    v29 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo,
                                                                               v24,
                                                                               v25,
                                                                               v26,
                                                                               v27);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v29,
      (Il2CppObject *)v16,
      Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_TitleInfoEventTower_TowerEffectData__bool___ctor__);
    return (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                      v28,
                                                      (System_Func_T__bool__o *)v29,
                                                      (const MethodInfo_18B650C *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___);
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  TitleInfoEventTower___c__DisplayClass31_0_o *v16; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  struct TitleInfoEventTower_TowerEventInfo_array *towerEventInfoList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x20
  TitleInfoEventTower_TowerShiftData_o *result; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v28; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v29; // x20

  if ( (byte_40F83F2 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___, v8);
    sub_B16FFC(&Method_System_Func_TitleInfoEventTower_TowerEventInfo__bool___ctor__, v9);
    sub_B16FFC(&Method_System_Func_TitleInfoEventTower_TowerShiftData__bool___ctor__, v10);
    sub_B16FFC(&System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo, v11);
    sub_B16FFC(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo, v12);
    sub_B16FFC(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__, v13);
    sub_B16FFC(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__, v14);
    sub_B16FFC(&TitleInfoEventTower___c__DisplayClass31_0_TypeInfo, v15);
    byte_40F83F2 = 1;
  }
  v16 = (TitleInfoEventTower___c__DisplayClass31_0_o *)sub_B170CC(
                                                         TitleInfoEventTower___c__DisplayClass31_0_TypeInfo,
                                                         *(_QWORD *)&eventId,
                                                         *(_QWORD *)&towerId,
                                                         method,
                                                         v4);
  TitleInfoEventTower___c__DisplayClass31_0___ctor(v16, 0LL);
  if ( !v16 )
    sub_B170D4();
  v16->fields.eventId = eventId;
  v16->fields.towerId = towerId;
  towerEventInfoList = this->fields.towerEventInfoList;
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo,
                                                                             v17,
                                                                             v18,
                                                                             v19,
                                                                             v20);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v22,
    (Il2CppObject *)v16,
    Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_TitleInfoEventTower_TowerEventInfo__bool___ctor__);
  result = (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                     (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)towerEventInfoList,
                                                     (System_Func_T__bool__o *)v22,
                                                     (const MethodInfo_18B650C *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v28 = *(WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array **)&result->fields.CondType;
    v29 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo,
                                                                               v24,
                                                                               v25,
                                                                               v26,
                                                                               v27);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v29,
      (Il2CppObject *)v16,
      Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_TitleInfoEventTower_TowerShiftData__bool___ctor__);
    return (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                     v28,
                                                     (System_Func_T__bool__o *)v29,
                                                     (const MethodInfo_18B650C *)Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___);
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
  EventUiReleaseMaster_o *v11; // x0

  if ( (byte_40F83F1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventUiMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_DataManager_GetMaster_EventUiReleaseMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    byte_40F83F1 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventUiMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventUiMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  Entity = EventUiMaster__getEntity(Master_WarQuestSelectionMaster, eventId, towerId, 0LL);
  if ( !Entity )
    return (char)Entity;
  v10 = Entity;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v11 = (EventUiReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
  if ( !v11 )
LABEL_14:
    sub_B170D4();
  LOBYTE(Entity) = EventUiReleaseMaster__IsOpen(v11, v10, 0LL);
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

  if ( (byte_40F83F3 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, towerShiftData);
    byte_40F83F3 = 1;
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

  if ( (byte_40F83EF & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, *(_QWORD *)&eventId);
    this = (TitleInfoEventTower_o *)sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v6);
    byte_40F83EF = 1;
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
  v9 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v9 )
    sub_B170D4();
  return clsQuestCheck__IsQuestRelease(v9, v8, -1, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct EventDetailEntity_o *eventDetailEntity; // x8
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v47; // x1
  struct EventDetailEntity_o *v48; // x8
  int32_t eventId; // w19
  QuestGroupMaster_o *v50; // x25
  int32_t EventTowerQuestId; // w0
  __int64 v52; // x1
  const MethodInfo *v53; // x3
  struct EventDetailEntity_o *v54; // x8
  int32_t v55; // w19
  int32_t v56; // w26
  TitleInfoEventTower_o *TowerShiftData; // x0
  __int64 v58; // x1
  const MethodInfo *v59; // x3
  TitleInfoEventTower_TowerShiftData_o *v60; // x27
  __int64 v61; // x1
  MissionNotifyManager_o *v62; // x0
  __int64 v63; // x1
  int32_t ForceShiftTowerId; // w19
  struct EventDetailEntity_o *v65; // x8
  clsQuestCheck_o *v66; // x0
  MissionNotifyManager_o *v67; // x0
  __int64 v68; // x1
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  int32_t *p_EventTowerState_k__BackingField; // x8
  int32_t EventTowerState_k__BackingField; // t1
  int32_t v72; // w19
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *floorSprite; // x0
  UnityEngine_GameObject_o *v75; // x0
  __int64 v76; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  TerminalPramsManager_c *v78; // x0
  struct EventDetailEntity_o *v79; // x8
  MissionNotifyManager_o *v80; // x0
  System_Action_o *v81; // x0
  char i; // w8
  int32_t v83; // w19
  clsQuestCheck_o *v84; // x0
  struct EventRewardSaveData_StaticFields **p_static_fields; // x8
  struct EventRewardSaveData_StaticFields *v86; // x9
  int32_t *v87; // x9
  int32_t v88; // t1
  int32_t v89; // w19
  struct EventDetailEntity_o *v90; // x9
  int32_t v91; // w19
  int32_t v92; // w0
  struct EventDetailEntity_o *v93; // x8
  int32_t v94; // w25
  WebViewManager_o *v95; // x0
  EventTowerMaster_o *v96; // x27
  __int64 v97; // x2
  __int64 v98; // x0
  __int64 v99; // x1
  __int64 v100; // x2
  struct EventDetailEntity_o *v101; // x8
  _DWORD *v102; // x28
  int v103; // w9
  const MethodInfo *v104; // x2
  TitleInfoEventTower_o *v105; // x0
  const MethodInfo *v106; // x3
  struct EventDetailEntity_o *v107; // x8
  bool IsDispEnabled; // w19
  UnityEngine_GameObject_o *v109; // x0
  WebViewManager_o *v110; // x0
  UserEventPointMaster_o *v111; // x19
  int32_t j; // w25
  int64_t UserId; // x0
  struct EventDetailEntity_o *v114; // x8
  int32_t Point; // w26
  UnityEngine_Component_o *v116; // x0
  UnityEngine_GameObject_o *v117; // x0
  const MethodInfo *v118; // x1
  const MethodInfo *v119; // x3
  struct EventDetailEntity_o *v120; // x8
  TitleInfoEventTower_TowerEffectData_o *TowerEffectData; // x0
  const MethodInfo *v122; // x3
  int v123; // w21
  int32_t v124; // w19
  System_Action_o *v125; // x24
  int v126; // w21
  bool v127; // w23
  int32_t openEffectId; // w19
  int32_t v129; // w2
  __int64 v130; // x1
  __int64 v131; // x2
  __int64 v132; // x3
  __int64 v133; // x4
  System_Action_o *v134; // x23
  const MethodInfo *v135; // x3
  struct EventDetailEntity_o *v136; // x8
  TitleInfoEventTower_TowerEffectData_o *v137; // x0
  const MethodInfo *v138; // x3
  TitleInfoEventTower_TowerEffectData_o *v139; // x19
  float EffectStartDelay; // s0
  System_Collections_IEnumerator_o *v141; // x0
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  UnityEngine_Transform_o *spriteRoot; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v152; // x2
  UnityEngine_Component_o *v153; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  const MethodInfo *v155; // x2
  UnityEngine_Component_o *v156; // x0
  UnityEngine_GameObject_o *v157; // x0
  UnityEngine_Object_o *stamp; // x19
  UnityEngine_GameObject_o *v159; // x0
  TitleInfoEventTowerStamp_o *Component_srcLineSprite; // x0
  const MethodInfo *v161; // x4
  bool v162; // w22
  UnityEngine_Object_o *v163; // x19
  UnityEngine_GameObject_o *v164; // x0
  TitleInfoEventTowerStamp_o *v165; // x0
  const MethodInfo *v166; // x1
  UnityEngine_Component_o *v167; // x0
  WebViewObject_o *v168; // x0
  struct EventDetailEntity_o *v169; // x9
  UnityEngine_Component_o *nameSprite; // x0
  WebViewObject_o *v171; // x0
  const MethodInfo *v172; // x3
  struct EventDetailEntity_o *v173; // x8
  UnityEngine_Component_o *baseSprite; // x0
  WebViewObject_o *v175; // x0
  const MethodInfo *v176; // x3
  MissionNotifyManager_o *v177; // x0
  const MethodInfo *v178; // [xsp+0h] [xbp-A0h]
  System_Action_o *v179; // [xsp+10h] [xbp-90h]
  int v180; // [xsp+1Ch] [xbp-84h]
  _QWORD *v181; // [xsp+20h] [xbp-80h]
  WarEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  EventTowerEntity_o *v183; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v185; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F83EA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___, v9);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___, v10);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___, v11);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventTowerMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestGroupMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventPointMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMaster_WarMaster___, v16);
    sub_B16FFC(&DataManager_TypeInfo, v17);
    sub_B16FFC(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v18);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___, v19);
    sub_B16FFC(&int___TypeInfo, v20);
    sub_B16FFC(&NetworkManager_TypeInfo, v21);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v24);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v25);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v26);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v27);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v28);
    sub_B16FFC(&Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__, v29);
    sub_B16FFC(&TitleInfoEventTower___c__DisplayClass22_0_TypeInfo, v30);
    byte_40F83EA = 1;
  }
  v183 = 0LL;
  entity = 0LL;
  v31 = sub_B170CC(TitleInfoEventTower___c__DisplayClass22_0_TypeInfo, callback, effectAsset, isFadeIn, method);
  TitleInfoEventTower___c__DisplayClass22_0___ctor((TitleInfoEventTower___c__DisplayClass22_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_201;
  *(_QWORD *)(v31 + 16) = effectAsset;
  v181 = (_QWORD *)(v31 + 16);
  sub_B16F98(
    (BattleServantConfConponent_o *)(v31 + 16),
    (System_Int32_array **)effectAsset,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  *(_QWORD *)(v31 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v31 + 24), (System_Int32_array **)this, v38, v39, v40, v41, v42, v43);
  eventDetailEntity = this->fields.eventDetailEntity;
  if ( !eventDetailEntity )
    goto LABEL_74;
  EventRewardSaveData__LoadEventTowerState(eventDetailEntity->fields.eventId, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_201;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  v48 = this->fields.eventDetailEntity;
  if ( !v48 )
    goto LABEL_201;
  eventId = v48->fields.eventId;
  v50 = (QuestGroupMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( !byte_40F72FC )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v47);
    byte_40F72FC = 1;
  }
  if ( !v50 )
    goto LABEL_201;
  EventTowerQuestId = QuestGroupMaster__GetEventTowerQuestId(
                        v50,
                        eventId,
                        EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField + 1,
                        1,
                        0LL);
  v54 = this->fields.eventDetailEntity;
  if ( !v54 )
    goto LABEL_201;
  v55 = v54->fields.eventId;
  v56 = EventTowerQuestId;
  if ( !byte_40F72FC )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v52);
    byte_40F72FC = 1;
  }
  TowerShiftData = (TitleInfoEventTower_o *)TitleInfoEventTower__GetTowerShiftData(
                                              this,
                                              v55,
                                              EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
                                              v53);
  v60 = (TitleInfoEventTower_TowerShiftData_o *)TowerShiftData;
  if ( !byte_40F72FC )
  {
    TowerShiftData = (TitleInfoEventTower_o *)sub_B16FFC(&EventRewardSaveData_TypeInfo, v58);
    byte_40F72FC = 1;
  }
  v179 = callback;
  if ( TitleInfoEventTower__IsForceShiftTower(
         TowerShiftData,
         v60,
         EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
         v59) )
  {
    if ( *v181 )
    {
      if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
      }
      v62 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !v62 )
        goto LABEL_201;
      MissionNotifyManager__StartPause(v62, 0LL);
      if ( !v60 )
        goto LABEL_201;
      ForceShiftTowerId = v60->fields.ForceShiftTowerId;
      if ( !byte_40F84B6 )
      {
        sub_B16FFC(&EventRewardSaveData_TypeInfo, v63);
        byte_40F84B6 = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = ForceShiftTowerId;
      v65 = this->fields.eventDetailEntity;
      if ( !v65 )
        goto LABEL_201;
LABEL_25:
      EventRewardSaveData__SaveEventTowerState(v65->fields.eventId, 0LL);
      v180 = 1;
      goto LABEL_94;
    }
    goto LABEL_49;
  }
  if ( v56 < 1 )
    goto LABEL_46;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v66 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v66 )
    goto LABEL_201;
  if ( !clsQuestCheck__IsQuestRelease(v66, v56, -1, 0, 0LL) )
  {
LABEL_46:
    if ( !byte_40F72FC )
    {
      sub_B16FFC(&EventRewardSaveData_TypeInfo, v61);
      byte_40F72FC = 1;
    }
    if ( EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField )
    {
LABEL_49:
      v180 = 0;
      goto LABEL_94;
    }
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_201;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    floorSprite = (UnityEngine_Component_o *)this->fields.floorSprite;
    if ( !floorSprite )
      goto LABEL_201;
    v75 = UnityEngine_Component__get_gameObject(floorSprite, 0LL);
    if ( !v75 )
      goto LABEL_201;
    UnityEngine_GameObject__SetActive(v75, 0, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6044 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v76);
      byte_40F6044 = 1;
    }
    v78 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v78 = TerminalPramsManager_TypeInfo;
    }
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_201;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           Master_WarQuestSelectionMaster,
           &entity,
           v78->static_fields->_WarId_k__BackingField,
           (const MethodInfo_266F3E4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
    {
      v79 = this->fields.eventDetailEntity;
      if ( !v79 || !entity )
        goto LABEL_201;
      if ( v79->fields.eventId == entity->fields.eventId )
      {
        if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
        }
        v80 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !v80 )
          goto LABEL_201;
        MissionNotifyManager__CancelPause(v80, 0LL);
      }
    }
LABEL_74:
    if ( !callback )
      return;
    v81 = callback;
    goto LABEL_199;
  }
  if ( !byte_40F72FC )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v61);
    byte_40F72FC = 1;
  }
  if ( EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField )
  {
    if ( *v181 )
    {
      if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
      }
      v67 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !v67 )
        goto LABEL_201;
      MissionNotifyManager__StartPause(v67, 0LL);
      if ( !byte_40F72FC )
      {
        sub_B16FFC(&EventRewardSaveData_TypeInfo, v68);
        byte_40F72FC = 1;
      }
      static_fields = EventRewardSaveData_TypeInfo->static_fields;
      EventTowerState_k__BackingField = static_fields->_EventTowerState_k__BackingField;
      p_EventTowerState_k__BackingField = &static_fields->_EventTowerState_k__BackingField;
      v72 = EventTowerState_k__BackingField + 1;
      if ( !byte_40F84B6 )
      {
        sub_B16FFC(&EventRewardSaveData_TypeInfo, v68);
        byte_40F84B6 = 1;
        p_EventTowerState_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
      }
      *p_EventTowerState_k__BackingField = v72;
      v65 = this->fields.eventDetailEntity;
      if ( !v65 )
        goto LABEL_201;
      goto LABEL_25;
    }
  }
  else
  {
    for ( i = 1; ; i = byte_40F72FC )
    {
      if ( !i )
      {
        sub_B16FFC(&EventRewardSaveData_TypeInfo, v61);
        byte_40F72FC = 1;
      }
      p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
      v86 = EventRewardSaveData_TypeInfo->static_fields;
      v88 = v86->_EventTowerState_k__BackingField;
      v87 = &v86->_EventTowerState_k__BackingField;
      v89 = v88 + 1;
      if ( !byte_40F84B6 )
      {
        sub_B16FFC(&EventRewardSaveData_TypeInfo, v61);
        byte_40F84B6 = 1;
        p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
        v87 = &EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
      }
      *v87 = v89;
      v90 = this->fields.eventDetailEntity;
      if ( !v90 )
        goto LABEL_201;
      v91 = v90->fields.eventId;
      if ( !byte_40F72FC )
      {
        sub_B16FFC(&EventRewardSaveData_TypeInfo, v61);
        byte_40F72FC = 1;
        p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
      }
      v92 = QuestGroupMaster__GetEventTowerQuestId(
              v50,
              v91,
              (*p_static_fields)->_EventTowerState_k__BackingField + 1,
              1,
              0LL);
      if ( v92 < 1 )
        break;
      v83 = v92;
      if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
      }
      v84 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !v84 )
        goto LABEL_201;
      if ( !clsQuestCheck__IsQuestRelease(v84, v83, -1, 0, 0LL) )
        break;
    }
    v93 = this->fields.eventDetailEntity;
    if ( !v93 )
      goto LABEL_201;
    EventRewardSaveData__SaveEventTowerState(v93->fields.eventId, 0LL);
  }
  v180 = 0;
LABEL_94:
  if ( !byte_40F72FC )
  {
    sub_B16FFC(&EventRewardSaveData_TypeInfo, v61);
    byte_40F72FC = 1;
  }
  v94 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
  v95 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v95 )
    goto LABEL_201;
  v96 = (EventTowerMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v95,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventTowerMaster___);
  v98 = sub_B17014(int___TypeInfo, 2LL, v97);
  v101 = this->fields.eventDetailEntity;
  if ( !v101 )
    goto LABEL_201;
  v102 = (_DWORD *)v98;
  if ( !v98 )
    goto LABEL_201;
  v103 = *(_DWORD *)(v98 + 24);
  if ( !v103 )
    goto LABEL_202;
  v100 = (unsigned int)v101->fields.eventId;
  *(_DWORD *)(v98 + 32) = v100;
  if ( v103 == 1 )
    goto LABEL_202;
  *(_DWORD *)(v98 + 36) = v94;
  if ( !v96 )
    goto LABEL_201;
  EventTowerMaster__TryGetEntity(v96, &v183, v100, v94, 0LL);
  TitleInfoEventTower__SetTowerPosition(this, v94, v104);
  if ( v183 )
    this->fields.TowerFloorMax = v183->fields.topFloor;
  v107 = this->fields.eventDetailEntity;
  if ( !v107 )
    goto LABEL_201;
  IsDispEnabled = TitleInfoEventTower__IsDispEnabled(v105, v107->fields.eventId, v94, v106);
  v109 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v109 )
    goto LABEL_201;
  UnityEngine_GameObject__SetActive(v109, IsDispEnabled, 0LL);
  v110 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v110 )
    goto LABEL_201;
  v111 = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)v110,
                                     (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  for ( j = v94 - 1; ; ++j )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    v114 = this->fields.eventDetailEntity;
    if ( !v114 || !v111 )
      goto LABEL_201;
    Point = UserEventPointMaster__GetPoint(v111, UserId, v114->fields.eventId, j + 1, 0LL);
    if ( this->fields.TowerFloorMax > Point )
      break;
  }
  v116 = (UnityEngine_Component_o *)this->fields.floorSprite;
  if ( !v116 )
    goto LABEL_201;
  v117 = UnityEngine_Component__get_gameObject(v116, 0LL);
  if ( !v117 )
    goto LABEL_201;
  UnityEngine_GameObject__SetActive(v117, 1, 0LL);
  if ( !isFadeIn )
    goto LABEL_121;
  v120 = this->fields.eventDetailEntity;
  if ( !v120 )
    goto LABEL_201;
  TowerEffectData = TitleInfoEventTower__GetTowerEffectData(this, v120->fields.eventId, this->fields.openEffectId, v119);
  if ( TowerEffectData )
    TitleInfoEventTower__PlayFade(
      this,
      0.0,
      1.0,
      TowerEffectData->fields.FadeInTime,
      TowerEffectData->fields.FadeInEasingType,
      0LL,
      v122);
  else
LABEL_121:
    TitleInfoEventTower__SetSpriteAlpha(this, 1.0, v118);
  v123 = 0;
  if ( j + 1 < 2 || Point )
  {
    ++j;
    v125 = v179;
    v127 = 0;
    goto LABEL_162;
  }
  if ( !v183 )
  {
    if ( v102[6] > 1u )
    {
      v102[9] = j;
      Point = this->fields.TowerFloorMax;
      EventTowerMaster__TryGetEntity(v96, &v183, v102[8], j, 0LL);
      v125 = v179;
LABEL_157:
      v126 = 0;
      goto LABEL_158;
    }
LABEL_202:
    sub_B17100(v98, v99, v100);
    sub_B170A0();
  }
  if ( !byte_40F72FC )
  {
    v98 = sub_B16FFC(&EventRewardSaveData_TypeInfo, v99);
    byte_40F72FC = 1;
  }
  v124 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
  if ( v124 != j )
  {
    if ( !v180 )
    {
      ++j;
      v125 = v179;
      v126 = 0;
      Point = 0;
      goto LABEL_158;
    }
    if ( v102[6] >= 2u )
    {
      Point = this->fields.TowerFloorMax;
      v98 = EventTowerMaster__TryGetEntity(v96, &v183, v102[8], v102[9], 0LL);
      if ( !v183 )
        goto LABEL_201;
      openEffectId = v183->fields.openEffectId;
      this->fields.openEffectId = openEffectId;
      if ( v102[6] > 1u )
      {
        v129 = v102[8];
        v102[9] = j;
        EventTowerMaster__TryGetEntity(v96, &v183, v129, j, 0LL);
        if ( !openEffectId )
        {
          v125 = v179;
          if ( !v183 )
            goto LABEL_201;
          if ( EventTowerEntity__HasFlag(v183, 2, 0LL) )
          {
            spriteRoot = this->fields.spriteRoot;
            if ( !spriteRoot )
              goto LABEL_201;
            localPosition = UnityEngine_Transform__get_localPosition(spriteRoot, 0LL);
            x = localPosition.fields.x;
            y = localPosition.fields.y;
            z = localPosition.fields.z;
            TitleInfoEventTower__SetTowerPosition(this, j, v152);
            v153 = (UnityEngine_Component_o *)this->fields.spriteRoot;
            if ( !v153 )
              goto LABEL_201;
            Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                        v153,
                                        (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___);
            if ( !Component_WebViewObject )
              goto LABEL_201;
            v185.fields.x = x;
            v185.fields.y = y;
            v185.fields.z = z;
            TitleInfoEventTowerSlideAnimation__StartSlideAnim(
              (TitleInfoEventTowerSlideAnimation_o *)Component_WebViewObject,
              v179,
              v185,
              v155);
          }
          v126 = 1;
          goto LABEL_158;
        }
        v134 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v130, v131, v132, v133);
        System_Action___ctor(
          v134,
          (Il2CppObject *)v31,
          Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__,
          0LL);
        v136 = this->fields.eventDetailEntity;
        v125 = v179;
        if ( !v136 )
          goto LABEL_201;
        v137 = TitleInfoEventTower__GetTowerEffectData(this, v136->fields.eventId, this->fields.openEffectId, v135);
        if ( v137 )
        {
          v139 = v137;
          TitleInfoEventTower__PlayFade(
            this,
            1.0,
            0.0,
            v137->fields.FadeOutTime,
            v137->fields.FadeOutEasingType,
            0LL,
            v138);
          EffectStartDelay = v139->fields.EffectStartDelay;
          if ( EffectStartDelay <= 0.0 )
          {
            if ( !v134 )
              goto LABEL_201;
            System_Action__Invoke(v134, 0LL);
          }
          else
          {
            v141 = BasicHelper__DelayCall(EffectStartDelay, v134, 0LL);
            UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v141, 0LL);
          }
        }
        else
        {
          if ( !v134 )
            goto LABEL_201;
          System_Action__Invoke(v134, 0LL);
          v156 = (UnityEngine_Component_o *)this->fields.floorSprite;
          if ( !v156 )
            goto LABEL_201;
          v157 = UnityEngine_Component__get_gameObject(v156, 0LL);
          if ( !v157 )
            goto LABEL_201;
          UnityEngine_GameObject__SetActive(v157, 0, 0LL);
        }
        this->fields.endCallback = v179;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.endCallback,
          (System_Int32_array **)v179,
          v142,
          v143,
          v144,
          v145,
          v146,
          v147);
        goto LABEL_157;
      }
    }
    goto LABEL_202;
  }
  if ( v102[6] <= 1u )
    goto LABEL_202;
  v102[9] = v124;
  Point = this->fields.TowerFloorMax;
  EventTowerMaster__TryGetEntity(v96, &v183, v102[8], v124, 0LL);
  v125 = v179;
  v126 = 0;
  j = v124;
LABEL_158:
  if ( !v183 )
    goto LABEL_201;
  v127 = !EventTowerEntity__HasFlag(v183, 1, 0LL);
  if ( v126 )
    v123 = 51;
  else
    v123 = 0;
LABEL_162:
  if ( !v183 )
    goto LABEL_201;
  if ( !EventTowerEntity__HasFlag(v183, 2, 0LL) )
    goto LABEL_171;
  stamp = (UnityEngine_Object_o *)this->fields.stamp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(stamp, 0LL, 0LL) )
  {
    v159 = this->fields.stamp;
    if ( !v159 )
      goto LABEL_201;
    Component_srcLineSprite = (TitleInfoEventTowerStamp_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              v159,
                                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
    if ( !Component_srcLineSprite )
      goto LABEL_201;
    TitleInfoEventTowerStamp__StampProgress(Component_srcLineSprite, Point, j, this->fields.spriteRoot, v161);
    v162 = 1;
  }
  else
  {
LABEL_171:
    v163 = (UnityEngine_Object_o *)this->fields.stamp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v163, 0LL, 0LL) )
    {
      v164 = this->fields.stamp;
      if ( !v164 )
        goto LABEL_201;
      v165 = (TitleInfoEventTowerStamp_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                             v164,
                                             (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
      if ( !v165 )
        goto LABEL_201;
      TitleInfoEventTowerStamp__ResetStamp(v165, v166);
    }
    v162 = 0;
  }
  v167 = (UnityEngine_Component_o *)this->fields.floorSprite;
  if ( !v167 )
    goto LABEL_201;
  v168 = UnityEngine_Component__GetComponent_WebViewObject_(
           v167,
           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___);
  v169 = this->fields.eventDetailEntity;
  if ( !v169 )
    goto LABEL_201;
  if ( !v183 )
    goto LABEL_201;
  if ( !v168 )
    goto LABEL_201;
  TitleInfoEventTowerFloorLabel__SetFloorLabel(
    (TitleInfoEventTowerFloorLabel_o *)v168,
    v169->fields.eventId,
    j,
    this->fields.TowerFloorMax,
    Point,
    v183->fields.floorLabel,
    v127,
    v162,
    v178);
  nameSprite = (UnityEngine_Component_o *)this->fields.nameSprite;
  if ( !nameSprite )
    goto LABEL_201;
  v171 = UnityEngine_Component__GetComponent_WebViewObject_(
           nameSprite,
           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___);
  v173 = this->fields.eventDetailEntity;
  if ( !v173 )
    goto LABEL_201;
  if ( !v171 )
    goto LABEL_201;
  TitleInfoEventTowerNameLabel__SetTowerNameLabel((TitleInfoEventTowerNameLabel_o *)v171, v173->fields.eventId, j, v172);
  baseSprite = (UnityEngine_Component_o *)this->fields.baseSprite;
  if ( !baseSprite )
    goto LABEL_201;
  v175 = UnityEngine_Component__GetComponent_WebViewObject_(
           baseSprite,
           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___);
  if ( !v175 )
    goto LABEL_201;
  TitleInfoEventTowerBase__SetBaseSprite((TitleInfoEventTowerBase_o *)v175, j, v162, v176);
  if ( (v180 & 1) == 0 && *v181 )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    v177 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( v177 )
    {
      MissionNotifyManager__CancelPause(v177, 0LL);
      goto LABEL_195;
    }
LABEL_201:
    sub_B170D4();
  }
LABEL_195:
  if ( !this->fields.endCallback && v125 && !v123 )
  {
    v81 = v125;
LABEL_199:
    System_Action__Invoke(v81, 0LL);
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
  __int64 v7; // x4
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x20
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
  __int64 v43; // x3
  __int64 v44; // x4
  System_Action_o *v45; // x22
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_Action_o *v50; // x23

  if ( (byte_40F83EE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&easingType);
    sub_B16FFC(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v14);
    sub_B16FFC(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__, v15);
    sub_B16FFC(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__, v16);
    sub_B16FFC(&TitleInfoEventTower___c__DisplayClass26_0_TypeInfo, v17);
    byte_40F83EE = 1;
  }
  v18 = sub_B170CC(TitleInfoEventTower___c__DisplayClass26_0_TypeInfo, *(_QWORD *)&easingType, endAction, method, v7);
  TitleInfoEventTower___c__DisplayClass26_0___ctor((TitleInfoEventTower___c__DisplayClass26_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_6;
  *(float *)(v18 + 24) = from;
  *(float *)(v18 + 28) = to;
  *(_QWORD *)(v18 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 32), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v18 + 40) = endAction;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 40), (System_Int32_array **)endAction, v25, v26, v27, v28, v29, v30);
  TitleInfoEventTower__SetSpriteAlpha(this, *(float *)(v18 + 24), v31);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_19D2264 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v18 + 16) = Component_UIWidget;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 16), Component_UIWidget, v34, v35, v36, v37, v38, v39);
  v40 = *(EasingObject_o **)(v18 + 16);
  v45 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v41, v42, v43, v44);
  System_Action___ctor(v45, (Il2CppObject *)v18, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__, 0LL);
  v50 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v46, v47, v48, v49);
  System_Action___ctor(v50, (Il2CppObject *)v18, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__, 0LL);
  if ( !v40 )
LABEL_6:
    sub_B170D4();
  EasingObject__Play(v40, time, v45, v50, 0.0, easingType, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTower__SetSpriteAlpha(TitleInfoEventTower_o *this, float alpha, const MethodInfo *method)
{
  struct UISprite_o *baseSprite; // x0
  long double v5; // q8
  struct UISprite_o *floorSprite; // x0
  struct UISprite_o *nameSprite; // x0

  baseSprite = this->fields.baseSprite;
  if ( !baseSprite
    || (v5 = *(long double *)&alpha,
        ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))baseSprite->klass->vtable._8_set_alpha.method)(
          baseSprite,
          baseSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr),
        (floorSprite = this->fields.floorSprite) == 0LL)
    || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, long double))floorSprite->klass->vtable._8_set_alpha.method)(
          floorSprite,
          floorSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr,
          v5),
        (nameSprite = this->fields.nameSprite) == 0LL) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, long double))nameSprite->klass->vtable._8_set_alpha.method)(
    nameSprite,
    nameSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr,
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
  WebViewManager_o *Instance; // x0
  EventUiMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct EventDetailEntity_o *eventDetailEntity; // x8
  EventUiEntity_o *Entity; // x0
  EventUiEntity_o *v12; // x20
  UnityEngine_Object_o *spriteRoot; // x21
  UnityEngine_Transform_o *v14; // x19
  int x; // s8
  int y; // s9
  EventUiEntity_c *v17; // x0
  float *p_EVNET_UI_POSITION_MAGNIFICATION; // x8
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F83EB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventUiMaster___, *(_QWORD *)&towerId);
    sub_B16FFC(&EventUiEntity_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F83EB = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MasterData_WarQuestSelectionMaster = (EventUiMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventUiMaster___);
  if ( MasterData_WarQuestSelectionMaster )
  {
    eventDetailEntity = this->fields.eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_17;
    Entity = EventUiMaster__getEntity(
               MasterData_WarQuestSelectionMaster,
               eventDetailEntity->fields.eventId,
               towerId,
               0LL);
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
        v17 = EventUiEntity_TypeInfo;
        if ( (BYTE3(EventUiEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventUiEntity_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo);
          v17 = EventUiEntity_TypeInfo;
        }
        if ( v14 )
        {
          p_EVNET_UI_POSITION_MAGNIFICATION = &v17->static_fields->EVNET_UI_POSITION_MAGNIFICATION;
          v19.fields.x = *p_EVNET_UI_POSITION_MAGNIFICATION * (float)x;
          v19.fields.y = -(float)(*p_EVNET_UI_POSITION_MAGNIFICATION * (float)y);
          v19.fields.z = *p_EVNET_UI_POSITION_MAGNIFICATION * 0.0;
          UnityEngine_Transform__set_localPosition(v14, v19, 0LL);
          return;
        }
LABEL_17:
        sub_B170D4();
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
  UnityEngine_Animation_o **p_animationData; // x20
  UnityEngine_Object_o *animationData; // x22
  UnityEngine_Object_o *simpleAnimationData; // x22
  SimpleAnimation_o *v11; // x0
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
  SimpleAnimation_o *v26; // x0
  const MethodInfo *v27; // x4
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Component_o **p_simpleAnimationData; // x21
  UnityEngine_Object_o *v35; // x22
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  BattleServantConfConponent_o *v43; // x0
  UnityEngine_Animation_o *v44; // x22
  UnityEngine_Animation_o *v45; // x21
  UnityEngine_Object_o *v46; // x21
  MissionNotifyManager_o *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  BattleServantConfConponent_o *p_endCallback; // x19
  System_Action_o *v55; // x20
  struct System_Action_o *endCallback; // t1
  int32_t v57; // [xsp+8h] [xbp-48h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40F83ED & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v5);
    sub_B16FFC(&TitleInfoEventTower_TypeInfo, v6);
    byte_40F83ED = 1;
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
      if ( !*p_animationData )
        goto LABEL_60;
      if ( !UnityEngine_Animation__IsPlaying(*p_animationData, *p_animationName, 0LL) )
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
      v11 = this->fields.simpleAnimationData;
      if ( !v11 )
        goto LABEL_60;
      if ( !SimpleAnimation__IsPlaying(v11, *p_animationName, 0LL) )
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
        v57 = this->fields.openEffectId;
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57);
        v18 = System_String__Format(EFFECT_ANIMATION_END_FORMAT, v17, 0LL);
        if ( System_String__op_Equality(this->fields.animationName, v15, 0LL) )
        {
          this->fields.animationName = v18;
          sub_B16F98(
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
            v26 = this->fields.simpleAnimationData;
            if ( v26 )
            {
              SimpleAnimation__Play_16380456(v26, *p_animationName, 0LL);
LABEL_42:
              TitleInfoEventTower__Open(this, 0LL, 0LL, 1, v27);
              return;
            }
          }
          else
          {
            v44 = *p_animationData;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v44, 0LL, 0LL) )
              goto LABEL_42;
            if ( *p_animationData )
            {
              UnityEngine_Animation__Play_49744236(*p_animationData, *p_animationName, 0LL);
              goto LABEL_42;
            }
          }
LABEL_60:
          sub_B170D4();
        }
        if ( System_String__op_Equality(*p_animationName, v18, 0LL) )
        {
          this->fields.animationName = 0LL;
          sub_B16F98((BattleServantConfConponent_o *)&this->fields.animationName, 0LL, v28, v29, v30, v31, v32, v33);
          p_simpleAnimationData = (UnityEngine_Component_o **)&this->fields.simpleAnimationData;
          v35 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          this->fields.openEffectId = 0;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
          {
            if ( !*p_simpleAnimationData )
              goto LABEL_60;
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_simpleAnimationData, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__DestroyImmediate_34809676(gameObject, 0LL);
            *p_simpleAnimationData = 0LL;
            v43 = (BattleServantConfConponent_o *)&this->fields.simpleAnimationData;
          }
          else
          {
            v45 = *p_animationData;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v45, 0LL, 0LL) )
              goto LABEL_53;
            if ( !*p_animationData )
              goto LABEL_60;
            v46 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)*p_animationData,
                                            0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__DestroyImmediate_34809676(v46, 0LL);
            v43 = (BattleServantConfConponent_o *)&this->fields.animationData;
            *p_animationData = 0LL;
          }
          sub_B16F98(v43, 0LL, v37, v38, v39, v40, v41, v42);
LABEL_53:
          if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
          }
          v47 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( !v47 )
            goto LABEL_60;
          MissionNotifyManager__CancelPause(v47, 0LL);
          endCallback = this->fields.endCallback;
          p_endCallback = (BattleServantConfConponent_o *)&this->fields.endCallback;
          v55 = endCallback;
          if ( endCallback )
          {
            p_endCallback->klass = 0LL;
            sub_B16F98(p_endCallback, 0LL, v48, v49, v50, v51, v52, v53);
            System_Action__Invoke(v55, 0LL);
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
  sub_B16F98(
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
  struct TitleInfoEventTower_o *_4__this; // x8
  System_String_o *OBJECT_NAME_EFFECT_BASE; // x21
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  UnityEngine_Object_o *Object_29932412; // x0
  UnityEngine_GameObject_c **v15; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  struct TitleInfoEventTower_o *v18; // x8
  UnityEngine_GameObject_o *v19; // x20
  struct TitleInfoEventTower_o *v20; // x21
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct TitleInfoEventTower_o *v28; // x21
  System_Int32_array **v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct TitleInfoEventTower_o *v36; // x8
  bool v37; // w0
  struct TitleInfoEventTower_o *v38; // x20
  struct TitleInfoEventTower_o *v39; // x8
  System_String_o *EFFECT_ANIMATION_START_FORMAT; // x21
  Il2CppObject *v41; // x0
  System_Int32_array **v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct TitleInfoEventTower_o *v49; // x8
  SimpleAnimation_o *simpleAnimationData; // x0
  UnityEngine_Object_o *animationData; // x20
  struct TitleInfoEventTower_o *v52; // x20
  struct TitleInfoEventTower_o *v53; // x8
  System_String_o *v54; // x21
  Il2CppObject *v55; // x0
  System_Int32_array **v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct TitleInfoEventTower_o *v63; // x8
  UnityEngine_Animation_o *v64; // x0
  int32_t v65; // [xsp+8h] [xbp-28h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F782E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v3);
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, v4);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&TitleInfoEventTower_TypeInfo, v8);
    byte_40F782E = 1;
  }
  effectAsset = this->fields.effectAsset;
  if ( (BYTE3(TitleInfoEventTower_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_44;
  OBJECT_NAME_EFFECT_BASE = TitleInfoEventTower_TypeInfo->static_fields->OBJECT_NAME_EFFECT_BASE;
  v12 = System_Int32__ToString((int)_4__this + 112, 0LL);
  v13 = System_String__Concat_43743732(OBJECT_NAME_EFFECT_BASE, v12, 0LL);
  if ( !effectAsset )
    goto LABEL_44;
  Object_29932412 = AssetData__GetObject_29932412(effectAsset, v13, 0LL);
  v15 = (UnityEngine_GameObject_c **)Object_29932412;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
    || UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    if ( Object_29932412 )
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
  v17 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      v16,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v18 = this->fields.__4__this;
  if ( !v18 )
    goto LABEL_44;
  v19 = v17;
  GameObjectExtensions__SafeSetParent_27425996(v17, v18->fields.effectRoot, 0LL);
  if ( !v19 )
    goto LABEL_44;
  v20 = this->fields.__4__this;
  Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     v19,
                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !v20 )
    goto LABEL_44;
  v20->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_srcLineSprite;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v20->fields.simpleAnimationData,
    Component_srcLineSprite,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = this->fields.__4__this;
  v29 = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                 v19,
                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !v28 )
    goto LABEL_44;
  v28->fields.animationData = (struct UnityEngine_Animation_o *)v29;
  sub_B16F98((BattleServantConfConponent_o *)&v28->fields.animationData, v29, v30, v31, v32, v33, v34, v35);
  v36 = this->fields.__4__this;
  if ( !v36 )
    goto LABEL_44;
  v37 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v36->fields.simpleAnimationData, 0LL, 0LL);
  v38 = this->fields.__4__this;
  if ( v37 )
  {
    v39 = this->fields.__4__this;
    if ( (BYTE3(TitleInfoEventTower_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v39 = this->fields.__4__this;
      if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
        v39 = this->fields.__4__this;
      }
    }
    if ( v39 )
    {
      EFFECT_ANIMATION_START_FORMAT = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT;
      openEffectId = v39->fields.openEffectId;
      v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openEffectId);
      v42 = (System_Int32_array **)System_String__Format(EFFECT_ANIMATION_START_FORMAT, v41, 0LL);
      if ( v38 )
      {
        v38->fields.animationName = (struct System_String_o *)v42;
        sub_B16F98((BattleServantConfConponent_o *)&v38->fields.animationName, v42, v43, v44, v45, v46, v47, v48);
        v49 = this->fields.__4__this;
        if ( v49 )
        {
          simpleAnimationData = v49->fields.simpleAnimationData;
          if ( simpleAnimationData )
          {
            SimpleAnimation__Play_16380456(simpleAnimationData, v49->fields.animationName, 0LL);
            return;
          }
        }
      }
    }
LABEL_44:
    sub_B170D4();
  }
  if ( !v38 )
    goto LABEL_44;
  animationData = (UnityEngine_Object_o *)v38->fields.animationData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(animationData, 0LL, 0LL) )
  {
    v52 = this->fields.__4__this;
    v53 = v52;
    if ( (BYTE3(TitleInfoEventTower_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v53 = this->fields.__4__this;
      if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
        v53 = this->fields.__4__this;
      }
    }
    if ( !v53 )
      goto LABEL_44;
    v54 = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT;
    v65 = v53->fields.openEffectId;
    v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65);
    v56 = (System_Int32_array **)System_String__Format(v54, v55, 0LL);
    if ( !v52 )
      goto LABEL_44;
    v52->fields.animationName = (struct System_String_o *)v56;
    sub_B16F98((BattleServantConfConponent_o *)&v52->fields.animationName, v56, v57, v58, v59, v60, v61, v62);
    v63 = this->fields.__4__this;
    if ( !v63 )
      goto LABEL_44;
    v64 = v63->fields.animationData;
    if ( !v64 )
      goto LABEL_44;
    UnityEngine_Animation__Play_49744236(v64, v63->fields.animationName, 0LL);
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
  float v4; // s0
  TitleInfoEventTower_o *_4__this; // x0

  easingObj = this->fields.easingObj;
  if ( !easingObj
    || (v4 = UnityEngine_Mathf__Lerp(this->fields.from, this->fields.to, easingObj->fields.mStartTime, 0LL),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  TitleInfoEventTower__SetSpriteAlpha(_4__this, v4, 0LL);
}


void __fastcall TitleInfoEventTower___c__DisplayClass26_0___PlayFade_b__1(
        TitleInfoEventTower___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  TitleInfoEventTower_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
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
    sub_B170D4();
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTower___c__DisplayClass31_0___GetTowerShiftData_b__1(
        TitleInfoEventTower___c__DisplayClass31_0_o *this,
        TitleInfoEventTower_TowerShiftData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B170D4();
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
    sub_B170D4();
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTower___c__DisplayClass33_0___GetTowerEffectData_b__1(
        TitleInfoEventTower___c__DisplayClass33_0_o *this,
        TitleInfoEventTower_TowerEffectData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B170D4();
  return data->fields.EffectId == this->fields.effectId;
}