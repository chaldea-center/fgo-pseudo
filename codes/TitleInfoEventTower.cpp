void __fastcall TitleInfoEventTower___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int64_t v14; // x1
  struct TitleInfoEventTower_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x1
  struct TitleInfoEventTower_StaticFields *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4B14CA2 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventTower_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_19057/*"ef_tower_change{0}_end"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_19056/*"ef_tower_change"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_19058/*"ef_tower_change{0}_start"*/, v12, v13);
    byte_4B14CA2 = 1;
  }
  TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT = (struct System_String_o *)StringLiteral_19058/*"ef_tower_change{0}_start"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)TitleInfoEventTower_TypeInfo->static_fields,
    StringLiteral_19058/*"ef_tower_change{0}_start"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v14 = StringLiteral_19057/*"ef_tower_change{0}_end"*/;
  static_fields = TitleInfoEventTower_TypeInfo->static_fields;
  static_fields->EFFECT_ANIMATION_END_FORMAT = (struct System_String_o *)StringLiteral_19057/*"ef_tower_change{0}_end"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->EFFECT_ANIMATION_END_FORMAT,
    v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = StringLiteral_19056/*"ef_tower_change"*/;
  v23 = TitleInfoEventTower_TypeInfo->static_fields;
  v23->OBJECT_NAME_EFFECT_BASE = (struct System_String_o *)StringLiteral_19056/*"ef_tower_change"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v23->OBJECT_NAME_EFFECT_BASE, v22, v24, v25, v26, v27, v28, v29);
}


void __fastcall TitleInfoEventTower___ctor(TitleInfoEventTower_o *this, const MethodInfo *method)
{
  this->fields.TowerFloorMax = 100;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall TitleInfoEventTower__Close(TitleInfoEventTower_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x1
  UnityEngine_Object_o *simpleAnimationData; // x20
  UnityEngine_Object_o *animationData; // x20

  if ( (byte_4B14C99 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B14C99 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_16:
    sub_1BCAA3C(gameObject, v5);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.animationName = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.animationName, 0LL, v6, v7, v8, v9, v10, v11);
  simpleAnimationData = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationData, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.simpleAnimationData;
    if ( !gameObject )
      goto LABEL_16;
  }
  else
  {
    animationData = (UnityEngine_Object_o *)this->fields.animationData;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( !UnityEngine_Object__op_Inequality(animationData, 0LL, 0LL) )
      return;
    gameObject = (UnityEngine_GameObject_o *)this->fields.animationData;
    if ( !gameObject )
      goto LABEL_16;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_16;
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
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4B14C9D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&eventId, *(_QWORD *)&nowTowerId);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B14C9D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Object_array *towerEventInfoList; // x19
  System_Func_object__bool__o *v25; // x20
  TitleInfoEventTower_TowerEffectData_o *result; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Object_array *v30; // x19
  System_Func_object__bool__o *v31; // x20

  if ( (byte_4B14CA1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___,
      *(_QWORD *)&eventId,
      *(_QWORD *)&effectId);
    sub_1BCA7E0(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___, v7, v8);
    sub_1BCA7E0(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__, v13, v14);
    sub_1BCA7E0(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__, v15, v16);
    sub_1BCA7E0(&TitleInfoEventTower___c__DisplayClass33_0_TypeInfo, v17, v18);
    byte_4B14CA1 = 1;
  }
  v19 = sub_1BCAA2C(
          TitleInfoEventTower___c__DisplayClass33_0_TypeInfo,
          *(_QWORD *)&eventId,
          *(_QWORD *)&effectId,
          method);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    sub_1BCAA3C(v20, v21);
  *(_DWORD *)(v19 + 16) = eventId;
  *(_DWORD *)(v19 + 20) = effectId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v25 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo,
                                         v21,
                                         v22,
                                         v23);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v19,
    Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__,
    0LL);
  result = (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_object_(
                                                      towerEventInfoList,
                                                      (System_Func_T__bool__o *)v25,
                                                      (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v30 = *(System_Object_array **)&result->fields.FadeInTime;
    v31 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                           System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo,
                                           v27,
                                           v28,
                                           v29);
    System_Func_object__bool____ctor(
      v31,
      (Il2CppObject *)v19,
      Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__,
      0LL);
    return (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_object_(
                                                      v30,
                                                      (System_Func_T__bool__o *)v31,
                                                      (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x22
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Object_array *towerEventInfoList; // x19
  System_Func_object__bool__o *v25; // x20
  TitleInfoEventTower_TowerShiftData_o *result; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Object_array *v30; // x19
  System_Func_object__bool__o *v31; // x20

  if ( (byte_4B14C9F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___,
      *(_QWORD *)&eventId,
      *(_QWORD *)&towerId);
    sub_1BCA7E0(&Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___, v7, v8);
    sub_1BCA7E0(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__, v13, v14);
    sub_1BCA7E0(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__, v15, v16);
    sub_1BCA7E0(&TitleInfoEventTower___c__DisplayClass31_0_TypeInfo, v17, v18);
    byte_4B14C9F = 1;
  }
  v19 = sub_1BCAA2C(
          TitleInfoEventTower___c__DisplayClass31_0_TypeInfo,
          *(_QWORD *)&eventId,
          *(_QWORD *)&towerId,
          method);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    sub_1BCAA3C(v20, v21);
  *(_DWORD *)(v19 + 16) = eventId;
  *(_DWORD *)(v19 + 20) = towerId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v25 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo,
                                         v21,
                                         v22,
                                         v23);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v19,
    Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__,
    0LL);
  result = (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_object_(
                                                     towerEventInfoList,
                                                     (System_Func_T__bool__o *)v25,
                                                     (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v30 = *(System_Object_array **)&result->fields.CondType;
    v31 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                           System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo,
                                           v27,
                                           v28,
                                           v29);
    System_Func_object__bool____ctor(
      v31,
      (Il2CppObject *)v19,
      Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__,
      0LL);
    return (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_object_(
                                                     v30,
                                                     (System_Func_T__bool__o *)v31,
                                                     (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  EventUiEntity_o *Entity; // x0
  __int64 v13; // x1
  EventUiEntity_o *v14; // x19

  if ( (byte_4B14C9E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventUiMaster___, *(_QWORD *)&eventId, *(_QWORD *)&towerId);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventUiReleaseMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    byte_4B14C9E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&eventId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventUiMaster___);
  if ( !Master_object )
    goto LABEL_12;
  Entity = EventUiMaster__getEntity((EventUiMaster_o *)Master_object, eventId, towerId, 0LL);
  if ( !Entity )
    return (char)Entity;
  v14 = Entity;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
  if ( !Master_object )
LABEL_12:
    sub_1BCAA3C(Master_object, v11);
  LOBYTE(Entity) = EventUiReleaseMaster__IsOpen((EventUiReleaseMaster_o *)Master_object, v14, 0LL);
  return (char)Entity;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TitleInfoEventTower__IsForceShiftTower(
        TitleInfoEventTower_o *this,
        TitleInfoEventTower_TowerShiftData_o *towerShiftData,
        int32_t nowTowerId,
        const MethodInfo *method)
{
  int32_t CondTargetId; // w20
  int32_t CondType; // w21
  int64_t CondValue; // x19

  if ( (byte_4B14CA0 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, towerShiftData, *(_QWORD *)&nowTowerId);
    byte_4B14CA0 = 1;
  }
  if ( !towerShiftData || towerShiftData->fields.TowerId != nowTowerId )
    return 0;
  CondType = towerShiftData->fields.CondType;
  CondTargetId = towerShiftData->fields.CondTargetId;
  CondValue = towerShiftData->fields.CondValue;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, towerShiftData);
  return CondType__IsOpen(CondType, CondTargetId, CondValue, 0, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TitleInfoEventTower__IsOpenedNextTower(
        TitleInfoEventTower_o *this,
        int32_t eventId,
        int32_t nowTowerId,
        const MethodInfo *method)
{
  int32_t QuestIdOnFirstFloorOfNextTower; // w0
  int32_t v7; // w19
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4B14C9C & 1) == 0 )
  {
    this = (TitleInfoEventTower_o *)sub_1BCA7E0(
                                      &Method_SingletonTemplate_clsQuestCheck__get_Instance__,
                                      *(_QWORD *)&eventId,
                                      *(_QWORD *)&nowTowerId);
    byte_4B14C9C = 1;
  }
  QuestIdOnFirstFloorOfNextTower = TitleInfoEventTower__GetQuestIdOnFirstFloorOfNextTower(
                                     this,
                                     eventId,
                                     nowTowerId,
                                     method);
  if ( QuestIdOnFirstFloorOfNextTower < 1 )
    return 0;
  v7 = QuestIdOnFirstFloorOfNextTower;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v9);
  return clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v7, -1, 0, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x22
  int64_t Instance; // x0
  const MethodInfo *v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  struct EventDetailEntity_o *eventDetailEntity; // x8
  __int64 v65; // x2
  struct EventDetailEntity_o *v66; // x8
  int32_t eventId; // w26
  QuestGroupMaster_o *v68; // x25
  __int64 v69; // x2
  const MethodInfo *v70; // x3
  struct EventDetailEntity_o *v71; // x8
  int32_t v72; // w27
  int32_t v73; // w26
  TitleInfoEventTower_o *TowerShiftData; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  const MethodInfo *v77; // x3
  TitleInfoEventTower_TowerShiftData_o *v78; // x27
  __int64 v79; // x2
  __int64 v80; // x2
  int ForceShiftTowerId; // w21
  EventRewardSaveData_c *v82; // x8
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  struct EventDetailEntity_o *v84; // x8
  __int64 v85; // x2
  __int64 v86; // x1
  __int64 v87; // x2
  Il2CppObject *Master_object; // x21
  struct EventDetailEntity_o *v89; // x8
  char j; // w8
  struct EventRewardSaveData_StaticFields *v91; // x9
  int32_t v92; // w21
  int32_t v93; // w8
  struct EventDetailEntity_o *v94; // x9
  int32_t v95; // w26
  int32_t v96; // w26
  struct EventDetailEntity_o *v97; // x8
  int32_t EventTowerState_k__BackingField; // w25
  Il2CppObject *MasterData_object; // x27
  struct EventDetailEntity_o *v100; // x8
  _DWORD *v101; // x28
  int v102; // w9
  int32_t v103; // w2
  const MethodInfo *v104; // x2
  const MethodInfo *v105; // x3
  struct EventDetailEntity_o *v106; // x8
  bool IsDispEnabled; // w26
  Il2CppObject *v108; // x29
  int32_t i; // w25
  struct EventDetailEntity_o *v110; // x8
  int32_t Point; // w26
  const MethodInfo *v112; // x3
  struct EventDetailEntity_o *v113; // x8
  TitleInfoEventTower_TowerEffectData_o *TowerEffectData; // x0
  const MethodInfo *v115; // x3
  __int64 v116; // x2
  int v117; // w29
  int32_t v118; // w23
  char v119; // w24
  System_Action_o *v120; // x21
  bool v121; // w19
  int32_t openEffectId; // w19
  int32_t v123; // w2
  __int64 v124; // x2
  __int64 v125; // x3
  __int64 v126; // x23
  const MethodInfo *v127; // x3
  struct EventDetailEntity_o *v128; // x8
  const MethodInfo *v129; // x3
  int64_t v130; // x22
  float v131; // s0
  System_Collections_IEnumerator_o *v132; // x0
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v142; // x2
  const MethodInfo *v143; // x2
  UnityEngine_Object_o *stamp; // x22
  const MethodInfo *v145; // x4
  bool v146; // w22
  UnityEngine_Object_o *v147; // x22
  struct EventDetailEntity_o *v148; // x9
  const MethodInfo *v149; // x3
  struct EventDetailEntity_o *v150; // x8
  const MethodInfo *v151; // x3
  const MethodInfo *v152; // [xsp+0h] [xbp-B0h]
  int v153; // [xsp+Ch] [xbp-A4h]
  System_Action_o *v154; // [xsp+10h] [xbp-A0h]
  _QWORD *v155; // [xsp+20h] [xbp-90h]
  Il2CppObject *entity; // [xsp+28h] [xbp-88h] BYREF
  EventTowerEntity_o *v157; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v159; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B14C97 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, effectAsset);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventTowerMaster___, v17, v18);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestGroupMaster___, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventPointMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarMaster___, v23, v24);
    sub_1BCA7E0(&DataManager_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v27, v28);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___, v29, v30);
    sub_1BCA7E0(&int___TypeInfo, v31, v32);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v39, v40);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v41, v42);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v43, v44);
    sub_1BCA7E0(&Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__, v45, v46);
    sub_1BCA7E0(&TitleInfoEventTower___c__DisplayClass22_0_TypeInfo, v47, v48);
    byte_4B14C97 = 1;
  }
  v157 = 0LL;
  entity = 0LL;
  v49 = sub_1BCAA2C(TitleInfoEventTower___c__DisplayClass22_0_TypeInfo, callback, effectAsset, isFadeIn);
  System_Object___ctor((Il2CppObject *)v49, 0LL);
  if ( !v49 )
    goto LABEL_173;
  *(_QWORD *)(v49 + 16) = effectAsset;
  sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 16), (int64_t)effectAsset, v52, v53, v54, v55, v56, v57);
  *(_QWORD *)(v49 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v49 + 24), (int64_t)this, v58, v59, v60, v61, v62, v63);
  eventDetailEntity = this->fields.eventDetailEntity;
  if ( eventDetailEntity )
  {
    v155 = (_QWORD *)(v49 + 16);
    EventRewardSaveData__LoadEventTowerState(eventDetailEntity->fields.eventId, 0LL);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_173;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    v66 = this->fields.eventDetailEntity;
    if ( !v66 )
      goto LABEL_173;
    eventId = v66->fields.eventId;
    v68 = (QuestGroupMaster_o *)Instance;
    if ( !byte_4B14D25 )
    {
      Instance = sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v51, v65);
      byte_4B14D25 = 1;
    }
    if ( !v68 )
      goto LABEL_173;
    Instance = QuestGroupMaster__GetEventTowerQuestId(
                 v68,
                 eventId,
                 EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField + 1,
                 1,
                 0LL);
    v71 = this->fields.eventDetailEntity;
    if ( !v71 )
      goto LABEL_173;
    v72 = v71->fields.eventId;
    v73 = Instance;
    if ( !byte_4B14D25 )
    {
      sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v51, v69);
      byte_4B14D25 = 1;
    }
    TowerShiftData = (TitleInfoEventTower_o *)TitleInfoEventTower__GetTowerShiftData(
                                                this,
                                                v72,
                                                EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
                                                v70);
    v78 = (TitleInfoEventTower_TowerShiftData_o *)TowerShiftData;
    if ( !byte_4B14D25 )
    {
      TowerShiftData = (TitleInfoEventTower_o *)sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v75, v76);
      byte_4B14D25 = 1;
    }
    v154 = callback;
    if ( TitleInfoEventTower__IsForceShiftTower(
           TowerShiftData,
           v78,
           EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
           v77) )
    {
      if ( *v155 )
      {
        Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !Instance )
          goto LABEL_173;
        MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
        if ( !v78 )
          goto LABEL_173;
        ForceShiftTowerId = v78->fields.ForceShiftTowerId;
        if ( !byte_4B14D26 )
        {
          Instance = sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v51, v80);
          byte_4B14D26 = 1;
        }
        v82 = EventRewardSaveData_TypeInfo;
        goto LABEL_22;
      }
      goto LABEL_74;
    }
    if ( v73 >= 1 )
    {
      Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Instance )
        goto LABEL_173;
      Instance = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v73, -1, 0, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !byte_4B14D25 )
        {
          Instance = sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v51, v79);
          byte_4B14D25 = 1;
        }
        if ( EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField )
        {
          if ( *v155 )
          {
            Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
            if ( !Instance )
              goto LABEL_173;
            MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
            if ( !byte_4B14D25 )
            {
              Instance = sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v51, v85);
              byte_4B14D25 = 1;
            }
            static_fields = EventRewardSaveData_TypeInfo->static_fields;
            ForceShiftTowerId = static_fields->_EventTowerState_k__BackingField + 1;
            if ( byte_4B14D26 )
              goto LABEL_23;
            Instance = sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v51, v85);
            v82 = EventRewardSaveData_TypeInfo;
            byte_4B14D26 = 1;
LABEL_22:
            static_fields = v82->static_fields;
LABEL_23:
            static_fields->_EventTowerState_k__BackingField = ForceShiftTowerId;
            v84 = this->fields.eventDetailEntity;
            if ( !v84 )
              goto LABEL_173;
            EventRewardSaveData__SaveEventTowerState(v84->fields.eventId, 0LL);
            v153 = 1;
LABEL_75:
            if ( !byte_4B14D25 )
            {
              sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v51, v79);
              byte_4B14D25 = 1;
            }
            EventTowerState_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
            Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_173;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventTowerMaster___);
            Instance = sub_1BCA888(int___TypeInfo, 2LL);
            v100 = this->fields.eventDetailEntity;
            if ( !v100 )
              goto LABEL_173;
            v101 = (_DWORD *)Instance;
            if ( !Instance )
              goto LABEL_173;
            v102 = *(_DWORD *)(Instance + 24);
            if ( !v102 )
              goto LABEL_174;
            v103 = v100->fields.eventId;
            *(_DWORD *)(Instance + 32) = v103;
            if ( v102 == 1 )
              goto LABEL_174;
            *(_DWORD *)(Instance + 36) = EventTowerState_k__BackingField;
            if ( !MasterData_object )
              goto LABEL_173;
            EventTowerMaster__TryGetEntity(
              (EventTowerMaster_o *)MasterData_object,
              &v157,
              v103,
              EventTowerState_k__BackingField,
              0LL);
            TitleInfoEventTower__SetTowerPosition(this, EventTowerState_k__BackingField, v104);
            if ( v157 )
              this->fields.TowerFloorMax = v157->fields.topFloor;
            v106 = this->fields.eventDetailEntity;
            if ( !v106 )
              goto LABEL_173;
            IsDispEnabled = TitleInfoEventTower__IsDispEnabled(
                              (TitleInfoEventTower_o *)Instance,
                              v106->fields.eventId,
                              EventTowerState_k__BackingField,
                              v105);
            Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( !Instance )
              goto LABEL_173;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, IsDispEnabled, 0LL);
            Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_173;
            v108 = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
            for ( i = EventTowerState_k__BackingField - 1; ; ++i )
            {
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v51);
              Instance = NetworkManager__get_UserId(0LL);
              v110 = this->fields.eventDetailEntity;
              if ( !v110 || !v108 )
                goto LABEL_173;
              Point = UserEventPointMaster__GetPoint(
                        (UserEventPointMaster_o *)v108,
                        Instance,
                        v110->fields.eventId,
                        i + 1,
                        0LL);
              if ( this->fields.TowerFloorMax > Point )
                break;
            }
            Instance = (int64_t)this->fields.floorSprite;
            if ( !Instance )
              goto LABEL_173;
            Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            if ( !Instance )
              goto LABEL_173;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
            if ( !isFadeIn )
              goto LABEL_101;
            v113 = this->fields.eventDetailEntity;
            if ( !v113 )
              goto LABEL_173;
            TowerEffectData = TitleInfoEventTower__GetTowerEffectData(
                                this,
                                v113->fields.eventId,
                                this->fields.openEffectId,
                                v112);
            if ( TowerEffectData )
              TitleInfoEventTower__PlayFade(
                this,
                0.0,
                1.0,
                TowerEffectData->fields.FadeInTime,
                TowerEffectData->fields.FadeInEasingType,
                0LL,
                v115);
            else
LABEL_101:
              TitleInfoEventTower__SetSpriteAlpha(this, 1.0, v51);
            v117 = 0;
            if ( i + 1 < 2 || Point )
            {
              ++i;
              v120 = v154;
              v119 = v153;
              v121 = 0;
LABEL_140:
              Instance = (int64_t)v157;
              if ( !v157 )
                goto LABEL_173;
              if ( !EventTowerEntity__HasFlag(v157, 2, 0LL) )
                goto LABEL_148;
              stamp = (UnityEngine_Object_o *)this->fields.stamp;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
              if ( UnityEngine_Object__op_Inequality(stamp, 0LL, 0LL) )
              {
                Instance = (int64_t)this->fields.stamp;
                if ( !Instance )
                  goto LABEL_173;
                Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)Instance,
                                      (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
                if ( !Instance )
                  goto LABEL_173;
                TitleInfoEventTowerStamp__StampProgress(
                  (TitleInfoEventTowerStamp_o *)Instance,
                  Point,
                  i,
                  this->fields.spriteRoot,
                  v145);
                v146 = 1;
              }
              else
              {
LABEL_148:
                v147 = (UnityEngine_Object_o *)this->fields.stamp;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
                if ( UnityEngine_Object__op_Inequality(v147, 0LL, 0LL) )
                {
                  Instance = (int64_t)this->fields.stamp;
                  if ( !Instance )
                    goto LABEL_173;
                  Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)Instance,
                                        (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
                  if ( !Instance )
                    goto LABEL_173;
                  TitleInfoEventTowerStamp__ResetStamp((TitleInfoEventTowerStamp_o *)Instance, v51);
                }
                v146 = 0;
              }
              Instance = (int64_t)this->fields.floorSprite;
              if ( Instance )
              {
                Instance = (int64_t)UnityEngine_Component__GetComponent_object_(
                                      (UnityEngine_Component_o *)Instance,
                                      (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___);
                v148 = this->fields.eventDetailEntity;
                if ( v148 )
                {
                  if ( v157 )
                  {
                    if ( Instance )
                    {
                      TitleInfoEventTowerFloorLabel__SetFloorLabel(
                        (TitleInfoEventTowerFloorLabel_o *)Instance,
                        v148->fields.eventId,
                        i,
                        this->fields.TowerFloorMax,
                        Point,
                        v157->fields.floorLabel,
                        v121,
                        v146,
                        v152);
                      Instance = (int64_t)this->fields.nameSprite;
                      if ( Instance )
                      {
                        Instance = (int64_t)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)Instance,
                                              (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___);
                        v150 = this->fields.eventDetailEntity;
                        if ( v150 )
                        {
                          if ( Instance )
                          {
                            TitleInfoEventTowerNameLabel__SetTowerNameLabel(
                              (TitleInfoEventTowerNameLabel_o *)Instance,
                              v150->fields.eventId,
                              i,
                              v149);
                            Instance = (int64_t)this->fields.baseSprite;
                            if ( Instance )
                            {
                              Instance = (int64_t)UnityEngine_Component__GetComponent_object_(
                                                    (UnityEngine_Component_o *)Instance,
                                                    (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___);
                              if ( Instance )
                              {
                                TitleInfoEventTowerBase__SetBaseSprite(
                                  (TitleInfoEventTowerBase_o *)Instance,
                                  i,
                                  v146,
                                  v151);
                                if ( (v119 & 1) != 0 || !*v155 )
                                {
LABEL_168:
                                  if ( !this->fields.endCallback && v120 && v117 != 1 )
                                    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v120->fields.m_target)(
                                      v120->fields.original_method_info,
                                      *(_QWORD *)&v120->fields.extra_arg);
                                  return;
                                }
                                Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
                                if ( Instance )
                                {
                                  MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0LL);
                                  goto LABEL_168;
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
LABEL_173:
              sub_1BCAA3C(Instance, v51);
            }
            if ( v157 )
            {
              if ( !byte_4B14D25 )
              {
                Instance = sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v51, v116);
                byte_4B14D25 = 1;
              }
              v118 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
              if ( v118 == i )
              {
                v119 = v153;
                if ( v101[6] > 1u )
                {
                  v101[9] = v118;
                  Point = this->fields.TowerFloorMax;
                  EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &v157, v101[8], v118, 0LL);
                  v120 = v154;
                  v117 = 0;
                  i = v118;
LABEL_138:
                  Instance = (int64_t)v157;
                  if ( !v157 )
                    goto LABEL_173;
                  v121 = !EventTowerEntity__HasFlag(v157, 1, 0LL);
                  goto LABEL_140;
                }
                goto LABEL_174;
              }
              v119 = v153;
              if ( !v153 )
              {
                ++i;
                v120 = v154;
                v117 = 0;
                Point = 0;
                goto LABEL_138;
              }
              if ( v101[6] < 2u )
                goto LABEL_174;
              Point = this->fields.TowerFloorMax;
              Instance = EventTowerMaster__TryGetEntity(
                           (EventTowerMaster_o *)MasterData_object,
                           &v157,
                           v101[8],
                           v101[9],
                           0LL);
              if ( !v157 )
                goto LABEL_173;
              openEffectId = v157->fields.openEffectId;
              this->fields.openEffectId = openEffectId;
              if ( v101[6] <= 1u )
LABEL_174:
                sub_1BCAA44(Instance, v51);
              v123 = v101[8];
              v101[9] = i;
              EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &v157, v123, i, 0LL);
              if ( !openEffectId )
              {
                Instance = (int64_t)v157;
                v120 = v154;
                if ( !v157 )
                  goto LABEL_173;
                if ( EventTowerEntity__HasFlag(v157, 2, 0LL) )
                {
                  Instance = (int64_t)this->fields.spriteRoot;
                  if ( !Instance )
                    goto LABEL_173;
                  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
                  x = localPosition.fields.x;
                  y = localPosition.fields.y;
                  z = localPosition.fields.z;
                  TitleInfoEventTower__SetTowerPosition(this, i, v142);
                  Instance = (int64_t)this->fields.spriteRoot;
                  if ( !Instance )
                    goto LABEL_173;
                  Instance = (int64_t)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)Instance,
                                        (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___);
                  if ( !Instance )
                    goto LABEL_173;
                  v159.fields.x = x;
                  v159.fields.y = y;
                  v159.fields.z = z;
                  TitleInfoEventTowerSlideAnimation__StartSlideAnim(
                    (TitleInfoEventTowerSlideAnimation_o *)Instance,
                    v154,
                    v159,
                    v143);
                }
                v117 = 1;
                goto LABEL_138;
              }
              v126 = sub_1BCAA2C(System_Action_TypeInfo, v51, v124, v125);
              System_Action___ctor(
                (System_Action_o *)v126,
                (Il2CppObject *)v49,
                Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__,
                0LL);
              v128 = this->fields.eventDetailEntity;
              v120 = v154;
              if ( !v128 )
                goto LABEL_173;
              Instance = (int64_t)TitleInfoEventTower__GetTowerEffectData(
                                    this,
                                    v128->fields.eventId,
                                    this->fields.openEffectId,
                                    v127);
              if ( Instance )
              {
                v130 = Instance;
                TitleInfoEventTower__PlayFade(
                  this,
                  1.0,
                  0.0,
                  *(float *)(Instance + 20),
                  *(_DWORD *)(Instance + 24),
                  0LL,
                  v129);
                v131 = *(float *)(v130 + 28);
                if ( v131 <= 0.0 )
                {
                  if ( !v126 )
                    goto LABEL_173;
                  (*(void (__fastcall **)(_QWORD, _QWORD))(v126 + 24))(*(_QWORD *)(v126 + 64), *(_QWORD *)(v126 + 40));
                }
                else
                {
                  v132 = BasicHelper__DelayCall(v131, (System_Action_o *)v126, 1, 0LL);
                  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v132, 0LL);
                }
              }
              else
              {
                if ( !v126 )
                  goto LABEL_173;
                (*(void (__fastcall **)(_QWORD, _QWORD))(v126 + 24))(*(_QWORD *)(v126 + 64), *(_QWORD *)(v126 + 40));
                Instance = (int64_t)this->fields.floorSprite;
                if ( !Instance )
                  goto LABEL_173;
                Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                if ( !Instance )
                  goto LABEL_173;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
              }
              this->fields.endCallback = v154;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&this->fields.endCallback,
                (int64_t)v154,
                v133,
                v134,
                v135,
                v136,
                v137,
                v138);
            }
            else
            {
              if ( v101[6] <= 1u )
                goto LABEL_174;
              v101[9] = i;
              Point = this->fields.TowerFloorMax;
              EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &v157, v101[8], i, 0LL);
              v120 = v154;
              v119 = v153;
            }
            v117 = 0;
            goto LABEL_138;
          }
        }
        else
        {
          for ( j = 1; ; j = byte_4B14D25 )
          {
            if ( !j )
            {
              Instance = sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v51, v79);
              byte_4B14D25 = 1;
            }
            v91 = EventRewardSaveData_TypeInfo->static_fields;
            v92 = v91->_EventTowerState_k__BackingField;
            if ( !byte_4B14D26 )
            {
              Instance = sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v51, v79);
              byte_4B14D26 = 1;
              v91 = EventRewardSaveData_TypeInfo->static_fields;
            }
            v93 = v92 + 1;
            v91->_EventTowerState_k__BackingField = v92 + 1;
            v94 = this->fields.eventDetailEntity;
            if ( !v94 )
              goto LABEL_173;
            v95 = v94->fields.eventId;
            if ( !byte_4B14D25 )
            {
              sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v51, v79);
              byte_4B14D25 = 1;
              v93 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
            }
            Instance = QuestGroupMaster__GetEventTowerQuestId(v68, v95, v93 + 1, 1, 0LL);
            if ( (int)Instance < 1 )
              break;
            v96 = Instance;
            Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            if ( !Instance )
              goto LABEL_173;
            Instance = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v96, -1, 0, 0LL);
            if ( (Instance & 1) == 0 )
              break;
          }
          v97 = this->fields.eventDetailEntity;
          if ( !v97 )
            goto LABEL_173;
          EventRewardSaveData__SaveEventTowerState(v97->fields.eventId, 0LL);
        }
LABEL_74:
        v153 = 0;
        goto LABEL_75;
      }
    }
    if ( !byte_4B14D25 )
    {
      sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v51, v79);
      byte_4B14D25 = 1;
    }
    if ( EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField )
      goto LABEL_74;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_173;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    Instance = (int64_t)this->fields.floorSprite;
    if ( !Instance )
      goto LABEL_173;
    Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_173;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v86);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v51);
    if ( !byte_4B12DC6 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v51, v87);
      byte_4B12DC6 = 1;
    }
    Instance = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v51);
      Instance = (int64_t)TerminalPramsManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_173;
    Instance = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 &entity,
                 *(_DWORD *)(*(_QWORD *)(Instance + 184) + 4LL),
                 (const MethodInfo_31B2E94 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    if ( (Instance & 1) != 0 )
    {
      v89 = this->fields.eventDetailEntity;
      if ( !v89 || !entity )
        goto LABEL_173;
      if ( v89->fields.eventId == LODWORD(entity[6].klass) )
      {
        Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !Instance )
          goto LABEL_173;
        MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0LL);
      }
    }
  }
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  const MethodInfo *v36; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  EasingObject_o *v45; // x21
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  System_Action_o *v49; // x22
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_Action_o *v53; // x23

  if ( (byte_4B14C9B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&easingType, endAction);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v13, v14);
    sub_1BCA7E0(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__, v15, v16);
    sub_1BCA7E0(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__, v17, v18);
    sub_1BCA7E0(&TitleInfoEventTower___c__DisplayClass26_0_TypeInfo, v19, v20);
    byte_4B14C9B = 1;
  }
  v21 = sub_1BCAA2C(TitleInfoEventTower___c__DisplayClass26_0_TypeInfo, *(_QWORD *)&easingType, endAction, method);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_6;
  *(float *)(v21 + 24) = from;
  *(float *)(v21 + 28) = to;
  *(_QWORD *)(v21 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 32), (int64_t)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 40) = endAction;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 40), (int64_t)endAction, v30, v31, v32, v33, v34, v35);
  TitleInfoEventTower__SetSpriteAlpha(this, *(float *)(v21 + 24), v36);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v21 + 16) = Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)Component_object, v39, v40, v41, v42, v43, v44);
  v45 = *(EasingObject_o **)(v21 + 16);
  v49 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v46, v47, v48);
  System_Action___ctor(v49, (Il2CppObject *)v21, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__, 0LL);
  v53 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v50, v51, v52);
  System_Action___ctor(v53, (Il2CppObject *)v21, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__, 0LL);
  if ( !v45 )
LABEL_6:
    sub_1BCAA3C(v22, v23);
  EasingObject__Play(v45, time, v49, v53, 0.0, easingType, 0LL);
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
    sub_1BCAA3C(baseSprite, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  void *Instance; // x0
  __int64 v12; // x1
  struct EventDetailEntity_o *eventDetailEntity; // x8
  EventUiEntity_o *Entity; // x0
  __int64 v15; // x1
  EventUiEntity_o *v16; // x20
  UnityEngine_Object_o *spriteRoot; // x21
  UnityEngine_Transform_o *v18; // x19
  int x; // s8
  int y; // s9
  float *v21; // x8
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B14C98 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventUiMaster___, *(_QWORD *)&towerId, method);
    sub_1BCA7E0(&EventUiEntity_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B14C98 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventUiMaster___);
  if ( Instance )
  {
    eventDetailEntity = this->fields.eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_15;
    Entity = EventUiMaster__getEntity((EventUiMaster_o *)Instance, eventDetailEntity->fields.eventId, towerId, 0LL);
    if ( Entity )
    {
      v16 = Entity;
      spriteRoot = (UnityEngine_Object_o *)this->fields.spriteRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      if ( UnityEngine_Object__op_Inequality(spriteRoot, 0LL, 0LL) )
      {
        v18 = this->fields.spriteRoot;
        x = v16->fields.x;
        y = v16->fields.y;
        Instance = EventUiEntity_TypeInfo;
        if ( !EventUiEntity_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo, v12);
          Instance = EventUiEntity_TypeInfo;
        }
        if ( v18 )
        {
          v21 = (float *)*((_QWORD *)Instance + 23);
          v22.fields.z = *v21 * 0.0;
          v22.fields.y = *v21 * (float)-(float)y;
          v22.fields.x = *v21 * (float)x;
          UnityEngine_Transform__set_localPosition(v18, v22, 0LL);
          return;
        }
LABEL_15:
        sub_1BCAA3C(Instance, v12);
      }
    }
  }
}


void __fastcall TitleInfoEventTower__Update(TitleInfoEventTower_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o **p_animationName; // x20
  __int64 v11; // x1
  UnityEngine_Object_o *animationData; // x21
  struct UnityEngine_Animation_o **p_animationData; // x23
  __int64 v14; // x1
  UnityEngine_Animation_o *klass; // x0
  UnityEngine_Object_o *simpleAnimationData; // x21
  TitleInfoEventTower_c *v17; // x0
  System_String_o *EFFECT_ANIMATION_START_FORMAT; // x21
  Il2CppObject *v19; // x0
  System_String_o *v20; // x22
  System_String_o *EFFECT_ANIMATION_END_FORMAT; // x21
  Il2CppObject *v22; // x0
  struct System_String_o *v23; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  UnityEngine_Object_o *v31; // x21
  const MethodInfo *v32; // x4
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x1
  PartyOrganizationUtility_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *v41; // x21
  __int64 v42; // x1
  UnityEngine_Object_o *gameObject; // x21
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  UnityEngine_Object_o *v50; // x21
  UnityEngine_Object_o *v51; // x20
  __int64 v52; // x1
  UnityEngine_Object_o *v53; // x20
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  PartyOrganizationUtility_o *p_endCallback; // x19
  struct System_Action_o *v61; // x20
  struct System_Action_o *endCallback; // t1
  int32_t v63; // [xsp+8h] [xbp-48h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B14C9A & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&TitleInfoEventTower_TypeInfo, v8, v9);
    byte_4B14C9A = 1;
  }
  p_animationName = &this->fields.animationName;
  if ( !System_String__IsNullOrEmpty(this->fields.animationName, 0LL) )
  {
    p_animationData = &this->fields.animationData;
    animationData = (UnityEngine_Object_o *)this->fields.animationData;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( UnityEngine_Object__op_Inequality(animationData, 0LL, 0LL) )
    {
      klass = *p_animationData;
      if ( !*p_animationData )
        goto LABEL_48;
      if ( !UnityEngine_Animation__IsPlaying(klass, *p_animationName, 0LL) )
        goto LABEL_14;
    }
    simpleAnimationData = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    if ( UnityEngine_Object__op_Inequality(simpleAnimationData, 0LL, 0LL) )
    {
      klass = (UnityEngine_Animation_o *)this->fields.simpleAnimationData;
      if ( !klass )
        goto LABEL_48;
      if ( !SimpleAnimation__IsPlaying((SimpleAnimation_o *)klass, *p_animationName, 0LL) )
      {
LABEL_14:
        v17 = TitleInfoEventTower_TypeInfo;
        if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo, v14);
          v17 = TitleInfoEventTower_TypeInfo;
        }
        EFFECT_ANIMATION_START_FORMAT = v17->static_fields->EFFECT_ANIMATION_START_FORMAT;
        openEffectId = this->fields.openEffectId;
        v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openEffectId);
        v20 = System_String__Format(EFFECT_ANIMATION_START_FORMAT, v19, 0LL);
        EFFECT_ANIMATION_END_FORMAT = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_END_FORMAT;
        v63 = this->fields.openEffectId;
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63);
        v23 = System_String__Format(EFFECT_ANIMATION_END_FORMAT, v22, 0LL);
        if ( System_String__op_Equality(this->fields.animationName, v20, 0LL) )
        {
          this->fields.animationName = v23;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.animationName,
            (int64_t)v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29);
          v31 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
          if ( UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
          {
            klass = (UnityEngine_Animation_o *)this->fields.simpleAnimationData;
            if ( klass )
            {
              SimpleAnimation__Play_64539336((SimpleAnimation_o *)klass, *p_animationName, 0LL);
LABEL_35:
              TitleInfoEventTower__Open(this, 0LL, 0LL, 1, v32);
              return;
            }
          }
          else
          {
            v50 = (UnityEngine_Object_o *)*p_animationData;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
            if ( !UnityEngine_Object__op_Inequality(v50, 0LL, 0LL) )
              goto LABEL_35;
            klass = *p_animationData;
            if ( *p_animationData )
            {
              UnityEngine_Animation__Play_69899248(klass, *p_animationName, 0LL);
              goto LABEL_35;
            }
          }
LABEL_48:
          sub_1BCAA3C(klass, v14);
        }
        if ( System_String__op_Equality(*p_animationName, v23, 0LL) )
        {
          this->fields.animationName = 0LL;
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.animationName, 0LL, v33, v34, v35, v36, v37, v38);
          p_simpleAnimationData = (PartyOrganizationUtility_o *)&this->fields.simpleAnimationData;
          v41 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          this->fields.openEffectId = 0;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
          if ( UnityEngine_Object__op_Inequality(v41, 0LL, 0LL) )
          {
            klass = (UnityEngine_Animation_o *)p_simpleAnimationData->klass;
            if ( !p_simpleAnimationData->klass )
              goto LABEL_48;
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)klass,
                                                   0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
            UnityEngine_Object__DestroyImmediate_70154432(gameObject, 0LL);
            p_simpleAnimationData->klass = 0LL;
          }
          else
          {
            v51 = (UnityEngine_Object_o *)*p_animationData;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
            if ( !UnityEngine_Object__op_Inequality(v51, 0LL, 0LL) )
              goto LABEL_44;
            klass = *p_animationData;
            if ( !*p_animationData )
              goto LABEL_48;
            v53 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v52);
            UnityEngine_Object__DestroyImmediate_70154432(v53, 0LL);
            p_simpleAnimationData = (PartyOrganizationUtility_o *)&this->fields.animationData;
            *p_animationData = 0LL;
          }
          sub_1BCA784(p_simpleAnimationData, 0LL, v44, v45, v46, v47, v48, v49);
LABEL_44:
          klass = (UnityEngine_Animation_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( !klass )
            goto LABEL_48;
          MissionNotifyManager__CancelPause((MissionNotifyManager_o *)klass, 0LL);
          endCallback = this->fields.endCallback;
          p_endCallback = (PartyOrganizationUtility_o *)&this->fields.endCallback;
          v61 = endCallback;
          if ( endCallback )
          {
            p_endCallback->klass = 0LL;
            sub_1BCA784(p_endCallback, 0LL, v54, v55, v56, v57, v58, v59);
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v61->fields.m_target)(
              v61->fields.original_method_info,
              *(_QWORD *)&v61->fields.extra_arg);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.eventDetailEntity = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventDetailEntity,
    (int64_t)value,
    (int64_t)method,
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t Component_object; // x0
  AssetData_o *effectAsset; // x20
  struct TitleInfoEventTower_o *_4__this; // x8
  System_String_o *OBJECT_NAME_EFFECT_BASE; // x21
  System_String_o *v20; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *Object_38483832; // x20
  Il2CppObject *v23; // x0
  struct TitleInfoEventTower_o *v24; // x8
  UnityEngine_GameObject_o *v25; // x20
  struct TitleInfoEventTower_o *v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct TitleInfoEventTower_o *v33; // x21
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct TitleInfoEventTower_o *v40; // x8
  struct TitleInfoEventTower_o *v41; // x20
  struct TitleInfoEventTower_o *v42; // x8
  System_String_o *EFFECT_ANIMATION_START_FORMAT; // x21
  Il2CppObject *v44; // x0
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct TitleInfoEventTower_o *v51; // x8
  UnityEngine_Object_o *animationData; // x20
  struct TitleInfoEventTower_o *v53; // x20
  struct TitleInfoEventTower_o *v54; // x8
  System_String_o *v55; // x21
  Il2CppObject *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  struct TitleInfoEventTower_o *v63; // x8
  int32_t v64; // [xsp+8h] [xbp-38h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B14CA3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Animation___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v4, v5);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v6, v7);
    sub_1BCA7E0(&int_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&TitleInfoEventTower_TypeInfo, v14, v15);
    byte_4B14CA3 = 1;
  }
  Component_object = (int64_t)TitleInfoEventTower_TypeInfo;
  effectAsset = this->fields.effectAsset;
  if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo, method);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_39;
  OBJECT_NAME_EFFECT_BASE = TitleInfoEventTower_TypeInfo->static_fields->OBJECT_NAME_EFFECT_BASE;
  v20 = System_Int32__ToString((int)_4__this + 120, 0LL);
  Component_object = (int64_t)System_String__Concat_62401220(OBJECT_NAME_EFFECT_BASE, v20, 0LL);
  if ( !effectAsset )
    goto LABEL_39;
  Object_38483832 = AssetData__GetObject_38483832(effectAsset, (System_String_o *)Component_object, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  if ( Object_38483832 )
    v23 = (UnityEngine_GameObject_c *)Object_38483832->klass == UnityEngine_GameObject_TypeInfo
        ? (Il2CppObject *)Object_38483832
        : 0LL;
  else
    v23 = 0LL;
  Component_object = (int64_t)UnityEngine_Object__Instantiate_object_(
                                v23,
                                (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v24 = this->fields.__4__this;
  if ( !v24 )
    goto LABEL_39;
  v25 = (UnityEngine_GameObject_o *)Component_object;
  GameObjectExtensions__SafeSetParent_34336992(
    (UnityEngine_GameObject_o *)Component_object,
    v24->fields.effectRoot,
    0LL);
  if ( !v25 )
    goto LABEL_39;
  v26 = this->fields.__4__this;
  Component_object = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                v25,
                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !v26 )
    goto LABEL_39;
  v26->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v26->fields.simpleAnimationData,
    Component_object,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = this->fields.__4__this;
  Component_object = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                v25,
                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !v33 )
    goto LABEL_39;
  v33->fields.animationData = (struct UnityEngine_Animation_o *)Component_object;
  sub_1BCA784((PartyOrganizationUtility_o *)&v33->fields.animationData, Component_object, v34, v35, v36, v37, v38, v39);
  v40 = this->fields.__4__this;
  if ( !v40 )
    goto LABEL_39;
  Component_object = UnityEngine_Object__op_Inequality(
                       (UnityEngine_Object_o *)v40->fields.simpleAnimationData,
                       0LL,
                       0LL);
  v41 = this->fields.__4__this;
  if ( (Component_object & 1) != 0 )
  {
    Component_object = (int64_t)TitleInfoEventTower_TypeInfo;
    v42 = this->fields.__4__this;
    if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo, method);
      v42 = this->fields.__4__this;
    }
    if ( v42 )
    {
      EFFECT_ANIMATION_START_FORMAT = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT;
      openEffectId = v42->fields.openEffectId;
      v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openEffectId);
      Component_object = (int64_t)System_String__Format(EFFECT_ANIMATION_START_FORMAT, v44, 0LL);
      if ( v41 )
      {
        v41->fields.animationName = (struct System_String_o *)Component_object;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v41->fields.animationName,
          Component_object,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
        v51 = this->fields.__4__this;
        if ( v51 )
        {
          Component_object = (int64_t)v51->fields.simpleAnimationData;
          if ( Component_object )
          {
            SimpleAnimation__Play_64539336((SimpleAnimation_o *)Component_object, v51->fields.animationName, 0LL);
            return;
          }
        }
      }
    }
LABEL_39:
    sub_1BCAA3C(Component_object, method);
  }
  if ( !v41 )
    goto LABEL_39;
  animationData = (UnityEngine_Object_o *)v41->fields.animationData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(animationData, 0LL, 0LL) )
  {
    Component_object = (int64_t)TitleInfoEventTower_TypeInfo;
    v53 = this->fields.__4__this;
    v54 = v53;
    if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo, method);
      v54 = this->fields.__4__this;
    }
    if ( !v54 )
      goto LABEL_39;
    v55 = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT;
    v64 = v54->fields.openEffectId;
    v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64);
    Component_object = (int64_t)System_String__Format(v55, v56, 0LL);
    if ( !v53 )
      goto LABEL_39;
    v53->fields.animationName = (struct System_String_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v53->fields.animationName,
      Component_object,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
    v63 = this->fields.__4__this;
    if ( !v63 )
      goto LABEL_39;
    Component_object = (int64_t)v63->fields.animationData;
    if ( !Component_object )
      goto LABEL_39;
    UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)Component_object, v63->fields.animationName, 0LL);
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
  struct EasingObject_o *easingObj; // x9
  TitleInfoEventTower___c__DisplayClass26_0_o *v3; // x8
  float mNow; // s2
  float v5; // s3
  bool v6; // nf
  float v7; // s2

  easingObj = this->fields.easingObj;
  if ( !easingObj || (v3 = this, (this = (TitleInfoEventTower___c__DisplayClass26_0_o *)this->fields.__4__this) == 0LL) )
    sub_1BCAA3C(this, method);
  mNow = easingObj->fields.mNow;
  v5 = fminf(mNow, 1.0);
  v6 = mNow < 0.0;
  v7 = 0.0;
  if ( !v6 )
    v7 = v5;
  TitleInfoEventTower__SetSpriteAlpha(
    (TitleInfoEventTower_o *)this,
    v3->fields.from + (float)(v7 * (float)(v3->fields.to - v3->fields.from)),
    method);
}


void __fastcall TitleInfoEventTower___c__DisplayClass26_0___PlayFade_b__1(
        TitleInfoEventTower___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  TitleInfoEventTower_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  TitleInfoEventTower__SetSpriteAlpha(_4__this, this->fields.to, method);
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
    sub_1BCAA3C(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTower___c__DisplayClass31_0___GetTowerShiftData_b__1(
        TitleInfoEventTower___c__DisplayClass31_0_o *this,
        TitleInfoEventTower_TowerShiftData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTower___c__DisplayClass33_0___GetTowerEffectData_b__1(
        TitleInfoEventTower___c__DisplayClass33_0_o *this,
        TitleInfoEventTower_TowerEffectData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1BCAA3C(this, 0LL);
  return data->fields.EffectId == this->fields.effectId;
}