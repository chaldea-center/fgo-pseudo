void __fastcall EventInfoDetectiveRankControl___cctor(const MethodInfo *method)
{
  if ( (byte_4A5BB17 & 1) == 0 )
  {
    sub_1B885B0(&EventInfoDetectiveRankControl_TypeInfo);
    byte_4A5BB17 = 1;
  }
  EventInfoDetectiveRankControl_TypeInfo->static_fields->MISSION_CLEAR_DISP_COUNT_MAX = 9999999;
}


void __fastcall EventInfoDetectiveRankControl___ctor(EventInfoDetectiveRankControl_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BB16 & 1) == 0 )
  {
    sub_1B885B0(&EventInfoUIProgressControl_TypeInfo);
    byte_4A5BB16 = 1;
  }
  if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
  EventInfoUIProgressControl___ctor((EventInfoUIProgressControl_o *)this, 0LL);
}


int32_t __fastcall EventInfoDetectiveRankControl__GetCurrentDetectiveRank(
        EventInfoDetectiveRankControl_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  TerminalSceneComponent_o *mInstance; // x0
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8
  int32_t progressValue; // w20
  bool v7; // w0
  struct EventProgressValueEntity_o *v8; // x8

  if ( (byte_4A5BB15 & 1) == 0 )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5BB15 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v3->static_fields->mInstance;
  if ( !mInstance )
    sub_1B8880C(0LL, method);
  if ( !TerminalSceneComponent__IsMapActive(mInstance, 0LL) )
  {
    currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
    if ( currentEventProgressValueEntity )
      return currentEventProgressValueEntity->fields.progressValue;
  }
  v7 = EventInfoUIProgressControl__CheckEventProgressValueSaveData((EventInfoUIProgressControl_o *)this, 0LL);
  v8 = this->fields.currentEventProgressValueEntity;
  if ( v7 )
  {
    if ( v8 )
      return EventInfoUIProgressControl__GetEventProgressValueSaveData((EventInfoUIProgressControl_o *)this, 0, 0LL);
    return 0;
  }
  else
  {
    if ( v8 )
      progressValue = v8->fields.progressValue;
    else
      progressValue = 0;
    EventInfoUIProgressControl__SaveEventProgressValueSaveData((EventInfoUIProgressControl_o *)this, progressValue, 0LL);
  }
  return progressValue;
}


