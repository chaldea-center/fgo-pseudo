void EventInfoDetectiveRankControl___cctor(const MethodInfo *method)
{
  if ( (byte_4C444A3 & 1) == 0 )
  {
    sub_1C37058(&EventInfoDetectiveRankControl_TypeInfo);
    byte_4C444A3 = 1;
  }
  EventInfoDetectiveRankControl_TypeInfo->static_fields->MISSION_CLEAR_DISP_COUNT_MAX = 9999999;
}


void EventInfoDetectiveRankControl___ctor(EventInfoDetectiveRankControl_o *this, const MethodInfo *method)
{
  if ( (byte_4C444A2 & 1) == 0 )
  {
    sub_1C37058(&EventInfoUIProgressControl_TypeInfo);
    byte_4C444A2 = 1;
  }
  if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
  EventInfoUIProgressControl___ctor((EventInfoUIProgressControl_o *)this, 0);
}


int32_t EventInfoDetectiveRankControl__GetCurrentDetectiveRank(
        EventInfoDetectiveRankControl_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x20
  TerminalSceneComponent_o *v5; // x0
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8
  TerminalSceneComponent_c *v7; // x0
  int32_t progressValue; // w20
  bool v9; // w0
  struct EventProgressValueEntity_o *v10; // x8

  if ( (byte_4C444A1 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C444A1 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (TerminalSceneComponent_o *)UnityEngine_Object__op_Equality(mInstance, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
    if ( !currentEventProgressValueEntity )
      goto LABEL_33;
    return currentEventProgressValueEntity->fields.progressValue;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
  }
  v7 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v7 = TerminalSceneComponent_TypeInfo;
  }
  v5 = v7->static_fields->mInstance;
  if ( !v5 )
LABEL_33:
    sub_1C372B4(v5);
  if ( !TerminalSceneComponent__IsMapActive(v5, 0) )
  {
    currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
    if ( currentEventProgressValueEntity )
      return currentEventProgressValueEntity->fields.progressValue;
  }
  v9 = EventInfoUIProgressControl__CheckEventProgressValueSaveData((EventInfoUIProgressControl_o *)this, 0);
  v10 = this->fields.currentEventProgressValueEntity;
  if ( v9 )
  {
    if ( v10 )
      return EventInfoUIProgressControl__GetEventProgressValueSaveData((EventInfoUIProgressControl_o *)this, 0, 0);
    return 0;
  }
  else
  {
    if ( v10 )
      progressValue = v10->fields.progressValue;
    else
      progressValue = 0;
    EventInfoUIProgressControl__SaveEventProgressValueSaveData((EventInfoUIProgressControl_o *)this, progressValue, 0);
  }
  return progressValue;
}


void EventInfoDetectiveRankControl__Initialization(
        EventInfoDetectiveRankControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v5; // x0
  UnityEngine_Object_o *mInstance; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x8
  __int64 v9; // x8
  AssetData_o *v10; // x0
  UnityEngine_Object_o *Object_40510596; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct UnityEngine_GameObject_o *v14; // x8
  UnityEngine_GameObject_c *v15; // x1
  struct UnityEngine_GameObject_o **p_effectBasePrefab; // x0
  System_String_o *titleBgSpriteName; // x20
  UISprite_o *titleBgSprite; // x21
  System_String_o *condtionBgSpriteName; // x20
  UISprite_o *condtionBgSprite; // x21
  System_String_o *missionCountBgSpriteName; // x20
  UISprite_o *missionCountBgSprite; // x21
  UnityEngine_Object_o *missionStartedCountBgSprite; // x20
  System_String_o *missionStartedCountBgSpriteName; // x20
  UISprite_o *v25; // x21
  UnityEngine_Component_o *v26; // x8
  char v27; // w19

  if ( (byte_4C4449B & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&UnityEngine_GameObject_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&StringLiteral_11178/*"RankUpEffect"*/);
    byte_4C4449B = 1;
  }
  EventInfoUIProgressControl__Initialization((EventInfoUIProgressControl_o *)this, entity, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v5->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
    goto LABEL_27;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  }
  v8 = *(_QWORD *)gameObject[7].fields.m_CachedPtr;
  if ( !v8 )
    goto LABEL_50;
  v9 = *(_QWORD *)(v8 + 264);
  if ( !v9 )
    goto LABEL_50;
  v10 = *(AssetData_o **)(v9 + 248);
  if ( !v10 )
    goto LABEL_27;
  Object_40510596 = AssetData__GetObject_40510596(v10, (System_String_o *)StringLiteral_11178/*"RankUpEffect"*/, 0);
  v14 = (struct UnityEngine_GameObject_o *)Object_40510596;
  if ( Object_40510596 )
  {
    v15 = UnityEngine_GameObject_TypeInfo;
    if ( (UnityEngine_GameObject_c *)Object_40510596->klass == UnityEngine_GameObject_TypeInfo )
    {
      this->fields.effectBasePrefab = (struct UnityEngine_GameObject_o *)Object_40510596;
      p_effectBasePrefab = &this->fields.effectBasePrefab;
      if ( v14->klass == v15 )
        goto LABEL_26;
    }
    sub_1C37574(v14);
  }
  this->fields.effectBasePrefab = v14;
  p_effectBasePrefab = &this->fields.effectBasePrefab;
LABEL_26:
  sub_1C36FFC((CGThumbnailListItem_o *)p_effectBasePrefab, (int32_t)v14, v12, v13);
LABEL_27:
  if ( !System_String__IsNullOrEmpty(this->fields.titleBgSpriteName, 0) )
  {
    titleBgSprite = this->fields.titleBgSprite;
    titleBgSpriteName = this->fields.titleBgSpriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(titleBgSprite, titleBgSpriteName, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.titleBgSprite;
    if ( !gameObject )
      goto LABEL_50;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))gameObject->klass[2]._1.parent)(
      gameObject,
      gameObject->klass[2]._1.generic_class);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.condtionBgSpriteName, 0) )
  {
    condtionBgSprite = this->fields.condtionBgSprite;
    condtionBgSpriteName = this->fields.condtionBgSpriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(condtionBgSprite, condtionBgSpriteName, 0);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.missionCountBgSpriteName, 0) )
  {
    missionCountBgSprite = this->fields.missionCountBgSprite;
    missionCountBgSpriteName = this->fields.missionCountBgSpriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(missionCountBgSprite, missionCountBgSpriteName, 0);
  }
  missionStartedCountBgSprite = (UnityEngine_Object_o *)this->fields.missionStartedCountBgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(missionStartedCountBgSprite, 0, 0)
    && !System_String__IsNullOrEmpty(this->fields.missionStartedCountBgSpriteName, 0) )
  {
    v25 = this->fields.missionStartedCountBgSprite;
    missionStartedCountBgSpriteName = this->fields.missionStartedCountBgSpriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetEventUI(v25, missionStartedCountBgSpriteName, 0);
    v26 = (UnityEngine_Component_o *)this->fields.missionStartedCountBgSprite;
    if ( v26 )
    {
      v27 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(v26, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, v27 & 1, 0);
        return;
      }
    }
