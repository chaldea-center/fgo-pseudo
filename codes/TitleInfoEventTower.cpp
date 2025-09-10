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

  if ( (byte_4C25C7A & 1) == 0 )
  {
    sub_1C2D490(&TitleInfoEventTower_TypeInfo);
    sub_1C2D490(&StringLiteral_18857/*"ef_tower_change{0}_end"*/);
    sub_1C2D490(&StringLiteral_18856/*"ef_tower_change"*/);
    sub_1C2D490(&StringLiteral_18858/*"ef_tower_change{0}_start"*/);
    byte_4C25C7A = 1;
  }
  TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT = (struct System_String_o *)StringLiteral_18858/*"ef_tower_change{0}_start"*/;
  sub_1C2D434((CGThumbnailListItem_o *)TitleInfoEventTower_TypeInfo->static_fields, StringLiteral_18858/*"ef_tower_change{0}_start"*/, v1, v2);
  v3 = StringLiteral_18857/*"ef_tower_change{0}_end"*/;
  static_fields = TitleInfoEventTower_TypeInfo->static_fields;
  static_fields->EFFECT_ANIMATION_END_FORMAT = (struct System_String_o *)StringLiteral_18857/*"ef_tower_change{0}_end"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->EFFECT_ANIMATION_END_FORMAT, v3, v5, v6);
  v7 = StringLiteral_18856/*"ef_tower_change"*/;
  v8 = TitleInfoEventTower_TypeInfo->static_fields;
  v8->OBJECT_NAME_EFFECT_BASE = (struct System_String_o *)StringLiteral_18856/*"ef_tower_change"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->OBJECT_NAME_EFFECT_BASE, v7, v9, v10);
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_Object_o *simpleAnimationData; // x20
  UnityEngine_Object_o *animationData; // x20

  if ( (byte_4C25C71 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C25C71 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_16:
    sub_1C2D6EC(gameObject, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.animationName = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.animationName, 0, v5, v6);
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
  __int64 v7; // x1

  if ( (byte_4C25C75 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C25C75 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v7);
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
  __int64 v9; // x1
  System_Object_array *towerEventInfoList; // x19
  System_Func_object__bool__o *v11; // x20
  TitleInfoEventTower_TowerEffectData_o *result; // x0
  System_Object_array *v13; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_4C25C79 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___);
    sub_1C2D490(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
    sub_1C2D490(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
    sub_1C2D490(&System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo);
    sub_1C2D490(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__);
    sub_1C2D490(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__);
    sub_1C2D490(&TitleInfoEventTower___c__DisplayClass33_0_TypeInfo);
    byte_4C25C79 = 1;
  }
  v7 = sub_1C2D6DC(TitleInfoEventTower___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(_DWORD *)(v7 + 16) = eventId;
  *(_DWORD *)(v7 + 20) = effectId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v11 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__,
    0);
  result = (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_object_(
                                                      towerEventInfoList,
                                                      (System_Func_T__bool__o *)v11,
                                                      (const MethodInfo_30B88BC *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v13 = *(System_Object_array **)&result->fields.FadeInTime;
    v14 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      (Il2CppObject *)v7,
      Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__,
      0);
    return (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_object_(
                                                      v13,
                                                      (System_Func_T__bool__o *)v14,
                                                      (const MethodInfo_30B88BC *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___);
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
  __int64 v9; // x1
  System_Object_array *towerEventInfoList; // x19
  System_Func_object__bool__o *v11; // x20
  TitleInfoEventTower_TowerShiftData_o *result; // x0
  System_Object_array *v13; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_4C25C77 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
    sub_1C2D490(&Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___);
    sub_1C2D490(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
    sub_1C2D490(&System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo);
    sub_1C2D490(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__);
    sub_1C2D490(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__);
    sub_1C2D490(&TitleInfoEventTower___c__DisplayClass31_0_TypeInfo);
    byte_4C25C77 = 1;
  }
  v7 = sub_1C2D6DC(TitleInfoEventTower___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(_DWORD *)(v7 + 16) = eventId;
  *(_DWORD *)(v7 + 20) = towerId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v11 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__,
    0);
  result = (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_object_(
                                                     towerEventInfoList,
                                                     (System_Func_T__bool__o *)v11,
                                                     (const MethodInfo_30B88BC *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v13 = *(System_Object_array **)&result->fields.CondType;
    v14 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      (Il2CppObject *)v7,
      Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__,
      0);
    return (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_object_(
                                                     v13,
                                                     (System_Func_T__bool__o *)v14,
                                                     (const MethodInfo_30B88BC *)Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___);
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
  __int64 v7; // x1
  EventUiEntity_o *Entity; // x0
  EventUiEntity_o *v9; // x19

  if ( (byte_4C25C76 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventUiMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventUiReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C25C76 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventUiMaster___);
  if ( !Master_object )
    goto LABEL_12;
  Entity = EventUiMaster__getEntity((EventUiMaster_o *)Master_object, eventId, towerId, 0);
  if ( !Entity )
    return (char)Entity;
  v9 = Entity;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
  if ( !Master_object )
LABEL_12:
    sub_1C2D6EC(Master_object, v7);
  LOBYTE(Entity) = EventUiReleaseMaster__IsOpen((EventUiReleaseMaster_o *)Master_object, v9, 0);
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

  if ( (byte_4C25C78 & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    byte_4C25C78 = 1;
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
  __int64 v9; // x1

  if ( (byte_4C25C74 & 1) == 0 )
  {
    this = (TitleInfoEventTower_o *)sub_1C2D490(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4C25C74 = 1;
  }
  QuestIdOnFirstFloorOfNextTower = TitleInfoEventTower__GetQuestIdOnFirstFloorOfNextTower(
                                     this,
                                     eventId,
                                     nowTowerId,
                                     method);
  if ( QuestIdOnFirstFloorOfNextTower < 1 )
    return 0;
  v7 = QuestIdOnFirstFloorOfNextTower;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v9);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  _QWORD *v14; // x28
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct EventDetailEntity_o *eventDetailEntity; // x8
  struct EventDetailEntity_o *v18; // x8
  int32_t eventId; // w19
  QuestGroupMaster_o *v20; // x25
  const MethodInfo *v21; // x3
  struct EventDetailEntity_o *v22; // x8
  int32_t v23; // w26
  int32_t v24; // w19
  TitleInfoEventTower_TowerShiftData_o *TowerShiftData; // x0
  const MethodInfo *v26; // x3
  TitleInfoEventTower_TowerShiftData_o *v27; // x26
  int ForceShiftTowerId; // w19
  EventRewardSaveData_c *v29; // x8
  struct EventRewardSaveData_StaticFields *v30; // x8
  struct EventDetailEntity_o *v31; // x8
  int32_t v32; // w25
  Il2CppObject *MasterData_object; // x27
  __int64 v34; // x2
  struct EventDetailEntity_o *v35; // x8
  _DWORD *v36; // x28
  int v37; // w9
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x3
  struct EventDetailEntity_o *v40; // x8
  bool IsDispEnabled; // w19
  Il2CppObject *v42; // x19
  int32_t j; // w25
  struct EventDetailEntity_o *v44; // x8
  int32_t Point; // w26
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

  if ( (byte_4C25C6F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventTowerMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__);
    sub_1C2D490(&TitleInfoEventTower___c__DisplayClass22_0_TypeInfo);
    byte_4C25C6F = 1;
  }
  entity = 0;
  v92 = 0;
  v9 = sub_1C2D6DC(TitleInfoEventTower___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_177;
  *(_QWORD *)(v9 + 16) = effectAsset;
  v14 = (_QWORD *)(v9 + 16);
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 16), (int32_t)effectAsset, v12, v13);
  *(_QWORD *)(v9 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v15, v16);
  eventDetailEntity = this->fields.eventDetailEntity;
  if ( eventDetailEntity )
  {
    EventRewardSaveData__LoadEventTowerState(eventDetailEntity->fields.eventId, 0);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_177;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    v18 = this->fields.eventDetailEntity;
    if ( !v18 )
      goto LABEL_177;
    eventId = v18->fields.eventId;
    v20 = (QuestGroupMaster_o *)Instance;
    if ( !byte_4C217F7 )
    {
      Instance = sub_1C2D490(&EventRewardSaveData_TypeInfo);
      byte_4C217F7 = 1;
    }
    if ( !v20 )
      goto LABEL_177;
    v90 = isFadeIn;
    Instance = QuestGroupMaster__GetEventTowerQuestId(
                 v20,
                 eventId,
                 EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField + 1,
                 1,
                 0);
    v22 = this->fields.eventDetailEntity;
    if ( !v22 )
      goto LABEL_177;
    v23 = v22->fields.eventId;
    v24 = Instance;
    if ( !byte_4C217F7 )
    {
      sub_1C2D490(&EventRewardSaveData_TypeInfo);
      byte_4C217F7 = 1;
    }
    TowerShiftData = TitleInfoEventTower__GetTowerShiftData(
                       this,
                       v23,
                       EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
                       v21);
    v27 = TowerShiftData;
    if ( !byte_4C217F7 )
    {
      TowerShiftData = (TitleInfoEventTower_TowerShiftData_o *)sub_1C2D490(&EventRewardSaveData_TypeInfo);
      byte_4C217F7 = 1;
    }
    if ( TitleInfoEventTower__IsForceShiftTower(
           (TitleInfoEventTower_o *)TowerShiftData,
           v27,
           EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
           v26) )
    {
      if ( *v14 )
      {
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !Instance )
          goto LABEL_177;
        MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
        if ( !v27 )
          goto LABEL_177;
        ForceShiftTowerId = v27->fields.ForceShiftTowerId;
        if ( !byte_4C217F6 )
        {
          Instance = sub_1C2D490(&EventRewardSaveData_TypeInfo);
          byte_4C217F6 = 1;
        }
        v29 = EventRewardSaveData_TypeInfo;
        goto LABEL_22;
      }
      goto LABEL_40;
    }
    if ( v24 >= 1 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Instance )
        goto LABEL_177;
      Instance = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v24, -1, 0, 0);
      if ( (Instance & 1) != 0 )
      {
        if ( !byte_4C217F7 )
        {
          Instance = sub_1C2D490(&EventRewardSaveData_TypeInfo);
          byte_4C217F7 = 1;
        }
        if ( !EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField )
        {
          for ( i = 1; ; i = byte_4C217F7 )
          {
            if ( !i )
            {
              Instance = sub_1C2D490(&EventRewardSaveData_TypeInfo);
              byte_4C217F7 = 1;
            }
            static_fields = EventRewardSaveData_TypeInfo->static_fields;
            EventTowerState_k__BackingField = static_fields->_EventTowerState_k__BackingField;
            if ( !byte_4C217F6 )
            {
              Instance = sub_1C2D490(&EventRewardSaveData_TypeInfo);
              byte_4C217F6 = 1;
              static_fields = EventRewardSaveData_TypeInfo->static_fields;
            }
            v78 = EventTowerState_k__BackingField + 1;
            static_fields->_EventTowerState_k__BackingField = EventTowerState_k__BackingField + 1;
            v79 = this->fields.eventDetailEntity;
            if ( !v79 )
              goto LABEL_177;
            v80 = v79->fields.eventId;
            if ( !byte_4C217F7 )
            {
              sub_1C2D490(&EventRewardSaveData_TypeInfo);
              byte_4C217F7 = 1;
              v78 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
            }
            Instance = QuestGroupMaster__GetEventTowerQuestId(v20, v80, v78 + 1, 1, 0);
            if ( (int)Instance < 1 )
              break;
            v81 = Instance;
            Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
          if ( !byte_4C217F7 )
          {
            sub_1C2D490(&EventRewardSaveData_TypeInfo);
            byte_4C217F7 = 1;
          }
          v89 = callback;
          v32 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
          Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_177;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventTowerMaster___);
          Instance = sub_1C2D538(int___TypeInfo, 2);
          v35 = this->fields.eventDetailEntity;
          if ( !v35 )
            goto LABEL_177;
          v36 = (_DWORD *)Instance;
          if ( !Instance )
            goto LABEL_177;
          v37 = *(_DWORD *)(Instance + 24);
          if ( v37 )
          {
            v34 = (unsigned int)v35->fields.eventId;
            *(_DWORD *)(Instance + 32) = v34;
            if ( v37 != 1 )
            {
              *(_DWORD *)(Instance + 36) = v32;
              if ( !MasterData_object )
                goto LABEL_177;
              EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v34, v32, 0);
              TitleInfoEventTower__SetTowerPosition(this, v32, v38);
              if ( entity )
                this->fields.TowerFloorMax = entity->fields.topFloor;
              v40 = this->fields.eventDetailEntity;
              if ( !v40 )
                goto LABEL_177;
              IsDispEnabled = TitleInfoEventTower__IsDispEnabled(
                                (TitleInfoEventTower_o *)Instance,
                                v40->fields.eventId,
                                v32,
                                v39);
              Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              if ( !Instance )
                goto LABEL_177;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, IsDispEnabled, 0);
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_177;
              v42 = DataManager__GetMasterData_object_(
                      (DataManager_o *)Instance,
                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
              for ( j = v32 - 1; ; ++j )
              {
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                if ( !byte_4C211E1 )
                {
                  sub_1C2D490(&NetworkManager_TypeInfo);
                  byte_4C211E1 = 1;
                }
                Instance = (__int64)NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  Instance = (__int64)NetworkManager_TypeInfo;
                }
                v44 = this->fields.eventDetailEntity;
                if ( !v44 || !v42 )
                  goto LABEL_177;
                Point = UserEventPointMaster__GetPoint(
                          (UserEventPointMaster_o *)v42,
                          *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                          v44->fields.eventId,
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
                TitleInfoEventTower__SetSpriteAlpha(this, 1.0, v11);
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
                                        (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
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
                                          (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
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
                                        (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___);
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
                                                (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___);
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
                                                      (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___);
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
                                  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
                sub_1C2D6EC(Instance, v11);
              }
              if ( entity )
              {
                if ( !byte_4C217F7 )
                {
                  Instance = sub_1C2D490(&EventRewardSaveData_TypeInfo);
                  byte_4C217F7 = 1;
                }
                v51 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
                if ( v51 == j )
                {
                  if ( v36[6] > 1u )
                  {
                    v36[9] = v51;
                    Point = this->fields.TowerFloorMax;
                    EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v36[8], v51, 0);
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
                  if ( v36[6] >= 2u )
                  {
                    Point = this->fields.TowerFloorMax;
                    Instance = EventTowerMaster__TryGetEntity(
                                 (EventTowerMaster_o *)MasterData_object,
                                 &entity,
                                 v36[8],
                                 v36[9],
                                 0);
                    if ( !entity )
                      goto LABEL_177;
                    openEffectId = entity->fields.openEffectId;
                    this->fields.openEffectId = openEffectId;
                    if ( v36[6] > 1u )
                    {
                      v56 = v36[8];
                      v36[9] = j;
                      EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v56, j, 0);
                      if ( openEffectId )
                      {
                        v57 = sub_1C2D6DC(System_Action_TypeInfo);
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
                            UnityEngine_MonoBehaviour__StartCoroutine_71149276(
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
                        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)v89, v64, v65);
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
                                                (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___);
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
              else if ( v36[6] > 1u )
              {
                v36[9] = j;
                Point = this->fields.TowerFloorMax;
                EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v36[8], j, 0);
                v50 = 0;
                goto LABEL_113;
              }
            }
          }
          sub_1C2D6F4(Instance, v11, v34);
        }
        if ( *v14 )
        {
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( !Instance )
            goto LABEL_177;
          MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
          if ( !byte_4C217F7 )
          {
            Instance = sub_1C2D490(&EventRewardSaveData_TypeInfo);
            byte_4C217F7 = 1;
          }
          v30 = EventRewardSaveData_TypeInfo->static_fields;
          ForceShiftTowerId = v30->_EventTowerState_k__BackingField + 1;
          if ( byte_4C217F6 )
            goto LABEL_23;
          Instance = sub_1C2D490(&EventRewardSaveData_TypeInfo);
          v29 = EventRewardSaveData_TypeInfo;
          byte_4C217F6 = 1;
LABEL_22:
          v30 = v29->static_fields;
LABEL_23:
          v30->_EventTowerState_k__BackingField = ForceShiftTowerId;
          v31 = this->fields.eventDetailEntity;
          if ( !v31 )
            goto LABEL_177;
          EventRewardSaveData__SaveEventTowerState(v31->fields.eventId, 0);
          v91 = 1;
          goto LABEL_41;
        }
LABEL_40:
        v91 = 0;
        goto LABEL_41;
      }
    }
    if ( !byte_4C217F7 )
    {
      sub_1C2D490(&EventRewardSaveData_TypeInfo);
      byte_4C217F7 = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C216DE )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C216DE = 1;
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
                 (const MethodInfo_3387DE4 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    if ( (Instance & 1) != 0 )
    {
      v67 = this->fields.eventDetailEntity;
      if ( !v67 || !v92 )
        goto LABEL_177;
      if ( v67->fields.eventId == LODWORD(v92[6].klass) )
      {
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  EasingObject_o *v25; // x21
  System_Action_o *v26; // x22
  System_Action_o *v27; // x23

  if ( (byte_4C25C73 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C2D490(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__);
    sub_1C2D490(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__);
    sub_1C2D490(&TitleInfoEventTower___c__DisplayClass26_0_TypeInfo);
    byte_4C25C73 = 1;
  }
  v13 = sub_1C2D6DC(TitleInfoEventTower___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_6;
  *(float *)(v13 + 24) = from;
  *(float *)(v13 + 28) = to;
  *(_QWORD *)(v13 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 32), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 40) = endAction;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 40), (int32_t)endAction, v18, v19);
  TitleInfoEventTower__SetSpriteAlpha(this, *(float *)(v13 + 24), v20);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_31279B8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v13 + 16) = Component_object;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 16), (int32_t)Component_object, v23, v24);
  v25 = *(EasingObject_o **)(v13 + 16);
  v26 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)v13, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__, 0);
  v27 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)v13, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__, 0);
  if ( !v25 )
LABEL_6:
    sub_1C2D6EC(v14, v15);
  EasingObject__Play(v25, time, v26, v27, 0.0, easingType, 0);
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
    sub_1C2D6EC(baseSprite, method);
  }
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *, long double))baseSprite->klass->vtable._8_set_alpha.methodPtr)(
    baseSprite,
    baseSprite->klass->vtable._8_set_alpha.method,
    v5);
}


void TitleInfoEventTower__SetTowerPosition(TitleInfoEventTower_o *this, int32_t towerId, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  struct EventDetailEntity_o *eventDetailEntity; // x8
  EventUiEntity_o *Entity; // x0
  EventUiEntity_o *v9; // x20
  UnityEngine_Object_o *spriteRoot; // x21
  UnityEngine_Transform_o *v11; // x19
  int x; // s8
  int y; // s9
  float *v14; // x8
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C25C70 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventUiMaster___);
    sub_1C2D490(&EventUiEntity_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C25C70 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventUiMaster___);
  if ( Instance )
  {
    eventDetailEntity = this->fields.eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_15;
    Entity = EventUiMaster__getEntity((EventUiMaster_o *)Instance, eventDetailEntity->fields.eventId, towerId, 0);
    if ( Entity )
    {
      v9 = Entity;
      spriteRoot = (UnityEngine_Object_o *)this->fields.spriteRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(spriteRoot, 0, 0) )
      {
        v11 = this->fields.spriteRoot;
        x = v9->fields.x;
        y = v9->fields.y;
        Instance = EventUiEntity_TypeInfo;
        if ( !EventUiEntity_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo);
          Instance = EventUiEntity_TypeInfo;
        }
        if ( v11 )
        {
          v14 = (float *)*((_QWORD *)Instance + 23);
          v15.fields.z = *v14 * 0.0;
          v15.fields.y = *v14 * (float)-(float)y;
          v15.fields.x = *v14 * (float)x;
          UnityEngine_Transform__set_localPosition(v11, v15, 0);
          return;
        }
LABEL_15:
        sub_1C2D6EC(Instance, v6);
      }
    }
  }
}


void TitleInfoEventTower__Update(TitleInfoEventTower_o *this, const MethodInfo *method)
{
  System_String_o **p_animationName; // x20
  UnityEngine_Object_o *animationData; // x21
  struct UnityEngine_Animation_o **p_animationData; // x23
  __int64 v6; // x1
  UnityEngine_Animation_o *klass; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  UnityEngine_Object_o *simpleAnimationData; // x21
  TitleInfoEventTower_c *v12; // x0
  System_String_o *EFFECT_ANIMATION_START_FORMAT; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x22
  System_String_o *EFFECT_ANIMATION_END_FORMAT; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  struct System_String_o *v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  UnityEngine_Object_o *v24; // x21
  const MethodInfo *v25; // x4
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  CGThumbnailListItem_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *v29; // x21
  UnityEngine_Object_o *gameObject; // x21
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  UnityEngine_Object_o *v33; // x21
  UnityEngine_Object_o *v34; // x20
  UnityEngine_Object_o *v35; // x20
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  CGThumbnailListItem_o *p_endCallback; // x19
  struct System_Action_o *v39; // x20
  struct System_Action_o *endCallback; // t1
  int32_t v41; // [xsp+8h] [xbp-48h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C25C72 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C2D490(&TitleInfoEventTower_TypeInfo);
    byte_4C25C72 = 1;
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
        v12 = TitleInfoEventTower_TypeInfo;
        if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
          v12 = TitleInfoEventTower_TypeInfo;
        }
        EFFECT_ANIMATION_START_FORMAT = v12->static_fields->EFFECT_ANIMATION_START_FORMAT;
        openEffectId = this->fields.openEffectId;
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openEffectId, v8, v9, v10);
        v15 = System_String__Format(EFFECT_ANIMATION_START_FORMAT, v14, 0);
        EFFECT_ANIMATION_END_FORMAT = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_END_FORMAT;
        v41 = this->fields.openEffectId;
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v17, v18, v19);
        v21 = System_String__Format(EFFECT_ANIMATION_END_FORMAT, v20, 0);
        if ( System_String__op_Equality(this->fields.animationName, v15, 0) )
        {
          this->fields.animationName = v21;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.animationName, (int32_t)v21, v22, v23);
          v24 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v24, 0, 0) )
          {
            klass = (UnityEngine_Animation_o *)this->fields.simpleAnimationData;
            if ( klass )
            {
              SimpleAnimation__Play_66404364((SimpleAnimation_o *)klass, *p_animationName, 0);
LABEL_35:
              TitleInfoEventTower__Open(this, 0, 0, 1, v25);
              return;
            }
          }
          else
          {
            v33 = (UnityEngine_Object_o *)*p_animationData;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v33, 0, 0) )
              goto LABEL_35;
            klass = *p_animationData;
            if ( *p_animationData )
            {
              UnityEngine_Animation__Play_70908988(klass, *p_animationName, 0);
              goto LABEL_35;
            }
          }
LABEL_48:
          sub_1C2D6EC(klass, v6);
        }
        if ( System_String__op_Equality(*p_animationName, v21, 0) )
        {
          this->fields.animationName = 0;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.animationName, 0, v26, v27);
          p_simpleAnimationData = (CGThumbnailListItem_o *)&this->fields.simpleAnimationData;
          v29 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          this->fields.openEffectId = 0;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v29, 0, 0) )
          {
            klass = (UnityEngine_Animation_o *)p_simpleAnimationData->klass;
            if ( !p_simpleAnimationData->klass )
              goto LABEL_48;
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)klass,
                                                   0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__DestroyImmediate_71163892(gameObject, 0);
            p_simpleAnimationData->klass = 0;
          }
          else
          {
            v34 = (UnityEngine_Object_o *)*p_animationData;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v34, 0, 0) )
              goto LABEL_44;
            klass = *p_animationData;
            if ( !*p_animationData )
              goto LABEL_48;
            v35 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__DestroyImmediate_71163892(v35, 0);
            p_simpleAnimationData = (CGThumbnailListItem_o *)&this->fields.animationData;
            *p_animationData = 0;
          }
          sub_1C2D434(p_simpleAnimationData, 0, v31, v32);
LABEL_44:
          klass = (UnityEngine_Animation_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( !klass )
            goto LABEL_48;
          MissionNotifyManager__CancelPause((MissionNotifyManager_o *)klass, 0);
          endCallback = this->fields.endCallback;
          p_endCallback = (CGThumbnailListItem_o *)&this->fields.endCallback;
          v39 = endCallback;
          if ( endCallback )
          {
            p_endCallback->klass = 0;
            sub_1C2D434(p_endCallback, 0, v36, v37);
            ((void (__fastcall *)(intptr_t, intptr_t))v39->fields.invoke_impl)(
              v39->fields.method_code,
              v39->fields.method);
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventDetailEntity, (int32_t)value, (int32_t)method, v3);
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
  UnityEngine_Object_o *Object_40288984; // x20
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
  struct TitleInfoEventTower_o *v22; // x20
  struct TitleInfoEventTower_o *v23; // x8
  System_String_o *EFFECT_ANIMATION_START_FORMAT; // x21
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct TitleInfoEventTower_o *v28; // x8
  UnityEngine_Object_o *animationData; // x20
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  struct TitleInfoEventTower_o *v33; // x20
  struct TitleInfoEventTower_o *v34; // x8
  System_String_o *v35; // x21
  Il2CppObject *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct TitleInfoEventTower_o *v39; // x8
  int32_t v40; // [xsp+8h] [xbp-38h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C25C7B & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C2D490(&UnityEngine_GameObject_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&TitleInfoEventTower_TypeInfo);
    byte_4C25C7B = 1;
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
  Component_object = System_String__Concat_63457864(OBJECT_NAME_EFFECT_BASE, v7, 0);
  if ( !effectAsset )
    goto LABEL_39;
  Object_40288984 = AssetData__GetObject_40288984(effectAsset, Component_object, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_40288984 )
    v9 = (UnityEngine_GameObject_c *)Object_40288984->klass == UnityEngine_GameObject_TypeInfo
       ? (Il2CppObject *)Object_40288984
       : 0LL;
  else
    v9 = 0;
  Component_object = (System_String_o *)UnityEngine_Object__Instantiate_object_(
                                          v9,
                                          (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_39;
  v11 = (UnityEngine_GameObject_o *)Component_object;
  GameObjectExtensions__SafeSetParent_35924288((UnityEngine_GameObject_o *)Component_object, v10->fields.effectRoot, 0);
  if ( !v11 )
    goto LABEL_39;
  v12 = this->fields.__4__this;
  Component_object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                          v11,
                                          (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !v12 )
    goto LABEL_39;
  v12->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
  sub_1C2D434((CGThumbnailListItem_o *)&v12->fields.simpleAnimationData, (int32_t)Component_object, v13, v14);
  v15 = this->fields.__4__this;
  Component_object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                          v11,
                                          (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !v15 )
    goto LABEL_39;
  v15->fields.animationData = (struct UnityEngine_Animation_o *)Component_object;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->fields.animationData, (int32_t)Component_object, v16, v17);
  v18 = this->fields.__4__this;
  if ( !v18 )
    goto LABEL_39;
  Component_object = (System_String_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)v18->fields.simpleAnimationData,
                                          0,
                                          0);
  v22 = this->fields.__4__this;
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    Component_object = (System_String_o *)TitleInfoEventTower_TypeInfo;
    v23 = this->fields.__4__this;
    if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
      v23 = this->fields.__4__this;
    }
    if ( v23 )
    {
      EFFECT_ANIMATION_START_FORMAT = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT;
      openEffectId = v23->fields.openEffectId;
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openEffectId, v19, v20, v21);
      Component_object = System_String__Format(EFFECT_ANIMATION_START_FORMAT, v25, 0);
      if ( v22 )
      {
        v22->fields.animationName = Component_object;
        sub_1C2D434((CGThumbnailListItem_o *)&v22->fields.animationName, (int32_t)Component_object, v26, v27);
        v28 = this->fields.__4__this;
        if ( v28 )
        {
          Component_object = (System_String_o *)v28->fields.simpleAnimationData;
          if ( Component_object )
          {
            SimpleAnimation__Play_66404364((SimpleAnimation_o *)Component_object, v28->fields.animationName, 0);
            return;
          }
        }
      }
    }
LABEL_39:
    sub_1C2D6EC(Component_object, method);
  }
  if ( !v22 )
    goto LABEL_39;
  animationData = (UnityEngine_Object_o *)v22->fields.animationData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animationData, 0, 0) )
  {
    Component_object = (System_String_o *)TitleInfoEventTower_TypeInfo;
    v33 = this->fields.__4__this;
    v34 = v33;
    if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
      v34 = this->fields.__4__this;
    }
    if ( !v34 )
      goto LABEL_39;
    v35 = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT;
    v40 = v34->fields.openEffectId;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v30, v31, v32);
    Component_object = System_String__Format(v35, v36, 0);
    if ( !v33 )
      goto LABEL_39;
    v33->fields.animationName = Component_object;
    sub_1C2D434((CGThumbnailListItem_o *)&v33->fields.animationName, (int32_t)Component_object, v37, v38);
    v39 = this->fields.__4__this;
    if ( !v39 )
      goto LABEL_39;
    Component_object = (System_String_o *)v39->fields.animationData;
    if ( !Component_object )
      goto LABEL_39;
    UnityEngine_Animation__Play_70908988((UnityEngine_Animation_o *)Component_object, v39->fields.animationName, 0);
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(0, method);
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
    sub_1C2D6EC(this, 0);
  return info->fields.EventId == this->fields.eventId;
}


bool TitleInfoEventTower___c__DisplayClass31_0___GetTowerShiftData_b__1(
        TitleInfoEventTower___c__DisplayClass31_0_o *this,
        TitleInfoEventTower_TowerShiftData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, 0);
  return info->fields.EventId == this->fields.eventId;
}


bool TitleInfoEventTower___c__DisplayClass33_0___GetTowerEffectData_b__1(
        TitleInfoEventTower___c__DisplayClass33_0_o *this,
        TitleInfoEventTower_TowerEffectData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C2D6EC(this, 0);
  return data->fields.EffectId == this->fields.effectId;
}