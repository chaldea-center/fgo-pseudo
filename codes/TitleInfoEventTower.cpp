void TitleInfoEventTower___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct TitleInfoEventTower_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct TitleInfoEventTower_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C36354 & 1) == 0 )
  {
    sub_1C32C20(&TitleInfoEventTower_TypeInfo);
    sub_1C32C20(&StringLiteral_18866/*"ef_tower_change{0}_end"*/);
    sub_1C32C20(&StringLiteral_18865/*"ef_tower_change"*/);
    sub_1C32C20(&StringLiteral_18867/*"ef_tower_change{0}_start"*/);
    byte_4C36354 = 1;
  }
  TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT = (struct System_String_o *)StringLiteral_18867/*"ef_tower_change{0}_start"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)TitleInfoEventTower_TypeInfo->static_fields, StringLiteral_18867/*"ef_tower_change{0}_start"*/, v1, v2);
  v3 = StringLiteral_18866/*"ef_tower_change{0}_end"*/;
  static_fields = TitleInfoEventTower_TypeInfo->static_fields;
  static_fields->EFFECT_ANIMATION_END_FORMAT = (struct System_String_o *)StringLiteral_18866/*"ef_tower_change{0}_end"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->EFFECT_ANIMATION_END_FORMAT, v3, v5, v6);
  v7 = StringLiteral_18865/*"ef_tower_change"*/;
  v8 = TitleInfoEventTower_TypeInfo->static_fields;
  v8->OBJECT_NAME_EFFECT_BASE = (struct System_String_o *)StringLiteral_18865/*"ef_tower_change"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->OBJECT_NAME_EFFECT_BASE, v7, v9, v10);
}


void TitleInfoEventTower___ctor(TitleInfoEventTower_o *this, const MethodInfo *method)
{
  this->fields.TowerFloorMax = 100;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void TitleInfoEventTower__Close(TitleInfoEventTower_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  UnityEngine_Object_o *simpleAnimationData; // x20
  UnityEngine_Object_o *animationData; // x20

  if ( (byte_4C3634B & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3634B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_16:
    sub_1C32E7C(gameObject);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.animationName = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.animationName, 0, v4, v5);
  simpleAnimationData = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationData, 0, 0) )
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

  if ( (byte_4C3634F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3634F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return QuestGroupMaster__GetEventTowerQuestId((QuestGroupMaster_o *)Instance, eventId, nowTowerId + 1, 1, 0);
}


TitleInfoEventTower_TowerEffectData_o *TitleInfoEventTower__GetTowerEffectData(
        TitleInfoEventTower_o *this,
        int32_t eventId,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  System_Object_array *towerEventInfoList; // x19
  System_Func_object__bool__o *v10; // x20
  TitleInfoEventTower_TowerEffectData_o *result; // x0
  System_Object_array *v12; // x19
  System_Func_object__bool__o *v13; // x20

  if ( (byte_4C36353 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___);
    sub_1C32C20(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
    sub_1C32C20(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
    sub_1C32C20(&System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo);
    sub_1C32C20(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__);
    sub_1C32C20(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__);
    sub_1C32C20(&TitleInfoEventTower___c__DisplayClass33_0_TypeInfo);
    byte_4C36353 = 1;
  }
  v7 = sub_1C32E6C(TitleInfoEventTower___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C32E7C(v8);
  *(_DWORD *)(v7 + 16) = eventId;
  *(_DWORD *)(v7 + 20) = effectId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v10 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__,
    0);
  result = (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_object_(
                                                      towerEventInfoList,
                                                      (System_Func_T__bool__o *)v10,
                                                      (const MethodInfo_30C735C *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v12 = *(System_Object_array **)&result->fields.FadeInTime;
    v13 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v13,
      (Il2CppObject *)v7,
      Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__,
      0);
    return (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_object_(
                                                      v12,
                                                      (System_Func_T__bool__o *)v13,
                                                      (const MethodInfo_30C735C *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___);
  }
  return result;
}


TitleInfoEventTower_TowerShiftData_o *TitleInfoEventTower__GetTowerShiftData(
        TitleInfoEventTower_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  System_Object_array *towerEventInfoList; // x19
  System_Func_object__bool__o *v10; // x20
  TitleInfoEventTower_TowerShiftData_o *result; // x0
  System_Object_array *v12; // x19
  System_Func_object__bool__o *v13; // x20

  if ( (byte_4C36351 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
    sub_1C32C20(&Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___);
    sub_1C32C20(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
    sub_1C32C20(&System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo);
    sub_1C32C20(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__);
    sub_1C32C20(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__);
    sub_1C32C20(&TitleInfoEventTower___c__DisplayClass31_0_TypeInfo);
    byte_4C36351 = 1;
  }
  v7 = sub_1C32E6C(TitleInfoEventTower___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C32E7C(v8);
  *(_DWORD *)(v7 + 16) = eventId;
  *(_DWORD *)(v7 + 20) = towerId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v10 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__,
    0);
  result = (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_object_(
                                                     towerEventInfoList,
                                                     (System_Func_T__bool__o *)v10,
                                                     (const MethodInfo_30C735C *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v12 = *(System_Object_array **)&result->fields.CondType;
    v13 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v13,
      (Il2CppObject *)v7,
      Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__,
      0);
    return (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_object_(
                                                     v12,
                                                     (System_Func_T__bool__o *)v13,
                                                     (const MethodInfo_30C735C *)Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___);
  }
  return result;
}


bool TitleInfoEventTower__IsDispEnabled(
        TitleInfoEventTower_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  EventUiEntity_o *Entity; // x0
  EventUiEntity_o *v8; // x19

  if ( (byte_4C36350 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventUiMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventUiReleaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C36350 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventUiMaster___);
  if ( !Master_object )
    goto LABEL_12;
  Entity = EventUiMaster__getEntity((EventUiMaster_o *)Master_object, eventId, towerId, 0);
  if ( !Entity )
    return (char)Entity;
  v8 = Entity;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
  if ( !Master_object )
LABEL_12:
    sub_1C32E7C(Master_object);
  LOBYTE(Entity) = EventUiReleaseMaster__IsOpen((EventUiReleaseMaster_o *)Master_object, v8, 0);
  return (char)Entity;
}


bool TitleInfoEventTower__IsForceShiftTower(
        TitleInfoEventTower_o *this,
        TitleInfoEventTower_TowerShiftData_o *towerShiftData,
        int32_t nowTowerId,
        const MethodInfo *method)
{
  int32_t CondTargetId; // w20
  int32_t CondType; // w21
  int64_t CondValue; // x19

  if ( (byte_4C36352 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    byte_4C36352 = 1;
  }
  if ( !towerShiftData || towerShiftData->fields.TowerId != nowTowerId )
    return 0;
  CondType = towerShiftData->fields.CondType;
  CondTargetId = towerShiftData->fields.CondTargetId;
  CondValue = towerShiftData->fields.CondValue;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
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

  if ( (byte_4C3634E & 1) == 0 )
  {
    this = (TitleInfoEventTower_o *)sub_1C32C20(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4C3634E = 1;
  }
  QuestIdOnFirstFloorOfNextTower = TitleInfoEventTower__GetQuestIdOnFirstFloorOfNextTower(
                                     this,
                                     eventId,
                                     nowTowerId,
                                     method);
  if ( QuestIdOnFirstFloorOfNextTower < 1 )
    return 0;
  v7 = QuestIdOnFirstFloorOfNextTower;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  _QWORD *v13; // x28
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct EventDetailEntity_o *eventDetailEntity; // x8
  struct EventDetailEntity_o *v17; // x8
  int32_t eventId; // w19
  QuestGroupMaster_o *v19; // x25
  const MethodInfo *v20; // x3
  struct EventDetailEntity_o *v21; // x8
  int32_t v22; // w26
  int32_t v23; // w19
  TitleInfoEventTower_o *TowerShiftData; // x0
  const MethodInfo *v25; // x3
  TitleInfoEventTower_TowerShiftData_o *v26; // x26
  int ForceShiftTowerId; // w19
  EventRewardSaveData_c *v28; // x8
  struct EventRewardSaveData_StaticFields *v29; // x8
  struct EventDetailEntity_o *v30; // x8
  int32_t v31; // w25
  Il2CppObject *MasterData_object; // x27
  struct EventDetailEntity_o *v33; // x8
  _DWORD *v34; // x28
  int v35; // w9
  int32_t v36; // w2
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x3
  struct EventDetailEntity_o *v39; // x8
  bool IsDispEnabled; // w19
  Il2CppObject *v41; // x19
  int32_t j; // w25
  struct EventDetailEntity_o *v43; // x8
  int32_t Point; // w26
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x3
  struct EventDetailEntity_o *v47; // x8
  TitleInfoEventTower_TowerEffectData_o *TowerEffectData; // x0
  const MethodInfo *v49; // x3
  int v50; // w29
  int32_t v51; // w19
  struct System_Action_o *v52; // x21
  _QWORD *v53; // x24
  bool v54; // w23
  int32_t openEffectId; // w19
  int32_t v56; // w2
  __int64 v57; // x19
  const MethodInfo *v58; // x3
  struct EventDetailEntity_o *v59; // x8
  const MethodInfo *v60; // x3
  __int64 v61; // x22
  float v62; // s0
  System_Collections_IEnumerator_o *v63; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  Il2CppObject *Master_object; // x19
  struct EventDetailEntity_o *v67; // x8
  UnityEngine_Object_o *stamp; // x19
  bool v69; // w22
  UnityEngine_Object_o *v70; // x19
  struct EventDetailEntity_o *v71; // x9
  const MethodInfo *v72; // x3
  struct EventDetailEntity_o *v73; // x8
  const MethodInfo *v74; // x3
  char i; // w8
  struct EventRewardSaveData_StaticFields *static_fields; // x9
  int32_t EventTowerState_k__BackingField; // w19
  int32_t v78; // w8
  struct EventDetailEntity_o *v79; // x9
  int32_t v80; // w19
  int32_t v81; // w19
  struct EventDetailEntity_o *v82; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v86; // x2
  const MethodInfo *v87; // x2
  const MethodInfo *v88; // [xsp+0h] [xbp-B0h]
  struct System_Action_o *v89; // [xsp+10h] [xbp-A0h]
  bool v90; // [xsp+20h] [xbp-90h]
  int v91; // [xsp+24h] [xbp-8Ch]
  Il2CppObject *v92; // [xsp+28h] [xbp-88h] BYREF
  EventTowerEntity_o *entity; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C36349 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventTowerMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__);
    sub_1C32C20(&TitleInfoEventTower___c__DisplayClass22_0_TypeInfo);
    byte_4C36349 = 1;
  }
  entity = 0;
  v92 = 0;
  v9 = sub_1C32E6C(TitleInfoEventTower___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_177;
  *(_QWORD *)(v9 + 16) = effectAsset;
  v13 = (_QWORD *)(v9 + 16);
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 16), (int32_t)effectAsset, v11, v12);
  *(_QWORD *)(v9 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v14, v15);
  eventDetailEntity = this->fields.eventDetailEntity;
  if ( eventDetailEntity )
  {
    EventRewardSaveData__LoadEventTowerState(eventDetailEntity->fields.eventId, 0);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_177;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    v17 = this->fields.eventDetailEntity;
    if ( !v17 )
      goto LABEL_177;
    eventId = v17->fields.eventId;
    v19 = (QuestGroupMaster_o *)Instance;
    if ( !byte_4C31EC6 )
    {
      Instance = sub_1C32C20(&EventRewardSaveData_TypeInfo);
      byte_4C31EC6 = 1;
    }
    if ( !v19 )
      goto LABEL_177;
    v90 = isFadeIn;
    Instance = QuestGroupMaster__GetEventTowerQuestId(
                 v19,
                 eventId,
                 EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField + 1,
                 1,
                 0);
    v21 = this->fields.eventDetailEntity;
    if ( !v21 )
      goto LABEL_177;
    v22 = v21->fields.eventId;
    v23 = Instance;
    if ( !byte_4C31EC6 )
    {
      sub_1C32C20(&EventRewardSaveData_TypeInfo);
      byte_4C31EC6 = 1;
    }
    TowerShiftData = (TitleInfoEventTower_o *)TitleInfoEventTower__GetTowerShiftData(
                                                this,
                                                v22,
                                                EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
                                                v20);
    v26 = (TitleInfoEventTower_TowerShiftData_o *)TowerShiftData;
    if ( !byte_4C31EC6 )
    {
      TowerShiftData = (TitleInfoEventTower_o *)sub_1C32C20(&EventRewardSaveData_TypeInfo);
      byte_4C31EC6 = 1;
    }
    if ( TitleInfoEventTower__IsForceShiftTower(
           TowerShiftData,
           v26,
           EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
           v25) )
    {
      if ( *v13 )
      {
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !Instance )
          goto LABEL_177;
        MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
        if ( !v26 )
          goto LABEL_177;
        ForceShiftTowerId = v26->fields.ForceShiftTowerId;
        if ( !byte_4C31EC5 )
        {
          Instance = sub_1C32C20(&EventRewardSaveData_TypeInfo);
          byte_4C31EC5 = 1;
        }
        v28 = EventRewardSaveData_TypeInfo;
        goto LABEL_22;
      }
      goto LABEL_40;
    }
    if ( v23 >= 1 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Instance )
        goto LABEL_177;
      Instance = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v23, -1, 0, 0);
      if ( (Instance & 1) != 0 )
      {
        if ( !byte_4C31EC6 )
        {
          Instance = sub_1C32C20(&EventRewardSaveData_TypeInfo);
          byte_4C31EC6 = 1;
        }
        if ( !EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField )
        {
          for ( i = 1; ; i = byte_4C31EC6 )
          {
            if ( !i )
            {
              Instance = sub_1C32C20(&EventRewardSaveData_TypeInfo);
              byte_4C31EC6 = 1;
            }
            static_fields = EventRewardSaveData_TypeInfo->static_fields;
            EventTowerState_k__BackingField = static_fields->_EventTowerState_k__BackingField;
            if ( !byte_4C31EC5 )
            {
              Instance = sub_1C32C20(&EventRewardSaveData_TypeInfo);
              byte_4C31EC5 = 1;
              static_fields = EventRewardSaveData_TypeInfo->static_fields;
            }
            v78 = EventTowerState_k__BackingField + 1;
            static_fields->_EventTowerState_k__BackingField = EventTowerState_k__BackingField + 1;
            v79 = this->fields.eventDetailEntity;
            if ( !v79 )
              goto LABEL_177;
            v80 = v79->fields.eventId;
            if ( !byte_4C31EC6 )
            {
              sub_1C32C20(&EventRewardSaveData_TypeInfo);
              byte_4C31EC6 = 1;
              v78 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
            }
            Instance = QuestGroupMaster__GetEventTowerQuestId(v19, v80, v78 + 1, 1, 0);
            if ( (int)Instance < 1 )
              break;
            v81 = Instance;
            Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            if ( !Instance )
              goto LABEL_177;
            Instance = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v81, -1, 0, 0);
            if ( (Instance & 1) == 0 )
              break;
          }
          v82 = this->fields.eventDetailEntity;
          if ( !v82 )
            goto LABEL_177;
          EventRewardSaveData__SaveEventTowerState(v82->fields.eventId, 0);
          v91 = 0;
LABEL_41:
          if ( !byte_4C31EC6 )
          {
            sub_1C32C20(&EventRewardSaveData_TypeInfo);
            byte_4C31EC6 = 1;
          }
          v89 = callback;
          v31 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
          Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_177;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventTowerMaster___);
          Instance = sub_1C32CC8(int___TypeInfo, 2);
          v33 = this->fields.eventDetailEntity;
          if ( !v33 )
            goto LABEL_177;
          v34 = (_DWORD *)Instance;
          if ( !Instance )
            goto LABEL_177;
          v35 = *(_DWORD *)(Instance + 24);
          if ( v35 )
          {
            v36 = v33->fields.eventId;
            *(_DWORD *)(Instance + 32) = v36;
            if ( v35 != 1 )
            {
              *(_DWORD *)(Instance + 36) = v31;
              if ( !MasterData_object )
                goto LABEL_177;
              EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v36, v31, 0);
              TitleInfoEventTower__SetTowerPosition(this, v31, v37);
              if ( entity )
                this->fields.TowerFloorMax = entity->fields.topFloor;
              v39 = this->fields.eventDetailEntity;
              if ( !v39 )
                goto LABEL_177;
              IsDispEnabled = TitleInfoEventTower__IsDispEnabled(
                                (TitleInfoEventTower_o *)Instance,
                                v39->fields.eventId,
                                v31,
                                v38);
              Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              if ( !Instance )
                goto LABEL_177;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, IsDispEnabled, 0);
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_177;
              v41 = DataManager__GetMasterData_object_(
                      (DataManager_o *)Instance,
                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
              for ( j = v31 - 1; ; ++j )
              {
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                if ( !byte_4C31812 )
                {
                  sub_1C32C20(&NetworkManager_TypeInfo);
                  byte_4C31812 = 1;
                }
                Instance = (__int64)NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  Instance = (__int64)NetworkManager_TypeInfo;
                }
                v43 = this->fields.eventDetailEntity;
                if ( !v43 || !v41 )
                  goto LABEL_177;
                Point = UserEventPointMaster__GetPoint(
                          (UserEventPointMaster_o *)v41,
                          *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                          v43->fields.eventId,
                          j + 1,
                          0);
                if ( this->fields.TowerFloorMax > Point )
                  break;
              }
              Instance = (__int64)this->fields.floorSprite;
              if ( !Instance )
                goto LABEL_177;
              Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
              if ( !Instance )
                goto LABEL_177;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
              if ( !v90 )
                goto LABEL_71;
              v47 = this->fields.eventDetailEntity;
              if ( !v47 )
                goto LABEL_177;
              TowerEffectData = TitleInfoEventTower__GetTowerEffectData(
                                  this,
                                  v47->fields.eventId,
                                  this->fields.openEffectId,
                                  v46);
              if ( TowerEffectData )
                TitleInfoEventTower__PlayFade(
                  this,
                  0.0,
                  1.0,
                  TowerEffectData->fields.FadeInTime,
                  TowerEffectData->fields.FadeInEasingType,
                  0,
                  v49);
              else
LABEL_71:
                TitleInfoEventTower__SetSpriteAlpha(this, 1.0, v45);
              v50 = 0;
              if ( j + 1 < 2 || Point )
              {
                ++j;
                v52 = v89;
                v53 = (_QWORD *)(v9 + 16);
                v54 = 0;
LABEL_116:
                Instance = (__int64)entity;
                if ( !entity )
                  goto LABEL_177;
                if ( !EventTowerEntity__HasFlag(entity, 2, 0) )
                  goto LABEL_124;
                stamp = (UnityEngine_Object_o *)this->fields.stamp;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(stamp, 0, 0) )
                {
                  Instance = (__int64)this->fields.stamp;
                  if ( !Instance )
                    goto LABEL_177;
                  Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)Instance,
                                        (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
                  if ( !Instance )
                    goto LABEL_177;
                  TitleInfoEventTowerStamp__StampProgress(
                    (TitleInfoEventTowerStamp_o *)Instance,
                    Point,
                    j,
                    this->fields.spriteRoot,
                    0);
                  v69 = 1;
                }
                else
                {
LABEL_124:
                  v70 = (UnityEngine_Object_o *)this->fields.stamp;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( UnityEngine_Object__op_Inequality(v70, 0, 0) )
                  {
                    Instance = (__int64)this->fields.stamp;
                    if ( !Instance )
                      goto LABEL_177;
                    Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)Instance,
                                          (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
                    if ( !Instance )
                      goto LABEL_177;
                    TitleInfoEventTowerStamp__ResetStamp((TitleInfoEventTowerStamp_o *)Instance, 0);
                  }
                  v69 = 0;
                }
                Instance = (__int64)this->fields.floorSprite;
                if ( Instance )
                {
                  Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)Instance,
                                        (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___);
                  v71 = this->fields.eventDetailEntity;
                  if ( v71 )
                  {
                    if ( entity )
                    {
                      if ( Instance )
                      {
                        TitleInfoEventTowerFloorLabel__SetFloorLabel(
                          (TitleInfoEventTowerFloorLabel_o *)Instance,
                          v71->fields.eventId,
                          j,
                          this->fields.TowerFloorMax,
                          Point,
                          entity->fields.floorLabel,
                          v54,
                          v69,
                          v88);
                        Instance = (__int64)this->fields.nameSprite;
                        if ( Instance )
                        {
                          Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                                                (UnityEngine_Component_o *)Instance,
                                                (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___);
                          v73 = this->fields.eventDetailEntity;
                          if ( v73 )
                          {
                            if ( Instance )
                            {
                              TitleInfoEventTowerNameLabel__SetTowerNameLabel(
                                (TitleInfoEventTowerNameLabel_o *)Instance,
                                v73->fields.eventId,
                                j,
                                v72);
                              Instance = (__int64)this->fields.baseSprite;
                              if ( Instance )
                              {
                                Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)Instance,
                                                      (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___);
                                if ( Instance )
                                {
                                  TitleInfoEventTowerBase__SetBaseSprite(
                                    (TitleInfoEventTowerBase_o *)Instance,
                                    j,
                                    v69,
                                    v74);
                                  if ( (v91 & 1) != 0 || !*v53 )
                                  {
LABEL_144:
                                    if ( !this->fields.endCallback && v52 && v50 != 1 )
                                      ((void (__fastcall *)(intptr_t, intptr_t))v52->fields.invoke_impl)(
                                        v52->fields.method_code,
                                        v52->fields.method);
                                    return;
                                  }
                                  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
                                  if ( Instance )
                                  {
                                    MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0);
                                    goto LABEL_144;
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
LABEL_177:
                sub_1C32E7C(Instance);
              }
              if ( entity )
              {
                if ( !byte_4C31EC6 )
                {
                  Instance = sub_1C32C20(&EventRewardSaveData_TypeInfo);
                  byte_4C31EC6 = 1;
                }
                v51 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
                if ( v51 == j )
                {
                  if ( v34[6] > 1u )
                  {
                    v34[9] = v51;
                    Point = this->fields.TowerFloorMax;
                    EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v34[8], v51, 0);
                    v50 = 0;
                    j = v51;
LABEL_113:
                    v52 = v89;
                    v53 = (_QWORD *)(v9 + 16);
LABEL_114:
                    Instance = (__int64)entity;
                    if ( !entity )
                      goto LABEL_177;
                    v54 = !EventTowerEntity__HasFlag(entity, 1, 0);
                    goto LABEL_116;
                  }
                }
                else
                {
                  if ( !v91 )
                  {
                    v50 = 0;
                    Point = 0;
                    ++j;
                    goto LABEL_113;
                  }
                  if ( v34[6] >= 2u )
                  {
                    Point = this->fields.TowerFloorMax;
                    Instance = EventTowerMaster__TryGetEntity(
                                 (EventTowerMaster_o *)MasterData_object,
                                 &entity,
                                 v34[8],
                                 v34[9],
                                 0);
                    if ( !entity )
                      goto LABEL_177;
                    openEffectId = entity->fields.openEffectId;
                    this->fields.openEffectId = openEffectId;
                    if ( v34[6] > 1u )
                    {
                      v56 = v34[8];
                      v34[9] = j;
                      EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v56, j, 0);
                      if ( openEffectId )
                      {
                        v57 = sub_1C32E6C(System_Action_TypeInfo);
                        System_Action___ctor(
                          (System_Action_o *)v57,
                          (Il2CppObject *)v9,
                          Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__,
                          0);
                        v59 = this->fields.eventDetailEntity;
                        v52 = v89;
                        v53 = (_QWORD *)(v9 + 16);
                        if ( !v59 )
                          goto LABEL_177;
                        Instance = (__int64)TitleInfoEventTower__GetTowerEffectData(
                                              this,
                                              v59->fields.eventId,
                                              this->fields.openEffectId,
                                              v58);
                        if ( Instance )
                        {
                          v61 = Instance;
                          TitleInfoEventTower__PlayFade(
                            this,
                            1.0,
                            0.0,
                            *(float *)(Instance + 20),
                            *(_DWORD *)(Instance + 24),
                            0,
                            v60);
                          v62 = *(float *)(v61 + 28);
                          if ( v62 <= 0.0 )
                          {
                            if ( !v57 )
                              goto LABEL_177;
                            (*(void (__fastcall **)(_QWORD, _QWORD))(v57 + 24))(
                              *(_QWORD *)(v57 + 64),
                              *(_QWORD *)(v57 + 40));
                          }
                          else
                          {
                            v63 = BasicHelper__DelayCall(v62, (System_Action_o *)v57, 1, 0);
                            UnityEngine_MonoBehaviour__StartCoroutine_71209212(
                              (UnityEngine_MonoBehaviour_o *)this,
                              v63,
                              0);
                          }
                        }
                        else
                        {
                          if ( !v57 )
                            goto LABEL_177;
                          (*(void (__fastcall **)(_QWORD, _QWORD))(v57 + 24))(
                            *(_QWORD *)(v57 + 64),
                            *(_QWORD *)(v57 + 40));
                          Instance = (__int64)this->fields.floorSprite;
                          if ( !Instance )
                            goto LABEL_177;
                          Instance = (__int64)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Instance,
                                                0);
                          if ( !Instance )
                            goto LABEL_177;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
                        }
                        this->fields.endCallback = v89;
                        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)v89, v64, v65);
                        v50 = 0;
                      }
                      else
                      {
                        Instance = (__int64)entity;
                        v52 = v89;
                        v53 = (_QWORD *)(v9 + 16);
                        if ( !entity )
                          goto LABEL_177;
                        if ( EventTowerEntity__HasFlag(entity, 2, 0) )
                        {
                          Instance = (__int64)this->fields.spriteRoot;
                          if ( !Instance )
                            goto LABEL_177;
                          localPosition = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)Instance,
                                            0);
                          x = localPosition.fields.x;
                          y = localPosition.fields.y;
                          z = localPosition.fields.z;
                          TitleInfoEventTower__SetTowerPosition(this, j, v86);
                          Instance = (__int64)this->fields.spriteRoot;
                          if ( !Instance )
                            goto LABEL_177;
                          Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                                                (UnityEngine_Component_o *)Instance,
                                                (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___);
                          if ( !Instance )
                            goto LABEL_177;
                          v95.fields.x = x;
                          v95.fields.y = y;
                          v95.fields.z = z;
                          TitleInfoEventTowerSlideAnimation__StartSlideAnim(
                            (TitleInfoEventTowerSlideAnimation_o *)Instance,
                            v89,
                            v95,
                            v87);
                        }
                        v50 = 1;
                      }
                      goto LABEL_114;
                    }
                  }
                }
              }
              else if ( v34[6] > 1u )
              {
                v34[9] = j;
                Point = this->fields.TowerFloorMax;
                EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v34[8], j, 0);
                v50 = 0;
                goto LABEL_113;
              }
            }
          }
          sub_1C32E84(Instance);
        }
        if ( *v13 )
        {
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( !Instance )
            goto LABEL_177;
          MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
          if ( !byte_4C31EC6 )
          {
            Instance = sub_1C32C20(&EventRewardSaveData_TypeInfo);
            byte_4C31EC6 = 1;
          }
          v29 = EventRewardSaveData_TypeInfo->static_fields;
          ForceShiftTowerId = v29->_EventTowerState_k__BackingField + 1;
          if ( byte_4C31EC5 )
            goto LABEL_23;
          Instance = sub_1C32C20(&EventRewardSaveData_TypeInfo);
          v28 = EventRewardSaveData_TypeInfo;
          byte_4C31EC5 = 1;
LABEL_22:
          v29 = v28->static_fields;
LABEL_23:
          v29->_EventTowerState_k__BackingField = ForceShiftTowerId;
          v30 = this->fields.eventDetailEntity;
          if ( !v30 )
            goto LABEL_177;
          EventRewardSaveData__SaveEventTowerState(v30->fields.eventId, 0);
          v91 = 1;
          goto LABEL_41;
        }
LABEL_40:
        v91 = 0;
        goto LABEL_41;
      }
    }
    if ( !byte_4C31EC6 )
    {
      sub_1C32C20(&EventRewardSaveData_TypeInfo);
      byte_4C31EC6 = 1;
    }
    if ( EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField )
      goto LABEL_40;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !Instance )
      goto LABEL_177;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    Instance = (__int64)this->fields.floorSprite;
    if ( !Instance )
      goto LABEL_177;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_177;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_WarMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C31DAD )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C31DAD = 1;
    }
    Instance = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_177;
    Instance = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 &v92,
                 *(_DWORD *)(*(_QWORD *)(Instance + 184) + 4LL),
                 (const MethodInfo_3396884 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    if ( (Instance & 1) != 0 )
    {
      v67 = this->fields.eventDetailEntity;
      if ( !v67 || !v92 )
        goto LABEL_177;
      if ( v67->fields.eventId == LODWORD(v92[6].klass) )
      {
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !Instance )
          goto LABEL_177;
        MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0);
      }
    }
  }
  if ( callback )
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  EasingObject_o *v24; // x21
  System_Action_o *v25; // x22
  System_Action_o *v26; // x23

  if ( (byte_4C3634D & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C32C20(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__);
    sub_1C32C20(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__);
    sub_1C32C20(&TitleInfoEventTower___c__DisplayClass26_0_TypeInfo);
    byte_4C3634D = 1;
  }
  v13 = sub_1C32E6C(TitleInfoEventTower___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_6;
  *(float *)(v13 + 24) = from;
  *(float *)(v13 + 28) = to;
  *(_QWORD *)(v13 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 32), (int32_t)this, v15, v16);
  *(_QWORD *)(v13 + 40) = endAction;
  sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 40), (int32_t)endAction, v17, v18);
  TitleInfoEventTower__SetSpriteAlpha(this, *(float *)(v13 + 24), v19);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_3136458 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v13 + 16) = Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 16), (int32_t)Component_object, v22, v23);
  v24 = *(EasingObject_o **)(v13 + 16);
  v25 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)v13, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__, 0);
  v26 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)v13, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__, 0);
  if ( !v24 )
LABEL_6:
    sub_1C32E7C(v14);
  EasingObject__Play(v24, time, v25, v26, 0.0, easingType, 0);
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventTower__SetSpriteAlpha(TitleInfoEventTower_o *this, float alpha, const MethodInfo *method)
{
  struct UISprite_o *baseSprite; // x0
  long double v5; // q8

  baseSprite = this->fields.baseSprite;
  if ( !baseSprite
    || (v5 = *(long double *)&alpha,
        ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))baseSprite->klass->vtable._8_set_alpha.methodPtr)(
          baseSprite,
          baseSprite->klass->vtable._8_set_alpha.method),
        (baseSprite = this->fields.floorSprite) == 0)
    || (((void (__fastcall *)(struct UISprite_o *, const MethodInfo *, long double))baseSprite->klass->vtable._8_set_alpha.methodPtr)(
          baseSprite,
          baseSprite->klass->vtable._8_set_alpha.method,
          v5),
        (baseSprite = this->fields.nameSprite) == 0) )
  {
    sub_1C32E7C(baseSprite);
  }
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *, long double))baseSprite->klass->vtable._8_set_alpha.methodPtr)(
    baseSprite,
    baseSprite->klass->vtable._8_set_alpha.method,
    v5);
}


void TitleInfoEventTower__SetTowerPosition(TitleInfoEventTower_o *this, int32_t towerId, const MethodInfo *method)
{
  void *Instance; // x0
  struct EventDetailEntity_o *eventDetailEntity; // x8
  EventUiEntity_o *Entity; // x0
  EventUiEntity_o *v8; // x20
  UnityEngine_Object_o *spriteRoot; // x21
  UnityEngine_Transform_o *v10; // x19
  int x; // s8
  int y; // s9
  float *v13; // x8
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3634A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventUiMaster___);
    sub_1C32C20(&EventUiEntity_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3634A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventUiMaster___);
  if ( Instance )
  {
    eventDetailEntity = this->fields.eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_15;
    Entity = EventUiMaster__getEntity((EventUiMaster_o *)Instance, eventDetailEntity->fields.eventId, towerId, 0);
    if ( Entity )
    {
      v8 = Entity;
      spriteRoot = (UnityEngine_Object_o *)this->fields.spriteRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(spriteRoot, 0, 0) )
      {
        v10 = this->fields.spriteRoot;
        x = v8->fields.x;
        y = v8->fields.y;
        Instance = EventUiEntity_TypeInfo;
        if ( !EventUiEntity_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo);
          Instance = EventUiEntity_TypeInfo;
        }
        if ( v10 )
        {
          v13 = (float *)*((_QWORD *)Instance + 23);
          v14.fields.z = *v13 * 0.0;
          v14.fields.y = *v13 * (float)-(float)y;
          v14.fields.x = *v13 * (float)x;
          UnityEngine_Transform__set_localPosition(v10, v14, 0);
          return;
        }
LABEL_15:
        sub_1C32E7C(Instance);
      }
    }
  }
}


void TitleInfoEventTower__Update(TitleInfoEventTower_o *this, const MethodInfo *method)
{
  System_String_o **p_animationName; // x20
  UnityEngine_Object_o *animationData; // x21
  struct UnityEngine_Animation_o **p_animationData; // x23
  UnityEngine_Animation_o *klass; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  UnityEngine_Object_o *simpleAnimationData; // x21
  TitleInfoEventTower_c *v14; // x0
  System_String_o *EFFECT_ANIMATION_START_FORMAT; // x21
  Il2CppObject *v16; // x0
  System_String_o *v17; // x22
  System_String_o *EFFECT_ANIMATION_END_FORMAT; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  Il2CppObject *v25; // x0
  struct System_String_o *v26; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  UnityEngine_Object_o *v29; // x21
  const MethodInfo *v30; // x4
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  CGThumbnailListItem_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *v34; // x21
  UnityEngine_Object_o *gameObject; // x21
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  UnityEngine_Object_o *v38; // x21
  UnityEngine_Object_o *v39; // x20
  UnityEngine_Object_o *v40; // x20
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  CGThumbnailListItem_o *p_endCallback; // x19
  struct System_Action_o *v44; // x20
  struct System_Action_o *endCallback; // t1
  int32_t v46; // [xsp+8h] [xbp-48h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C3634C & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C32C20(&TitleInfoEventTower_TypeInfo);
    byte_4C3634C = 1;
  }
  p_animationName = &this->fields.animationName;
  if ( !System_String__IsNullOrEmpty(this->fields.animationName, 0) )
  {
    p_animationData = &this->fields.animationData;
    animationData = (UnityEngine_Object_o *)this->fields.animationData;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(animationData, 0, 0) )
    {
      klass = *p_animationData;
      if ( !*p_animationData )
        goto LABEL_48;
      if ( !UnityEngine_Animation__IsPlaying(klass, *p_animationName, 0) )
        goto LABEL_14;
    }
    simpleAnimationData = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(simpleAnimationData, 0, 0) )
    {
      klass = (UnityEngine_Animation_o *)this->fields.simpleAnimationData;
      if ( !klass )
        goto LABEL_48;
      if ( !SimpleAnimation__IsPlaying((SimpleAnimation_o *)klass, *p_animationName, 0) )
      {
LABEL_14:
        v14 = TitleInfoEventTower_TypeInfo;
        if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
          v14 = TitleInfoEventTower_TypeInfo;
        }
        EFFECT_ANIMATION_START_FORMAT = v14->static_fields->EFFECT_ANIMATION_START_FORMAT;
        openEffectId = this->fields.openEffectId;
        v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openEffectId, v7, v8, v9, v10, v11, v12);
        v17 = System_String__Format(EFFECT_ANIMATION_START_FORMAT, v16, 0);
        EFFECT_ANIMATION_END_FORMAT = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_END_FORMAT;
        v46 = this->fields.openEffectId;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v19, v20, v21, v22, v23, v24);
        v26 = System_String__Format(EFFECT_ANIMATION_END_FORMAT, v25, 0);
        if ( System_String__op_Equality(this->fields.animationName, v17, 0) )
        {
          this->fields.animationName = v26;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.animationName, (int32_t)v26, v27, v28);
          v29 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v29, 0, 0) )
          {
            klass = (UnityEngine_Animation_o *)this->fields.simpleAnimationData;
            if ( klass )
            {
              SimpleAnimation__Play_66464300((SimpleAnimation_o *)klass, *p_animationName, 0);
LABEL_35:
              TitleInfoEventTower__Open(this, 0, 0, 1, v30);
              return;
            }
          }
          else
          {
            v38 = (UnityEngine_Object_o *)*p_animationData;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v38, 0, 0) )
              goto LABEL_35;
            klass = *p_animationData;
            if ( *p_animationData )
            {
              UnityEngine_Animation__Play_70968924(klass, *p_animationName, 0);
              goto LABEL_35;
            }
          }
LABEL_48:
          sub_1C32E7C(klass);
        }
        if ( System_String__op_Equality(*p_animationName, v26, 0) )
        {
          this->fields.animationName = 0;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.animationName, 0, v31, v32);
          p_simpleAnimationData = (CGThumbnailListItem_o *)&this->fields.simpleAnimationData;
          v34 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          this->fields.openEffectId = 0;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v34, 0, 0) )
          {
            klass = (UnityEngine_Animation_o *)p_simpleAnimationData->klass;
            if ( !p_simpleAnimationData->klass )
              goto LABEL_48;
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)klass,
                                                   0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__DestroyImmediate_71223828(gameObject, 0);
            p_simpleAnimationData->klass = 0;
          }
          else
          {
            v39 = (UnityEngine_Object_o *)*p_animationData;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v39, 0, 0) )
              goto LABEL_44;
            klass = *p_animationData;
            if ( !*p_animationData )
              goto LABEL_48;
            v40 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__DestroyImmediate_71223828(v40, 0);
            p_simpleAnimationData = (CGThumbnailListItem_o *)&this->fields.animationData;
            *p_animationData = 0;
          }
          sub_1C32BC4(p_simpleAnimationData, 0, v36, v37);
LABEL_44:
          klass = (UnityEngine_Animation_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( !klass )
            goto LABEL_48;
          MissionNotifyManager__CancelPause((MissionNotifyManager_o *)klass, 0);
          endCallback = this->fields.endCallback;
          p_endCallback = (CGThumbnailListItem_o *)&this->fields.endCallback;
          v44 = endCallback;
          if ( endCallback )
          {
            p_endCallback->klass = 0;
            sub_1C32BC4(p_endCallback, 0, v41, v42);
            ((void (__fastcall *)(intptr_t, intptr_t))v44->fields.invoke_impl)(
              v44->fields.method_code,
              v44->fields.method);
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
  const MethodInfo *v3; // x3

  this->fields.eventDetailEntity = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventDetailEntity, (int32_t)value, (int32_t)method, v3);
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
  System_String_o *Component_object; // x0
  AssetData_o *effectAsset; // x20
  struct TitleInfoEventTower_o *_4__this; // x8
  System_String_o *OBJECT_NAME_EFFECT_BASE; // x21
  System_String_o *v7; // x0
  UnityEngine_Object_o *Object_40411212; // x20
  Il2CppObject *v9; // x0
  struct TitleInfoEventTower_o *v10; // x8
  UnityEngine_GameObject_o *v11; // x20
  struct TitleInfoEventTower_o *v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct TitleInfoEventTower_o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct TitleInfoEventTower_o *v18; // x8
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  struct TitleInfoEventTower_o *v25; // x20
  struct TitleInfoEventTower_o *v26; // x8
  System_String_o *EFFECT_ANIMATION_START_FORMAT; // x21
  Il2CppObject *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct TitleInfoEventTower_o *v31; // x8
  UnityEngine_Object_o *animationData; // x20
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x5
  __int64 v37; // x6
  __int64 v38; // x7
  struct TitleInfoEventTower_o *v39; // x20
  struct TitleInfoEventTower_o *v40; // x8
  System_String_o *v41; // x21
  Il2CppObject *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct TitleInfoEventTower_o *v45; // x8
  int32_t v46; // [xsp+8h] [xbp-38h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C36355 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C32C20(&UnityEngine_GameObject_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&TitleInfoEventTower_TypeInfo);
    byte_4C36355 = 1;
  }
  Component_object = (System_String_o *)TitleInfoEventTower_TypeInfo;
  effectAsset = this->fields.effectAsset;
  if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_39;
  OBJECT_NAME_EFFECT_BASE = TitleInfoEventTower_TypeInfo->static_fields->OBJECT_NAME_EFFECT_BASE;
  v7 = System_Int32__ToString((int)_4__this + 120, 0);
  Component_object = System_String__Concat_63518544(OBJECT_NAME_EFFECT_BASE, v7, 0);
  if ( !effectAsset )
    goto LABEL_39;
  Object_40411212 = AssetData__GetObject_40411212(effectAsset, Component_object, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_40411212 )
    v9 = (UnityEngine_GameObject_c *)Object_40411212->klass == UnityEngine_GameObject_TypeInfo
       ? (Il2CppObject *)Object_40411212
       : 0LL;
  else
    v9 = 0;
  Component_object = (System_String_o *)UnityEngine_Object__Instantiate_object_(
                                          v9,
                                          (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_39;
  v11 = (UnityEngine_GameObject_o *)Component_object;
  GameObjectExtensions__SafeSetParent_36042552((UnityEngine_GameObject_o *)Component_object, v10->fields.effectRoot, 0);
  if ( !v11 )
    goto LABEL_39;
  v12 = this->fields.__4__this;
  Component_object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                          v11,
                                          (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !v12 )
    goto LABEL_39;
  v12->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&v12->fields.simpleAnimationData, (int32_t)Component_object, v13, v14);
  v15 = this->fields.__4__this;
  Component_object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                          v11,
                                          (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !v15 )
    goto LABEL_39;
  v15->fields.animationData = (struct UnityEngine_Animation_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&v15->fields.animationData, (int32_t)Component_object, v16, v17);
  v18 = this->fields.__4__this;
  if ( !v18 )
    goto LABEL_39;
  Component_object = (System_String_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)v18->fields.simpleAnimationData,
                                          0,
                                          0);
  v25 = this->fields.__4__this;
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    Component_object = (System_String_o *)TitleInfoEventTower_TypeInfo;
    v26 = this->fields.__4__this;
    if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
      v26 = this->fields.__4__this;
    }
    if ( v26 )
    {
      EFFECT_ANIMATION_START_FORMAT = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT;
      openEffectId = v26->fields.openEffectId;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openEffectId, v19, v20, v21, v22, v23, v24);
      Component_object = System_String__Format(EFFECT_ANIMATION_START_FORMAT, v28, 0);
      if ( v25 )
      {
        v25->fields.animationName = Component_object;
        sub_1C32BC4((CGThumbnailListItem_o *)&v25->fields.animationName, (int32_t)Component_object, v29, v30);
        v31 = this->fields.__4__this;
        if ( v31 )
        {
          Component_object = (System_String_o *)v31->fields.simpleAnimationData;
          if ( Component_object )
          {
            SimpleAnimation__Play_66464300((SimpleAnimation_o *)Component_object, v31->fields.animationName, 0);
            return;
          }
        }
      }
    }
LABEL_39:
    sub_1C32E7C(Component_object);
  }
  if ( !v25 )
    goto LABEL_39;
  animationData = (UnityEngine_Object_o *)v25->fields.animationData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animationData, 0, 0) )
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
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v33, v34, v35, v36, v37, v38);
    Component_object = System_String__Format(v41, v42, 0);
    if ( !v39 )
      goto LABEL_39;
    v39->fields.animationName = Component_object;
    sub_1C32BC4((CGThumbnailListItem_o *)&v39->fields.animationName, (int32_t)Component_object, v43, v44);
    v45 = this->fields.__4__this;
    if ( !v45 )
      goto LABEL_39;
    Component_object = (System_String_o *)v45->fields.animationData;
    if ( !Component_object )
      goto LABEL_39;
    UnityEngine_Animation__Play_70968924((UnityEngine_Animation_o *)Component_object, v45->fields.animationName, 0);
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
  float mNow; // s2
  float v5; // s3
  bool v6; // nf
  float v7; // s2

  easingObj = this->fields.easingObj;
  if ( !easingObj || (v3 = this, (this = (TitleInfoEventTower___c__DisplayClass26_0_o *)this->fields.__4__this) == 0) )
    sub_1C32E7C(this);
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


void TitleInfoEventTower___c__DisplayClass26_0___PlayFade_b__1(
        TitleInfoEventTower___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  TitleInfoEventTower_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C32E7C(0);
  TitleInfoEventTower__SetSpriteAlpha(_4__this, this->fields.to, method);
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
    sub_1C32E7C(this);
  return info->fields.EventId == this->fields.eventId;
}


bool TitleInfoEventTower___c__DisplayClass31_0___GetTowerShiftData_b__1(
        TitleInfoEventTower___c__DisplayClass31_0_o *this,
        TitleInfoEventTower_TowerShiftData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C32E7C(this);
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
    sub_1C32E7C(this);
  return info->fields.EventId == this->fields.eventId;
}


bool TitleInfoEventTower___c__DisplayClass33_0___GetTowerEffectData_b__1(
        TitleInfoEventTower___c__DisplayClass33_0_o *this,
        TitleInfoEventTower_TowerEffectData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C32E7C(this);
  return data->fields.EffectId == this->fields.effectId;
}