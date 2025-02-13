void __fastcall TitleInfoEventTower___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  int64_t v7; // x1
  struct TitleInfoEventTower_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x1
  struct TitleInfoEventTower_StaticFields *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4BDAFC7 & 1) == 0 )
  {
    sub_1C21E38(&TitleInfoEventTower_TypeInfo);
    sub_1C21E38(&StringLiteral_19187/*"ef_tower_change{0}_end"*/);
    sub_1C21E38(&StringLiteral_19186/*"ef_tower_change"*/);
    sub_1C21E38(&StringLiteral_19188/*"ef_tower_change{0}_start"*/);
    byte_4BDAFC7 = 1;
  }
  TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT = (struct System_String_o *)StringLiteral_19188/*"ef_tower_change{0}_start"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)TitleInfoEventTower_TypeInfo->static_fields,
    StringLiteral_19188/*"ef_tower_change{0}_start"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_19187/*"ef_tower_change{0}_end"*/;
  static_fields = TitleInfoEventTower_TypeInfo->static_fields;
  static_fields->EFFECT_ANIMATION_END_FORMAT = (struct System_String_o *)StringLiteral_19187/*"ef_tower_change{0}_end"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&static_fields->EFFECT_ANIMATION_END_FORMAT,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = StringLiteral_19186/*"ef_tower_change"*/;
  v16 = TitleInfoEventTower_TypeInfo->static_fields;
  v16->OBJECT_NAME_EFFECT_BASE = (struct System_String_o *)StringLiteral_19186/*"ef_tower_change"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->OBJECT_NAME_EFFECT_BASE, v15, v17, v18, v19, v20, v21, v22);
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

  if ( (byte_4BDAFBE & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDAFBE = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_16:
    sub_1C22094(gameObject, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.animationName = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.animationName, 0LL, v5, v6, v7, v8, v9, v10);
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


int32_t __fastcall TitleInfoEventTower__GetQuestIdOnFirstFloorOfNextTower(
        TitleInfoEventTower_o *this,
        int32_t eventId,
        int32_t nowTowerId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4BDAFC2 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDAFC2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_1C22094(Instance, v7);
  }
  return QuestGroupMaster__GetEventTowerQuestId((QuestGroupMaster_o *)Instance, eventId, nowTowerId + 1, 1, 0LL);
}


TitleInfoEventTower_TowerEffectData_o *__fastcall TitleInfoEventTower__GetTowerEffectData(
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

  if ( (byte_4BDAFC6 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___);
    sub_1C21E38(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
    sub_1C21E38(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
    sub_1C21E38(&System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo);
    sub_1C21E38(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__);
    sub_1C21E38(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__);
    sub_1C21E38(&TitleInfoEventTower___c__DisplayClass33_0_TypeInfo);
    byte_4BDAFC6 = 1;
  }
  v7 = sub_1C22084(TitleInfoEventTower___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  *(_DWORD *)(v7 + 16) = eventId;
  *(_DWORD *)(v7 + 20) = effectId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v11 = (System_Func_object__bool__o *)sub_1C22084(System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__,
    0LL);
  result = (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_object_(
                                                      towerEventInfoList,
                                                      (System_Func_T__bool__o *)v11,
                                                      (const MethodInfo_2F9B93C *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v13 = *(System_Object_array **)&result->fields.FadeInTime;
    v14 = (System_Func_object__bool__o *)sub_1C22084(System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      (Il2CppObject *)v7,
      Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__,
      0LL);
    return (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_object_(
                                                      v13,
                                                      (System_Func_T__bool__o *)v14,
                                                      (const MethodInfo_2F9B93C *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___);
  }
  return result;
}


TitleInfoEventTower_TowerShiftData_o *__fastcall TitleInfoEventTower__GetTowerShiftData(
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

  if ( (byte_4BDAFC4 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
    sub_1C21E38(&Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___);
    sub_1C21E38(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
    sub_1C21E38(&System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo);
    sub_1C21E38(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__);
    sub_1C21E38(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__);
    sub_1C21E38(&TitleInfoEventTower___c__DisplayClass31_0_TypeInfo);
    byte_4BDAFC4 = 1;
  }
  v7 = sub_1C22084(TitleInfoEventTower___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  *(_DWORD *)(v7 + 16) = eventId;
  *(_DWORD *)(v7 + 20) = towerId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v11 = (System_Func_object__bool__o *)sub_1C22084(System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__,
    0LL);
  result = (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_object_(
                                                     towerEventInfoList,
                                                     (System_Func_T__bool__o *)v11,
                                                     (const MethodInfo_2F9B93C *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v13 = *(System_Object_array **)&result->fields.CondType;
    v14 = (System_Func_object__bool__o *)sub_1C22084(System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      (Il2CppObject *)v7,
      Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__,
      0LL);
    return (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_object_(
                                                     v13,
                                                     (System_Func_T__bool__o *)v14,
                                                     (const MethodInfo_2F9B93C *)Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___);
  }
  return result;
}


bool __fastcall TitleInfoEventTower__IsDispEnabled(
        TitleInfoEventTower_o *this,
        int32_t eventId,
        int32_t towerId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  EventUiEntity_o *Entity; // x0
  EventUiEntity_o *v9; // x19

  if ( (byte_4BDAFC3 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventUiMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventUiReleaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDAFC3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventUiMaster___);
  if ( !Master_object )
    goto LABEL_12;
  Entity = EventUiMaster__getEntity((EventUiMaster_o *)Master_object, eventId, towerId, 0LL);
  if ( !Entity )
    return (char)Entity;
  v9 = Entity;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
  if ( !Master_object )
LABEL_12:
    sub_1C22094(Master_object, v7);
  LOBYTE(Entity) = EventUiReleaseMaster__IsOpen((EventUiReleaseMaster_o *)Master_object, v9, 0LL);
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

  if ( (byte_4BDAFC5 & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    byte_4BDAFC5 = 1;
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

  if ( (byte_4BDAFC1 & 1) == 0 )
  {
    this = (TitleInfoEventTower_o *)sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4BDAFC1 = 1;
  }
  QuestIdOnFirstFloorOfNextTower = TitleInfoEventTower__GetQuestIdOnFirstFloorOfNextTower(
                                     this,
                                     eventId,
                                     nowTowerId,
                                     method);
  if ( QuestIdOnFirstFloorOfNextTower < 1 )
    return 0;
  v7 = QuestIdOnFirstFloorOfNextTower;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v9);
  return clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v7, -1, 0, 0LL);
}


void __fastcall TitleInfoEventTower__Open(
        TitleInfoEventTower_o *this,
        System_Action_o *callback,
        AssetData_o *effectAsset,
        bool isFadeIn,
        const MethodInfo *method)
{
  __int64 v9; // x22
  __int64 Instance; // x0
  const MethodInfo *v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  _QWORD *v18; // x28
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
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
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  Il2CppObject *Master_object; // x19
  struct EventDetailEntity_o *v79; // x8
  UnityEngine_Object_o *stamp; // x19
  const MethodInfo *v81; // x4
  bool v82; // w22
  UnityEngine_Object_o *v83; // x19
  struct EventDetailEntity_o *v84; // x9
  const MethodInfo *v85; // x3
  struct EventDetailEntity_o *v86; // x8
  const MethodInfo *v87; // x3
  char i; // w8
  struct EventRewardSaveData_StaticFields *static_fields; // x9
  int32_t EventTowerState_k__BackingField; // w19
  int32_t v91; // w8
  struct EventDetailEntity_o *v92; // x9
  int32_t v93; // w19
  int32_t v94; // w19
  struct EventDetailEntity_o *v95; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v99; // x2
  const MethodInfo *v100; // x2
  const MethodInfo *v101; // [xsp+0h] [xbp-B0h]
  struct System_Action_o *v102; // [xsp+10h] [xbp-A0h]
  bool v103; // [xsp+20h] [xbp-90h]
  int v104; // [xsp+24h] [xbp-8Ch]
  Il2CppObject *v105; // [xsp+28h] [xbp-88h] BYREF
  EventTowerEntity_o *entity; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v108; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDAFBC & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventTowerMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__);
    sub_1C21E38(&TitleInfoEventTower___c__DisplayClass22_0_TypeInfo);
    byte_4BDAFBC = 1;
  }
  entity = 0LL;
  v105 = 0LL;
  v9 = sub_1C22084(TitleInfoEventTower___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_177;
  *(_QWORD *)(v9 + 16) = effectAsset;
  v18 = (_QWORD *)(v9 + 16);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)effectAsset, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)this, v19, v20, v21, v22, v23, v24);
  eventDetailEntity = this->fields.eventDetailEntity;
  if ( eventDetailEntity )
  {
    EventRewardSaveData__LoadEventTowerState(eventDetailEntity->fields.eventId, 0LL);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_177;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    v26 = this->fields.eventDetailEntity;
    if ( !v26 )
      goto LABEL_177;
    eventId = v26->fields.eventId;
    v28 = (QuestGroupMaster_o *)Instance;
    if ( !byte_4BDB018 )
    {
      Instance = sub_1C21E38(&EventRewardSaveData_TypeInfo);
      byte_4BDB018 = 1;
    }
    if ( !v28 )
      goto LABEL_177;
    v103 = isFadeIn;
    Instance = QuestGroupMaster__GetEventTowerQuestId(
                 v28,
                 eventId,
                 EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField + 1,
                 1,
                 0LL);
    v30 = this->fields.eventDetailEntity;
    if ( !v30 )
      goto LABEL_177;
    v31 = v30->fields.eventId;
    v32 = Instance;
    if ( !byte_4BDB018 )
    {
      sub_1C21E38(&EventRewardSaveData_TypeInfo);
      byte_4BDB018 = 1;
    }
    TowerShiftData = TitleInfoEventTower__GetTowerShiftData(
                       this,
                       v31,
                       EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
                       v29);
    v35 = TowerShiftData;
    if ( !byte_4BDB018 )
    {
      TowerShiftData = (TitleInfoEventTower_TowerShiftData_o *)sub_1C21E38(&EventRewardSaveData_TypeInfo);
      byte_4BDB018 = 1;
    }
    if ( TitleInfoEventTower__IsForceShiftTower(
           (TitleInfoEventTower_o *)TowerShiftData,
           v35,
           EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
           v34) )
    {
      if ( *v18 )
      {
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !Instance )
          goto LABEL_177;
        MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
        if ( !v35 )
          goto LABEL_177;
        ForceShiftTowerId = v35->fields.ForceShiftTowerId;
        if ( !byte_4BDB019 )
        {
          Instance = sub_1C21E38(&EventRewardSaveData_TypeInfo);
          byte_4BDB019 = 1;
        }
        v37 = EventRewardSaveData_TypeInfo;
        goto LABEL_22;
      }
      goto LABEL_40;
    }
    if ( v32 >= 1 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Instance )
        goto LABEL_177;
      Instance = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v32, -1, 0, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !byte_4BDB018 )
        {
          Instance = sub_1C21E38(&EventRewardSaveData_TypeInfo);
          byte_4BDB018 = 1;
        }
        if ( !EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField )
        {
          for ( i = 1; ; i = byte_4BDB018 )
          {
            if ( !i )
            {
              Instance = sub_1C21E38(&EventRewardSaveData_TypeInfo);
              byte_4BDB018 = 1;
            }
            static_fields = EventRewardSaveData_TypeInfo->static_fields;
            EventTowerState_k__BackingField = static_fields->_EventTowerState_k__BackingField;
            if ( !byte_4BDB019 )
            {
              Instance = sub_1C21E38(&EventRewardSaveData_TypeInfo);
              byte_4BDB019 = 1;
              static_fields = EventRewardSaveData_TypeInfo->static_fields;
            }
            v91 = EventTowerState_k__BackingField + 1;
            static_fields->_EventTowerState_k__BackingField = EventTowerState_k__BackingField + 1;
            v92 = this->fields.eventDetailEntity;
            if ( !v92 )
              goto LABEL_177;
            v93 = v92->fields.eventId;
            if ( !byte_4BDB018 )
            {
              sub_1C21E38(&EventRewardSaveData_TypeInfo);
              byte_4BDB018 = 1;
              v91 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
            }
            Instance = QuestGroupMaster__GetEventTowerQuestId(v28, v93, v91 + 1, 1, 0LL);
            if ( (int)Instance < 1 )
              break;
            v94 = Instance;
            Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            if ( !Instance )
              goto LABEL_177;
            Instance = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v94, -1, 0, 0LL);
            if ( (Instance & 1) == 0 )
              break;
          }
          v95 = this->fields.eventDetailEntity;
          if ( !v95 )
            goto LABEL_177;
          EventRewardSaveData__SaveEventTowerState(v95->fields.eventId, 0LL);
          v104 = 0;
LABEL_41:
          if ( !byte_4BDB018 )
          {
            sub_1C21E38(&EventRewardSaveData_TypeInfo);
            byte_4BDB018 = 1;
          }
          v102 = callback;
          v40 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
          Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_177;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventTowerMaster___);
          Instance = sub_1C21EE0(int___TypeInfo, 2LL);
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
              EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v45, v40, 0LL);
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
              Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              if ( !Instance )
                goto LABEL_177;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, IsDispEnabled, 0LL);
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_177;
              v50 = DataManager__GetMasterData_object_(
                      (DataManager_o *)Instance,
                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
              for ( j = v40 - 1; ; ++j )
              {
                if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                if ( !byte_4BD6FF5 )
                {
                  sub_1C21E38(&NetworkManager_TypeInfo);
                  byte_4BD6FF5 = 1;
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
              if ( !v103 )
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
                  0LL,
                  v57);
              else
LABEL_71:
                TitleInfoEventTower__SetSpriteAlpha(this, 1.0, v11);
              v58 = 0;
              if ( j + 1 < 2 || Point )
              {
                ++j;
                v60 = v102;
                v61 = (_QWORD *)(v9 + 16);
                v62 = 0;
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
                                        (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
                  if ( !Instance )
                    goto LABEL_177;
                  TitleInfoEventTowerStamp__StampProgress(
                    (TitleInfoEventTowerStamp_o *)Instance,
                    Point,
                    j,
                    this->fields.spriteRoot,
                    v81);
                  v82 = 1;
                }
                else
                {
LABEL_124:
                  v83 = (UnityEngine_Object_o *)this->fields.stamp;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( UnityEngine_Object__op_Inequality(v83, 0LL, 0LL) )
                  {
                    Instance = (__int64)this->fields.stamp;
                    if ( !Instance )
                      goto LABEL_177;
                    Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)Instance,
                                          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
                    if ( !Instance )
                      goto LABEL_177;
                    TitleInfoEventTowerStamp__ResetStamp((TitleInfoEventTowerStamp_o *)Instance, v11);
                  }
                  v82 = 0;
                }
                Instance = (__int64)this->fields.floorSprite;
                if ( Instance )
                {
                  Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)Instance,
                                        (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___);
                  v84 = this->fields.eventDetailEntity;
                  if ( v84 )
                  {
                    if ( entity )
                    {
                      if ( Instance )
                      {
                        TitleInfoEventTowerFloorLabel__SetFloorLabel(
                          (TitleInfoEventTowerFloorLabel_o *)Instance,
                          v84->fields.eventId,
                          j,
                          this->fields.TowerFloorMax,
                          Point,
                          entity->fields.floorLabel,
                          v62,
                          v82,
                          v101);
                        Instance = (__int64)this->fields.nameSprite;
                        if ( Instance )
                        {
                          Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                                                (UnityEngine_Component_o *)Instance,
                                                (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___);
                          v86 = this->fields.eventDetailEntity;
                          if ( v86 )
                          {
                            if ( Instance )
                            {
                              TitleInfoEventTowerNameLabel__SetTowerNameLabel(
                                (TitleInfoEventTowerNameLabel_o *)Instance,
                                v86->fields.eventId,
                                j,
                                v85);
                              Instance = (__int64)this->fields.baseSprite;
                              if ( Instance )
                              {
                                Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                                                      (UnityEngine_Component_o *)Instance,
                                                      (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___);
                                if ( Instance )
                                {
                                  TitleInfoEventTowerBase__SetBaseSprite(
                                    (TitleInfoEventTowerBase_o *)Instance,
                                    j,
                                    v82,
                                    v87);
                                  if ( (v104 & 1) != 0 || !*v61 )
                                  {
LABEL_144:
                                    if ( !this->fields.endCallback && v60 && v58 != 1 )
                                      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v60->fields.m_target)(
                                        v60->fields.original_method_info,
                                        *(_QWORD *)&v60->fields.extra_arg);
                                    return;
                                  }
                                  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
                sub_1C22094(Instance, v11);
              }
              if ( entity )
              {
                if ( !byte_4BDB018 )
                {
                  Instance = sub_1C21E38(&EventRewardSaveData_TypeInfo);
                  byte_4BDB018 = 1;
                }
                v59 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
                if ( v59 == j )
                {
                  if ( v43[6] > 1u )
                  {
                    v43[9] = v59;
                    Point = this->fields.TowerFloorMax;
                    EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v43[8], v59, 0LL);
                    v58 = 0;
                    j = v59;
LABEL_113:
                    v60 = v102;
                    v61 = (_QWORD *)(v9 + 16);
LABEL_114:
                    Instance = (__int64)entity;
                    if ( !entity )
                      goto LABEL_177;
                    v62 = !EventTowerEntity__HasFlag(entity, 1, 0LL);
                    goto LABEL_116;
                  }
                }
                else
                {
                  if ( !v104 )
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
                                 0LL);
                    if ( !entity )
                      goto LABEL_177;
                    openEffectId = entity->fields.openEffectId;
                    this->fields.openEffectId = openEffectId;
                    if ( v43[6] > 1u )
                    {
                      v64 = v43[8];
                      v43[9] = j;
                      EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v64, j, 0LL);
                      if ( openEffectId )
                      {
                        v65 = sub_1C22084(System_Action_TypeInfo);
                        System_Action___ctor(
                          (System_Action_o *)v65,
                          (Il2CppObject *)v9,
                          Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__,
                          0LL);
                        v67 = this->fields.eventDetailEntity;
                        v60 = v102;
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
                            0LL,
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
                            v71 = BasicHelper__DelayCall(v70, (System_Action_o *)v65, 1, 0LL);
                            UnityEngine_MonoBehaviour__StartCoroutine_70854884(
                              (UnityEngine_MonoBehaviour_o *)this,
                              v71,
                              0LL);
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
                                                0LL);
                          if ( !Instance )
                            goto LABEL_177;
                          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                        }
                        this->fields.endCallback = v102;
                        sub_1C21DDC(
                          (PartyOrganizationUtility_o *)&this->fields.endCallback,
                          (int64_t)v102,
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
                        v60 = v102;
                        v61 = (_QWORD *)(v9 + 16);
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
                          TitleInfoEventTower__SetTowerPosition(this, j, v99);
                          Instance = (__int64)this->fields.spriteRoot;
                          if ( !Instance )
                            goto LABEL_177;
                          Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                                                (UnityEngine_Component_o *)Instance,
                                                (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___);
                          if ( !Instance )
                            goto LABEL_177;
                          v108.fields.x = x;
                          v108.fields.y = y;
                          v108.fields.z = z;
                          TitleInfoEventTowerSlideAnimation__StartSlideAnim(
                            (TitleInfoEventTowerSlideAnimation_o *)Instance,
                            v102,
                            v108,
                            v100);
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
                EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &entity, v43[8], j, 0LL);
                v58 = 0;
                goto LABEL_113;
              }
            }
          }
          sub_1C2209C(Instance, v11);
        }
        if ( *v18 )
        {
          Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( !Instance )
            goto LABEL_177;
          MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
          if ( !byte_4BDB018 )
          {
            Instance = sub_1C21E38(&EventRewardSaveData_TypeInfo);
            byte_4BDB018 = 1;
          }
          v38 = EventRewardSaveData_TypeInfo->static_fields;
          ForceShiftTowerId = v38->_EventTowerState_k__BackingField + 1;
          if ( byte_4BDB019 )
            goto LABEL_23;
          Instance = sub_1C21E38(&EventRewardSaveData_TypeInfo);
          v37 = EventRewardSaveData_TypeInfo;
          byte_4BDB019 = 1;
LABEL_22:
          v38 = v37->static_fields;
LABEL_23:
          v38->_EventTowerState_k__BackingField = ForceShiftTowerId;
          v39 = this->fields.eventDetailEntity;
          if ( !v39 )
            goto LABEL_177;
          EventRewardSaveData__SaveEventTowerState(v39->fields.eventId, 0LL);
          v104 = 1;
          goto LABEL_41;
        }
LABEL_40:
        v104 = 0;
        goto LABEL_41;
      }
    }
    if ( !byte_4BDB018 )
    {
      sub_1C21E38(&EventRewardSaveData_TypeInfo);
      byte_4BDB018 = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD9099 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD9099 = 1;
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
                 &v105,
                 *(_DWORD *)(*(_QWORD *)(Instance + 184) + 4LL),
                 (const MethodInfo_325BE14 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    if ( (Instance & 1) != 0 )
    {
      v79 = this->fields.eventDetailEntity;
      if ( !v79 || !v105 )
        goto LABEL_177;
      if ( v79->fields.eventId == LODWORD(v105[6].klass) )
      {
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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


void __fastcall TitleInfoEventTower__PlayFade(
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  const MethodInfo *v28; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  EasingObject_o *v37; // x21
  System_Action_o *v38; // x22
  System_Action_o *v39; // x23

  if ( (byte_4BDAFC0 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1C21E38(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__);
    sub_1C21E38(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__);
    sub_1C21E38(&TitleInfoEventTower___c__DisplayClass26_0_TypeInfo);
    byte_4BDAFC0 = 1;
  }
  v13 = sub_1C22084(TitleInfoEventTower___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_6;
  *(float *)(v13 + 24) = from;
  *(float *)(v13 + 28) = to;
  *(_QWORD *)(v13 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 32), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 40) = endAction;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 40), (int64_t)endAction, v22, v23, v24, v25, v26, v27);
  TitleInfoEventTower__SetSpriteAlpha(this, *(float *)(v13 + 24), v28);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v13 + 16) = Component_object;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)Component_object, v31, v32, v33, v34, v35, v36);
  v37 = *(EasingObject_o **)(v13 + 16);
  v38 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)v13, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__, 0LL);
  v39 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v39, (Il2CppObject *)v13, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__, 0LL);
  if ( !v37 )
LABEL_6:
    sub_1C22094(v14, v15);
  EasingObject__Play(v37, time, v38, v39, 0.0, easingType, 0LL);
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
    sub_1C22094(baseSprite, method);
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

  if ( (byte_4BDAFBD & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventUiMaster___);
    sub_1C21E38(&EventUiEntity_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDAFBD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventUiMaster___);
  if ( Instance )
  {
    eventDetailEntity = this->fields.eventDetailEntity;
    if ( !eventDetailEntity )
      goto LABEL_15;
    Entity = EventUiMaster__getEntity((EventUiMaster_o *)Instance, eventDetailEntity->fields.eventId, towerId, 0LL);
    if ( Entity )
    {
      v9 = Entity;
      spriteRoot = (UnityEngine_Object_o *)this->fields.spriteRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(spriteRoot, 0LL, 0LL) )
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
          UnityEngine_Transform__set_localPosition(v11, v15, 0LL);
          return;
        }
LABEL_15:
        sub_1C22094(Instance, v6);
      }
    }
  }
}


void __fastcall TitleInfoEventTower__Update(TitleInfoEventTower_o *this, const MethodInfo *method)
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  UnityEngine_Object_o *v28; // x21
  const MethodInfo *v29; // x4
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  PartyOrganizationUtility_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *v37; // x21
  UnityEngine_Object_o *gameObject; // x21
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  UnityEngine_Object_o *v45; // x21
  UnityEngine_Object_o *v46; // x20
  UnityEngine_Object_o *v47; // x20
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  PartyOrganizationUtility_o *p_endCallback; // x19
  struct System_Action_o *v55; // x20
  struct System_Action_o *endCallback; // t1
  int32_t v57; // [xsp+8h] [xbp-48h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BDAFBF & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C21E38(&TitleInfoEventTower_TypeInfo);
    byte_4BDAFBF = 1;
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
        v12 = TitleInfoEventTower_TypeInfo;
        if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
          v12 = TitleInfoEventTower_TypeInfo;
        }
        EFFECT_ANIMATION_START_FORMAT = v12->static_fields->EFFECT_ANIMATION_START_FORMAT;
        openEffectId = this->fields.openEffectId;
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openEffectId, v8, v9, v10);
        v15 = System_String__Format(EFFECT_ANIMATION_START_FORMAT, v14, 0LL);
        EFFECT_ANIMATION_END_FORMAT = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_END_FORMAT;
        v57 = this->fields.openEffectId;
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57, v17, v18, v19);
        v21 = System_String__Format(EFFECT_ANIMATION_END_FORMAT, v20, 0LL);
        if ( System_String__op_Equality(this->fields.animationName, v15, 0LL) )
        {
          this->fields.animationName = v21;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.animationName,
            (int64_t)v21,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
          v28 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
          {
            klass = (UnityEngine_Animation_o *)this->fields.simpleAnimationData;
            if ( klass )
            {
              SimpleAnimation__Play_65253852((SimpleAnimation_o *)klass, *p_animationName, 0LL);
LABEL_35:
              TitleInfoEventTower__Open(this, 0LL, 0LL, 1, v29);
              return;
            }
          }
          else
          {
            v45 = (UnityEngine_Object_o *)*p_animationData;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
              goto LABEL_35;
            klass = *p_animationData;
            if ( *p_animationData )
            {
              UnityEngine_Animation__Play_70614020(klass, *p_animationName, 0LL);
              goto LABEL_35;
            }
          }
LABEL_48:
          sub_1C22094(klass, v6);
        }
        if ( System_String__op_Equality(*p_animationName, v21, 0LL) )
        {
          this->fields.animationName = 0LL;
          sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.animationName, 0LL, v30, v31, v32, v33, v34, v35);
          p_simpleAnimationData = (PartyOrganizationUtility_o *)&this->fields.simpleAnimationData;
          v37 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          this->fields.openEffectId = 0;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v37, 0LL, 0LL) )
          {
            klass = (UnityEngine_Animation_o *)p_simpleAnimationData->klass;
            if ( !p_simpleAnimationData->klass )
              goto LABEL_48;
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)klass,
                                                   0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__DestroyImmediate_70869800(gameObject, 0LL);
            p_simpleAnimationData->klass = 0LL;
          }
          else
          {
            v46 = (UnityEngine_Object_o *)*p_animationData;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v46, 0LL, 0LL) )
              goto LABEL_44;
            klass = *p_animationData;
            if ( !*p_animationData )
              goto LABEL_48;
            v47 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__DestroyImmediate_70869800(v47, 0LL);
            p_simpleAnimationData = (PartyOrganizationUtility_o *)&this->fields.animationData;
            *p_animationData = 0LL;
          }
          sub_1C21DDC(p_simpleAnimationData, 0LL, v39, v40, v41, v42, v43, v44);
LABEL_44:
          klass = (UnityEngine_Animation_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( !klass )
            goto LABEL_48;
          MissionNotifyManager__CancelPause((MissionNotifyManager_o *)klass, 0LL);
          endCallback = this->fields.endCallback;
          p_endCallback = (PartyOrganizationUtility_o *)&this->fields.endCallback;
          v55 = endCallback;
          if ( endCallback )
          {
            p_endCallback->klass = 0LL;
            sub_1C21DDC(p_endCallback, 0LL, v48, v49, v50, v51, v52, v53);
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v55->fields.m_target)(
              v55->fields.original_method_info,
              *(_QWORD *)&v55->fields.extra_arg);
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
  sub_1C21DDC(
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
  int64_t Component_object; // x0
  AssetData_o *effectAsset; // x20
  struct TitleInfoEventTower_o *_4__this; // x8
  System_String_o *OBJECT_NAME_EFFECT_BASE; // x21
  System_String_o *v7; // x0
  UnityEngine_Object_o *Object_39013000; // x20
  Il2CppObject *v9; // x0
  struct TitleInfoEventTower_o *v10; // x8
  UnityEngine_GameObject_o *v11; // x20
  struct TitleInfoEventTower_o *v12; // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct TitleInfoEventTower_o *v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct TitleInfoEventTower_o *v26; // x8
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  struct TitleInfoEventTower_o *v30; // x20
  struct TitleInfoEventTower_o *v31; // x8
  System_String_o *EFFECT_ANIMATION_START_FORMAT; // x21
  Il2CppObject *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct TitleInfoEventTower_o *v40; // x8
  UnityEngine_Object_o *animationData; // x20
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  struct TitleInfoEventTower_o *v45; // x20
  struct TitleInfoEventTower_o *v46; // x8
  System_String_o *v47; // x21
  Il2CppObject *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct TitleInfoEventTower_o *v55; // x8
  int32_t v56; // [xsp+8h] [xbp-38h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BDAFC8 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C21E38(&UnityEngine_GameObject_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&TitleInfoEventTower_TypeInfo);
    byte_4BDAFC8 = 1;
  }
  Component_object = (int64_t)TitleInfoEventTower_TypeInfo;
  effectAsset = this->fields.effectAsset;
  if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_39;
  OBJECT_NAME_EFFECT_BASE = TitleInfoEventTower_TypeInfo->static_fields->OBJECT_NAME_EFFECT_BASE;
  v7 = System_Int32__ToString((int)_4__this + 120, 0LL);
  Component_object = (int64_t)System_String__Concat_63115476(OBJECT_NAME_EFFECT_BASE, v7, 0LL);
  if ( !effectAsset )
    goto LABEL_39;
  Object_39013000 = AssetData__GetObject_39013000(effectAsset, (System_String_o *)Component_object, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_39013000 )
    v9 = (UnityEngine_GameObject_c *)Object_39013000->klass == UnityEngine_GameObject_TypeInfo
       ? (Il2CppObject *)Object_39013000
       : 0LL;
  else
    v9 = 0LL;
  Component_object = (int64_t)UnityEngine_Object__Instantiate_object_(
                                v9,
                                (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_39;
  v11 = (UnityEngine_GameObject_o *)Component_object;
  GameObjectExtensions__SafeSetParent_34803616(
    (UnityEngine_GameObject_o *)Component_object,
    v10->fields.effectRoot,
    0LL);
  if ( !v11 )
    goto LABEL_39;
  v12 = this->fields.__4__this;
  Component_object = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                v11,
                                (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !v12 )
    goto LABEL_39;
  v12->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v12->fields.simpleAnimationData,
    Component_object,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = this->fields.__4__this;
  Component_object = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                                v11,
                                (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !v19 )
    goto LABEL_39;
  v19->fields.animationData = (struct UnityEngine_Animation_o *)Component_object;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v19->fields.animationData, Component_object, v20, v21, v22, v23, v24, v25);
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_39;
  Component_object = UnityEngine_Object__op_Inequality(
                       (UnityEngine_Object_o *)v26->fields.simpleAnimationData,
                       0LL,
                       0LL);
  v30 = this->fields.__4__this;
  if ( (Component_object & 1) != 0 )
  {
    Component_object = (int64_t)TitleInfoEventTower_TypeInfo;
    v31 = this->fields.__4__this;
    if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
      v31 = this->fields.__4__this;
    }
    if ( v31 )
    {
      EFFECT_ANIMATION_START_FORMAT = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT;
      openEffectId = v31->fields.openEffectId;
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openEffectId, v27, v28, v29);
      Component_object = (int64_t)System_String__Format(EFFECT_ANIMATION_START_FORMAT, v33, 0LL);
      if ( v30 )
      {
        v30->fields.animationName = (struct System_String_o *)Component_object;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v30->fields.animationName,
          Component_object,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
        v40 = this->fields.__4__this;
        if ( v40 )
        {
          Component_object = (int64_t)v40->fields.simpleAnimationData;
          if ( Component_object )
          {
            SimpleAnimation__Play_65253852((SimpleAnimation_o *)Component_object, v40->fields.animationName, 0LL);
            return;
          }
        }
      }
    }
LABEL_39:
    sub_1C22094(Component_object, method);
  }
  if ( !v30 )
    goto LABEL_39;
  animationData = (UnityEngine_Object_o *)v30->fields.animationData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animationData, 0LL, 0LL) )
  {
    Component_object = (int64_t)TitleInfoEventTower_TypeInfo;
    v45 = this->fields.__4__this;
    v46 = v45;
    if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
      v46 = this->fields.__4__this;
    }
    if ( !v46 )
      goto LABEL_39;
    v47 = TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT;
    v56 = v46->fields.openEffectId;
    v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v42, v43, v44);
    Component_object = (int64_t)System_String__Format(v47, v48, 0LL);
    if ( !v45 )
      goto LABEL_39;
    v45->fields.animationName = (struct System_String_o *)Component_object;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v45->fields.animationName,
      Component_object,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
    v55 = this->fields.__4__this;
    if ( !v55 )
      goto LABEL_39;
    Component_object = (int64_t)v55->fields.animationData;
    if ( !Component_object )
      goto LABEL_39;
    UnityEngine_Animation__Play_70614020((UnityEngine_Animation_o *)Component_object, v55->fields.animationName, 0LL);
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
    sub_1C22094(this, method);
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
    sub_1C22094(0LL, method);
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
    sub_1C22094(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTower___c__DisplayClass31_0___GetTowerShiftData_b__1(
        TitleInfoEventTower___c__DisplayClass31_0_o *this,
        TitleInfoEventTower_TowerShiftData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTower___c__DisplayClass33_0___GetTowerEffectData_b__1(
        TitleInfoEventTower___c__DisplayClass33_0_o *this,
        TitleInfoEventTower_TowerEffectData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C22094(this, 0LL);
  return data->fields.EffectId == this->fields.effectId;
}