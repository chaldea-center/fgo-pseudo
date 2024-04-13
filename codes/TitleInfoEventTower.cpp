void __fastcall TitleInfoEventTower___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v18; // x1
  struct TitleInfoEventTower_StaticFields *v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct TitleInfoEventTower_StaticFields *v27; // x0
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_42E6C2C & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventTower_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_18445/*"ef_tower_change{0}_end"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_18444/*"ef_tower_change"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_18446/*"ef_tower_change{0}_start"*/, v14, v15, v16);
    byte_42E6C2C = 1;
  }
  static_fields = (BattleServantConfConponent_o *)TitleInfoEventTower_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_18446/*"ef_tower_change{0}_start"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18446/*"ef_tower_change{0}_start"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = TitleInfoEventTower_TypeInfo->static_fields;
  v20 = (System_Int32_array **)StringLiteral_18445/*"ef_tower_change{0}_end"*/;
  v19->EFFECT_ANIMATION_END_FORMAT = (struct System_String_o *)StringLiteral_18445/*"ef_tower_change{0}_end"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v19->EFFECT_ANIMATION_END_FORMAT, v20, v21, v22, v23, v24, v25, v26);
  v27 = TitleInfoEventTower_TypeInfo->static_fields;
  v28 = (System_Int32_array **)StringLiteral_18444/*"ef_tower_change"*/;
  v27->OBJECT_NAME_EFFECT_BASE = (struct System_String_o *)StringLiteral_18444/*"ef_tower_change"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v27->OBJECT_NAME_EFFECT_BASE, v28, v29, v30, v31, v32, v33, v34);
}


void __fastcall TitleInfoEventTower___ctor(TitleInfoEventTower_o *this, const MethodInfo *method)
{
  this->fields.TowerFloorMax = 100;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventTower__Close(TitleInfoEventTower_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_Object_o *simpleAnimationData; // x20
  UnityEngine_Object_o *animationData; // x20

  if ( (byte_42E6C23 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6C23 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_18:
    sub_B5D69C(gameObject, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.animationName = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.animationName, 0LL, v7, v8, v9, v10, v11, v12);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1

  if ( (byte_42E6C27 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, eventId, nowTowerId, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42E6C27 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v10);
  }
  return QuestGroupMaster__GetEventTowerQuestId((QuestGroupMaster_o *)Instance, eventId, nowTowerId + 1, 1, 0LL);
}


TitleInfoEventTower_TowerEffectData_o *__fastcall TitleInfoEventTower__GetTowerEffectData(
        TitleInfoEventTower_o *this,
        int32_t eventId,
        int32_t effectId,
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
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  TitleInfoEventTower___c__DisplayClass33_0_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  struct TitleInfoEventTower_TowerEventInfo_array *towerEventInfoList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v35; // x20
  TitleInfoEventTower_TowerEffectData_o *result; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v37; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v38; // x20

  if ( (byte_42E6C2B & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___, eventId, effectId, method);
    sub_B5D5C4(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Func_TitleInfoEventTower_TowerEventInfo__bool___ctor__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Func_TitleInfoEventTower_TowerEffectData__bool___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__, v22, v23, v24);
    sub_B5D5C4(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__, v25, v26, v27);
    sub_B5D5C4(&TitleInfoEventTower___c__DisplayClass33_0_TypeInfo, v28, v29, v30);
    byte_42E6C2B = 1;
  }
  v31 = (TitleInfoEventTower___c__DisplayClass33_0_o *)sub_B5D694(TitleInfoEventTower___c__DisplayClass33_0_TypeInfo);
  TitleInfoEventTower___c__DisplayClass33_0___ctor(v31, 0LL);
  if ( !v31 )
    sub_B5D69C(v32, v33);
  v31->fields.eventId = eventId;
  v31->fields.effectId = effectId;
  towerEventInfoList = this->fields.towerEventInfoList;
  v35 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v35,
    (Il2CppObject *)v31,
    Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_TitleInfoEventTower_TowerEventInfo__bool___ctor__);
  result = (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                      (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)towerEventInfoList,
                                                      (System_Func_T__bool__o *)v35,
                                                      (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v37 = *(WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array **)&result->fields.FadeInTime;
    v38 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v38,
      (Il2CppObject *)v31,
      Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_TitleInfoEventTower_TowerEffectData__bool___ctor__);
    return (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                      v37,
                                                      (System_Func_T__bool__o *)v38,
                                                      (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___);
  }
  return result;
}


TitleInfoEventTower_TowerShiftData_o *__fastcall TitleInfoEventTower__GetTowerShiftData(
        TitleInfoEventTower_o *this,
        int32_t eventId,
        int32_t towerId,
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
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  TitleInfoEventTower___c__DisplayClass31_0_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  struct TitleInfoEventTower_TowerEventInfo_array *towerEventInfoList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v35; // x20
  TitleInfoEventTower_TowerShiftData_o *result; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *v37; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v38; // x20

  if ( (byte_42E6C29 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___, eventId, towerId, method);
    sub_B5D5C4(&Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Func_TitleInfoEventTower_TowerEventInfo__bool___ctor__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Func_TitleInfoEventTower_TowerShiftData__bool___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__, v22, v23, v24);
    sub_B5D5C4(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__, v25, v26, v27);
    sub_B5D5C4(&TitleInfoEventTower___c__DisplayClass31_0_TypeInfo, v28, v29, v30);
    byte_42E6C29 = 1;
  }
  v31 = (TitleInfoEventTower___c__DisplayClass31_0_o *)sub_B5D694(TitleInfoEventTower___c__DisplayClass31_0_TypeInfo);
  TitleInfoEventTower___c__DisplayClass31_0___ctor(v31, 0LL);
  if ( !v31 )
    sub_B5D69C(v32, v33);
  v31->fields.eventId = eventId;
  v31->fields.towerId = towerId;
  towerEventInfoList = this->fields.towerEventInfoList;
  v35 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v35,
    (Il2CppObject *)v31,
    Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_TitleInfoEventTower_TowerEventInfo__bool___ctor__);
  result = (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                     (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)towerEventInfoList,
                                                     (System_Func_T__bool__o *)v35,
                                                     (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v37 = *(WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array **)&result->fields.CondType;
    v38 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v38,
      (Il2CppObject *)v31,
      Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_TitleInfoEventTower_TowerShiftData__bool___ctor__);
    return (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                     v37,
                                                     (System_Func_T__bool__o *)v38,
                                                     (const MethodInfo_1AD7278 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___);
  }
  return result;
}


bool __fastcall TitleInfoEventTower__IsDispEnabled(
        TitleInfoEventTower_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  EventUiMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  EventUiEntity_o *Entity; // x0
  EventUiEntity_o *v15; // x19

  if ( (byte_42E6C28 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventUiMaster___, eventId, towerId, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventUiReleaseMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    byte_42E6C28 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventUiMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventUiMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  Entity = EventUiMaster__getEntity(Master_WarQuestSelectionMaster, eventId, towerId, 0LL);
  if ( !Entity )
    return (char)Entity;
  v15 = Entity;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventUiMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_14:
    sub_B5D69C(Master_WarQuestSelectionMaster, v13);
  LOBYTE(Entity) = EventUiReleaseMaster__IsOpen((EventUiReleaseMaster_o *)Master_WarQuestSelectionMaster, v15, 0LL);
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

  if ( (byte_42E6C2A & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)towerShiftData, nowTowerId, method);
    byte_42E6C2A = 1;
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t QuestIdOnFirstFloorOfNextTower; // w0
  int32_t v10; // w19
  clsQuestCheck_o *v11; // x0
  __int64 v12; // x1

  if ( (byte_42E6C26 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, eventId, nowTowerId, method);
    this = (TitleInfoEventTower_o *)sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v6, v7, v8);
    byte_42E6C26 = 1;
  }
  QuestIdOnFirstFloorOfNextTower = TitleInfoEventTower__GetQuestIdOnFirstFloorOfNextTower(
                                     this,
                                     eventId,
                                     nowTowerId,
                                     method);
  if ( QuestIdOnFirstFloorOfNextTower < 1 )
    return 0;
  v10 = QuestIdOnFirstFloorOfNextTower;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v11 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v11 )
    sub_B5D69C(0LL, v12);
  return clsQuestCheck__IsQuestRelease(v11, v10, -1, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTower__Open(
        TitleInfoEventTower_o *this,
        System_Action_o *callback,
        AssetData_o *effectAsset,
        bool isFadeIn,
        const MethodInfo *method)
{
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
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  __int64 v75; // x22
  int64_t Instance; // x0
  const MethodInfo *v77; // x1
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  struct EventDetailEntity_o *eventDetailEntity; // x8
  int v91; // w2
  __int64 v92; // x3
  struct EventDetailEntity_o *v93; // x8
  int32_t eventId; // w19
  QuestGroupMaster_o *v95; // x25
  int v96; // w2
  const MethodInfo *v97; // x3
  struct EventDetailEntity_o *v98; // x8
  int32_t v99; // w19
  int32_t v100; // w26
  TitleInfoEventTower_o *TowerShiftData; // x0
  int v102; // w1
  int v103; // w2
  const MethodInfo *v104; // x3
  TitleInfoEventTower_TowerShiftData_o *v105; // x27
  int v106; // w2
  __int64 v107; // x3
  int v108; // w2
  __int64 v109; // x3
  int32_t ForceShiftTowerId; // w19
  struct EventDetailEntity_o *v111; // x8
  int v112; // w2
  __int64 v113; // x3
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  int32_t *p_EventTowerState_k__BackingField; // x8
  int32_t EventTowerState_k__BackingField; // t1
  int32_t v117; // w19
  int v118; // w2
  __int64 v119; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x21
  struct EventDetailEntity_o *v121; // x8
  System_Action_o *v122; // x0
  char i; // w8
  int32_t v124; // w19
  struct EventRewardSaveData_StaticFields **p_static_fields; // x8
  struct EventRewardSaveData_StaticFields *v126; // x9
  int32_t *v127; // x9
  int32_t v128; // t1
  int32_t v129; // w19
  struct EventDetailEntity_o *v130; // x9
  int32_t v131; // w19
  struct EventDetailEntity_o *v132; // x8
  int32_t v133; // w25
  EventTowerMaster_o *MasterData_WarQuestSelectionMaster; // x27
  struct EventDetailEntity_o *v135; // x8
  _DWORD *v136; // x28
  int v137; // w9
  int32_t v138; // w2
  const MethodInfo *v139; // x2
  const MethodInfo *v140; // x3
  struct EventDetailEntity_o *v141; // x8
  bool IsDispEnabled; // w19
  UserEventPointMaster_o *v143; // x19
  int32_t j; // w25
  struct EventDetailEntity_o *v145; // x8
  int32_t Point; // w26
  const MethodInfo *v147; // x3
  struct EventDetailEntity_o *v148; // x8
  TitleInfoEventTower_TowerEffectData_o *TowerEffectData; // x0
  const MethodInfo *v150; // x3
  int v151; // w2
  __int64 v152; // x3
  int v153; // w21
  int32_t v154; // w19
  System_Action_o *v155; // x24
  int v156; // w21
  bool v157; // w23
  int32_t openEffectId; // w19
  int32_t v159; // w2
  System_Action_o *v160; // x23
  const MethodInfo *v161; // x3
  struct EventDetailEntity_o *v162; // x8
  const MethodInfo *v163; // x3
  int64_t v164; // x19
  float v165; // s0
  System_Collections_IEnumerator_o *v166; // x0
  System_String_array **v167; // x2
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v176; // x2
  const MethodInfo *v177; // x2
  UnityEngine_Object_o *stamp; // x19
  const MethodInfo *v179; // x4
  bool v180; // w22
  UnityEngine_Object_o *v181; // x19
  struct EventDetailEntity_o *v182; // x9
  const MethodInfo *v183; // x3
  struct EventDetailEntity_o *v184; // x8
  const MethodInfo *v185; // x3
  __int64 v186; // x0
  const MethodInfo *v187; // [xsp+0h] [xbp-A0h]
  System_Action_o *v188; // [xsp+10h] [xbp-90h]
  int v189; // [xsp+1Ch] [xbp-84h]
  _QWORD *v190; // [xsp+20h] [xbp-80h]
  WarEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  EventTowerEntity_o *v192; // [xsp+38h] [xbp-68h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v194; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E6C21 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)effectAsset, isFadeIn);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___, v15, v16, v17);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventTowerMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestGroupMaster___, v24, v25, v26);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventPointMaster___, v27, v28, v29);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarMaster___, v30, v31, v32);
    sub_B5D5C4(&DataManager_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v36, v37, v38);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___, v39, v40, v41);
    sub_B5D5C4(&int___TypeInfo, v42, v43, v44);
    sub_B5D5C4(&NetworkManager_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v51, v52, v53);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v54, v55, v56);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v57, v58, v59);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v60, v61, v62);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v63, v64, v65);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v66, v67, v68);
    sub_B5D5C4(&Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__, v69, v70, v71);
    sub_B5D5C4(&TitleInfoEventTower___c__DisplayClass22_0_TypeInfo, v72, v73, v74);
    byte_42E6C21 = 1;
  }
  v192 = 0LL;
  entity = 0LL;
  v75 = sub_B5D694(TitleInfoEventTower___c__DisplayClass22_0_TypeInfo);
  TitleInfoEventTower___c__DisplayClass22_0___ctor((TitleInfoEventTower___c__DisplayClass22_0_o *)v75, 0LL);
  if ( !v75 )
    goto LABEL_201;
  *(_QWORD *)(v75 + 16) = effectAsset;
  v190 = (_QWORD *)(v75 + 16);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v75 + 16),
    (System_Int32_array **)effectAsset,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  *(_QWORD *)(v75 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v75 + 24), (System_Int32_array **)this, v84, v85, v86, v87, v88, v89);
  eventDetailEntity = this->fields.eventDetailEntity;
  if ( !eventDetailEntity )
    goto LABEL_74;
  EventRewardSaveData__LoadEventTowerState(eventDetailEntity->fields.eventId, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_201;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  v93 = this->fields.eventDetailEntity;
  if ( !v93 )
    goto LABEL_201;
  eventId = v93->fields.eventId;
  v95 = (QuestGroupMaster_o *)Instance;
  if ( !byte_42E5030 )
  {
    Instance = sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)v77, v91, v92);
    byte_42E5030 = 1;
  }
  if ( !v95 )
    goto LABEL_201;
  Instance = QuestGroupMaster__GetEventTowerQuestId(
               v95,
               eventId,
               EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField + 1,
               1,
               0LL);
  v98 = this->fields.eventDetailEntity;
  if ( !v98 )
    goto LABEL_201;
  v99 = v98->fields.eventId;
  v100 = Instance;
  if ( !byte_42E5030 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)v77, v96, v97);
    byte_42E5030 = 1;
  }
  TowerShiftData = (TitleInfoEventTower_o *)TitleInfoEventTower__GetTowerShiftData(
                                              this,
                                              v99,
                                              EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
                                              v97);
  v105 = (TitleInfoEventTower_TowerShiftData_o *)TowerShiftData;
  if ( !byte_42E5030 )
  {
    TowerShiftData = (TitleInfoEventTower_o *)sub_B5D5C4(&EventRewardSaveData_TypeInfo, v102, v103, v104);
    byte_42E5030 = 1;
  }
  v188 = callback;
  if ( TitleInfoEventTower__IsForceShiftTower(
         TowerShiftData,
         v105,
         EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
         v104) )
  {
    if ( *v190 )
    {
      if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
      }
      Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !Instance )
        goto LABEL_201;
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
      if ( !v105 )
        goto LABEL_201;
      ForceShiftTowerId = v105->fields.ForceShiftTowerId;
      if ( !byte_42E6CF0 )
      {
        Instance = sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)v77, v108, v109);
        byte_42E6CF0 = 1;
      }
      EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField = ForceShiftTowerId;
      v111 = this->fields.eventDetailEntity;
      if ( !v111 )
        goto LABEL_201;
LABEL_25:
      EventRewardSaveData__SaveEventTowerState(v111->fields.eventId, 0LL);
      v189 = 1;
      goto LABEL_94;
    }
    goto LABEL_49;
  }
  if ( v100 < 1 )
    goto LABEL_46;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_201;
  Instance = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v100, -1, 0, 0LL);
  if ( (Instance & 1) == 0 )
  {
LABEL_46:
    if ( !byte_42E5030 )
    {
      sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)v77, v106, v107);
      byte_42E5030 = 1;
    }
    if ( EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField )
    {
LABEL_49:
      v189 = 0;
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
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B20 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)v77, v118, v119);
      byte_42E4B20 = 1;
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
                 (const MethodInfo_23FAE6C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    if ( (Instance & 1) != 0 )
    {
      v121 = this->fields.eventDetailEntity;
      if ( !v121 || !entity )
        goto LABEL_201;
      if ( v121->fields.eventId == entity->fields.eventId )
      {
        if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
        }
        Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !Instance )
          goto LABEL_201;
        MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0LL);
      }
    }
LABEL_74:
    if ( !callback )
      return;
    v122 = callback;
    goto LABEL_199;
  }
  if ( !byte_42E5030 )
  {
    Instance = sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)v77, v106, v107);
    byte_42E5030 = 1;
  }
  if ( EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField )
  {
    if ( *v190 )
    {
      if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
      }
      Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !Instance )
        goto LABEL_201;
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
      if ( !byte_42E5030 )
      {
        Instance = sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)v77, v112, v113);
        byte_42E5030 = 1;
      }
      static_fields = EventRewardSaveData_TypeInfo->static_fields;
      EventTowerState_k__BackingField = static_fields->_EventTowerState_k__BackingField;
      p_EventTowerState_k__BackingField = &static_fields->_EventTowerState_k__BackingField;
      v117 = EventTowerState_k__BackingField + 1;
      if ( !byte_42E6CF0 )
      {
        Instance = sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)v77, v112, v113);
        byte_42E6CF0 = 1;
        p_EventTowerState_k__BackingField = &EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
      }
      *p_EventTowerState_k__BackingField = v117;
      v111 = this->fields.eventDetailEntity;
      if ( !v111 )
        goto LABEL_201;
      goto LABEL_25;
    }
  }
  else
  {
    for ( i = 1; ; i = byte_42E5030 )
    {
      if ( !i )
      {
        Instance = sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)v77, v106, v107);
        byte_42E5030 = 1;
      }
      p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
      v126 = EventRewardSaveData_TypeInfo->static_fields;
      v128 = v126->_EventTowerState_k__BackingField;
      v127 = &v126->_EventTowerState_k__BackingField;
      v129 = v128 + 1;
      if ( !byte_42E6CF0 )
      {
        Instance = sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)v77, v106, v107);
        byte_42E6CF0 = 1;
        p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
        v127 = &EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
      }
      *v127 = v129;
      v130 = this->fields.eventDetailEntity;
      if ( !v130 )
        goto LABEL_201;
      v131 = v130->fields.eventId;
      if ( !byte_42E5030 )
      {
        sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)v77, v106, v107);
        byte_42E5030 = 1;
        p_static_fields = &EventRewardSaveData_TypeInfo->static_fields;
      }
      Instance = QuestGroupMaster__GetEventTowerQuestId(
                   v95,
                   v131,
                   (*p_static_fields)->_EventTowerState_k__BackingField + 1,
                   1,
                   0LL);
      if ( (int)Instance < 1 )
        break;
      v124 = Instance;
      if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
      }
      Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Instance )
        goto LABEL_201;
      Instance = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v124, -1, 0, 0LL);
      if ( (Instance & 1) == 0 )
        break;
    }
    v132 = this->fields.eventDetailEntity;
    if ( !v132 )
      goto LABEL_201;
    EventRewardSaveData__SaveEventTowerState(v132->fields.eventId, 0LL);
  }
  v189 = 0;
LABEL_94:
  if ( !byte_42E5030 )
  {
    sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)v77, v106, v107);
    byte_42E5030 = 1;
  }
  v133 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_201;
  MasterData_WarQuestSelectionMaster = (EventTowerMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventTowerMaster___);
  Instance = sub_B5D5DC(int___TypeInfo, 2LL);
  v135 = this->fields.eventDetailEntity;
  if ( !v135 )
    goto LABEL_201;
  v136 = (_DWORD *)Instance;
  if ( !Instance )
    goto LABEL_201;
  v137 = *(_DWORD *)(Instance + 24);
  if ( !v137 )
    goto LABEL_202;
  v138 = v135->fields.eventId;
  *(_DWORD *)(Instance + 32) = v138;
  if ( v137 == 1 )
    goto LABEL_202;
  *(_DWORD *)(Instance + 36) = v133;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_201;
  EventTowerMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &v192, v138, v133, 0LL);
  TitleInfoEventTower__SetTowerPosition(this, v133, v139);
  if ( v192 )
    this->fields.TowerFloorMax = v192->fields.topFloor;
  v141 = this->fields.eventDetailEntity;
  if ( !v141 )
    goto LABEL_201;
  IsDispEnabled = TitleInfoEventTower__IsDispEnabled(
                    (TitleInfoEventTower_o *)Instance,
                    v141->fields.eventId,
                    v133,
                    v140);
  Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_201;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, IsDispEnabled, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_201;
  v143 = (UserEventPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  for ( j = v133 - 1; ; ++j )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Instance = NetworkManager__get_UserId(0LL);
    v145 = this->fields.eventDetailEntity;
    if ( !v145 || !v143 )
      goto LABEL_201;
    Point = UserEventPointMaster__GetPoint(v143, Instance, v145->fields.eventId, j + 1, 0LL);
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
  v148 = this->fields.eventDetailEntity;
  if ( !v148 )
    goto LABEL_201;
  TowerEffectData = TitleInfoEventTower__GetTowerEffectData(this, v148->fields.eventId, this->fields.openEffectId, v147);
  if ( TowerEffectData )
    TitleInfoEventTower__PlayFade(
      this,
      0.0,
      1.0,
      TowerEffectData->fields.FadeInTime,
      TowerEffectData->fields.FadeInEasingType,
      0LL,
      v150);
  else
LABEL_121:
    TitleInfoEventTower__SetSpriteAlpha(this, 1.0, v77);
  v153 = 0;
  if ( j + 1 < 2 || Point )
  {
    ++j;
    v155 = v188;
    v157 = 0;
    goto LABEL_162;
  }
  if ( !v192 )
  {
    if ( v136[6] > 1u )
    {
      v136[9] = j;
      Point = this->fields.TowerFloorMax;
      EventTowerMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &v192, v136[8], j, 0LL);
      v155 = v188;
LABEL_157:
      v156 = 0;
      goto LABEL_158;
    }
LABEL_202:
    v186 = sub_B5D6C8(Instance);
    sub_B5D668(v186, 0LL);
  }
  if ( !byte_42E5030 )
  {
    Instance = sub_B5D5C4(&EventRewardSaveData_TypeInfo, (_DWORD)v77, v151, v152);
    byte_42E5030 = 1;
  }
  v154 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
  if ( v154 != j )
  {
    if ( !v189 )
    {
      ++j;
      v155 = v188;
      v156 = 0;
      Point = 0;
      goto LABEL_158;
    }
    if ( v136[6] >= 2u )
    {
      Point = this->fields.TowerFloorMax;
      Instance = EventTowerMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &v192, v136[8], v136[9], 0LL);
      if ( !v192 )
        goto LABEL_201;
      openEffectId = v192->fields.openEffectId;
      this->fields.openEffectId = openEffectId;
      if ( v136[6] > 1u )
      {
        v159 = v136[8];
        v136[9] = j;
        EventTowerMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &v192, v159, j, 0LL);
        if ( !openEffectId )
        {
          Instance = (int64_t)v192;
          v155 = v188;
          if ( !v192 )
            goto LABEL_201;
          if ( EventTowerEntity__HasFlag(v192, 2, 0LL) )
          {
            Instance = (int64_t)this->fields.spriteRoot;
            if ( !Instance )
              goto LABEL_201;
            localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
            x = localPosition.fields.x;
            y = localPosition.fields.y;
            z = localPosition.fields.z;
            TitleInfoEventTower__SetTowerPosition(this, j, v176);
            Instance = (int64_t)this->fields.spriteRoot;
            if ( !Instance )
              goto LABEL_201;
            Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)Instance,
                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___);
            if ( !Instance )
              goto LABEL_201;
            v194.fields.x = x;
            v194.fields.y = y;
            v194.fields.z = z;
            TitleInfoEventTowerSlideAnimation__StartSlideAnim(
              (TitleInfoEventTowerSlideAnimation_o *)Instance,
              v188,
              v194,
              v177);
          }
          v156 = 1;
          goto LABEL_158;
        }
        v160 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          v160,
          (Il2CppObject *)v75,
          Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__,
          0LL);
        v162 = this->fields.eventDetailEntity;
        v155 = v188;
        if ( !v162 )
          goto LABEL_201;
        Instance = (int64_t)TitleInfoEventTower__GetTowerEffectData(
                              this,
                              v162->fields.eventId,
                              this->fields.openEffectId,
                              v161);
        if ( Instance )
        {
          v164 = Instance;
          TitleInfoEventTower__PlayFade(
            this,
            1.0,
            0.0,
            *(float *)(Instance + 20),
            *(_DWORD *)(Instance + 24),
            0LL,
            v163);
          v165 = *(float *)(v164 + 28);
          if ( v165 <= 0.0 )
          {
            if ( !v160 )
              goto LABEL_201;
            System_Action__Invoke(v160, 0LL);
          }
          else
          {
            v166 = BasicHelper__DelayCall(v165, v160, 0LL);
            UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v166, 0LL);
          }
        }
        else
        {
          if ( !v160 )
            goto LABEL_201;
          System_Action__Invoke(v160, 0LL);
          Instance = (int64_t)this->fields.floorSprite;
          if ( !Instance )
            goto LABEL_201;
          Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_201;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        }
        this->fields.endCallback = v188;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.endCallback,
          (System_Int32_array **)v188,
          v167,
          v168,
          v169,
          v170,
          v171,
          v172);
        goto LABEL_157;
      }
    }
    goto LABEL_202;
  }
  if ( v136[6] <= 1u )
    goto LABEL_202;
  v136[9] = v154;
  Point = this->fields.TowerFloorMax;
  EventTowerMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &v192, v136[8], v154, 0LL);
  v155 = v188;
  v156 = 0;
  j = v154;
LABEL_158:
  Instance = (int64_t)v192;
  if ( !v192 )
    goto LABEL_201;
  v157 = !EventTowerEntity__HasFlag(v192, 1, 0LL);
  if ( v156 )
    v153 = 51;
  else
    v153 = 0;
LABEL_162:
  Instance = (int64_t)v192;
  if ( !v192 )
    goto LABEL_201;
  if ( !EventTowerEntity__HasFlag(v192, 2, 0LL) )
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
                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
    if ( !Instance )
      goto LABEL_201;
    TitleInfoEventTowerStamp__StampProgress(
      (TitleInfoEventTowerStamp_o *)Instance,
      Point,
      j,
      this->fields.spriteRoot,
      v179);
    v180 = 1;
  }
  else
  {
LABEL_171:
    v181 = (UnityEngine_Object_o *)this->fields.stamp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v181, 0LL, 0LL) )
    {
      Instance = (int64_t)this->fields.stamp;
      if ( !Instance )
        goto LABEL_201;
      Instance = (int64_t)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                            (UnityEngine_GameObject_o *)Instance,
                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
      if ( !Instance )
        goto LABEL_201;
      TitleInfoEventTowerStamp__ResetStamp((TitleInfoEventTowerStamp_o *)Instance, v77);
    }
    v180 = 0;
  }
  Instance = (int64_t)this->fields.floorSprite;
  if ( !Instance )
    goto LABEL_201;
  Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___);
  v182 = this->fields.eventDetailEntity;
  if ( !v182 )
    goto LABEL_201;
  if ( !v192 )
    goto LABEL_201;
  if ( !Instance )
    goto LABEL_201;
  TitleInfoEventTowerFloorLabel__SetFloorLabel(
    (TitleInfoEventTowerFloorLabel_o *)Instance,
    v182->fields.eventId,
    j,
    this->fields.TowerFloorMax,
    Point,
    v192->fields.floorLabel,
    v157,
    v180,
    v187);
  Instance = (int64_t)this->fields.nameSprite;
  if ( !Instance )
    goto LABEL_201;
  Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___);
  v184 = this->fields.eventDetailEntity;
  if ( !v184 )
    goto LABEL_201;
  if ( !Instance )
    goto LABEL_201;
  TitleInfoEventTowerNameLabel__SetTowerNameLabel(
    (TitleInfoEventTowerNameLabel_o *)Instance,
    v184->fields.eventId,
    j,
    v183);
  Instance = (int64_t)this->fields.baseSprite;
  if ( !Instance )
    goto LABEL_201;
  Instance = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___);
  if ( !Instance )
    goto LABEL_201;
  TitleInfoEventTowerBase__SetBaseSprite((TitleInfoEventTowerBase_o *)Instance, j, v180, v185);
  if ( (v189 & 1) == 0 && *v190 )
  {
    if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
    }
    Instance = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( Instance )
    {
      MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0LL);
      goto LABEL_195;
    }
LABEL_201:
    sub_B5D69C(Instance, v77);
  }
LABEL_195:
  if ( !this->fields.endCallback && v155 && !v153 )
  {
    v122 = v155;
LABEL_199:
    System_Action__Invoke(v122, 0LL);
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
  __int64 v25; // x20
  __int64 v26; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  const MethodInfo *v40; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_Int32_array **Component_UIWidget; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  EasingObject_o *v49; // x21
  System_Action_o *v50; // x22
  System_Action_o *v51; // x23

  if ( (byte_42E6C25 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, easingType, (_DWORD)endAction, method);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v13, v14, v15);
    sub_B5D5C4(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__, v16, v17, v18);
    sub_B5D5C4(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__, v19, v20, v21);
    sub_B5D5C4(&TitleInfoEventTower___c__DisplayClass26_0_TypeInfo, v22, v23, v24);
    byte_42E6C25 = 1;
  }
  v25 = sub_B5D694(TitleInfoEventTower___c__DisplayClass26_0_TypeInfo);
  TitleInfoEventTower___c__DisplayClass26_0___ctor((TitleInfoEventTower___c__DisplayClass26_0_o *)v25, 0LL);
  if ( !v25 )
    goto LABEL_6;
  *(float *)(v25 + 24) = from;
  *(float *)(v25 + 28) = to;
  *(_QWORD *)(v25 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 32), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v25 + 40) = endAction;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 40), (System_Int32_array **)endAction, v34, v35, v36, v37, v38, v39);
  TitleInfoEventTower__SetSpriteAlpha(this, *(float *)(v25 + 24), v40);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_UIWidget = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                                gameObject,
                                                (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v25 + 16) = Component_UIWidget;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 16), Component_UIWidget, v43, v44, v45, v46, v47, v48);
  v49 = *(EasingObject_o **)(v25 + 16);
  v50 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v50, (Il2CppObject *)v25, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__, 0LL);
  v51 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v51, (Il2CppObject *)v25, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__, 0LL);
  if ( !v49 )
LABEL_6:
    sub_B5D69C(v26, v27);
  EasingObject__Play(v49, time, v50, v51, 0.0, easingType, 0LL);
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
    sub_B5D69C(baseSprite, method);
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
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  struct EventDetailEntity_o *eventDetailEntity; // x8
  EventUiEntity_o *Entity; // x0
  EventUiEntity_o *v19; // x20
  UnityEngine_Object_o *spriteRoot; // x21
  UnityEngine_Transform_o *v21; // x19
  int x; // s8
  int y; // s9
  float *saveNameList; // x8
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E6C22 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventUiMaster___, towerId, (_DWORD)method, v3);
    sub_B5D5C4(&EventUiEntity_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E6C22 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventUiMaster___);
  if ( Instance )
  {
    eventDetailEntity = this->fields.eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_17;
    Entity = EventUiMaster__getEntity((EventUiMaster_o *)Instance, eventDetailEntity->fields.eventId, towerId, 0LL);
    if ( Entity )
    {
      v19 = Entity;
      spriteRoot = (UnityEngine_Object_o *)this->fields.spriteRoot;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(spriteRoot, 0LL, 0LL) )
      {
        v21 = this->fields.spriteRoot;
        x = v19->fields.x;
        y = v19->fields.y;
        Instance = (DataManager_o *)EventUiEntity_TypeInfo;
        if ( (BYTE3(EventUiEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventUiEntity_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo);
          Instance = (DataManager_o *)EventUiEntity_TypeInfo;
        }
        if ( v21 )
        {
          saveNameList = (float *)Instance[1].fields.saveNameList;
          v25.fields.x = *saveNameList * (float)x;
          v25.fields.y = -(float)(*saveNameList * (float)y);
          v25.fields.z = *saveNameList * 0.0;
          UnityEngine_Transform__set_localPosition(v21, v25, 0LL);
          return;
        }
LABEL_17:
        sub_B5D69C(Instance, v16);
      }
    }
  }
}


void __fastcall TitleInfoEventTower__Update(TitleInfoEventTower_o *this, const MethodInfo *method)
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_String_o **p_animationName; // x21
  struct UnityEngine_Animation_o **p_animationData; // x20
  UnityEngine_Object_o *animationData; // x22
  __int64 v20; // x1
  UnityEngine_Animation_o *v21; // x0
  UnityEngine_Object_o *simpleAnimationData; // x22
  TitleInfoEventTower_c *v23; // x0
  System_String_o *EFFECT_ANIMATION_START_FORMAT; // x22
  Il2CppObject *v25; // x0
  System_String_o *v26; // x23
  System_String_o *EFFECT_ANIMATION_END_FORMAT; // x22
  Il2CppObject *v28; // x0
  struct System_String_o *v29; // x22
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UnityEngine_Object_o *v36; // x22
  const MethodInfo *v37; // x4
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct SimpleAnimation_o **p_simpleAnimationData; // x21
  UnityEngine_Object_o *v45; // x22
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  BattleServantConfConponent_o *v53; // x0
  UnityEngine_Object_o *v54; // x22
  UnityEngine_Object_o *v55; // x21
  UnityEngine_Object_o *v56; // x21
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  BattleServantConfConponent_o *p_endCallback; // x19
  System_Action_o *v64; // x20
  struct System_Action_o *endCallback; // t1
  int32_t v66; // [xsp+8h] [xbp-48h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42E6C24 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&TitleInfoEventTower_TypeInfo, v14, v15, v16);
    byte_42E6C24 = 1;
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
      v21 = *p_animationData;
      if ( !*p_animationData )
        goto LABEL_60;
      if ( !UnityEngine_Animation__IsPlaying(v21, *p_animationName, 0LL) )
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
      v21 = (UnityEngine_Animation_o *)this->fields.simpleAnimationData;
      if ( !v21 )
        goto LABEL_60;
      if ( !SimpleAnimation__IsPlaying((SimpleAnimation_o *)v21, *p_animationName, 0LL) )
      {
LABEL_16:
        v23 = TitleInfoEventTower_TypeInfo;
        if ( (BYTE3(TitleInfoEventTower_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
          v23 = TitleInfoEventTower_TypeInfo;
        }
        EFFECT_ANIMATION_START_FORMAT = v23->static_fields->EFFECT_ANIMATION_START_FORMAT;
        openEffectId = this->fields.openEffectId;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openEffectId);
        v26 = System_String__Format(EFFECT_ANIMATION_START_FORMAT, v25, 0LL);
        EFFECT_ANIMATION_END_FORMAT = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_END_FORMAT;
        v66 = this->fields.openEffectId;
        v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66);
        v29 = System_String__Format(EFFECT_ANIMATION_END_FORMAT, v28, 0LL);
        if ( System_String__op_Equality(this->fields.animationName, v26, 0LL) )
        {
          this->fields.animationName = v29;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.animationName,
            (System_Int32_array **)v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35);
          v36 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
          {
            v21 = (UnityEngine_Animation_o *)this->fields.simpleAnimationData;
            if ( v21 )
            {
              SimpleAnimation__Play_16676044((SimpleAnimation_o *)v21, *p_animationName, 0LL);
LABEL_42:
              TitleInfoEventTower__Open(this, 0LL, 0LL, 1, v37);
              return;
            }
          }
          else
          {
            v54 = (UnityEngine_Object_o *)*p_animationData;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality(v54, 0LL, 0LL) )
              goto LABEL_42;
            v21 = *p_animationData;
            if ( *p_animationData )
            {
              UnityEngine_Animation__Play_51249124(v21, *p_animationName, 0LL);
              goto LABEL_42;
            }
          }
LABEL_60:
          sub_B5D69C(v21, v20);
        }
        if ( System_String__op_Equality(*p_animationName, v29, 0LL) )
        {
          this->fields.animationName = 0LL;
          sub_B5D560((BattleServantConfConponent_o *)&this->fields.animationName, 0LL, v38, v39, v40, v41, v42, v43);
          p_simpleAnimationData = &this->fields.simpleAnimationData;
          v45 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          this->fields.openEffectId = 0;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
          {
            v21 = (UnityEngine_Animation_o *)*p_simpleAnimationData;
            if ( !*p_simpleAnimationData )
              goto LABEL_60;
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v21,
                                                   0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__DestroyImmediate_35620448(gameObject, 0LL);
            *p_simpleAnimationData = 0LL;
            v53 = (BattleServantConfConponent_o *)&this->fields.simpleAnimationData;
          }
          else
          {
            v55 = (UnityEngine_Object_o *)*p_animationData;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( !UnityEngine_Object__op_Inequality(v55, 0LL, 0LL) )
              goto LABEL_53;
            v21 = *p_animationData;
            if ( !*p_animationData )
              goto LABEL_60;
            v56 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v21, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__DestroyImmediate_35620448(v56, 0LL);
            v53 = (BattleServantConfConponent_o *)&this->fields.animationData;
            *p_animationData = 0LL;
          }
          sub_B5D560(v53, 0LL, v47, v48, v49, v50, v51, v52);
LABEL_53:
          if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
          }
          v21 = (UnityEngine_Animation_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( !v21 )
            goto LABEL_60;
          MissionNotifyManager__CancelPause((MissionNotifyManager_o *)v21, 0LL);
          endCallback = this->fields.endCallback;
          p_endCallback = (BattleServantConfConponent_o *)&this->fields.endCallback;
          v64 = endCallback;
          if ( endCallback )
          {
            p_endCallback->klass = 0LL;
            sub_B5D560(p_endCallback, 0LL, v57, v58, v59, v60, v61, v62);
            System_Action__Invoke(v64, 0LL);
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
  sub_B5D560(
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  AssetData_o *effectAsset; // x20
  System_String_o *Component_srcLineSprite; // x0
  struct TitleInfoEventTower_o *_4__this; // x8
  System_String_o *OBJECT_NAME_EFFECT_BASE; // x21
  System_String_o *v27; // x0
  UnityEngine_Object_o *Object_30642600; // x0
  UnityEngine_GameObject_c **v29; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v30; // x0
  struct TitleInfoEventTower_o *v31; // x8
  UnityEngine_GameObject_o *v32; // x20
  struct TitleInfoEventTower_o *v33; // x21
  struct TitleInfoEventTower_o *v34; // x21
  struct TitleInfoEventTower_o *v35; // x8
  struct TitleInfoEventTower_o *v36; // x20
  struct TitleInfoEventTower_o *v37; // x8
  System_String_o *EFFECT_ANIMATION_START_FORMAT; // x21
  Il2CppObject *v39; // x0
  struct TitleInfoEventTower_o *v40; // x8
  UnityEngine_Object_o *animationData; // x20
  struct TitleInfoEventTower_o *v42; // x20
  struct TitleInfoEventTower_o *v43; // x8
  System_String_o *v44; // x21
  Il2CppObject *v45; // x0
  struct TitleInfoEventTower_o *v46; // x8
  int32_t v47; // [xsp+8h] [xbp-28h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E6244 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Animation___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&TitleInfoEventTower_TypeInfo, v20, v21, v22);
    byte_42E6244 = 1;
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
  v27 = System_Int32__ToString((int)_4__this + 112, 0LL);
  Component_srcLineSprite = System_String__Concat_44577788(OBJECT_NAME_EFFECT_BASE, v27, 0LL);
  if ( !effectAsset )
    goto LABEL_44;
  Object_30642600 = AssetData__GetObject_30642600(effectAsset, Component_srcLineSprite, 0LL);
  v29 = (UnityEngine_GameObject_c **)Object_30642600;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
    || UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    if ( Object_30642600 )
      goto LABEL_11;
LABEL_15:
    v30 = 0LL;
    goto LABEL_16;
  }
  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !v29 )
    goto LABEL_15;
LABEL_11:
  if ( *v29 == UnityEngine_GameObject_TypeInfo )
    v30 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v29;
  else
    v30 = 0LL;
LABEL_16:
  Component_srcLineSprite = (System_String_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                 v30,
                                                 (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v31 = this->fields.__4__this;
  if ( !v31 )
    goto LABEL_44;
  v32 = (UnityEngine_GameObject_o *)Component_srcLineSprite;
  GameObjectExtensions__SafeSetParent_32436524(
    (UnityEngine_GameObject_o *)Component_srcLineSprite,
    v31->fields.effectRoot,
    0LL);
  if ( !v32 )
    goto LABEL_44;
  v33 = this->fields.__4__this;
  Component_srcLineSprite = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 v32,
                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !v33 )
    goto LABEL_44;
  v33->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_srcLineSprite;
  sub_B5D560(&v33->fields.simpleAnimationData);
  v34 = this->fields.__4__this;
  Component_srcLineSprite = (System_String_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 v32,
                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !v34 )
    goto LABEL_44;
  v34->fields.animationData = (struct UnityEngine_Animation_o *)Component_srcLineSprite;
  sub_B5D560(&v34->fields.animationData);
  v35 = this->fields.__4__this;
  if ( !v35 )
    goto LABEL_44;
  Component_srcLineSprite = (System_String_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)v35->fields.simpleAnimationData,
                                                 0LL,
                                                 0LL);
  v36 = this->fields.__4__this;
  if ( ((unsigned __int8)Component_srcLineSprite & 1) != 0 )
  {
    Component_srcLineSprite = (System_String_o *)TitleInfoEventTower_TypeInfo;
    v37 = this->fields.__4__this;
    if ( (BYTE3(TitleInfoEventTower_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v37 = this->fields.__4__this;
      if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
        v37 = this->fields.__4__this;
      }
    }
    if ( v37 )
    {
      EFFECT_ANIMATION_START_FORMAT = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT;
      openEffectId = v37->fields.openEffectId;
      v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openEffectId);
      Component_srcLineSprite = System_String__Format(EFFECT_ANIMATION_START_FORMAT, v39, 0LL);
      if ( v36 )
      {
        v36->fields.animationName = Component_srcLineSprite;
        sub_B5D560(&v36->fields.animationName);
        v40 = this->fields.__4__this;
        if ( v40 )
        {
          Component_srcLineSprite = (System_String_o *)v40->fields.simpleAnimationData;
          if ( Component_srcLineSprite )
          {
            SimpleAnimation__Play_16676044((SimpleAnimation_o *)Component_srcLineSprite, v40->fields.animationName, 0LL);
            return;
          }
        }
      }
    }
LABEL_44:
    sub_B5D69C(Component_srcLineSprite, method);
  }
  if ( !v36 )
    goto LABEL_44;
  animationData = (UnityEngine_Object_o *)v36->fields.animationData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(animationData, 0LL, 0LL) )
  {
    Component_srcLineSprite = (System_String_o *)TitleInfoEventTower_TypeInfo;
    v42 = this->fields.__4__this;
    v43 = v42;
    if ( (BYTE3(TitleInfoEventTower_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
    {
      v43 = this->fields.__4__this;
      if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
        v43 = this->fields.__4__this;
      }
    }
    if ( !v43 )
      goto LABEL_44;
    v44 = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT;
    v47 = v43->fields.openEffectId;
    v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
    Component_srcLineSprite = System_String__Format(v44, v45, 0LL);
    if ( !v42 )
      goto LABEL_44;
    v42->fields.animationName = Component_srcLineSprite;
    sub_B5D560(&v42->fields.animationName);
    v46 = this->fields.__4__this;
    if ( !v46 )
      goto LABEL_44;
    Component_srcLineSprite = (System_String_o *)v46->fields.animationData;
    if ( !Component_srcLineSprite )
      goto LABEL_44;
    UnityEngine_Animation__Play_51249124(
      (UnityEngine_Animation_o *)Component_srcLineSprite,
      v46->fields.animationName,
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTower___c__DisplayClass31_0___GetTowerShiftData_b__1(
        TitleInfoEventTower___c__DisplayClass31_0_o *this,
        TitleInfoEventTower_TowerShiftData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTower___c__DisplayClass33_0___GetTowerEffectData_b__1(
        TitleInfoEventTower___c__DisplayClass33_0_o *this,
        TitleInfoEventTower_TowerEffectData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_B5D69C(this, 0LL);
  return data->fields.EffectId == this->fields.effectId;
}