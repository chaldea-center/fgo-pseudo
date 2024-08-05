void __fastcall TitleInfoEventTower___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  struct TitleInfoEventTower_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct TitleInfoEventTower_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FD029 & 1) == 0 )
  {
    sub_1B64870(&TitleInfoEventTower_TypeInfo, v1);
    sub_1B64870(&StringLiteral_18792/*"ef_tower_change{0}_end"*/, v4);
    sub_1B64870(&StringLiteral_18791/*"ef_tower_change"*/, v5);
    sub_1B64870(&StringLiteral_18793/*"ef_tower_change{0}_start"*/, v6);
    byte_49FD029 = 1;
  }
  TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT = (struct System_String_o *)StringLiteral_18793/*"ef_tower_change{0}_start"*/;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)TitleInfoEventTower_TypeInfo->static_fields,
    StringLiteral_18793/*"ef_tower_change{0}_start"*/,
    v2,
    v3);
  v7 = StringLiteral_18792/*"ef_tower_change{0}_end"*/;
  static_fields = TitleInfoEventTower_TypeInfo->static_fields;
  static_fields->EFFECT_ANIMATION_END_FORMAT = (struct System_String_o *)StringLiteral_18792/*"ef_tower_change{0}_end"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->EFFECT_ANIMATION_END_FORMAT, v7, v9, v10);
  v11 = StringLiteral_18791/*"ef_tower_change"*/;
  v12 = TitleInfoEventTower_TypeInfo->static_fields;
  v12->OBJECT_NAME_EFFECT_BASE = (struct System_String_o *)StringLiteral_18791/*"ef_tower_change"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v12->OBJECT_NAME_EFFECT_BASE, v11, v13, v14);
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
  int32_t v5; // w2
  int32_t v6; // w3
  UnityEngine_Object_o *simpleAnimationData; // x20
  UnityEngine_Object_o *animationData; // x20

  if ( (byte_49FD020 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_49FD020 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_16:
    sub_1B64ACC(gameObject, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.animationName = 0LL;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.animationName, 0, v5, v6);
  simpleAnimationData = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_49FD024 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&eventId);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FD024 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_1B64ACC(Instance, v8);
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
  __int64 v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  System_Object_array *towerEventInfoList; // x19
  System_Func_object__bool__o *v17; // x20
  TitleInfoEventTower_TowerEffectData_o *result; // x0
  System_Object_array *v19; // x19
  System_Func_object__bool__o *v20; // x20

  if ( (byte_49FD028 & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___, *(_QWORD *)&eventId);
    sub_1B64870(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___, v7);
    sub_1B64870(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo, v8);
    sub_1B64870(&System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo, v9);
    sub_1B64870(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__, v10);
    sub_1B64870(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__, v11);
    sub_1B64870(&TitleInfoEventTower___c__DisplayClass33_0_TypeInfo, v12);
    byte_49FD028 = 1;
  }
  v13 = sub_1B64ABC(TitleInfoEventTower___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1B64ACC(v14, v15);
  *(_DWORD *)(v13 + 16) = eventId;
  *(_DWORD *)(v13 + 20) = effectId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v17 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v13,
    Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__,
    0LL);
  result = (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_object_(
                                                      towerEventInfoList,
                                                      (System_Func_T__bool__o *)v17,
                                                      (const MethodInfo_2E27718 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v19 = *(System_Object_array **)&result->fields.FadeInTime;
    v20 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v20,
      (Il2CppObject *)v13,
      Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__,
      0LL);
    return (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_object_(
                                                      v19,
                                                      (System_Func_T__bool__o *)v20,
                                                      (const MethodInfo_2E27718 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___);
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
  __int64 v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  System_Object_array *towerEventInfoList; // x19
  System_Func_object__bool__o *v17; // x20
  TitleInfoEventTower_TowerShiftData_o *result; // x0
  System_Object_array *v19; // x19
  System_Func_object__bool__o *v20; // x20

  if ( (byte_49FD026 & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___, *(_QWORD *)&eventId);
    sub_1B64870(&Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___, v7);
    sub_1B64870(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo, v8);
    sub_1B64870(&System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo, v9);
    sub_1B64870(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__, v10);
    sub_1B64870(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__, v11);
    sub_1B64870(&TitleInfoEventTower___c__DisplayClass31_0_TypeInfo, v12);
    byte_49FD026 = 1;
  }
  v13 = sub_1B64ABC(TitleInfoEventTower___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1B64ACC(v14, v15);
  *(_DWORD *)(v13 + 16) = eventId;
  *(_DWORD *)(v13 + 20) = towerId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v17 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v13,
    Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__,
    0LL);
  result = (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_object_(
                                                     towerEventInfoList,
                                                     (System_Func_T__bool__o *)v17,
                                                     (const MethodInfo_2E27718 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v19 = *(System_Object_array **)&result->fields.CondType;
    v20 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v20,
      (Il2CppObject *)v13,
      Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__,
      0LL);
    return (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_object_(
                                                     v19,
                                                     (System_Func_T__bool__o *)v20,
                                                     (const MethodInfo_2E27718 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___);
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
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  EventUiEntity_o *Entity; // x0
  EventUiEntity_o *v11; // x19

  if ( (byte_49FD025 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_EventUiMaster___, *(_QWORD *)&eventId);
    sub_1B64870(&Method_DataManager_GetMaster_EventUiReleaseMaster___, v6);
    sub_1B64870(&DataManager_TypeInfo, v7);
    byte_49FD025 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_EventUiMaster___);
  if ( !Master_object )
    goto LABEL_12;
  Entity = EventUiMaster__getEntity((EventUiMaster_o *)Master_object, eventId, towerId, 0LL);
  if ( !Entity )
    return (char)Entity;
  v11 = Entity;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
  if ( !Master_object )
LABEL_12:
    sub_1B64ACC(Master_object, v9);
  LOBYTE(Entity) = EventUiReleaseMaster__IsOpen((EventUiReleaseMaster_o *)Master_object, v11, 0LL);
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

  if ( (byte_49FD027 & 1) == 0 )
  {
    sub_1B64870(&CondType_TypeInfo, towerShiftData);
    byte_49FD027 = 1;
  }
  if ( !towerShiftData || towerShiftData->fields.TowerId != nowTowerId )
    return 0;
  CondType = towerShiftData->fields.CondType;
  CondTargetId = towerShiftData->fields.CondTargetId;
  CondValue = towerShiftData->fields.CondValue;
  if ( !CondType_TypeInfo->_2.cctor_finished )
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
  int32_t QuestIdOnFirstFloorOfNextTower; // w0
  int32_t v7; // w19
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_49FD023 & 1) == 0 )
  {
    this = (TitleInfoEventTower_o *)sub_1B64870(
                                      &Method_SingletonTemplate_clsQuestCheck__get_Instance__,
                                      *(_QWORD *)&eventId);
    byte_49FD023 = 1;
  }
  QuestIdOnFirstFloorOfNextTower = TitleInfoEventTower__GetQuestIdOnFirstFloorOfNextTower(
                                     this,
                                     eventId,
                                     nowTowerId,
                                     method);
  if ( QuestIdOnFirstFloorOfNextTower < 1 )
    return 0;
  v7 = QuestIdOnFirstFloorOfNextTower;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v9);
  return clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v7, -1, 0, 0LL);
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
  __int64 v29; // x22
  int64_t Instance; // x0
  const MethodInfo *v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  struct EventDetailEntity_o *eventDetailEntity; // x8
  struct EventDetailEntity_o *v37; // x8
  int32_t eventId; // w26
  QuestGroupMaster_o *v39; // x25
  const MethodInfo *v40; // x3
  struct EventDetailEntity_o *v41; // x8
  int32_t v42; // w27
  int32_t v43; // w26
  TitleInfoEventTower_o *TowerShiftData; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x3
  TitleInfoEventTower_TowerShiftData_o *v47; // x27
  int ForceShiftTowerId; // w21
  EventRewardSaveData_c *v49; // x8
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  struct EventDetailEntity_o *v51; // x8
  Il2CppObject *Master_object; // x21
  struct EventDetailEntity_o *v53; // x8
  char j; // w8
  struct EventRewardSaveData_StaticFields *v55; // x9
  int32_t v56; // w21
  int32_t v57; // w8
  struct EventDetailEntity_o *v58; // x9
  int32_t v59; // w26
  int32_t v60; // w26
  struct EventDetailEntity_o *v61; // x8
  int32_t EventTowerState_k__BackingField; // w25
  Il2CppObject *MasterData_object; // x27
  struct EventDetailEntity_o *v64; // x8
  _DWORD *v65; // x28
  int v66; // w9
  int32_t v67; // w2
  const MethodInfo *v68; // x2
  const MethodInfo *v69; // x3
  struct EventDetailEntity_o *v70; // x8
  bool IsDispEnabled; // w26
  Il2CppObject *v72; // x29
  int32_t i; // w25
  struct EventDetailEntity_o *v74; // x8
  int32_t Point; // w26
  const MethodInfo *v76; // x3
  struct EventDetailEntity_o *v77; // x8
  TitleInfoEventTower_TowerEffectData_o *TowerEffectData; // x0
  const MethodInfo *v79; // x3
  int v80; // w29
  int32_t v81; // w23
  char v82; // w24
  System_Action_o *v83; // x21
  bool v84; // w19
  int32_t openEffectId; // w19
  int32_t v86; // w2
  __int64 v87; // x23
  const MethodInfo *v88; // x3
  struct EventDetailEntity_o *v89; // x8
  const MethodInfo *v90; // x3
  int64_t v91; // x22
  float v92; // s0
  System_Collections_IEnumerator_o *v93; // x0
  int32_t v94; // w2
  int32_t v95; // w3
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v99; // x2
  const MethodInfo *v100; // x2
  UnityEngine_Object_o *stamp; // x22
  const MethodInfo *v102; // x4
  bool v103; // w22
  UnityEngine_Object_o *v104; // x22
  struct EventDetailEntity_o *v105; // x9
  const MethodInfo *v106; // x3
  struct EventDetailEntity_o *v107; // x8
  const MethodInfo *v108; // x3
  const MethodInfo *v109; // [xsp+0h] [xbp-B0h]
  int v110; // [xsp+Ch] [xbp-A4h]
  System_Action_o *v111; // [xsp+10h] [xbp-A0h]
  _QWORD *v112; // [xsp+20h] [xbp-90h]
  Il2CppObject *entity; // [xsp+28h] [xbp-88h] BYREF
  EventTowerEntity_o *v114; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FD01E & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, callback);
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___, v9);
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___, v10);
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___, v11);
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___, v12);
    sub_1B64870(&Method_DataManager_GetMasterData_EventTowerMaster___, v13);
    sub_1B64870(&Method_DataManager_GetMasterData_QuestGroupMaster___, v14);
    sub_1B64870(&Method_DataManager_GetMasterData_UserEventPointMaster___, v15);
    sub_1B64870(&Method_DataManager_GetMaster_WarMaster___, v16);
    sub_1B64870(&DataManager_TypeInfo, v17);
    sub_1B64870(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v18);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___, v19);
    sub_1B64870(&int___TypeInfo, v20);
    sub_1B64870(&NetworkManager_TypeInfo, v21);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v22);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1B64870(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v24);
    sub_1B64870(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v25);
    sub_1B64870(&TerminalPramsManager_TypeInfo, v26);
    sub_1B64870(&Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__, v27);
    sub_1B64870(&TitleInfoEventTower___c__DisplayClass22_0_TypeInfo, v28);
    byte_49FD01E = 1;
  }
  v114 = 0LL;
  entity = 0LL;
  v29 = sub_1B64ABC(TitleInfoEventTower___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( !v29 )
    goto LABEL_173;
  *(_QWORD *)(v29 + 16) = effectAsset;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v29 + 16), (int32_t)effectAsset, v32, v33);
  *(_QWORD *)(v29 + 24) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v29 + 24), (int32_t)this, v34, v35);
  eventDetailEntity = this->fields.eventDetailEntity;
  if ( eventDetailEntity )
  {
    v112 = (_QWORD *)(v29 + 16);
    EventRewardSaveData__LoadEventTowerState(eventDetailEntity->fields.eventId, 0LL);
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_173;
    Instance = (int64_t)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    v37 = this->fields.eventDetailEntity;
    if ( !v37 )
      goto LABEL_173;
    eventId = v37->fields.eventId;
    v39 = (QuestGroupMaster_o *)Instance;
    if ( !byte_49FD0AA )
    {
      Instance = sub_1B64870(&EventRewardSaveData_TypeInfo, v31);
      byte_49FD0AA = 1;
    }
    if ( !v39 )
      goto LABEL_173;
    Instance = QuestGroupMaster__GetEventTowerQuestId(
                 v39,
                 eventId,
                 EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField + 1,
                 1,
                 0LL);
    v41 = this->fields.eventDetailEntity;
    if ( !v41 )
      goto LABEL_173;
    v42 = v41->fields.eventId;
    v43 = Instance;
    if ( !byte_49FD0AA )
    {
      sub_1B64870(&EventRewardSaveData_TypeInfo, v31);
      byte_49FD0AA = 1;
    }
    TowerShiftData = (TitleInfoEventTower_o *)TitleInfoEventTower__GetTowerShiftData(
                                                this,
                                                v42,
                                                EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
                                                v40);
    v47 = (TitleInfoEventTower_TowerShiftData_o *)TowerShiftData;
    if ( !byte_49FD0AA )
    {
      TowerShiftData = (TitleInfoEventTower_o *)sub_1B64870(&EventRewardSaveData_TypeInfo, v45);
      byte_49FD0AA = 1;
    }
    v111 = callback;
    if ( TitleInfoEventTower__IsForceShiftTower(
           TowerShiftData,
           v47,
           EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
           v46) )
    {
      if ( *v112 )
      {
        Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !Instance )
          goto LABEL_173;
        MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
        if ( !v47 )
          goto LABEL_173;
        ForceShiftTowerId = v47->fields.ForceShiftTowerId;
        if ( !byte_49FD0AB )
        {
          Instance = sub_1B64870(&EventRewardSaveData_TypeInfo, v31);
          byte_49FD0AB = 1;
        }
        v49 = EventRewardSaveData_TypeInfo;
        goto LABEL_22;
      }
      goto LABEL_74;
    }
    if ( v43 >= 1 )
    {
      Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Instance )
        goto LABEL_173;
      Instance = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v43, -1, 0, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !byte_49FD0AA )
        {
          Instance = sub_1B64870(&EventRewardSaveData_TypeInfo, v31);
          byte_49FD0AA = 1;
        }
        if ( EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField )
        {
          if ( *v112 )
          {
            Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
            if ( !Instance )
              goto LABEL_173;
            MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
            if ( !byte_49FD0AA )
            {
              Instance = sub_1B64870(&EventRewardSaveData_TypeInfo, v31);
              byte_49FD0AA = 1;
            }
            static_fields = EventRewardSaveData_TypeInfo->static_fields;
            ForceShiftTowerId = static_fields->_EventTowerState_k__BackingField + 1;
            if ( byte_49FD0AB )
              goto LABEL_23;
            Instance = sub_1B64870(&EventRewardSaveData_TypeInfo, v31);
            v49 = EventRewardSaveData_TypeInfo;
            byte_49FD0AB = 1;
LABEL_22:
            static_fields = v49->static_fields;
LABEL_23:
            static_fields->_EventTowerState_k__BackingField = ForceShiftTowerId;
            v51 = this->fields.eventDetailEntity;
            if ( !v51 )
              goto LABEL_173;
            EventRewardSaveData__SaveEventTowerState(v51->fields.eventId, 0LL);
            v110 = 1;
LABEL_75:
            if ( !byte_49FD0AA )
            {
              sub_1B64870(&EventRewardSaveData_TypeInfo, v31);
              byte_49FD0AA = 1;
            }
            EventTowerState_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
            Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_173;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventTowerMaster___);
            Instance = sub_1B64918(int___TypeInfo, 2LL);
            v64 = this->fields.eventDetailEntity;
            if ( !v64 )
              goto LABEL_173;
            v65 = (_DWORD *)Instance;
            if ( !Instance )
              goto LABEL_173;
            v66 = *(_DWORD *)(Instance + 24);
            if ( !v66 )
              goto LABEL_174;
            v67 = v64->fields.eventId;
            *(_DWORD *)(Instance + 32) = v67;
            if ( v66 == 1 )
              goto LABEL_174;
            *(_DWORD *)(Instance + 36) = EventTowerState_k__BackingField;
            if ( !MasterData_object )
              goto LABEL_173;
            EventTowerMaster__TryGetEntity(
              (EventTowerMaster_o *)MasterData_object,
              &v114,
              v67,
              EventTowerState_k__BackingField,
              0LL);
            TitleInfoEventTower__SetTowerPosition(this, EventTowerState_k__BackingField, v68);
            if ( v114 )
              this->fields.TowerFloorMax = v114->fields.topFloor;
            v70 = this->fields.eventDetailEntity;
            if ( !v70 )
              goto LABEL_173;
            IsDispEnabled = TitleInfoEventTower__IsDispEnabled(
                              (TitleInfoEventTower_o *)Instance,
                              v70->fields.eventId,
                              EventTowerState_k__BackingField,
                              v69);
            Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( !Instance )
              goto LABEL_173;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, IsDispEnabled, 0LL);
            Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_173;
            v72 = DataManager__GetMasterData_object_(
                    (DataManager_o *)Instance,
                    (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
            for ( i = EventTowerState_k__BackingField - 1; ; ++i )
            {
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Instance = NetworkManager__get_UserId(0LL);
              v74 = this->fields.eventDetailEntity;
              if ( !v74 || !v72 )
                goto LABEL_173;
              Point = UserEventPointMaster__GetPoint(
                        (UserEventPointMaster_o *)v72,
                        Instance,
                        v74->fields.eventId,
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
            v77 = this->fields.eventDetailEntity;
            if ( !v77 )
              goto LABEL_173;
            TowerEffectData = TitleInfoEventTower__GetTowerEffectData(
                                this,
                                v77->fields.eventId,
                                this->fields.openEffectId,
                                v76);
            if ( TowerEffectData )
              TitleInfoEventTower__PlayFade(
                this,
                0.0,
                1.0,
                TowerEffectData->fields.FadeInTime,
                TowerEffectData->fields.FadeInEasingType,
                0LL,
                v79);
            else
LABEL_101:
              TitleInfoEventTower__SetSpriteAlpha(this, 1.0, v31);
            v80 = 0;
            if ( i + 1 < 2 || Point )
            {
              ++i;
              v83 = v111;
              v82 = v110;
              v84 = 0;
LABEL_140:
              Instance = (int64_t)v114;
              if ( !v114 )
                goto LABEL_173;
              if ( !EventTowerEntity__HasFlag(v114, 2, 0LL) )
                goto LABEL_148;
              stamp = (UnityEngine_Object_o *)this->fields.stamp;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(stamp, 0LL, 0LL) )
              {
                Instance = (int64_t)this->fields.stamp;
                if ( !Instance )
                  goto LABEL_173;
                Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)Instance,
                                      (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
                if ( !Instance )
                  goto LABEL_173;
                TitleInfoEventTowerStamp__StampProgress(
                  (TitleInfoEventTowerStamp_o *)Instance,
                  Point,
                  i,
                  this->fields.spriteRoot,
                  v102);
                v103 = 1;
              }
              else
              {
LABEL_148:
                v104 = (UnityEngine_Object_o *)this->fields.stamp;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v104, 0LL, 0LL) )
                {
                  Instance = (int64_t)this->fields.stamp;
                  if ( !Instance )
                    goto LABEL_173;
                  Instance = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)Instance,
                                        (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
                  if ( !Instance )
                    goto LABEL_173;
                  TitleInfoEventTowerStamp__ResetStamp((TitleInfoEventTowerStamp_o *)Instance, v31);
                }
                v103 = 0;
              }
              Instance = (int64_t)this->fields.floorSprite;
              if ( Instance )
              {
                Instance = (int64_t)UnityEngine_Component__GetComponent_object_(
                                      (UnityEngine_Component_o *)Instance,
                                      (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___);
                v105 = this->fields.eventDetailEntity;
                if ( v105 )
                {
                  if ( v114 )
                  {
                    if ( Instance )
                    {
                      TitleInfoEventTowerFloorLabel__SetFloorLabel(
                        (TitleInfoEventTowerFloorLabel_o *)Instance,
                        v105->fields.eventId,
                        i,
                        this->fields.TowerFloorMax,
                        Point,
                        v114->fields.floorLabel,
                        v84,
                        v103,
                        v109);
                      Instance = (int64_t)this->fields.nameSprite;
                      if ( Instance )
                      {
                        Instance = (int64_t)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)Instance,
                                              (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___);
                        v107 = this->fields.eventDetailEntity;
                        if ( v107 )
                        {
                          if ( Instance )
                          {
                            TitleInfoEventTowerNameLabel__SetTowerNameLabel(
                              (TitleInfoEventTowerNameLabel_o *)Instance,
                              v107->fields.eventId,
                              i,
                              v106);
                            Instance = (int64_t)this->fields.baseSprite;
                            if ( Instance )
                            {
                              Instance = (int64_t)UnityEngine_Component__GetComponent_object_(
                                                    (UnityEngine_Component_o *)Instance,
                                                    (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___);
                              if ( Instance )
                              {
                                TitleInfoEventTowerBase__SetBaseSprite(
                                  (TitleInfoEventTowerBase_o *)Instance,
                                  i,
                                  v103,
                                  v108);
                                if ( (v82 & 1) != 0 || !*v112 )
                                {
LABEL_168:
                                  if ( !this->fields.endCallback && v83 && v80 != 1 )
                                    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v83->fields.m_target)(
                                      v83->fields.original_method_info,
                                      *(_QWORD *)&v83->fields.extra_arg);
                                  return;
                                }
                                Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
              sub_1B64ACC(Instance, v31);
            }
            if ( v114 )
            {
              if ( !byte_49FD0AA )
              {
                Instance = sub_1B64870(&EventRewardSaveData_TypeInfo, v31);
                byte_49FD0AA = 1;
              }
              v81 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
              if ( v81 == i )
              {
                v82 = v110;
                if ( v65[6] > 1u )
                {
                  v65[9] = v81;
                  Point = this->fields.TowerFloorMax;
                  EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &v114, v65[8], v81, 0LL);
                  v83 = v111;
                  v80 = 0;
                  i = v81;
LABEL_138:
                  Instance = (int64_t)v114;
                  if ( !v114 )
                    goto LABEL_173;
                  v84 = !EventTowerEntity__HasFlag(v114, 1, 0LL);
                  goto LABEL_140;
                }
                goto LABEL_174;
              }
              v82 = v110;
              if ( !v110 )
              {
                ++i;
                v83 = v111;
                v80 = 0;
                Point = 0;
                goto LABEL_138;
              }
              if ( v65[6] < 2u )
                goto LABEL_174;
              Point = this->fields.TowerFloorMax;
              Instance = EventTowerMaster__TryGetEntity(
                           (EventTowerMaster_o *)MasterData_object,
                           &v114,
                           v65[8],
                           v65[9],
                           0LL);
              if ( !v114 )
                goto LABEL_173;
              openEffectId = v114->fields.openEffectId;
              this->fields.openEffectId = openEffectId;
              if ( v65[6] <= 1u )
LABEL_174:
                sub_1B64AD4(Instance, v31);
              v86 = v65[8];
              v65[9] = i;
              EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &v114, v86, i, 0LL);
              if ( !openEffectId )
              {
                Instance = (int64_t)v114;
                v83 = v111;
                if ( !v114 )
                  goto LABEL_173;
                if ( EventTowerEntity__HasFlag(v114, 2, 0LL) )
                {
                  Instance = (int64_t)this->fields.spriteRoot;
                  if ( !Instance )
                    goto LABEL_173;
                  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
                  x = localPosition.fields.x;
                  y = localPosition.fields.y;
                  z = localPosition.fields.z;
                  TitleInfoEventTower__SetTowerPosition(this, i, v99);
                  Instance = (int64_t)this->fields.spriteRoot;
                  if ( !Instance )
                    goto LABEL_173;
                  Instance = (int64_t)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)Instance,
                                        (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___);
                  if ( !Instance )
                    goto LABEL_173;
                  v116.fields.x = x;
                  v116.fields.y = y;
                  v116.fields.z = z;
                  TitleInfoEventTowerSlideAnimation__StartSlideAnim(
                    (TitleInfoEventTowerSlideAnimation_o *)Instance,
                    v111,
                    v116,
                    v100);
                }
                v80 = 1;
                goto LABEL_138;
              }
              v87 = sub_1B64ABC(System_Action_TypeInfo);
              System_Action___ctor(
                (System_Action_o *)v87,
                (Il2CppObject *)v29,
                Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__,
                0LL);
              v89 = this->fields.eventDetailEntity;
              v83 = v111;
              if ( !v89 )
                goto LABEL_173;
              Instance = (int64_t)TitleInfoEventTower__GetTowerEffectData(
                                    this,
                                    v89->fields.eventId,
                                    this->fields.openEffectId,
                                    v88);
              if ( Instance )
              {
                v91 = Instance;
                TitleInfoEventTower__PlayFade(
                  this,
                  1.0,
                  0.0,
                  *(float *)(Instance + 20),
                  *(_DWORD *)(Instance + 24),
                  0LL,
                  v90);
                v92 = *(float *)(v91 + 28);
                if ( v92 <= 0.0 )
                {
                  if ( !v87 )
                    goto LABEL_173;
                  (*(void (__fastcall **)(_QWORD, _QWORD))(v87 + 24))(*(_QWORD *)(v87 + 64), *(_QWORD *)(v87 + 40));
                }
                else
                {
                  v93 = BasicHelper__DelayCall(v92, (System_Action_o *)v87, 0LL);
                  UnityEngine_MonoBehaviour__StartCoroutine_69121188((UnityEngine_MonoBehaviour_o *)this, v93, 0LL);
                }
              }
              else
              {
                if ( !v87 )
                  goto LABEL_173;
                (*(void (__fastcall **)(_QWORD, _QWORD))(v87 + 24))(*(_QWORD *)(v87 + 64), *(_QWORD *)(v87 + 40));
                Instance = (int64_t)this->fields.floorSprite;
                if ( !Instance )
                  goto LABEL_173;
                Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                if ( !Instance )
                  goto LABEL_173;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
              }
              this->fields.endCallback = v111;
              sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.endCallback, (int32_t)v111, v94, v95);
            }
            else
            {
              if ( v65[6] <= 1u )
                goto LABEL_174;
              v65[9] = i;
              Point = this->fields.TowerFloorMax;
              EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &v114, v65[8], i, 0LL);
              v83 = v111;
              v82 = v110;
            }
            v80 = 0;
            goto LABEL_138;
          }
        }
        else
        {
          for ( j = 1; ; j = byte_49FD0AA )
          {
            if ( !j )
            {
              Instance = sub_1B64870(&EventRewardSaveData_TypeInfo, v31);
              byte_49FD0AA = 1;
            }
            v55 = EventRewardSaveData_TypeInfo->static_fields;
            v56 = v55->_EventTowerState_k__BackingField;
            if ( !byte_49FD0AB )
            {
              Instance = sub_1B64870(&EventRewardSaveData_TypeInfo, v31);
              byte_49FD0AB = 1;
              v55 = EventRewardSaveData_TypeInfo->static_fields;
            }
            v57 = v56 + 1;
            v55->_EventTowerState_k__BackingField = v56 + 1;
            v58 = this->fields.eventDetailEntity;
            if ( !v58 )
              goto LABEL_173;
            v59 = v58->fields.eventId;
            if ( !byte_49FD0AA )
            {
              sub_1B64870(&EventRewardSaveData_TypeInfo, v31);
              byte_49FD0AA = 1;
              v57 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
            }
            Instance = QuestGroupMaster__GetEventTowerQuestId(v39, v59, v57 + 1, 1, 0LL);
            if ( (int)Instance < 1 )
              break;
            v60 = Instance;
            Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            if ( !Instance )
              goto LABEL_173;
            Instance = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v60, -1, 0, 0LL);
            if ( (Instance & 1) == 0 )
              break;
          }
          v61 = this->fields.eventDetailEntity;
          if ( !v61 )
            goto LABEL_173;
          EventRewardSaveData__SaveEventTowerState(v61->fields.eventId, 0LL);
        }
LABEL_74:
        v110 = 0;
        goto LABEL_75;
      }
    }
    if ( !byte_49FD0AA )
    {
      sub_1B64870(&EventRewardSaveData_TypeInfo, v31);
      byte_49FD0AA = 1;
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
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49FB137 )
    {
      sub_1B64870(&TerminalPramsManager_TypeInfo, v31);
      byte_49FB137 = 1;
    }
    Instance = (int64_t)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (int64_t)TerminalPramsManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_173;
    Instance = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 &entity,
                 *(_DWORD *)(*(_QWORD *)(Instance + 184) + 4LL),
                 (const MethodInfo_30D61D4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    if ( (Instance & 1) != 0 )
    {
      v53 = this->fields.eventDetailEntity;
      if ( !v53 || !entity )
        goto LABEL_173;
      if ( v53->fields.eventId == LODWORD(entity[6].klass) )
      {
        Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  const MethodInfo *v24; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  EasingObject_o *v29; // x21
  System_Action_o *v30; // x22
  System_Action_o *v31; // x23

  if ( (byte_49FD022 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&easingType);
    sub_1B64870(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v13);
    sub_1B64870(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__, v14);
    sub_1B64870(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__, v15);
    sub_1B64870(&TitleInfoEventTower___c__DisplayClass26_0_TypeInfo, v16);
    byte_49FD022 = 1;
  }
  v17 = sub_1B64ABC(TitleInfoEventTower___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_6;
  *(float *)(v17 + 24) = from;
  *(float *)(v17 + 28) = to;
  *(_QWORD *)(v17 + 32) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)this, v20, v21);
  *(_QWORD *)(v17 + 40) = endAction;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v17 + 40), (int32_t)endAction, v22, v23);
  TitleInfoEventTower__SetSpriteAlpha(this, *(float *)(v17 + 24), v24);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E8BC9C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v17 + 16) = Component_object;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)Component_object, v27, v28);
  v29 = *(EasingObject_o **)(v17 + 16);
  v30 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)v17, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__, 0LL);
  v31 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)v17, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__, 0LL);
  if ( !v29 )
LABEL_6:
    sub_1B64ACC(v18, v19);
  EasingObject__Play(v29, time, v30, v31, 0.0, easingType, 0LL);
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
    sub_1B64ACC(baseSprite, method);
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
  void *Instance; // x0
  __int64 v9; // x1
  struct EventDetailEntity_o *eventDetailEntity; // x8
  EventUiEntity_o *Entity; // x0
  EventUiEntity_o *v12; // x20
  UnityEngine_Object_o *spriteRoot; // x21
  UnityEngine_Transform_o *v14; // x19
  int x; // s8
  int y; // s9
  float *v17; // x8
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FD01F & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_EventUiMaster___, *(_QWORD *)&towerId);
    sub_1B64870(&EventUiEntity_TypeInfo, v5);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v6);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_49FD01F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventUiMaster___);
  if ( Instance )
  {
    eventDetailEntity = this->fields.eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_15;
    Entity = EventUiMaster__getEntity((EventUiMaster_o *)Instance, eventDetailEntity->fields.eventId, towerId, 0LL);
    if ( Entity )
    {
      v12 = Entity;
      spriteRoot = (UnityEngine_Object_o *)this->fields.spriteRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(spriteRoot, 0LL, 0LL) )
      {
        v14 = this->fields.spriteRoot;
        x = v12->fields.x;
        y = v12->fields.y;
        Instance = EventUiEntity_TypeInfo;
        if ( !EventUiEntity_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo);
          Instance = EventUiEntity_TypeInfo;
        }
        if ( v14 )
        {
          v17 = (float *)*((_QWORD *)Instance + 23);
          v18.fields.z = *v17 * 0.0;
          v18.fields.y = *v17 * (float)-(float)y;
          v18.fields.x = *v17 * (float)x;
          UnityEngine_Transform__set_localPosition(v14, v18, 0LL);
          return;
        }
LABEL_15:
        sub_1B64ACC(Instance, v9);
      }
    }
  }
}


void __fastcall TitleInfoEventTower__Update(TitleInfoEventTower_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o **p_animationName; // x20
  UnityEngine_Object_o *animationData; // x21
  struct UnityEngine_Animation_o **p_animationData; // x23
  __int64 v9; // x1
  UnityEngine_Animation_o *klass; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  UnityEngine_Object_o *simpleAnimationData; // x21
  TitleInfoEventTower_c *v15; // x0
  System_String_o *EFFECT_ANIMATION_START_FORMAT; // x21
  Il2CppObject *v17; // x0
  System_String_o *v18; // x22
  System_String_o *EFFECT_ANIMATION_END_FORMAT; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  struct System_String_o *v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  UnityEngine_Object_o *v27; // x21
  const MethodInfo *v28; // x4
  int32_t v29; // w2
  int32_t v30; // w3
  ServantStatusBattleListViewItem_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *v32; // x21
  UnityEngine_Object_o *gameObject; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  UnityEngine_Object_o *v36; // x21
  UnityEngine_Object_o *v37; // x20
  UnityEngine_Object_o *v38; // x20
  int32_t v39; // w2
  int32_t v40; // w3
  ServantStatusBattleListViewItem_o *p_endCallback; // x19
  struct System_Action_o *v42; // x20
  struct System_Action_o *endCallback; // t1
  int32_t v44; // [xsp+8h] [xbp-48h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FD021 & 1) == 0 )
  {
    sub_1B64870(&int_TypeInfo, method);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v3);
    sub_1B64870(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_1B64870(&TitleInfoEventTower_TypeInfo, v5);
    byte_49FD021 = 1;
  }
  p_animationName = &this->fields.animationName;
  if ( !System_String__IsNullOrEmpty(this->fields.animationName, 0LL) )
  {
    p_animationData = &this->fields.animationData;
    animationData = (UnityEngine_Object_o *)this->fields.animationData;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(simpleAnimationData, 0LL, 0LL) )
    {
      klass = (UnityEngine_Animation_o *)this->fields.simpleAnimationData;
      if ( !klass )
        goto LABEL_48;
      if ( !SimpleAnimation__IsPlaying((SimpleAnimation_o *)klass, *p_animationName, 0LL) )
      {
LABEL_14:
        v15 = TitleInfoEventTower_TypeInfo;
        if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
          v15 = TitleInfoEventTower_TypeInfo;
        }
        EFFECT_ANIMATION_START_FORMAT = v15->static_fields->EFFECT_ANIMATION_START_FORMAT;
        openEffectId = this->fields.openEffectId;
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openEffectId, v11, v12, v13);
        v18 = System_String__Format(EFFECT_ANIMATION_START_FORMAT, v17, 0LL);
        EFFECT_ANIMATION_END_FORMAT = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_END_FORMAT;
        v44 = this->fields.openEffectId;
        v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v20, v21, v22);
        v24 = System_String__Format(EFFECT_ANIMATION_END_FORMAT, v23, 0LL);
        if ( System_String__op_Equality(this->fields.animationName, v18, 0LL) )
        {
          this->fields.animationName = v24;
          sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.animationName, (int32_t)v24, v25, v26);
          v27 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
          {
            klass = (UnityEngine_Animation_o *)this->fields.simpleAnimationData;
            if ( klass )
            {
              SimpleAnimation__Play_63521240((SimpleAnimation_o *)klass, *p_animationName, 0LL);
LABEL_35:
              TitleInfoEventTower__Open(this, 0LL, 0LL, 1, v28);
              return;
            }
          }
          else
          {
            v36 = (UnityEngine_Object_o *)*p_animationData;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v36, 0LL, 0LL) )
              goto LABEL_35;
            klass = *p_animationData;
            if ( *p_animationData )
            {
              UnityEngine_Animation__Play_68881008(klass, *p_animationName, 0LL);
              goto LABEL_35;
            }
          }
LABEL_48:
          sub_1B64ACC(klass, v9);
        }
        if ( System_String__op_Equality(*p_animationName, v24, 0LL) )
        {
          this->fields.animationName = 0LL;
          sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.animationName, 0, v29, v30);
          p_simpleAnimationData = (ServantStatusBattleListViewItem_o *)&this->fields.simpleAnimationData;
          v32 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          this->fields.openEffectId = 0;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
          {
            klass = (UnityEngine_Animation_o *)p_simpleAnimationData->klass;
            if ( !p_simpleAnimationData->klass )
              goto LABEL_48;
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)klass,
                                                   0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__DestroyImmediate_69136104(gameObject, 0LL);
            p_simpleAnimationData->klass = 0LL;
          }
          else
          {
            v37 = (UnityEngine_Object_o *)*p_animationData;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v37, 0LL, 0LL) )
              goto LABEL_44;
            klass = *p_animationData;
            if ( !*p_animationData )
              goto LABEL_48;
            v38 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__DestroyImmediate_69136104(v38, 0LL);
            p_simpleAnimationData = (ServantStatusBattleListViewItem_o *)&this->fields.animationData;
            *p_animationData = 0LL;
          }
          sub_1B64814(p_simpleAnimationData, 0, v34, v35);
LABEL_44:
          klass = (UnityEngine_Animation_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EE738 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( !klass )
            goto LABEL_48;
          MissionNotifyManager__CancelPause((MissionNotifyManager_o *)klass, 0LL);
          endCallback = this->fields.endCallback;
          p_endCallback = (ServantStatusBattleListViewItem_o *)&this->fields.endCallback;
          v42 = endCallback;
          if ( endCallback )
          {
            p_endCallback->klass = 0LL;
            sub_1B64814(p_endCallback, 0, v39, v40);
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v42->fields.m_target)(
              v42->fields.original_method_info,
              *(_QWORD *)&v42->fields.extra_arg);
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

  this->fields.eventDetailEntity = value;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.eventDetailEntity, (int32_t)value, (int32_t)method, v3);
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
  System_String_o *Component_object; // x0
  AssetData_o *effectAsset; // x20
  struct TitleInfoEventTower_o *_4__this; // x8
  System_String_o *OBJECT_NAME_EFFECT_BASE; // x21
  System_String_o *v13; // x0
  UnityEngine_Object_o *Object_37459800; // x20
  Il2CppObject *v15; // x0
  struct TitleInfoEventTower_o *v16; // x8
  UnityEngine_GameObject_o *v17; // x20
  struct TitleInfoEventTower_o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  struct TitleInfoEventTower_o *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  struct TitleInfoEventTower_o *v24; // x8
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  struct TitleInfoEventTower_o *v28; // x20
  struct TitleInfoEventTower_o *v29; // x8
  System_String_o *EFFECT_ANIMATION_START_FORMAT; // x21
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  struct TitleInfoEventTower_o *v34; // x8
  UnityEngine_Object_o *animationData; // x20
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  struct TitleInfoEventTower_o *v39; // x20
  struct TitleInfoEventTower_o *v40; // x8
  System_String_o *v41; // x21
  Il2CppObject *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  struct TitleInfoEventTower_o *v45; // x8
  int32_t v46; // [xsp+8h] [xbp-38h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FD02A & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v3);
    sub_1B64870(&UnityEngine_GameObject_TypeInfo, v4);
    sub_1B64870(&int_TypeInfo, v5);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v7);
    sub_1B64870(&TitleInfoEventTower_TypeInfo, v8);
    byte_49FD02A = 1;
  }
  Component_object = (System_String_o *)TitleInfoEventTower_TypeInfo;
  effectAsset = this->fields.effectAsset;
  if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_39;
  OBJECT_NAME_EFFECT_BASE = TitleInfoEventTower_TypeInfo->static_fields->OBJECT_NAME_EFFECT_BASE;
  v13 = System_Int32__ToString((int)_4__this + 120, 0LL);
  Component_object = System_String__Concat_61383576(OBJECT_NAME_EFFECT_BASE, v13, 0LL);
  if ( !effectAsset )
    goto LABEL_39;
  Object_37459800 = AssetData__GetObject_37459800(effectAsset, Component_object, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_37459800 )
    v15 = (UnityEngine_GameObject_c *)Object_37459800->klass == UnityEngine_GameObject_TypeInfo
        ? (Il2CppObject *)Object_37459800
        : 0LL;
  else
    v15 = 0LL;
  Component_object = (System_String_o *)UnityEngine_Object__Instantiate_object_(
                                          v15,
                                          (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_39;
  v17 = (UnityEngine_GameObject_o *)Component_object;
  GameObjectExtensions__SafeSetParent_33382288(
    (UnityEngine_GameObject_o *)Component_object,
    v16->fields.effectRoot,
    0LL);
  if ( !v17 )
    goto LABEL_39;
  v18 = this->fields.__4__this;
  Component_object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                          v17,
                                          (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !v18 )
    goto LABEL_39;
  v18->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&v18->fields.simpleAnimationData,
    (int32_t)Component_object,
    v19,
    v20);
  v21 = this->fields.__4__this;
  Component_object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                          v17,
                                          (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !v21 )
    goto LABEL_39;
  v21->fields.animationData = (struct UnityEngine_Animation_o *)Component_object;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v21->fields.animationData, (int32_t)Component_object, v22, v23);
  v24 = this->fields.__4__this;
  if ( !v24 )
    goto LABEL_39;
  Component_object = (System_String_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)v24->fields.simpleAnimationData,
                                          0LL,
                                          0LL);
  v28 = this->fields.__4__this;
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    Component_object = (System_String_o *)TitleInfoEventTower_TypeInfo;
    v29 = this->fields.__4__this;
    if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
      v29 = this->fields.__4__this;
    }
    if ( v29 )
    {
      EFFECT_ANIMATION_START_FORMAT = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT;
      openEffectId = v29->fields.openEffectId;
      v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openEffectId, v25, v26, v27);
      Component_object = System_String__Format(EFFECT_ANIMATION_START_FORMAT, v31, 0LL);
      if ( v28 )
      {
        v28->fields.animationName = Component_object;
        sub_1B64814(
          (ServantStatusBattleListViewItem_o *)&v28->fields.animationName,
          (int32_t)Component_object,
          v32,
          v33);
        v34 = this->fields.__4__this;
        if ( v34 )
        {
          Component_object = (System_String_o *)v34->fields.simpleAnimationData;
          if ( Component_object )
          {
            SimpleAnimation__Play_63521240((SimpleAnimation_o *)Component_object, v34->fields.animationName, 0LL);
            return;
          }
        }
      }
    }
LABEL_39:
    sub_1B64ACC(Component_object, method);
  }
  if ( !v28 )
    goto LABEL_39;
  animationData = (UnityEngine_Object_o *)v28->fields.animationData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animationData, 0LL, 0LL) )
  {
    Component_object = (System_String_o *)TitleInfoEventTower_TypeInfo;
    v39 = this->fields.__4__this;
    v40 = v39;
    if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
      v40 = this->fields.__4__this;
    }
    if ( !v40 )
      goto LABEL_39;
    v41 = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT;
    v46 = v40->fields.openEffectId;
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v36, v37, v38);
    Component_object = System_String__Format(v41, v42, 0LL);
    if ( !v39 )
      goto LABEL_39;
    v39->fields.animationName = Component_object;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v39->fields.animationName, (int32_t)Component_object, v43, v44);
    v45 = this->fields.__4__this;
    if ( !v45 )
      goto LABEL_39;
    Component_object = (System_String_o *)v45->fields.animationData;
    if ( !Component_object )
      goto LABEL_39;
    UnityEngine_Animation__Play_68881008((UnityEngine_Animation_o *)Component_object, v45->fields.animationName, 0LL);
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
    sub_1B64ACC(this, method);
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
    sub_1B64ACC(0LL, method);
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
    sub_1B64ACC(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTower___c__DisplayClass31_0___GetTowerShiftData_b__1(
        TitleInfoEventTower___c__DisplayClass31_0_o *this,
        TitleInfoEventTower_TowerShiftData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B64ACC(this, 0LL);
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
    sub_1B64ACC(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTower___c__DisplayClass33_0___GetTowerEffectData_b__1(
        TitleInfoEventTower___c__DisplayClass33_0_o *this,
        TitleInfoEventTower_TowerEffectData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B64ACC(this, 0LL);
  return data->fields.EffectId == this->fields.effectId;
}