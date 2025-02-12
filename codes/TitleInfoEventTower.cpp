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
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t v11; // x1
  struct TitleInfoEventTower_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
  struct TitleInfoEventTower_StaticFields *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4BB3165 & 1) == 0 )
  {
    sub_1C13D24(&TitleInfoEventTower_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_19158/*"ef_presenter"*/, v8);
    sub_1C13D24(&StringLiteral_19157/*"ef_popLabel{0:00}"*/, v9);
    sub_1C13D24(&StringLiteral_19159/*"ef_raid_damage"*/, v10);
    byte_4BB3165 = 1;
  }
  TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT = (struct System_String_o *)StringLiteral_19159/*"ef_raid_damage"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)TitleInfoEventTower_TypeInfo->static_fields,
    StringLiteral_19159/*"ef_raid_damage"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = StringLiteral_19158/*"ef_presenter"*/;
  static_fields = TitleInfoEventTower_TypeInfo->static_fields;
  static_fields->EFFECT_ANIMATION_END_FORMAT = (struct System_String_o *)StringLiteral_19158/*"ef_presenter"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&static_fields->EFFECT_ANIMATION_END_FORMAT,
    v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = StringLiteral_19157/*"ef_popLabel{0:00}"*/;
  v20 = TitleInfoEventTower_TypeInfo->static_fields;
  v20->OBJECT_NAME_EFFECT_BASE = (struct System_String_o *)StringLiteral_19157/*"ef_popLabel{0:00}"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v20->OBJECT_NAME_EFFECT_BASE, v19, v21, v22, v23, v24, v25, v26);
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  UnityEngine_Object_o *simpleAnimationData; // x20
  UnityEngine_Object_o *animationData; // x20

  if ( (byte_4BB315C & 1) == 0 )
  {
    sub_1C13D24(&UnityEngine_Object_TypeInfo, method);
    byte_4BB315C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_16:
    sub_1C13F80(gameObject, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.animationName = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.animationName, 0LL, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4BB3160 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestGroupMaster___, *(_QWORD *)&eventId);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BB3160 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_1C13F80(Instance, v8);
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

  if ( (byte_4BB3164 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___, *(_QWORD *)&eventId);
    sub_1C13D24(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___, v7);
    sub_1C13D24(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo, v8);
    sub_1C13D24(&System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo, v9);
    sub_1C13D24(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__, v10);
    sub_1C13D24(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__, v11);
    sub_1C13D24(&TitleInfoEventTower___c__DisplayClass33_0_TypeInfo, v12);
    byte_4BB3164 = 1;
  }
  v13 = sub_1C13F70(TitleInfoEventTower___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1C13F80(v14, v15);
  *(_DWORD *)(v13 + 16) = eventId;
  *(_DWORD *)(v13 + 20) = effectId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v17 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v13,
    Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__,
    0LL);
  result = (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_object_(
                                                      towerEventInfoList,
                                                      (System_Func_T__bool__o *)v17,
                                                      (const MethodInfo_2F7AFA4 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v19 = *(System_Object_array **)&result->fields.FadeInTime;
    v20 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v20,
      (Il2CppObject *)v13,
      Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__,
      0LL);
    return (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_object_(
                                                      v19,
                                                      (System_Func_T__bool__o *)v20,
                                                      (const MethodInfo_2F7AFA4 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___);
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

  if ( (byte_4BB3162 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___, *(_QWORD *)&eventId);
    sub_1C13D24(&Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___, v7);
    sub_1C13D24(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo, v8);
    sub_1C13D24(&System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo, v9);
    sub_1C13D24(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__, v10);
    sub_1C13D24(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__, v11);
    sub_1C13D24(&TitleInfoEventTower___c__DisplayClass31_0_TypeInfo, v12);
    byte_4BB3162 = 1;
  }
  v13 = sub_1C13F70(TitleInfoEventTower___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1C13F80(v14, v15);
  *(_DWORD *)(v13 + 16) = eventId;
  *(_DWORD *)(v13 + 20) = towerId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v17 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v13,
    Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__,
    0LL);
  result = (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_object_(
                                                     towerEventInfoList,
                                                     (System_Func_T__bool__o *)v17,
                                                     (const MethodInfo_2F7AFA4 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v19 = *(System_Object_array **)&result->fields.CondType;
    v20 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v20,
      (Il2CppObject *)v13,
      Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__,
      0LL);
    return (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_object_(
                                                     v19,
                                                     (System_Func_T__bool__o *)v20,
                                                     (const MethodInfo_2F7AFA4 *)Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___);
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

  if ( (byte_4BB3161 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_EventUiMaster___, *(_QWORD *)&eventId);
    sub_1C13D24(&Method_DataManager_GetMaster_EventUiReleaseMaster___, v6);
    sub_1C13D24(&DataManager_TypeInfo, v7);
    byte_4BB3161 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_EventUiMaster___);
  if ( !Master_object )
    goto LABEL_12;
  Entity = EventUiMaster__getEntity((EventUiMaster_o *)Master_object, eventId, towerId, 0LL);
  if ( !Entity )
    return (char)Entity;
  v11 = Entity;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
  if ( !Master_object )
LABEL_12:
    sub_1C13F80(Master_object, v9);
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

  if ( (byte_4BB3163 & 1) == 0 )
  {
    sub_1C13D24(&CondType_TypeInfo, towerShiftData);
    byte_4BB3163 = 1;
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

  if ( (byte_4BB315F & 1) == 0 )
  {
    this = (TitleInfoEventTower_o *)sub_1C13D24(
                                      &Method_SingletonTemplate_clsQuestCheck__get_Instance__,
                                      *(_QWORD *)&eventId);
    byte_4BB315F = 1;
  }
  QuestIdOnFirstFloorOfNextTower = TitleInfoEventTower__GetQuestIdOnFirstFloorOfNextTower(
                                     this,
                                     eventId,
                                     nowTowerId,
                                     method);
  if ( QuestIdOnFirstFloorOfNextTower < 1 )
    return 0;
  v7 = QuestIdOnFirstFloorOfNextTower;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v9);
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
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  _QWORD *v38; // x28
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct EventDetailEntity_o *eventDetailEntity; // x8
  struct EventDetailEntity_o *v46; // x8
  int32_t eventId; // w19
  QuestGroupMaster_o *v48; // x25
  const MethodInfo *v49; // x3
  struct EventDetailEntity_o *v50; // x8
  int32_t v51; // w26
  int32_t v52; // w19
  TitleInfoEventTower_o *TowerShiftData; // x0
  __int64 v54; // x1
  const MethodInfo *v55; // x3
  TitleInfoEventTower_TowerShiftData_o *v56; // x26
  int ForceShiftTowerId; // w19
  EventRewardSaveData_c *v58; // x8
  struct EventRewardSaveData_StaticFields *v59; // x8
  struct EventDetailEntity_o *v60; // x8
  int32_t v61; // w25
  Il2CppObject *MasterData_object; // x27
  struct EventDetailEntity_o *v63; // x8
  _DWORD *v64; // x28
  int v65; // w9
  int32_t v66; // w2
  const MethodInfo *v67; // x2
  const MethodInfo *v68; // x3
  struct EventDetailEntity_o *v69; // x8
  bool IsDispEnabled; // w19
  Il2CppObject *v71; // x19
  int32_t j; // w25
  struct EventDetailEntity_o *v73; // x8
  int32_t Point; // w26
  const MethodInfo *v75; // x3
  struct EventDetailEntity_o *v76; // x8
  TitleInfoEventTower_TowerEffectData_o *TowerEffectData; // x0
  const MethodInfo *v78; // x3
  int v79; // w29
  int32_t v80; // w19
  struct System_Action_o *v81; // x21
  _QWORD *v82; // x24
  bool v83; // w23
  int32_t openEffectId; // w19
  int32_t v85; // w2
  __int64 v86; // x19
  const MethodInfo *v87; // x3
  struct EventDetailEntity_o *v88; // x8
  const MethodInfo *v89; // x3
  __int64 v90; // x22
  float v91; // s0
  System_Collections_IEnumerator_o *v92; // x0
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  Il2CppObject *Master_object; // x19
  struct EventDetailEntity_o *v100; // x8
  UnityEngine_Object_o *stamp; // x19
  const MethodInfo *v102; // x4
  bool v103; // w22
  UnityEngine_Object_o *v104; // x19
  struct EventDetailEntity_o *v105; // x9
  const MethodInfo *v106; // x3
  struct EventDetailEntity_o *v107; // x8
  const MethodInfo *v108; // x3
  char i; // w8
  struct EventRewardSaveData_StaticFields *static_fields; // x9
  int32_t EventTowerState_k__BackingField; // w19
  int32_t v112; // w8
  struct EventDetailEntity_o *v113; // x9
  int32_t v114; // w19
  int32_t v115; // w19
  struct EventDetailEntity_o *v116; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v120; // x2
  const MethodInfo *v121; // x2
  const MethodInfo *v122; // [xsp+0h] [xbp-B0h]
  struct System_Action_o *v123; // [xsp+10h] [xbp-A0h]
  bool v124; // [xsp+20h] [xbp-90h]
  int v125; // [xsp+24h] [xbp-8Ch]
  Il2CppObject *v126; // [xsp+28h] [xbp-88h] BYREF
  EventTowerEntity_o *entity; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v129; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BB315A & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, callback);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___, v9);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___, v10);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___, v11);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___, v12);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventTowerMaster___, v13);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestGroupMaster___, v14);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserEventPointMaster___, v15);
    sub_1C13D24(&Method_DataManager_GetMaster_WarMaster___, v16);
    sub_1C13D24(&DataManager_TypeInfo, v17);
    sub_1C13D24(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v18);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___, v19);
    sub_1C13D24(&int___TypeInfo, v20);
    sub_1C13D24(&NetworkManager_TypeInfo, v21);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v22);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1C13D24(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v24);
    sub_1C13D24(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v25);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v26);
    sub_1C13D24(&Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__, v27);
    sub_1C13D24(&TitleInfoEventTower___c__DisplayClass22_0_TypeInfo, v28);
    byte_4BB315A = 1;
  }
  entity = 0LL;
  v126 = 0LL;
  v29 = sub_1C13F70(TitleInfoEventTower___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( !v29 )
    goto LABEL_177;
  *(_QWORD *)(v29 + 16) = effectAsset;
  v38 = (_QWORD *)(v29 + 16);
  sub_1C13CC8((PartyOrganizationUtility_o *)(v29 + 16), (int64_t)effectAsset, v32, v33, v34, v35, v36, v37);
  *(_QWORD *)(v29 + 24) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v29 + 24), (int64_t)this, v39, v40, v41, v42, v43, v44);
  eventDetailEntity = this->fields.eventDetailEntity;
  if ( eventDetailEntity )
  {
    EventRewardSaveData__LoadEventTowerState(eventDetailEntity->fields.eventId, 0LL);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_177;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    v46 = this->fields.eventDetailEntity;
    if ( !v46 )
      goto LABEL_177;
    eventId = v46->fields.eventId;
    v48 = (QuestGroupMaster_o *)Instance;
    if ( !byte_4BB31B6 )
    {
      Instance = sub_1C13D24(&EventRewardSaveData_TypeInfo, v31);
      byte_4BB31B6 = 1;
    }
    if ( !v48 )
      goto LABEL_177;
    v124 = isFadeIn;
    Instance = QuestGroupMaster__GetEventTowerQuestId(
                 v48,
                 eventId,
                 EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField + 1,
                 1,
                 0LL);
    v50 = this->fields.eventDetailEntity;
    if ( !v50 )
      goto LABEL_177;
    v51 = v50->fields.eventId;
    v52 = Instance;
    if ( !byte_4BB31B6 )
    {
      sub_1C13D24(&EventRewardSaveData_TypeInfo, v31);
      byte_4BB31B6 = 1;
    }
    TowerShiftData = (TitleInfoEventTower_o *)TitleInfoEventTower__GetTowerShiftData(
                                                this,
                                                v51,
                                                EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
                                                v49);
    v56 = (TitleInfoEventTower_TowerShiftData_o *)TowerShiftData;
    if ( !byte_4BB31B6 )
    {
      TowerShiftData = (TitleInfoEventTower_o *)sub_1C13D24(&EventRewardSaveData_TypeInfo, v54);
      byte_4BB31B6 = 1;
    }
    if ( TitleInfoEventTower__IsForceShiftTower(
           TowerShiftData,
           v56,
           EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
           v55) )
    {
      if ( *v38 )
      {
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !Instance )
          goto LABEL_177;
        MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
        if ( !v56 )
          goto LABEL_177;
        ForceShiftTowerId = v56->fields.ForceShiftTowerId;
        if ( !byte_4BB31B7 )
        {
          Instance = sub_1C13D24(&EventRewardSaveData_TypeInfo, v31);
          byte_4BB31B7 = 1;
        }
        v58 = EventRewardSaveData_TypeInfo;
        goto LABEL_22;
      }
      goto LABEL_40;
    }
    if ( v52 >= 1 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Instance )
        goto LABEL_177;
      Instance = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v52, -1, 0, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !byte_4BB31B6 )
        {
          Instance = sub_1C13D24(&EventRewardSaveData_TypeInfo, v31);
          byte_4BB31B6 = 1;
        }
        if ( !EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField )
        {
          for ( i = 1; ; i = byte_4BB31B6 )
          {
            if ( !i )
            {
              Instance = sub_1C13D24(&EventRewardSaveData_TypeInfo, v31);
              byte_4BB31B6 = 1;
            }
            static_fields = EventRewardSaveData_TypeInfo->static_fields;
            EventTowerState_k__BackingField = static_fields->_EventTowerState_k__BackingField;
            if ( !byte_4BB31B7 )
            {
              Instance = sub_1C13D24(&EventRewardSaveData_TypeInfo, v31);
              byte_4BB31B7 = 1;
              static_fields = EventRewardSaveData_TypeInfo->static_fields;
            }
            v112 = EventTowerState_k__BackingField + 1;
            static_fields->_EventTowerState_k__BackingField = EventTowerState_k__BackingField + 1;
            v113 = this->fields.eventDetailEntity;
            if ( !v113 )
              goto LABEL_177;
            v114 = v113->fields.eventId;
            if ( !byte_4BB31B6 )
            {
              sub_1C13D24(&EventRewardSaveData_TypeInfo, v31);
              byte_4BB31B6 = 1;
              v112 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
            }
            Instance = QuestGroupMaster__GetEventTowerQuestId(v48, v114, v112 + 1, 1, 0LL);
            if ( (int)Instance < 1 )
              break;
            v115 = Instance;
            Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            if ( !Instance )
              goto LABEL_177;
            Instance = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v115, -1, 0, 0LL);
            if ( (Instance & 1) == 0 )
              break;
          }
          v116 = this->fields.eventDetailEntity;
          if ( !v116 )
            goto LABEL_177;
          EventRewardSaveData__SaveEventTowerState(v116->fields.eventId, 0LL);
          v125 = 0;
LABEL_41:
          if ( !byte_4BB31B6 )
          {
            sub_1C13D24(&EventRewardSaveData_TypeInfo, v31);
            byte_4BB31B6 = 1;
          }
          v123 = callback;
          v61 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
          Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_177;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventTowerMaster___);
          Instance = sub_1C13DCC(int___TypeInfo, 2LL);
          v63 = this->fields.eventDetailEntity;
          if ( !v63 )
            goto LABEL_177;
          v64 = (_DWORD *)Instance;
          if ( !Instance )
            goto LABEL_177;
          v65 = *(_DWORD *)(Instance + 24);
          if ( v65 )
          {
            v66 = v63->fields.eventId;
            *(_DWORD *)(Instance + 32) = v66;
            if ( v65 != 1 )
            {
              *(_DWORD *)(Instance + 36) = v61;
              if ( !MasterData_object )
                goto LABEL_177;
              EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v66, v61, 0LL);
              TitleInfoEventTower__SetTowerPosition(this, v61, v67);
              if ( entity )
                this->fields.TowerFloorMax = entity->fields.topFloor;
              v69 = this->fields.eventDetailEntity;
              if ( !v69 )
                goto LABEL_177;
              IsDispEnabled = TitleInfoEventTower__IsDispEnabled(
                                (TitleInfoEventTower_o *)Instance,
                                v69->fields.eventId,
                                v61,
                                v68);
              Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              if ( !Instance )
                goto LABEL_177;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, IsDispEnabled, 0LL);
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_177;
              v71 = DataManager__GetMasterData_object_(
                      (DataManager_o *)Instance,
                      (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
              for ( j = v61 - 1; ; ++j )
              {
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                if ( !byte_4BAF1E5 )
                {
                  sub_1C13D24(&NetworkManager_TypeInfo, v31);
                  byte_4BAF1E5 = 1;
                }
                Instance = (__int64)NetworkManager_TypeInfo;
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  Instance = (__int64)NetworkManager_TypeInfo;
                }
                v73 = this->fields.eventDetailEntity;
                if ( !v73 || !v71 )
                  goto LABEL_177;
                Point = UserEventPointMaster__GetPoint(
                          (UserEventPointMaster_o *)v71,
                          *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                          v73->fields.eventId,
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
              if ( !v124 )
                goto LABEL_71;
              v76 = this->fields.eventDetailEntity;
              if ( !v76 )
                goto LABEL_177;
              TowerEffectData = TitleInfoEventTower__GetTowerEffectData(
                                  this,
                                  v76->fields.eventId,
                                  this->fields.openEffectId,
                                  v75);
              if ( TowerEffectData )
                TitleInfoEventTower__PlayFade(
                  this,
                  0.0,
                  1.0,
                  TowerEffectData->fields.FadeInTime,
                  TowerEffectData->fields.FadeInEasingType,
                  0LL,
                  v78);
              else
LABEL_71:
                TitleInfoEventTower__SetSpriteAlpha(this, 1.0, v31);
              v79 = 0;
              if ( j + 1 < 2 || Point )
              {
                ++j;
                v81 = v123;
                v82 = (_QWORD *)(v29 + 16);
                v83 = 0;
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
                                        (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
                  if ( !Instance )
                    goto LABEL_177;
                  TitleInfoEventTowerStamp__StampProgress(
                    (TitleInfoEventTowerStamp_o *)Instance,
                    Point,
                    j,
                    this->fields.spriteRoot,
                    v102);
                  v103 = 1;
                }
                else
                {
LABEL_124:
                  v104 = (UnityEngine_Object_o *)this->fields.stamp;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( UnityEngine_Object__op_Inequality(v104, 0LL, 0LL) )
                  {
                    Instance = (__int64)this->fields.stamp;
                    if ( !Instance )
                      goto LABEL_177;
                    Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)Instance,
                                          (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
                    if ( !Instance )
                      goto LABEL_177;
                    TitleInfoEventTowerStamp__ResetStamp((TitleInfoEventTowerStamp_o *)Instance, v31);
                  }
                  v103 = 0;
                }
                Instance = (__int64)this->fields.floorSprite;
                if ( Instance )
                {
                  Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)Instance,
                                        (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___);
                  v105 = this->fields.eventDetailEntity;
                  if ( v105 )
                  {
                    if ( entity )
                    {
                      if ( Instance )
                      {
                        TitleInfoEventTowerFloorLabel__SetFloorLabel(
                          (TitleInfoEventTowerFloorLabel_o *)Instance,
                          v105->fields.eventId,
                          j,
                          this->fields.TowerFloorMax,
                          Point,
                          entity->fields.floorLabel,
                          v83,
                          v103,
                          v122);
                        Instance = (__int64)this->fields.nameSprite;
                        if ( Instance )
                        {
                          Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                                                (UnityEngine_Component_o *)Instance,
                                                (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___);
                          v107 = this->fields.eventDetailEntity;
                          if ( v107 )
                          {
                            if ( Instance )
                            {
                              TitleInfoEventTowerNameLabel__SetTowerNameLabel(
                                (TitleInfoEventTowerNameLabel_o *)Instance,
                                v107->fields.eventId,
                                j,
                                v106);
                              Instance = (__int64)this->fields.baseSprite;
                              if ( Instance )
                              {
                                Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)Instance,
                                                      (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___);
                                if ( Instance )
                                {
                                  TitleInfoEventTowerBase__SetBaseSprite(
                                    (TitleInfoEventTowerBase_o *)Instance,
                                    j,
                                    v103,
                                    v108);
                                  if ( (v125 & 1) != 0 || !*v82 )
                                  {
LABEL_144:
                                    if ( !this->fields.endCallback && v81 && v79 != 1 )
                                      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v81->fields.m_target)(
                                        v81->fields.original_method_info,
                                        *(_QWORD *)&v81->fields.extra_arg);
                                    return;
                                  }
                                  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
                sub_1C13F80(Instance, v31);
              }
              if ( entity )
              {
                if ( !byte_4BB31B6 )
                {
                  Instance = sub_1C13D24(&EventRewardSaveData_TypeInfo, v31);
                  byte_4BB31B6 = 1;
                }
                v80 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
                if ( v80 == j )
                {
                  if ( v64[6] > 1u )
                  {
                    v64[9] = v80;
                    Point = this->fields.TowerFloorMax;
                    EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v64[8], v80, 0LL);
                    v79 = 0;
                    j = v80;
LABEL_113:
                    v81 = v123;
                    v82 = (_QWORD *)(v29 + 16);
LABEL_114:
                    Instance = (__int64)entity;
                    if ( !entity )
                      goto LABEL_177;
                    v83 = !EventTowerEntity__HasFlag(entity, 1, 0LL);
                    goto LABEL_116;
                  }
                }
                else
                {
                  if ( !v125 )
                  {
                    v79 = 0;
                    Point = 0;
                    ++j;
                    goto LABEL_113;
                  }
                  if ( v64[6] >= 2u )
                  {
                    Point = this->fields.TowerFloorMax;
                    Instance = EventTowerMaster__TryGetEntity(
                                 (EventTowerMaster_o *)MasterData_object,
                                 &entity,
                                 v64[8],
                                 v64[9],
                                 0LL);
                    if ( !entity )
                      goto LABEL_177;
                    openEffectId = entity->fields.openEffectId;
                    this->fields.openEffectId = openEffectId;
                    if ( v64[6] > 1u )
                    {
                      v85 = v64[8];
                      v64[9] = j;
                      EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v85, j, 0LL);
                      if ( openEffectId )
                      {
                        v86 = sub_1C13F70(System_Action_TypeInfo);
                        System_Action___ctor(
                          (System_Action_o *)v86,
                          (Il2CppObject *)v29,
                          Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__,
                          0LL);
                        v88 = this->fields.eventDetailEntity;
                        v81 = v123;
                        v82 = (_QWORD *)(v29 + 16);
                        if ( !v88 )
                          goto LABEL_177;
                        Instance = (__int64)TitleInfoEventTower__GetTowerEffectData(
                                              this,
                                              v88->fields.eventId,
                                              this->fields.openEffectId,
                                              v87);
                        if ( Instance )
                        {
                          v90 = Instance;
                          TitleInfoEventTower__PlayFade(
                            this,
                            1.0,
                            0.0,
                            *(float *)(Instance + 20),
                            *(_DWORD *)(Instance + 24),
                            0LL,
                            v89);
                          v91 = *(float *)(v90 + 28);
                          if ( v91 <= 0.0 )
                          {
                            if ( !v86 )
                              goto LABEL_177;
                            (*(void (__fastcall **)(_QWORD, _QWORD))(v86 + 24))(
                              *(_QWORD *)(v86 + 64),
                              *(_QWORD *)(v86 + 40));
                          }
                          else
                          {
                            v92 = BasicHelper__DelayCall(v91, (System_Action_o *)v86, 1, 0LL);
                            UnityEngine_MonoBehaviour__StartCoroutine_70707260(
                              (UnityEngine_MonoBehaviour_o *)this,
                              v92,
                              0LL);
                          }
                        }
                        else
                        {
                          if ( !v86 )
                            goto LABEL_177;
                          (*(void (__fastcall **)(_QWORD, _QWORD))(v86 + 24))(
                            *(_QWORD *)(v86 + 64),
                            *(_QWORD *)(v86 + 40));
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
                        this->fields.endCallback = v123;
                        sub_1C13CC8(
                          (PartyOrganizationUtility_o *)&this->fields.endCallback,
                          (int64_t)v123,
                          v93,
                          v94,
                          v95,
                          v96,
                          v97,
                          v98);
                        v79 = 0;
                      }
                      else
                      {
                        Instance = (__int64)entity;
                        v81 = v123;
                        v82 = (_QWORD *)(v29 + 16);
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
                          TitleInfoEventTower__SetTowerPosition(this, j, v120);
                          Instance = (__int64)this->fields.spriteRoot;
                          if ( !Instance )
                            goto LABEL_177;
                          Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                                                (UnityEngine_Component_o *)Instance,
                                                (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___);
                          if ( !Instance )
                            goto LABEL_177;
                          v129.fields.x = x;
                          v129.fields.y = y;
                          v129.fields.z = z;
                          TitleInfoEventTowerSlideAnimation__StartSlideAnim(
                            (TitleInfoEventTowerSlideAnimation_o *)Instance,
                            v123,
                            v129,
                            v121);
                        }
                        v79 = 1;
                      }
                      goto LABEL_114;
                    }
                  }
                }
              }
              else if ( v64[6] > 1u )
              {
                v64[9] = j;
                Point = this->fields.TowerFloorMax;
                EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v64[8], j, 0LL);
                v79 = 0;
                goto LABEL_113;
              }
            }
          }
          sub_1C13F88(Instance, v31);
        }
        if ( *v38 )
        {
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( !Instance )
            goto LABEL_177;
          MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
          if ( !byte_4BB31B6 )
          {
            Instance = sub_1C13D24(&EventRewardSaveData_TypeInfo, v31);
            byte_4BB31B6 = 1;
          }
          v59 = EventRewardSaveData_TypeInfo->static_fields;
          ForceShiftTowerId = v59->_EventTowerState_k__BackingField + 1;
          if ( byte_4BB31B7 )
            goto LABEL_23;
          Instance = sub_1C13D24(&EventRewardSaveData_TypeInfo, v31);
          v58 = EventRewardSaveData_TypeInfo;
          byte_4BB31B7 = 1;
LABEL_22:
          v59 = v58->static_fields;
LABEL_23:
          v59->_EventTowerState_k__BackingField = ForceShiftTowerId;
          v60 = this->fields.eventDetailEntity;
          if ( !v60 )
            goto LABEL_177;
          EventRewardSaveData__SaveEventTowerState(v60->fields.eventId, 0LL);
          v125 = 1;
          goto LABEL_41;
        }
LABEL_40:
        v125 = 0;
        goto LABEL_41;
      }
    }
    if ( !byte_4BB31B6 )
    {
      sub_1C13D24(&EventRewardSaveData_TypeInfo, v31);
      byte_4BB31B6 = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BB1250 )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v31);
      byte_4BB1250 = 1;
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
                 &v126,
                 *(_DWORD *)(*(_QWORD *)(Instance + 184) + 4LL),
                 (const MethodInfo_3238670 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    if ( (Instance & 1) != 0 )
    {
      v100 = this->fields.eventDetailEntity;
      if ( !v100 || !v126 )
        goto LABEL_177;
      if ( v100->fields.eventId == LODWORD(v126[6].klass) )
      {
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  const MethodInfo *v32; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  EasingObject_o *v41; // x21
  System_Action_o *v42; // x22
  System_Action_o *v43; // x23

  if ( (byte_4BB315E & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, *(_QWORD *)&easingType);
    sub_1C13D24(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___, v13);
    sub_1C13D24(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__, v14);
    sub_1C13D24(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__, v15);
    sub_1C13D24(&TitleInfoEventTower___c__DisplayClass26_0_TypeInfo, v16);
    byte_4BB315E = 1;
  }
  v17 = sub_1C13F70(TitleInfoEventTower___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_6;
  *(float *)(v17 + 24) = from;
  *(float *)(v17 + 28) = to;
  *(_QWORD *)(v17 + 32) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 40) = endAction;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v17 + 40), (int64_t)endAction, v26, v27, v28, v29, v30, v31);
  TitleInfoEventTower__SetSpriteAlpha(this, *(float *)(v17 + 24), v32);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2FE14E4 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v17 + 16) = Component_object;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)Component_object, v35, v36, v37, v38, v39, v40);
  v41 = *(EasingObject_o **)(v17 + 16);
  v42 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v42, (Il2CppObject *)v17, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__, 0LL);
  v43 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v43, (Il2CppObject *)v17, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__, 0LL);
  if ( !v41 )
LABEL_6:
    sub_1C13F80(v18, v19);
  EasingObject__Play(v41, time, v42, v43, 0.0, easingType, 0LL);
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
    sub_1C13F80(baseSprite, method);
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

  if ( (byte_4BB315B & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_EventUiMaster___, *(_QWORD *)&towerId);
    sub_1C13D24(&EventUiEntity_TypeInfo, v5);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v6);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4BB315B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventUiMaster___);
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
        sub_1C13F80(Instance, v9);
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  UnityEngine_Object_o *v31; // x21
  const MethodInfo *v32; // x4
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  PartyOrganizationUtility_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *v40; // x21
  UnityEngine_Object_o *gameObject; // x21
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  UnityEngine_Object_o *v48; // x21
  UnityEngine_Object_o *v49; // x20
  UnityEngine_Object_o *v50; // x20
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  PartyOrganizationUtility_o *p_endCallback; // x19
  struct System_Action_o *v58; // x20
  struct System_Action_o *endCallback; // t1
  int32_t v60; // [xsp+8h] [xbp-48h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BB315D & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, method);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v3);
    sub_1C13D24(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    sub_1C13D24(&TitleInfoEventTower_TypeInfo, v5);
    byte_4BB315D = 1;
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
        v60 = this->fields.openEffectId;
        v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60, v20, v21, v22);
        v24 = System_String__Format(EFFECT_ANIMATION_END_FORMAT, v23, 0LL);
        if ( System_String__op_Equality(this->fields.animationName, v18, 0LL) )
        {
          this->fields.animationName = v24;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&this->fields.animationName,
            (int64_t)v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30);
          v31 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
          {
            klass = (UnityEngine_Animation_o *)this->fields.simpleAnimationData;
            if ( klass )
            {
              SimpleAnimation__Play_65106228((SimpleAnimation_o *)klass, *p_animationName, 0LL);
LABEL_35:
              TitleInfoEventTower__Open(this, 0LL, 0LL, 1, v32);
              return;
            }
          }
          else
          {
            v48 = (UnityEngine_Object_o *)*p_animationData;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v48, 0LL, 0LL) )
              goto LABEL_35;
            klass = *p_animationData;
            if ( *p_animationData )
            {
              UnityEngine_Animation__Play_70466396(klass, *p_animationName, 0LL);
              goto LABEL_35;
            }
          }
LABEL_48:
          sub_1C13F80(klass, v9);
        }
        if ( System_String__op_Equality(*p_animationName, v24, 0LL) )
        {
          this->fields.animationName = 0LL;
          sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.animationName, 0LL, v33, v34, v35, v36, v37, v38);
          p_simpleAnimationData = (PartyOrganizationUtility_o *)&this->fields.simpleAnimationData;
          v40 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          this->fields.openEffectId = 0;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v40, 0LL, 0LL) )
          {
            klass = (UnityEngine_Animation_o *)p_simpleAnimationData->klass;
            if ( !p_simpleAnimationData->klass )
              goto LABEL_48;
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)klass,
                                                   0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__DestroyImmediate_70722176(gameObject, 0LL);
            p_simpleAnimationData->klass = 0LL;
          }
          else
          {
            v49 = (UnityEngine_Object_o *)*p_animationData;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v49, 0LL, 0LL) )
              goto LABEL_44;
            klass = *p_animationData;
            if ( !*p_animationData )
              goto LABEL_48;
            v50 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__DestroyImmediate_70722176(v50, 0LL);
            p_simpleAnimationData = (PartyOrganizationUtility_o *)&this->fields.animationData;
            *p_animationData = 0LL;
          }
          sub_1C13CC8(p_simpleAnimationData, 0LL, v42, v43, v44, v45, v46, v47);
LABEL_44:
          klass = (UnityEngine_Animation_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( !klass )
            goto LABEL_48;
          MissionNotifyManager__CancelPause((MissionNotifyManager_o *)klass, 0LL);
          endCallback = this->fields.endCallback;
          p_endCallback = (PartyOrganizationUtility_o *)&this->fields.endCallback;
          v58 = endCallback;
          if ( endCallback )
          {
            p_endCallback->klass = 0LL;
            sub_1C13CC8(p_endCallback, 0LL, v51, v52, v53, v54, v55, v56);
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v58->fields.m_target)(
              v58->fields.original_method_info,
              *(_QWORD *)&v58->fields.extra_arg);
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
  sub_1C13CC8(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t Component_object; // x0
  AssetData_o *effectAsset; // x20
  struct TitleInfoEventTower_o *_4__this; // x8
  System_String_o *OBJECT_NAME_EFFECT_BASE; // x21
  System_String_o *v13; // x0
  UnityEngine_Object_o *Object_38913448; // x20
  Il2CppObject *v15; // x0
  struct TitleInfoEventTower_o *v16; // x8
  UnityEngine_GameObject_o *v17; // x20
  struct TitleInfoEventTower_o *v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct TitleInfoEventTower_o *v25; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct TitleInfoEventTower_o *v32; // x8
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  struct TitleInfoEventTower_o *v36; // x20
  struct TitleInfoEventTower_o *v37; // x8
  System_String_o *EFFECT_ANIMATION_START_FORMAT; // x21
  Il2CppObject *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct TitleInfoEventTower_o *v46; // x8
  UnityEngine_Object_o *animationData; // x20
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  struct TitleInfoEventTower_o *v51; // x20
  struct TitleInfoEventTower_o *v52; // x8
  System_String_o *v53; // x21
  Il2CppObject *v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct TitleInfoEventTower_o *v61; // x8
  int32_t v62; // [xsp+8h] [xbp-38h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BB3166 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_Animation___, method);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, v3);
    sub_1C13D24(&UnityEngine_GameObject_TypeInfo, v4);
    sub_1C13D24(&int_TypeInfo, v5);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    sub_1C13D24(&TitleInfoEventTower_TypeInfo, v8);
    byte_4BB3166 = 1;
  }
  Component_object = (int64_t)TitleInfoEventTower_TypeInfo;
  effectAsset = this->fields.effectAsset;
  if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_39;
  OBJECT_NAME_EFFECT_BASE = TitleInfoEventTower_TypeInfo->static_fields->OBJECT_NAME_EFFECT_BASE;
  v13 = System_Int32__ToString((int)_4__this + 120, 0LL);
  Component_object = (int64_t)System_String__Concat_62967944(OBJECT_NAME_EFFECT_BASE, v13, 0LL);
  if ( !effectAsset )
    goto LABEL_39;
  Object_38913448 = AssetData__GetObject_38913448(effectAsset, (System_String_o *)Component_object, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_38913448 )
    v15 = (UnityEngine_GameObject_c *)Object_38913448->klass == UnityEngine_GameObject_TypeInfo
        ? (Il2CppObject *)Object_38913448
        : 0LL;
  else
    v15 = 0LL;
  Component_object = (int64_t)UnityEngine_Object__Instantiate_object_(
                                v15,
                                (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_39;
  v17 = (UnityEngine_GameObject_o *)Component_object;
  GameObjectExtensions__SafeSetParent_34717732(
    (UnityEngine_GameObject_o *)Component_object,
    v16->fields.effectRoot,
    0LL);
  if ( !v17 )
    goto LABEL_39;
  v18 = this->fields.__4__this;
  Component_object = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                v17,
                                (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !v18 )
    goto LABEL_39;
  v18->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v18->fields.simpleAnimationData,
    Component_object,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = this->fields.__4__this;
  Component_object = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                v17,
                                (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !v25 )
    goto LABEL_39;
  v25->fields.animationData = (struct UnityEngine_Animation_o *)Component_object;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v25->fields.animationData, Component_object, v26, v27, v28, v29, v30, v31);
  v32 = this->fields.__4__this;
  if ( !v32 )
    goto LABEL_39;
  Component_object = UnityEngine_Object__op_Inequality(
                       (UnityEngine_Object_o *)v32->fields.simpleAnimationData,
                       0LL,
                       0LL);
  v36 = this->fields.__4__this;
  if ( (Component_object & 1) != 0 )
  {
    Component_object = (int64_t)TitleInfoEventTower_TypeInfo;
    v37 = this->fields.__4__this;
    if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
      v37 = this->fields.__4__this;
    }
    if ( v37 )
    {
      EFFECT_ANIMATION_START_FORMAT = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT;
      openEffectId = v37->fields.openEffectId;
      v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openEffectId, v33, v34, v35);
      Component_object = (int64_t)System_String__Format(EFFECT_ANIMATION_START_FORMAT, v39, 0LL);
      if ( v36 )
      {
        v36->fields.animationName = (struct System_String_o *)Component_object;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&v36->fields.animationName,
          Component_object,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
        v46 = this->fields.__4__this;
        if ( v46 )
        {
          Component_object = (int64_t)v46->fields.simpleAnimationData;
          if ( Component_object )
          {
            SimpleAnimation__Play_65106228((SimpleAnimation_o *)Component_object, v46->fields.animationName, 0LL);
            return;
          }
        }
      }
    }
LABEL_39:
    sub_1C13F80(Component_object, method);
  }
  if ( !v36 )
    goto LABEL_39;
  animationData = (UnityEngine_Object_o *)v36->fields.animationData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animationData, 0LL, 0LL) )
  {
    Component_object = (int64_t)TitleInfoEventTower_TypeInfo;
    v51 = this->fields.__4__this;
    v52 = v51;
    if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
      v52 = this->fields.__4__this;
    }
    if ( !v52 )
      goto LABEL_39;
    v53 = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT;
    v62 = v52->fields.openEffectId;
    v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62, v48, v49, v50);
    Component_object = (int64_t)System_String__Format(v53, v54, 0LL);
    if ( !v51 )
      goto LABEL_39;
    v51->fields.animationName = (struct System_String_o *)Component_object;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&v51->fields.animationName,
      Component_object,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
    v61 = this->fields.__4__this;
    if ( !v61 )
      goto LABEL_39;
    Component_object = (int64_t)v61->fields.animationData;
    if ( !Component_object )
      goto LABEL_39;
    UnityEngine_Animation__Play_70466396((UnityEngine_Animation_o *)Component_object, v61->fields.animationName, 0LL);
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
    sub_1C13F80(this, method);
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
    sub_1C13F80(0LL, method);
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
    sub_1C13F80(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTower___c__DisplayClass31_0___GetTowerShiftData_b__1(
        TitleInfoEventTower___c__DisplayClass31_0_o *this,
        TitleInfoEventTower_TowerShiftData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C13F80(this, 0LL);
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
    sub_1C13F80(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTower___c__DisplayClass33_0___GetTowerEffectData_b__1(
        TitleInfoEventTower___c__DisplayClass33_0_o *this,
        TitleInfoEventTower_TowerEffectData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C13F80(this, 0LL);
  return data->fields.EffectId == this->fields.effectId;
}