void __fastcall EventInfoDetectiveRankControl__Initialization(
        EventInfoDetectiveRankControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x8
  __int64 v8; // x8
  AssetData_o *v9; // x0
  UnityEngine_Object_o *Object_37768612; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct UnityEngine_GameObject_o *v13; // x8
  UnityEngine_GameObject_c *v14; // x1
  struct UnityEngine_GameObject_o **p_effectBasePrefab; // x0
  System_String_o *titleBgSpriteName; // x20
  UISprite_o *titleBgSprite; // x21
  System_String_o *condtionBgSpriteName; // x20
  UISprite_o *condtionBgSprite; // x21
  System_String_o *missionCountBgSpriteName; // x20
  UISprite_o *missionCountBgSprite; // x21
  UnityEngine_Object_o *missionStartedCountBgSprite; // x20
  System_String_o *missionStartedCountBgSpriteName; // x20
  UISprite_o *v24; // x21
  UnityEngine_Component_o *v25; // x8
  char v26; // w19

  if ( (byte_4A5BB0F & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_11143/*"RankUpEffect"*/);
    byte_4A5BB0F = 1;
  }
  EventInfoUIProgressControl__Initialization((EventInfoUIProgressControl_o *)this, entity, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  }
  v7 = **(_QWORD **)&gameObject[7].fields.m_CachedPtr;
  if ( !v7 )
    goto LABEL_41;
  v8 = *(_QWORD *)(v7 + 264);
  if ( !v8 )
    goto LABEL_41;
  v9 = *(AssetData_o **)(v8 + 240);
  if ( !v9 )
    goto LABEL_18;
  Object_37768612 = AssetData__GetObject_37768612(v9, (System_String_o *)StringLiteral_11143/*"RankUpEffect"*/, 0LL);
  v13 = (struct UnityEngine_GameObject_o *)Object_37768612;
  if ( Object_37768612 )
  {
    v14 = UnityEngine_GameObject_TypeInfo;
    if ( (UnityEngine_GameObject_c *)Object_37768612->klass == UnityEngine_GameObject_TypeInfo )
    {
      this->fields.effectBasePrefab = (struct UnityEngine_GameObject_o *)Object_37768612;
      p_effectBasePrefab = &this->fields.effectBasePrefab;
      if ( v13->klass == v14 )
        goto LABEL_17;
    }
    sub_1B88ACC(v13);
  }
  this->fields.effectBasePrefab = v13;
  p_effectBasePrefab = &this->fields.effectBasePrefab;
LABEL_17:
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_effectBasePrefab, (int32_t)v13, v11, v12);
LABEL_18:
  if ( !System_String__IsNullOrEmpty(this->fields.titleBgSpriteName, 0LL) )
  {
    titleBgSprite = this->fields.titleBgSprite;
    titleBgSpriteName = this->fields.titleBgSpriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(titleBgSprite, titleBgSpriteName, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.titleBgSprite;
    if ( !gameObject )
      goto LABEL_41;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
      gameObject,
      gameObject->klass[2]._1.interopData);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.condtionBgSpriteName, 0LL) )
  {
    condtionBgSprite = this->fields.condtionBgSprite;
    condtionBgSpriteName = this->fields.condtionBgSpriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(condtionBgSprite, condtionBgSpriteName, 0LL);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.missionCountBgSpriteName, 0LL) )
  {
    missionCountBgSprite = this->fields.missionCountBgSprite;
    missionCountBgSpriteName = this->fields.missionCountBgSpriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(missionCountBgSprite, missionCountBgSpriteName, 0LL);
  }
  missionStartedCountBgSprite = (UnityEngine_Object_o *)this->fields.missionStartedCountBgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(missionStartedCountBgSprite, 0LL, 0LL)
    && !System_String__IsNullOrEmpty(this->fields.missionStartedCountBgSpriteName, 0LL) )
  {
    v24 = this->fields.missionStartedCountBgSprite;
    missionStartedCountBgSpriteName = this->fields.missionStartedCountBgSpriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetEventUI(v24, missionStartedCountBgSpriteName, 0LL);
    v25 = (UnityEngine_Component_o *)this->fields.missionStartedCountBgSprite;
    if ( v25 )
    {
      v26 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(v25, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, v26 & 1, 0LL);
        return;
      }
    }
LABEL_41:
    sub_1B8880C(gameObject, v5);
  }
}


void __fastcall EventInfoDetectiveRankControl__PlayAnim(
        EventInfoDetectiveRankControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x19
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_Object_o *effectBasePrefab; // x21
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8
  int32_t progressValue; // w8
  Il2CppObject *v17; // x21
  UnityEngine_Component_o *rankSprite; // x8
  UnityEngine_GameObject_o *v19; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x20
  System_Action_o *v22; // x21
  System_Action_o *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3

  if ( (byte_4A5BB14 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__0__);
    sub_1B885B0(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__1__);
    sub_1B885B0(&EventInfoDetectiveRankControl___c__DisplayClass26_0_TypeInfo);
    byte_4A5BB14 = 1;
  }
  v7 = sub_1B887FC(EventInfoDetectiveRankControl___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 32) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)callback, v12, v13);
  if ( type == 1 && this->fields.currentEventProgressValueEntity )
  {
    effectBasePrefab = (UnityEngine_Object_o *)this->fields.effectBasePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = (Il2CppObject *)UnityEngine_Object__op_Equality(effectBasePrefab, 0LL, 0LL);
    if ( ((unsigned __int8)v8 & 1) == 0 )
    {
      currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
      if ( !currentEventProgressValueEntity )
        goto LABEL_18;
      progressValue = currentEventProgressValueEntity->fields.progressValue;
      *(_DWORD *)(v7 + 24) = progressValue;
      if ( this->fields.userRank < progressValue )
      {
        v17 = (Il2CppObject *)this->fields.effectBasePrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v8 = UnityEngine_Object__Instantiate_object_(
               v17,
               (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        rankSprite = (UnityEngine_Component_o *)this->fields.rankSprite;
        if ( rankSprite )
        {
          v19 = (UnityEngine_GameObject_o *)v8;
          gameObject = UnityEngine_Component__get_gameObject(rankSprite, 0LL);
          GameObjectExtensions__SafeSetParent_33730068(v19, gameObject, 0LL);
          if ( v19 )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 v19,
                                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
            v22 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(
              v22,
              (Il2CppObject *)v7,
              Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__0__,
              0LL);
            if ( Component_object )
            {
              CommonEffectActionComponent__SetEventAction(
                (CommonEffectActionComponent_o *)Component_object,
                0,
                v22,
                0LL);
              v23 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
              System_Action___ctor(
                v23,
                (Il2CppObject *)v7,
                Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__1__,
                0LL);
              Component_object[2].monitor = v23;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&Component_object[2].monitor, (int32_t)v23, v24, v25);
              return;
            }
          }
        }
LABEL_18:
        sub_1B8880C(v8, v9);
      }
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v7 + 32), 0LL);
}


