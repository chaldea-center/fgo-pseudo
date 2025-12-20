void TitleInfoEventTower___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct TitleInfoEventTower_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct TitleInfoEventTower_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4D2B1B0 & 1) == 0 )
  {
    sub_1C94098(&TitleInfoEventTower_TypeInfo);
    sub_1C94098(&StringLiteral_18998/*"ef_tower_change{0}_end"*/);
    sub_1C94098(&StringLiteral_18997/*"ef_tower_change"*/);
    sub_1C94098(&StringLiteral_18999/*"ef_tower_change{0}_start"*/);
    byte_4D2B1B0 = 1;
  }
  TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT = (struct System_String_o *)StringLiteral_18999/*"ef_tower_change{0}_start"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)TitleInfoEventTower_TypeInfo->static_fields,
    StringLiteral_18999/*"ef_tower_change{0}_start"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_18998/*"ef_tower_change{0}_end"*/;
  static_fields = TitleInfoEventTower_TypeInfo->static_fields;
  static_fields->EFFECT_ANIMATION_END_FORMAT = (struct System_String_o *)StringLiteral_18998/*"ef_tower_change{0}_end"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&static_fields->EFFECT_ANIMATION_END_FORMAT,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = StringLiteral_18997/*"ef_tower_change"*/;
  v16 = TitleInfoEventTower_TypeInfo->static_fields;
  v16->OBJECT_NAME_EFFECT_BASE = (struct System_String_o *)StringLiteral_18997/*"ef_tower_change"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v16->OBJECT_NAME_EFFECT_BASE, v15, v17, v18, v19, v20, v21, v22);
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  UnityEngine_Object_o *simpleAnimationData; // x20
  UnityEngine_Object_o *animationData; // x20

  if ( (byte_4D2B1A7 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2B1A7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_16:
    sub_1C942F0(gameObject, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.animationName = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.animationName, 0, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4D2B1AB & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2B1AB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0 )
  {
    sub_1C942F0(Instance, v7);
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

  if ( (byte_4D2B1AF & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___);
    sub_1C94098(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
    sub_1C94098(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
    sub_1C94098(&System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo);
    sub_1C94098(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__);
    sub_1C94098(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__);
    sub_1C94098(&TitleInfoEventTower___c__DisplayClass33_0_TypeInfo);
    byte_4D2B1AF = 1;
  }
  v7 = sub_1C942E4(TitleInfoEventTower___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C942F0(v8, v9);
  *(_DWORD *)(v7 + 16) = eventId;
  *(_DWORD *)(v7 + 20) = effectId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v11 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__,
    0);
  result = (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_object_(
                                                      towerEventInfoList,
                                                      (System_Func_T__bool__o *)v11,
                                                      (const MethodInfo_3186034 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v13 = *(System_Object_array **)&result->fields.FadeInTime;
    v14 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      (Il2CppObject *)v7,
      Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__,
      0);
    return (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_object_(
                                                      v13,
                                                      (System_Func_T__bool__o *)v14,
                                                      (const MethodInfo_3186034 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___);
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

  if ( (byte_4D2B1AD & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
    sub_1C94098(&Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___);
    sub_1C94098(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
    sub_1C94098(&System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo);
    sub_1C94098(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__);
    sub_1C94098(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__);
    sub_1C94098(&TitleInfoEventTower___c__DisplayClass31_0_TypeInfo);
    byte_4D2B1AD = 1;
  }
  v7 = sub_1C942E4(TitleInfoEventTower___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C942F0(v8, v9);
  *(_DWORD *)(v7 + 16) = eventId;
  *(_DWORD *)(v7 + 20) = towerId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v11 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__,
    0);
  result = (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_object_(
                                                     towerEventInfoList,
                                                     (System_Func_T__bool__o *)v11,
                                                     (const MethodInfo_3186034 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v13 = *(System_Object_array **)&result->fields.CondType;
    v14 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      (Il2CppObject *)v7,
      Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__,
      0);
    return (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_object_(
                                                     v13,
                                                     (System_Func_T__bool__o *)v14,
                                                     (const MethodInfo_3186034 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___);
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

  if ( (byte_4D2B1AC & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_EventUiMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventUiReleaseMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2B1AC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventUiMaster___);
  if ( !Master_object )
    goto LABEL_12;
  Entity = EventUiMaster__getEntity((EventUiMaster_o *)Master_object, eventId, towerId, 0);
  if ( !Entity )
    return (char)Entity;
  v9 = Entity;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
  if ( !Master_object )
LABEL_12:
    sub_1C942F0(Master_object, v7);
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

  if ( (byte_4D2B1AE & 1) == 0 )
  {
    sub_1C94098(&CondType_TypeInfo);
    byte_4D2B1AE = 1;
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

  if ( (byte_4D2B1AA & 1) == 0 )
  {
    this = (TitleInfoEventTower_o *)sub_1C94098(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4D2B1AA = 1;
  }
  QuestIdOnFirstFloorOfNextTower = TitleInfoEventTower__GetQuestIdOnFirstFloorOfNextTower(
                                     this,
                                     eventId,
                                     nowTowerId,
                                     method);
  if ( QuestIdOnFirstFloorOfNextTower < 1 )
    return 0;
  v7 = QuestIdOnFirstFloorOfNextTower;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v9);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  _QWORD *v18; // x28
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct EventDetailEntity_o *eventDetailEntity; // x8
  struct EventDetailEntity_o *v26; // x8
  int32_t eventId; // w19
  QuestGroupMaster_o *v28; // x25
  const MethodInfo *v29; // x3
  struct EventDetailEntity_o *v30; // x8
  int32_t v31; // w26
  int32_t v32; // w19
  TitleInfoEventTower_TowerShiftData_o *TowerShiftData; // x0
  const MethodInfo *v34; // x3
  TitleInfoEventTower_TowerShiftData_o *v35; // x26
  int ForceShiftTowerId; // w19
  EventRewardSaveData_c *v37; // x8
  struct EventRewardSaveData_StaticFields *v38; // x8
  struct EventDetailEntity_o *v39; // x8
  int32_t v40; // w25
  Il2CppObject *MasterData_object; // x27
  struct EventDetailEntity_o *v42; // x8
  _DWORD *v43; // x28
  int v44; // w9
  int32_t v45; // w2
  const MethodInfo *v46; // x2
  const MethodInfo *v47; // x3
  struct EventDetailEntity_o *v48; // x8
  bool IsDispEnabled; // w19
  Il2CppObject *v50; // x19
  int32_t j; // w25
  struct EventDetailEntity_o *v52; // x8
  int32_t Point; // w26
  const MethodInfo *v54; // x3
  struct EventDetailEntity_o *v55; // x8
  TitleInfoEventTower_TowerEffectData_o *TowerEffectData; // x0
  const MethodInfo *v57; // x3
  int v58; // w29
  int32_t v59; // w19
  struct System_Action_o *v60; // x21
  _QWORD *v61; // x24
  bool v62; // w23
  int32_t openEffectId; // w19
  int32_t v64; // w2
  __int64 v65; // x19
  const MethodInfo *v66; // x3
  struct EventDetailEntity_o *v67; // x8
  const MethodInfo *v68; // x3
  __int64 v69; // x22
  float v70; // s0
  System_Collections_IEnumerator_o *v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  Il2CppObject *Master_object; // x19
  struct EventDetailEntity_o *v79; // x8
  UnityEngine_Object_o *stamp; // x19
  bool v81; // w22
  UnityEngine_Object_o *v82; // x19
  struct EventDetailEntity_o *v83; // x9
  const MethodInfo *v84; // x3
  struct EventDetailEntity_o *v85; // x8
  const MethodInfo *v86; // x3
  char i; // w8
  struct EventRewardSaveData_StaticFields *static_fields; // x9
  int32_t EventTowerState_k__BackingField; // w19
  int32_t v90; // w8
  struct EventDetailEntity_o *v91; // x9
  int32_t v92; // w19
  int32_t v93; // w19
  struct EventDetailEntity_o *v94; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v98; // x2
  const MethodInfo *v99; // x2
  const MethodInfo *v100; // [xsp+0h] [xbp-B0h]
  struct System_Action_o *v101; // [xsp+10h] [xbp-A0h]
  bool v102; // [xsp+20h] [xbp-90h]
  int v103; // [xsp+24h] [xbp-8Ch]
  Il2CppObject *v104; // [xsp+28h] [xbp-88h] BYREF
  EventTowerEntity_o *entity; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2B1A5 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___);
    sub_1C94098(&Method_DataManager_GetMasterData_EventTowerMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C94098(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__);
    sub_1C94098(&TitleInfoEventTower___c__DisplayClass22_0_TypeInfo);
    byte_4D2B1A5 = 1;
  }
  entity = 0;
  v104 = 0;
  v9 = sub_1C942E4(TitleInfoEventTower___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_177;
  *(_QWORD *)(v9 + 16) = effectAsset;
  v18 = (_QWORD *)(v9 + 16);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)effectAsset, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)this, v19, v20, v21, v22, v23, v24);
  eventDetailEntity = this->fields.eventDetailEntity;
  if ( eventDetailEntity )
  {
    EventRewardSaveData__LoadEventTowerState(eventDetailEntity->fields.eventId, 0);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_177;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    v26 = this->fields.eventDetailEntity;
    if ( !v26 )
      goto LABEL_177;
    eventId = v26->fields.eventId;
    v28 = (QuestGroupMaster_o *)Instance;
    if ( !byte_4D26BB0 )
    {
      Instance = sub_1C94098(&EventRewardSaveData_TypeInfo);
      byte_4D26BB0 = 1;
    }
    if ( !v28 )
      goto LABEL_177;
    v102 = isFadeIn;
    Instance = QuestGroupMaster__GetEventTowerQuestId(
                 v28,
                 eventId,
                 EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField + 1,
                 1,
                 0);
    v30 = this->fields.eventDetailEntity;
    if ( !v30 )
      goto LABEL_177;
    v31 = v30->fields.eventId;
    v32 = Instance;
    if ( !byte_4D26BB0 )
    {
      sub_1C94098(&EventRewardSaveData_TypeInfo);
      byte_4D26BB0 = 1;
    }
    TowerShiftData = TitleInfoEventTower__GetTowerShiftData(
                       this,
                       v31,
                       EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
                       v29);
    v35 = TowerShiftData;
    if ( !byte_4D26BB0 )
    {
      TowerShiftData = (TitleInfoEventTower_TowerShiftData_o *)sub_1C94098(&EventRewardSaveData_TypeInfo);
      byte_4D26BB0 = 1;
    }
    if ( TitleInfoEventTower__IsForceShiftTower(
           (TitleInfoEventTower_o *)TowerShiftData,
           v35,
           EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
           v34) )
    {
      if ( *v18 )
      {
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !Instance )
          goto LABEL_177;
        MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
        if ( !v35 )
          goto LABEL_177;
        ForceShiftTowerId = v35->fields.ForceShiftTowerId;
        if ( !byte_4D26BAF )
        {
          Instance = sub_1C94098(&EventRewardSaveData_TypeInfo);
          byte_4D26BAF = 1;
        }
        v37 = EventRewardSaveData_TypeInfo;
        goto LABEL_22;
      }
      goto LABEL_40;
    }
    if ( v32 >= 1 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Instance )
        goto LABEL_177;
      Instance = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v32, -1, 0, 0);
      if ( (Instance & 1) != 0 )
      {
        if ( !byte_4D26BB0 )
        {
          Instance = sub_1C94098(&EventRewardSaveData_TypeInfo);
          byte_4D26BB0 = 1;
        }
        if ( !EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField )
        {
          for ( i = 1; ; i = byte_4D26BB0 )
          {
            if ( !i )
            {
              Instance = sub_1C94098(&EventRewardSaveData_TypeInfo);
              byte_4D26BB0 = 1;
            }
            static_fields = EventRewardSaveData_TypeInfo->static_fields;
            EventTowerState_k__BackingField = static_fields->_EventTowerState_k__BackingField;
            if ( !byte_4D26BAF )
            {
              Instance = sub_1C94098(&EventRewardSaveData_TypeInfo);
              byte_4D26BAF = 1;
              static_fields = EventRewardSaveData_TypeInfo->static_fields;
            }
            v90 = EventTowerState_k__BackingField + 1;
            static_fields->_EventTowerState_k__BackingField = EventTowerState_k__BackingField + 1;
            v91 = this->fields.eventDetailEntity;
            if ( !v91 )
              goto LABEL_177;
            v92 = v91->fields.eventId;
            if ( !byte_4D26BB0 )
            {
              sub_1C94098(&EventRewardSaveData_TypeInfo);
              byte_4D26BB0 = 1;
              v90 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
            }
            Instance = QuestGroupMaster__GetEventTowerQuestId(v28, v92, v90 + 1, 1, 0);
            if ( (int)Instance < 1 )
              break;
            v93 = Instance;
            Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            if ( !Instance )
              goto LABEL_177;
            Instance = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v93, -1, 0, 0);
            if ( (Instance & 1) == 0 )
              break;
          }
          v94 = this->fields.eventDetailEntity;
          if ( !v94 )
            goto LABEL_177;
          EventRewardSaveData__SaveEventTowerState(v94->fields.eventId, 0);
          v103 = 0;
LABEL_41:
          if ( !byte_4D26BB0 )
          {
            sub_1C94098(&EventRewardSaveData_TypeInfo);
            byte_4D26BB0 = 1;
          }
          v101 = callback;
          v40 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
          Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_177;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventTowerMaster___);
          Instance = sub_1C94140(int___TypeInfo, 2);
          v42 = this->fields.eventDetailEntity;
          if ( !v42 )
            goto LABEL_177;
          v43 = (_DWORD *)Instance;
          if ( !Instance )
            goto LABEL_177;
          v44 = *(_DWORD *)(Instance + 24);
          if ( v44 )
          {
            v45 = v42->fields.eventId;
            *(_DWORD *)(Instance + 32) = v45;
            if ( v44 != 1 )
            {
              *(_DWORD *)(Instance + 36) = v40;
              if ( !MasterData_object )
                goto LABEL_177;
              EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v45, v40, 0);
              TitleInfoEventTower__SetTowerPosition(this, v40, v46);
              if ( entity )
                this->fields.TowerFloorMax = entity->fields.topFloor;
              v48 = this->fields.eventDetailEntity;
              if ( !v48 )
                goto LABEL_177;
              IsDispEnabled = TitleInfoEventTower__IsDispEnabled(
                                (TitleInfoEventTower_o *)Instance,
                                v48->fields.eventId,
                                v40,
                                v47);
              Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              if ( !Instance )
                goto LABEL_177;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, IsDispEnabled, 0);
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_177;
              v50 = DataManager__GetMasterData_object_(
                      (DataManager_o *)Instance,
                      (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
              for ( j = v40 - 1; ; ++j )
              {
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                if ( !byte_4D2633A )
                {
                  sub_1C94098(&NetworkManager_TypeInfo);
                  byte_4D2633A = 1;
                }
                Instance = (__int64)NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  Instance = (__int64)NetworkManager_TypeInfo;
                }
                v52 = this->fields.eventDetailEntity;
                if ( !v52 || !v50 )
                  goto LABEL_177;
                Point = UserEventPointMaster__GetPoint(
                          (UserEventPointMaster_o *)v50,
                          *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                          v52->fields.eventId,
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
              if ( !v102 )
                goto LABEL_71;
              v55 = this->fields.eventDetailEntity;
              if ( !v55 )
                goto LABEL_177;
              TowerEffectData = TitleInfoEventTower__GetTowerEffectData(
                                  this,
                                  v55->fields.eventId,
                                  this->fields.openEffectId,
                                  v54);
              if ( TowerEffectData )
                TitleInfoEventTower__PlayFade(
                  this,
                  0.0,
                  1.0,
                  TowerEffectData->fields.FadeInTime,
                  TowerEffectData->fields.FadeInEasingType,
                  0,
                  v57);
              else
LABEL_71:
                TitleInfoEventTower__SetSpriteAlpha(this, 1.0, v11);
              v58 = 0;
              if ( j + 1 < 2 || Point )
              {
                ++j;
                v60 = v101;
                v61 = (_QWORD *)(v9 + 16);
                v62 = 0;
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
                                        (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
                  if ( !Instance )
                    goto LABEL_177;
                  TitleInfoEventTowerStamp__StampProgress(
                    (TitleInfoEventTowerStamp_o *)Instance,
                    Point,
                    j,
                    this->fields.spriteRoot,
                    0);
                  v81 = 1;
                }
                else
                {
LABEL_124:
                  v82 = (UnityEngine_Object_o *)this->fields.stamp;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( UnityEngine_Object__op_Inequality(v82, 0, 0) )
                  {
                    Instance = (__int64)this->fields.stamp;
                    if ( !Instance )
                      goto LABEL_177;
                    Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)Instance,
                                          (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
                    if ( !Instance )
                      goto LABEL_177;
                    TitleInfoEventTowerStamp__ResetStamp((TitleInfoEventTowerStamp_o *)Instance, 0);
                  }
                  v81 = 0;
                }
                Instance = (__int64)this->fields.floorSprite;
                if ( Instance )
                {
                  Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)Instance,
                                        (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___);
                  v83 = this->fields.eventDetailEntity;
                  if ( v83 )
                  {
                    if ( entity )
                    {
                      if ( Instance )
                      {
                        TitleInfoEventTowerFloorLabel__SetFloorLabel(
                          (TitleInfoEventTowerFloorLabel_o *)Instance,
                          v83->fields.eventId,
                          j,
                          this->fields.TowerFloorMax,
                          Point,
                          entity->fields.floorLabel,
                          v62,
                          v81,
                          v100);
                        Instance = (__int64)this->fields.nameSprite;
                        if ( Instance )
                        {
                          Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                                                (UnityEngine_Component_o *)Instance,
                                                (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___);
                          v85 = this->fields.eventDetailEntity;
                          if ( v85 )
                          {
                            if ( Instance )
                            {
                              TitleInfoEventTowerNameLabel__SetTowerNameLabel(
                                (TitleInfoEventTowerNameLabel_o *)Instance,
                                v85->fields.eventId,
                                j,
                                v84);
                              Instance = (__int64)this->fields.baseSprite;
                              if ( Instance )
                              {
                                Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)Instance,
                                                      (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___);
                                if ( Instance )
                                {
                                  TitleInfoEventTowerBase__SetBaseSprite(
                                    (TitleInfoEventTowerBase_o *)Instance,
                                    j,
                                    v81,
                                    v86);
                                  if ( (v103 & 1) != 0 || !*v61 )
                                  {
LABEL_144:
                                    if ( !this->fields.endCallback && v60 && v58 != 1 )
                                      ((void (__fastcall *)(intptr_t, intptr_t))v60->fields.invoke_impl)(
                                        v60->fields.method_code,
                                        v60->fields.method);
                                    return;
                                  }
                                  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
                sub_1C942F0(Instance, v11);
              }
              if ( entity )
              {
                if ( !byte_4D26BB0 )
                {
                  Instance = sub_1C94098(&EventRewardSaveData_TypeInfo);
                  byte_4D26BB0 = 1;
                }
                v59 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
                if ( v59 == j )
                {
                  if ( v43[6] > 1u )
                  {
                    v43[9] = v59;
                    Point = this->fields.TowerFloorMax;
                    EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v43[8], v59, 0);
                    v58 = 0;
                    j = v59;
LABEL_113:
                    v60 = v101;
                    v61 = (_QWORD *)(v9 + 16);
LABEL_114:
                    Instance = (__int64)entity;
                    if ( !entity )
                      goto LABEL_177;
                    v62 = !EventTowerEntity__HasFlag(entity, 1, 0);
                    goto LABEL_116;
                  }
                }
                else
                {
                  if ( !v103 )
                  {
                    v58 = 0;
                    Point = 0;
                    ++j;
                    goto LABEL_113;
                  }
                  if ( v43[6] >= 2u )
                  {
                    Point = this->fields.TowerFloorMax;
                    Instance = EventTowerMaster__TryGetEntity(
                                 (EventTowerMaster_o *)MasterData_object,
                                 &entity,
                                 v43[8],
                                 v43[9],
                                 0);
                    if ( !entity )
                      goto LABEL_177;
                    openEffectId = entity->fields.openEffectId;
                    this->fields.openEffectId = openEffectId;
                    if ( v43[6] > 1u )
                    {
                      v64 = v43[8];
                      v43[9] = j;
                      EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v64, j, 0);
                      if ( openEffectId )
                      {
                        v65 = sub_1C942E4(System_Action_TypeInfo);
                        System_Action___ctor(
                          (System_Action_o *)v65,
                          (Il2CppObject *)v9,
                          Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__,
                          0);
                        v67 = this->fields.eventDetailEntity;
                        v60 = v101;
                        v61 = (_QWORD *)(v9 + 16);
                        if ( !v67 )
                          goto LABEL_177;
                        Instance = (__int64)TitleInfoEventTower__GetTowerEffectData(
                                              this,
                                              v67->fields.eventId,
                                              this->fields.openEffectId,
                                              v66);
                        if ( Instance )
                        {
                          v69 = Instance;
                          TitleInfoEventTower__PlayFade(
                            this,
                            1.0,
                            0.0,
                            *(float *)(Instance + 20),
                            *(_DWORD *)(Instance + 24),
                            0,
                            v68);
                          v70 = *(float *)(v69 + 28);
                          if ( v70 <= 0.0 )
                          {
                            if ( !v65 )
                              goto LABEL_177;
                            (*(void (__fastcall **)(_QWORD, _QWORD))(v65 + 24))(
                              *(_QWORD *)(v65 + 64),
                              *(_QWORD *)(v65 + 40));
                          }
                          else
                          {
                            v71 = BasicHelper__DelayCall(v70, (System_Action_o *)v65, 1, 0);
                            UnityEngine_MonoBehaviour__StartCoroutine_72096164(
                              (UnityEngine_MonoBehaviour_o *)this,
                              v71,
                              0);
                          }
                        }
                        else
                        {
                          if ( !v65 )
                            goto LABEL_177;
                          (*(void (__fastcall **)(_QWORD, _QWORD))(v65 + 24))(
                            *(_QWORD *)(v65 + 64),
                            *(_QWORD *)(v65 + 40));
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
                        this->fields.endCallback = v101;
                        sub_1C9403C(
                          (GrandQuestFolderBoardItem_o *)&this->fields.endCallback,
                          (int32_t)v101,
                          v72,
                          v73,
                          v74,
                          v75,
                          v76,
                          v77);
                        v58 = 0;
                      }
                      else
                      {
                        Instance = (__int64)entity;
                        v60 = v101;
                        v61 = (_QWORD *)(v9 + 16);
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
                          TitleInfoEventTower__SetTowerPosition(this, j, v98);
                          Instance = (__int64)this->fields.spriteRoot;
                          if ( !Instance )
                            goto LABEL_177;
                          Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                                                (UnityEngine_Component_o *)Instance,
                                                (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___);
                          if ( !Instance )
                            goto LABEL_177;
                          v107.fields.x = x;
                          v107.fields.y = y;
                          v107.fields.z = z;
                          TitleInfoEventTowerSlideAnimation__StartSlideAnim(
                            (TitleInfoEventTowerSlideAnimation_o *)Instance,
                            v101,
                            v107,
                            v99);
                        }
                        v58 = 1;
                      }
                      goto LABEL_114;
                    }
                  }
                }
              }
              else if ( v43[6] > 1u )
              {
                v43[9] = j;
                Point = this->fields.TowerFloorMax;
                EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v43[8], j, 0);
                v58 = 0;
                goto LABEL_113;
              }
            }
          }
          sub_1C942F8(Instance);
        }
        if ( *v18 )
        {
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( !Instance )
            goto LABEL_177;
          MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
          if ( !byte_4D26BB0 )
          {
            Instance = sub_1C94098(&EventRewardSaveData_TypeInfo);
            byte_4D26BB0 = 1;
          }
          v38 = EventRewardSaveData_TypeInfo->static_fields;
          ForceShiftTowerId = v38->_EventTowerState_k__BackingField + 1;
          if ( byte_4D26BAF )
            goto LABEL_23;
          Instance = sub_1C94098(&EventRewardSaveData_TypeInfo);
          v37 = EventRewardSaveData_TypeInfo;
          byte_4D26BAF = 1;
LABEL_22:
          v38 = v37->static_fields;
LABEL_23:
          v38->_EventTowerState_k__BackingField = ForceShiftTowerId;
          v39 = this->fields.eventDetailEntity;
          if ( !v39 )
            goto LABEL_177;
          EventRewardSaveData__SaveEventTowerState(v39->fields.eventId, 0);
          v103 = 1;
          goto LABEL_41;
        }
LABEL_40:
        v103 = 0;
        goto LABEL_41;
      }
    }
    if ( !byte_4D26BB0 )
    {
      sub_1C94098(&EventRewardSaveData_TypeInfo);
      byte_4D26BB0 = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D26A98 )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D26A98 = 1;
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
                 &v104,
                 *(_DWORD *)(*(_QWORD *)(Instance + 184) + 4LL),
                 (const MethodInfo_345B50C *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    if ( (Instance & 1) != 0 )
    {
      v79 = this->fields.eventDetailEntity;
      if ( !v79 || !v104 )
        goto LABEL_177;
      if ( v79->fields.eventId == LODWORD(v104[6].klass) )
      {
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  const MethodInfo *v28; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  EasingObject_o *v37; // x21
  System_Action_o *v38; // x22
  System_Action_o *v39; // x23

  if ( (byte_4D2B1A9 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C94098(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__);
    sub_1C94098(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__);
    sub_1C94098(&TitleInfoEventTower___c__DisplayClass26_0_TypeInfo);
    byte_4D2B1A9 = 1;
  }
  v13 = sub_1C942E4(TitleInfoEventTower___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_6;
  *(float *)(v13 + 24) = from;
  *(float *)(v13 + 28) = to;
  *(_QWORD *)(v13 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 32), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 40) = endAction;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 40), (int32_t)endAction, v22, v23, v24, v25, v26, v27);
  TitleInfoEventTower__SetSpriteAlpha(this, *(float *)(v13 + 24), v28);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_31F6278 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v13 + 16) = Component_object;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v13 + 16), (int32_t)Component_object, v31, v32, v33, v34, v35, v36);
  v37 = *(EasingObject_o **)(v13 + 16);
  v38 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)v13, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__, 0);
  v39 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v39, (Il2CppObject *)v13, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__, 0);
  if ( !v37 )
LABEL_6:
    sub_1C942F0(v14, v15);
  EasingObject__Play(v37, time, v38, v39, 0.0, easingType, 0);
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
    sub_1C942F0(baseSprite, method);
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

  if ( (byte_4D2B1A6 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EventUiMaster___);
    sub_1C94098(&EventUiEntity_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2B1A6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventUiMaster___);
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
        sub_1C942F0(Instance, v6);
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
  UnityEngine_Object_o *simpleAnimationData; // x21
  TitleInfoEventTower_c *v9; // x0
  System_String_o *EFFECT_ANIMATION_START_FORMAT; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x22
  System_String_o *EFFECT_ANIMATION_END_FORMAT; // x21
  Il2CppObject *v14; // x0
  struct System_String_o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  UnityEngine_Object_o *v22; // x21
  const MethodInfo *v23; // x4
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  GrandQuestFolderBoardItem_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *v31; // x21
  UnityEngine_Object_o *gameObject; // x21
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  UnityEngine_Object_o *v39; // x21
  UnityEngine_Object_o *v40; // x20
  UnityEngine_Object_o *v41; // x20
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  GrandQuestFolderBoardItem_o *p_endCallback; // x19
  struct System_Action_o *v49; // x20
  struct System_Action_o *endCallback; // t1
  int32_t v51; // [xsp+8h] [xbp-48h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2B1A8 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C94098(&TitleInfoEventTower_TypeInfo);
    byte_4D2B1A8 = 1;
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
        v9 = TitleInfoEventTower_TypeInfo;
        if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
          v9 = TitleInfoEventTower_TypeInfo;
        }
        EFFECT_ANIMATION_START_FORMAT = v9->static_fields->EFFECT_ANIMATION_START_FORMAT;
        openEffectId = this->fields.openEffectId;
        v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openEffectId);
        v12 = System_String__Format(EFFECT_ANIMATION_START_FORMAT, v11, 0);
        EFFECT_ANIMATION_END_FORMAT = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_END_FORMAT;
        v51 = this->fields.openEffectId;
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
        v15 = System_String__Format(EFFECT_ANIMATION_END_FORMAT, v14, 0);
        if ( System_String__op_Equality(this->fields.animationName, v12, 0) )
        {
          this->fields.animationName = v15;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&this->fields.animationName,
            (int32_t)v15,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21);
          v22 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v22, 0, 0) )
          {
            klass = (UnityEngine_Animation_o *)this->fields.simpleAnimationData;
            if ( klass )
            {
              SimpleAnimation__Play_67362784((SimpleAnimation_o *)klass, *p_animationName, 0);
LABEL_35:
              TitleInfoEventTower__Open(this, 0, 0, 1, v23);
              return;
            }
          }
          else
          {
            v39 = (UnityEngine_Object_o *)*p_animationData;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v39, 0, 0) )
              goto LABEL_35;
            klass = *p_animationData;
            if ( *p_animationData )
            {
              UnityEngine_Animation__Play_71854448(klass, *p_animationName, 0);
              goto LABEL_35;
            }
          }
LABEL_48:
          sub_1C942F0(klass, v6);
        }
        if ( System_String__op_Equality(*p_animationName, v15, 0) )
        {
          this->fields.animationName = 0;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.animationName, 0, v24, v25, v26, v27, v28, v29);
          p_simpleAnimationData = (GrandQuestFolderBoardItem_o *)&this->fields.simpleAnimationData;
          v31 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          this->fields.openEffectId = 0;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v31, 0, 0) )
          {
            klass = (UnityEngine_Animation_o *)p_simpleAnimationData->klass;
            if ( !p_simpleAnimationData->klass )
              goto LABEL_48;
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)klass,
                                                   0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__DestroyImmediate_72111160(gameObject, 0);
            p_simpleAnimationData->klass = 0;
          }
          else
          {
            v40 = (UnityEngine_Object_o *)*p_animationData;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v40, 0, 0) )
              goto LABEL_44;
            klass = *p_animationData;
            if ( !*p_animationData )
              goto LABEL_48;
            v41 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__DestroyImmediate_72111160(v41, 0);
            p_simpleAnimationData = (GrandQuestFolderBoardItem_o *)&this->fields.animationData;
            *p_animationData = 0;
          }
          sub_1C9403C(p_simpleAnimationData, 0, v33, v34, v35, v36, v37, v38);
LABEL_44:
          klass = (UnityEngine_Animation_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( !klass )
            goto LABEL_48;
          MissionNotifyManager__CancelPause((MissionNotifyManager_o *)klass, 0);
          endCallback = this->fields.endCallback;
          p_endCallback = (GrandQuestFolderBoardItem_o *)&this->fields.endCallback;
          v49 = endCallback;
          if ( endCallback )
          {
            p_endCallback->klass = 0;
            sub_1C9403C(p_endCallback, 0, v42, v43, v44, v45, v46, v47);
            ((void (__fastcall *)(intptr_t, intptr_t))v49->fields.invoke_impl)(
              v49->fields.method_code,
              v49->fields.method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.eventDetailEntity = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventDetailEntity,
    (int32_t)value,
    (int32_t)method,
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
  System_String_o *Component_object; // x0
  AssetData_o *effectAsset; // x20
  struct TitleInfoEventTower_o *_4__this; // x8
  System_String_o *OBJECT_NAME_EFFECT_BASE; // x21
  System_String_o *v7; // x0
  UnityEngine_Object_o *Object_41261192; // x20
  Il2CppObject *v9; // x0
  struct TitleInfoEventTower_o *v10; // x8
  UnityEngine_GameObject_o *v11; // x20
  struct TitleInfoEventTower_o *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct TitleInfoEventTower_o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct TitleInfoEventTower_o *v26; // x8
  struct TitleInfoEventTower_o *v27; // x20
  struct TitleInfoEventTower_o *v28; // x8
  System_String_o *EFFECT_ANIMATION_START_FORMAT; // x21
  Il2CppObject *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  struct TitleInfoEventTower_o *v37; // x8
  UnityEngine_Object_o *animationData; // x20
  struct TitleInfoEventTower_o *v39; // x20
  struct TitleInfoEventTower_o *v40; // x8
  System_String_o *v41; // x21
  Il2CppObject *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  struct TitleInfoEventTower_o *v49; // x8
  int32_t v50; // [xsp+8h] [xbp-38h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2B1B1 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C94098(&UnityEngine_GameObject_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&TitleInfoEventTower_TypeInfo);
    byte_4D2B1B1 = 1;
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
  Component_object = System_String__Concat_64417744(OBJECT_NAME_EFFECT_BASE, v7, 0);
  if ( !effectAsset )
    goto LABEL_39;
  Object_41261192 = AssetData__GetObject_41261192(effectAsset, Component_object, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_41261192 )
    v9 = (UnityEngine_GameObject_c *)Object_41261192->klass == UnityEngine_GameObject_TypeInfo
       ? (Il2CppObject *)Object_41261192
       : 0LL;
  else
    v9 = 0;
  Component_object = (System_String_o *)UnityEngine_Object__Instantiate_object_(
                                          v9,
                                          (const MethodInfo_3229578 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_39;
  v11 = (UnityEngine_GameObject_o *)Component_object;
  GameObjectExtensions__SafeSetParent_36804604((UnityEngine_GameObject_o *)Component_object, v10->fields.effectRoot, 0);
  if ( !v11 )
    goto LABEL_39;
  v12 = this->fields.__4__this;
  Component_object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                          v11,
                                          (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !v12 )
    goto LABEL_39;
  v12->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v12->fields.simpleAnimationData,
    (int32_t)Component_object,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = this->fields.__4__this;
  Component_object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                          v11,
                                          (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !v19 )
    goto LABEL_39;
  v19->fields.animationData = (struct UnityEngine_Animation_o *)Component_object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v19->fields.animationData,
    (int32_t)Component_object,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_39;
  Component_object = (System_String_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)v26->fields.simpleAnimationData,
                                          0,
                                          0);
  v27 = this->fields.__4__this;
  if ( ((unsigned __int8)Component_object & 1) != 0 )
  {
    Component_object = (System_String_o *)TitleInfoEventTower_TypeInfo;
    v28 = this->fields.__4__this;
    if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
      v28 = this->fields.__4__this;
    }
    if ( v28 )
    {
      EFFECT_ANIMATION_START_FORMAT = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT;
      openEffectId = v28->fields.openEffectId;
      v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openEffectId);
      Component_object = System_String__Format(EFFECT_ANIMATION_START_FORMAT, v30, 0);
      if ( v27 )
      {
        v27->fields.animationName = Component_object;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v27->fields.animationName,
          (int32_t)Component_object,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
        v37 = this->fields.__4__this;
        if ( v37 )
        {
          Component_object = (System_String_o *)v37->fields.simpleAnimationData;
          if ( Component_object )
          {
            SimpleAnimation__Play_67362784((SimpleAnimation_o *)Component_object, v37->fields.animationName, 0);
            return;
          }
        }
      }
    }
LABEL_39:
    sub_1C942F0(Component_object, method);
  }
  if ( !v27 )
    goto LABEL_39;
  animationData = (UnityEngine_Object_o *)v27->fields.animationData;
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
    v50 = v40->fields.openEffectId;
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
    Component_object = System_String__Format(v41, v42, 0);
    if ( !v39 )
      goto LABEL_39;
    v39->fields.animationName = Component_object;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&v39->fields.animationName,
      (int32_t)Component_object,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
    v49 = this->fields.__4__this;
    if ( !v49 )
      goto LABEL_39;
    Component_object = (System_String_o *)v49->fields.animationData;
    if ( !Component_object )
      goto LABEL_39;
    UnityEngine_Animation__Play_71854448((UnityEngine_Animation_o *)Component_object, v49->fields.animationName, 0);
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
    sub_1C942F0(this, method);
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
    sub_1C942F0(0, method);
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
    sub_1C942F0(this, 0);
  return info->fields.EventId == this->fields.eventId;
}


bool TitleInfoEventTower___c__DisplayClass31_0___GetTowerShiftData_b__1(
        TitleInfoEventTower___c__DisplayClass31_0_o *this,
        TitleInfoEventTower_TowerShiftData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
  return info->fields.EventId == this->fields.eventId;
}


bool TitleInfoEventTower___c__DisplayClass33_0___GetTowerEffectData_b__1(
        TitleInfoEventTower___c__DisplayClass33_0_o *this,
        TitleInfoEventTower_TowerEffectData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C942F0(this, 0);
  return data->fields.EffectId == this->fields.effectId;
}