LABEL_50:
    sub_1C372B4(gameObject);
  }
}


void EventInfoDetectiveRankControl__PlayAnim(
        EventInfoDetectiveRankControl_o *this,
        int32_t type,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x19
  Il2CppObject *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_Object_o *effectBasePrefab; // x21
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8
  int32_t progressValue; // w8
  Il2CppObject *v16; // x21
  UnityEngine_Component_o *rankSprite; // x8
  UnityEngine_GameObject_o *v18; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x20
  System_Action_o *v21; // x21
  System_Action_o *v22; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4C444A0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__0__);
    sub_1C37058(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__1__);
    sub_1C37058(&EventInfoDetectiveRankControl___c__DisplayClass26_0_TypeInfo);
    byte_4C444A0 = 1;
  }
  v7 = sub_1C372A4(EventInfoDetectiveRankControl___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 32) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)callback, v11, v12);
  if ( type == 1 && this->fields.currentEventProgressValueEntity )
  {
    effectBasePrefab = (UnityEngine_Object_o *)this->fields.effectBasePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = (Il2CppObject *)UnityEngine_Object__op_Equality(effectBasePrefab, 0, 0);
    if ( ((unsigned __int8)v8 & 1) == 0 )
    {
      currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
      if ( !currentEventProgressValueEntity )
        goto LABEL_18;
      progressValue = currentEventProgressValueEntity->fields.progressValue;
      *(_DWORD *)(v7 + 24) = progressValue;
      if ( this->fields.userRank < progressValue )
      {
        v16 = (Il2CppObject *)this->fields.effectBasePrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v8 = UnityEngine_Object__Instantiate_object_(
               v16,
               (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        rankSprite = (UnityEngine_Component_o *)this->fields.rankSprite;
        if ( rankSprite )
        {
          v18 = (UnityEngine_GameObject_o *)v8;
          gameObject = UnityEngine_Component__get_gameObject(rankSprite, 0);
          GameObjectExtensions__SafeSetParent_36138184(v18, gameObject, 0);
          if ( v18 )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 v18,
                                 (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
            v21 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            System_Action___ctor(
              v21,
              (Il2CppObject *)v7,
              Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__0__,
              0);
            if ( Component_object )
            {
              CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v21, 0);
              v22 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
              System_Action___ctor(
                v22,
                (Il2CppObject *)v7,
                Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__1__,
                0);
              Component_object[2].monitor = v22;
              sub_1C36FFC((CGThumbnailListItem_o *)&Component_object[2].monitor, (int32_t)v22, v23, v24);
              return;
            }
          }
        }
LABEL_18:
        sub_1C372B4(v8);
      }
    }
  }
  ActionExtensions__Call(*(System_Action_o **)(v7 + 32), 0);
}