void __fastcall EventInfoDetectiveRankControl__Redisplay(
        EventInfoDetectiveRankControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int32_t CurrentDetectiveRank; // w0
  const MethodInfo *v5; // x2
  int32_t v6; // w1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  EventInfoUIProgressControl__Redisplay((EventInfoUIProgressControl_o *)this, 0LL);
  CurrentDetectiveRank = EventInfoDetectiveRankControl__GetCurrentDetectiveRank(this, v3);
  this->fields.userRank = CurrentDetectiveRank;
  EventInfoDetectiveRankControl__SetupTitleBg(this, CurrentDetectiveRank, v5);
  EventInfoDetectiveRankControl__SetupCondtionText(this, v6, v7);
  EventInfoDetectiveRankControl__SetupMissionClearCount(this, v8);
  EventInfoDetectiveRankControl__SetupMissionStartedCount(this, v9);
}


void __fastcall EventInfoDetectiveRankControl__Setup(
        EventInfoDetectiveRankControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  int32_t CurrentDetectiveRank; // w0
  const MethodInfo *v6; // x2
  int32_t v7; // w1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  EventInfoUIProgressControl__Setup((EventInfoUIProgressControl_o *)this, entitys, 0LL);
  CurrentDetectiveRank = EventInfoDetectiveRankControl__GetCurrentDetectiveRank(this, v4);
  this->fields.userRank = CurrentDetectiveRank;
  EventInfoDetectiveRankControl__SetupTitleBg(this, CurrentDetectiveRank, v6);
  EventInfoDetectiveRankControl__SetupCondtionText(this, v7, v8);
  EventInfoDetectiveRankControl__SetupMissionClearCount(this, v9);
  EventInfoDetectiveRankControl__SetupMissionStartedCount(this, v10);
}


