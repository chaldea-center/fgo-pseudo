void EventInfoDetectiveRankControl___cctor(const MethodInfo *method)
{
  if ( (byte_593992D & 1) == 0 )
  {
    sub_21FFC50(&EventInfoDetectiveRankControl_TypeInfo);
    byte_593992D = 1;
  }
  EventInfoDetectiveRankControl_TypeInfo->static_fields->MISSION_CLEAR_DISP_COUNT_MAX = 9999999;
}


void EventInfoDetectiveRankControl___ctor(EventInfoDetectiveRankControl_o *this, const MethodInfo *method)
{
  if ( (byte_593992C & 1) == 0 )
  {
    sub_21FFC50(&EventInfoUIProgressControl_TypeInfo);
    byte_593992C = 1;
  }
  if ( !*(&EventInfoUIProgressControl_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo, method);
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

  if ( (byte_593992B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_593992B = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = (TerminalSceneComponent_o *)UnityEngine_Object__op_Equality(mInstance, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
    if ( !currentEventProgressValueEntity )
      goto LABEL_33;
    return currentEventProgressValueEntity->fields.progressValue;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v8 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
    v8 = TerminalSceneComponent_TypeInfo;
  }
  v5 = v8->static_fields->mInstance;
  if ( !v5 )
LABEL_33:
    sub_21FFECC(v5, v6);
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
  __int64 v5; // x1
  TerminalSceneComponent_c *v6; // x0
  UnityEngine_Object_o *mInstance; // x20
  __int64 v8; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x8
  __int64 v11; // x8
  AssetData_o *v12; // x0
  UnityEngine_Object_o *Object_47442936; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UnityEngine_Object_o *v20; // x8
  UnityEngine_GameObject_c *v21; // x1
  struct UnityEngine_GameObject_o **p_effectBasePrefab; // x0
  __int64 v23; // x1
  UISprite_o *titleBgSprite; // x20
  System_String_o *titleBgSpriteName; // x21
  __int64 v26; // x1
  UISprite_o *condtionBgSprite; // x20
  System_String_o *condtionBgSpriteName; // x21
  __int64 v29; // x1
  UISprite_o *missionCountBgSprite; // x20
  System_String_o *missionCountBgSpriteName; // x21
  UnityEngine_Object_o *missionStartedCountBgSprite; // x20
  __int64 v33; // x1
  UISprite_o *v34; // x20
  System_String_o *missionStartedCountBgSpriteName; // x21
  UnityEngine_Component_o *v36; // x8
  char v37; // w19

  if ( (byte_5939925 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_GameObject_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_11646/*"RankUpEffect"*/);
    byte_5939925 = 1;
  }
  EventInfoUIProgressControl__Initialization((EventInfoUIProgressControl_o *)this, entity, 0);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v6->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( !UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
    goto LABEL_27;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v8);
    gameObject = (UnityEngine_GameObject_o *)TerminalSceneComponent_TypeInfo;
  }
  v10 = *(_QWORD *)gameObject[7].fields.m_CachedPtr;
  if ( !v10 )
    goto LABEL_50;
  v11 = *(_QWORD *)(v10 + 264);
  if ( !v11 )
    goto LABEL_50;
  v12 = *(AssetData_o **)(v11 + 248);
  if ( !v12 )
    goto LABEL_27;
  Object_47442936 = AssetData__GetObject_47442936(v12, (System_String_o *)StringLiteral_11646/*"RankUpEffect"*/, 0);
  v20 = Object_47442936;
  if ( Object_47442936 )
  {
    v21 = UnityEngine_GameObject_TypeInfo;
    if ( (UnityEngine_GameObject_c *)Object_47442936->klass == UnityEngine_GameObject_TypeInfo )
    {
      this->fields.effectBasePrefab = (struct UnityEngine_GameObject_o *)Object_47442936;
      p_effectBasePrefab = &this->fields.effectBasePrefab;
      if ( (UnityEngine_GameObject_c *)v20->klass == v21 )
        goto LABEL_26;
    }
    sub_220024C(v20, v21, v14);
  }
  this->fields.effectBasePrefab = 0;
  p_effectBasePrefab = &this->fields.effectBasePrefab;
LABEL_26:
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_effectBasePrefab, (int32_t)v20, v14, v15, v16, v17, v18, v19);
LABEL_27:
  if ( !System_String__IsNullOrEmpty(this->fields.titleBgSpriteName, 0) )
  {
    titleBgSprite = this->fields.titleBgSprite;
    titleBgSpriteName = this->fields.titleBgSpriteName;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v23);
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
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v26);
    AtlasManager__SetEventUI(condtionBgSprite, condtionBgSpriteName, 0);
  }
  if ( !System_String__IsNullOrEmpty(this->fields.missionCountBgSpriteName, 0) )
  {
    missionCountBgSprite = this->fields.missionCountBgSprite;
    missionCountBgSpriteName = this->fields.missionCountBgSpriteName;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v29);
    AtlasManager__SetEventUI(missionCountBgSprite, missionCountBgSpriteName, 0);
  }
  missionStartedCountBgSprite = (UnityEngine_Object_o *)this->fields.missionStartedCountBgSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  if ( UnityEngine_Object__op_Inequality(missionStartedCountBgSprite, 0, 0)
    && !System_String__IsNullOrEmpty(this->fields.missionStartedCountBgSpriteName, 0) )
  {
    v34 = this->fields.missionStartedCountBgSprite;
    missionStartedCountBgSpriteName = this->fields.missionStartedCountBgSpriteName;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v33);
    gameObject = (UnityEngine_GameObject_o *)AtlasManager__SetEventUI(v34, missionStartedCountBgSpriteName, 0);
    v36 = (UnityEngine_Component_o *)this->fields.missionStartedCountBgSprite;
    if ( v36 )
    {
      v37 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(v36, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, v37 & 1, 0);
        return;
      }
    }