void EventInfoDetectiveRankControl__Redisplay(EventInfoDetectiveRankControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int32_t CurrentDetectiveRank; // w0
  const MethodInfo *v5; // x2
  int32_t v6; // w1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  EventInfoUIProgressControl__Redisplay((EventInfoUIProgressControl_o *)this, 0);
  CurrentDetectiveRank = EventInfoDetectiveRankControl__GetCurrentDetectiveRank(this, v3);
  this->fields.userRank = CurrentDetectiveRank;
  EventInfoDetectiveRankControl__SetupTitleBg(this, CurrentDetectiveRank, v5);
  EventInfoDetectiveRankControl__SetupCondtionText(this, v6, v7);
  EventInfoDetectiveRankControl__SetupMissionClearCount(this, v8);
  EventInfoDetectiveRankControl__SetupMissionStartedCount(this, v9);
}


void EventInfoDetectiveRankControl__Setup(
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

  EventInfoUIProgressControl__Setup((EventInfoUIProgressControl_o *)this, entitys, 0);
  CurrentDetectiveRank = EventInfoDetectiveRankControl__GetCurrentDetectiveRank(this, v4);
  this->fields.userRank = CurrentDetectiveRank;
  EventInfoDetectiveRankControl__SetupTitleBg(this, CurrentDetectiveRank, v6);
  EventInfoDetectiveRankControl__SetupCondtionText(this, v7, v8);
  EventInfoDetectiveRankControl__SetupMissionClearCount(this, v9);
  EventInfoDetectiveRankControl__SetupMissionStartedCount(this, v10);
}


