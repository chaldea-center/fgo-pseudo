void EventInfoDetectiveRankControl___cctor(const MethodInfo *method)
{
  if ( (byte_4CEFA32 & 1) == 0 )
  {
    sub_1C7BAE8(&EventInfoDetectiveRankControl_TypeInfo);
    byte_4CEFA32 = 1;
  }
  EventInfoDetectiveRankControl_TypeInfo->static_fields->MISSION_CLEAR_DISP_COUNT_MAX = 9999999;
}


void EventInfoDetectiveRankControl___ctor(EventInfoDetectiveRankControl_o *this, const MethodInfo *method)
{
  if ( (byte_4CEFA31 & 1) == 0 )
  {
    sub_1C7BAE8(&EventInfoUIProgressControl_TypeInfo);
    byte_4CEFA31 = 1;
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
  __int64 v6; // x1
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8
  TerminalSceneComponent_c *v8; // x0
  int32_t progressValue; // w20
  bool v10; // w0
  struct EventProgressValueEntity_o *v11; // x8

  if ( (byte_4CEFA30 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CEFA30 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
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
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
  }
  v8 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v8 = TerminalSceneComponent_TypeInfo;
  }
  v5 = v8->static_fields->mInstance;
  if ( !v5 )
LABEL_33:
    sub_1C7BD40(v5, v6);
  if ( !TerminalSceneComponent__IsMapActive(v5, 0) )
  {
    currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
    if ( currentEventProgressValueEntity )
      return currentEventProgressValueEntity->fields.progressValue;
  }
  v10 = EventInfoUIProgressControl__CheckEventProgressValueSaveData((EventInfoUIProgressControl_o *)this, 0);
  v11 = this->fields.currentEventProgressValueEntity;
  if ( v10 )
  {
    if ( v11 )
      return EventInfoUIProgressControl__GetEventProgressValueSaveData((EventInfoUIProgressControl_o *)this, 0, 0);
    return 0;
  }
  else
  {
    if ( v11 )
      progressValue = v11->fields.progressValue;
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
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x8
  __int64 v10; // x8
  AssetData_o *v11; // x0
  UnityEngine_Object_o *Object_41072156; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct UnityEngine_GameObject_o *v19; // x8
  UnityEngine_GameObject_c *v20; // x1
  struct UnityEngine_GameObject_o **p_effectBasePrefab; // x0
  System_String_o *titleBgSpriteName; // x20
  UISprite_o *titleBgSprite; // x21
  System_String_o *condtionBgSpriteName; // x20
  UISprite_o *condtionBgSprite; // x21
  System_String_o *missionCountBgSpriteName; // x20
  UISprite_o *missionCountBgSprite; // x21
  UnityEngine_Object_o *missionStartedCountBgSprite; // x20
  System_String_o *missionStartedCountBgSpriteName; // x20
  UISprite_o *v30; // x21
  UnityEngine_Component_o *v31; // x8
  char v32; // w19

  if ( (byte_4CEFA2A & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_GameObject_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    sub_1C7BAE8(&StringLiteral_11226/*"RankUpEffect"*/);
    byte_4CEFA2A = 1;
  }
  EventInfoUIProgressControl__Initialization((EventInfoUIProgressControl_o *)this, entity, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
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
  if ( !byte_4CE840E )
  {
    sub_1C7BAE8(&TerminalSceneComponent_TypeInfo);
    byte_4CE840E = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  }
  v9 = *(_QWORD *)gameObject[7].fields.m_CachedPtr;
  if ( !v9 )
    goto LABEL_50;
  v10 = *(_QWORD *)(v9 + 264);
  if ( !v10 )
    goto LABEL_50;
  v11 = *(AssetData_o **)(v10 + 248);
  if ( !v11 )
    goto LABEL_27;
  Object_41072156 = AssetData__GetObject_41072156(v11, (System_String_o *)StringLiteral_11226/*"RankUpEffect"*/, 0);
  v19 = (struct UnityEngine_GameObject_o *)Object_41072156;
  if ( Object_41072156 )
  {
    v20 = UnityEngine_GameObject_TypeInfo;
    if ( (UnityEngine_GameObject_c *)Object_41072156->klass == UnityEngine_GameObject_TypeInfo )
    {
      this->fields.effectBasePrefab = (struct UnityEngine_GameObject_o *)Object_41072156;
      p_effectBasePrefab = &this->fields.effectBasePrefab;
      if ( v19->klass == v20 )
        goto LABEL_26;
    }
    sub_1C7C0DC(v19);
  }
  this->fields.effectBasePrefab = v19;
  p_effectBasePrefab = &this->fields.effectBasePrefab;
LABEL_26:
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_effectBasePrefab, (int32_t)v19, v13, v14, v15, v16, v17, v18);
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
    v30 = this->fields.missionStartedCountBgSprite;
    missionStartedCountBgSpriteName = this->fields.missionStartedCountBgSpriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetEventUI(v30, missionStartedCountBgSpriteName, 0);
    v31 = (UnityEngine_Component_o *)this->fields.missionStartedCountBgSprite;
    if ( v31 )
    {
      v32 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(v31, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, v32 & 1, 0);
        return;
      }
    }
LABEL_50:
    sub_1C7BD40(gameObject, v7);
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
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  UnityEngine_Object_o *effectBasePrefab; // x21
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8
  int32_t progressValue; // w8
  Il2CppObject *v25; // x21
  UnityEngine_Component_o *rankSprite; // x8
  UnityEngine_GameObject_o *v27; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x20
  System_Action_o *v30; // x21
  System_Action_o *v31; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7

  if ( (byte_4CEFA2F & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__0__);
    sub_1C7BAE8(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__1__);
    sub_1C7BAE8(&EventInfoDetectiveRankControl___c__DisplayClass26_0_TypeInfo);
    byte_4CEFA2F = 1;
  }
  v7 = sub_1C7BD34(EventInfoDetectiveRankControl___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = callback;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)callback, v16, v17, v18, v19, v20, v21);
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
        v25 = (Il2CppObject *)this->fields.effectBasePrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v8 = UnityEngine_Object__Instantiate_object_(
               v25,
               (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        rankSprite = (UnityEngine_Component_o *)this->fields.rankSprite;
        if ( rankSprite )
        {
          v27 = (UnityEngine_GameObject_o *)v8;
          gameObject = UnityEngine_Component__get_gameObject(rankSprite, 0);
          GameObjectExtensions__SafeSetParent_36529116(v27, gameObject, 0);
          if ( v27 )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 v27,
                                 (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
            v30 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
            System_Action___ctor(
              v30,
              (Il2CppObject *)v7,
              Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__0__,
              0);
            if ( Component_object )
            {
              CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v30, 0);
              v31 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
              System_Action___ctor(
                v31,
                (Il2CppObject *)v7,
                Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__1__,
                0);
              Component_object[2].monitor = v31;
              sub_1C7BA8C(
                (GrandQuestFolderBoardItem_o *)&Component_object[2].monitor,
                (int32_t)v31,
                v32,
                v33,
                v34,
                v35,
                v36,
                v37);
              return;
            }
          }
        }
LABEL_18:
        sub_1C7BD40(v8, v9);
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
  if ( (byte_4CEFA2C & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    this = (EventInfoDetectiveRankControl_o *)sub_1C7BAE8(&StringLiteral_5667/*"EVENT_PROGRESS_NEXT_RANK_NONE"*/);
    byte_4CEFA2C = 1;
  }
  nextEventProgressValueEntity = v3->fields.nextEventProgressValueEntity;
  conditionTextLabel = v3->fields.conditionTextLabel;
  if ( nextEventProgressValueEntity )
  {
    condMessage = (EventInfoDetectiveRankControl_o *)nextEventProgressValueEntity->fields.condMessage;
    if ( conditionTextLabel )
      goto LABEL_5;
LABEL_9:
    sub_1C7BD40(this, condMessage);
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (EventInfoDetectiveRankControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5667/*"EVENT_PROGRESS_NEXT_RANK_NONE"*/, 0);
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
  __int64 v4; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  int32_t UserEventRandomMissionTotalClearCount; // w20
  System_String_o *v7; // x0
  EventInfoDetectiveRankControl_c *v8; // x8
  System_String_o *v9; // x21
  int32_t MISSION_CLEAR_DISP_COUNT_MAX; // w8
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  bool v13; // cc
  System_String_o *v14; // x20
  System_String_o *v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CEFA2D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&EventInfoDetectiveRankControl_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_5647/*"EVENT_POINT_COMMON_FORMAT"*/);
    sub_1C7BAE8(&StringLiteral_3706/*"COMMON_COUNT_OPERATOR_PLUS"*/);
    byte_4CEFA2D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity || !Master_object )
    goto LABEL_19;
  UserEventRandomMissionTotalClearCount = UserEventRandomMissionMaster__GetUserEventRandomMissionTotalClearCount(
                                            Master_object,
                                            eventUiEntity->fields.eventId,
                                            0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5647/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
  v8 = EventInfoDetectiveRankControl_TypeInfo;
  v9 = v7;
  if ( !EventInfoDetectiveRankControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoDetectiveRankControl_TypeInfo);
    v8 = EventInfoDetectiveRankControl_TypeInfo;
  }
  MISSION_CLEAR_DISP_COUNT_MAX = v8->static_fields->MISSION_CLEAR_DISP_COUNT_MAX;
  if ( UserEventRandomMissionTotalClearCount < MISSION_CLEAR_DISP_COUNT_MAX )
    MISSION_CLEAR_DISP_COUNT_MAX = UserEventRandomMissionTotalClearCount;
  v16 = MISSION_CLEAR_DISP_COUNT_MAX;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v12 = System_String__Format(v9, v11, 0);
  v13 = UserEventRandomMissionTotalClearCount <= EventInfoDetectiveRankControl_TypeInfo->static_fields->MISSION_CLEAR_DISP_COUNT_MAX;
  v14 = v12;
  if ( !v13 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3706/*"COMMON_COUNT_OPERATOR_PLUS"*/, 0);
    v14 = System_String__Concat_64176912(v14, v15, 0);
  }
  Master_object = (UserEventRandomMissionMaster_o *)this->fields.missionCountTextLabel;
  if ( !Master_object )
LABEL_19:
    sub_1C7BD40(Master_object, v4);
  UILabel__set_text((UILabel_o *)Master_object, v14, 0);
}


void EventInfoDetectiveRankControl__SetupMissionStartedCount(
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
  int32_t v12; // w22
  System_String_o *v13; // x21
  Il2CppObject *v14; // x20
  Il2CppObject *v15; // x0
  int32_t v16; // [xsp+8h] [xbp-38h] BYREF
  int32_t size; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CEFA2E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_UserEventRandomMissionEntity__get_Count__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_12536/*"SUM_INFO"*/);
    byte_4CEFA2E = 1;
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
        gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
        eventUiEntity = this->fields.eventUiEntity;
        if ( eventUiEntity )
        {
          if ( gameObject )
          {
            UserEventRandomMissionProgressList = UserEventRandomMissionMaster__GetUserEventRandomMissionProgressList(
                                                   (UserEventRandomMissionMaster_o *)gameObject,
                                                   eventUiEntity->fields.eventId,
                                                   0);
            gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventDetailMaster___);
            v9 = this->fields.eventUiEntity;
            if ( v9 )
            {
              if ( gameObject )
              {
                gameObject = (UnityEngine_Component_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                          v9->fields.eventId,
                                                          (const MethodInfo_342E2FC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
                if ( gameObject )
                {
                  RandomMissionMaxNum = EventDetailEntity__GetRandomMissionMaxNum((EventDetailEntity_o *)gameObject, 0);
                  v11 = this->fields.missionStartedCountTextLabel;
                  v12 = RandomMissionMaxNum ? RandomMissionMaxNum : 10;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  gameObject = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_12536/*"SUM_INFO"*/,
                                                            0);
                  if ( UserEventRandomMissionProgressList )
                  {
                    v13 = (System_String_o *)gameObject;
                    size = UserEventRandomMissionProgressList->fields._size;
                    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &size);
                    v16 = v12;
                    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
                    gameObject = (UnityEngine_Component_o *)System_String__Format_64218220(v13, v14, v15, 0);
                    if ( v11 )
                    {
                      UILabel__set_text(v11, (System_String_o *)gameObject, 0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_28:
        sub_1C7BD40(gameObject, v4);
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
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__o *viewDataList; // x20
  System_Predicate_object__o *v9; // x22
  Il2CppObject *v10; // x0
  UISprite_o *rankSprite; // x20
  System_String_o *monitor; // x21

  if ( (byte_4CEFA2B & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
    sub_1C7BAE8(&System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
    sub_1C7BAE8(&Method_EventInfoDetectiveRankControl___c__DisplayClass21_0__SetupTitleBg_b__0__);
    sub_1C7BAE8(&EventInfoDetectiveRankControl___c__DisplayClass21_0_TypeInfo);
    byte_4CEFA2B = 1;
  }
  v5 = sub_1C7BD34(EventInfoDetectiveRankControl___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  *(_DWORD *)(v5 + 16) = userRank;
  viewDataList = this->fields.viewDataList;
  v9 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
  System_Predicate_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_EventInfoDetectiveRankControl___c__DisplayClass21_0__SetupTitleBg_b__0__,
    0);
  if ( !viewDataList )
    goto LABEL_11;
  v10 = System_Collections_Generic_List_object___Find(
          (System_Collections_Generic_List_object__o *)viewDataList,
          (System_Predicate_T__o *)v9,
          (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( v10 )
  {
    rankSprite = this->fields.rankSprite;
    monitor = (System_String_o *)v10[1].monitor;
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
    sub_1C7BD40(titleBgSprite, v7);
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
    sub_1C7BD40(this, 0);
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
  const MethodInfo *v5; // x2

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (EventInfoDetectiveRankControl__SetupTitleBg(_4__this, this->fields.afterRank, v2),
        (_4__this = this->fields.__4__this) == 0)
    || (EventInfoDetectiveRankControl__SetupCondtionText(_4__this, (int32_t)method, v5),
        (_4__this = this->fields.__4__this) == 0) )
  {
    sub_1C7BD40(_4__this, method);
  }
  EventInfoDetectiveRankControl__SetupMissionClearCount(_4__this, method);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct EventInfoDetectiveRankControl_o *v12; // x8
  Il2CppObject *callback; // x21
  System_Collections_Generic_List_object__o *v14; // x20
  System_Predicate_object__o *_9__3; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  Il2CppObject *v22; // x23
  Il2CppObject *Instance; // x20
  System_String_o *v24; // x22
  System_String_o *v25; // x0
  System_Action_o *_9__4; // x23
  EventInfoDetectiveRankControl___c__DisplayClass26_0_o *v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7

  v2 = this;
  if ( (byte_4CEFA33 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__2__);
    sub_1C7BAE8(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__3__);
    sub_1C7BAE8(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__4__);
    sub_1C7BAE8(&StringLiteral_5668/*"EVENT_PROGRESS_RANKUP_MESSAGE"*/);
    this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)sub_1C7BAE8(&StringLiteral_5669/*"EVENT_PROGRESS_RANKUP_TITLE"*/);
    byte_4CEFA33 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  viewDataList = (System_Collections_Generic_List_object__o *)_4__this->fields.viewDataList;
  _9__2 = (System_Predicate_object__o *)v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
    System_Predicate_object____ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__2__,
      0);
    v2->fields.__9__2 = (struct System_Predicate_EventInfoDetectiveRankControl_ViewData__o *)_9__2;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v6, v7, v8, v9, v10, v11);
  }
  if ( !viewDataList )
    goto LABEL_19;
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_Collections_Generic_List_object___Find(
                                                                    viewDataList,
                                                                    (System_Predicate_T__o *)_9__2,
                                                                    (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( !this )
    goto LABEL_19;
  v12 = v2->fields.__4__this;
  if ( !v12 )
    goto LABEL_19;
  callback = (Il2CppObject *)this->fields.callback;
  v14 = (System_Collections_Generic_List_object__o *)v12->fields.viewDataList;
  _9__3 = (System_Predicate_object__o *)v2->fields.__9__3;
  if ( !_9__3 )
  {
    _9__3 = (System_Predicate_object__o *)sub_1C7BD34(System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
    System_Predicate_object____ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__3__,
      0);
    v2->fields.__9__3 = (struct System_Predicate_EventInfoDetectiveRankControl_ViewData__o *)_9__3;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v16, v17, v18, v19, v20, v21);
  }
  if ( !v14 )
    goto LABEL_19;
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_Collections_Generic_List_object___Find(
                                                                    v14,
                                                                    (System_Predicate_T__o *)_9__3,
                                                                    (const MethodInfo_383F464 *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( !this )
    goto LABEL_19;
  v22 = (Il2CppObject *)this->fields.callback;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_5669/*"EVENT_PROGRESS_RANKUP_TITLE"*/, 0);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5668/*"EVENT_PROGRESS_RANKUP_MESSAGE"*/, 0);
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_String__Format_64218220(v25, callback, v22, 0);
  _9__4 = v2->fields.__9__4;
  v27 = this;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)v2,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__4__,
      0);
    v2->fields.__9__4 = _9__4;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v28, v29, v30, v31, v32, v33);
  }
  if ( !Instance )
LABEL_19:
    sub_1C7BD40(this, method);
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    v24,
    (System_String_o *)v27,
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
    sub_1C7BD40(this, n);
  return n->fields.DetectiveRank == _4__this->fields.userRank;
}


bool EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__3(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        EventInfoDetectiveRankControl_ViewData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C7BD40(this, 0);
  return n->fields.DetectiveRank == this->fields.afterRank;
}


void EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__4(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventInfoUIProgressControl_o *_4__this; // x0
  int32_t afterRank; // w1

  if ( (byte_4CEFA34 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CEFA34 = 1;
  }
  _4__this = (EventInfoUIProgressControl_o *)this->fields.__4__this;
  if ( !_4__this
    || (afterRank = this->fields.afterRank,
        LODWORD(_4__this[2].monitor) = afterRank,
        EventInfoUIProgressControl__SaveEventProgressValueSaveData(_4__this, afterRank, 0),
        (_4__this = (EventInfoUIProgressControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C7BD40(_4__this, method);
  }
  CommonUI__CloseNotificationDialog((CommonUI_o *)_4__this, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}