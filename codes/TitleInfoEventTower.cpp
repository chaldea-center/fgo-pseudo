void TitleInfoEventTower___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct TitleInfoEventTower_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct TitleInfoEventTower_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_5936FB8 & 1) == 0 )
  {
    sub_21FFC50(&TitleInfoEventTower_TypeInfo);
    sub_21FFC50(&StringLiteral_19696/*"ef_tower_change{0}_end"*/);
    sub_21FFC50(&StringLiteral_19695/*"ef_tower_change"*/);
    sub_21FFC50(&StringLiteral_19697/*"ef_tower_change{0}_start"*/);
    byte_5936FB8 = 1;
  }
  v7 = StringLiteral_19697/*"ef_tower_change{0}_start"*/;
  TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT = (struct System_String_o *)StringLiteral_19697/*"ef_tower_change{0}_start"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)TitleInfoEventTower_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_19696/*"ef_tower_change{0}_end"*/;
  static_fields = TitleInfoEventTower_TypeInfo->static_fields;
  static_fields->EFFECT_ANIMATION_END_FORMAT = (struct System_String_o *)StringLiteral_19696/*"ef_tower_change{0}_end"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->EFFECT_ANIMATION_END_FORMAT,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_19695/*"ef_tower_change"*/;
  v17 = TitleInfoEventTower_TypeInfo->static_fields;
  v17->OBJECT_NAME_EFFECT_BASE = (struct System_String_o *)StringLiteral_19695/*"ef_tower_change"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->OBJECT_NAME_EFFECT_BASE, v16, v18, v19, v20, v21, v22, v23);
}


void TitleInfoEventTower___ctor(TitleInfoEventTower_o *this, const MethodInfo *method)
{
  this->fields.TowerFloorMax = 100;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void TitleInfoEventTower__Close(TitleInfoEventTower_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *simpleAnimationData; // x20
  __int64 v14; // x2
  UnityEngine_Object_o *animationData; // x20

  if ( (byte_5936FAF & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5936FAF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_16:
    sub_21FFECC(gameObject, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.animationName = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.animationName, 0, v5, v6, v7, v8, v9, v10);
  simpleAnimationData = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationData, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.simpleAnimationData;
    if ( !gameObject )
      goto LABEL_16;
  }
  else
  {
    animationData = (UnityEngine_Object_o *)this->fields.animationData;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v14);
    if ( !UnityEngine_Object__op_Inequality(animationData, 0, 0) )
      return;
    gameObject = (UnityEngine_GameObject_o *)this->fields.animationData;
    if ( !gameObject )
      goto LABEL_16;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


int32_t TitleInfoEventTower__GetQuestIdOnFirstFloorOfNextTower(
        TitleInfoEventTower_o *this,
        int32_t eventId,
        int32_t nowTowerId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_5936FB3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5936FB3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v7);
  }
  return QuestGroupMaster__GetEventTowerQuestId((QuestGroupMaster_o *)Instance, eventId, nowTowerId + 1, 1, 0);
}


TitleInfoEventTower_TowerEffectData_o *TitleInfoEventTower__GetTowerEffectData(
        TitleInfoEventTower_o *this,
        int32_t eventId,
        int32_t effectId,
        const MethodInfo *method)
{
  TitleInfoEventTower___c__DisplayClass33_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Object_array *towerEventInfoList; // x21
  System_Func_object__bool__o *v11; // x19
  TitleInfoEventTower_TowerEffectData_o *result; // x0
  System_Object_array *v13; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_5936FB7 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___);
    sub_21FFC50(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
    sub_21FFC50(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
    sub_21FFC50(&System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo);
    sub_21FFC50(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__);
    sub_21FFC50(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__);
    sub_21FFC50(&TitleInfoEventTower___c__DisplayClass33_0_TypeInfo);
    byte_5936FB7 = 1;
  }
  v7 = (TitleInfoEventTower___c__DisplayClass33_0_o *)sub_21FFEBC(TitleInfoEventTower___c__DisplayClass33_0_TypeInfo);
  TitleInfoEventTower___c__DisplayClass33_0___ctor(v7, 0);
  if ( !v7 )
    sub_21FFECC(v8, v9);
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v7->fields.eventId = eventId;
  v7->fields.effectId = effectId;
  v11 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__,
    0);
  result = (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_object_(
                                                      towerEventInfoList,
                                                      (System_Func_T__bool__o *)v11,
                                                      (const MethodInfo_37DD66C *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v13 = *(System_Object_array **)&result->fields.FadeInTime;
    v14 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      (Il2CppObject *)v7,
      Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__,
      0);
    return (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_object_(
                                                      v13,
                                                      (System_Func_T__bool__o *)v14,
                                                      (const MethodInfo_37DD66C *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___);
  }
  return result;
}


TitleInfoEventTower_TowerShiftData_o *TitleInfoEventTower__GetTowerShiftData(
        TitleInfoEventTower_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  TitleInfoEventTower___c__DisplayClass31_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Object_array *towerEventInfoList; // x21
  System_Func_object__bool__o *v11; // x19
  TitleInfoEventTower_TowerShiftData_o *result; // x0
  System_Object_array *v13; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_5936FB5 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
    sub_21FFC50(&Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___);
    sub_21FFC50(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
    sub_21FFC50(&System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo);
    sub_21FFC50(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__);
    sub_21FFC50(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__);
    sub_21FFC50(&TitleInfoEventTower___c__DisplayClass31_0_TypeInfo);
    byte_5936FB5 = 1;
  }
  v7 = (TitleInfoEventTower___c__DisplayClass31_0_o *)sub_21FFEBC(TitleInfoEventTower___c__DisplayClass31_0_TypeInfo);
  TitleInfoEventTower___c__DisplayClass31_0___ctor(v7, 0);
  if ( !v7 )
    sub_21FFECC(v8, v9);
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v7->fields.eventId = eventId;
  v7->fields.towerId = towerId;
  v11 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__,
    0);
  result = (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_object_(
                                                     towerEventInfoList,
                                                     (System_Func_T__bool__o *)v11,
                                                     (const MethodInfo_37DD66C *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v13 = *(System_Object_array **)&result->fields.CondType;
    v14 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      (Il2CppObject *)v7,
      Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__,
      0);
    return (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_object_(
                                                     v13,
                                                     (System_Func_T__bool__o *)v14,
                                                     (const MethodInfo_37DD66C *)Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool TitleInfoEventTower__IsDispEnabled(
        TitleInfoEventTower_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  EventUiEntity_o *Entity; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  EventUiEntity_o *v11; // x19

  if ( (byte_5936FB4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventUiMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventUiReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5936FB4 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&eventId, *(_QWORD *)&towerId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventUiMaster___);
  if ( !Master_object )
    goto LABEL_12;
  Entity = EventUiMaster__getEntity((EventUiMaster_o *)Master_object, eventId, towerId, 0);
  if ( !Entity )
    return (char)Entity;
  v11 = Entity;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v10);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
  if ( !Master_object )
LABEL_12:
    sub_21FFECC(Master_object, v7);
  LOBYTE(Entity) = EventUiReleaseMaster__IsOpen((EventUiReleaseMaster_o *)Master_object, v11, 0);
  return (char)Entity;
}


// local variable allocation has failed, the output may be wrong!
bool TitleInfoEventTower__IsForceShiftTower(
        TitleInfoEventTower_o *this,
        TitleInfoEventTower_TowerShiftData_o *towerShiftData,
        int32_t nowTowerId,
        const MethodInfo *method)
{
  int32_t CondType; // w20
  int32_t CondTargetId; // w21
  int64_t CondValue; // x19

  if ( (byte_5936FB6 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    byte_5936FB6 = 1;
  }
  if ( !towerShiftData || towerShiftData->fields.TowerId != nowTowerId )
    return 0;
  CondType = towerShiftData->fields.CondType;
  CondTargetId = towerShiftData->fields.CondTargetId;
  CondValue = towerShiftData->fields.CondValue;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, towerShiftData, *(_QWORD *)&nowTowerId);
  return CondType__IsOpen(CondType, CondTargetId, CondValue, 0, 0, 0);
}


bool TitleInfoEventTower__IsOpenedNextTower(
        TitleInfoEventTower_o *this,
        int32_t eventId,
        int32_t nowTowerId,
        const MethodInfo *method)
{
  int32_t QuestIdOnFirstFloorOfNextTower; // w0
  int32_t v7; // w19
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_5936FB2 & 1) == 0 )
  {
    this = (TitleInfoEventTower_o *)sub_21FFC50(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_5936FB2 = 1;
  }
  QuestIdOnFirstFloorOfNextTower = TitleInfoEventTower__GetQuestIdOnFirstFloorOfNextTower(
                                     this,
                                     eventId,
                                     nowTowerId,
                                     method);
  if ( QuestIdOnFirstFloorOfNextTower < 1 )
    return 0;
  v7 = QuestIdOnFirstFloorOfNextTower;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v9);
  return clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v7, -1, 0, 0);
}


void TitleInfoEventTower__Open(
        TitleInfoEventTower_o *this,
        System_Action_o *callback,
        AssetData_o *effectAsset,
        bool isFadeIn,
        const MethodInfo *method)
{
  __int64 v9; // x22
  __int64 Instance; // x0
  const MethodInfo *v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  _QWORD *v18; // x19
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct EventDetailEntity_o *eventDetailEntity; // x8
  struct EventDetailEntity_o *v26; // x8
  int32_t eventId; // w23
  QuestGroupMaster_o *v28; // x24
  const MethodInfo *v29; // x3
  struct EventDetailEntity_o *v30; // x8
  int32_t v31; // w26
  int32_t v32; // w23
  TitleInfoEventTower_o *TowerShiftData; // x0
  const MethodInfo *v34; // x3
  TitleInfoEventTower_TowerShiftData_o *v35; // x26
  int ForceShiftTowerId; // w21
  EventRewardSaveData_c *v37; // x8
  struct EventRewardSaveData_StaticFields *v38; // x9
  struct EventDetailEntity_o *v39; // x8
  int32_t v40; // w24
  Il2CppObject *MasterData_object; // x27
  struct EventDetailEntity_o *v42; // x8
  _DWORD *v43; // x28
  int v44; // w9
  int32_t v45; // w2
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x3
  struct EventDetailEntity_o *v48; // x8
  bool IsDispEnabled; // w23
  __int64 v50; // x2
  Il2CppObject *v51; // x23
  int32_t i; // w24
  struct EventDetailEntity_o *v53; // x8
  int32_t Point; // w26
  const MethodInfo *v55; // x3
  struct EventDetailEntity_o *v56; // x8
  TitleInfoEventTower_TowerEffectData_o *TowerEffectData; // x0
  const MethodInfo *v58; // x3
  char v59; // w29
  int32_t v60; // w23
  bool v61; // w19
  int32_t openEffectId; // w9
  __int64 v63; // x8
  int32_t v64; // w2
  __int64 v65; // x23
  const MethodInfo *v66; // x3
  struct EventDetailEntity_o *v67; // x8
  const MethodInfo *v68; // x3
  __int64 v69; // x22
  float v70; // s0
  System_Collections_IEnumerator_o *v71; // x0
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x2
  Il2CppObject *Master_object; // x21
  struct EventDetailEntity_o *v82; // x8
  struct EventRewardSaveData_StaticFields *static_fields; // x9
  int32_t EventTowerState_k__BackingField; // w21
  struct EventDetailEntity_o *v85; // x10
  int32_t v86; // w8
  int32_t v87; // w23
  int32_t v88; // w23
  int32_t v89; // w2
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v93; // x2
  __int64 v94; // x2
  UnityEngine_Object_o *stamp; // x22
  bool v96; // w22
  UnityEngine_Object_o *v97; // x22
  struct EventDetailEntity_o *v98; // x8
  struct EventDetailEntity_o *v99; // x8
  char v100; // w8
  _QWORD *v101; // [xsp+8h] [xbp-98h]
  bool v102; // [xsp+10h] [xbp-90h]
  int v103; // [xsp+14h] [xbp-8Ch]
  Il2CppObject *v104; // [xsp+18h] [xbp-88h] BYREF
  EventTowerEntity_o *entity; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5936FAD & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventTowerMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__);
    sub_21FFC50(&TitleInfoEventTower___c__DisplayClass22_0_TypeInfo);
    byte_5936FAD = 1;
  }
  entity = 0;
  v104 = 0;
  v9 = sub_21FFEBC(TitleInfoEventTower___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_181;
  *(_QWORD *)(v9 + 16) = effectAsset;
  v18 = (_QWORD *)(v9 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)effectAsset, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)this, v19, v20, v21, v22, v23, v24);
  eventDetailEntity = this->fields.eventDetailEntity;
  if ( !eventDetailEntity )
  {
    if ( callback )
      ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        callback->fields.method);
    return;
  }
  EventRewardSaveData__LoadEventTowerState(eventDetailEntity->fields.eventId, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_181;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
  v26 = this->fields.eventDetailEntity;
  if ( !v26 )
    goto LABEL_181;
  eventId = v26->fields.eventId;
  v28 = (QuestGroupMaster_o *)Instance;
  if ( !byte_593282A )
  {
    Instance = sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593282A = 1;
  }
  if ( !v28 )
    goto LABEL_181;
  Instance = QuestGroupMaster__GetEventTowerQuestId(
               v28,
               eventId,
               EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField + 1,
               1,
               0);
  v30 = this->fields.eventDetailEntity;
  if ( !v30 )
    goto LABEL_181;
  v31 = v30->fields.eventId;
  v32 = Instance;
  if ( !byte_593282A )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593282A = 1;
  }
  TowerShiftData = (TitleInfoEventTower_o *)TitleInfoEventTower__GetTowerShiftData(
                                              this,
                                              v31,
                                              EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
                                              v29);
  v35 = (TitleInfoEventTower_TowerShiftData_o *)TowerShiftData;
  if ( !byte_593282A )
  {
    TowerShiftData = (TitleInfoEventTower_o *)sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593282A = 1;
  }
  v102 = isFadeIn;
  if ( TitleInfoEventTower__IsForceShiftTower(
         TowerShiftData,
         v35,
         EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
         v34) )
  {
    if ( *v18 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
      if ( !Instance )
        goto LABEL_181;
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
      if ( !v35 )
        goto LABEL_181;
      ForceShiftTowerId = v35->fields.ForceShiftTowerId;
      if ( !byte_5932829 )
      {
        Instance = sub_21FFC50(&EventRewardSaveData_TypeInfo);
        byte_5932829 = 1;
      }
      v37 = EventRewardSaveData_TypeInfo;
      goto LABEL_22;
    }
  }
  else
  {
    if ( v32 < 1 )
      goto LABEL_40;
    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( !Instance )
      goto LABEL_181;
    Instance = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v32, -1, 0, 0);
    if ( (Instance & 1) != 0 )
    {
      if ( !byte_593282A )
      {
        Instance = sub_21FFC50(&EventRewardSaveData_TypeInfo);
        byte_593282A = 1;
      }
      if ( !EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField )
      {
        do
        {
          if ( !byte_593282A )
          {
            Instance = sub_21FFC50(&EventRewardSaveData_TypeInfo);
            byte_593282A = 1;
          }
          static_fields = EventRewardSaveData_TypeInfo->static_fields;
          EventTowerState_k__BackingField = static_fields->_EventTowerState_k__BackingField;
          if ( !byte_5932829 )
          {
            Instance = sub_21FFC50(&EventRewardSaveData_TypeInfo);
            byte_5932829 = 1;
            static_fields = EventRewardSaveData_TypeInfo->static_fields;
          }
          v85 = this->fields.eventDetailEntity;
          v86 = EventTowerState_k__BackingField + 1;
          static_fields->_EventTowerState_k__BackingField = EventTowerState_k__BackingField + 1;
          if ( !v85 )
            goto LABEL_181;
          v87 = v85->fields.eventId;
          if ( !byte_593282A )
          {
            sub_21FFC50(&EventRewardSaveData_TypeInfo);
            byte_593282A = 1;
            v86 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
          }
          Instance = QuestGroupMaster__GetEventTowerQuestId(v28, v87, v86 + 1, 1, 0);
          if ( (int)Instance < 1 )
            break;
          v88 = Instance;
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( !Instance )
            goto LABEL_181;
          Instance = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v88, -1, 0, 0);
        }
        while ( (Instance & 1) != 0 );
        v39 = this->fields.eventDetailEntity;
        if ( !v39 )
          goto LABEL_181;
        v103 = 0;
        goto LABEL_25;
      }
      if ( *v18 )
      {
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !Instance )
          goto LABEL_181;
        MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
        if ( !byte_593282A )
        {
          Instance = sub_21FFC50(&EventRewardSaveData_TypeInfo);
          byte_593282A = 1;
        }
        v38 = EventRewardSaveData_TypeInfo->static_fields;
        ForceShiftTowerId = v38->_EventTowerState_k__BackingField + 1;
        if ( byte_5932829 )
          goto LABEL_23;
        Instance = sub_21FFC50(&EventRewardSaveData_TypeInfo);
        v37 = EventRewardSaveData_TypeInfo;
        byte_5932829 = 1;
LABEL_22:
        v38 = v37->static_fields;
LABEL_23:
        v39 = this->fields.eventDetailEntity;
        v38->_EventTowerState_k__BackingField = ForceShiftTowerId;
        if ( !v39 )
          goto LABEL_181;
        v103 = 1;
LABEL_25:
        EventRewardSaveData__SaveEventTowerState(v39->fields.eventId, 0);
        goto LABEL_44;
      }
    }
    else
    {
LABEL_40:
      if ( !byte_593282A )
      {
        sub_21FFC50(&EventRewardSaveData_TypeInfo);
        byte_593282A = 1;
      }
      if ( !EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField )
      {
        Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
          Instance = (__int64)this->fields.floorSprite;
          if ( Instance )
          {
            Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
            if ( Instance )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
              if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v78, v79);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarMaster___);
              if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v80);
              if ( !byte_5932644 )
              {
                sub_21FFC50(&TerminalPramsManager_TypeInfo);
                byte_5932644 = 1;
              }
              Instance = (__int64)TerminalPramsManager_TypeInfo;
              if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11, v80);
                Instance = (__int64)TerminalPramsManager_TypeInfo;
              }
              if ( Master_object )
              {
                Instance = DataMasterBase_object__object__int___TryGetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                             &v104,
                             *(_DWORD *)(*(_QWORD *)(Instance + 184) + 4LL),
                             (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
                if ( (Instance & 1) != 0 )
                {
                  v82 = this->fields.eventDetailEntity;
                  if ( !v82 || !v104 )
                    goto LABEL_181;
                  if ( v82->fields.eventId == LODWORD(v104[6].klass) )
                  {
                    Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
                    if ( !Instance )
                      goto LABEL_181;
                    MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0);
                  }
                }
                if ( !callback )
                  return;
                goto LABEL_179;
              }
            }
          }
        }
LABEL_181:
        sub_21FFECC(Instance, v11);
      }
    }
  }
  v103 = 0;
LABEL_44:
  if ( !byte_593282A )
  {
    sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593282A = 1;
  }
  v40 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_181;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventTowerMaster___);
  Instance = sub_21FFD10(int___TypeInfo, 2);
  v42 = this->fields.eventDetailEntity;
  if ( !v42 )
    goto LABEL_181;
  v43 = (_DWORD *)Instance;
  if ( !Instance )
    goto LABEL_181;
  v44 = *(_DWORD *)(Instance + 24);
  if ( !v44 )
    goto LABEL_182;
  v45 = v42->fields.eventId;
  *(_DWORD *)(Instance + 32) = v45;
  if ( v44 == 1 )
    goto LABEL_182;
  *(_DWORD *)(Instance + 36) = v40;
  if ( !MasterData_object )
    goto LABEL_181;
  EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v45, v40, 0);
  TitleInfoEventTower__SetTowerPosition(this, v40, v46);
  if ( entity )
    this->fields.TowerFloorMax = entity->fields.topFloor;
  v48 = this->fields.eventDetailEntity;
  if ( !v48 )
    goto LABEL_181;
  v101 = (_QWORD *)(v9 + 16);
  IsDispEnabled = TitleInfoEventTower__IsDispEnabled((TitleInfoEventTower_o *)Instance, v48->fields.eventId, v40, v47);
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_181;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, IsDispEnabled, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_181;
  v51 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
  for ( i = v40 - 1; ; ++i )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v50);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    Instance = (__int64)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v50);
      Instance = (__int64)NetworkManager_TypeInfo;
    }
    v53 = this->fields.eventDetailEntity;
    if ( !v53 || !v51 )
      goto LABEL_181;
    Point = UserEventPointMaster__GetPoint(
              (UserEventPointMaster_o *)v51,
              *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
              v53->fields.eventId,
              i + 1,
              0);
    if ( this->fields.TowerFloorMax > Point )
      break;
  }
  Instance = (__int64)this->fields.floorSprite;
  if ( !Instance )
    goto LABEL_181;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_181;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  if ( !v102 )
    goto LABEL_74;
  v56 = this->fields.eventDetailEntity;
  if ( !v56 )
    goto LABEL_181;
  TowerEffectData = TitleInfoEventTower__GetTowerEffectData(this, v56->fields.eventId, this->fields.openEffectId, v55);
  if ( TowerEffectData )
    TitleInfoEventTower__PlayFade(
      this,
      0.0,
      1.0,
      TowerEffectData->fields.FadeInTime,
      TowerEffectData->fields.FadeInEasingType,
      0,
      v58);
  else
LABEL_74:
    TitleInfoEventTower__SetSpriteAlpha(this, 1.0, v11);
  v59 = 0;
  if ( i + 1 < 2 || Point )
  {
    v61 = 0;
    ++i;
    goto LABEL_146;
  }
  if ( !entity )
  {
    if ( (v43[6] & 0xFFFFFFFE) != 0 )
    {
      v43[9] = i;
      Point = this->fields.TowerFloorMax;
      EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v43[8], i, 0);
LABEL_143:
      v59 = 0;
      goto LABEL_144;
    }
LABEL_182:
    sub_21FFED4(Instance);
  }
  if ( !byte_593282A )
  {
    Instance = sub_21FFC50(&EventRewardSaveData_TypeInfo);
    byte_593282A = 1;
  }
  v60 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
  if ( v60 != i )
  {
    if ( !v103 )
    {
      v59 = 0;
      Point = 0;
      ++i;
      goto LABEL_144;
    }
    if ( v43[6] >= 2u )
    {
      Point = this->fields.TowerFloorMax;
      Instance = EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v43[8], v43[9], 0);
      if ( !entity )
        goto LABEL_181;
      openEffectId = entity->fields.openEffectId;
      v63 = *((_QWORD *)v43 + 3) & 0xFFFFFFFELL;
      this->fields.openEffectId = openEffectId;
      if ( openEffectId )
      {
        if ( v63 )
        {
          v64 = v43[8];
          v43[9] = i;
          EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v64, i, 0);
          v65 = sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(
            (System_Action_o *)v65,
            (Il2CppObject *)v9,
            Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__,
            0);
          v67 = this->fields.eventDetailEntity;
          if ( !v67 )
            goto LABEL_181;
          Instance = (__int64)TitleInfoEventTower__GetTowerEffectData(
                                this,
                                v67->fields.eventId,
                                this->fields.openEffectId,
                                v66);
          if ( Instance )
          {
            v69 = Instance;
            TitleInfoEventTower__PlayFade(this, 1.0, 0.0, *(float *)(Instance + 20), *(_DWORD *)(Instance + 24), 0, v68);
            v70 = *(float *)(v69 + 28);
            if ( v70 <= 0.0 )
            {
              if ( !v65 )
                goto LABEL_181;
              (*(void (__fastcall **)(_QWORD, _QWORD))(v65 + 24))(*(_QWORD *)(v65 + 64), *(_QWORD *)(v65 + 40));
            }
            else
            {
              v71 = BasicHelper__DelayCall(v70, (System_Action_o *)v65, 1, 0);
              UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v71, 0);
            }
          }
          else
          {
            if ( !v65 )
              goto LABEL_181;
            (*(void (__fastcall **)(_QWORD, _QWORD))(v65 + 24))(*(_QWORD *)(v65 + 64), *(_QWORD *)(v65 + 40));
            Instance = (__int64)this->fields.floorSprite;
            if ( !Instance )
              goto LABEL_181;
            Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
            if ( !Instance )
              goto LABEL_181;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
          }
          this->fields.endCallback = callback;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.endCallback,
            (int32_t)callback,
            v72,
            v73,
            v74,
            v75,
            v76,
            v77);
          goto LABEL_143;
        }
      }
      else if ( v63 )
      {
        v89 = v43[8];
        v43[9] = i;
        EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v89, i, 0);
        Instance = (__int64)entity;
        if ( !entity )
          goto LABEL_181;
        if ( EventTowerEntity__HasFlag(entity, 2, 0) )
        {
          Instance = (__int64)this->fields.spriteRoot;
          if ( !Instance )
            goto LABEL_181;
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
          x = localPosition.fields.x;
          y = localPosition.fields.y;
          z = localPosition.fields.z;
          TitleInfoEventTower__SetTowerPosition(this, i, v93);
          Instance = (__int64)this->fields.spriteRoot;
          if ( !Instance )
            goto LABEL_181;
          Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                                (UnityEngine_Component_o *)Instance,
                                (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___);
          if ( !Instance )
            goto LABEL_181;
          v107.fields.x = x;
          v107.fields.y = y;
          v107.fields.z = z;
          TitleInfoEventTowerSlideAnimation__StartSlideAnim(
            (TitleInfoEventTowerSlideAnimation_o *)Instance,
            callback,
            v107,
            0);
        }
        v59 = 1;
        goto LABEL_144;
      }
    }
    goto LABEL_182;
  }
  if ( (v43[6] & 0xFFFFFFFE) == 0 )
    goto LABEL_182;
  v43[9] = v60;
  Point = this->fields.TowerFloorMax;
  EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v43[8], v60, 0);
  v59 = 0;
  i = v60;
LABEL_144:
  Instance = (__int64)entity;
  if ( !entity )
    goto LABEL_181;
  v61 = !EventTowerEntity__HasFlag(entity, 1, 0);
LABEL_146:
  Instance = (__int64)entity;
  if ( !entity )
    goto LABEL_181;
  if ( !EventTowerEntity__HasFlag(entity, 2, 0) )
    goto LABEL_154;
  stamp = (UnityEngine_Object_o *)this->fields.stamp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v94);
  if ( UnityEngine_Object__op_Inequality(stamp, 0, 0) )
  {
    Instance = (__int64)this->fields.stamp;
    if ( !Instance )
      goto LABEL_181;
    Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
    if ( !Instance )
      goto LABEL_181;
    TitleInfoEventTowerStamp__StampProgress(
      (TitleInfoEventTowerStamp_o *)Instance,
      Point,
      i,
      this->fields.spriteRoot,
      0);
    v96 = 1;
  }
  else
  {
LABEL_154:
    v97 = (UnityEngine_Object_o *)this->fields.stamp;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v94);
    if ( UnityEngine_Object__op_Inequality(v97, 0, 0) )
    {
      Instance = (__int64)this->fields.stamp;
      if ( !Instance )
        goto LABEL_181;
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)Instance,
                            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
      if ( !Instance )
        goto LABEL_181;
      TitleInfoEventTowerStamp__ResetStamp((TitleInfoEventTowerStamp_o *)Instance, 0);
    }
    v96 = 0;
  }
  Instance = (__int64)this->fields.floorSprite;
  if ( !Instance )
    goto LABEL_181;
  Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___);
  v98 = this->fields.eventDetailEntity;
  if ( !v98 )
    goto LABEL_181;
  if ( !entity )
    goto LABEL_181;
  if ( !Instance )
    goto LABEL_181;
  TitleInfoEventTowerFloorLabel__SetFloorLabel(
    (TitleInfoEventTowerFloorLabel_o *)Instance,
    v98->fields.eventId,
    i,
    this->fields.TowerFloorMax,
    Point,
    entity->fields.floorLabel,
    v61,
    v96,
    0);
  Instance = (__int64)this->fields.nameSprite;
  if ( !Instance )
    goto LABEL_181;
  Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___);
  v99 = this->fields.eventDetailEntity;
  if ( !v99 )
    goto LABEL_181;
  if ( !Instance )
    goto LABEL_181;
  TitleInfoEventTowerNameLabel__SetTowerNameLabel((TitleInfoEventTowerNameLabel_o *)Instance, v99->fields.eventId, i, 0);
  Instance = (__int64)this->fields.baseSprite;
  if ( !Instance )
    goto LABEL_181;
  Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)Instance,
                        (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___);
  if ( !Instance )
    goto LABEL_181;
  TitleInfoEventTowerBase__SetBaseSprite((TitleInfoEventTowerBase_o *)Instance, i, v96, 0);
  if ( (v103 & 1) != 0 || !*v101 )
    goto LABEL_174;
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_181;
  MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0);
LABEL_174:
  if ( callback )
    v100 = v59;
  else
    v100 = 1;
  if ( (v100 & 1) == 0 && !this->fields.endCallback )
LABEL_179:
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}


void TitleInfoEventTower__PlayFade(
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  const MethodInfo *v28; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  EasingObject_o *v37; // x21
  System_Action_o *v38; // x22
  System_Action_o *v39; // x23

  if ( (byte_5936FB1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_21FFC50(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__);
    sub_21FFC50(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__);
    sub_21FFC50(&TitleInfoEventTower___c__DisplayClass26_0_TypeInfo);
    byte_5936FB1 = 1;
  }
  v13 = sub_21FFEBC(TitleInfoEventTower___c__DisplayClass26_0_TypeInfo);
  TitleInfoEventTower___c__DisplayClass26_0___ctor((TitleInfoEventTower___c__DisplayClass26_0_o *)v13, 0);
  if ( !v13 )
    goto LABEL_6;
  *(float *)(v13 + 24) = from;
  *(float *)(v13 + 28) = to;
  *(_QWORD *)(v13 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 32), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 40) = endAction;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 40), (int32_t)endAction, v22, v23, v24, v25, v26, v27);
  TitleInfoEventTower__SetSpriteAlpha(this, *(float *)(v13 + 24), v28);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v13 + 16) = Component_object;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)Component_object, v31, v32, v33, v34, v35, v36);
  v37 = *(EasingObject_o **)(v13 + 16);
  v38 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)v13, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__, 0);
  v39 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v39, (Il2CppObject *)v13, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__, 0);
  if ( !v37 )
LABEL_6:
    sub_21FFECC(v14, v15);
  EasingObject__Play(v37, time, v38, v39, 0.0, easingType, 0);
}


void TitleInfoEventTower__SetSpriteAlpha(TitleInfoEventTower_o *this, float alpha, const MethodInfo *method)
{
  struct UISprite_o *baseSprite; // x0

  baseSprite = this->fields.baseSprite;
  if ( !baseSprite
    || (((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))baseSprite->klass->vtable._8_set_alpha.methodPtr)(
          baseSprite,
          baseSprite->klass->vtable._8_set_alpha.method),
        (baseSprite = this->fields.floorSprite) == 0)
    || (((void (__fastcall *)(struct UISprite_o *, const MethodInfo *, float))baseSprite->klass->vtable._8_set_alpha.methodPtr)(
          baseSprite,
          baseSprite->klass->vtable._8_set_alpha.method,
          alpha),
        (baseSprite = this->fields.nameSprite) == 0) )
  {
    sub_21FFECC(baseSprite, method);
  }
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *, float))baseSprite->klass->vtable._8_set_alpha.methodPtr)(
    baseSprite,
    baseSprite->klass->vtable._8_set_alpha.method,
    alpha);
}


void TitleInfoEventTower__SetTowerPosition(TitleInfoEventTower_o *this, int32_t towerId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct EventDetailEntity_o *eventDetailEntity; // x8
  EventUiEntity_o *Entity; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  EventUiEntity_o *v11; // x20
  UnityEngine_Object_o *spriteRoot; // x21
  __int64 v13; // x2
  int x; // s8
  int y; // s9
  UnityEngine_Transform_o *v16; // x19
  struct EventUiEntity_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5936FAE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventUiMaster___);
    sub_21FFC50(&EventUiEntity_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5936FAE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventUiMaster___);
  if ( Instance )
  {
    eventDetailEntity = this->fields.eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_15;
    Entity = EventUiMaster__getEntity((EventUiMaster_o *)Instance, eventDetailEntity->fields.eventId, towerId, 0);
    if ( Entity )
    {
      v11 = Entity;
      spriteRoot = (UnityEngine_Object_o *)this->fields.spriteRoot;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      if ( UnityEngine_Object__op_Inequality(spriteRoot, 0, 0) )
      {
        x = v11->fields.x;
        y = v11->fields.y;
        v16 = this->fields.spriteRoot;
        Instance = (DataManager_o *)EventUiEntity_TypeInfo;
        if ( !*(&EventUiEntity_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo, v6, v13);
        if ( v16 )
        {
          static_fields = EventUiEntity_TypeInfo->static_fields;
          v18.fields.x = static_fields->EVNET_UI_POSITION_MAGNIFICATION * (float)x;
          v18.fields.z = static_fields->EVNET_UI_POSITION_MAGNIFICATION * 0.0;
          v18.fields.y = static_fields->EVNET_UI_POSITION_MAGNIFICATION * (float)-(float)y;
          UnityEngine_Transform__set_localPosition(v16, v18, 0);
          return;
        }
LABEL_15:
        sub_21FFECC(Instance, v6);
      }
    }
  }
}


void TitleInfoEventTower__Update(TitleInfoEventTower_o *this, const MethodInfo *method)
{
  System_String_o **p_animationName; // x21
  __int64 v4; // x1
  __int64 v5; // x2
  MissionNaviTransitionBoardItem_o *p_animationData; // x20
  UnityEngine_Object_o *animationData; // x22
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Animation_o *klass; // x0
  UnityEngine_Object_o *simpleAnimationData; // x22
  TitleInfoEventTower_c *v12; // x0
  System_String_o *EFFECT_ANIMATION_START_FORMAT; // x22
  Il2CppObject *v14; // x0
  System_String_o *v15; // x23
  struct TitleInfoEventTower_StaticFields *static_fields; // x8
  System_String_o *EFFECT_ANIMATION_END_FORMAT; // x22
  Il2CppObject *v18; // x0
  struct System_String_o *v19; // x22
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  __int64 v27; // x2
  UnityEngine_Object_o *v28; // x22
  __int64 v29; // x2
  const MethodInfo *v30; // x4
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  __int64 v37; // x1
  __int64 v38; // x2
  UnityEngine_Object_c *v39; // x0
  UnityEngine_Object_o *v40; // x21
  struct SimpleAnimation_o **p_simpleAnimationData; // x22
  __int64 v42; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  UnityEngine_Object_c *v46; // x8
  UnityEngine_Object_o *v47; // x21
  UnityEngine_Object_o *v48; // x22
  UnityEngine_Object_o *v49; // x21
  UnityEngine_GameObject_o *v50; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  MissionNaviTransitionBoardItem_o *p_endCallback; // x19
  struct System_Action_o *v64; // x20
  struct System_Action_o *endCallback; // t1
  int32_t v66; // [xsp+8h] [xbp-48h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5936FB0 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_21FFC50(&TitleInfoEventTower_TypeInfo);
    byte_5936FB0 = 1;
  }
  p_animationName = &this->fields.animationName;
  if ( !System_String__IsNullOrEmpty(this->fields.animationName, 0) )
  {
    p_animationData = (MissionNaviTransitionBoardItem_o *)&this->fields.animationData;
    animationData = (UnityEngine_Object_o *)this->fields.animationData;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
    if ( UnityEngine_Object__op_Inequality(animationData, 0, 0) )
    {
      klass = (UnityEngine_Animation_o *)p_animationData->klass;
      if ( !p_animationData->klass )
        goto LABEL_46;
      if ( !UnityEngine_Animation__IsPlaying(klass, *p_animationName, 0) )
        goto LABEL_14;
    }
    simpleAnimationData = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    if ( UnityEngine_Object__op_Inequality(simpleAnimationData, 0, 0) )
    {
      klass = (UnityEngine_Animation_o *)this->fields.simpleAnimationData;
      if ( !klass )
        goto LABEL_46;
      if ( !SimpleAnimation__IsPlaying((SimpleAnimation_o *)klass, *p_animationName, 0) )
      {
LABEL_14:
        v12 = TitleInfoEventTower_TypeInfo;
        if ( !*(&TitleInfoEventTower_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo, v8, v9);
          v12 = TitleInfoEventTower_TypeInfo;
        }
        EFFECT_ANIMATION_START_FORMAT = v12->static_fields->EFFECT_ANIMATION_START_FORMAT;
        openEffectId = this->fields.openEffectId;
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &openEffectId);
        v15 = System_String__Format(EFFECT_ANIMATION_START_FORMAT, v14, 0);
        static_fields = TitleInfoEventTower_TypeInfo->static_fields;
        v66 = this->fields.openEffectId;
        EFFECT_ANIMATION_END_FORMAT = static_fields->EFFECT_ANIMATION_END_FORMAT;
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v66);
        v19 = System_String__Format(EFFECT_ANIMATION_END_FORMAT, v18, 0);
        if ( System_String__op_Equality(this->fields.animationName, v15, 0) )
        {
          this->fields.animationName = v19;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.animationName,
            (int32_t)v19,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          v28 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v27);
          if ( UnityEngine_Object__op_Inequality(v28, 0, 0) )
          {
            klass = (UnityEngine_Animation_o *)this->fields.simpleAnimationData;
            if ( klass )
            {
              SimpleAnimation__Play_78338864((SimpleAnimation_o *)klass, *p_animationName, 0);
LABEL_33:
              TitleInfoEventTower__Open(this, 0, 0, 1, v30);
              return;
            }
          }
          else
          {
            v48 = (UnityEngine_Object_o *)p_animationData->klass;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v29);
            if ( !UnityEngine_Object__op_Inequality(v48, 0, 0) )
              goto LABEL_33;
            klass = (UnityEngine_Animation_o *)p_animationData->klass;
            if ( p_animationData->klass )
            {
              UnityEngine_Animation__Play_82865240(klass, *p_animationName, 0);
              goto LABEL_33;
            }
          }
LABEL_46:
          sub_21FFECC(klass, v8);
        }
        if ( System_String__op_Equality(*p_animationName, v19, 0) )
        {
          this->fields.animationName = 0;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.animationName, 0, v31, v32, v33, v34, v35, v36);
          v39 = UnityEngine_Object_TypeInfo;
          p_simpleAnimationData = &this->fields.simpleAnimationData;
          v40 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          this->fields.openEffectId = 0;
          if ( !*(&v39->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v39, v37, v38);
          if ( UnityEngine_Object__op_Inequality(v40, 0, 0) )
          {
            klass = (UnityEngine_Animation_o *)*p_simpleAnimationData;
            if ( !*p_simpleAnimationData )
              goto LABEL_46;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0);
            v46 = UnityEngine_Object_TypeInfo;
            v47 = (UnityEngine_Object_o *)gameObject;
            p_animationData = (MissionNaviTransitionBoardItem_o *)&this->fields.simpleAnimationData;
          }
          else
          {
            v49 = (UnityEngine_Object_o *)p_animationData->klass;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v42);
            if ( !UnityEngine_Object__op_Inequality(v49, 0, 0) )
              goto LABEL_42;
            klass = (UnityEngine_Animation_o *)p_animationData->klass;
            if ( !p_animationData->klass )
              goto LABEL_46;
            v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0);
            v46 = UnityEngine_Object_TypeInfo;
            v47 = (UnityEngine_Object_o *)v50;
          }
          if ( !*(&v46->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v46, v44, v45);
          UnityEngine_Object__DestroyImmediate_83246828(v47, 0);
          p_animationData->klass = 0;
          sub_21FFBF4(p_animationData, 0, v51, v52, v53, v54, v55, v56);
LABEL_42:
          klass = (UnityEngine_Animation_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( !klass )
            goto LABEL_46;
          MissionNotifyManager__CancelPause((MissionNotifyManager_o *)klass, 0);
          endCallback = this->fields.endCallback;
          p_endCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.endCallback;
          v64 = endCallback;
          if ( endCallback )
          {
            p_endCallback->klass = 0;
            sub_21FFBF4(p_endCallback, 0, v57, v58, v59, v60, v61, v62);
            ((void (__fastcall *)(intptr_t, intptr_t))v64->fields.invoke_impl)(
              v64->fields.method_code,
              v64->fields.method);
          }
        }
      }
    }
  }
}


void TitleInfoEventTower__set_EventDetailEntity(
        TitleInfoEventTower_o *this,
        EventDetailEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.eventDetailEntity = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventDetailEntity,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TitleInfoEventTower_TowerEffectData___ctor(TitleInfoEventTower_TowerEffectData_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.EffectId = 0x3F00000000000001LL;
  *(_QWORD *)&this->fields.EffectStartDelay = 0x3F0000003F000000LL;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventTower_TowerEventInfo___ctor(TitleInfoEventTower_TowerEventInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventTower_TowerShiftData___ctor(TitleInfoEventTower_TowerShiftData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventTower___c__DisplayClass22_0___ctor(
        TitleInfoEventTower___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventTower___c__DisplayClass22_0___Open_b__0(
        TitleInfoEventTower___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *Component_object; // x0
  AssetData_o *effectAsset; // x20
  struct TitleInfoEventTower_o *_4__this; // x8
  System_String_o *OBJECT_NAME_EFFECT_BASE; // x21
  System_String_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *Object_47442936; // x20
  Il2CppObject *v12; // x0
  struct TitleInfoEventTower_o *v13; // x8
  UnityEngine_GameObject_o *v14; // x20
  struct TitleInfoEventTower_o *v15; // x21
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct TitleInfoEventTower_o *v22; // x21
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct TitleInfoEventTower_o *v29; // x8
  __int64 v30; // x2
  struct TitleInfoEventTower_o *v31; // x20
  struct TitleInfoEventTower_o *v32; // x8
  System_String_o *EFFECT_ANIMATION_START_FORMAT; // x21
  Il2CppObject *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct TitleInfoEventTower_o *v41; // x8
  UnityEngine_Object_o *animationData; // x20
  __int64 v43; // x2
  struct TitleInfoEventTower_o *v44; // x20
  struct TitleInfoEventTower_o *v45; // x8
  System_String_o *v46; // x21
  Il2CppObject *v47; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  struct TitleInfoEventTower_o *v54; // x8
  int32_t v55; // [xsp+8h] [xbp-38h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5936FB9 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_21FFC50(&UnityEngine_GameObject_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TitleInfoEventTower_TypeInfo);
    byte_5936FB9 = 1;
  }
  Component_object = (System_String_o *)TitleInfoEventTower_TypeInfo;
  effectAsset = this->fields.effectAsset;
  if ( !*(&TitleInfoEventTower_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo, method, v2);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_39;
  OBJECT_NAME_EFFECT_BASE = TitleInfoEventTower_TypeInfo->static_fields->OBJECT_NAME_EFFECT_BASE;
  v8 = System_Int32__ToString((int)_4__this + 120, 0);
  Component_object = System_String__Concat_75438412(OBJECT_NAME_EFFECT_BASE, v8, 0);
  if ( !effectAsset )
    goto LABEL_39;
  Object_47442936 = AssetData__GetObject_47442936(effectAsset, Component_object, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  if ( Object_47442936 )
    v12 = (UnityEngine_GameObject_c *)Object_47442936->klass == UnityEngine_GameObject_TypeInfo
        ? (Il2CppObject *)Object_47442936
        : 0LL;
  else
    v12 = 0;
  Component_object = (System_String_o *)UnityEngine_Object__Instantiate_object_(
                                          v12,
                                          (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_39;
  v14 = (UnityEngine_GameObject_o *)Component_object;
  GameObjectExtensions__SafeSetParent_42881912((UnityEngine_GameObject_o *)Component_object, v13->fields.effectRoot, 0);
  if ( !v14 )
    goto LABEL_39;
  v15 = this->fields.__4__this;
  Component_object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                          v14,
                                          (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !v15 )
    goto LABEL_39;
  v15->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v15->fields.simpleAnimationData,
    (int32_t)Component_object,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = this->fields.__4__this;
  Component_object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                          v14,
                                          (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !v22 )
    goto LABEL_39;
  v22->fields.animationData = (struct UnityEngine_Animation_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v22->fields.animationData,
    (int32_t)Component_object,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = this->fields.__4__this;
  if ( !v29 )
    goto LABEL_39;
  Component_object = (System_String_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)v29->fields.simpleAnimationData,
                                          0,
                                          0);
  v31 = this->fields.__4__this;
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    Component_object = (System_String_o *)TitleInfoEventTower_TypeInfo;
    v32 = this->fields.__4__this;
    if ( !*(&TitleInfoEventTower_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo, method, v30);
      v32 = this->fields.__4__this;
    }
    if ( v32 )
    {
      EFFECT_ANIMATION_START_FORMAT = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT;
      openEffectId = v32->fields.openEffectId;
      v34 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &openEffectId);
      Component_object = System_String__Format(EFFECT_ANIMATION_START_FORMAT, v34, 0);
      if ( v31 )
      {
        v31->fields.animationName = Component_object;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v31->fields.animationName,
          (int32_t)Component_object,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
        v41 = this->fields.__4__this;
        if ( v41 )
        {
          Component_object = (System_String_o *)v41->fields.simpleAnimationData;
          if ( Component_object )
          {
            SimpleAnimation__Play_78338864((SimpleAnimation_o *)Component_object, v41->fields.animationName, 0);
            return;
          }
        }
      }
    }
LABEL_39:
    sub_21FFECC(Component_object, method);
  }
  if ( !v31 )
    goto LABEL_39;
  animationData = (UnityEngine_Object_o *)v31->fields.animationData;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v30);
  if ( UnityEngine_Object__op_Inequality(animationData, 0, 0) )
  {
    Component_object = (System_String_o *)TitleInfoEventTower_TypeInfo;
    v44 = this->fields.__4__this;
    v45 = v44;
    if ( !*(&TitleInfoEventTower_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo, method, v43);
      v45 = this->fields.__4__this;
    }
    if ( !v45 )
      goto LABEL_39;
    v46 = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT;
    v55 = v45->fields.openEffectId;
    v47 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v55);
    Component_object = System_String__Format(v46, v47, 0);
    if ( !v44 )
      goto LABEL_39;
    v44->fields.animationName = Component_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v44->fields.animationName,
      (int32_t)Component_object,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    v54 = this->fields.__4__this;
    if ( !v54 )
      goto LABEL_39;
    Component_object = (System_String_o *)v54->fields.animationData;
    if ( !Component_object )
      goto LABEL_39;
    UnityEngine_Animation__Play_82865240((UnityEngine_Animation_o *)Component_object, v54->fields.animationName, 0);
  }
}


void TitleInfoEventTower___c__DisplayClass26_0___ctor(
        TitleInfoEventTower___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventTower___c__DisplayClass26_0___PlayFade_b__0(
        TitleInfoEventTower___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  struct EasingObject_o *easingObj; // x9
  TitleInfoEventTower___c__DisplayClass26_0_o *v3; // x8
  float v4; // s0
  float mNow; // s1

  easingObj = this->fields.easingObj;
  if ( !easingObj || (v3 = this, (this = (TitleInfoEventTower___c__DisplayClass26_0_o *)this->fields.__4__this) == 0) )
    sub_21FFECC(this, method);
  v4 = 1.0;
  mNow = easingObj->fields.mNow;
  if ( mNow <= 1.0 )
    v4 = easingObj->fields.mNow;
  if ( mNow < 0.0 )
    v4 = 0.0;
  TitleInfoEventTower__SetSpriteAlpha(
    (TitleInfoEventTower_o *)this,
    v3->fields.from + (float)((float)(v3->fields.to - v3->fields.from) * v4),
    0);
}


void TitleInfoEventTower___c__DisplayClass26_0___PlayFade_b__1(
        TitleInfoEventTower___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  TitleInfoEventTower_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_21FFECC(0, method);
  TitleInfoEventTower__SetSpriteAlpha(_4__this, this->fields.to, 0);
  ActionExtensions__Call(this->fields.endAction, 0);
}


void TitleInfoEventTower___c__DisplayClass31_0___ctor(
        TitleInfoEventTower___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TitleInfoEventTower___c__DisplayClass31_0___GetTowerShiftData_b__0(
        TitleInfoEventTower___c__DisplayClass31_0_o *this,
        TitleInfoEventTower_TowerEventInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_21FFECC(this, 0);
  return info->fields.EventId == this->fields.eventId;
}


bool TitleInfoEventTower___c__DisplayClass31_0___GetTowerShiftData_b__1(
        TitleInfoEventTower___c__DisplayClass31_0_o *this,
        TitleInfoEventTower_TowerShiftData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_21FFECC(this, 0);
  return data->fields.TowerId == this->fields.towerId;
}


void TitleInfoEventTower___c__DisplayClass33_0___ctor(
        TitleInfoEventTower___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool TitleInfoEventTower___c__DisplayClass33_0___GetTowerEffectData_b__0(
        TitleInfoEventTower___c__DisplayClass33_0_o *this,
        TitleInfoEventTower_TowerEventInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_21FFECC(this, 0);
  return info->fields.EventId == this->fields.eventId;
}


bool TitleInfoEventTower___c__DisplayClass33_0___GetTowerEffectData_b__1(
        TitleInfoEventTower___c__DisplayClass33_0_o *this,
        TitleInfoEventTower_TowerEffectData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_21FFECC(this, 0);
  return data->fields.EffectId == this->fields.effectId;
}