void EventInfoDetectiveRankControl__SetupCondtionText(
        EventInfoDetectiveRankControl_o *this,
        int32_t userRank,
        const MethodInfo *method)
{
  EventInfoDetectiveRankControl_o *v3; // x19
  struct EventProgressValueEntity_o *nextEventProgressValueEntity; // x8
  UILabel_o *conditionTextLabel; // x19
  EventInfoDetectiveRankControl_o *condMessage; // x1

  v3 = this;
  if ( (byte_4C4449D & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    this = (EventInfoDetectiveRankControl_o *)sub_1C37058(&StringLiteral_5659/*"EVENT_PROGRESS_NEXT_RANK_NONE"*/);
    byte_4C4449D = 1;
  }
  nextEventProgressValueEntity = v3->fields.nextEventProgressValueEntity;
  conditionTextLabel = v3->fields.conditionTextLabel;
  if ( nextEventProgressValueEntity )
  {
    condMessage = (EventInfoDetectiveRankControl_o *)nextEventProgressValueEntity->fields.condMessage;
    if ( conditionTextLabel )
      goto LABEL_5;
LABEL_9:
    sub_1C372B4(this);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (EventInfoDetectiveRankControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5659/*"EVENT_PROGRESS_NEXT_RANK_NONE"*/, 0);
  condMessage = this;
  if ( !conditionTextLabel )
    goto LABEL_9;
LABEL_5:
  UILabel__set_text(conditionTextLabel, (System_String_o *)condMessage, 0);
}


void EventInfoDetectiveRankControl__SetupMissionClearCount(
        EventInfoDetectiveRankControl_o *this,
        const MethodInfo *method)
{
  UserEventRandomMissionMaster_o *Master_object; // x0
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t UserEventRandomMissionTotalClearCount; // w20
  System_String_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  EventInfoDetectiveRankControl_c *v13; // x8
  System_String_o *v14; // x21
  int32_t MISSION_CLEAR_DISP_COUNT_MAX; // w8
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  bool v18; // cc
  System_String_o *v19; // x20
  System_String_o *v20; // x0
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C4449E & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&EventInfoDetectiveRankControl_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_5639/*"EVENT_POINT_COMMON_FORMAT"*/);
    sub_1C37058(&StringLiteral_3700/*"COMMON_COUNT_OPERATOR_PLUS"*/);
    byte_4C4449E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity || !Master_object )
    goto LABEL_19;
  UserEventRandomMissionTotalClearCount = UserEventRandomMissionMaster__GetUserEventRandomMissionTotalClearCount(
                                            Master_object,
                                            eventUiEntity->fields.eventId,
                                            0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5639/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
  v13 = EventInfoDetectiveRankControl_TypeInfo;
  v14 = v6;
  if ( !EventInfoDetectiveRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoDetectiveRankControl_TypeInfo);
    v13 = EventInfoDetectiveRankControl_TypeInfo;
  }
  MISSION_CLEAR_DISP_COUNT_MAX = v13->static_fields->MISSION_CLEAR_DISP_COUNT_MAX;
  if ( UserEventRandomMissionTotalClearCount < MISSION_CLEAR_DISP_COUNT_MAX )
    MISSION_CLEAR_DISP_COUNT_MAX = UserEventRandomMissionTotalClearCount;
  v21 = MISSION_CLEAR_DISP_COUNT_MAX;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v7, v8, v9, v10, v11, v12);
  v17 = System_String__Format(v14, v16, 0);
  v18 = UserEventRandomMissionTotalClearCount <= EventInfoDetectiveRankControl_TypeInfo->static_fields->MISSION_CLEAR_DISP_COUNT_MAX;
  v19 = v17;
  if ( !v18 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3700/*"COMMON_COUNT_OPERATOR_PLUS"*/, 0);
    v19 = System_String__Concat_63561656(v19, v20, 0);
  }
  Master_object = (UserEventRandomMissionMaster_o *)this->fields.missionCountTextLabel;
  if ( !Master_object )
LABEL_19:
    sub_1C372B4(Master_object);
  UILabel__set_text((UILabel_o *)Master_object, v19, 0);
}