LABEL_50:
    sub_21FFECC(gameObject, v8);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  UnityEngine_Object_o *effectBasePrefab; // x21
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8
  int32_t progressValue; // w8
  int32_t userRank; // w9
  Il2CppObject *v27; // x21
  UnityEngine_Component_o *rankSprite; // x8
  UnityEngine_GameObject_o *v29; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x20
  System_Action_o *v32; // x21
  System_Action_o *v33; // x21
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  if ( (byte_593992A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__0__);
    sub_21FFC50(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__1__);
    sub_21FFC50(&EventInfoDetectiveRankControl___c__DisplayClass26_0_TypeInfo);
    byte_593992A = 1;
  }
  v7 = sub_21FFEBC(EventInfoDetectiveRankControl___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_18;
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  if ( type == 1 && this->fields.currentEventProgressValueEntity )
  {
    effectBasePrefab = (UnityEngine_Object_o *)this->fields.effectBasePrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
    v8 = (Il2CppObject *)UnityEngine_Object__op_Equality(effectBasePrefab, 0, 0);
    if ( ((unsigned __int8)v8 & 1) == 0 )
    {
      currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
      if ( !currentEventProgressValueEntity )
        goto LABEL_18;
      progressValue = currentEventProgressValueEntity->fields.progressValue;
      userRank = this->fields.userRank;
      *(_DWORD *)(v7 + 24) = progressValue;
      if ( userRank < progressValue )
      {
        v27 = (Il2CppObject *)this->fields.effectBasePrefab;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
        v8 = UnityEngine_Object__Instantiate_object_(
               v27,
               (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        rankSprite = (UnityEngine_Component_o *)this->fields.rankSprite;
        if ( rankSprite )
        {
          v29 = (UnityEngine_GameObject_o *)v8;
          gameObject = UnityEngine_Component__get_gameObject(rankSprite, 0);
          GameObjectExtensions__SafeSetParent_42881912(v29, gameObject, 0);
          if ( v29 )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 v29,
                                 (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CommonEffectActionComponent___);
            v32 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
            System_Action___ctor(
              v32,
              (Il2CppObject *)v7,
              Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__0__,
              0);
            if ( Component_object )
            {
              CommonEffectActionComponent__SetEventAction((CommonEffectActionComponent_o *)Component_object, 0, v32, 0);
              v33 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
              System_Action___ctor(
                v33,
                (Il2CppObject *)v7,
                Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__1__,
                0);
              Component_object[2].monitor = v33;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&Component_object[2].monitor,
                (int32_t)v33,
                v34,
                v35,
                v36,
                v37,
                v38,
                v39);
              return;
            }
          }
        }
LABEL_18:
        sub_21FFECC(v8, v9);
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


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_5939927 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    this = (EventInfoDetectiveRankControl_o *)sub_21FFC50(&StringLiteral_5878/*"EVENT_PROGRESS_NEXT_RANK_NONE"*/);
    byte_5939927 = 1;
  }
  nextEventProgressValueEntity = v3->fields.nextEventProgressValueEntity;
  conditionTextLabel = v3->fields.conditionTextLabel;
  if ( nextEventProgressValueEntity )
  {
    condMessage = (EventInfoDetectiveRankControl_o *)nextEventProgressValueEntity->fields.condMessage;
    if ( conditionTextLabel )
      goto LABEL_5;
LABEL_9:
    sub_21FFECC(this, condMessage);
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&userRank);
  this = (EventInfoDetectiveRankControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5878/*"EVENT_PROGRESS_NEXT_RANK_NONE"*/, 0);
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
  __int64 v6; // x1
  int32_t UserEventRandomMissionTotalClearCount; // w20
  System_String_o *v8; // x0
  __int64 v9; // x1
  EventInfoDetectiveRankControl_c *v10; // x8
  System_String_o *v11; // x21
  int32_t MISSION_CLEAR_DISP_COUNT_MAX; // w8
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  bool v15; // cc
  System_String_o *v16; // x20
  System_String_o *v17; // x0
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5939928 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&EventInfoDetectiveRankControl_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_5858/*"EVENT_POINT_COMMON_FORMAT"*/);
    sub_21FFC50(&StringLiteral_3838/*"COMMON_COUNT_OPERATOR_PLUS"*/);
    byte_5939928 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (UserEventRandomMissionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity || !Master_object )
    goto LABEL_19;
  UserEventRandomMissionTotalClearCount = UserEventRandomMissionMaster__GetUserEventRandomMissionTotalClearCount(
                                            Master_object,
                                            eventUiEntity->fields.eventId,
                                            0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5858/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
  v10 = EventInfoDetectiveRankControl_TypeInfo;
  v11 = v8;
  if ( !*(&EventInfoDetectiveRankControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoDetectiveRankControl_TypeInfo, v9);
    v10 = EventInfoDetectiveRankControl_TypeInfo;
  }
  MISSION_CLEAR_DISP_COUNT_MAX = v10->static_fields->MISSION_CLEAR_DISP_COUNT_MAX;
  if ( UserEventRandomMissionTotalClearCount < MISSION_CLEAR_DISP_COUNT_MAX )
    MISSION_CLEAR_DISP_COUNT_MAX = UserEventRandomMissionTotalClearCount;
  v18 = MISSION_CLEAR_DISP_COUNT_MAX;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v18);
  v14 = System_String__Format(v11, v13, 0);
  v15 = UserEventRandomMissionTotalClearCount <= EventInfoDetectiveRankControl_TypeInfo->static_fields->MISSION_CLEAR_DISP_COUNT_MAX;
  v16 = v14;
  if ( !v15 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3838/*"COMMON_COUNT_OPERATOR_PLUS"*/, 0);
    v16 = System_String__Concat_75438412(v16, v17, 0);
  }
  Master_object = (UserEventRandomMissionMaster_o *)this->fields.missionCountTextLabel;
  if ( !Master_object )
LABEL_19:
    sub_21FFECC(Master_object, v4);
  UILabel__set_text((UILabel_o *)Master_object, v16, 0);
}


