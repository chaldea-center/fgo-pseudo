void __fastcall TitleInfoEventTower___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct TitleInfoEventTower_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  struct TitleInfoEventTower_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A59C4A & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventTower_TypeInfo);
    sub_1B885B0(&StringLiteral_18863/*"ef_tower_change{0}_end"*/);
    sub_1B885B0(&StringLiteral_18862/*"ef_tower_change"*/);
    sub_1B885B0(&StringLiteral_18864/*"ef_tower_change{0}_start"*/);
    byte_4A59C4A = 1;
  }
  TitleInfoEventTower_TypeInfo->static_fields->EFFECT_ANIMATION_START_FORMAT = (struct System_String_o *)StringLiteral_18864/*"ef_tower_change{0}_start"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)TitleInfoEventTower_TypeInfo->static_fields,
    StringLiteral_18864/*"ef_tower_change{0}_start"*/,
    v1,
    v2);
  v3 = StringLiteral_18863/*"ef_tower_change{0}_end"*/;
  static_fields = TitleInfoEventTower_TypeInfo->static_fields;
  static_fields->EFFECT_ANIMATION_END_FORMAT = (struct System_String_o *)StringLiteral_18863/*"ef_tower_change{0}_end"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->EFFECT_ANIMATION_END_FORMAT, v3, v5, v6);
  v7 = StringLiteral_18862/*"ef_tower_change"*/;
  v8 = TitleInfoEventTower_TypeInfo->static_fields;
  v8->OBJECT_NAME_EFFECT_BASE = (struct System_String_o *)StringLiteral_18862/*"ef_tower_change"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->OBJECT_NAME_EFFECT_BASE, v7, v9, v10);
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

  if ( (byte_4A59C41 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59C41 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_16:
    sub_1B8880C(gameObject, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.animationName = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.animationName, 0, v5, v6);
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

  if ( (byte_4A59C45 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A59C45 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v7);
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

  if ( (byte_4A59C49 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___);
    sub_1B885B0(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
    sub_1B885B0(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
    sub_1B885B0(&System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo);
    sub_1B885B0(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__);
    sub_1B885B0(&Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__);
    sub_1B885B0(&TitleInfoEventTower___c__DisplayClass33_0_TypeInfo);
    byte_4A59C49 = 1;
  }
  v7 = sub_1B887FC(TitleInfoEventTower___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_DWORD *)(v7 + 16) = eventId;
  *(_DWORD *)(v7 + 20) = effectId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v11 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__0__,
    0LL);
  result = (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_object_(
                                                      towerEventInfoList,
                                                      (System_Func_T__bool__o *)v11,
                                                      (const MethodInfo_2E6B89C *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v13 = *(System_Object_array **)&result->fields.FadeInTime;
    v14 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_TitleInfoEventTower_TowerEffectData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      (Il2CppObject *)v7,
      Method_TitleInfoEventTower___c__DisplayClass33_0__GetTowerEffectData_b__1__,
      0LL);
    return (TitleInfoEventTower_TowerEffectData_o *)BasicHelper__Find_object_(
                                                      v13,
                                                      (System_Func_T__bool__o *)v14,
                                                      (const MethodInfo_2E6B89C *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEffectData___);
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

  if ( (byte_4A59C47 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
    sub_1B885B0(&Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___);
    sub_1B885B0(&System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
    sub_1B885B0(&System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo);
    sub_1B885B0(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__);
    sub_1B885B0(&Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__);
    sub_1B885B0(&TitleInfoEventTower___c__DisplayClass31_0_TypeInfo);
    byte_4A59C47 = 1;
  }
  v7 = sub_1B887FC(TitleInfoEventTower___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_DWORD *)(v7 + 16) = eventId;
  *(_DWORD *)(v7 + 20) = towerId;
  towerEventInfoList = (System_Object_array *)this->fields.towerEventInfoList;
  v11 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_TitleInfoEventTower_TowerEventInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__0__,
    0LL);
  result = (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_object_(
                                                     towerEventInfoList,
                                                     (System_Func_T__bool__o *)v11,
                                                     (const MethodInfo_2E6B89C *)Method_BasicHelper_Find_TitleInfoEventTower_TowerEventInfo___);
  if ( result )
  {
    v13 = *(System_Object_array **)&result->fields.CondType;
    v14 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_TitleInfoEventTower_TowerShiftData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      (Il2CppObject *)v7,
      Method_TitleInfoEventTower___c__DisplayClass31_0__GetTowerShiftData_b__1__,
      0LL);
    return (TitleInfoEventTower_TowerShiftData_o *)BasicHelper__Find_object_(
                                                     v13,
                                                     (System_Func_T__bool__o *)v14,
                                                     (const MethodInfo_2E6B89C *)Method_BasicHelper_Find_TitleInfoEventTower_TowerShiftData___);
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

  if ( (byte_4A59C46 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventUiMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventUiReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A59C46 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventUiMaster___);
  if ( !Master_object )
    goto LABEL_12;
  Entity = EventUiMaster__getEntity((EventUiMaster_o *)Master_object, eventId, towerId, 0LL);
  if ( !Entity )
    return (char)Entity;
  v9 = Entity;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
  if ( !Master_object )
LABEL_12:
    sub_1B8880C(Master_object, v7);
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

  if ( (byte_4A59C48 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A59C48 = 1;
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

  if ( (byte_4A59C44 & 1) == 0 )
  {
    this = (TitleInfoEventTower_o *)sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4A59C44 = 1;
  }
  QuestIdOnFirstFloorOfNextTower = TitleInfoEventTower__GetQuestIdOnFirstFloorOfNextTower(
                                     this,
                                     eventId,
                                     nowTowerId,
                                     method);
  if ( QuestIdOnFirstFloorOfNextTower < 1 )
    return 0;
  v7 = QuestIdOnFirstFloorOfNextTower;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v9);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  struct EventDetailEntity_o *eventDetailEntity; // x8
  struct EventDetailEntity_o *v17; // x8
  int32_t eventId; // w26
  QuestGroupMaster_o *v19; // x25
  const MethodInfo *v20; // x3
  struct EventDetailEntity_o *v21; // x8
  int32_t v22; // w27
  int32_t v23; // w26
  TitleInfoEventTower_TowerShiftData_o *TowerShiftData; // x0
  const MethodInfo *v25; // x3
  TitleInfoEventTower_TowerShiftData_o *v26; // x27
  int ForceShiftTowerId; // w21
  EventRewardSaveData_c *v28; // x8
  struct EventRewardSaveData_StaticFields *static_fields; // x8
  struct EventDetailEntity_o *v30; // x8
  Il2CppObject *Master_object; // x21
  struct EventDetailEntity_o *v32; // x8
  char j; // w8
  struct EventRewardSaveData_StaticFields *v34; // x9
  int32_t v35; // w21
  int32_t v36; // w8
  struct EventDetailEntity_o *v37; // x9
  int32_t v38; // w26
  int32_t v39; // w26
  struct EventDetailEntity_o *v40; // x8
  int32_t EventTowerState_k__BackingField; // w25
  Il2CppObject *MasterData_object; // x27
  struct EventDetailEntity_o *v43; // x8
  _DWORD *v44; // x28
  int v45; // w9
  int32_t v46; // w2
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x3
  struct EventDetailEntity_o *v49; // x8
  bool IsDispEnabled; // w26
  Il2CppObject *v51; // x29
  int32_t i; // w25
  struct EventDetailEntity_o *v53; // x8
  int32_t Point; // w26
  const MethodInfo *v55; // x3
  struct EventDetailEntity_o *v56; // x8
  TitleInfoEventTower_TowerEffectData_o *TowerEffectData; // x0
  const MethodInfo *v58; // x3
  int v59; // w29
  int32_t v60; // w23
  char v61; // w24
  System_Action_o *v62; // x21
  bool v63; // w19
  int32_t openEffectId; // w19
  int32_t v65; // w2
  __int64 v66; // x23
  const MethodInfo *v67; // x3
  struct EventDetailEntity_o *v68; // x8
  const MethodInfo *v69; // x3
  __int64 v70; // x22
  float v71; // s0
  System_Collections_IEnumerator_o *v72; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v78; // x2
  const MethodInfo *v79; // x2
  UnityEngine_Object_o *stamp; // x22
  const MethodInfo *v81; // x4
  bool v82; // w22
  UnityEngine_Object_o *v83; // x22
  struct EventDetailEntity_o *v84; // x9
  const MethodInfo *v85; // x3
  struct EventDetailEntity_o *v86; // x8
  const MethodInfo *v87; // x3
  const MethodInfo *v88; // [xsp+0h] [xbp-B0h]
  int v89; // [xsp+Ch] [xbp-A4h]
  System_Action_o *v90; // [xsp+10h] [xbp-A0h]
  _QWORD *v91; // [xsp+20h] [xbp-90h]
  Il2CppObject *entity; // [xsp+28h] [xbp-88h] BYREF
  EventTowerEntity_o *v93; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A59C3F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventTowerMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestGroupMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__);
    sub_1B885B0(&TitleInfoEventTower___c__DisplayClass22_0_TypeInfo);
    byte_4A59C3F = 1;
  }
  v93 = 0LL;
  entity = 0LL;
  v9 = sub_1B887FC(TitleInfoEventTower___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_173;
  *(_QWORD *)(v9 + 16) = effectAsset;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)effectAsset, v12, v13);
  *(_QWORD *)(v9 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)this, v14, v15);
  eventDetailEntity = this->fields.eventDetailEntity;
  if ( eventDetailEntity )
  {
    v91 = (_QWORD *)(v9 + 16);
    EventRewardSaveData__LoadEventTowerState(eventDetailEntity->fields.eventId, 0LL);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_173;
    Instance = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestGroupMaster___);
    v17 = this->fields.eventDetailEntity;
    if ( !v17 )
      goto LABEL_173;
    eventId = v17->fields.eventId;
    v19 = (QuestGroupMaster_o *)Instance;
    if ( !byte_4A59CCB )
    {
      Instance = sub_1B885B0(&EventRewardSaveData_TypeInfo);
      byte_4A59CCB = 1;
    }
    if ( !v19 )
      goto LABEL_173;
    Instance = QuestGroupMaster__GetEventTowerQuestId(
                 v19,
                 eventId,
                 EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField + 1,
                 1,
                 0LL);
    v21 = this->fields.eventDetailEntity;
    if ( !v21 )
      goto LABEL_173;
    v22 = v21->fields.eventId;
    v23 = Instance;
    if ( !byte_4A59CCB )
    {
      sub_1B885B0(&EventRewardSaveData_TypeInfo);
      byte_4A59CCB = 1;
    }
    TowerShiftData = TitleInfoEventTower__GetTowerShiftData(
                       this,
                       v22,
                       EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
                       v20);
    v26 = TowerShiftData;
    if ( !byte_4A59CCB )
    {
      TowerShiftData = (TitleInfoEventTower_TowerShiftData_o *)sub_1B885B0(&EventRewardSaveData_TypeInfo);
      byte_4A59CCB = 1;
    }
    v90 = callback;
    if ( TitleInfoEventTower__IsForceShiftTower(
           (TitleInfoEventTower_o *)TowerShiftData,
           v26,
           EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField,
           v25) )
    {
      if ( *v91 )
      {
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
        if ( !Instance )
          goto LABEL_173;
        MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
        if ( !v26 )
          goto LABEL_173;
        ForceShiftTowerId = v26->fields.ForceShiftTowerId;
        if ( !byte_4A59CCC )
        {
          Instance = sub_1B885B0(&EventRewardSaveData_TypeInfo);
          byte_4A59CCC = 1;
        }
        v28 = EventRewardSaveData_TypeInfo;
        goto LABEL_22;
      }
      goto LABEL_74;
    }
    if ( v23 >= 1 )
    {
      Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !Instance )
        goto LABEL_173;
      Instance = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v23, -1, 0, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( !byte_4A59CCB )
        {
          Instance = sub_1B885B0(&EventRewardSaveData_TypeInfo);
          byte_4A59CCB = 1;
        }
        if ( EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField )
        {
          if ( *v91 )
          {
            Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
            if ( !Instance )
              goto LABEL_173;
            MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
            if ( !byte_4A59CCB )
            {
              Instance = sub_1B885B0(&EventRewardSaveData_TypeInfo);
              byte_4A59CCB = 1;
            }
            static_fields = EventRewardSaveData_TypeInfo->static_fields;
            ForceShiftTowerId = static_fields->_EventTowerState_k__BackingField + 1;
            if ( byte_4A59CCC )
              goto LABEL_23;
            Instance = sub_1B885B0(&EventRewardSaveData_TypeInfo);
            v28 = EventRewardSaveData_TypeInfo;
            byte_4A59CCC = 1;
LABEL_22:
            static_fields = v28->static_fields;
LABEL_23:
            static_fields->_EventTowerState_k__BackingField = ForceShiftTowerId;
            v30 = this->fields.eventDetailEntity;
            if ( !v30 )
              goto LABEL_173;
            EventRewardSaveData__SaveEventTowerState(v30->fields.eventId, 0LL);
            v89 = 1;
LABEL_75:
            if ( !byte_4A59CCB )
            {
              sub_1B885B0(&EventRewardSaveData_TypeInfo);
              byte_4A59CCB = 1;
            }
            EventTowerState_k__BackingField = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
            Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_173;
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventTowerMaster___);
            Instance = sub_1B88658(int___TypeInfo, 2LL);
            v43 = this->fields.eventDetailEntity;
            if ( !v43 )
              goto LABEL_173;
            v44 = (_DWORD *)Instance;
            if ( !Instance )
              goto LABEL_173;
            v45 = *(_DWORD *)(Instance + 24);
            if ( !v45 )
              goto LABEL_174;
            v46 = v43->fields.eventId;
            *(_DWORD *)(Instance + 32) = v46;
            if ( v45 == 1 )
              goto LABEL_174;
            *(_DWORD *)(Instance + 36) = EventTowerState_k__BackingField;
            if ( !MasterData_object )
              goto LABEL_173;
            EventTowerMaster__TryGetEntity(
              (EventTowerMaster_o *)MasterData_object,
              &v93,
              v46,
              EventTowerState_k__BackingField,
              0LL);
            TitleInfoEventTower__SetTowerPosition(this, EventTowerState_k__BackingField, v47);
            if ( v93 )
              this->fields.TowerFloorMax = v93->fields.topFloor;
            v49 = this->fields.eventDetailEntity;
            if ( !v49 )
              goto LABEL_173;
            IsDispEnabled = TitleInfoEventTower__IsDispEnabled(
                              (TitleInfoEventTower_o *)Instance,
                              v49->fields.eventId,
                              EventTowerState_k__BackingField,
                              v48);
            Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( !Instance )
              goto LABEL_173;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, IsDispEnabled, 0LL);
            Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !Instance )
              goto LABEL_173;
            v51 = DataManager__GetMasterData_object_(
                    (DataManager_o *)Instance,
                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
            for ( i = EventTowerState_k__BackingField - 1; ; ++i )
            {
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Instance = NetworkManager__get_UserId(0LL);
              v53 = this->fields.eventDetailEntity;
              if ( !v53 || !v51 )
                goto LABEL_173;
              Point = UserEventPointMaster__GetPoint(
                        (UserEventPointMaster_o *)v51,
                        Instance,
                        v53->fields.eventId,
                        i + 1,
                        0LL);
              if ( this->fields.TowerFloorMax > Point )
                break;
            }
            Instance = (__int64)this->fields.floorSprite;
            if ( !Instance )
              goto LABEL_173;
            Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            if ( !Instance )
              goto LABEL_173;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
            if ( !isFadeIn )
              goto LABEL_101;
            v56 = this->fields.eventDetailEntity;
            if ( !v56 )
              goto LABEL_173;
            TowerEffectData = TitleInfoEventTower__GetTowerEffectData(
                                this,
                                v56->fields.eventId,
                                this->fields.openEffectId,
                                v55);
            if ( TowerEffectData )
              TitleInfoEventTower__PlayFade(
                this,
                0.0,
                1.0,
                TowerEffectData->fields.FadeInTime,
                TowerEffectData->fields.FadeInEasingType,
                0LL,
                v58);
            else
LABEL_101:
              TitleInfoEventTower__SetSpriteAlpha(this, 1.0, v11);
            v59 = 0;
            if ( i + 1 < 2 || Point )
            {
              ++i;
              v62 = v90;
              v61 = v89;
              v63 = 0;
LABEL_140:
              Instance = (__int64)v93;
              if ( !v93 )
                goto LABEL_173;
              if ( !EventTowerEntity__HasFlag(v93, 2, 0LL) )
                goto LABEL_148;
              stamp = (UnityEngine_Object_o *)this->fields.stamp;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(stamp, 0LL, 0LL) )
              {
                Instance = (__int64)this->fields.stamp;
                if ( !Instance )
                  goto LABEL_173;
                Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                      (UnityEngine_GameObject_o *)Instance,
                                      (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
                if ( !Instance )
                  goto LABEL_173;
                TitleInfoEventTowerStamp__StampProgress(
                  (TitleInfoEventTowerStamp_o *)Instance,
                  Point,
                  i,
                  this->fields.spriteRoot,
                  v81);
                v82 = 1;
              }
              else
              {
LABEL_148:
                v83 = (UnityEngine_Object_o *)this->fields.stamp;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v83, 0LL, 0LL) )
                {
                  Instance = (__int64)this->fields.stamp;
                  if ( !Instance )
                    goto LABEL_173;
                  Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)Instance,
                                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TitleInfoEventTowerStamp___);
                  if ( !Instance )
                    goto LABEL_173;
                  TitleInfoEventTowerStamp__ResetStamp((TitleInfoEventTowerStamp_o *)Instance, v11);
                }
                v82 = 0;
              }
              Instance = (__int64)this->fields.floorSprite;
              if ( Instance )
              {
                Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                                      (UnityEngine_Component_o *)Instance,
                                      (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerFloorLabel___);
                v84 = this->fields.eventDetailEntity;
                if ( v84 )
                {
                  if ( v93 )
                  {
                    if ( Instance )
                    {
                      TitleInfoEventTowerFloorLabel__SetFloorLabel(
                        (TitleInfoEventTowerFloorLabel_o *)Instance,
                        v84->fields.eventId,
                        i,
                        this->fields.TowerFloorMax,
                        Point,
                        v93->fields.floorLabel,
                        v63,
                        v82,
                        v88);
                      Instance = (__int64)this->fields.nameSprite;
                      if ( Instance )
                      {
                        Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                                              (UnityEngine_Component_o *)Instance,
                                              (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerNameLabel___);
                        v86 = this->fields.eventDetailEntity;
                        if ( v86 )
                        {
                          if ( Instance )
                          {
                            TitleInfoEventTowerNameLabel__SetTowerNameLabel(
                              (TitleInfoEventTowerNameLabel_o *)Instance,
                              v86->fields.eventId,
                              i,
                              v85);
                            Instance = (__int64)this->fields.baseSprite;
                            if ( Instance )
                            {
                              Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                                                    (UnityEngine_Component_o *)Instance,
                                                    (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerBase___);
                              if ( Instance )
                              {
                                TitleInfoEventTowerBase__SetBaseSprite(
                                  (TitleInfoEventTowerBase_o *)Instance,
                                  i,
                                  v82,
                                  v87);
                                if ( (v61 & 1) != 0 || !*v91 )
                                {
LABEL_168:
                                  if ( !this->fields.endCallback && v62 && v59 != 1 )
                                    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v62->fields.m_target)(
                                      v62->fields.original_method_info,
                                      *(_QWORD *)&v62->fields.extra_arg);
                                  return;
                                }
                                Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
              sub_1B8880C(Instance, v11);
            }
            if ( v93 )
            {
              if ( !byte_4A59CCB )
              {
                Instance = sub_1B885B0(&EventRewardSaveData_TypeInfo);
                byte_4A59CCB = 1;
              }
              v60 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
              if ( v60 == i )
              {
                v61 = v89;
                if ( v44[6] > 1u )
                {
                  v44[9] = v60;
                  Point = this->fields.TowerFloorMax;
                  EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &v93, v44[8], v60, 0LL);
                  v62 = v90;
                  v59 = 0;
                  i = v60;
LABEL_138:
                  Instance = (__int64)v93;
                  if ( !v93 )
                    goto LABEL_173;
                  v63 = !EventTowerEntity__HasFlag(v93, 1, 0LL);
                  goto LABEL_140;
                }
                goto LABEL_174;
              }
              v61 = v89;
              if ( !v89 )
              {
                ++i;
                v62 = v90;
                v59 = 0;
                Point = 0;
                goto LABEL_138;
              }
              if ( v44[6] < 2u )
                goto LABEL_174;
              Point = this->fields.TowerFloorMax;
              Instance = EventTowerMaster__TryGetEntity(
                           (EventTowerMaster_o *)MasterData_object,
                           &v93,
                           v44[8],
                           v44[9],
                           0LL);
              if ( !v93 )
                goto LABEL_173;
              openEffectId = v93->fields.openEffectId;
              this->fields.openEffectId = openEffectId;
              if ( v44[6] <= 1u )
LABEL_174:
                sub_1B88814(Instance, v11);
              v65 = v44[8];
              v44[9] = i;
              EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &v93, v65, i, 0LL);
              if ( !openEffectId )
              {
                Instance = (__int64)v93;
                v62 = v90;
                if ( !v93 )
                  goto LABEL_173;
                if ( EventTowerEntity__HasFlag(v93, 2, 0LL) )
                {
                  Instance = (__int64)this->fields.spriteRoot;
                  if ( !Instance )
                    goto LABEL_173;
                  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
                  x = localPosition.fields.x;
                  y = localPosition.fields.y;
                  z = localPosition.fields.z;
                  TitleInfoEventTower__SetTowerPosition(this, i, v78);
                  Instance = (__int64)this->fields.spriteRoot;
                  if ( !Instance )
                    goto LABEL_173;
                  Instance = (__int64)UnityEngine_Component__GetComponent_object_(
                                        (UnityEngine_Component_o *)Instance,
                                        (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_TitleInfoEventTowerSlideAnimation___);
                  if ( !Instance )
                    goto LABEL_173;
                  v95.fields.x = x;
                  v95.fields.y = y;
                  v95.fields.z = z;
                  TitleInfoEventTowerSlideAnimation__StartSlideAnim(
                    (TitleInfoEventTowerSlideAnimation_o *)Instance,
                    v90,
                    v95,
                    v79);
                }
                v59 = 1;
                goto LABEL_138;
              }
              v66 = sub_1B887FC(System_Action_TypeInfo);
              System_Action___ctor(
                (System_Action_o *)v66,
                (Il2CppObject *)v9,
                Method_TitleInfoEventTower___c__DisplayClass22_0__Open_b__0__,
                0LL);
              v68 = this->fields.eventDetailEntity;
              v62 = v90;
              if ( !v68 )
                goto LABEL_173;
              Instance = (__int64)TitleInfoEventTower__GetTowerEffectData(
                                    this,
                                    v68->fields.eventId,
                                    this->fields.openEffectId,
                                    v67);
              if ( Instance )
              {
                v70 = Instance;
                TitleInfoEventTower__PlayFade(
                  this,
                  1.0,
                  0.0,
                  *(float *)(Instance + 20),
                  *(_DWORD *)(Instance + 24),
                  0LL,
                  v69);
                v71 = *(float *)(v70 + 28);
                if ( v71 <= 0.0 )
                {
                  if ( !v66 )
                    goto LABEL_173;
                  (*(void (__fastcall **)(_QWORD, _QWORD))(v66 + 24))(*(_QWORD *)(v66 + 64), *(_QWORD *)(v66 + 40));
                }
                else
                {
                  v72 = BasicHelper__DelayCall(v71, (System_Action_o *)v66, 0LL);
                  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v72, 0LL);
                }
              }
              else
              {
                if ( !v66 )
                  goto LABEL_173;
                (*(void (__fastcall **)(_QWORD, _QWORD))(v66 + 24))(*(_QWORD *)(v66 + 64), *(_QWORD *)(v66 + 40));
                Instance = (__int64)this->fields.floorSprite;
                if ( !Instance )
                  goto LABEL_173;
                Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
                if ( !Instance )
                  goto LABEL_173;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
              }
              this->fields.endCallback = v90;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.endCallback, (int32_t)v90, v73, v74);
            }
            else
            {
              if ( v44[6] <= 1u )
                goto LABEL_174;
              v44[9] = i;
              Point = this->fields.TowerFloorMax;
              EventTowerMaster__TryGetEntity((EventTowerMaster_o *)MasterData_object, &v93, v44[8], i, 0LL);
              v62 = v90;
              v61 = v89;
            }
            v59 = 0;
            goto LABEL_138;
          }
        }
        else
        {
          for ( j = 1; ; j = byte_4A59CCB )
          {
            if ( !j )
            {
              Instance = sub_1B885B0(&EventRewardSaveData_TypeInfo);
              byte_4A59CCB = 1;
            }
            v34 = EventRewardSaveData_TypeInfo->static_fields;
            v35 = v34->_EventTowerState_k__BackingField;
            if ( !byte_4A59CCC )
            {
              Instance = sub_1B885B0(&EventRewardSaveData_TypeInfo);
              byte_4A59CCC = 1;
              v34 = EventRewardSaveData_TypeInfo->static_fields;
            }
            v36 = v35 + 1;
            v34->_EventTowerState_k__BackingField = v35 + 1;
            v37 = this->fields.eventDetailEntity;
            if ( !v37 )
              goto LABEL_173;
            v38 = v37->fields.eventId;
            if ( !byte_4A59CCB )
            {
              sub_1B885B0(&EventRewardSaveData_TypeInfo);
              byte_4A59CCB = 1;
              v36 = EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField;
            }
            Instance = QuestGroupMaster__GetEventTowerQuestId(v19, v38, v36 + 1, 1, 0LL);
            if ( (int)Instance < 1 )
              break;
            v39 = Instance;
            Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
            if ( !Instance )
              goto LABEL_173;
            Instance = clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Instance, v39, -1, 0, 0LL);
            if ( (Instance & 1) == 0 )
              break;
          }
          v40 = this->fields.eventDetailEntity;
          if ( !v40 )
            goto LABEL_173;
          EventRewardSaveData__SaveEventTowerState(v40->fields.eventId, 0LL);
        }
LABEL_74:
        v89 = 0;
        goto LABEL_75;
      }
    }
    if ( !byte_4A59CCB )
    {
      sub_1B885B0(&EventRewardSaveData_TypeInfo);
      byte_4A59CCB = 1;
    }
    if ( EventRewardSaveData_TypeInfo->static_fields->_EventTowerState_k__BackingField )
      goto LABEL_74;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_173;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    Instance = (__int64)this->fields.floorSprite;
    if ( !Instance )
      goto LABEL_173;
    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_173;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DC3 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC3 = 1;
    }
    Instance = (__int64)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Instance = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !Master_object )
      goto LABEL_173;
    Instance = DataMasterBase_object__object__int___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 &entity,
                 *(_DWORD *)(*(_QWORD *)(Instance + 184) + 4LL),
                 (const MethodInfo_311D988 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    if ( (Instance & 1) != 0 )
    {
      v32 = this->fields.eventDetailEntity;
      if ( !v32 || !entity )
        goto LABEL_173;
      if ( v32->fields.eventId == LODWORD(entity[6].klass) )
      {
        Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  EasingObject_o *v25; // x21
  System_Action_o *v26; // x22
  System_Action_o *v27; // x23

  if ( (byte_4A59C43 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
    sub_1B885B0(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__);
    sub_1B885B0(&Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__);
    sub_1B885B0(&TitleInfoEventTower___c__DisplayClass26_0_TypeInfo);
    byte_4A59C43 = 1;
  }
  v13 = sub_1B887FC(TitleInfoEventTower___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_6;
  *(float *)(v13 + 24) = from;
  *(float *)(v13 + 28) = to;
  *(_QWORD *)(v13 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 40) = endAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 40), (int32_t)endAction, v18, v19);
  TitleInfoEventTower__SetSpriteAlpha(this, *(float *)(v13 + 24), v20);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_EasingObject___);
  *(_QWORD *)(v13 + 16) = Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)Component_object, v23, v24);
  v25 = *(EasingObject_o **)(v13 + 16);
  v26 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)v13, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__0__, 0LL);
  v27 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)v13, Method_TitleInfoEventTower___c__DisplayClass26_0__PlayFade_b__1__, 0LL);
  if ( !v25 )
LABEL_6:
    sub_1B8880C(v14, v15);
  EasingObject__Play(v25, time, v26, v27, 0.0, easingType, 0LL);
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
    sub_1B8880C(baseSprite, method);
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

  if ( (byte_4A59C40 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventUiMaster___);
    sub_1B885B0(&EventUiEntity_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A59C40 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventUiMaster___);
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
        sub_1B8880C(Instance, v6);
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
  int32_t v22; // w2
  int32_t v23; // w3
  UnityEngine_Object_o *v24; // x21
  const MethodInfo *v25; // x4
  int32_t v26; // w2
  int32_t v27; // w3
  ServantStatusBattleListViewItem_o *p_simpleAnimationData; // x20
  UnityEngine_Object_o *v29; // x21
  UnityEngine_Object_o *gameObject; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  UnityEngine_Object_o *v33; // x21
  UnityEngine_Object_o *v34; // x20
  UnityEngine_Object_o *v35; // x20
  int32_t v36; // w2
  int32_t v37; // w3
  ServantStatusBattleListViewItem_o *p_endCallback; // x19
  struct System_Action_o *v39; // x20
  struct System_Action_o *endCallback; // t1
  int32_t v41; // [xsp+8h] [xbp-48h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A59C42 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&TitleInfoEventTower_TypeInfo);
    byte_4A59C42 = 1;
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
        v41 = this->fields.openEffectId;
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v17, v18, v19);
        v21 = System_String__Format(EFFECT_ANIMATION_END_FORMAT, v20, 0LL);
        if ( System_String__op_Equality(this->fields.animationName, v15, 0LL) )
        {
          this->fields.animationName = v21;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.animationName, (int32_t)v21, v22, v23);
          v24 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
          {
            klass = (UnityEngine_Animation_o *)this->fields.simpleAnimationData;
            if ( klass )
            {
              SimpleAnimation__Play_63844704((SimpleAnimation_o *)klass, *p_animationName, 0LL);
LABEL_35:
              TitleInfoEventTower__Open(this, 0LL, 0LL, 1, v25);
              return;
            }
          }
          else
          {
            v33 = (UnityEngine_Object_o *)*p_animationData;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v33, 0LL, 0LL) )
              goto LABEL_35;
            klass = *p_animationData;
            if ( *p_animationData )
            {
              UnityEngine_Animation__Play_69204472(klass, *p_animationName, 0LL);
              goto LABEL_35;
            }
          }
LABEL_48:
          sub_1B8880C(klass, v6);
        }
        if ( System_String__op_Equality(*p_animationName, v21, 0LL) )
        {
          this->fields.animationName = 0LL;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.animationName, 0, v26, v27);
          p_simpleAnimationData = (ServantStatusBattleListViewItem_o *)&this->fields.simpleAnimationData;
          v29 = (UnityEngine_Object_o *)this->fields.simpleAnimationData;
          this->fields.openEffectId = 0;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
          {
            klass = (UnityEngine_Animation_o *)p_simpleAnimationData->klass;
            if ( !p_simpleAnimationData->klass )
              goto LABEL_48;
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)klass,
                                                   0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__DestroyImmediate_69459568(gameObject, 0LL);
            p_simpleAnimationData->klass = 0LL;
          }
          else
          {
            v34 = (UnityEngine_Object_o *)*p_animationData;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
              goto LABEL_44;
            klass = *p_animationData;
            if ( !*p_animationData )
              goto LABEL_48;
            v35 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__DestroyImmediate_69459568(v35, 0LL);
            p_simpleAnimationData = (ServantStatusBattleListViewItem_o *)&this->fields.animationData;
            *p_animationData = 0LL;
          }
          sub_1B88554(p_simpleAnimationData, 0, v31, v32);
LABEL_44:
          klass = (UnityEngine_Animation_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
          if ( !klass )
            goto LABEL_48;
          MissionNotifyManager__CancelPause((MissionNotifyManager_o *)klass, 0LL);
          endCallback = this->fields.endCallback;
          p_endCallback = (ServantStatusBattleListViewItem_o *)&this->fields.endCallback;
          v39 = endCallback;
          if ( endCallback )
          {
            p_endCallback->klass = 0LL;
            sub_1B88554(p_endCallback, 0, v36, v37);
            ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v39->fields.m_target)(
              v39->fields.original_method_info,
              *(_QWORD *)&v39->fields.extra_arg);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventDetailEntity, (int32_t)value, (int32_t)method, v3);
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
  System_String_o *Component_object; // x0
  AssetData_o *effectAsset; // x20
  struct TitleInfoEventTower_o *_4__this; // x8
  System_String_o *OBJECT_NAME_EFFECT_BASE; // x21
  System_String_o *v7; // x0
  UnityEngine_Object_o *Object_37768612; // x20
  Il2CppObject *v9; // x0
  struct TitleInfoEventTower_o *v10; // x8
  UnityEngine_GameObject_o *v11; // x20
  struct TitleInfoEventTower_o *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  struct TitleInfoEventTower_o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  struct TitleInfoEventTower_o *v18; // x8
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  struct TitleInfoEventTower_o *v22; // x20
  struct TitleInfoEventTower_o *v23; // x8
  System_String_o *EFFECT_ANIMATION_START_FORMAT; // x21
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
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
  int32_t v38; // w3
  struct TitleInfoEventTower_o *v39; // x8
  int32_t v40; // [xsp+8h] [xbp-38h] BYREF
  int32_t openEffectId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A59C4B & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TitleInfoEventTower_TypeInfo);
    byte_4A59C4B = 1;
  }
  Component_object = (System_String_o *)TitleInfoEventTower_TypeInfo;
  effectAsset = this->fields.effectAsset;
  if ( !TitleInfoEventTower_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TitleInfoEventTower_TypeInfo);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_39;
  OBJECT_NAME_EFFECT_BASE = TitleInfoEventTower_TypeInfo->static_fields->OBJECT_NAME_EFFECT_BASE;
  v7 = System_Int32__ToString((int)_4__this + 120, 0LL);
  Component_object = System_String__Concat_61707032(OBJECT_NAME_EFFECT_BASE, v7, 0LL);
  if ( !effectAsset )
    goto LABEL_39;
  Object_37768612 = AssetData__GetObject_37768612(effectAsset, Component_object, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( Object_37768612 )
    v9 = (UnityEngine_GameObject_c *)Object_37768612->klass == UnityEngine_GameObject_TypeInfo
       ? (Il2CppObject *)Object_37768612
       : 0LL;
  else
    v9 = 0LL;
  Component_object = (System_String_o *)UnityEngine_Object__Instantiate_object_(
                                          v9,
                                          (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_39;
  v11 = (UnityEngine_GameObject_o *)Component_object;
  GameObjectExtensions__SafeSetParent_33730068(
    (UnityEngine_GameObject_o *)Component_object,
    v10->fields.effectRoot,
    0LL);
  if ( !v11 )
    goto LABEL_39;
  v12 = this->fields.__4__this;
  Component_object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                          v11,
                                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  if ( !v12 )
    goto LABEL_39;
  v12->fields.simpleAnimationData = (struct SimpleAnimation_o *)Component_object;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v12->fields.simpleAnimationData,
    (int32_t)Component_object,
    v13,
    v14);
  v15 = this->fields.__4__this;
  Component_object = (System_String_o *)UnityEngine_GameObject__GetComponent_object_(
                                          v11,
                                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !v15 )
    goto LABEL_39;
  v15->fields.animationData = (struct UnityEngine_Animation_o *)Component_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->fields.animationData, (int32_t)Component_object, v16, v17);
  v18 = this->fields.__4__this;
  if ( !v18 )
    goto LABEL_39;
  Component_object = (System_String_o *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)v18->fields.simpleAnimationData,
                                          0LL,
                                          0LL);
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
      Component_object = System_String__Format(EFFECT_ANIMATION_START_FORMAT, v25, 0LL);
      if ( v22 )
      {
        v22->fields.animationName = Component_object;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&v22->fields.animationName,
          (int32_t)Component_object,
          v26,
          v27);
        v28 = this->fields.__4__this;
        if ( v28 )
        {
          Component_object = (System_String_o *)v28->fields.simpleAnimationData;
          if ( Component_object )
          {
            SimpleAnimation__Play_63844704((SimpleAnimation_o *)Component_object, v28->fields.animationName, 0LL);
            return;
          }
        }
      }
    }
LABEL_39:
    sub_1B8880C(Component_object, method);
  }
  if ( !v22 )
    goto LABEL_39;
  animationData = (UnityEngine_Object_o *)v22->fields.animationData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(animationData, 0LL, 0LL) )
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
    Component_object = System_String__Format(v35, v36, 0LL);
    if ( !v33 )
      goto LABEL_39;
    v33->fields.animationName = Component_object;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v33->fields.animationName, (int32_t)Component_object, v37, v38);
    v39 = this->fields.__4__this;
    if ( !v39 )
      goto LABEL_39;
    Component_object = (System_String_o *)v39->fields.animationData;
    if ( !Component_object )
      goto LABEL_39;
    UnityEngine_Animation__Play_69204472((UnityEngine_Animation_o *)Component_object, v39->fields.animationName, 0LL);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTower___c__DisplayClass31_0___GetTowerShiftData_b__1(
        TitleInfoEventTower___c__DisplayClass31_0_o *this,
        TitleInfoEventTower_TowerShiftData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
  return info->fields.EventId == this->fields.eventId;
}


bool __fastcall TitleInfoEventTower___c__DisplayClass33_0___GetTowerEffectData_b__1(
        TitleInfoEventTower___c__DisplayClass33_0_o *this,
        TitleInfoEventTower_TowerEffectData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1B8880C(this, 0LL);
  return data->fields.EffectId == this->fields.effectId;
}