void EventInfoDetectiveRankControl__SetupMissionStartedCount(
        EventInfoDetectiveRankControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *missionStartedCountBgSprite; // x20
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *missionStartedCountTextLabel; // x20
  struct EventUiEntity_o *eventUiEntity; // x8
  System_Collections_Generic_List_UserEventRandomMissionEntity__o *UserEventRandomMissionProgressList; // x20
  struct EventUiEntity_o *v8; // x8
  int32_t RandomMissionMaxNum; // w8
  UILabel_o *v10; // x19
  int32_t v11; // w22
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  System_String_o *v18; // x21
  Il2CppObject *v19; // x20
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  Il2CppObject *v26; // x0
  int32_t v27; // [xsp+8h] [xbp-38h] BYREF
  int32_t size; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C4449F & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_UserEventRandomMissionEntity__get_Count__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_12478/*"SUM_INFO"*/);
    byte_4C4449F = 1;
  }
  missionStartedCountBgSprite = (UnityEngine_Object_o *)this->fields.missionStartedCountBgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(missionStartedCountBgSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.missionStartedCountBgSprite;
    if ( !gameObject )
      goto LABEL_28;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_28;
    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0) )
    {
      missionStartedCountTextLabel = (UnityEngine_Object_o *)this->fields.missionStartedCountTextLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(missionStartedCountTextLabel, 0, 0) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
        eventUiEntity = this->fields.eventUiEntity;
        if ( eventUiEntity )
        {
          if ( gameObject )
          {
            UserEventRandomMissionProgressList = UserEventRandomMissionMaster__GetUserEventRandomMissionProgressList(
                                                   (UserEventRandomMissionMaster_o *)gameObject,
                                                   eventUiEntity->fields.eventId,
                                                   0);
            gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventDetailMaster___);
            v8 = this->fields.eventUiEntity;
            if ( v8 )
            {
              if ( gameObject )
              {
                gameObject = (UnityEngine_Component_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                          v8->fields.eventId,
                                                          (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
                if ( gameObject )
                {
                  RandomMissionMaxNum = EventDetailEntity__GetRandomMissionMaxNum((EventDetailEntity_o *)gameObject, 0);
                  v10 = this->fields.missionStartedCountTextLabel;
                  v11 = RandomMissionMaxNum ? RandomMissionMaxNum : 10;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_12478/*"SUM_INFO"*/,
                                                            0);
                  if ( UserEventRandomMissionProgressList )
                  {
                    v18 = (System_String_o *)gameObject;
                    size = UserEventRandomMissionProgressList->fields._size;
                    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &size, v12, v13, v14, v15, v16, v17);
                    v27 = v11;
                    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v20, v21, v22, v23, v24, v25);
                    gameObject = (UnityEngine_Component_o *)System_String__Format_63602948(v18, v19, v26, 0);
                    if ( v10 )
                    {
                      UILabel__set_text(v10, (System_String_o *)gameObject, 0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_28:
        sub_1C372B4(gameObject);
      }
    }
  }
}


void EventInfoDetectiveRankControl__SetupTitleBg(
        EventInfoDetectiveRankControl_o *this,
        int32_t userRank,
        const MethodInfo *method)
{
  __int64 v5; // x21
  struct UISprite_o *titleBgSprite; // x0
  struct System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__o *viewDataList; // x20
  System_Predicate_object__o *v8; // x22
  Il2CppObject *v9; // x0
  UISprite_o *rankSprite; // x20
  System_String_o *monitor; // x21

  if ( (byte_4C4449C & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
    sub_1C37058(&System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
    sub_1C37058(&Method_EventInfoDetectiveRankControl___c__DisplayClass21_0__SetupTitleBg_b__0__);
    sub_1C37058(&EventInfoDetectiveRankControl___c__DisplayClass21_0_TypeInfo);
    byte_4C4449C = 1;
  }
  v5 = sub_1C372A4(EventInfoDetectiveRankControl___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  *(_DWORD *)(v5 + 16) = userRank;
  viewDataList = this->fields.viewDataList;
  v8 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
  System_Predicate_object____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_EventInfoDetectiveRankControl___c__DisplayClass21_0__SetupTitleBg_b__0__,
    0);
  if ( !viewDataList )
    goto LABEL_11;
  v9 = System_Collections_Generic_List_object___Find(
         (System_Collections_Generic_List_object__o *)viewDataList,
         (System_Predicate_T__o *)v8,
         (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( v9 )
  {
    rankSprite = this->fields.rankSprite;
    monitor = (System_String_o *)v9[1].monitor;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(rankSprite, monitor, 0);
    titleBgSprite = this->fields.titleBgSprite;
    if ( titleBgSprite )
    {
      ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))titleBgSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
        titleBgSprite,
        titleBgSprite->klass->vtable._33_MakePixelPerfect.method);
      return;
    }
LABEL_11:
    sub_1C372B4(titleBgSprite);
  }
}


void EventInfoDetectiveRankControl_ViewData___ctor(
        EventInfoDetectiveRankControl_ViewData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoDetectiveRankControl___c__DisplayClass21_0___ctor(
        EventInfoDetectiveRankControl___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventInfoDetectiveRankControl___c__DisplayClass21_0___SetupTitleBg_b__0(
        EventInfoDetectiveRankControl___c__DisplayClass21_0_o *this,
        EventInfoDetectiveRankControl_ViewData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C372B4(this);
  return n->fields.DetectiveRank == this->fields.userRank;
}


void EventInfoDetectiveRankControl___c__DisplayClass26_0___ctor(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__0(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventInfoDetectiveRankControl_o *_4__this; // x0
  int32_t v5; // w1
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventInfoDetectiveRankControl__SetupTitleBg(_4__this, this->fields.afterRank, v2),
        (_4__this = this->fields.__4__this) == 0)
    || (EventInfoDetectiveRankControl__SetupCondtionText(_4__this, v5, v6), (_4__this = this->fields.__4__this) == 0) )
  {
    sub_1C372B4(_4__this);
  }
  EventInfoDetectiveRankControl__SetupMissionClearCount(_4__this, v7);
}


void EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__1(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventInfoDetectiveRankControl___c__DisplayClass26_0_o *v2; // x19
  struct EventInfoDetectiveRankControl_o *_4__this; // x8
  System_Collections_Generic_List_object__o *viewDataList; // x20
  System_Predicate_object__o *_9__2; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct EventInfoDetectiveRankControl_o *v8; // x8
  Il2CppObject *callback; // x21
  System_Collections_Generic_List_object__o *v10; // x20
  System_Predicate_object__o *_9__3; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x23
  Il2CppObject *Instance; // x20
  System_String_o *v16; // x22
  System_String_o *v17; // x0
  System_Action_o *_9__4; // x23
  EventInfoDetectiveRankControl___c__DisplayClass26_0_o *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  v2 = this;
  if ( (byte_4C444A4 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__2__);
    sub_1C37058(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__3__);
    sub_1C37058(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__4__);
    sub_1C37058(&StringLiteral_5660/*"EVENT_PROGRESS_RANKUP_MESSAGE"*/);
    this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)sub_1C37058(&StringLiteral_5661/*"EVENT_PROGRESS_RANKUP_TITLE"*/);
    byte_4C444A4 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  viewDataList = (System_Collections_Generic_List_object__o *)_4__this->fields.viewDataList;
  _9__2 = (System_Predicate_object__o *)v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
    System_Predicate_object____ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__2__,
      0);
    v2->fields.__9__2 = (struct System_Predicate_EventInfoDetectiveRankControl_ViewData__o *)_9__2;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v6, v7);
  }
  if ( !viewDataList )
    goto LABEL_19;
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_Collections_Generic_List_object___Find(
                                                                    viewDataList,
                                                                    (System_Predicate_T__o *)_9__2,
                                                                    (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
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
    _9__3 = (System_Predicate_object__o *)sub_1C372A4(System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
    System_Predicate_object____ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__3__,
      0);
    v2->fields.__9__3 = (struct System_Predicate_EventInfoDetectiveRankControl_ViewData__o *)_9__3;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v12, v13);
  }
  if ( !v10 )
    goto LABEL_19;
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_Collections_Generic_List_object___Find(
                                                                    v10,
                                                                    (System_Predicate_T__o *)_9__3,
                                                                    (const MethodInfo_37A368C *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( !this )
    goto LABEL_19;
  v14 = (Il2CppObject *)this->fields.callback;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5661/*"EVENT_PROGRESS_RANKUP_TITLE"*/, 0);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5660/*"EVENT_PROGRESS_RANKUP_MESSAGE"*/, 0);
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_String__Format_63602948(v17, callback, v14, 0);
  _9__4 = v2->fields.__9__4;
  v19 = this;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)v2,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__4__,
      0);
    v2->fields.__9__4 = _9__4;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v20, v21);
  }
  if ( !Instance )
