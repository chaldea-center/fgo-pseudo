void __fastcall TitleInfoEventTower___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  struct TitleInfoEventTower_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct TitleInfoEventTower_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4A4CF03 & 1) == 0 )
  {
    sub_1B863B8(&TitleInfoEventTower_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_18633/*"ef_tower_change{0}_end"*/, v4);
    sub_1B863B8(&StringLiteral_18632/*"ef_tower_change"*/, v5);
    sub_1B863B8(&StringLiteral_18634/*"ef_tower_change{0}_start"*/, v6);
    byte_4A4CF03 = 1;
  }
  TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT = (struct System_String_o *)StringLiteral_18634/*"ef_tower_change{0}_start"*/;
  sub_1B8635C((CGThumbnailListItem_o *)TitleInfoEventTower_TypeInfo->static_fields, StringLiteral_18634/*"ef_tower_change{0}_start"*/, v2, v3);
  v7 = StringLiteral_18633/*"ef_tower_change{0}_end"*/;
  static_fields = TitleInfoEventTower_TypeInfo->static_fields;
  static_fields->EFFECT_ANIMATION_END_FORMAT = (struct System_String_o *)StringLiteral_18633/*"ef_tower_change{0}_end"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->EFFECT_ANIMATION_END_FORMAT, v7, v9, v10);
  v11 = StringLiteral_18632/*"ef_tower_change"*/;
  v12 = TitleInfoEventTower_TypeInfo->static_fields;
  v12->OBJECT_NAME_EFFECT_BASE = (struct System_String_o *)StringLiteral_18632/*"ef_tower_change"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v12->OBJECT_NAME_EFFECT_BASE, v11, v13, v14);
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
  const MethodInfo *v6; // x3
  UnityEngine_Object_o *simpleAnimationData; // x20
  UnityEngine_Object_o *animationData; // x20

  if ( (byte_4A4CEFA & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4CEFA = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_16:
    sub_1B86614(gameObject, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.animationName = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.animationName, 0, v5, v6);
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

  if ( (byte_4A4CEFE & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A4CEFE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_1B86614(Instance, v8);
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

  if ( (byte_4A4CF02 & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___, v7);
    sub_1B863B8(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo, v8);
    sub_1B863B8(&System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo, v9);
    sub_1B863B8(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__, v10);
    sub_1B863B8(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__, v11);
    sub_1B863B8(&TitleInfoEventTower___c__DisplayClass33_0_TypeInfo, v12);
    byte_4A4CF02 = 1;
  }
  v13 = sub_1B86604(TitleInfoEventTower___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1B86614(v14, v15);
  *(_DWORD *)(v13 + 16) = eventId;
  *(_DWORD *)(v13 + 20) = effectId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v17 = (System_Func_object__bool__o *)sub_1B86604(System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v13,
    Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__,
    0LL);
  result = (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_object_(
                                                      towerEventInfoList,
                                                      (System_Func_T__bool__o *)v17,
                                                      (const MethodInfo_2F58880 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v19 = *(System_Object_array **)&result->fields.FadeInTime;
    v20 = (System_Func_object__bool__o *)sub_1B86604(System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v20,
      (Il2CppObject *)v13,
      Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__,
      0LL);
    return (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_object_(
                                                      v19,
                                                      (System_Func_T__bool__o *)v20,
                                                      (const MethodInfo_2F58880 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___);
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

  if ( (byte_4A4CF00 & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___, v7);
    sub_1B863B8(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo, v8);
    sub_1B863B8(&System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo, v9);
    sub_1B863B8(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__, v10);
    sub_1B863B8(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__, v11);
    sub_1B863B8(&TitleInfoEventTower___c__DisplayClass31_0_TypeInfo, v12);
    byte_4A4CF00 = 1;
  }
  v13 = sub_1B86604(TitleInfoEventTower___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1B86614(v14, v15);
  *(_DWORD *)(v13 + 16) = eventId;
  *(_DWORD *)(v13 + 20) = towerId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v17 = (System_Func_object__bool__o *)sub_1B86604(System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v13,
    Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__,
    0LL);
  result = (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_object_(
                                                     towerEventInfoList,
                                                     (System_Func_T__bool__o *)v17,
                                                     (const MethodInfo_2F58880 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v19 = *(System_Object_array **)&result->fields.CondType;
    v20 = (System_Func_object__bool__o *)sub_1B86604(System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v20,
      (Il2CppObject *)v13,
      Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__,
      0LL);
    return (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_object_(
                                                     v19,
                                                     (System_Func_T__bool__o *)v20,
                                                     (const MethodInfo_2F58880 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___);
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

  if ( (byte_4A4CEFF & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_EventUiMaster___, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_DataManager_GetMaster_EventUiReleaseMaster___, v6);
    sub_1B863B8(&DataManager_TypeInfo, v7);
    byte_4A4CEFF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventUiMaster___);
  if ( !Master_object )
    goto LABEL_12;
  Entity = EventUiMaster__getEntity((EventUiMaster_o *)Master_object, eventId, towerId, 0LL);
  if ( !Entity )
    return (char)Entity;
  v11 = Entity;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
  if ( !Master_object )
LABEL_12:
    sub_1B86614(Master_object, v9);
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

  if ( (byte_4A4CF01 & 1) == 0 )
  {
    sub_1B863B8(&CondType_TypeInfo, towerShiftData);
    byte_4A4CF01 = 1;
  }
  if ( !towerShiftData || towerShiftData->fields.TowerId != nowTowerId )
    return 0;
  CondType = towerShiftData->fields.CondType;
  CondTargetId = towerShiftData->fields.CondTargetId;
  CondValue = towerShiftData->fields.CondValue;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
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

  if ( (byte_4A4CEFD & 1) == 0 )
  {
    this = (TitleInfoEventTower_o *)sub_1B863B8(
                                      &Method_SingletonTemplate_clsQuestCheck__get_Instance__,
                                      *(_QWORD *)&eventId);
    byte_4A4CEFD = 1;
  }
  QuestIdOnFirstFloorOfNextTower = TitleInfoEventTower__GetQuestIdOnFirstFloorOfNextTower(
                                     this,
                                     eventId,
                                     nowTowerId,
                                     method);
  if ( QuestIdOnFirstFloorOfNextTower < 1 )
    return 0;
  v7 = QuestIdOnFirstFloorOfNextTower;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v9);
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
  __int64 Instance; // x0
  const MethodInfo *v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  _QWORD *v34; // x28
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct EventDetailEntity_o *eventDetailEntity; // x8
  struct EventDetailEntity_o *v38; // x8
  int32_t eventId; // w19
  QuestGroupMaster_o *v40; // x25
  const MethodInfo *v41; // x3
  struct EventDetailEntity_o *v42; // x8
  int32_t v43; // w26
  int32_t v44; // w19
  TitleInfoEventTower_o *TowerShiftData; // x0
  __int64 v46; // x1
  const MethodInfo *v47; // x3
  TitleInfoEventTower_TowerShiftData_o *v48; // x26
  int ForceShiftTowerId; // w19
  EventRewardSaveData_c *v50; // x8
  struct EventRewardSaveData_StaticFields *v51; // x8
  struct EventDetailEntity_o *v52; // x8
  int32_t v53; // w25
  Il2CppObject *MasterData_object; // x27
  struct EventDetailEntity_o *v55; // x8
  _DWORD *v56; // x28
  int v57; // w9
  int32_t v58; // w2
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x3
  struct EventDetailEntity_o *v61; // x8
  bool IsDispEnabled; // w19
  Il2CppObject *v63; // x19
  int32_t j; // w25
  struct EventDetailEntity_o *v65; // x8
  int32_t Point; // w26
  const MethodInfo *v67; // x3
  struct EventDetailEntity_o *v68; // x8
  TitleInfoEventTower_TowerEffectData_o *TowerEffectData; // x0
  const MethodInfo *v70; // x3
  int v71; // w29
  int32_t v72; // w19
  struct System_Action_o *v73; // x21
  _QWORD *v74; // x24
  bool v75; // w23
  int32_t openEffectId; // w19
  int32_t v77; // w2
  __int64 v78; // x19
  const MethodInfo *v79; // x3
  struct EventDetailEntity_o *v80; // x8
  const MethodInfo *v81; // x3
  __int64 v82; // x22
  float v83; // s0
  System_Collections_IEnumerator_o *v84; // x0
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  Il2CppObject *Master_object; // x19
  struct EventDetailEntity_o *v88; // x8
  UnityEngine_Object_o *stamp; // x19
  const MethodInfo *v90; // x4
  bool v91; // w22
  UnityEngine_Object_o *v92; // x19
  struct EventDetailEntity_o *v93; // x9
  const MethodInfo *v94; // x3
  struct EventDetailEntity_o *v95; // x8
  const MethodInfo *v96; // x3
  char i; // w8
  struct EventRewardSaveData_StaticFields *static_fields; // x9
  int32_t EventTowerState_k__BackingField; // w19
  int32_t v100; // w8
  struct EventDetailEntity_o *v101; // x9
  int32_t v102; // w19
  int32_t v103; // w19
  struct EventDetailEntity_o *v104; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v108; // x2
  const MethodInfo *v109; // x2
  const MethodInfo *v110; // [xsp+0h] [xbp-B0h]
  struct System_Action_o *v111; // [xsp+10h] [xbp-A0h]
  bool v112; // [xsp+20h] [xbp-90h]
  int v113; // [xsp+24h] [xbp-8Ch]
  Il2CppObject *v114; // [xsp+28h] [xbp-88h] BYREF
  EventTowerEntity_o *entity; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A4CEF8 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, callback);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___, v9);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___, v10);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___, v11);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___, v12);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventTowerMaster___, v13);
    sub_1B863B8(&Method_DataManager_GetMasterData_QuestGroupMaster___, v14);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserEventPointMaster___, v15);
    sub_1B863B8(&Method_DataManager_GetMaster_WarMaster___, v16);
    sub_1B863B8(&DataManager_TypeInfo, v17);
    sub_1B863B8(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v18);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___, v19);
    sub_1B863B8(&int___TypeInfo, v20);
    sub_1B863B8(&NetworkManager_TypeInfo, v21);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v22);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1B863B8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v24);
    sub_1B863B8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v25);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v26);
    sub_1B863B8(&Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__, v27);
    sub_1B863B8(&TitleInfoEventTower___c__DisplayClass22_0_TypeInfo, v28);
    byte_4A4CEF8 = 1;
  }
  entity = 0LL;
  v114 = 0LL;
  v29 = sub_1B86604(TitleInfoEventTower___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( !v29 )
    goto LABEL_177;
  *(_QWORD *)(v29 + 16) = effectAsset;
  v34 = (_QWORD *)(v29 + 16);
  sub_1B8635C((CGThumbnailListItem_o *)(v29 + 16), (int32_t)effectAsset, v32, v33);
  *(_QWORD *)(v29 + 24) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v29 + 24), (int32_t)this, v35, v36);
  eventDetailEntity = this->fields.eventDetailEntity;
  if ( eventDetailEntity )
  {
    EventRewardSaveData__LoadEventTowerState(eventDetailEntity->fields.eventId, 0LL);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_177;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    v38 = this->fields.eventDetailEntity;
    if ( !v38 )
      goto LABEL_177;
    eventId = v38->fields.eventId;
    v40 = (QuestGroupMaster_o *)Instance;
    if ( !byte_4A4CF54 )
    {
      Instance = sub_1B863B8(&EventRewardSaveData_TypeInfo, v31);
      byte_4A4CF54 = 1;
    }
    if ( !v40 )
      goto LABEL_177;
    v112 = isFadeIn;
    Instance = QuestGroupMaster__GetEventTowerQuestId(
                 v40,
                 eventId,
                 EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField + 1,
                 1,
                 0LL);
    v42 = this->fields.eventDetailEntity;
    if ( !v42 )
      goto LABEL_177;
    v43 = v42->fields.eventId;
    v44 = Instance;
    if ( !byte_4A4CF54 )
    {
      sub_1B863B8(&EventRewardSaveData_TypeInfo, v31);
      byte_4A4CF54 = 1;
    }
    TowerShiftData = (TitleInfoEventTower_o *)TitleInfoEventTower__GetTowerShiftData(
                                                this,
                                                v43,
                                                EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
                                                v41);
    v48 = (TitleInfoEventTower_TowerShiftData_o *)TowerShiftData;
    if ( !byte_4A4CF54 )
    {
      TowerShiftData = (TitleInfoEventTower_o *)sub_1B863B8(&EventRewardSaveData_TypeInfo, v46);
      byte_4A4CF54 = 1;
    }
    if ( TitleInfoEventTower__IsForceShiftTower(
           TowerShiftData,
           v48,
           EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
           v47) )
    {
      if ( *v34 )
      {
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !Instance )
          goto LABEL_177;
        MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
        if ( !v48 )
          goto LABEL_177;
        ForceShiftTowerId = v48->fields.ForceShiftTowerId;
        if ( !byte_4A4CF55 )
        {
          Instance = sub_1B863B8(&EventRewardSaveData_TypeInfo, v31);
          byte_4A4CF55 = 1;
        }
        v50 = EventRewardSaveData_TypeInfo;
        goto LABEL_22;
      }
      goto LABEL_40;
    }
    if ( v44 >= 1 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Instance )
        goto LABEL_177;
      Instance = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v44, -1, 0, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !byte_4A4CF54 )
        {
          Instance = sub_1B863B8(&EventRewardSaveData_TypeInfo, v31);
          byte_4A4CF54 = 1;
        }
        if ( !EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField )
        {
          for ( i = 1; ; i = byte_4A4CF54 )
          {
            if ( !i )
            {
              Instance = sub_1B863B8(&EventRewardSaveData_TypeInfo, v31);
              byte_4A4CF54 = 1;
            }
            static_fields = EventRewardSaveData_TypeInfo->static_fields;
            EventTowerState_k__BackingField = static_fields->_EventTowerState_k__BackingField;
            if ( !byte_4A4CF55 )
            {
              Instance = sub_1B863B8(&EventRewardSaveData_TypeInfo, v31);
              byte_4A4CF55 = 1;
              static_fields = EventRewardSaveData_TypeInfo->static_fields;
            }
            v100 = EventTowerState_k__BackingField + 1;
            static_fields->_EventTowerState_k__BackingField = EventTowerState_k__BackingField + 1;
            v101 = this->fields.eventDetailEntity;
            if ( !v101 )
              goto LABEL_177;
            v102 = v101->fields.eventId;
            if ( !byte_4A4CF54 )
            {
              sub_1B863B8(&EventRewardSaveData_TypeInfo, v31);
              byte_4A4CF54 = 1;
              v100 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
            }
            Instance = QuestGroupMaster__GetEventTowerQuestId(v40, v102, v100 + 1, 1, 0LL);
            if ( (int)Instance < 1 )
              break;
            v103 = Instance;
            Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            if ( !Instance )
              goto LABEL_177;
            Instance = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v103, -1, 0, 0LL);
            if ( (Instance & 1) == 0 )
              break;
          }
          v104 = this->fields.eventDetailEntity;
          if ( !v104 )
            goto LABEL_177;
          EventRewardSaveData__SaveEventTowerState(v104->fields.eventId, 0LL);
          v113 = 0;
LABEL_41:
          if ( !byte_4A4CF54 )
          {
            sub_1B863B8(&EventRewardSaveData_TypeInfo, v31);
            byte_4A4CF54 = 1;
          }
          v111 = callback;
          v53 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
          Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_177;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventTowerMaster___);
          Instance = sub_1B86460(int___TypeInfo, 2LL);
          v55 = this->fields.eventDetailEntity;
          if ( !v55 )
            goto LABEL_177;
          v56 = (_DWORD *)Instance;
          if ( !Instance )
            goto LABEL_177;
          v57 = *(_DWORD *)(Instance + 24);
          if ( v57 )
          {
            v58 = v55->fields.eventId;
            *(_DWORD *)(Instance + 32) = v58;
            if ( v57 != 1 )
            {
              *(_DWORD *)(Instance + 36) = v53;
              if ( !MasterData_object )
                goto LABEL_177;
              EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v58, v53, 0LL);
              TitleInfoEventTower__SetTowerPosition(this, v53, v59);
              if ( entity )
                this->fields.TowerFloorMax = entity->fields.topFloor;
              v61 = this->fields.eventDetailEntity;
              if ( !v61 )
                goto LABEL_177;
              IsDispEnabled = TitleInfoEventTower__IsDispEnabled(
                                (TitleInfoEventTower_o *)Instance,
                                v61->fields.eventId,
                                v53,
                                v60);
              Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              if ( !Instance )
                goto LABEL_177;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, IsDispEnabled, 0LL);
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_177;
              v63 = DataManager__GetMasterData_object_(
                      (DataManager_o *)Instance,
                      (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
              for ( j = v53 - 1; ; ++j )
              {
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                if ( !byte_4A48C25 )
                {
                  sub_1B863B8(&NetworkManager_TypeInfo, v31);
                  byte_4A48C25 = 1;
                }
                Instance = (__int64)NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  Instance = (__int64)NetworkManager_TypeInfo;
                }
                v65 = this->fields.eventDetailEntity;
                if ( !v65 || !v63 )
                  goto LABEL_177;
                Point = UserEventPointMaster__GetPoint(
                          (UserEventPointMaster_o *)v63,
                          *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                          v65->fields.eventId,
                          j + 1,
                          0LL);
                if ( this->fields.TowerFloorMax > Point )
                  break;
              }
              Instance = (__int64)this->fields.floorSprite;
              if ( !Instance )
                goto LABEL_177;
              Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
              if ( !Instance )
                goto LABEL_177;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
              if ( !v112 )
                goto LABEL_71;
              v68 = this->fields.eventDetailEntity;
              if ( !v68 )
                goto LABEL_177;
              TowerEffectData = TitleInfoEventTower__GetTowerEffectData(
                                  this,
                                  v68->fields.eventId,
                                  this->fields.openEffectId,
                                  v67);
              if ( TowerEffectData )
                TitleInfoEventTower__PlayFade(
                  this,
                  0.0,
                  1.0,
                  TowerEffectData->fields.FadeInTime,
                  TowerEffectData->fields.FadeInEasingType,
                  0LL,
                  v70);
              else
LABEL_71:
                TitleInfoEventTower__SetSpriteAlpha(this, 1.0, v31);
              v71 = 0;
              if ( j + 1 < 2 || Point )
              {
                ++j;
                v73 = v111;
                v74 = (_QWORD *)(v29 + 16);
                v75 = 0;
LABEL_116:
                Instance = (__int64)entity;
                if ( !entity )
                  goto LABEL_177;
                if ( !EventTowerEntity__HasFlag(entity, 2, 0LL) )
                  goto LABEL_124;
                stamp = (UnityEngine_Object_o *)this->fields.stamp;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(stamp, 0LL, 0LL) )
                {
                  Instance = (__int64)this->fields.stamp;
                  if ( !Instance )
                    goto LABEL_177;
                  Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)Instance,
                                        (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
                  if ( !Instance )
                    goto LABEL_177;
                  TitleInfoEventTowerStamp__StampProgress(
                    (TitleInfoEventTowerStamp_o *)Instance,
                    Point,
                    j,
                    this->fields.spriteRoot,
                    v90);
                  v91 = 1;
                }
                else
                {
LABEL_124:
                  v92 = (UnityEngine_Object_o *)this->fields.stamp;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( UnityEngine_Object__op_Inequality(v92, 0LL, 0LL) )
                  {
                    Instance = (__int64)this->fields.stamp;
                    if ( !Instance )
                      goto LABEL_177;
                    Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)Instance,
                                          (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
                    if ( !Instance )
                      goto LABEL_177;
                    TitleInfoEventTowerStamp__ResetStamp((TitleInfoEventTowerStamp_o *)Instance, v31);
                  }
                  v91 = 0;
                }
                Instance = (__int64)this->fields.floorSprite;
                if ( Instance )
                {
                  Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)Instance,
                                        (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___);
                  v93 = this->fields.eventDetailEntity;
                  if ( v93 )
                  {
                    if ( entity )
                    {
                      if ( Instance )
                      {
                        TitleInfoEventTowerFloorLabel__SetFloorLabel(
                          (TitleInfoEventTowerFloorLabel_o *)Instance,
                          v93->fields.eventId,
                          j,
                          this->fields.TowerFloorMax,
                          Point,
                          entity->fields.floorLabel,
                          v75,
                          v91,
                          v110);
                        Instance = (__int64)this->fields.nameSprite;
                        if ( Instance )
                        {
                          Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                                                (UnityEngine_Component_o *)Instance,
                                                (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___);
                          v95 = this->fields.eventDetailEntity;
                          if ( v95 )
                          {
                            if ( Instance )
                            {
                              TitleInfoEventTowerNameLabel__SetTowerNameLabel(
                                (TitleInfoEventTowerNameLabel_o *)Instance,
                                v95->fields.eventId,
                                j,
                                v94);
                              Instance = (__int64)this->fields.baseSprite;
                              if ( Instance )
                              {
                                Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)Instance,
                                                      (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___);
                                if ( Instance )
                                {
                                  TitleInfoEventTowerBase__SetBaseSprite(
                                    (TitleInfoEventTowerBase_o *)Instance,
                                    j,
                                    v91,
                                    v96);
                                  if ( (v113 & 1) != 0 || !*v74 )
                                  {
LABEL_144:
                                    if ( !this->fields.endCallback && v73 && v71 != 1 )
                                      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v73->fields.m_target)(
                                        v73->fields.original_method_info,
                                        *(_QWORD *)&v73->fields.extra_arg);
                                    return;
                                  }
                                  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
                                  if ( Instance )
                                  {
                                    MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0LL);
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
                sub_1B86614(Instance, v31);
              }
              if ( entity )
              {
                if ( !byte_4A4CF54 )
                {
                  Instance = sub_1B863B8(&EventRewardSaveData_TypeInfo, v31);
                  byte_4A4CF54 = 1;
                }
                v72 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
                if ( v72 == j )
                {
                  if ( v56[6] > 1u )
                  {
                    v56[9] = v72;
                    Point = this->fields.TowerFloorMax;
                    EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v56[8], v72, 0LL);
                    v71 = 0;
                    j = v72;
LABEL_113:
                    v73 = v111;
                    v74 = (_QWORD *)(v29 + 16);
LABEL_114:
                    Instance = (__int64)entity;
                    if ( !entity )
                      goto LABEL_177;
                    v75 = !EventTowerEntity__HasFlag(entity, 1, 0LL);
                    goto LABEL_116;
                  }
                }
                else
                {
                  if ( !v113 )
                  {
                    v71 = 0;
                    Point = 0;
                    ++j;
                    goto LABEL_113;
                  }
                  if ( v56[6] >= 2u )
                  {
                    Point = this->fields.TowerFloorMax;
                    Instance = EventTowerMaster__TryGetEntity(
                                 (EventTowerMaster_o *)MasterData_object,
                                 &entity,
                                 v56[8],
                                 v56[9],
                                 0LL);
                    if ( !entity )
                      goto LABEL_177;
                    openEffectId = entity->fields.openEffectId;
                    this->fields.openEffectId = openEffectId;
                    if ( v56[6] > 1u )
                    {
                      v77 = v56[8];
                      v56[9] = j;
                      EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v77, j, 0LL);
                      if ( openEffectId )
                      {
                        v78 = sub_1B86604(System_Action_TypeInfo);
                        System_Action___ctor(
                          (System_Action_o *)v78,
                          (Il2CppObject *)v29,
                          Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__,
                          0LL);
                        v80 = this->fields.eventDetailEntity;
                        v73 = v111;
                        v74 = (_QWORD *)(v29 + 16);
                        if ( !v80 )
                          goto LABEL_177;
                        Instance = (__int64)TitleInfoEventTower__GetTowerEffectData(
                                              this,
                                              v80->fields.eventId,
                                              this->fields.openEffectId,
                                              v79);
                        if ( Instance )
                        {
                          v82 = Instance;
                          TitleInfoEventTower__PlayFade(
                            this,
                            1.0,
                            0.0,
                            *(float *)(Instance + 20),
                            *(_DWORD *)(Instance + 24),
                            0LL,
                            v81);
                          v83 = *(float *)(v82 + 28);
                          if ( v83 <= 0.0 )
                          {
                            if ( !v78 )
                              goto LABEL_177;
                            (*(void (__fastcall **)(_QWORD, _QWORD))(v78 + 24))(
                              *(_QWORD *)(v78 + 64),
                              *(_QWORD *)(v78 + 40));
                          }
                          else
                          {
                            v84 = BasicHelper__DelayCall(v83, (System_Action_o *)v78, 1, 0LL);
                            UnityEngine_MonoBehaviour__StartCoroutine_69341456(
                              (UnityEngine_MonoBehaviour_o *)this,
                              v84,
                              0LL);
                          }
                        }
                        else
                        {
                          if ( !v78 )
                            goto LABEL_177;
                          (*(void (__fastcall **)(_QWORD, _QWORD))(v78 + 24))(
                            *(_QWORD *)(v78 + 64),
                            *(_QWORD *)(v78 + 40));
                          Instance = (__int64)this->fields.floorSprite;
                          if ( !Instance )
                            goto LABEL_177;
                          Instance = (__int64)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)Instance,
                                                0LL);
                          if ( !Instance )
                            goto LABEL_177;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                        }
                        this->fields.endCallback = v111;
                        sub_1B8635C((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)v111, v85, v86);
                        v71 = 0;
                      }
                      else
                      {
                        Instance = (__int64)entity;
                        v73 = v111;
                        v74 = (_QWORD *)(v29 + 16);
                        if ( !entity )
                          goto LABEL_177;
                        if ( EventTowerEntity__HasFlag(entity, 2, 0LL) )
                        {
                          Instance = (__int64)this->fields.spriteRoot;
                          if ( !Instance )
                            goto LABEL_177;
                          localPosition = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)Instance,
                                            0LL);
                          x = localPosition.fields.x;
                          y = localPosition.fields.y;
                          z = localPosition.fields.z;
                          TitleInfoEventTower__SetTowerPosition(this, j, v108);
                          Instance = (__int64)this->fields.spriteRoot;
                          if ( !Instance )
                            goto LABEL_177;
                          Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                                                (UnityEngine_Component_o *)Instance,
                                                (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___);
                          if ( !Instance )
                            goto LABEL_177;
                          v117.fields.x = x;
                          v117.fields.y = y;
                          v117.fields.z = z;
                          TitleInfoEventTowerSlideAnimation__StartSlideAnim(
                            (TitleInfoEventTowerSlideAnimation_o *)Instance,
                            v111,
                            v117,
                            v109);
                        }
                        v71 = 1;
                      }
                      goto LABEL_114;
                    }
                  }
                }
              }
              else if ( v56[6] > 1u )
              {
                v56[9] = j;
                Point = this->fields.TowerFloorMax;
                EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v56[8], j, 0LL);
                v71 = 0;
                goto LABEL_113;
              }
            }
          }
          sub_1B8661C(Instance, v31);
        }
        if ( *v34 )
        {
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( !Instance )
            goto LABEL_177;
          MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
          if ( !byte_4A4CF54 )
          {
            Instance = sub_1B863B8(&EventRewardSaveData_TypeInfo, v31);
            byte_4A4CF54 = 1;
          }
          v51 = EventRewardSaveData_TypeInfo->static_fields;
          ForceShiftTowerId = v51->_EventTowerState_k__BackingField + 1;
          if ( byte_4A4CF55 )
            goto LABEL_23;
          Instance = sub_1B863B8(&EventRewardSaveData_TypeInfo, v31);
          v50 = EventRewardSaveData_TypeInfo;
          byte_4A4CF55 = 1;
LABEL_22:
          v51 = v50->static_fields;
LABEL_23:
          v51->_EventTowerState_k__BackingField = ForceShiftTowerId;
          v52 = this->fields.eventDetailEntity;
          if ( !v52 )
            goto LABEL_177;
          EventRewardSaveData__SaveEventTowerState(v52->fields.eventId, 0LL);
          v113 = 1;
          goto LABEL_41;
        }
LABEL_40:
        v113 = 0;
        goto LABEL_41;
      }
    }
    if ( !byte_4A4CF54 )
    {
      sub_1B863B8(&EventRewardSaveData_TypeInfo, v31);
      byte_4A4CF54 = 1;
    }
    if ( EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField )
      goto LABEL_40;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_177;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    Instance = (__int64)this->fields.floorSprite;
    if ( !Instance )
      goto LABEL_177;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_177;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4AE79 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v31);
      byte_4A4AE79 = 1;
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
                 &v114,
                 *(_DWORD *)(*(_QWORD *)(Instance + 184) + 4LL),
                 (const MethodInfo_32142CC *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    if ( (Instance & 1) != 0 )
    {
      v88 = this->fields.eventDetailEntity;
      if ( !v88 || !v114 )
        goto LABEL_177;
      if ( v88->fields.eventId == LODWORD(v114[6].klass) )
      {
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !Instance )
          goto LABEL_177;
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
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  EasingObject_o *v29; // x21
  System_Action_o *v30; // x22
  System_Action_o *v31; // x23

  if ( (byte_4A4CEFC & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&easingType);
    sub_1B863B8(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v13);
    sub_1B863B8(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__, v14);
    sub_1B863B8(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__, v15);
    sub_1B863B8(&TitleInfoEventTower___c__DisplayClass26_0_TypeInfo, v16);
    byte_4A4CEFC = 1;
  }
  v17 = sub_1B86604(TitleInfoEventTower___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_6;
  *(float *)(v17 + 24) = from;
  *(float *)(v17 + 28) = to;
  *(_QWORD *)(v17 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v17 + 32), (int32_t)this, v20, v21);
  *(_QWORD *)(v17 + 40) = endAction;
  sub_1B8635C((CGThumbnailListItem_o *)(v17 + 40), (int32_t)endAction, v22, v23);
  TitleInfoEventTower__SetSpriteAlpha(this, *(float *)(v17 + 24), v24);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2FC28D8 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v17 + 16) = Component_object;
  sub_1B8635C((CGThumbnailListItem_o *)(v17 + 16), (int32_t)Component_object, v27, v28);
  v29 = *(EasingObject_o **)(v17 + 16);
  v30 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)v17, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__, 0LL);
  v31 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)v17, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__, 0LL);
  if ( !v29 )
LABEL_6:
    sub_1B86614(v18, v19);
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
    sub_1B86614(baseSprite, method);
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

  if ( (byte_4A4CEF9 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventUiMaster___, *(_QWORD *)&towerId);
    sub_1B863B8(&EventUiEntity_TypeInfo, v5);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4A4CEF9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventUiMaster___);
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
        sub_1B86614(Instance, v9);
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
  const MethodInfo *v26; // x3
  UnityEngine_Object_o *v27; // x21
  const MethodInfo *v28; // x4
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  CGThumbnailListItem_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *v32; // x21
  UnityEngine_Object_o *gameObject; // x21
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  UnityEngine_Object_o *v36; // x21
  UnityEngine_Object_o *v37; // x20
  UnityEngine_Object_o *v38; // x20
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  CGThumbnailListItem_o *p_endCallback; // x19
  struct System_Action_o *v42; // x20
  struct System_Action_o *endCallback; // t1
  int32_t v44; // [xsp+8h] [xbp-48h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A4CEFB & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, method);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B863B8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_1B863B8(&TitleInfoEventTower_TypeInfo, v5);
    byte_4A4CEFB = 1;
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
          sub_1B8635C((CGThumbnailListItem_o *)&this->fields.animationName, (int32_t)v24, v25, v26);
          v27 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
          {
            klass = (UnityEngine_Animation_o *)this->fields.simpleAnimationData;
            if ( klass )
            {
              SimpleAnimation__Play_64595412((SimpleAnimation_o *)klass, *p_animationName, 0LL);
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
              UnityEngine_Animation__Play_69099832(klass, *p_animationName, 0LL);
              goto LABEL_35;
            }
          }
LABEL_48:
          sub_1B86614(klass, v9);
        }
        if ( System_String__op_Equality(*p_animationName, v24, 0LL) )
        {
          this->fields.animationName = 0LL;
          sub_1B8635C((CGThumbnailListItem_o *)&this->fields.animationName, 0, v29, v30);
          p_simpleAnimationData = (CGThumbnailListItem_o *)&this->fields.simpleAnimationData;
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
            UnityEngine_Object__DestroyImmediate_69356480(gameObject, 0LL);
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
            UnityEngine_Object__DestroyImmediate_69356480(v38, 0LL);
            p_simpleAnimationData = (CGThumbnailListItem_o *)&this->fields.animationData;
            *p_animationData = 0LL;
          }
          sub_1B8635C(p_simpleAnimationData, 0, v34, v35);
LABEL_44:
          klass = (UnityEngine_Animation_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( !klass )
            goto LABEL_48;
          MissionNotifyManager__CancelPause((MissionNotifyManager_o *)klass, 0LL);
          endCallback = this->fields.endCallback;
          p_endCallback = (CGThumbnailListItem_o *)&this->fields.endCallback;
          v42 = endCallback;
          if ( endCallback )
          {
            p_endCallback->klass = 0LL;
            sub_1B8635C(p_endCallback, 0, v39, v40);
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
  const MethodInfo *v3; // x3

  this->fields.eventDetailEntity = value;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.eventDetailEntity, (int32_t)value, (int32_t)method, v3);
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
  UnityEngine_Object_o *Object_38723128; // x20
  Il2CppObject *v15; // x0
  struct TitleInfoEventTower_o *v16; // x8
  UnityEngine_GameObject_o *v17; // x20
  struct TitleInfoEventTower_o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct TitleInfoEventTower_o *v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct TitleInfoEventTower_o *v24; // x8
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  struct TitleInfoEventTower_o *v28; // x20
  struct TitleInfoEventTower_o *v29; // x8
  System_String_o *EFFECT_ANIMATION_START_FORMAT; // x21
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
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
  const MethodInfo *v44; // x3
  struct TitleInfoEventTower_o *v45; // x8
  int32_t v46; // [xsp+8h] [xbp-38h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A4CF04 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v3);
    sub_1B863B8(&UnityEngine_GameObject_TypeInfo, v4);
    sub_1B863B8(&int_TypeInfo, v5);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B863B8(&TitleInfoEventTower_TypeInfo, v8);
    byte_4A4CF04 = 1;
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
  Component_object = System_String__Concat_61645176(OBJECT_NAME_EFFECT_BASE, v13, 0LL);
  if ( !effectAsset )
    goto LABEL_39;
  Object_38723128 = AssetData__GetObject_38723128(effectAsset, Component_object, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_38723128 )
    v15 = (UnityEngine_GameObject_c *)Object_38723128->klass == UnityEngine_GameObject_TypeInfo
        ? (Il2CppObject *)Object_38723128
        : 0LL;
  else
    v15 = 0LL;
  Component_object = (System_String_o *)UnityEngine_Object__Instantiate_object_(
                                          v15,
                                          (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_39;
  v17 = (UnityEngine_GameObject_o *)Component_object;
  GameObjectExtensions__SafeSetParent_34388184(
    (UnityEngine_GameObject_o *)Component_object,
    v16->fields.effectRoot,
    0LL);
  if ( !v17 )
    goto LABEL_39;
  v18 = this->fields.__4__this;
  Component_object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                          v17,
                                          (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !v18 )
    goto LABEL_39;
  v18->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
  sub_1B8635C((CGThumbnailListItem_o *)&v18->fields.simpleAnimationData, (int32_t)Component_object, v19, v20);
  v21 = this->fields.__4__this;
  Component_object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                          v17,
                                          (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !v21 )
    goto LABEL_39;
  v21->fields.animationData = (struct UnityEngine_Animation_o *)Component_object;
  sub_1B8635C((CGThumbnailListItem_o *)&v21->fields.animationData, (int32_t)Component_object, v22, v23);
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
        sub_1B8635C((CGThumbnailListItem_o *)&v28->fields.animationName, (int32_t)Component_object, v32, v33);
        v34 = this->fields.__4__this;
        if ( v34 )
        {
          Component_object = (System_String_o *)v34->fields.simpleAnimationData;
          if ( Component_object )
          {
            SimpleAnimation__Play_64595412((SimpleAnimation_o *)Component_object, v34->fields.animationName, 0LL);
            return;
          }
        }
      }
    }
LABEL_39:
    sub_1B86614(Component_object, method);
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
    sub_1B8635C((CGThumbnailListItem_o *)&v39->fields.animationName, (int32_t)Component_object, v43, v44);
    v45 = this->fields.__4__this;
    if ( !v45 )
      goto LABEL_39;
    Component_object = (System_String_o *)v45->fields.animationData;
    if ( !Component_object )
      goto LABEL_39;
    UnityEngine_Animation__Play_69099832((UnityEngine_Animation_o *)Component_object, v45->fields.animationName, 0LL);
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
    sub_1B86614(this, method);
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
    sub_1B86614(0LL, method);
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
    sub_1B86614(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTower___c__DisplayClass31_0___GetTowerShiftData_b__1(
        TitleInfoEventTower___c__DisplayClass31_0_o *this,
        TitleInfoEventTower_TowerShiftData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B86614(this, 0LL);
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
    sub_1B86614(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTower___c__DisplayClass33_0___GetTowerEffectData_b__1(
        TitleInfoEventTower___c__DisplayClass33_0_o *this,
        TitleInfoEventTower_TowerEffectData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B86614(this, 0LL);
  return data->fields.EffectId == this->fields.effectId;
}