void __fastcall EventInfoDetectiveRankControl__SetupCondtionText(
        EventInfoDetectiveRankControl_o *this,
        int32_t userRank,
        const MethodInfo *method)
{
  EventInfoDetectiveRankControl_o *v3; // x19
  struct EventProgressValueEntity_o *nextEventProgressValueEntity; // x8
  UILabel_o *conditionTextLabel; // x19
  EventInfoDetectiveRankControl_o *condMessage; // x1

  v3 = this;
  if ( (byte_4A5BB11 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    this = (EventInfoDetectiveRankControl_o *)sub_1B885B0(&StringLiteral_5664/*"EVENT_PROGRESS_NEXT_RANK_NONE"*/);
    byte_4A5BB11 = 1;
  }
  nextEventProgressValueEntity = v3->fields.nextEventProgressValueEntity;
  conditionTextLabel = v3->fields.conditionTextLabel;
  if ( nextEventProgressValueEntity )
  {
    condMessage = (EventInfoDetectiveRankControl_o *)nextEventProgressValueEntity->fields.condMessage;
    if ( conditionTextLabel )
      goto LABEL_5;
LABEL_9:
    sub_1B8880C(this, condMessage);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (EventInfoDetectiveRankControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5664/*"EVENT_PROGRESS_NEXT_RANK_NONE"*/, 0LL);
  condMessage = this;
  if ( !conditionTextLabel )
    goto LABEL_9;
LABEL_5:
  UILabel__set_text(conditionTextLabel, (System_String_o *)condMessage, 0LL);
}


void __fastcall EventInfoDetectiveRankControl__SetupMissionClearCount(
        EventInfoDetectiveRankControl_o *this,
        const MethodInfo *method)
{
  UserEventRandomMissionMaster_o *Master_object; // x0
  __int64 v4; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t UserEventRandomMissionTotalClearCount; // w20
  System_String_o *v7; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  EventInfoDetectiveRankControl_c *v11; // x8
  System_String_o *v12; // x21
  int MISSION_CLEAR_DISP_COUNT_MAX; // w8
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  bool v16; // cc
  System_String_o *v17; // x20
  System_String_o *v18; // x0
  int v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5BB12 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&EventInfoDetectiveRankControl_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_5644/*"EVENT_POINT_COMMON_FORMAT"*/);
    sub_1B885B0(&StringLiteral_3769/*"COMMON_COUNT_OPERATOR_PLUS"*/);
    byte_4A5BB12 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity || !Master_object )
    goto LABEL_19;
  UserEventRandomMissionTotalClearCount = UserEventRandomMissionMaster__GetUserEventRandomMissionTotalClearCount(
                                            Master_object,
                                            eventUiEntity->fields.eventId,
                                            0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5644/*"EVENT_POINT_COMMON_FORMAT"*/, 0LL);
  v11 = EventInfoDetectiveRankControl_TypeInfo;
  v12 = v7;
  if ( !EventInfoDetectiveRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoDetectiveRankControl_TypeInfo);
    v11 = EventInfoDetectiveRankControl_TypeInfo;
  }
  MISSION_CLEAR_DISP_COUNT_MAX = v11->static_fields->MISSION_CLEAR_DISP_COUNT_MAX;
  if ( UserEventRandomMissionTotalClearCount < MISSION_CLEAR_DISP_COUNT_MAX )
    MISSION_CLEAR_DISP_COUNT_MAX = UserEventRandomMissionTotalClearCount;
  v19 = MISSION_CLEAR_DISP_COUNT_MAX;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v8, v9, v10);
  v15 = System_String__Format(v12, v14, 0LL);
  v16 = UserEventRandomMissionTotalClearCount <= EventInfoDetectiveRankControl_TypeInfo->static_fields->MISSION_CLEAR_DISP_COUNT_MAX;
  v17 = v15;
  if ( !v16 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3769/*"COMMON_COUNT_OPERATOR_PLUS"*/, 0LL);
    v17 = System_String__Concat_61707032(v17, v18, 0LL);
  }
  Master_object = (UserEventRandomMissionMaster_o *)this->fields.missionCountTextLabel;
  if ( !Master_object )
LABEL_19:
    sub_1B8880C(Master_object, v4);
  UILabel__set_text((UILabel_o *)Master_object, v17, 0LL);
}