void EventInfoDetectiveRankControl__SetupMissionStartedCount(
        EventInfoDetectiveRankControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *missionStartedCountBgSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *missionStartedCountTextLabel; // x20
  __int64 v8; // x1
  struct EventUiEntity_o *eventUiEntity; // x8
  System_Collections_Generic_List_UserEventRandomMissionEntity__o *UserEventRandomMissionProgressList; // x20
  struct EventUiEntity_o *v11; // x8
  __int64 v12; // x1
  int32_t RandomMissionMaxNum; // w8
  UILabel_o *v14; // x19
  int32_t v15; // w22
  System_String_o *v16; // x21
  Il2CppObject *v17; // x20
  Il2CppObject *v18; // x0
  int32_t v19; // [xsp+8h] [xbp-38h] BYREF
  int32_t size; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5939929 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserEventRandomMissionEntity__get_Count__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_12979/*"SUM_INFO"*/);
    byte_5939929 = 1;
  }
  missionStartedCountBgSprite = (UnityEngine_Object_o *)this->fields.missionStartedCountBgSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      if ( !UnityEngine_Object__op_Equality(missionStartedCountTextLabel, 0, 0) )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
        gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserEventRandomMissionMaster___);
        eventUiEntity = this->fields.eventUiEntity;
        if ( eventUiEntity )
        {
          if ( gameObject )
          {
            UserEventRandomMissionProgressList = UserEventRandomMissionMaster__GetUserEventRandomMissionProgressList(
                                                   (UserEventRandomMissionMaster_o *)gameObject,
                                                   eventUiEntity->fields.eventId,
                                                   0);
            gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventDetailMaster___);
            v11 = this->fields.eventUiEntity;
            if ( v11 )
            {
              if ( gameObject )
              {
                gameObject = (UnityEngine_Component_o *)DataMasterBase_object__object__int___GetEntity(
                                                          (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                                          v11->fields.eventId,
                                                          (const MethodInfo_3EDD388 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
                if ( gameObject )
                {
                  RandomMissionMaxNum = EventDetailEntity__GetRandomMissionMaxNum((EventDetailEntity_o *)gameObject, 0);
                  v14 = this->fields.missionStartedCountTextLabel;
                  v15 = RandomMissionMaxNum ? RandomMissionMaxNum : 10;
                  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
                  gameObject = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_12979/*"SUM_INFO"*/,
                                                            0);
                  if ( UserEventRandomMissionProgressList )
                  {
                    v16 = (System_String_o *)gameObject;
                    size = UserEventRandomMissionProgressList->fields._size;
                    v17 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &size);
                    v19 = v15;
                    v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v19);
                    gameObject = (UnityEngine_Component_o *)System_String__Format_75484576(v16, v17, v18, 0);
                    if ( v14 )
                    {
                      UILabel__set_text(v14, (System_String_o *)gameObject, 0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_28:
        sub_21FFECC(gameObject, v4);
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
  struct System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__o *viewDataList; // x22
  System_Predicate_object__o *v9; // x20
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  UISprite_o *rankSprite; // x20
  System_String_o *monitor; // x21

  if ( (byte_5939926 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
    sub_21FFC50(&System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
    sub_21FFC50(&Method_EventInfoDetectiveRankControl___c__DisplayClass21_0__SetupTitleBg_b__0__);
    sub_21FFC50(&EventInfoDetectiveRankControl___c__DisplayClass21_0_TypeInfo);
    byte_5939926 = 1;
  }
  v5 = sub_21FFEBC(EventInfoDetectiveRankControl___c__DisplayClass21_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  viewDataList = this->fields.viewDataList;
  *(_DWORD *)(v5 + 16) = userRank;
  v9 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
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
          (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( v10 )
  {
    rankSprite = this->fields.rankSprite;
    monitor = (System_String_o *)v10[1].monitor;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11);
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
    sub_21FFECC(titleBgSprite, v7);
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
    sub_21FFECC(this, 0);
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
    sub_21FFECC(_4__this, method);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct EventInfoDetectiveRankControl_o *v12; // x8
  Il2CppObject *callback; // x21
  System_Collections_Generic_List_object__o *v14; // x20
  System_Predicate_object__o *_9__3; // x23
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  Il2CppObject *v22; // x23
  __int64 v23; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v25; // x22
  System_String_o *v26; // x0
  EventInfoDetectiveRankControl___c__DisplayClass26_0_o *v27; // x21
  System_Action_o *_9__4; // x23
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  v2 = this;
  if ( (byte_593992E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__2__);
    sub_21FFC50(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__3__);
    sub_21FFC50(&Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__4__);
    sub_21FFC50(&StringLiteral_5879/*"EVENT_PROGRESS_RANKUP_MESSAGE"*/);
    this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)sub_21FFC50(&StringLiteral_5880/*"EVENT_PROGRESS_RANKUP_TITLE"*/);
    byte_593992E = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  viewDataList = (System_Collections_Generic_List_object__o *)_4__this->fields.viewDataList;
  _9__2 = (System_Predicate_object__o *)v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
    System_Predicate_object____ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__2__,
      0);
    v2->fields.__9__2 = (struct System_Predicate_EventInfoDetectiveRankControl_ViewData__o *)_9__2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v6, v7, v8, v9, v10, v11);
  }
  if ( !viewDataList )
    goto LABEL_19;
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_Collections_Generic_List_object___Find(
                                                                    viewDataList,
                                                                    (System_Predicate_T__o *)_9__2,
                                                                    (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
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
    _9__3 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_EventInfoDetectiveRankControl_ViewData__TypeInfo);
    System_Predicate_object____ctor(
      _9__3,
      (Il2CppObject *)v2,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__3__,
      0);
    v2->fields.__9__3 = (struct System_Predicate_EventInfoDetectiveRankControl_ViewData__o *)_9__3;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v16, v17, v18, v19, v20, v21);
  }
  if ( !v14 )
    goto LABEL_19;
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_Collections_Generic_List_object___Find(
                                                                    v14,
                                                                    (System_Predicate_T__o *)_9__3,
                                                                    (const MethodInfo_4450188 *)Method_System_Collections_Generic_List_EventInfoDetectiveRankControl_ViewData__Find__);
  if ( !this )
    goto LABEL_19;
  v22 = (Il2CppObject *)this->fields.callback;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
  v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5880/*"EVENT_PROGRESS_RANKUP_TITLE"*/, 0);
  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5879/*"EVENT_PROGRESS_RANKUP_MESSAGE"*/, 0);
  this = (EventInfoDetectiveRankControl___c__DisplayClass26_0_o *)System_String__Format_75484576(v26, callback, v22, 0);
  v27 = this;
  _9__4 = v2->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__4,
      (Il2CppObject *)v2,
      Method_EventInfoDetectiveRankControl___c__DisplayClass26_0__PlayAnim_b__4__,
      0);
    v2->fields.__9__4 = _9__4;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v29, v30, v31, v32, v33, v34);
  }
  if ( !Instance )
LABEL_19:
    sub_21FFECC(this, method);
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    v25,
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
    sub_21FFECC(this, n);
  return n->fields.DetectiveRank == _4__this->fields.userRank;
}


bool EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__3(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        EventInfoDetectiveRankControl_ViewData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_21FFECC(this, 0);
  return n->fields.DetectiveRank == this->fields.afterRank;
}


void EventInfoDetectiveRankControl___c__DisplayClass26_0___PlayAnim_b__4(
        EventInfoDetectiveRankControl___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  EventInfoUIProgressControl_o *_4__this; // x0
  int32_t afterRank; // w1

  if ( (byte_593992F & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593992F = 1;
  }
  _4__this = (EventInfoUIProgressControl_o *)this->fields.__4__this;
  if ( !_4__this
    || (afterRank = this->fields.afterRank,
        LODWORD(_4__this[2].monitor) = afterRank,
        EventInfoUIProgressControl__SaveEventProgressValueSaveData(_4__this, afterRank, 0),
        (_4__this = (EventInfoUIProgressControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_21FFECC(_4__this, method);
  }
  CommonUI__CloseNotificationDialog((CommonUI_o *)_4__this, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}