LABEL_19:
    sub_1C372B4(this);
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
    0,
    0.0,
    0,
    0);
}


bool EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__2(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        EventInfoDetectiveRankControl_ViewData_o *n,
        const MethodInfo *method)
{
  struct EventInfoDetectiveRankControl_o *_4__this; // x8

  if ( !n || (_4__this = this->fields.__4__this) == 0 )
    sub_1C372B4(this);
  return n->fields.DetectiveRank == _4__this->fields.userRank;
}


bool EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__3(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        EventInfoDetectiveRankControl_ViewData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C372B4(this);
  return n->fields.DetectiveRank == this->fields.afterRank;
}


void EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__4(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventInfoUIProgressControl_o *_4__this; // x0
  int32_t afterRank; // w1

  if ( (byte_4C444A5 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C444A5 = 1;
  }
  _4__this = (EventInfoUIProgressControl_o *)this->fields.__4__this;
  if ( !_4__this
    || (afterRank = this->fields.afterRank,
        LODWORD(_4__this[2].monitor) = afterRank,
        EventInfoUIProgressControl__SaveEventProgressValueSaveData(_4__this, afterRank, 0),
        (_4__this = (EventInfoUIProgressControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C372B4(_4__this);
  }
  CommonUI__CloseNotificationDialog((CommonUI_o *)_4__this, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}