void __fastcall EventInfoDetectiveRankControl__SetupMissionStartedCount(
        EventInfoDetectiveRankControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *missionStartedCountBgSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *missionStartedCountTextLabel; // x20
  struct EventUiEntity_o *eventUiEntity; // x8
  System_Collections_Generic_List_UserEventRandomMissionEntity__o *UserEventRandomMissionProgressList; // x20
  struct EventUiEntity_o *v9; // x8
  int32_t RandomMissionMaxNum; // w8
  UILabel_o *v11; // x19
  int v12; // w22
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_String_o *v16; // x21
  Il2CppObject *v17; // x20
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x0
  int v22; // [xsp+8h] [xbp-38h] BYREF
  int32_t size; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5BB13 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserEventRandomMissionEntity__get_Count__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_12376/*"SUM_INFO"*/);
    byte_4A5BB13 = 1;
  }
  missionStartedCountBgSprite = (UnityEngine_Object_o *)this->fields.missionStartedCountBgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(missionStartedCountBgSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.missionStartedCountBgSprite;
    if ( !gameObject )
      goto LABEL_28;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
    {
      missionStartedCountTextLabel = (UnityEngine_Object_o *)this->fields.missionStartedCountTextLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(missionStartedCountTextLabel, 0LL, 0LL) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
        eventUiEntity = this->fields.eventUiEntity;
        if ( eventUiEntity )
        {
          if ( gameObject )
          {
            UserEventRandomMissionProgressList = UserEventRandomMissionMaster__GetUserEventRandomMissionProgressList(
                                                   (UserEventRandomMissionMaster_o *)gameObject,
                                                   eventUiEntity->fields.eventId,
                                                   0LL);
            gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventDetailMaster___);
            v9 = this->fields.eventUiEntity;
            if ( v9 )
            {
              if ( gameObject )
              {
                gameObject = (UnityEngine_Component_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                          v9->fields.eventId,
                                                          (const MethodInfo_311D934 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
                if ( gameObject )
                {
                  RandomMissionMaxNum = EventDetailEntity__GetRandomMissionMaxNum(
                                          (EventDetailEntity_o *)gameObject,
                                          0LL);
                  v11 = this->fields.missionStartedCountTextLabel;
                  v12 = RandomMissionMaxNum ? RandomMissionMaxNum : 10;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_12376/*"SUM_INFO"*/,
                                                            0LL);
                  if ( UserEventRandomMissionProgressList )
                  {
                    v16 = (System_String_o *)gameObject;
                    size = UserEventRandomMissionProgressList->fields._size;
                    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &size, v13, v14, v15);
                    v22 = v12;
                    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v18, v19, v20);
                    gameObject = (UnityEngine_Component_o *)System_String__Format_61721404(v16, v17, v21, 0LL);
                    if ( v11 )
                    {
                      UILabel__set_text(v11, (System_String_o *)gameObject, 0LL);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_28:
        sub_1B8880C(gameObject, v4);
      }
    }
  }
}


void __fastcall EventInfoDetectiveRankControl__SetupTitleBg(
        EventInfoDetectiveRankControl_o *this,
        int32_t userRank,
        const MethodInfo *method)
{
  __int64 v5; // x21
  struct UISprite_o *titleBgSprite; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__o *viewDataList; // x20
  System_Predicate_object__o *v9; // x22
  Il2CppObject *v10; // x0
  UISprite_o *rankSprite; // x20
  System_String_o *monitor; // x21

  if ( (byte_4A5BB10 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
    sub_1B885B0(&System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
    sub_1B885B0(&Method_EventInfoDetectiveRankControl___c__DisplayClass21_0__SetupTitleBg_b__0__);
    sub_1B885B0(&EventInfoDetectiveRankControl___c__DisplayClass21_0_TypeInfo);
    byte_4A5BB10 = 1;
  }
  v5 = sub_1B887FC(EventInfoDetectiveRankControl___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_11;
  *(_DWORD *)(v5 + 16) = userRank;
  viewDataList = this->fields.viewDataList;
  v9 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_EventInfoDetectiveRankControl___c__DisplayClass21_0__SetupTitleBg_b__0__,
    0LL);
  if ( !viewDataList )
    goto LABEL_11;
  v10 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)viewDataList,
          (System_Predicate_T__o *)v9,
          (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( v10 )
  {
    rankSprite = this->fields.rankSprite;
    monitor = (System_String_o *)v10[1].monitor;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(rankSprite, monitor, 0LL);
    titleBgSprite = this->fields.titleBgSprite;
    if ( titleBgSprite )
    {
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))titleBgSprite->klass->vtable._33_MakePixelPerfect.method)(
        titleBgSprite,
        titleBgSprite->klass->vtable._34_get_minWidth.methodPtr);
      return;
    }
LABEL_11:
    sub_1B8880C(titleBgSprite, v7);
  }
}


void __fastcall EventInfoDetectiveRankControl_ViewData___ctor(
        EventInfoDetectiveRankControl_ViewData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoDetectiveRankControl___c__DisplayClass21_0___ctor(
        EventInfoDetectiveRankControl___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoDetectiveRankControl___c__DisplayClass21_0___SetupTitleBg_b__0(
        EventInfoDetectiveRankControl___c__DisplayClass21_0_o *this,
        EventInfoDetectiveRankControl_ViewData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B8880C(this, 0LL);
  return n->fields.DetectiveRank == this->fields.userRank;
}


void __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___ctor(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__0(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventInfoDetectiveRankControl_o *_4__this; // x0
  const MethodInfo *v5; // x2

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventInfoDetectiveRankControl__SetupTitleBg(_4__this, this->fields.afterRank, v2),
        (_4__this = this->fields.__4__this) == 0LL)
    || (EventInfoDetectiveRankControl__SetupCondtionText(_4__this, (int32_t)method, v5),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1B8880C(_4__this, method);
  }
  EventInfoDetectiveRankControl__SetupMissionClearCount(_4__this, method);
}


void __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__1(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventInfoDetectiveRankControl___c__DisplayClass26_0_o *v2; // x19
  struct EventInfoDetectiveRankControl_o *_4__this; // x8
  System_Collections_Generic_List_object__o *viewDataList; // x20
  System_Predicate_object__o *_9__2; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  struct EventInfoDetectiveRankControl_o *v8; // x8
  Il2CppObject *callback; // x21
  System_Collections_Generic_List_object__o *v10; // x20
  System_Predicate_object__o *_9__3; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  Il2CppObject *v14; // x23
  Il2CppObject *Instance; // x20
  System_String_o *v16; // x22
  System_String_o *v17; // x0
  System_Action_o *_9__4; // x23
  EventInfoDetectiveRankControl___c__DisplayClass26_0_o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3

  v2 = this;
  if ( (byte_4A5BB18 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__2__);
    sub_1B885B0(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__3__);
    sub_1B885B0(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__4__);
    sub_1B885B0(&StringLiteral_5665/*"EVENT_PROGRESS_RANKUP_MESSAGE"*/);
    this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)sub_1B885B0(&StringLiteral_5666/*"EVENT_PROGRESS_RANKUP_TITLE"*/);
    byte_4A5BB18 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  viewDataList = (System_Collections_Generic_List_object__o *)_4__this->fields.viewDataList;
  _9__2 = (System_Predicate_object__o *)v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
    System_Predicate_object____ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__2__,
      0LL);
    v2->fields.__9__2 = (struct System_Predicate_EventInfoDetectiveRankControl_ViewData__o *)_9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v6, v7);
  }
  if ( !viewDataList )
    goto LABEL_19;
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_Collections_Generic_List_object___Find(
                                                                    viewDataList,
                                                                    (System_Predicate_T__o *)_9__2,
                                                                    (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( !this )
    goto LABEL_19;
  v8 = v2->fields.__4__this;
  if ( !v8 )
    goto LABEL_19;
  callback = (Il2CppObject *)this->fields.callback;
  v10 = (System_Collections_Generic_List_object__o *)v8->fields.viewDataList;
  _9__3 = (System_Predicate_object__o *)v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
    System_Predicate_object____ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__3__,
      0LL);
    v2->fields.__9__3 = (struct System_Predicate_EventInfoDetectiveRankControl_ViewData__o *)_9__3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v12, v13);
  }
  if ( !v10 )
    goto LABEL_19;
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_Collections_Generic_List_object___Find(
                                                                    v10,
                                                                    (System_Predicate_T__o *)_9__3,
                                                                    (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( !this )
    goto LABEL_19;
  v14 = (Il2CppObject *)this->fields.callback;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5666/*"EVENT_PROGRESS_RANKUP_TITLE"*/, 0LL);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5665/*"EVENT_PROGRESS_RANKUP_MESSAGE"*/, 0LL);
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_String__Format_61721404(
                                                                    v17,
                                                                    callback,
                                                                    v14,
                                                                    0LL);
  _9__4 = v2->fields.__9__4;
  v19 = this;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)v2,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__4__,
      0LL);
    v2->fields.__9__4 = _9__4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v20, v21);
  }
  if ( !Instance )
LABEL_19:
    sub_1B8880C(this, method);
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    v16,
    (System_String_o *)v19,
    _9__4,
    -1,
    0,
    30,
    0,
    0,
    28,
    1,
    0,
    0LL,
    0.0,
    0LL);
}


bool __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__2(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        EventInfoDetectiveRankControl_ViewData_o *n,
        const MethodInfo *method)
{
  struct EventInfoDetectiveRankControl_o *_4__this; // x8

  if ( !n || (_4__this = this->fields.__4__this) == 0LL )
    sub_1B8880C(this, n);
  return n->fields.DetectiveRank == _4__this->fields.userRank;
}


bool __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__3(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        EventInfoDetectiveRankControl_ViewData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B8880C(this, 0LL);
  return n->fields.DetectiveRank == this->fields.afterRank;
}


void __fastcall EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__4(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventInfoUIProgressControl_o *_4__this; // x0
  int32_t afterRank; // w1

  if ( (byte_4A5BB19 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5BB19 = 1;
  }
  _4__this = (EventInfoUIProgressControl_o *)this->fields.__4__this;
  if ( !_4__this
    || (afterRank = this->fields.afterRank,
        LODWORD(_4__this[2].monitor) = afterRank,
        EventInfoUIProgressControl__SaveEventProgressValueSaveData(_4__this, afterRank, 0LL),
        (_4__this = (EventInfoUIProgressControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(_4__this, method);
  }
  CommonUI__CloseNotificationDialog((CommonUI_o *)_4__this, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}